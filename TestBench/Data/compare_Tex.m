% Configuración de límite en eje Y en milisegundos (ajusta según convenga)
yLimit_ms = [0, 7];  % [ymin, ymax] en ms

% 1) Cargar ambos buffers
dataNN  = load('bufferNN.mat','buffer');
dataBCD = load('bufferBCD.mat','buffer');

% 2) Extraer los tiempos de ejecución (s) y el vector de tiempo
tNN_s   = dataNN.buffer.Tex_CEMPC;
tBCD_s  = dataBCD.buffer.Tex_CEMPC;
Tsim    = dataNN.buffer.Tsim;  % mismo para NN y BCD

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
