%% KEKF IMITATION LEARNING SCRIPT (FULL + DLNETWORK EXPORT)
% 1. Entrena una red neuronal usando Filtro de Kalman Extendido (KEKF).
% 2. Soporta ReLU y Leaky ReLU.
% 3. Al finalizar, ensambla un objeto 'dlnetwork' nativo y lo guarda en KEKF.mat.

%% 1. PREPARACIÓN DE DATOS
clc; close all;

fprintf('--- INICIANDO ENTRENAMIENTO KEKF ---\n');

% Verificación de seguridad
if ~exist('dlX_tr', 'var') || ~exist('dlY_tr', 'var')
    error('ERROR: No se encuentran los datos. Ejecuta primero tu script de carga (Data Preparation).');
end

% Conversión a matrices estándar (Single Precision) para velocidad extrema en bucles
X_train = single(extractdata(dlX_tr));
Y_train = single(extractdata(dlY_tr));
X_val   = single(extractdata(dlX_val));
Y_val   = single(extractdata(dlY_val));

[N_in, N_samples] = size(X_train);
N_out = size(Y_train, 1);

% Cálculo de ErrorWeights (Balanceo Corriente vs Voltaje)
% Esto evita que el voltaje (magnitud grande) domine a las corrientes (magnitud pequeña)
fprintf('Calculando pesos de error...\n');
output_var = var(Y_train, 0, 2);
n_curr = N_out - 1;
var_e = mean(output_var(1:n_curr));
var_o = output_var(end);
if var_e < 1e-9, var_e = 1e-9; end

W_err = [ones(n_curr, 1) * (var_o / var_e); 1]; % Normalización
W_err = single(W_err);

%% 2. CONFIGURACIÓN DEL MODELO

% --- OPCIONES DE ACTIVACIÓN ---
act_type = 'leaky';   % Opciones: 'relu' o 'leaky'
leaky_alpha = 0.01;   % Solo afecta si es 'leaky'
use_leaky = strcmpi(act_type, 'leaky');

fprintf('Configuración: Activación %s (alpha=%.2f)\n', upper(act_type), leaky_alpha);

% --- ARQUITECTURA ---
n_hidden = 5 * N_in;  % Ancho de capas ocultas
% Definimos la topología: [In, H1, H2, H3, Out]
arch = [N_in, n_hidden, n_hidden, n_hidden, N_out];
L = length(arch) - 1; % Número de transformaciones lineales (matrices de pesos)

% --- HIPERPARÁMETROS KEKF ---
n_epochs    = 1;       % 1 época suele bastar con KEKF si hay muchos datos
total_iters = N_samples * n_epochs;
n_warmup    = 2000;    % Pasos iniciales sin invertir matrices (solo SGD/Warmup)

eta         = 0.005;   % Learning Rate
lambda      = 0.998;   % Factor de olvido (Covariance Decay)
damping     = 1e-1;    % Regularización Tikhonov (Estabilidad numérica)
clip_lim    = 0.2;     % Gradient Clipping

% --- GEARBOX (Control Adaptativo de Frecuencia de Inversión) ---
% Invertir matrices es costoso ($O(N^3)$). Lo hacemos con frecuencia variable.
gears = [100, 80, 60, 40, 20, 10, 5, 2, 1];
gear_idx = 1;
curr_inv_freq = gears(gear_idx);
check_int = 2000;      % Intervalo para chequear si mejoramos
improv_th = 0.01;      % Umbral de mejora para relajar la frecuencia

%% 3. INICIALIZACIÓN DE PESOS Y MATRICES

fprintf('Inicializando pesos y matrices de covarianza...\n');
weights = cell(1, L);
A_cov = cell(1, L); G_cov = cell(1, L);
A_inv = cell(1, L); G_inv = cell(1, L);

for l = 1:L
    n_i = arch(l);
    n_o = arch(l+1);
    
    % Inicialización He (Kaiming) optimizada para ReLU/Leaky
    if l < L
        factor = 2 / (1 + leaky_alpha^2); 
        scale = sqrt(factor / n_i);
    else
        % Glorot para la salida (Tanh)
        scale = sqrt(2 / (n_i + n_o));
    end
    
    % Pesos manuales: Tamaño [Output x (Input + Bias)]
    weights{l} = randn(n_o, n_i + 1, 'single') * scale;
    
    % Matrices K-FAC (Covarianza e Inversa)
    A_cov{l} = eye(n_i + 1, 'single');
    G_cov{l} = eye(n_o, 'single');
    A_inv{l} = eye(n_i + 1, 'single');
    G_inv{l} = eye(n_o, 'single');
end

%% 4. BUCLE DE ENTRENAMIENTO (ONLINE)

% Configuración de Gráficos en Vivo
f_mon = figure('Name', 'KEKF Monitor', 'Color', 'w', 'Position', [100 100 900 500]);
subplot(2,1,1); 
h_mse = animatedline('Color', '#D95319', 'LineWidth', 1.5); 
set(gca, 'YScale', 'log'); grid on; ylabel('Loss (MSE)');
title(['Entrenamiento KEKF - ' upper(act_type)]);

subplot(2,1,2); 
h_spd = animatedline('Color', '#0072BD'); 
grid on; ylabel('Iteraciones / seg'); xlabel('Iteraciones');

wb = waitbar(0, 'Entrenando...');
loss_win = 0; loss_disp = 0; prev_avg = inf;
t_start = tic; t_plot = tic;
rand_idx = randperm(N_samples);

for k = 1:total_iters
    idx = rand_idx(k);
    
    % --- 4.1 FORWARD PASS ---
    x_in = X_train(:, idx);
    y_tgt = Y_train(:, idx);
    
    acts = cell(1, L+1);
    acts{1} = [x_in; 1]; % Input + Bias
    
    % Capas Ocultas (Loop)
    for l = 1:L-1
        z = weights{l} * acts{l};
        
        if use_leaky
            a = max(leaky_alpha * z, z); % Leaky ReLU
        else
            a = max(0, z);               % ReLU Estándar
        end
        
        acts{l+1} = [a; 1]; % Agregar Bias para siguiente capa
    end
    
    % Capa de Salida (Tanh)
    z_out = weights{L} * acts{L};
    y_pred = tanh(z_out);
    acts{L+1} = y_pred;
    
    % --- 4.2 CÁLCULO DE PÉRDIDA ---
    w_err = (y_tgt - y_pred) .* W_err;
    mse_step = mean(w_err.^2);
    
    loss_win = loss_win + mse_step;
    loss_disp = loss_disp + mse_step;
    
    % --- 4.3 BACKWARD PASS ---
    deltas = cell(1, L);
    
    % Delta Salida (Derivada Tanh: 1 - y^2)
    deltas{L} = w_err .* (1 - y_pred.^2); 
    
    % Delta Ocultas (Propagación hacia atrás)
    for l = L-1:-1:1
        w_nobias = weights{l+1}(:, 1:end-1); % Ignorar bias weight para backprop
        d_prop = w_nobias' * deltas{l+1};
        
        a_real = acts{l+1}(1:end-1); % Valor de activación (sin el bias artificial)
        
        % Derivada de la activación
        if use_leaky
            % 1 si positivo, alpha si negativo
            d_act = (a_real > 0) + leaky_alpha * (a_real <= 0);
        else
            % 1 si positivo, 0 si negativo
            d_act = (a_real > 0);
        end
        
        deltas{l} = d_prop .* d_act;
    end
    
    % --- 4.4 ACTUALIZACIÓN K-FAC ---
    do_inv = mod(k, curr_inv_freq) == 0;
    
    for l = 1:L
        ii = acts{l};   % Input vector (con bias)
        gg = deltas{l}; % Gradient vector
        
        % Acumular Covarianza (Moving Average)
        A_cov{l} = lambda * A_cov{l} + (1-lambda) * (ii * ii');
        G_cov{l} = lambda * G_cov{l} + (1-lambda) * (gg * gg');
        
        if k < n_warmup, continue; end
        
        % Invertir Matrices (Costoso, controlado por Gearbox)
        if do_inv
            A_inv{l} = inv(A_cov{l} + damping * eye(size(A_cov{l})));
            G_inv{l} = inv(G_cov{l} + damping * eye(size(G_cov{l})));
        end
        
        % Gradiente Natural: G_inv * g * i' * A_inv
        nat_grad = (G_inv{l} * gg) * (ii' * A_inv{l});
        
        % Clipping & Update
        c_val = clip_lim/eta;
        nat_grad = max(min(nat_grad, c_val), -c_val);
        
        weights{l} = weights{l} + eta * nat_grad;
    end
    
    % --- 4.5 LÓGICA GEARBOX (Optimización de velocidad) ---
    if mod(k, check_int) == 0 && k > n_warmup
        curr_avg = loss_win / check_int;
        loss_win = 0;
        
        impr = (prev_avg - curr_avg) / prev_avg;
        
        % Si la mejora es marginal (< 1%), reducir frecuencia de inversión para ir más rápido
        if impr < improv_th && gear_idx < length(gears)
            gear_idx = gear_idx + 1;
            curr_inv_freq = gears(gear_idx);
            curr_avg = inf; % Reset para forzar estabilización
        end
        prev_avg = curr_avg;
    end
    
    % --- 4.6 DISPLAY ---
    if mod(k, 1000) == 0
        dt = toc(t_plot); if dt==0, dt=0.001; end
        ips = 1000/dt; t_plot = tic;
        
        addpoints(h_mse, k, loss_disp/1000);
        addpoints(h_spd, k, ips);
        loss_disp = 0;
        
        msg = sprintf('Iter %d/%d | MSE: %.4f | Gear: %d | Act: %s', ...
            k, total_iters, prev_avg, curr_inv_freq, act_type);
        waitbar(k/total_iters, wb, msg);
        drawnow limitrate;
    end
end
close(wb);

%% 5. CONVERSIÓN A DLNETWORK Y GUARDADO

fprintf('Ensamblando objeto dlnetwork nativo...\n');

% Paso 1: Crear array de capas
layers_array = [ featureInputLayer(N_in, 'Name', 'input') ];

% Paso 2: Iterar y construir capas usando los pesos aprendidos
for l = 1:L
    % Extraer pesos y bias de la matriz manual
    % Formato Manual: [W | b] en una sola matriz
    W_manual = weights{l};
    W_matlab = W_manual(:, 1:end-1); % Parte de Pesos
    b_matlab = W_manual(:, end);     % Parte de Bias
    
    num_neurons = size(W_matlab, 1);
    
    % Crear Capa Fully Connected
    fc_name = sprintf('fc_%d', l);
    fc_layer = fullyConnectedLayer(num_neurons, ...
        'Name', fc_name, ...
        'Weights', W_matlab, ...
        'Bias', b_matlab);
    
    layers_array = [layers_array; fc_layer];
    
    % Agregar Capa de Activación
    act_name = sprintf('act_%d', l);
    if l < L
        % Capas Ocultas
        if use_leaky
            layers_array = [layers_array; leakyReluLayer(leaky_alpha, 'Name', act_name)];
        else
            layers_array = [layers_array; reluLayer('Name', act_name)];
        end
    else
        % Capa Final (Siempre Tanh para este control)
        layers_array = [layers_array; tanhLayer('Name', 'out_tanh')];
    end
end

% Paso 3: Crear el objeto dlnetwork
net = dlnetwork(layers_array);

% Paso 4: VERIFICACIÓN FINAL (Manual Forward Pass Corregido)
% Probamos con 1 muestra para asegurar que la copia fue exacta
x_sample = [X_val(:,1); 1]; % Input inicial + Bias

% Propagación manual iterativa (igual que en el entrenamiento)
for l_chk = 1:L-1
    z_chk = weights{l_chk} * x_sample;
    if use_leaky
        a_chk = max(leaky_alpha * z_chk, z_chk);
    else
        a_chk = max(0, z_chk);
    end
    x_sample = [a_chk; 1]; % Bias para siguiente capa
end
% Última capa (Tanh)
Y_manual_val = tanh(weights{L} * x_sample);

% Predicción con la red dlnetwork
Y_net_val = extractdata(predict(net, dlarray(X_val(:,1), 'CB')));

diff_check = mean(abs(Y_manual_val - Y_net_val));
fprintf('Verificación de conversión (Error medio): %.10f\n', diff_check);

if diff_check > 1e-5
    warning('ATENCIÓN: Hay una discrepancia entre el cálculo manual y la red guardada.');
else
    fprintf('¡ÉXITO! La red dlnetwork es idéntica a la entrenada manualmente.\n');
end

% Paso 5: GUARDAR
save('KEKF.mat', 'net');
fprintf('Red guardada exitosamente en "KEKF.mat".\n');