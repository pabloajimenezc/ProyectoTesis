function [trained_net, history] = FFNNtrain(args, CustomDefault)
% Entrenamiento de red neuronal con opciones por defecto o personalizado

% Preparación de valores derivados
args.Niterations = ceil(size(args.X_tr, 2) / args.MiniBatchSize);
args.Nsteps = args.Niterations * args.MaxEpochs;

% --- DEFAULT TRAINING ---
if strcmp(CustomDefault, 'default')
    options = defaultTrainingOptions(args);
    trained_net = trainnet(args.X_tr, args.Y_tr, args.net, 'mse', options);
    history = [];
    return
end

% --- CUSTOM TRAINING ---
% Generación del learning rate schedule
lr_values = generateLRschedule(args);

% Inicialización
net = args.net;
averageGrad = [];
averageSqGrad = [];
history(args.MaxEpochs) = struct('net', [], 'train_loss', [], 'val_loss', []);
best_val_loss = inf;
best_net = net;
patience_counter = 0;
step = 0;

% Configuración del monitor de entrenamiento
use_monitor = strcmp(args.Plots, 'training-progress');
if use_monitor
    monitor = setupTrainingMonitor(args);
end

% Configuración del minibatchqueue
mbq = minibatchqueue(args.dsXY_tr, ...
    'MiniBatchSize', args.MiniBatchSize, ...
    'MiniBatchFormat', {'CB', 'CB'}, ...
    'PartialMiniBatch', 'return', ...
    'OutputEnvironment', 'auto');

% Bucle de entrenamiento
tic
for epoch = 1:args.MaxEpochs
    if use_monitor
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

        if use_monitor
            updateInfo(monitor, ...
                "ETA", char(duration(0, 0, toc * (args.Nsteps/step - 1), 'Format', 'hh:mm:ss')), ...
                "Iteration", sprintf('%d/%d', iteration, args.Niterations), ...
                "Step", sprintf('%d/%d', step, args.Nsteps), ...
                "LearningRate", lr);
            recordMetrics(monitor, step, "TrainingLoss", double(extractdata(loss)), "LearningRate", lr);
            monitor.Progress = step / args.Nsteps * 100;
        end
    end

    [train_loss, ~, ~] = dlfeval(@FFNNLoss, net, args.X_tr, args.Y_tr, 'validation', args.HuberThreshold, args.ErrorWeights);
    [val_loss, ~, ~] = dlfeval(@FFNNLoss, net, args.X_val, args.Y_val, 'validation', args.HuberThreshold, args.ErrorWeights);

    history(epoch).net = net;
    history(epoch).train_loss = double(extractdata(train_loss));
    history(epoch).val_loss = double(extractdata(val_loss));

    if val_loss < best_val_loss
        best_val_loss = val_loss;
        best_net = net;
        patience_counter = 0;
    else
        patience_counter = patience_counter + 1;
        if patience_counter >= args.ValidationPatience
            fprintf('Early stopping at epoch %d: no improvement after %d epochs.\n', epoch, args.ValidationPatience);
            break
        end
    end

    if use_monitor && monitor.Stop
        fprintf('Manual training stopping at epoch %d.\n', epoch);
        break
    end

    if use_monitor
        updateInfo(monitor, "Patience", sprintf('%d/%d', patience_counter, args.ValidationPatience));
        recordMetrics(monitor, step, "FullTrainingLoss", train_loss, "ValidationLoss", val_loss);
    end
end

trained_net = best_net;
end


function options = defaultTrainingOptions(args)
options = trainingOptions('adam', ...
    'MaxEpochs', args.MaxEpochs, ...
    'MiniBatchSize', args.MiniBatchSize, ...
    'Shuffle', 'every-epoch', ...
    'ValidationData', {args.X_val, args.Y_val}, ...
    'Plots', args.Plots, ...
    'Verbose', args.Verbose, ...
    'ValidationPatience', args.ValidationPatience, ...
    'L2Regularization', 0, ...
    'InitialLearnRate', args.InitialLearnRate, ...
    'LearnRateSchedule', 'exponential', ...
    'LearnRateDropPeriod', args.Nsteps, ...
    'LearnRateDropFactor', (args.FinalLearnRate / args.InitialLearnRate)^(1 / (args.Nsteps - 1)));
end


function lr_values = generateLRschedule(args)
switch args.LearnRateScheduler
    case "test"
        lr_values = linspace(1e-10, 1, args.Nsteps);
    case "exponential"
        lr_values = args.InitialLearnRate * (args.FinalLearnRate / args.InitialLearnRate) .^ (linspace(0, 1, args.Nsteps));
    case "super-convergence"
        N_up = floor(args.Nsteps / 3);
        N_down = args.Nsteps - N_up;
        lr_values = [linspace(args.InitialLearnRate, args.MaxLearnRate, N_up), ...
                     linspace(args.MaxLearnRate, args.FinalLearnRate, N_down)];
    case "cyclic"
        stepsize = 5 * args.Niterations;
        f = args.Nsteps / stepsize;
        assert(mod(f, 1) == 0);
        lr_min = args.FinalLearnRate;
        lr_max = linspace(args.MaxLearnRate, args.FinalLearnRate, args.Nsteps);
        lr_values = abs(asin(sin(2 * pi * f * linspace(0, 1, args.Nsteps) / 4))) * 2 / pi;
        lr_values = lr_min + (lr_max - lr_min) .* lr_values;
    otherwise
        error("Invalid learning rate scheduler specified.");
end
end


function monitor = setupTrainingMonitor(args)
monitor = trainingProgressMonitor;
monitor.Info = ["ETA", "Epoch", "Iteration", "Step", "LearningRate", "Patience"];
monitor.Metrics = ["TrainingLoss", "FullTrainingLoss", "ValidationLoss", "LearningRate"];
monitor.XLabel = "Step";
groupSubPlot(monitor, "Loss", ["TrainingLoss", "FullTrainingLoss", "ValidationLoss"]);
groupSubPlot(monitor, "Scheduler", "LearningRate");
updateInfo(monitor, "Patience", "holamundo");
end