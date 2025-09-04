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

% Función de activación
function layer = actFcn(name)
    switch lower(name)
        case 'relu',    layer = reluLayer;
        case 'tanh',    layer = tanhLayer;
        case 'sigmoid', layer = sigmoidLayer;
        case 'linear',  layer = [];  % Sin activación
        otherwise, error("Unknown activation function: '%s'.", name);
    end
end

% Capa fully connected con o sin bias entrenable
baseLayer = @(n) fullyConnectedLayer(n, ...
    'WeightsInitializer', args.WinitFcn, ...
    'BiasLearnRateFactor', double(~args.TrainBias), ...
    'Bias', zeros(n, 1));

% Capas condicionales
dropout = @(d) conditionalLayer(d > 0, dropoutLayer(d));
bn      = @(b) conditionalLayer(b, batchNormalizationLayer);

% Capas de activación
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
if ~isempty(outputAct)
    output_layer(1).Name = args.OutputActivation;
end

% Construcción final de la red
layers = [featureInputLayer(args.Ninputs); hidden_layers; output_layer];
net = dlnetwork(layers);
net = dlupdate(@double, net);
end

% Función auxiliar para condicionales limpios
function layer = conditionalLayer(cond, layerIfTrue)
    if cond
        layer = layerIfTrue;
    else
        layer = [];
    end
end
