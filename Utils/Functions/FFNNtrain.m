function trained_net = FFNNtrain(args, CustomDefault)
%% Neural network training arguments
% net                   % dlnetwork
% X_train               % dlarray
% Y_train               % dlarray
% X_val                 % dlarray
% Y_val                 % dlarray
% InitialLearningRate   % float > 0
% FinalLearningRate     % float > 0
% Plots                 % str
% Verbose               % bool
% MaxEpochs             % int
% MiniBatchSize         % int
% ValidationPatience    % int
% HuberThreshold        % int
% ErrorWeights          % dlarray

%% Training options
options = trainingOptions('adam');
options.MaxEpochs = args.MaxEpochs;
options.MiniBatchSize = args.MiniBatchSize;
options.Shuffle = 'every-epoch';
options.ValidationData = {args.X_val, args.Y_val};
options.Plots = args.Plots;
options.Verbose = args.Verbose;
options.L2Regularization = 0;
options.ValidationPatience = args.ValidationPatience;
options.LearnRateSchedule = 'exponential';
options.InitialLearnRate = args.InitialLearningRate;
options.LearnRateDropPeriod = 1;
options.LearnRateDropFactor = (args.FinalLearningRate/args.InitialLearningRate)^(options.LearnRateDropPeriod/options.MaxEpochs);

if strcmp(CustomDefault, 'default') % DEFAULT TRAINING
    % Training
    trained_net = trainnet(args.X_train, args.Y_train, args.net, 'mse', options);

elseif strcmp(CustomDefault, 'custom') % CUSTOM TRAINING

% Initialization: Learning rate scheduler
lr = args.InitialLearningRate;

% Initialization: Network
net = args.net;

% Initialization: Adam optimizer states
trailingAvg   = [];
trailingAvgSq = [];

% Initialization: Loss history
train_losses = [];
val_losses   = [];

% Initialization: Early stopping
best_val_loss    = inf;
best_net         = net;
patience_counter = 0;

% Initialization: Progress monitor
monitor         = trainingProgressMonitor;
monitor.Info    = ["Epoch", "LearningRate"];
monitor.Metrics = ["TrainingLoss", "ValidationLoss"];
monitor.XLabel  = "Epoch";
groupSubPlot(monitor, "Loss", ["TrainingLoss","ValidationLoss"]);

% Training loop
for epoch = 1:options.MaxEpochs
    % Shuffle data at the start of each epoch
    idx              = randperm(size(args.X_train, 2));  % Shuffle indices
    X_train_shuffled = args.X_train(:, idx);
    Y_train_shuffled = args.Y_train(:, idx);

    % Mini-batch training
    for i = 1:options.MiniBatchSize:size(X_train_shuffled, 2)
        % Protect against out-of-bounds indexes
        batch_end = min(i + options.MiniBatchSize - 1, size(X_train_shuffled, 2));
        
        % Get mini-batch data
        batch_X = X_train_shuffled(:, i:batch_end);
        batch_Y = Y_train_shuffled(:, i:batch_end);

        % Training loss calculation
        [loss, gradients, state] = dlfeval(@FFNNLoss, net, batch_X, batch_Y, 'train', args.HuberThreshold, args.ErrorWeights);
        net.State                = state;

        % Adam update
        [net.Learnables, trailingAvg, trailingAvgSq] = adamupdate( ...
         net.Learnables, gradients, trailingAvg, trailingAvgSq, epoch, lr);
    end

    % Record training loss
    train_losses = [train_losses, extractdata(loss)];

    % Validation loss calculation
    [val_loss, ~] = dlfeval(@FFNNLoss, net, args.X_val, args.Y_val, 'validation', args.HuberThreshold, args.ErrorWeights);
    val_losses    = [val_losses, extractdata(val_loss)];

    % Check early stopping
    if val_loss < best_val_loss
        best_val_loss    = val_loss;
        best_net         = net;
        patience_counter = 0;
    else
        patience_counter = patience_counter + 1;
        if patience_counter >= options.ValidationPatience
            fprintf('Early stopping at epoch %d: no improvement after %d epochs.\n', epoch, options.ValidationPatience);
            break
        end
    end

    % Stop training button
    if monitor.Stop
        fprintf('Manual training stopping at epoch %d.\n', epoch);
        break
    end

    % Update progress monitor
    if strcmp(options.Plots, 'training-progress')
        recordMetrics(monitor, epoch, TrainingLoss=double(loss), ValidationLoss=double(val_loss));
        updateInfo(monitor, Epoch=epoch, LearningRate=lr);
        monitor.Progress = epoch / options.MaxEpochs * 100;
    end

    % Update learning rate
    lr = lr * options.LearnRateDropFactor;
end

% Return the best network
trained_net = best_net;

end

end