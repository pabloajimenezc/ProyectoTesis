% Configuración de límite en eje Y en milisegundos (ajusta según convenga)
yLimit_ms = [0, 7];  % [ymin, ymax] en ms

% 1) Cargar ambos buffers
dataNN  = load('bufferNN.mat','buffer');
dataBCD = load('bufferBCD.mat','buffer');

% 2) Extraer los tiempos de ejecución (s) y el vector de tiempo
tNN_s   = dataNN.buffer.Tex_CEMPC;
tBCD_s  = dataBCD.buffer.Tex_CEMPC;
Tsim    = dataNN.buffer.Tsim;  % mismo para NN y BCD

mask = Tsim > 1e-3;
tNN_s = tNN_s(mask);
tBCD_s = tBCD_s(mask);
Tsim = Tsim(mask);

% Convertir a milisegundos
tNN_ms  = tNN_s  * 1e3;
tBCD_ms = tBCD_s * 1e3;

% 3) Crear figura con aspecto 16:9 y fondo blanco
fig = figure('Units','pixels','Position',[100,100,800,450]*3, ...
             'Color',[1 1 1]);   % 800×450 px → 16:9

ax = axes(fig);
hold(ax,'on');
grid(ax,'on');

% 4) Plot con grosor de línea 5 y colores por defecto de MATLAB
plot(ax, Tsim, tNN_ms,  'LineWidth',5, 'DisplayName','NN');
plot(ax, Tsim, tBCD_ms, 'LineWidth',5, 'DisplayName','BCD');

% 5) Formato de ejes y grid
ax.FontSize   = 25;        % ticks en fuente 25
ax.LineWidth  = 0.5;       % grosor de ejes
ax.Color      = [1 1 1];   % fondo blanco
ax.XColor     = [0 0 0];   % ejes negros
ax.YColor     = [0 0 0];   
ax.GridColor  = [0 0 0];   % grid en negro

% 6) Etiquetas en fuente 30
xlabel(ax, 'Time (s)',          'FontSize',30, 'Color','k');
ylabel(ax, 'Execution time (ms)','FontSize',30, 'Color','k');

% 7) Ajustar límites del eje Y en ms
ylim(ax, yLimit_ms);

% 8) Leyenda con fondo blanco y texto negro
lg = legend(ax, 'Location','best', 'FontSize',25);
lg.Box       = 'on';        % recuadro visible
lg.Color     = [1 1 1];     % fondo blanco
lg.TextColor = 'k';         % texto negro

hold(ax,'off');

% 9) Guardar la figura en carpeta 'TestBench/Data'
outputFolder = 'TestBench/Data';
if ~exist(outputFolder, 'dir')
    mkdir(outputFolder);
end
filename = fullfile(outputFolder, 'execution_time_comparison.png');
print(fig, filename, '-dpng', '-r300');
fprintf('Figure saved as %s\n', filename);

% ------------------------------------------------------------
% 10) Figura de caja y bigote para comparación de tiempos (colores personalizados)
fig2 = figure('Units','pixels','Position',[100,100,800,450]*3, ...
              'Color',[1 1 1]);
ax2 = axes(fig2);
hold(ax2,'on');
grid(ax2,'on');

% Preparar datos: columna 1 = NN, columna 2 = BCD
data_ms = [tNN_ms(:), tBCD_ms(:)];

% Colores por defecto de MATLAB para las dos series
colorNN  = [0    0.4470    0.7410];
colorBCD = [0.8500 0.3250    0.0980];
colors   = [colorNN; colorBCD];

% Dibujar boxplot con esos colores
boxplot(ax2, data_ms, {'NN','BCD'}, ...
        'Widths',0.5, ...
        'BoxStyle','outline', ...
        'Whisker',1.5, ...
        'Colors', colors, ...
        'Symbol','+');

% Posiciones personalizadas: más juntas
% pos = [1.0, 1.6];  

% Ajusta manualmente los límites de X para quitar espacio
ax2.XLim = [0.5, 2.5];
% ax2.XTick = pos;        % ticks en las posiciones reales
ax2.XTickLabel = {'NN','BCD'};

% Ajustar grosor de todas las líneas del axes de golpe
allLW = findall(ax2, '-property', 'LineWidth');
set(allLW, 'LineWidth', 3);

% Ajustar colores de medianas también
h = findobj(ax2, 'Tag', 'Median');
n = size(colors, 1);  % número de series (2)
for k = 1:length(h)
    % Como los objetos 'Median' vienen en orden inverso:
    row = n - k + 1;
    set(h(k), 'Color', colors(row, :), 'LineWidth', 3);
end

% Formato de ejes y grid
ax2.FontSize   = 40;
ax2.LineWidth  = 1;
ax2.Color      = [1 1 1];
ax2.XColor     = [0 0 0];
ax2.YColor     = [0 0 0];
ax2.GridColor  = [0 0 0];

% Etiquetas
xlabel(ax2, 'Control method',      'FontSize',40, 'Color','k');
ylabel(ax2, 'Execution time (ms)', 'FontSize',40, 'Color','k');

% Limitar eje Y al mismo rango
ylim(ax2, yLimit_ms);

hold(ax2,'off');

% 11) Guardar la figura de caja en la misma carpeta
filename2 = fullfile(outputFolder, 'execution_time_boxplot.png');
print(fig2, filename2, '-dpng', '-r300');
fprintf('Boxplot saved as %s\n', filename2);
% ------------------------------------------------------------