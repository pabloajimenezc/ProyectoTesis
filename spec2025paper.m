

%% === 0) Configuración editable ===
useLatex      = true;                      % activar LaTeX en labels/leyendas
legendLabels  = {'BCD','NN'};              % textos de leyenda
ylab_cluster = '$M_\Delta$';
ylab_resloss = '$M_\varepsilon$';
ylab_cm      = '$M_o$';
xlab_text     = '\textbf{Time (s)}';       % X label (LaTeX si useLatex=true)

% %% === 0) Etiquetas editables (LaTeX permitido) ===


%% 1) Cargar datos
tblBCD = readtable('summaryBCD.csv');
tblNN  = readtable('summaryNN.csv');

%% 2) Calcular métricas (exactas)
% --- Cluster voltage metric ---
tbl = tblNN;
vc  = [tbl.vc_ua'; tbl.vc_ub'; tbl.vc_uc'; tbl.vc_la'; tbl.vc_lb'; tbl.vc_lc'];
vcm = mean(vc,1); vcd = vc - vcm;
metric_cluster_NN = mean(vcd.^2, 1) ./ (vcm.^2);

tbl = tblBCD;
vc  = [tbl.vc_ua'; tbl.vc_ub'; tbl.vc_uc'; tbl.vc_la'; tbl.vc_lb'; tbl.vc_lc'];
vcm = mean(vc,1); vcd = vc - vcm;
metric_cluster_BCD = mean(vcd.^2, 1) ./ (vcm.^2);

% --- Resistive Loss metric ---
tbl = tblNN;
ix  = [tbl.iu'; -tbl.iu'];
iy  = [tbl.ia'; tbl.ib'; tbl.ic'];
ixy = [ix; iy];
iB  = M2C.pinvA * ixy;
ie  = [tbl.ie1'; tbl.ie2'];
iz  = M2C.N * ie;
is  = iB + iz;
metric_resloss_NN = mean(is.^2, 1) ./ (mean(iB.^2, 1) + 0.1);

tbl = tblBCD;
ix  = [tbl.iu'; -tbl.iu'];
iy  = [tbl.ia'; tbl.ib'; tbl.ic'];
ixy = [ix; iy];
iB  = M2C.pinvA * ixy;
ie  = [tbl.ie1'; tbl.ie2'];
iz  = M2C.N * ie;
is  = iB + iz;
metric_resloss_BCD = mean(is.^2, 1) ./ (mean(iB.^2, 1) + 0.1);

% --- Common-mode voltage metric ---
metric_cm_NN  = (tblNN.vo.^2)  / (100^2);
metric_cm_BCD = (tblBCD.vo.^2) / (100^2);

% tiempos
tNN  = tblNN.Time(:);
tBCD = tblBCD.Time(:);

%% 3) Figura y layout
fig = figure('Units','normalized','Position',[0.1 0.1 0.8 0.95], 'Color',[1 1 1]);
% un poco más alta para que quepan bien las leyendas
posFig = fig.Position; posFig(4) = posFig(4)*1.10; fig.Position = posFig;

t = tiledlayout(3,1, 'TileSpacing','compact', 'Padding','loose');
axesHandles = gobjects(3,1);
yLabels = { ylab_cluster, ylab_resloss, ylab_cm };

interpOpt = ternary(useLatex,'latex','tex'); % helper abajo

%% Panel 1: Cluster voltage metric  [BCD -> NN]
ax = nexttile(1); axesHandles(1)=ax; hold(ax,'on');
plot(ax, tBCD, metric_cluster_BCD, 'LineWidth',5);
plot(ax, tNN,  metric_cluster_NN,  'LineWidth',5);
hold(ax,'off'); grid(ax,'on');
styleAxes(ax);
ylabel(ax, yLabels{1}, 'FontSize',25, 'Color','k', 'Interpreter',interpOpt);
legend(ax, legendLabels, 'Location','northeast', 'Box','off', 'Interpreter',interpOpt);
ax.XTickLabel = [];

%% Panel 2: Resistive loss metric  [BCD -> NN]
ax = nexttile(2); axesHandles(2)=ax; hold(ax,'on');
plot(ax, tBCD, metric_resloss_BCD, 'LineWidth',5);
plot(ax, tNN,  metric_resloss_NN,  'LineWidth',5);
hold(ax,'off'); grid(ax,'on');
styleAxes(ax);
ylabel(ax, yLabels{2}, 'FontSize',25, 'Color','k', 'Interpreter',interpOpt);
legend(ax, legendLabels, 'Location','northeast', 'Box','off', 'Interpreter',interpOpt);
ax.XTickLabel = [];

%% Panel 3: Common-mode voltage metric  [BCD -> NN]
ax = nexttile(3); axesHandles(3)=ax; hold(ax,'on');
plot(ax, tBCD, metric_cm_BCD, 'LineWidth',5);
plot(ax, tNN,  metric_cm_NN,  'LineWidth',5);
hold(ax,'off'); grid(ax,'on');
styleAxes(ax);
ylabel(ax, yLabels{3}, 'FontSize',25, 'Color','k', 'Interpreter',interpOpt);
legend(ax, legendLabels, 'Location','northeast', 'Box','off', 'Interpreter',interpOpt);

% X label central
xlabel(t, xlab_text, 'FontSize',25, 'Color','k', 'Interpreter',interpOpt);

%% (opcional) si quieres alinear levemente las Y-labels sin riesgo de recorte:
% for r = 1:3
%     axesHandles(r).YLabel.Units = 'normalized';
%     axesHandles(r).YLabel.HorizontalAlignment = 'right';
%     pos = axesHandles(r).YLabel.Position;
%     pos(1) = -0.02;               % pequeño ajuste (no negativo grande)
%     axesHandles(r).YLabel.Position = pos;
% end

%% 4) Exportar a PDF (vector, sin recortes)
if ~exist('TestBench/Data','dir'); mkdir('TestBench/Data'); end
exportgraphics(fig, 'TestBench/Data/summary_metrics.pdf', ...
    'ContentType','vector','BackgroundColor','white','Resolution',300);
fprintf('PDF saved as TestBench/Data/summary_metrics.pdf\n');

%% ==== Helpers ====
function out = ternary(cond,a,b)
if cond, out = a; else, out = b; end
end
function styleAxes(ax)
ax.FontSize = 20;
ax.Color    = [1 1 1];
ax.XColor   = [0 0 0];
ax.YColor   = [0 0 0];
ax.LineWidth= 0.5;
end
