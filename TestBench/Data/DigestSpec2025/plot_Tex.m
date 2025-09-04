clear all

%% Configuración
yLimit_ms = [0, 7];
figWidth = 16;
figHeight = 9;
outputFolder = 'TestBench/Data/DigestSpec2025';
if ~exist(outputFolder, 'dir'), mkdir(outputFolder); end

%% Cargar datos
dataNN  = load('bufferNN.mat','buffer');
dataBCD = load('bufferBCD.mat','buffer');

tNN_ms  = dataNN.buffer.Tex_CEMPC(:) * 1e3;
tBCD_ms = dataBCD.buffer.Tex_CEMPC(:) * 1e3;
Tsim    = dataNN.buffer.Tsim(:);

mask = Tsim > 1e-3;
tNN_ms  = tNN_ms(mask);
tBCD_ms = tBCD_ms(mask);

%% Crear figura 16:9
fig = figure('Units','inches', ...
             'Position',[1 1 figWidth figHeight], ...
             'Color','w');

set(fig, 'PaperUnits', 'inches');
set(fig, 'PaperSize', [figWidth figHeight]);
set(fig, 'PaperPosition', [0 0 figWidth figHeight]);
set(fig, 'PaperPositionMode', 'manual');

t = tiledlayout(1,1, ...
    'TileSpacing','compact', ...
    'Padding','compact');

ax = nexttile(t);
hold(ax,'on');
grid(ax,'on');

%% Datos y colores
data_ms = [tBCD_ms, tNN_ms];  % BCD primero, NN segundo
colorBCD = [0    0.4470 0.7410];      % azul
colorNN  = [0.8500 0.3250 0.0980];    % naranjo
colors   = [colorBCD; colorNN];

% Posiciones personalizadas
positions = [1, 1.7];

% Boxplot con etiquetas correctas y posición ajustada
boxplot(ax, data_ms, 'Labels', {'BCD','NN'}, ...
        'Widths', 0.5, ...
        'Positions', positions, ...
        'BoxStyle','outline', ...
        'Whisker', 1.5, ...
        'Colors', colors, ...
        'Symbol', '+');

% Colorear medianas
h = findobj(ax, 'Tag', 'Median');
set(h(2), 'Color', colorBCD, 'LineWidth', 3);  % BCD izquierda
set(h(1), 'Color', colorNN,  'LineWidth', 3);  % NN derecha

% Estilo gráfico
set(findall(ax, '-property', 'LineWidth'), 'LineWidth', 3);
ax.Box = 'off';
ax.XLim = [0.5, 2.2];  % área visual más compacta
ax.FontSize = 30;
ax.LineWidth = 1;
ax.Color = [1 1 1];
ax.XColor = [0 0 0];
ax.YColor = [0 0 0];
ax.GridColor = [0 0 0];

xlabel(ax, 'Control method',      'FontSize', 37.5, 'Color','k', 'FontWeight','bold');
ylabel(ax, 'Execution time (ms)', 'FontSize', 37.5, 'Color','k');
ylim(ax, yLimit_ms);

hold(ax,'off');

%% Guardar
filename = fullfile(outputFolder, 'execution_time_boxplot.pdf');
print(fig, filename, '-dpdf', '-r300');
fprintf('✅ Figura guardada: %s\n', filename);
