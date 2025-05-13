function [trained_net, history] = FFNNtrain(args, CustomDefault)
%% Neural network training arguments
% net                % dlnetwork
% X_tr               % dlarray
% Y_tr               % dlarray
% dsXY_tr            % datastore
% X_val              % dlarray
% Y_val              % dlarray
% InitialLearnRate   % float > 0
% MaxLearnRate       % float > 0
% FinalLearnRate     % float > 0
% Plots              % str
% Verbose            % bool
% MaxEpochs          % int > 0
% MiniBatchSize      % int > 0
% ValidationPatience % int > 0
% HuberThreshold     % float [0, 1]
% ErrorWeights       % dlarray > 0

%% Training options
options                     = trainingOptions('adam');
options.MaxEpochs           = args.MaxEpochs;
options.MiniBatchSize       = args.MiniBatchSize;
args.Niterations            = ceil(size(args.X_tr, 2)/args.MiniBatchSize);
args.Nsteps                 = args.Niterations * args.MaxEpochs;
options.Shuffle             = 'every-epoch';
options.ValidationData      = {args.X_val, args.Y_val};
options.Plots               = args.Plots;
options.Verbose             = args.Verbose;
options.L2Regularization    = 0;
options.ValidationPatience  = args.ValidationPatience;
options.LearnRateSchedule   = 'exponential';
options.InitialLearnRate    = args.InitialLearnRate;
options.LearnRateDropPeriod = args.Nsteps;
options.LearnRateDropFactor = (args.FinalLearnRate/args.InitialLearnRate)^(1/(options.LearnRateDropPeriod-1));

if strcmp(CustomDefault, 'default') % DEFAULT TRAINING
    % Training
    trained_net = trainnet(args.X_tr, args.Y_tr, args.net, 'mse', options);
    history = [];

elseif strcmp(CustomDefault, 'custom') % CUSTOM TRAINING

% Initialization: Learning rate scheduler
if strcmp(args.LearnRateScheduler, "test")                  % Linear (raising for Learning Rate Test)
    % Recommended:
    % Few steps/epochs (100-200/1-3)
    % Big mini-batch size (512 or greater)
    lr_min = 1e-10;
    lr_max = 1;
    lr_values = linspace(lr_min, lr_max, args.Nsteps);
elseif strcmp(args.LearnRateScheduler, "exponential")       % Exponential decay
    lr_values = options.InitialLearnRate * options.LearnRateDropFactor .^ (0:(options.LearnRateDropPeriod-1));
elseif strcmp(args.LearnRateScheduler, "super-convergence") % Super convergence
    N_up = floor(args.Nsteps / 3);
    N_down = args.Nsteps - N_up;
    lr_up = linspace(args.InitialLearnRate, args.MaxLearnRate, N_up);
    lr_down = linspace(args.MaxLearnRate, args.FinalLearnRate, N_down);
    lr_values = [lr_up, lr_down];
elseif strcmp(args.LearnRateScheduler, "cyclic")            % Cyclical triangular
    % stepsize = 5 * args.Niterations; % Length of one up or down cycle
    stepsize = 1 * args.Niterations; % Length of one up or down cycle
    f = args.Nsteps / stepsize;      % Number of ups and downs
    assert(mod(f, 1) == 0)           % Check if f is integer
    lr_min_vec = args.FinalLearnRate * ones(1, args.Nsteps);
    % lr_max_vec = args.MaxLearnRate * ones(1, args.Nsteps);
    lr_max_vec = linspace(args.MaxLearnRate, args.FinalLearnRate, args.Nsteps);
    lr_values = abs(asin(sin(2*pi*f * linspace(0, 1, args.Nsteps)/4))) * 2/pi;
    lr_values = lr_min_vec + (lr_max_vec - lr_min_vec) .* lr_values;
else
    error("Invalid learning rate scheduler specified.");
end

% Initialization: Network
net = args.net;

% Initialization: Adam optimizer states
averageGrad   = [];
averageSqGrad = [];

% Initialization: Loss history
% train_losses = zeros(1, args.Nsteps);    % Record training mini-batch loss every step
% val_losses   = zeros(1, args.MaxEpochs); % Record validation loss every epoch
history(args.MaxEpochs) = struct('net', [], 'train_loss', [], 'val_loss', []);

% Initialization: Early stopping
best_val_loss    = inf;
best_net         = net;
patience_counter = 0;

% Initialization: Progress monitor
if strcmp(options.Plots, 'training-progress')
    monitor         = trainingProgressMonitor;
    monitor.Info    = ["ETA", "Epoch", "Iteration", "Step", "LearningRate", "Patience"];
    monitor.Metrics = ["TrainingLoss", "FullTrainingLoss", "ValidationLoss", "LearningRate"];
    monitor.XLabel  = "Step";
    groupSubPlot(monitor, "Loss", ["TrainingLoss", "FullTrainingLoss", "ValidationLoss"]);
    groupSubPlot(monitor, "Scheduler", "LearningRate");

    updateInfo(monitor, ...
               "Patience", "holamundo")
end

% Initialization: Mini-batch queue
mbq = minibatchqueue(args.dsXY_tr, ...
                     'MiniBatchSize', options.MiniBatchSize, ...
                     'MiniBatchFormat', {'CB', 'CB'}, ...
                     'PartialMiniBatch', 'return', ...
                     'OutputEnvironment', 'auto');

% Initialization: Step
step = 0;

% Training loop
tic
for epoch = 1:options.MaxEpochs
    
    % Update progress monitor
    if strcmp(options.Plots, 'training-progress')
        updateInfo(monitor, ...
                   "Epoch", sprintf('%d/%d', epoch, args.MaxEpochs))
    end

    % Shuffle data at the start of each epoch
    shuffle(mbq);

    % Initialization: Iteration
    iteration = 0;

    % Mini-batch training
    while hasdata(mbq)
        iteration = iteration + 1;      % Update iteration
        step = step + 1;                % Update step
        lr = lr_values(step);           % Update learning rate
        [batch_X, batch_Y] = next(mbq); % Get mini-batch data

        % Training mini-batch loss calculation
        [loss, gradients, state] = dlfeval(@FFNNLoss, net, batch_X, batch_Y, 'train', args.HuberThreshold, args.ErrorWeights);
        net.State             = state;

        % Adam update
        [net.Learnables, averageGrad, averageSqGrad] = adamupdate(net.Learnables, gradients, averageGrad, averageSqGrad, step, lr);

        % Update progress monitor
        if strcmp(options.Plots, 'training-progress')
            updateInfo(monitor, ...
                       "ETA", char(duration(0, 0, toc * (args.Nsteps/step - 1), 'Format', 'hh:mm:ss')),...
                       "Iteration", sprintf('%d/%d', iteration, args.Niterations), ...
                       "Step", sprintf('%d/%d', step, args.Nsteps), ...
                       "LearningRate", lr)
            recordMetrics(monitor, ...
                          step, ...
                          "TrainingLoss", double(extractdata(loss)), ...
                          "LearningRate", lr)
            monitor.Progress = step / args.Nsteps * 100;
        end
    end

    % Train loss calculation
    [train_loss, ~, ~] = dlfeval(@FFNNLoss, ...
                               net, ...
                               args.X_tr, ...
                               args.Y_tr, ...
                               'validation', ...
                               args.HuberThreshold, ...
                               args.ErrorWeights);

    % Validation loss calculation
    [val_loss, ~, ~] = dlfeval(@FFNNLoss, ...
                               net, ...
                               args.X_val, ...
                               args.Y_val, ...
                               'validation', ...
                               args.HuberThreshold, ...
                               args.ErrorWeights);

    % Update training and validation loss history
    % train_losses(epoch) = double(extractdata(train_loss));
    % val_losses(epoch) = double(extractdata(val_loss));
    history(epoch).net        = net;
    history(epoch).train_loss = double(extractdata(train_loss));
    history(epoch).val_loss   = double(extractdata(val_loss));

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
    if monitor.Stop && strcmp(options.Plots, 'training-progress')
        fprintf('Manual training stopping at epoch %d.\n', epoch);
        break
    end
    
    % Update progress monitor
    if strcmp(options.Plots, 'training-progress')
        updateInfo(monitor, ...
                   "Patience", sprintf('%d/%d', patience_counter, args.ValidationPatience))
        recordMetrics(monitor, ...
                      step, ...
                      "FullTrainingLoss", train_loss, ...
                      "ValidationLoss", val_loss)
    end
end

% Return the best network
trained_net = best_net;

end

end