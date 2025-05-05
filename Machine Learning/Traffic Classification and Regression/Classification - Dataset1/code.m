clear all;
clc;

% File Listing and Initialization
sheets = sheetnames("Traffic_Data.xlsx");
opt = detectImportOptions("Traffic_Data.xlsx");

% Datta merging
featureData = [];
for i=1:numel(sheets)-1
    featureData = [featureData;readtable("Traffic_Data.xlsx",opt,'Sheet',sheets(i))];
end

% Features and Labels
featureData.Properties.VariableNames=["Feature" "Label"];
X = featureData{:,1:width(featureData)-1};
Y = categorical(featureData.Label);

%%
% Train-Test Split
cv = cvpartition(featureData.Label,"HoldOut",0.8);

X_train = X(training(cv), :);
y_train = Y(training(cv));
X_test = X(test(cv), :);
y_test = Y(test(cv));

classifiersNames = ["Decision Tree";"K-Nearest Neighbors";"Naive Bayes";"Support Vector Machine"];

% Define a list of classifiers to test
classifiers = {
    @(X_train, y_train) fitctree(X_train, y_train), ...       % Decision Tree
    @(X_train, y_train) fitcknn(X_train, y_train), ...        % k-Nearest Neighbors
    @(X_train, y_train) fitcnb(X_train, y_train), ...         % Naive Bayes
    @(X_train, y_train) fitcecoc(X_train, y_train), ...        % Support Vector Machine
};

% Initialize different scoring arrays to store results
accuracyResults = zeros(length(classifiers), 1);
precisionResults = zeros(length(classifiers),4);
recallResults = zeros(length(classifiers), 4);
f1ScoreResults = zeros(length(classifiers), 4);
confusionMat = {};

% Machine learning and Model Training

% Loop through each classifier
for i = 1:length(classifiers)
   
    % Train and Prediction
    model = classifiers{i}(X_train, y_train);
    predictions = predict(model, X_test);
    
    % Calculate Accuracy
    accuracy = sum(predictions == y_test) / length(y_test);
    accuracyResults(i) = accuracy;
    
    % Calculate Precision, Recall, and F1 Score
    [C, order] = confusionmat(y_test, predictions);
    precision = diag(C) ./ sum(C, 2);
    recall = diag(C) ./ sum(C, 1)';
    f1Score = 2 * (precision .* recall) ./ (precision + recall);

    precisionResults(i,1:4) =  precision';
    recallResults(i,1:4) = recall';
    f1ScoreResults(i,1:4) = f1Score';
    confusionMat{i,1} = C;

end
    
%%
% Display Scoring Matrices
disp('Classifier Comparison Results:');

disp(table(classifiersNames, accuracyResults, ...
     'VariableNames', {'ClassifierID', 'Accuracy'}));

disp(table(classifiersNames, precisionResults, ...
     'VariableNames', {'ClassifierID', 'Precision (For each Label)'}));

disp(table(classifiersNames, recallResults, ...
     'VariableNames', {'ClassifierID', 'Recall (For each Label)'}));

disp(table(classifiersNames, f1ScoreResults, ...
     'VariableNames', {'ClassifierID', 'F1 Score (For each Label)'}));

disp(table(confusionMat{1}, ...
     'VariableNames', "Confusion Matrix - Decision Tree"));

disp(table(confusionMat{2}, ...
     'VariableNames', "Confusion Matrix - k-Nearest Neighbors"));

disp(table(confusionMat{3}, ...
     'VariableNames', "Confusion Matrix - Naive Bayes"));

disp(table(confusionMat{4}, ...
     'VariableNames', "Confusion Matrix - Support Vector Machine"));

%% 
% Debug Code for feature Analyses

label = ["Stopped/Signal/Starting" ;"Heavy Traffic"; "Light Traffic"; "Free Flow"];
numlabel = [1;2;3;4];
featureName = {'Mean', 'Variance', 'Median', 'Min', 'Max'};
dataFeature =[];
featureSet =[];

% Feature extraction
% iteration per Day
% data extraction for specific label/class
for i = 1:numel(label)
    
    temp =[];
    
    for m = 1:size(featureData,1)
        if strcmp(char(label(i)),char(featureData{m,2}))
            temp = [temp; featureData{m,1}];
        end
    end
    
    % Features
    meanClasses = mean(temp);
    varClasses = var(temp);
    medianClasses = median(temp);
    minvelClasses = min(temp);
    maxvelClasses = max(temp);

    featureSet = [meanClasses,varClasses,medianClasses,minvelClasses,maxvelClasses];
    dataFeature = [dataFeature;featureSet,numlabel(i)];
end
    dataFeature = array2table(dataFeature,"VariableNames",[featureName 'Label']);

disp('Feature analysis:');
disp(dataFeature);