classdef HardNetProjection < nnet.layer.Layer & nnet.layer.Formattable
    % Capa diferenciable que proyecta [ie; vo] en base a restricciones físicas
    % - ie se proyecta sobre Ac*ie <= bc con método configurable
    % - vo se recorta en base a vB y vc

    properties
        Method          % Método de proyección: 'cimmino_max', 'dykstra', 'dpr'
        A               % Matriz A (6x9)
        N               % Matriz nula de A (9x4)
        C               % Cluster capacitance
        Y2D             % Star to delta voltages matrix
        D2Y
        pinvA           % Pseudo inversa de A
        is_max          % Límite superior para is
        Xmax            % Escalamiento entradas (27x1)
        Ymax            % Escalamiento salidas (5x1)
    end

    methods
        function layer = HardNetProjection(method, A, N, C, is_max, Xmax, Ymax, name)
            layer.Name = name;
            layer.Description = "HardNet Projection Layer";
            layer.Method = method;
            layer.A = A;
            layer.N = N;
            layer.C = C;
            Y2D = [1, -1,  0;
                   0,  1, -1;
                   1,  1,  1];
            layer.Y2D = Y2D;
            layer.D2Y = inv(Y2D);
            layer.pinvA = pinv(A);
            layer.is_max = is_max;
            layer.Xmax = Xmax;
            layer.Ymax = Ymax;
        end

        function Z = predict(layer, input)
            % Entrada input: [27 x N] = [ie; vo; x]

            Y = stripdims(input(1:5, :) .* layer.Ymax);
            X = stripdims(input(6:end, :) .* layer.Xmax);

            % Outputs
            ie = Y(1:4, :);
            vo = Y(5, :);

            % Inputs
            Ec_mean = X(1, :);
            Ec_diff = X(2:10, :);
            Ec = Ec_mean + Ec_diff;
            vc = sqrt(2 * Ec / layer.C); % CUIDADO AQUI, Ec > 0 !!!!!!!

            vxac = X(11,:); vxbc = X(12,:);
            vyac = X(13,:); vybc = X(14,:);
            ixa = X(15,:); ixb = X(16,:);
            iya = X(17,:); iyb = X(18,:);

            ix = [ixa; ixb; -(ixa + ixb)];
            iy = [iya; iyb; -(iya + iyb)];
            ixy = [ix; iy];
            iB = layer.pinvA * ixy;

            vx = layer.D2Y * [- vxbc + vxac; vxbc; -vxac];
            vy = layer.D2Y * [- vybc + vyac; vybc; -vyac];
            vxy = [vx; vy];
            vB = layer.A' * vxy;

            Ac = [layer.N; -layer.N];
            bc = [layer.is_max - iB; layer.is_max + iB];
            ie_proj = layer.projectIE(ie, Ac, bc);

            vo_min = max(-vc - vB, [], 1);
            vo_max = min(vc - vB, [], 1);
            vo_proj = min(max(vo, vo_min), vo_max);

            Y = [ie_proj ./ layer.Ymax(1:4); vo_proj ./ layer.Ymax(5)];
            Z = Y';
            Z = dlarray(Z', 'CB');
        end

        function ie_proj = projectIE(layer, ie, Ac, bc)
            [~, Nsamples] = size(ie);
            ie_proj = ie;
            K = 2;
            lambda = 1.0;
            n2 = sum(Ac.^2, 2);

            switch layer.Method
                case 'cimmino_max'
                    for k = 1:K
                        R = Ac * ie_proj - bc;
                        for i = 1:Nsamples
                            V = max(R(:,i), 0);
                            [vmax, idx_max] = max(V);
                            if vmax <= 0
                                continue;
                            end
                            ai = Ac(idx_max,:)';
                            ri = ai' * ie_proj(:,i) - bc(idx_max,i);
                            corr = (ri / (ai' * ai)) * ai;
                            ie_proj(:,i) = ie_proj(:,i) - lambda * corr;
                        end
                    end

                case 'dykstra'
                    p = zeros(size(Ac,1), Nsamples);
                    for k = 1:K
                        for i = 1:size(Ac,1)
                            ai = Ac(i,:)';
                            for j = 1:Nsamples
                                bi = bc(i,j);
                                aux = ie_proj(:,j) + p(i,j) * ai;
                                ri = ai' * aux - bi;
                                if ri > 0
                                    corr = (ri / (ai' * ai)) * ai;
                                    x_new = aux - lambda * corr;
                                else
                                    x_new = aux;
                                end
                                p(i,j) = (aux - x_new)' * ai;
                                ie_proj(:,j) = x_new;
                            end
                        end
                    end

                case 'dpr'
                    for k = 1:K
                        x_old = ie_proj;
                        for i = 1:size(Ac,1)
                            ai = Ac(i,:)';
                            for j = 1:Nsamples
                                bi = bc(i,j);
                                ri = ai' * ie_proj(:,j) - bi;
                                if ri > 0
                                    p = ie_proj(:,j) - (ri / (ai' * ai)) * ai;
                                else
                                    p = ie_proj(:,j);
                                end
                                r = 2 * p - ie_proj(:,j);
                                ie_proj(:,j) = ie_proj(:,j) + lambda * (r - ie_proj(:,j));
                            end
                        end
                        ie_proj = 0.5 * (ie_proj + x_old);
                    end

                otherwise
                    error("Unknown projection method: %s", layer.Method)
            end
        end
    end
end