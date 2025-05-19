function net = FFNNgenerator(args)
%% Neural network generation arguments
% Ninputs          % int > 0
% Noutputs         % int > 0
% Nlayers          % int > 0
% Nneurons         % int > 0
% HiddenActivation % string
% OutputActivation % string
% Dropout          % float [0, 1[
% WinitFcn         % string
% BinitFcn         % string
% BatchNorm        % bool
% TrainBias        % bool

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
    % output_layer = [fullyConnectedLayer(args.Noutputs, 'WeightsInitializer', args.WinitFcn)
    %                 actFcn(args.OutputActivation)];
    % output_layer(2).Name = args.OutputActivation;
    output_layer = [fullyConnectedLayer(args.Noutputs, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Noutputs, 1))];
    output_layer(1).Name = args.OutputActivation;

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
    % output_layer = [fullyConnectedLayer(args.Noutputs, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Noutputs, 1))
    %                 actFcn(args.OutputActivation)];
    % output_layer(2).Name = args.OutputActivation;
    output_layer = [fullyConnectedLayer(args.Noutputs, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Noutputs, 1))];
    output_layer(1).Name = args.OutputActivation;
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