classdef FFNN
    % This class create a Feed Forward Neural Network with parameters:

    % Ninputs: Input size
    % Noutputs: Output size
    % Nlayers: Number of hidden layers
    % Nneurons: Number of neurons per hidden layer
    % hidden_activation: Activation function for hidden layers
    % output_activation: Activation function for output layer
    % dropout: Dropout rate for hidden layers
    % WinitFcn: Weights initializer function for all layers
    % BinitFcn: Bias initializer function for all layers

    properties
        net
    end
    
    methods
        function obj = FFNN(Ninputs, Noutputs, Nlayers, Nneurons, hidden_activation, output_activation, dropout, WinitFcn, BinitFcn)
            % Basic hidden layer
            hidden_layer = [%fullyConnectedLayer(Nneurons, 'WeightsInitializer', WinitFcn, 'BiasInitializer', BinitFcn)
                            fullyConnectedLayer(Nneurons, 'WeightsInitializer', WinitFcn, BiasLearnRateFactor=0, Bias=zeros(Nneurons, 1))
                            batchNormalizationLayer
                            eval(hidden_activation)
                            dropoutLayer(dropout)];
            
            % Repeat hidden layer Nlayers times
            hidden_layers = repmat(hidden_layer, Nlayers, 1);
            
            % Full network
            layers = [featureInputLayer(Ninputs)
                      batchNormalizationLayer
                      hidden_layers
                      % fullyConnectedLayer(Noutputs, 'WeightsInitializer', WinitFcn, 'BiasInitializer', BinitFcn)
                      fullyConnectedLayer(Noutputs, 'WeightsInitializer', WinitFcn, BiasLearnRateFactor=0, Bias=zeros(Noutputs, 1))
                      eval(output_activation)];
            
            obj.net = dlnetwork(layers);
        end
    end
end