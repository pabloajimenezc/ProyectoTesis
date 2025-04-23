classdef ProjectionLayer < nnet.layer.Layer
    % Capa que proyecta la salida al conjunto factible A(x)f <= b(x)
    
    properties
        % Número de restricciones y dimensión de la salida
        NumConstraints
        OutputDim
    end
    
    methods
        function layer = ProjectionLayer(numConstraints, outputDim, name)
            % Constructor
            layer.Name = name;
            layer.Description = "Proyección a A(x)f <= b(x)";
            layer.NumConstraints = numConstraints;
            layer.OutputDim = outputDim;
        end
        
        function Z = predict(layer, X, A, b)
            % X: [d, N] = salidas sin proyectar (una por columna)
            % A: [m, d, N] = restricciones por muestra
            % b: [m, N] = cotas por muestra
            
            [d, N] = size(X);
            m = layer.NumConstraints;
            Z = zeros(d, N, 'like', X);
            
            for i = 1:N
                Ai = A(:, :, i);   % [m x d]
                bi = b(:, i);      % [m x 1]
                xi = X(:, i);      % [d x 1]
                
                % Resolvemos la proyección QP:
                % minimize ||z - xi||^2
                % subject to Ai*z <= bi
                H = 2 * eye(d);
                f = -2 * xi;
                
                % Usamos quadprog con restricciones
                options = optimoptions('quadprog','Display','off');
                zi = quadprog(H, f, Ai, bi, [], [], [], [], [], options);
                
                if isempty(zi)
                    warning('La proyección QP falló para la muestra %d. Se usa xi directamente.', i);
                    zi = xi;
                end
                
                Z(:, i) = zi;
            end
        end
        
        function [dLdX, dLdA, dLdb] = backward(layer, X, A, b, ~, dLdZ)
            % Esta versión básica NO implementa el backward,
            % pero puedes hacerlo con autodiff o numericamente.
            error("El método backward aún no está implementado.");
        end
    end
end
