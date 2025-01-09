classdef AdaptiveLQRLayer < nnet.layer.Layer
    properties
        Ninputs
        Noutputs
    end

    methods
        function layer = AdaptiveLQRLayer(Ninputs, Noutputs, name)
            layer.Name = name;
            layer.Description = sprintf('LQR Multiplication Layer [%d x %d]', Noutputs, Ninputs);
            layer.Ninputs = Ninputs;
            layer.Noutputs = Noutputs;
            layer.InputNames = {'in1', 'in2'}; % Entradas: in1 y in2
        end

        function Y = predict(layer, in1, in2)
            Kvec = in1; % (Ninputs*Noutputs, batchSize)
            X = in2; % (Ninputs, batchSize)

            % Reformatear Kvec en una matriz de tamaño [Noutputs, Ninputs]
            batchSize = size(Kvec, 2);
            K = reshape(Kvec, [layer.Noutputs, layer.Ninputs, batchSize]);

            % Multiplicar K por X
            Y = pagemtimes(K, X); % Resultado de tamaño [Noutputs, batchSize]
        end
    end
end