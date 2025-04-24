function net = FFNNgenerator(args)
%% Validate input arguments
% arguments
%     args.Ninputs            (1,1) {mustBeInteger, mustBePositive}
%     args.Noutputs           (1,1) {mustBeInteger, mustBePositive}
%     args.Nlayers            (1,1) {mustBeInteger, mustBeNonnegative}
%     args.Nneurons           (1,1) {mustBeInteger, mustBePositive}
%     args.hidden_activation  (1,:) char
%     args.output_activation  (1,:) char
%     args.dropout            (1,1) {mustBeNonnegative, mustBeLessThanOrEqual(args.dropout, 1)}
%     args.WinitFcn           (1,:) char {mustBeMember(args.WinitFcn, {'glorot', 'he', 'narrow-normal'})}
%     args.BinitFcn           (1,:) char {mustBeMember(args.BinitFcn, {'glorot', 'he', 'narrow-normal'})}
%     argsFFNN.batchnorm      (1,1) logical
%     args.train_bias         (1,1) logical
% end

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

if args.train_bias % Train bias
    % Hidden layers
    if args.batchnorm
        hidden_layer = [fullyConnectedLayer(args.Nneurons, 'WeightsInitializer', args.WinitFcn)
                        batchNormalizationLayer
                        actFcn(args.hidden_activation)
                        dropoutLayer(args.dropout)];
    else
        hidden_layer = [fullyConnectedLayer(args.Nneurons, 'WeightsInitializer', args.WinitFcn)
                        actFcn(args.hidden_activation)
                        dropoutLayer(args.dropout)];
    end
    % Output layer
    output_layer = [fullyConnectedLayer(args.Noutputs, 'WeightsInitializer', args.WinitFcn)
                    actFcn(args.output_activation)];
    output_layer(2).Name = args.output_activation;

else % Don't train bias and set to 0
    % Hidden layers
    if args.batchnorm
        hidden_layer = [fullyConnectedLayer(args.Nneurons, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Nneurons, 1))
                        batchNormalizationLayer
                        actFcn(args.hidden_activation)
                        dropoutLayer(args.dropout)];
    else
        hidden_layer = [fullyConnectedLayer(args.Nneurons, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Nneurons, 1))
                        actFcn(args.hidden_activation)
                        dropoutLayer(args.dropout)];
    end
    
    % Output layer
    output_layer = [fullyConnectedLayer(args.Noutputs, 'WeightsInitializer', args.WinitFcn, 'BiasLearnRateFactor', 0, 'Bias', zeros(args.Noutputs, 1))
                    actFcn(args.output_activation)];
    output_layer(2).Name = args.output_activation;
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