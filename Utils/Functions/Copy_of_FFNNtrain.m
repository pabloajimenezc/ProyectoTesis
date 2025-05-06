function [trained_net, top10_nets, top10_losses] = Copy_of_FFNNtrain(args, CustomDefault)
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
    trained_net = trainnet(args.X_tr, args.Y_tr, args.net, 'mse', options);
    top10_nets = {};
    top10_losses = [];
    return
end

%% CUSTOM TRAINING
if strcmp(args.LearnRateScheduler, "test")
    lr_min = 1e-10;
    lr_max = 3;
    lr_values = linspace(lr_min, lr_max, args.Nsteps);
elseif strcmp(args.LearnRateScheduler, "exponential")
    lr_values = options.InitialLearnRate * options.LearnRateDropFactor .^ (0:(options.LearnRateDropPeriod-1));
elseif strcmp(args.LearnRateScheduler, "super-convergence")
    N_up = floor(args.Nsteps / 3);
    N_down = args.Nsteps - N_up;
    lr_up = linspace(args.InitialLearnRate, args.MaxLearnRate, N_up);
    lr_down = linspace(args.MaxLearnRate, args.FinalLearnRate, N_down);
    lr_values = [lr_up, lr_down];
elseif strcmp(args.LearnRateScheduler, "cyclic")
    stepsize = 5 * args.Niterations;
    f = args.Nsteps / stepsize;
    assert(mod(f, 1) == 0)
    lr_min_vec = args.FinalLearnRate * ones(1, args.Nsteps);
    lr_max_vec = linspace(args.MaxLearnRate, args.FinalLearnRate, args.Nsteps);
    lr_values = abs(asin(sin(2*pi*f * linspace(0, 1, args.Nsteps)/4))) * 2/pi;
    lr_values = lr_min_vec + (lr_max_vec - lr_min_vec) .* lr_values;
else
    error("Invalid learning rate scheduler specified.");
end

net = args.net;
averageGrad   = [];
averageSqGrad = [];
train_losses = zeros(1, args.Nsteps);
val_losses   = zeros(1, args.MaxEpochs);

best_val_loss = inf;
best_net = net;
patience_counter = 0;

top10_losses = inf(1,10);
top10_nets = cell(1,10);

if strcmp(options.Plots, 'training-progress')
    monitor = trainingProgressMonitor;
    monitor.Info = ["ETA", "Epoch", "Iteration", "Step", "LearningRate", "Patience"];
    monitor.Metrics = ["TrainingLoss", "TrainingLossMovMean", "ValidationLoss", "LearningRate"];
    monitor.XLabel = "Step";
    groupSubPlot(monitor, "Loss", ["TrainingLoss", "TrainingLossMovMean", "ValidationLoss"]);
    groupSubPlot(monitor, "Scheduler", "LearningRate");
end

mbq = minibatchqueue(args.dsXY_tr, ...
    'MiniBatchSize', options.MiniBatchSize, ...
    'MiniBatchFormat', {'CB', 'CB'}, ...
    'PartialMiniBatch', 'return', ...
    'OutputEnvironment', 'auto');

step = 0;
tic
for epoch = 1:options.MaxEpochs

    if strcmp(options.Plots, 'training-progress')
        updateInfo(monitor, "Epoch", sprintf('%d/%d', epoch, args.MaxEpochs));
    end

    shuffle(mbq);
    iteration = 0;

    while hasdata(mbq)
        iteration = iteration + 1;
        step = step + 1;
        lr = lr_values(step);

        [batch_X, batch_Y] = next(mbq);

        [loss, gradients, state] = dlfeval(@FFNNLoss, net, batch_X, batch_Y, 'train', args.HuberThreshold, args.ErrorWeights);
        net.State = state;

        [net.Learnables, averageGrad, averageSqGrad] = adamupdate(net.Learnables, gradients, averageGrad, averageSqGrad, step, lr);

        train_losses(step) = double(extractdata(loss));

        if strcmp(options.Plots, 'training-progress')
            idx_min = max(1, step - args.Niterations+1);
            updateInfo(monitor, ...
                "ETA", sprintf('%.1f min', toc*(args.Nsteps/step-1)/60), ...
                "Iteration", sprintf('%d/%d', iteration, args.Niterations), ...
                "Step", sprintf('%d/%d', step, args.Nsteps), ...
                "LearningRate", lr);
            recordMetrics(monitor, step, ...
                "TrainingLoss", train_losses(step), ...
                "TrainingLossMovMean", mean(train_losses(idx_min:step)), ...
                "LearningRate", lr);
            monitor.Progress = step / args.Nsteps * 100;
        end
    end

    [val_loss, ~, ~] = dlfeval(@FFNNLoss, net, args.X_val, args.Y_val, 'validation', args.HuberThreshold, args.ErrorWeights);
    val_losses(epoch) = double(extractdata(val_loss));

    if val_loss < best_val_loss
        best_val_loss = val_loss;
        best_net = net;
        patience_counter = 0;
    else
        patience_counter = patience_counter + 1;
        if patience_counter >= options.ValidationPatience
            fprintf('Early stopping at epoch %d: no improvement after %d epochs.\n', epoch, options.ValidationPatience);
            break
        end
    end

    % TOP-10 REDES
    [worst_loss, worst_idx] = max(top10_losses);
    if val_loss < worst_loss
        top10_losses(worst_idx) = val_loss;
        top10_nets{worst_idx} = net;
    end

    if monitor.Stop && strcmp(options.Plots, 'training-progress')
        fprintf('Manual training stopping at epoch %d.\n', epoch);
        break
    end

    if strcmp(options.Plots, 'training-progress')
        updateInfo(monitor, "Patience", sprintf('%d/%d', patience_counter, args.ValidationPatience));
        recordMetrics(monitor, step, "ValidationLoss", val_losses(epoch));
    end
end

trained_net = best_net;

end
