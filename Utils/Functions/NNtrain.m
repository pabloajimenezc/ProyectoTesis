function trained_net = NNtrain(NNtrain_args)
%% Neural network training arguments
net             = NNtrain_args.net;             % dlnetwork
X_train         = NNtrain_args.X_train;         % dlarray
Y_train         = NNtrain_args.Y_train;         % dlarray
X_val           = NNtrain_args.X_val;           % dlarray
Y_val           = NNtrain_args.Y_val;           % dlarray
regularization  = NNtrain_args.regularization;  % float >= 0
lr_i            = NNtrain_args.lr_i;            % float > 0
lr_f            = NNtrain_args.lr_f;            % float > 0
plots           = NNtrain_args.plots;           % str

%% Training options
options = trainingOptions('adam');
options.MaxEpochs = 500;
options.MiniBatchSize = 256;
options.Shuffle = 'every-epoch';
options.ValidationData = {X_val, Y_val};
options.Plots = plots;
options.Verbose = false;
options.L2Regularization = regularization;
options.SequenceLength = 'shortest';
%% Learning rate scheduler
%%% Piecewise
% ri = 1e-5;
% ro = 0.1;
% i = 500;
% T = i / 10;
% drop_factor = (ri/ro)^(1/i)
% options.InitialLearnRate = ro;
% options.LearnRateSchedule = 'piecewise';
% options.LearnRateDropFactor = drop_factor;
% options.LearnRateDropPeriod = T;
%%% Exponential: df = (ri/ro)^(T/i)
N = options.MaxEpochs;
T = 1;
drop_factor = (lr_f/lr_i)^(T/N);
options.InitialLearnRate = lr_i;
options.LearnRateSchedule = 'exponential';
options.LearnRateDropFactor = drop_factor;
options.LearnRateDropPeriod = T;
%% Training
trained_net = trainnet(X_train, Y_train, net, 'mse', options);
end