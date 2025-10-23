function net = FFNNgenerator(args)
%% Feedforward Neural network generation arguments
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

% Activation function
function layer = actFcn(name)
    switch lower(name)
        case 'relu',    layer = reluLayer;
        case 'tanh',    layer = tanhLayer;
        case 'sigmoid', layer = sigmoidLayer;
        case 'linear',  layer = [];  % Without activation
        otherwise, error("Unknown activation function: '%s'.", name);
    end
end

% Base fully connected layer
if args.TrainBias % Train bias, intizalize as specified
    baseLayer = @(n) fullyConnectedLayer(n, ...
        WeightsInitializer = args.WinitFcn, ...
        WeightLearnRateFactor = 1, ...
        BiasInitializer = args.BinitFcn, ...
        BiasLearnRateFactor = 1);
else % Don't train bias and set to 0
    baseLayer = @(n) fullyConnectedLayer(n, ...
        WeightsInitializer = "zeros", ...
        WeightLearnRateFactor = 0, ...
        Bias = zeros(n, 1, 'single'), ...
        BiasLearnRateFactor = 0);
end

% Conditional layers
dropout = @(d) conditionalLayer(d > 0, dropoutLayer(d));
bn      = @(b) conditionalLayer(b, batchNormalizationLayer);

% Activation layers
hiddenAct = actFcn(args.HiddenActivation);
outputAct = actFcn(args.OutputActivation);

% Bloque de capa oculta
hiddenBlock = @(n) [baseLayer(n); ...
                    bn(args.BatchNorm); ...
                    hiddenAct; ...
                    dropout(args.Dropout)];

% Construcción de capas
hidden_layers = repmat(hiddenBlock(args.Nneurons), args.Nlayers, 1);
output_layer  = [baseLayer(args.Noutputs); outputAct];
output_layer(2).Name = 'output';

% Construcción final de la red
layers = [featureInputLayer(args.Ninputs); hidden_layers; output_layer];
net = dlnetwork(layers);
end

% Función auxiliar para condicionales limpios
function layer = conditionalLayer(cond, layerIfTrue)
    if cond
        layer = layerIfTrue;
    else
        layer = [];
    end
end
