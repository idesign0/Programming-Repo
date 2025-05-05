clear all;
clc;

% Data Extraction
%load Train and Test data
trainDataRaw = readtable("Speed data-20240901/26.08.2023.csv");
testDataRaw = readtable("Speed data-20240901/27.08.2023.csv");

% Preprocessing

% Define the sampling rate (assuming 1 Hz if data is collected every second)
samplingRate = 1; % Samples per second

% Define cutoff frequency (adjust this to control the level of smoothing)
cutoffFrequency = 0.08; % Example value, tune based on the noise characteristics

% Design a Butterworth low-pass filter
[b, a] = butter(2, cutoffFrequency / (samplingRate / 2)); 

% Apply the low-pass filter to the speed data
trainData = filtfilt(b, a, trainDataRaw.Speed);
% Apply the low-pass filter to the test speed data
testData = filtfilt(b, a, testDataRaw.Speed);

% Clip negative values to zero
trainData(trainData < 0) = 0;
testData(testData < 0) = 0;

% % Noise elimination and smoothing
% % Wavelet Denoising with Higher Level
% trainData = wdenoise(trainDataRaw.Speed, 3, 'Wavelet', 'db4'); % Higher level decomposition 3, db4
% testData = wdenoise(testDataRaw.Speed, 3, 'Wavelet', 'db4');
% 
% % Apply Savitzky-Golay filter
% trainData = sgolayfilt(trainData, 2, 11); % Polynomial order 2, frame size 2,11
% testData = sgolayfilt(testData, 2, 11);
% 
% % Apply Exponential Moving Average with smoothing factor
% alpha = 0.2; % Smoothing factor between 0 and 1 0.2
% trainData = filter(alpha, [1 -(1-alpha)], trainData, trainData(1)*(1-alpha));
% testData = filter(alpha, [1 -(1-alpha)], testData, testData(1)*(1-alpha));


% Plot the original train data
figure;
plot(trainDataRaw.Speed, 'o', 'MarkerSize', 2, 'MarkerFaceColor', 'b'); % Original data points (blue)
hold on;
plot(trainData, '-', 'MarkerSize', 8, 'MarkerFaceColor', 'r'); % Original data points (blue)
legend('Original Data', 'Filtered Data');
title('Low Pass Filtered Traffic - Train Data');
hold off;

% Plot the original Test data
figure;
plot(testDataRaw.Speed, 'o', 'MarkerSize', 2, 'MarkerFaceColor', 'b'); % Original data points (blue)
hold on;
plot(testData, '-', 'MarkerSize', 8, 'MarkerFaceColor', 'r'); % Original data points (blue)
legend('Original Data', 'Filtered Data');
title('Low Pass Filtered Traffic - Test Data');
hold off;


% Normalised the Speed data
trainData = normalize(trainData);
testData = normalize(testData);
%%
% Generate Feature and  Labels using 5 sec sliding window.
window_size = 5; % 5 sec past data for features

Xtrain_full = [];
Ytrain_full = [];

for i = 1:(height(trainData) - window_size)
    Xtrain_full = [Xtrain_full; trainData(i:i+window_size-1)'];
    Ytrain_full = [Ytrain_full; trainData(i+window_size)];
end

XTest_full = [];
YTest_full = [];
Yraw = [];
rawnormlspeed = normalize(testDataRaw.Speed);
for i = 1:(height(testData) - window_size)
    XTest_full = [XTest_full; testData(i:i+window_size-1)'];
    YTest_full = [YTest_full; testData(i+window_size)];
    Yraw = [Yraw; rawnormlspeed(i+window_size)];
end

% Train - Validation Split
num_train = floor(0.8 * size(Xtrain_full, 1));
X_train = Xtrain_full(1:num_train, :);
y_train = Ytrain_full(1:num_train, :);
X_val = Xtrain_full(num_train+1:end, :);
y_val = Ytrain_full(num_train+1:end, :);

%%
% Model Training

% Linear Regression
    linear_model = fitrlinear(X_train, y_train, 'Learner', 'leastsquares', 'Regularization', 'ridge');
    % linear_model = fitlm(X_train, y_train);
    % Calculate training and validation loss
    train_loss_lr = mean(abs(y_train - predict(linear_model, X_train)));
    val_loss_lr = mean(abs(y_val - predict(linear_model, X_val)));
    
    % Evaluate Linear Regression on the test set
    test_loss_lr_mae = mean(abs(YTest_full - predict(linear_model, XTest_full)));
    
    % Display the results
    fprintf('Linear Regression - Training Loss: %.4f, Validation Loss: %.4f , Test Loss MAE: %.4f\n', train_loss_lr, val_loss_lr,test_loss_lr_mae);


    % Plot the original test data
    figure;
    hold on;
    
    % Plot the original raw data
    plot(num_train+1:num_train+length(Yraw), Yraw, 'o', 'MarkerSize', 2, 'MarkerFaceColor', 'b'); % Original data points (blue)
    
    % Plot the original test data
    plot(num_train+1:num_train+length(YTest_full), YTest_full, 'o', 'MarkerSize', 2, 'MarkerFaceColor', 'y'); % Original data points (blue)
    
    % Plot the linear regression predictions
    plot(num_train+1:num_train+length(YTest_full), predict(linear_model, XTest_full), 'r-', 'LineWidth', 1); % Predicted values (red line)
    legend('Original Data', 'Filtered Data', 'Model');
    title('Linear Model Outcome');
    hold off;

%%
    % Define Cross-Validation Partition for lr
    K = 5;
    cv = cvpartition(length(y_train), 'KFold', K);
    
    % Initialize cell arrays to store predictions for each fold
    linear_preds = cell(K, 1); % Linear regression predictions
    
    % Linear Regression with Cross-Validation
    linear_mae = zeros(K, 1);
    for i = 1:K
        trainIdx = cv.training(i);
        testIdx = cv.test(i);
        
        X_train_cv = X_train(trainIdx, :);
        y_train_cv = y_train(trainIdx);
        X_val_cv = X_train(testIdx, :);
        y_val_cv = y_train(testIdx);
        
        % Train the model
        linear_model_cv = fitrlinear(X_train_cv, y_train_cv, 'Learner', 'leastsquares', 'Regularization', 'ridge');
        % Evaluate on validation set
        y_pred_val = predict(linear_model_cv, X_val_cv);
    
        % Store predictions and calculate MSE
        linear_preds{i} = y_pred_val; % Store predictions for this fold
        linear_mae(i) = mean(abs(y_val_cv - y_pred_val));
    end
    average_mae_lr = mean(linear_mae);
    fprintf('Linear Regression - Average Cross-Validation MAE: %.4f\n', average_mae_lr);
    
    % for i = 1:K
    %     % Plot Linear Regression Cross-Validation Results
    %     figure;
    %     hold on;
    %     plot(Ytrain_full(cv.test(i)), 'o', 'MarkerSize', 8, 'MarkerFaceColor', 'b'); % Actual data points
    %     plot(linear_preds{i}, 'r-', 'LineWidth', 2); % Predicted values for each fold
    %     hold off;
    % end

%%
% Neural Network
% Define Network Architecture
    inputSize = size(X_train, 2); % Number of features
    numHiddenUnits = 25;
    numClasses = 1;
    layers = [ ...
        sequenceInputLayer(inputSize)
        lstmLayer(numHiddenUnits, 'OutputMode', 'sequence')
        dropoutLayer(0.3)
        fullyConnectedLayer(numClasses)
        regressionLayer];
    
    % Define Training Options
    options = trainingOptions('adam', ...
        'InitialLearnRate', 0.02, ...
        'L2Regularization', 0.0001, ... 
        'MaxEpochs', 100, ...
        'MiniBatchSize', 20, ...
        'Shuffle', 'every-epoch', ...
        'Plots', 'none', ...
        'ValidationFrequency', 20, ...
        'Verbose', false, ...
        'LearnRateSchedule', 'piecewise', ...
        'LearnRateDropFactor', 0.9, ...
        'LearnRateDropPeriod', 10,...
        'ValidationPatience', 20);

net = trainNetwork(X_train', y_train', layers, options);
y_pred_test_nn = predict(net, XTest_full');
test_loss_nn_mae = mean(abs(YTest_full - y_pred_test_nn'));

% Final Model Evaluation on Test Set
fprintf('Final NN Regression - Test Loss - MAE: %.4f\n', test_loss_nn_mae);

% % Define and configure neural network with Cross-val
nn_mse = zeros(K, 1);
nn_mae = zeros(K, 1);
for i = 1:K
    trainIdx = cv.training(i);
    testIdx = cv.test(i);
    
    X_train_cv = X_train(trainIdx, :)';
    y_train_cv = y_train(trainIdx)';
    X_val_cv = X_train(testIdx, :)';
    y_val_cv = y_train(testIdx)';
    
    net_cv = trainNetwork(X_train_cv, y_train_cv, layers, options);

    % Evaluate on validation set
    y_pred_val = predict(net_cv, X_val_cv);
    nn_mae(i) = mean(abs(y_val_cv - y_pred_val));
end

average_mae_nn = mean(nn_mae);
fprintf('NN Regression - Average Cross-Validation MAE: %.4f\n', average_mae_nn);

% Plot the original raw data
figure;
hold on;
plot(num_train+1:num_train+length(Yraw), Yraw, 'o', 'MarkerSize', 2, 'MarkerFaceColor', 'b'); % Original data points (blue)

% Plot the original test data
plot(num_train+1:num_train+length(YTest_full), YTest_full, 'o', 'MarkerSize', 2, 'MarkerFaceColor', 'y'); % Original data points (blue)

% Plot the linear regression predictions
plot(num_train+1:num_train+length(YTest_full), predict(net, XTest_full'), 'r-', 'LineWidth', 1); % Predicted values (red line)
legend('Original Test Data', 'Filtered Test Data', 'Model');
title('Neural Network Outcome');
hold off;