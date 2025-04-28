function [loss, gradients, state] = FFNNLoss(net, X, Y, TrainValidation, HuberThreshold, ErrorWeights)
%% Loss arguments
% net             dlnetwork
% X               dlarray
% Y               dlarray
% TrainValidation string
% HuberThreshold  float [0, 1]
% ErrorWeights    dlarray > 0

%% Make predictions
if strcmp(TrainValidation, 'train')
    [Y_pred, state] = forward(net, X);
elseif strcmp(TrainValidation, 'validation')
    Y_pred = predict(net, X);
    state = net.State;
end

%% Error weighting
Error = abs(Y_pred - Y);
Error = Error .* ErrorWeights;

%% Huber Loss
loss = zeros(size(Error), 'like', Error);
mask = Error <= HuberThreshold;
loss(mask) = 0.5 * Error(mask).^2;
loss(~mask) = HuberThreshold * (Error(~mask) - 0.5 * HuberThreshold);
loss = mean(loss, 'all');
gradients = dlgradient(loss, net.Learnables);
end