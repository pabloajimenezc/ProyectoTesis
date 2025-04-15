function trained_net = FFNNtrain_custom(args)
% ENTRENAMIENTO PERSONALIZADO CON ADAM CON WAITBAR Y GRÁFICA
% args:
% - net              : red neuronal tipo dlnetwork
% - X_train, Y_train : datos de entrenamiento (dlarray)
% - X_val, Y_val     : (opcional) datos de validación (dlarray)
% - lr_i, lr_f       : tasa de aprendizaje inicial y final
% - regularization   : lambda para L2
% - numEpochs        : número total de épocas
% - minibatch_i/f    : tamaño inicial y final (potencias de 2)
% - verbose          : true/false

    % Hiperparámetros ADAM
    beta1 = 0.9;
    beta2 = 0.999;
    epsilon = 1e-8;

    velocity = [];
    squaredGrad = [];

    net = args.net;
    N = args.numEpochs;

    lr_i = args.lr_i;
    lr_f = args.lr_f;
    drop_factor = (lr_f / lr_i)^(1 / N);

    mb_i = log2(args.minibatch_i);
    mb_f = log2(args.minibatch_f);
    mb_slope = (mb_f - mb_i) / N;

    % Inicializar waitbar
    hbar = waitbar(0, 'Entrenando red neuronal...', 'Name', 'Progreso entrenamiento');

    % Inicializar gráfico
    fig = figure('Name', 'Pérdida en entrenamiento y validación');
    hold on;
    grid on;
    xlabel('Época');
    ylabel('Loss');
    title('Evolución de la función de pérdida');
    hTrain = animatedline('Color', 'b', 'DisplayName', 'Train');
    hVal   = animatedline('Color', 'r', 'DisplayName', 'Validation');
    legend;

    trainLosses = zeros(1, N);
    valLosses = nan(1, N);

    for epoch = 1:N
        alpha = lr_i * drop_factor^epoch;
        log2_batch = mb_i + mb_slope * epoch;
        miniBatchSize = 2^round(log2_batch);

        idx = randperm(size(args.X_train, 2));
        for i = 1:miniBatchSize:size(args.X_train, 2)
            batchIdx = idx(i:min(i+miniBatchSize-1, end));
            X = args.X_train(:, batchIdx);
            Y = args.Y_train(:, batchIdx);

            [loss, gradients] = dlfeval(@FFNNLoss, net, X, Y, args.regularization);

            if isempty(velocity)
                velocity = gradients;
                velocity.Value = cellfun(@(x) zeros(size(x), 'like', x), gradients.Value, 'UniformOutput', false);
                squaredGrad = gradients;
                squaredGrad.Value = cellfun(@(x) zeros(size(x), 'like', x), gradients.Value, 'UniformOutput', false);
            end

            [net, velocity, squaredGrad] = adamupdate(net, gradients, velocity, squaredGrad, epoch, alpha, beta1, beta2, epsilon);
        end

        % Evaluar pérdida en entrenamiento
        Y_pred_train = forward(net, args.X_train);
        trainLoss = mean((Y_pred_train - args.Y_train).^2, 'all') + args.regularization * L2Regularizer(net);
        trainLosses(epoch) = double(gather(extractdata(trainLoss)));

        % Evaluar pérdida en validación
        if isfield(args, 'X_val') && isfield(args, 'Y_val')
            Y_pred_val = forward(net, args.X_val);
            valLoss = mean((Y_pred_val - args.Y_val).^2, 'all') + args.regularization * L2Regularizer(net);
            valLosses(epoch) = double(gather(extractdata(valLoss)));
        end

        % Actualizar barra de progreso y gráfico
        waitbar(epoch / N, hbar, sprintf('Época %d/%d', epoch, N));

        if isvalid(fig)
            figure(fig);
            addpoints(hTrain, epoch, trainLosses(epoch));
            if ~isnan(valLosses(epoch))
                addpoints(hVal, epoch, valLosses(epoch));
            end
            drawnow;
        end

        % Mensaje opcional por consola
        if isfield(args, 'verbose') && args.verbose
            fprintf('Epoch %3d/%d | Train Loss: %.4e | Val Loss: %.4e | LR: %.2e | Batch: %d\n', ...
                epoch, N, trainLosses(epoch), valLosses(epoch), alpha, miniBatchSize);
        end
    end

    % Cerrar barra de progreso
    if isvalid(hbar)
        close(hbar);
    end

    trained_net = net;
end
