function trained_net = FFNNtrain(args)
% %% Neural network training arguments
% net                   = args.net;             % dlnetwork
% X_train               = args.X_train;         % dlarray
% Y_train               = args.Y_train;         % dlarray
% X_val                 = args.X_val;           % dlarray
% Y_val                 = args.Y_val;           % dlarray
% regularization        = args.regularization;  % float >= 0
% lr_i                  = args.lr_i;            % float > 0
% lr_f                  = args.lr_f;            % float > 0
% plots                 = args.plots;           % str
% MaxEpochs             = args.MaxEpochs;       % int
% MiniBatchSize         = args.MiniBatchSize;   % int
% ValidationPatience    = args.MiniBatchSize;   % int

%% Training options (ADAM)
options = trainingOptions('adam');
options.MaxEpochs = args.MaxEpochs;
options.MiniBatchSize = args.MiniBatchSize;
options.Shuffle = 'every-epoch';
options.ValidationData = {args.X_val, args.Y_val};
options.Plots = args.plots;
options.Verbose = false;
options.L2Regularization = args.regularization;
options.ValidationPatience = args.ValidationPatience;

% Learning rate scheduler (Exponential: df = (ri/ro)^(T/i))
N = options.MaxEpochs;
T = 1;
drop_factor = (args.lr_f/args.lr_i)^(T/N);
options.InitialLearnRate = args.lr_i;
options.LearnRateSchedule = 'exponential';
options.LearnRateDropFactor = drop_factor;
options.LearnRateDropPeriod = T;

% %% Training options (LEVENBERG MARQUARDT)
% options = trainingOptions('lm');
% options.MaxIterations = 1;
% options.ValidationData = {args.X_val, args.Y_val};
% options.Plots = args.plots;
% options.Verbose = false;

% %% Training options (LBFGS)
% options = trainingOptions('lbfgs');
% options.MaxIterations = 1000;
% options.ValidationData = {args.X_val, args.Y_val};
% options.Plots = args.plots;
% options.Verbose = false;
% options.L2Regularization = args.regularization;

%% Training
trained_net = trainnet(args.X_train, args.Y_train, args.net, 'mse', options);
end