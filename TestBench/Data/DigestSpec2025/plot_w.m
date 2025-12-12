clear all
% File: generate_summary_pdf_freq_only.m
% Grafica solo 'wy' en una hoja PDF 16:9 horizontal sin leyenda, con fuentes 1.5x más grandes.

%% 1) Load data
tbl = readtable('summaryBCD.csv');

%% 2) Crear figura 16:9 (en pulgadas)
figWidth = 16;
figHeight = 9;

fig = figure('Units','inches', ...
             'Position',[1 1 figWidth figHeight], ...
             'Color','w');

% Configurar tamaño del papel 16:9 para exportar
set(fig, 'PaperUnits', 'inches');
set(fig, 'PaperSize', [figWidth figHeight]);
set(fig, 'PaperPosition', [0 0 figWidth figHeight]);
set(fig, 'PaperPositionMode', 'manual');

%% 3) Crear layout y eje
t = tiledlayout(1,1, ...
    'TileSpacing','compact', ...
    'Padding','compact');

ax = nexttile;
hold(ax,'on');

plot(ax, tbl.Time, tbl.wy, ...
     'LineStyle','-', ...
     'LineWidth', 5, ...
     'Color', [0 0.4470 0.7410]);

hold(ax,'off');
grid(ax,'on');

% Apariencia de ejes
ax.FontSize = 30;          % 1.5x de 20
ax.Color     = [1 1 1];
ax.XColor    = [0 0 0];
ax.YColor    = [0 0 0];
ax.LineWidth = 0.5;

% Etiquetas con fuente aumentada
xlabel(ax, 'Time (s)', 'FontSize', 37.5, 'Color', 'k', 'FontWeight','bold');
ylabel(ax, 'Output Frequency (rad/s)', ...
       'FontSize', 37.5, ...
       'Color', 'k');

%% 4) Exportar a PDF horizontal 16:9
print(fig, 'TestBench/Data/DigestSpec2025/summary_freq_only.pdf', '-dpdf', '-r300');
fprintf('✅ PDF saved como hoja horizontal 16:9 con fuentes 1.5x: summary_freq_only.pdf\n');
