function net = FFNNgenerator(args)
%% Neural network generation arguments
%     args.Ninputs            (1,1) {mustBeInteger, mustBePositive}
%     args.Noutputs           (1,1) {mustBeInteger, mustBePositive}
%     args.Nlayers            (1,1) {mustBeInteger, mustBeNonnegative}
%     args.Nneurons           (1,1) {mustBeInteger, mustBePositive}
%     args.HiddenActivation  (1,:) char
%     args.OutputActivation  (1,:) char
%     args.Dropout            (1,1) {mustBeNonnegative, mustBeLessThanOrEqual(args.Dropout, 1)}
%     args.WinitFcn           (1,:) char {mustBeMember(args.WinitFcn, {'glorot', 'he', 'narrow-normal'})}
%     args.BinitFcn           (1,:) char {mustBeMember(args.BinitFcn, {'glorot', 'he', 'narrow-normal'})}
%     args.BatchNorm      (1,1) logical
%     args.TrainBias         (1,1) logical

%% Activation function handler
function layer = actFcn(name)
    switch lower(name)
        case 'relu'
            layer = reluLayer;
        case 'tanh'
            layer = tanhLayer;
        case 'sigmoid'
            layer = sigmoidLayer;
        otherwise
            error("Unknown activation function: '%s'.", name);
    end
end

%% Network blocks

if args.TrainBias % Train bias
    % Hidden layers
    if args.BatchNorm
        hidden_layer = [fullyConnectedLayer(args.Nneurons, 'WeightsInitializer', args.WinitFcn)
                        batchNormalizationLayer
                        actFcn(args.HiddenActivation)
                        dropoutLayer(args.Dropout)];
    else
        hidden_layer = [fullyConnectedLayer(args.Nneurons, 'WeightsInitializer', args.WinitFcn)
                        actFcn(args.HiddenActivation)
                        dropoutLayer(args.Dropout)];
    end
    % Output layer
    output_layer = [fullyConnectedLayer(args.Noutputs, 'WeightsInitializer', args.WinitFcn)
                    actFcn(args.OutputActivation)];
    output_layer(2).Name = args.OutputActivation;

else % Don't train bias and set to 0
    % Hidden layers
    if args.BatchNorm
        hidden_layer = [fullyConnectedLayer(args.Nneurons, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Nneurons, 1))
                        batchNormalizationLayer
                        actFcn(args.HiddenActivation)
                        dropoutLayer(args.Dropout)];
    else
        hidden_layer = [fullyConnectedLayer(args.Nneurons, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Nneurons, 1))
                        actFcn(args.HiddenActivation)
                        dropoutLayer(args.Dropout)];
    end
    
    % Output layer
    output_layer = [fullyConnectedLayer(args.Noutputs, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Noutputs, 1))
                    actFcn(args.OutputActivation)];
    output_layer(2).Name = args.OutputActivation;
end

% Repeat the hidden layer Nlayers times
hidden_layers = repmat(hidden_layer, args.Nlayers, 1);

%% Create the neural network
layers = [featureInputLayer(args.Ninputs)
          hidden_layers
          output_layer];
net = dlnetwork(layers);
net = dlupdate(@double, net);
end