classdef CustomMultiplicationLayer < nnet.layer.Layer
    methods
        function layer = CustomMultiplicationLayer(name)
            layer.Name = name;
            layer.Description = 'Multiplication layer for element-wise product';
            layer.InputNames = {'in1', 'in2'};
        end

        function Z = predict(~, in1, in2)
            Z = in1 .* in2;
        end
    end
end