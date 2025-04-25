function trained_net = FFNNtrain_custom(args)
% %% Neural network training arguments
% net                   = args.net;             % dlnetwork
% X_train               = args.X_train;         % dlarray
% Y_train               = args.Y_train;         % dlarray
% X_val                 = args.X_val;           % dlarray
% Y_val                 = args.Y_val;           % dlarray
% lr_i                  = args.lr_i;            % float > 0
% lr_f                  = args.lr_f;            % float > 0
% plots                 = args.plots;           % str
% verbose               = args.verbose;         % bool
% MaxEpochs             = args.MaxEpochs;       % int
% MiniBatchSize         = args.MiniBatchSize;   % int
% ValidationPatience    = args.ValidationPatience; % int
% HuberThreshold        = args.HuberThreshold;     % int
% ErrorWeights              = args.ErrorWeights;            % dlarray

%% Variable para control de detención
persistent stopTrainingFlag
stopTrainingFlag = false;

% Crear ventana de control con botón de detener
f = figure('Name', 'Control de Entrenamiento', 'NumberTitle', 'off', ...
    'MenuBar', 'none', 'ToolBar', 'none', 'Position', [100, 100, 250, 80]);

uicontrol(f, 'Style', 'pushbutton', 'String', 'Detener entrenamiento', ...
    'FontSize', 12, 'Position', [30 20 190 40], ...
    'Callback', @(src, event) stopTrainingCallback());

% Callback para el botón
    function stopTrainingCallback()
        stopTrainingFlag = true;
        fprintf('Botón presionado: se detendrá el entrenamiento después de esta época.\n');
    end


%% Training options (ADAM)
options.MaxEpochs = args.MaxEpochs;
options.MiniBatchSize = args.MiniBatchSize;
options.Shuffle = 'every-epoch';
options.ValidationData = {args.X_val, args.Y_val};
options.Plots = args.plots;
options.Verbose = args.verbose;
options.L2Regularization = 0;
options.ValidationPatience = args.ValidationPatience;

% Learning rate scheduler (Exponential: df = (ri/ro)^(T/i))
N = options.MaxEpochs;
T = 1;
drop_factor = (args.lr_f / args.lr_i)^(T / N);
lr = args.lr_i;

% Initialize the network
net = args.net;

% Initialize optimizer states
trailingAvg = [];
trailingAvgSq = [];

% Initialize arrays for storing losses
train_losses = [];
val_losses = [];

% Early stopping
best_val_loss = inf;
best_net = net;
patience_counter = 0;

% Training loop
for epoch = 1:options.MaxEpochs
    % Shuffle data at the start of each epoch
    idx = randperm(size(args.X_train, 2));  % Shuffle indices
    X_train_shuffled = args.X_train(:, idx);
    Y_train_shuffled = args.Y_train(:, idx);

    % Mini-batch training
    for i = 1:options.MiniBatchSize:size(X_train_shuffled, 2)
        % Protect against out-of-bounds indexes
        batch_end = min(i + options.MiniBatchSize - 1, size(X_train_shuffled, 2));
        
        % Get mini-batch data
        batch_X = X_train_shuffled(:, i:batch_end);
        batch_Y = Y_train_shuffled(:, i:batch_end);

        % Forward pass and loss calculation using the weights
        [loss, gradients, state] = dlfeval(@FFNNLoss, net, batch_X, batch_Y, 'train', args.HuberThreshold, args.ErrorWeights);
        net.State = state;

        % Update weights using Adam optimizer
        [net.Learnables, trailingAvg, trailingAvgSq] = adamupdate( ...
            net.Learnables, gradients, trailingAvg, trailingAvgSq, epoch, lr);
    end

    % Record training loss
    train_losses = [train_losses, loss];

    % Validation
    [val_loss, ~] = dlfeval(@FFNNLoss, net, args.X_val, args.Y_val, 'validation', args.HuberThreshold, args.ErrorWeights);
    val_losses = [val_losses, val_loss];

    % Early stopping: update if validation improves
    if val_loss < best_val_loss
        best_val_loss = val_loss;
        best_net = net;
        patience_counter = 0;
    else
        patience_counter = patience_counter + 1;
    end

    % Show progress
    if mod(epoch, options.ValidationPatience) == 0 && options.Verbose
        fprintf('Epoch %d: Training Loss = %.4f, Validation Loss = %.4f (Best: %.4f)\n', ...
            epoch, loss, val_loss, best_val_loss);
    end

    % Check patience
    if patience_counter >= options.ValidationPatience
        fprintf('Early stopping at epoch %d: no improvement after %d epochs.\n', ...
            epoch, options.ValidationPatience);
        break
    end

    % Verificar si el usuario presionó "Detener"
    if stopTrainingFlag
        if options.Verbose
            fprintf('Entrenamiento detenido manualmente por el usuario en la época %d.\n', epoch);
        end
        break
    end

    % Update learning rate
    lr = lr * drop_factor;

    % Optional plotting of the loss curve
    if strcmp(options.Plots, 'training-progress')
        figure(1); clf;
        plot(1:length(train_losses), train_losses, 'b', 'LineWidth', 2);
        hold on;
        plot(1:length(val_losses), val_losses, 'r', 'LineWidth', 2);
        xlabel('Epoch');
        ylabel('Loss');
        title('Training and Validation Loss');
        legend('Training Loss', 'Validation Loss');
        grid on;
        drawnow;
    end
end

if isvalid(f)
    close(f);
end

% Return the best network
trained_net = best_net;

end
