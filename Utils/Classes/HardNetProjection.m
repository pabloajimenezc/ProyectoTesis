classdef HardNetProjection < nnet.layer.Layer
    properties
        A        % Matriz de restricciones (20×5)
        A_pinv   % Pseudoinversa de A
        M        % Matriz M (6×9)
        is_max   % Límite de corriente
        vo_max   % Límite de tensión
    end
    properties (Learnable)
        % (ninguna)
    end

    properties (Transient, Hidden)
        N        % Matriz N (9×4) - no cambia, pero la usamos aquí
    end

    methods
        function layer = HardNetProjection(A, M, N, is_max, vo_max, name)
            layer.Name        = name;
            layer.Description = "HardNet-Aff: proyecta ie/vo sujetas a A*f ≤ b(x)";
            layer.Type        = "HardNetProj";

            layer.A      = A;
            layer.A_pinv = pinv(A);
            layer.M      = M;
            layer.N      = N;
            layer.is_max = is_max;
            layer.vo_max = vo_max;

            % Especificamos dos entradas:
            layer.NumInputs  = 2;
            layer.InputNames = {'raw','ixy'};
            layer.NumOutputs = 1;
            layer.OutputNames= {'out'};
        end

        function Z = predict(layer, raw, ixy)
            % raw: [5×B]  ie(4)+vo(1)
            % ixy: [6×B]
            A       = layer.A;
            A_pinv  = layer.A_pinv;
            M       = layer.M;
            is_max  = layer.is_max;
            vo_max  = layer.vo_max;

            B = size(raw,2);
            Z = zeros(size(raw),'like',raw);

            for i = 1:B
                f_i   = raw(:,i);
                ixy_i = ixy(:,i);

                % calcula b(x):
                is_term = pinv(M)*ixy_i;      % 9×1
                b = [
                  is_max*ones(9,1) - is_term;
                  is_max*ones(9,1) + is_term;
                  vo_max;
                  vo_max
                ];

                % proyección HardNet-Aff:
                v          = A*f_i - b;
                correction = A_pinv * max(0, v);
                Z(:,i)     = f_i - correction;
            end
        end
    end
end
