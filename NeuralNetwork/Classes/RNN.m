classdef RNN
    % This class create a Recurrent Neural Network with parameters:
    % (R) for recurrent layers, (FF) for feedforward layers
    
    % Ninputs: Input size
    % Noutputs: Output size
    % (R) NRlayers: Number of recurrent hidden layers
    % (FF) NFFlayers: Number of feedforward hidden layers
    % (R) Nwindow: Considered timesteps per recurrent hidden layer
    % (FF) NFFneurons: Number of neurons per feedforward hidden layer
    % (FF) hidden_activation: Activation function for feedforward hidden layers
    % output_activation: Activation function for output layer
    % dropout: Dropout rate for all hidden layers
    % WinitFcn: Weights initializer function for all layers
    % BinitFcn: Bias initializer function for all layers
    % RWinitFcn: Input weights initializer function for recurrent layers

    properties
        net
    end
    
    methods
        function obj = RNN(Ninputs, Noutputs, NRlayers, NFFlayers, Nwindow, NFFneurons, hidden_activation, output_activation, dropout, WinitFcn, BinitFcn, RWinitFcn)
            % Basic recurrent hidden layer
            Rhidden_layer = [lstmLayer(Nwindow, 'InputWeightsInitializer', WinitFcn, 'BiasInitializer', BinitFcn, 'RecurrentWeightsInitializer', RWinitFcn, OutputMode="sequence")
                             dropoutLayer(dropout)];
            
            % Basic feedforward hidden layer
            FFhidden_layer = [fullyConnectedLayer(NFFneurons, 'WeightsInitializer', WinitFcn, 'BiasInitializer', BinitFcn)
                              batchNormalizationLayer
                              eval(hidden_activation)
                              dropoutLayer(dropout)];
            
            % Repeat recurrent hidden layer NRlayers times
            Rhidden_layers = repmat(Rhidden_layer, NRlayers, 1);
            
            % Repeat feedforward hidden layer NFFlayers times
            FFhidden_layers = repmat(FFhidden_layer, NFFlayers, 1);
            
            % Full network
            layers = [sequenceInputLayer(Ninputs)
                      Rhidden_layers
                      lstmLayer(Nwindow, 'InputWeightsInitializer', WinitFcn, 'BiasInitializer', BinitFcn, 'RecurrentWeightsInitializer', RWinitFcn, OutputMode="last")
                      batchNormalizationLayer
                      dropoutLayer(dropout)
                      FFhidden_layers
                      fullyConnectedLayer(Noutputs, 'WeightsInitializer', WinitFcn, 'BiasInitializer', BinitFcn)
                      eval(output_activation)];
            
            obj.net = dlnetwork(layers);
        end
    end
end