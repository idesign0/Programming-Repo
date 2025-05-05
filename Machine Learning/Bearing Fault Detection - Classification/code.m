% Load the Excel table
readTable = readtable('Test_table_48k.xlsx');
Labels = {'Normal', 'IR007', 'IR014', 'IR021', 'B007', 'B014', 'B021', 'OR007@6', 'OR014@6','OR021@6','OR007@3','OR021@3','OR007@12','OR021@12'};
numericLabels = grp2idx(Labels);

dataLabels = [];
dataTable_DE = [];
dataTable_FE = [];

% Initialize empty arrays to store features and labels
allFeatures_DE = [];
allFeatures_FE = [];
allFeature_row=[];
allFeature_column=[];

%%
for row = 1:size(readTable, 1)
    Data=[];
     % Extract file names and other relevant information from the table
    File = {readTable.Normal{row}, readTable.IR{row},readTable.BB{row},readTable.ORCentered{row},readTable.OROrthogonal{row},readTable.OROpposite{row}};
    
    
    for i=1:(length(File))
        if char(File(i)) ~= '*'
            Data{i} = load(fullfile(pwd, char(File(i))));
            index = find(ismember(Labels,extractBefore(char(File(i)),'_')));
            dataLabels{row,i} = numericLabels(index);
        else
            Data{i} = [];
            dataLabels{row,i} = '';
        end
    end

    % Define the substrings to search for in field names
    substrings = {'DE_time', 'FE_time'};
   
    % Iterate through each struct data
    for s = 1:length(Data)
        % Get the field names in the current struct
        if ~isempty(Data{s})
            fields = fieldnames(Data{s});
        else
            continue;
        end
        
        % Iterate through substrings to search for
        for substringIdx = 1:length(substrings)
            % Get the current substring
            substring = substrings{substringIdx};
            % Iterate through field namesq
            for fieldIdx = 1:length(fields)
                % Get the current field name
                fieldName = fields{fieldIdx};
                % Check if the field name contains the substring
                if contains(fieldName, substring)
                    if strcmp(substring,'DE_time')
                        % Access the field and perform feature extraction (modify this as needed)
                        dataTable_DE{row,s} = Data{s}.(fieldName);
                        break;
                    end
                    if strcmp(substring,'FE_time')
                        dataTable_FE{row,s} = Data{s}.(fieldName);
                        break;
                    end
                end
            end
        end
    end
end

dataTable_DE = [dataTable_DE;dataTable_FE]
dataLabels = [dataLabels;dataLabels]
%%
% Loop through each row in the table
for column = 1:size(dataTable_DE, 2)
    for row = 1:size(dataTable_DE, 1)

            data = dataTable_DE{row,column};
           
            if ~isempty(data)
                % Example feature extraction: Calculate the mean and standard deviation
                meanValue_DE = mean(data);
                medValue_DE = median(data);
                stdValue_DE = std(data);
                skewValue_DE = skewness(data);
                kurtosisValues_DE = kurtosis(data);
                
                
                % Calculate RMS, crest factor, kurtosis, etc., for each column
                rms_values = rms(data);
                crest_factor_values = max(data) ./ rms_values;
                
                % Combine these features into one matrixallFeatures_DE (each row represents a feature)
                time_domain_features = {rms_values,crest_factor_values};
                
                % Perform FFT on each column of data
                fs=48000;
                fft_data = fft(data);
                
                % Frequency axis
                f = linspace(0, fs/2, length(fft_data));

                % Compute dominant frequency (index of the maximum magnitude) for each column
                [dominant_amplitude, dominant_freq_indices] = max(abs(fft_data));
                dominant_frequencies = dominant_freq_indices / size(data, 1); % Assuming uniform time spacing
                
                % Compute Peak Frequency (frequency with the maximum amplitude)
                [peak_amplitude, peak_index] = max(fft_data);
                peak_frequency = f(peak_index);
               

                % Compute Spectral Power within a specific frequency range
                % Define your frequency range of interest (e.g., 10-50 Hz)
                start_freq = 10;  % Define your specific start frequency
                end_freq = 50;    % Define your specific end frequency
                % Find the indices corresponding to the specified frequency range
                start_index = find(f >= start_freq, 1);
                end_index = find(f <= end_freq, 1, 'last');
                % Compute the spectral power within the specified range
               % spectral_power = abs(fft_data(start_index:end_index)).^2;

                % Compute spectral entropy for each column
                spectral_entropy_values = -sum(abs(fft_data) .* log(abs(fft_data)), 1);
                
                % % Display the computed features
                % fprintf('Dominant Frequency: %.2f Hz\n', dominant_frequencies);
                % fprintf('Peak Frequency: %.2f Hz\n', peak_frequency);
                % fprintf('Spectral Power in %.2f-%.2f Hz Range: %.2f\n', start_freq, end_freq, spectral_power);
                % 
                % % Plot the FFT result and highlight the computed frequencies
                % figure;
                % plot(f, fft_data);
                % title('Frequency Spectrum');
                % xlabel('Frequency (Hz)');
                % ylabel('Amplitude');
                % hold on;
                % % Highlight Dominant Frequency
                % plot(dominant_frequencies, dominant_amplitude, 'ro', 'MarkerSize', 10, 'LineWidth', 2);
                % text(dominant_frequencies, dominant_amplitude, sprintf('%.2f Hz', dominant_frequencies), 'VerticalAlignment', 'bottom');
                % % Highlight Peak Frequency
                % plot(peak_frequency, peak_amplitude, 'go', 'MarkerSize', 10, 'LineWidth', 2);
                % text(peak_frequency, peak_amplitude, sprintf('%.2f Hz', peak_frequency), 'VerticalAlignment', 'bottom');
                % legend('Frequency Spectrum', 'Dominant Frequency', 'Peak Frequency');

                Label = dataLabels{row,column};

                all_FEA = [meanValue_DE,medValue_DE,stdValue_DE,skewValue_DE,kurtosisValues_DE,rms_values,crest_factor_values,dominant_frequencies,dominant_amplitude,peak_frequency,spectral_entropy_values,Label];

                %Labels
                
                allFeature_row{row + (12*column-12)} = [char(readTable.HorsePower{row}),'-',char(Labels(Label))];
                % Drive and Fan field features
                allFeatures_DE(row + (12*column-12),1:length(all_FEA)) = all_FEA;
            else
                allFeature_row{row + (12*column-12)} = [char(readTable.HorsePower{row}),'-',char(Labels(Label))];
                allFeatures_DE(row + (12*column-12),1:length(all_FEA)) = NaN;
            end
    end
end

%%

allFeature_column = {'Mean','Median','Std','Skew','Kurtosis','RMS','Crest_factor','Dominant_Frequency','dominant_amplitude','peak_Frequency','Spectral Entropy','Label'};
allFeature_row = allFeature_row';
allFeatures_DE = array2table(allFeatures_DE,'VariableNames',allFeature_column,'RowNames',allFeature_row);

toDelete = ~(allFeatures_DE.Label > 0);
allFeatures_DE(toDelete,:) = [];
allFeatures_FE(toDelete,:) = [];

for column = 1:size(allFeatures_DE, 2)
    for row = 1:size(allFeatures_DE,1)
        if isnan(allFeatures_DE{row,column})
            allFeatures_DE{row,column}=0;
        end
        if isnan(allFeatures_FE{row,column})
            allFeatures_FE{row,column}=0;
        end
    end
end

for column = 1:(size(allFeatures_DE, 2)-1)
    allFeatures_DE{:,column} = normalize(allFeatures_DE{:,column},"zscore");
    allFeatures_FE{:,column} = normalize(allFeatures_FE{:,column},"zscore");
end

%%

allFeature_label_DE = allFeatures_DE.Label;
allFeature_label_FE = allFeatures_FE.Label;

allFeatures_DE.Label = [];
allFeatures_FE.Label = [];

% Perform PCA on the training data
[coeff, score, latent, ~, explained_DE] = pca(allFeatures_DE{:,1:end});
[coeff, score, latent, ~, explained_FE] = pca(allFeatures_FE{:,1:end});

% Assuming you have the eigenvalues of the covariance matrix in 'explained'
figure;
bar(explained_DE);
title('Variance Explained by Principal Components DE');
hold on;
plot(1:length(explained_DE), explained_DE, 'ro-');
hold off;
xlabel('Principal Component');
ylabel('Explained Variance (%)');

figure;
bar(explained_FE);
title('Variance Explained by Principal Components FE');
hold on;
plot(1:length(explained_FE), explained_FE, 'ro-');
hold off;
xlabel('Principal Component');
ylabel('Explained Variance (%)');
% Determine the Number of Principal Components

explained_threshold_DE = 90;

cumulative_explained_DE = cumsum(explained_DE);
num_components_DE = find(cumulative_explained_DE >= explained_threshold_DE, 1);

explained_threshold_FE = 80;

cumulative_explained_FE = cumsum(explained_FE);
num_components_FE = find(cumulative_explained_FE >= explained_threshold_FE, 1);

% Select the Top Principal Components
top_components_DE = coeff(:, 1:num_components_DE);
allFeatures_DE = allFeatures_DE{:,1:end} * top_components_DE;

% Select the Top Principal Components
top_components_FE = coeff(:, 1:num_components_FE);
allFeatures_FE = allFeatures_FE{:,1:end} * top_components_FE;

rng(42)
 cv = cvpartition(allFeature_label_DE,'HoldOut',0.25);
 X_train_DE = allFeatures_DE(cv.training,:);
 Y_train_DE = allFeature_label_DE(cv.training);
 X_test_DE = allFeatures_DE(cv.test,:);
 Y_test_DE = allFeature_label_DE(cv.test);

 X_train_FE = allFeatures_FE(cv.training,:);
 Y_train_FE = allFeature_label_FE(cv.training);
 X_test_FE = allFeatures_FE(cv.test,:);
 Y_test_FE = allFeature_label_FE(cv.test);

%%
%Drive end
% Train SVM model 
svmTemplate = templateSVM('KernelFunction', 'linear'); % Replace 'linear' with your desired kernel function

SVMModel_DE = fitcecoc(X_train_DE, Y_train_DE,'Learners',svmTemplate);

y_pred_svm_DE = predict(SVMModel_DE,X_test_DE);

% Compare predicted labels (YPred) to true labels (YTest)
correctPredictions_svm_DE = (y_pred_svm_DE == Y_test_DE);

% Calculate accuracy
accuracy_svm_DE = sum(correctPredictions_svm_DE) / numel(Y_test_DE);


% Confusion CHart
Labels_true_DE = Labels(Y_test_DE);
Labels_pred_DE = Labels(y_pred_svm_DE);


figure;
c1 = confusionchart(Labels_true_DE,Labels_pred_DE);

% Customize the confusion chart appearance
c1.Title = '48k Drive End Confusion Chart'; % Set the chart titleper
c1.Normalization = 'total-normalized';
c1.RowSummary = 'total-normalized'; % Normalize each row
c1.ColumnSummary = 'total-normalized'; % Normalize each column
sortClasses(c1,'descending-diagonal')
c1.DiagonalColor =  "#0072BD";
c1.OffDiagonalColor = "#D95319";
c1.FontSize = 10;
c1.XLabel = 'Predicted Class';
c1.YLabel = 'True Class';
c1.FontSize = 12;
saveas(gcf, '48k Drive End Confusion Chart.png');
% Display the accuracy
fprintf('Accuracy_svm_DE: %.2f%%\n', accuracy_svm_DE * 100);


%Fan End
% Train SVM model 
svmTemplate = templateSVM('KernelFunction', 'linear'); % Replace 'linear' with your desired kernel function

SVMModel_FE = fitcecoc(X_train_FE, Y_train_FE,'Learners',svmTemplate);

y_pred_svm_FE = predict(SVMModel_FE,X_test_FE);

% Compare predicted labels (YPred) to true labels (YTest)
correctPredictions_svm_FE = (y_pred_svm_FE == Y_test_FE);

% Calculate accuracy
accuracy_svm_FE = sum(correctPredictions_svm_FE) / numel(Y_test_FE);


% Confusion CHart
Labels_true_FE = Labels(Y_test_FE);
Labels_pred_FE = Labels(y_pred_svm_FE);


figure;
c2 = confusionchart(Labels_true_FE,Labels_pred_FE);

% Customize the confusion chart appearance
c2.Title = '48k Fan End Confusion Chart'; % Set the chart titleper
c2.Normalization = 'total-normalized';
c2.RowSummary = 'total-normalized'; % Normalize each row
c2.ColumnSummary = 'total-normalized'; % Normalize each column
sortClasses(c2,'descending-diagonal')
c2.DiagonalColor =  "#0072BD";
c2.OffDiagonalColor = "#D95319";
c2.FontSize = 10;
c2.XLabel = 'Predicted Class';
c2.YLabel = 'True Class';
c2.FontSize = 12;
saveas(gcf, '48k Fan End Confusion Chart.png');
% Display the accuracy
fprintf('Accuracy_svm_FE: %.2f%%\n', accuracy_svm_FE * 100);


%%
% % Load and preprocess your dataset (not shown here)
% 
% cv = cvpartition(allFeature_label_DE,'HoldOut',0.6);
% X_train = allFeatures_DE(cv.training,:);
% Y_train = allFeature_label_DE(cv.training);
% X_test = allFeatures_DE(cv.test,:);
% Y_test = allFeature_label_DE(cv.test);
% 
% % Reshape the data into a 4D array
% height = 1;
% width = 1;
% channels = size(X_test,2);
% classes = max(allFeature_label_DE);
% samples_train = size(X_train, 1);
% samples_test = size(X_test, 1);
% 
% % Reshape data into 4D tensor: (samples, height, width, channels)
% X_train = reshape(X_train, [height, width,channels, samples_train]);
% X_test = reshape(X_test, [height, width,channels, samples_test]);
% 
% % Define the CNN architecture
% layers = [
%     imageInputLayer([1, 1, channels]) 
%     convolution2dLayer(100, 16, 'Padding','same')
%     reluLayer
%     maxPooling2dLayer(1, 'Stride', 2)
%     convolution2dLayer(10, 64, 'Padding', 'same')
%     reluLayer
%     fullyConnectedLayer(128)
%     reluLayer
%     fullyConnectedLayer(classes) % Output layer with 10 classes (digits 0-9)
%     softmaxLayer
%     classificationLayer
% ];
% 
% % Specify training options
% options = trainingOptions('sgdm', ...
%     'MaxEpochs', 10000, ...
%     'MiniBatchSize', 50, ...
%     'InitialLearnRate', 0.001, ...
%     'ValidationData',{X_test,categorical(Y_test)},...
%     'Plots', 'training-progress');
% 
% net = trainNetwork(X_train,categorical(Y_train),layers,options);
% 
% % Evaluate the model on test data
% Ypred = classify(net, X_test);
% Y_test = categorical(Y_test);
% accuracy = sum(Ypred == Y_test) / numel(Y_test);

% Create a figure for the box plots
%figure('units','normalized','outerposition',[0 0 1 1]);

% Loop through each row in the cell array and create a box plot
% for row = 1:size(dataTable_DE,2)
%     dataset = dataTable_DE(:,row);
%     sgtitle(cellstr(dataTable_DE.Properties.VariableNames(row)))
%     for col = 1:numel(dataset)
%         position = col;
%         nested = subplot(1,12,position);
%         boxplot(nested,cell2mat(dataset{col,1}));  % Create a box plot for the current row's data
%           % Add a title to identify the row
%           title(nested,dataTable_DE.Row(col));
%     end 
%         pdfFileName = cell2mat(strcat('subplot_',cellstr(dataTable_DE.Properties.VariableNames(row)),'_DE.png'));
%         saveas(gcf,pdfFileName,'png');
% end
% 
% % Loop through each row in the cell array and create a box plot
% for row = 1:size(dataTable_FE,2)
%     dataset = dataTable_FE(:,row);
%     sgtitle(cellstr(dataTable_FE.Properties.VariableNames(row)))
%     for col = 1:numel(dataset)
%         position = col;
%         nested = subplot(1,12,position);
%         boxplot(nested,cell2mat(dataset{col,1}));  % Create a box plot for the current row's data
%           % Add a title to identify the row
%           title(nested,dataTable_FE.Row(col));
%     end 
%         pdfFileName = cell2mat(strcat('subplot_',cellstr(dataTable_FE.Properties.VariableNames(row)),'_FE.png'));
%         saveas(gcf,pdfFileName,'png');
% end
