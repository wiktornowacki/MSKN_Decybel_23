close all; clear;
%% obróbka danych
data = load("Task_2_Training_Dataset.mat");

WEKTOR_poj = [data.Task_2_Training_Data.BoundingBox];
WEKTOR_gotowy = [];

for x=1:length(WEKTOR_poj)/4
    WEKTOR_gotowy = [WEKTOR_gotowy; {[WEKTOR_poj(x), WEKTOR_poj(x+1), WEKTOR_poj(x+2), WEKTOR_poj(x+3)]}];
end

tabela = struct2table(data.Task_2_Training_Data);
tabela(:,2) = [];
tabela.BoundingBox = WEKTOR_gotowy;

idx = height(WEKTOR_gotowy);
training_idx = 1:floor(0.6*idx);
test_idx = floor(0.8*idx)+1:idx;
valid_idx = floor(0.6*idx)+1:floor(0.8*idx);

training_data = (tabela(training_idx,:));
test_data = (tabela(test_idx,:));
valid_data = (tabela(valid_idx,:));

img_train = imageDatastore(training_data{:,"Image"});
labels_train = boxLabelDatastore(training_data(:,"BoundingBox"));

img_test = imageDatastore(test_data{:,"Image"});
labels_test = boxLabelDatastore(test_data(:,"BoundingBox"));

img_valid = imageDatastore(valid_data{:,"Image"});
labels_valid = boxLabelDatastore(valid_data(:,"BoundingBox"));

training_data = combine(img_train,labels_train);
test_data = combine(img_test,labels_test);
valid_data = combine(img_valid,labels_valid);

%% wizualizacja przykład
data = read(training_data);
I = data{1};
bbox = data{2};
annotatedImage = insertShape(I,"Rectangle",bbox);
annotatedImage = imresize(annotatedImage,2);
figure
imshow(I);

%% YOLO
% inputSize = [608 608 3];
% className = "BoundingBox";
% 
% rng("default")
% trainingDataForEstimation = transform(training_data,@(data)preprocessData(data,inputSize));
% numAnchors = 9;
% [anchors,meanIoU] = estimateAnchorBoxes(trainingDataForEstimation,numAnchors);
% 
% 
% area = anchors(:, 1).*anchors(:,2);
% [~,idx] = sort(area,"descend");
% 
% anchors = anchors(idx,:);
% anchorBoxes = {anchors(1:3,:)
%     anchors(4:6,:)
%     anchors(7:9,:)
%     };
% 
% options = trainingOptions("adam",...
%     GradientDecayFactor=0.9,...
%     SquaredGradientDecayFactor=0.999,...
%     InitialLearnRate=0.01,...
%     LearnRateSchedule="none",...
%     MiniBatchSize=16,...
%     L2Regularization=0.0005,...
%     MaxEpochs=1,...
%     BatchNormalizationStatistics="moving",...
%     DispatchInBackground=true,...
%     ResetInputNormalization=false,...
%     Shuffle="every-epoch",...
%     VerboseFrequency=20,...
%     ValidationFrequency=5000,...
%     CheckpointPath=tempdir,...
%     ValidationData=valid_data);
% 
% detector = yolov4ObjectDetector("csp-darknet53-coco",className,anchorBoxes,InputSize=inputSize);
% %detector = downloadPretrainedYOLOv4Detector();
% [detector,info] = trainYOLOv4ObjectDetector(trainingDataForEstimation,detector,options);
% 
% [bboxes,scores,labels] = detect(detector,I);
% 
% I2 = insertObjectAnnotation(I,"rectangle",bboxes,scores);
% figure
% imshow(I2)
