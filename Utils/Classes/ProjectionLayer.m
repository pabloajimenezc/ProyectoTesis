classdef ProjectionLayer < nnet.layer.Layer
    % ProjectionLayer: Project network output to respect input dependent affine constraints:
    %   -is_max <= pinv(A)*ixy + N*ie <= is_max
    %   -vo_max <= vo <= vo_max
    
    properties
        A       % M3C incidence matrix
        pinvA   % Inverse of M3C incidence matrix
        N       % M3C nullspace matrix
        Xmax    % Input normalization
        Ymax    % Output normalization
        is_max  % Maximum cluster current
        vo_max  % Maximum common mode voltage
    end
    
    methods
        function layer = ProjectionLayer(A, Xmax, Ymax, is_max, vo_max, name)
            % Constructor
            layer.Name = name;
            layer.Description = "Affine constraints projection layer";
            layer.A = A;
            layer.pinvA = pinv(A);
            layer.N = null(A, 'rational');
            layer.Xmax = Xmax;
            layer.Ymax = Ymax;
            layer.is_max = is_max;
            layer.vo_max = vo_max;
        end
        
        function y_proj = predict(layer, y, x)
            % y: Unprojected network output
            % x: Network input
            
            ixy = x(15:21);

            [d, Nsamples] = size(y);
            y_proj = zeros(d, Nsamples, 'like', y);
            
            for k = 1:Nsamples
                yk = y(:,k);         % [5x1]
                ixy_k = ixy(:,k);    % [6x1]
                
                [A, b] = construirRestriccionesQP(layer.M, layer.N, layer.is_max, layer.vo_max, ixy_k);
                
                % Proyección diferenciable
                Ay_minus_b = A * yk - b;
                relu_part = max(Ay_minus_b, 0);
                correction = layer.pinvA * relu_part;
                
                y_proj(:,k) = yk - correction;
            end
        end
    end
end
