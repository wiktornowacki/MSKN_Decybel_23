clc; close all; clear all;
load("multilayerMap.mat");
[start,stop] = startStopGenerator(map(:,:,1));
path = task_1(map,start,stop);
