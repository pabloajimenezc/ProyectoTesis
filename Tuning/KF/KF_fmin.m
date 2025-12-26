%% KF_Tuning_Optimizer.m
% Script para sintonizar qi y qF usando fminsearch (Nelder-Mead)
% Optimiza en dominio logarítmico para garantizar qi, qF > 0
clc; clear; close all;

%% 1. Cargar Datos
% Asumimos que el archivo contiene la variable 'out'
loaded_data = load('KF_TuningData.mat'); 
data = loaded_data.out'; % Transponer si es necesario para tener [7 x N]

%% 2. Configuración Inicial
% Adivinanza inicial (Initial Guess)
qi_init = 1e-4; 
qF_init = 1e-4;

% Convertimos a logaritmo para el optimizador
% x(1) = log(qi), x(2) = log(qF)
x0_log = [log(qi_init), log(qF_init)];

% DEFINICIÓN DE LA FUNCIÓN OBJETIVO (WRAPPER)
% 1. Recibe 'u' (vector logarítmico).
% 2. Aplica exp(u) para recuperar valores positivos.
% 3. Llama a KF_simulate con do_plot = false.
ObjectiveFunction = @(u) KF_simulate(struct('qi', exp(u(1)), 'qF', exp(u(2))), data, false);

%% 3. Ejecutar Optimización
fprintf('--------------------------------------------------\n');
fprintf('Iniciando fminsearch (Max 50 iteraciones)...\n');
fprintf('Valores iniciales: qi=%.2e, qF=%.2e\n', qi_init, qF_init);
fprintf('--------------------------------------------------\n');

options = optimset('Display', 'iter', ...
                   'TolFun', 1e-4, ...
                   'TolX', 1e-4, ...
                   'MaxIter', 50);

tic;
[x_opt_log, cost_min] = fminsearch(ObjectiveFunction, x0_log, options);
time_elapsed = toc;

%% 4. Procesar Resultados
% Regresar del dominio logarítmico al real
best_qi = exp(x_opt_log(1));
best_qF = exp(x_opt_log(2));

fprintf('\n--------------------------------------------------\n');
fprintf('OPTIMIZACIÓN COMPLETADA en %.2f segundos\n', time_elapsed);
fprintf('--------------------------------------------------\n');
fprintf('Mejor qi : %.6e\n', best_qi);
fprintf('Mejor qF : %.6e\n', best_qF);
fprintf('Costo Min: %.6f\n', cost_min);
fprintf('--------------------------------------------------\n');

%% 5. Verificación Visual
fprintf('Ejecutando simulación final con los óptimos...\n');
x_best = struct('qi', best_qi, 'qF', best_qF);
KF_simulate(x_best, data, true); % do_plot = true