%% === 0) Configuración editable ===
useLatex   = true;
interpOpt  = ternary(useLatex,'latex','tex');
xlab_text  = '\textbf{Time (s)}';

if ~exist('TestBench/Data','dir')
    mkdir('TestBench/Data');
end

%% === 1) Extraer datos del struct "out" ============================

% ----- Figura 1: F, F*, id, id* -----
tF  = out.F.time(:);
F   = out.F.data(:,1);
Fr  = out.F.data(:,2);
id  = out.F.data(:,3);
idr = out.F.data(:,4);

% ----- Figura 2: w, w*, iq, iq*, Te -----
tW  = out.w.time(:);
w   = out.w.data(:,1);
wr  = out.w.data(:,2);
iq  = out.w.data(:,3);
iqr = out.w.data(:,4);
Te  = out.w.data(:,5);

% ----- Figura 3: Vc(1..6), i_eps(1..2), vo, vo_max, vo_min -----
tVc    = out.Vc.time(:);
Vc     = out.Vc.data(1:6,:);    % 6 tensiones de capacitor
ie     = out.Vc.data(7:8,:);    % 2 corrientes i_\varepsilon
vo     = out.Vc.data(9,:);      % 1 tensión

t_vo   = out.vo_max.time(:);    % se asume mismo tiempo para vo_max/min
vo_max = out.vo_max.data(:,1);
vo_min = out.vo_max.data(:,2);  % vo_min desde out.vo_min

% límites de Vc (constantes)
Vc_max_limit = 520*1.15;
Vc_min_limit = 520*0.85;

% máximos/mínimos alcanzados (globales) para Vc e i_eps
Vc_max_val = max(Vc,[],'all');
Vc_min_val = min(Vc,[],'all');
ie_max_val = max(ie,[],'all');
ie_min_val = min(ie,[],'all');

% ----- Figura 4: is*, is_max -----
tIs    = out.is.time(:);
isr    = out.is.data(7:12,:);    % 6 referencias (solo estas se grafican)
is_max = out.is.data(13:14,:);   % límites (+/-)

%% === FIGURA 1: Flujos y corrientes d ==============================
fig1 = figure('Units','normalized','Position',[0.1 0.1 0.6 0.8],'Color','w');
t1 = tiledlayout(2,1,'TileSpacing','compact','Padding','loose');

% Panel 1: F y F*
ax = nexttile(t1,1); hold(ax,'on');
styleAxes(ax);
plot(ax, tF, F,  'LineWidth',2);
plot(ax, tF, Fr, '--','LineWidth',2);
ylabel(ax, '$F\;[\mathrm{Vs}]$','FontSize',20,'Interpreter',interpOpt);
legend(ax, {'$F$','$F^{*}$'}, ...
       'Location','eastoutside','Interpreter',interpOpt, ...
       'Box','on','Color','w');
ax.XTickLabel = [];

% Panel 2: i_d e i_d*
ax = nexttile(t1,2); hold(ax,'on');
styleAxes(ax);
plot(ax, tF, id,  'LineWidth',2);
plot(ax, tF, idr, '--','LineWidth',2);
ylabel(ax, '$i_d\;[\mathrm{A}]$','FontSize',20,'Interpreter',interpOpt);
legend(ax, {'$i_d$','$i_d^{*}$'}, ...
       'Location','eastoutside','Interpreter',interpOpt, ...
       'Box','on','Color','w');

xlabel(t1, xlab_text,'FontSize',20,'Interpreter',interpOpt);

exportgraphics(fig1,'TestBench/Data/fig_F_id.pdf', ...
    'ContentType','vector','BackgroundColor','white','Resolution',300);

%% === FIGURA 2: Velocidad, corrientes q y torque ===================
fig2 = figure('Units','normalized','Position',[0.15 0.1 0.6 0.8],'Color','w');
t2 = tiledlayout(2,1,'TileSpacing','compact','Padding','loose');

% Panel 1: ω y ω*
ax = nexttile(t2,1); hold(ax,'on');
styleAxes(ax);
plot(ax, tW, w,  'LineWidth',2);
plot(ax, tW, wr, '--','LineWidth',2);
ylabel(ax, '$\omega\;[\mathrm{rad/s}]$','FontSize',20,'Interpreter',interpOpt);
legend(ax, {'$\omega$','$\omega^{*}$'}, ...
       'Location','eastoutside','Interpreter',interpOpt, ...
       'Box','on','Color','w');
ax.XTickLabel = [];

% Panel 2: i_q, i_q* (izq) y T_e (der)
ax = nexttile(t2,2); styleAxes(ax);

yyaxis(ax,'left');
hold(ax,'on');
plot(ax, tW, iq,  'LineWidth',2);
plot(ax, tW, iqr, '--','LineWidth',2);
ylabel(ax, '$i_q\;[\mathrm{A}]$','FontSize',20,'Interpreter',interpOpt);

yyaxis(ax,'right');
plot(ax, tW, Te,  '-.','LineWidth',2);
ylabel(ax, '$T_e\;[\mathrm{Nm}]$','FontSize',20,'Interpreter',interpOpt);

% Alinear el 0 de i_q con el 0 de T_e (ambos ejes centrados en 0)
yyaxis(ax,'left');
ylL = ax.YLim;
mL  = max(abs(ylL));
ax.YLim = [-mL mL];

yyaxis(ax,'right');
ylR = ax.YLim;
mR  = max(abs(ylR));
ax.YLim = [-mR mR];

ax.YAxis(1).Color = 'k';
ax.YAxis(2).Color = 'k';
grid(ax,'on');
legend(ax, {'$i_q$','$i_q^{*}$','$T_e$'}, ...
       'Location','eastoutside','Interpreter',interpOpt, ...
       'Box','on','Color','w');

xlabel(t2, xlab_text,'FontSize',20,'Interpreter',interpOpt);

exportgraphics(fig2,'TestBench/Data/fig_w_iq_Te.pdf', ...
    'ContentType','vector','BackgroundColor','white','Resolution',300);

%% === FIGURA 3: Vc, i_\varepsilon, v_o (+ límites y extremos) ======
fig3 = figure('Units','normalized','Position',[0.2 0.1 0.6 0.9],'Color','w');
t3 = tiledlayout(3,1,'TileSpacing','compact','Padding','loose');

% ---------- Panel 1: Vc(1..6) + límites + máximos alcanzados -------
ax = nexttile(t3,1); hold(ax,'on');
styleAxes(ax);

for k = 1:6
    plot(ax, tVc, Vc(k,:), 'LineWidth',1.5);
end

% Límites absolutos 520*1.15 y 520*0.85 (dos líneas)
yline(ax, Vc_max_limit, 'k--','LineWidth',1.5);
yline(ax, Vc_min_limit, 'k--','LineWidth',1.5);

% Máximo/mínimo alcanzados (otras dos líneas) con numerito en eje Y
yl_max = yline(ax, Vc_max_val, 'k:','LineWidth',1.0);
yl_min = yline(ax, Vc_min_val, 'k:','LineWidth',1.0);

% Etiquetas numéricas donde cortan al eje Y
yl_max.Label = sprintf('%.0f', Vc_max_val);
yl_max.LabelHorizontalAlignment = 'left';
yl_max.LabelVerticalAlignment   = 'bottom';

yl_min.Label = sprintf('%.0f', Vc_min_val);
yl_min.LabelHorizontalAlignment = 'left';
yl_min.LabelVerticalAlignment   = 'top';

ylabel(ax, '$V_c\;[\mathrm{V}]$','FontSize',20,'Interpreter',interpOpt);
legend(ax, {'$v_{c,1}$','$v_{c,2}$','$v_{c,3}$', ...
            '$v_{c,4}$','$v_{c,5}$','$v_{c,6}$'}, ...
       'Location','eastoutside','Interpreter',interpOpt, ...
       'Box','on','Color','w');
ax.XTickLabel = [];

% ---------- Panel 2: i_\varepsilon(1..2) + máximos alcanzados -------
ax = nexttile(t3,2); hold(ax,'on');
styleAxes(ax);

plot(ax, tVc, ie(1,:), '--', 'LineWidth',2);
plot(ax, tVc, ie(2,:), '--','LineWidth',2);

plot(ax, tVc, ie_max_val*ones(size(tVc)), 'k:','LineWidth',1.0, ...
     'HandleVisibility','off');
plot(ax, tVc, ie_min_val*ones(size(tVc)), 'k:','LineWidth',1.0, ...
     'HandleVisibility','off');

ylabel(ax, '$i_{\varepsilon}\;[\mathrm{A}]$','FontSize',20,'Interpreter',interpOpt);
legend(ax, {'$i_{\varepsilon,1}$','$i_{\varepsilon,2}$'}, ...
       'Location','eastoutside','Interpreter',interpOpt, ...
       'Box','on','Color','w');
ax.XTickLabel = [];

% ---------- Panel 3: v_o, v_{o,max}, v_{o,min} ----------------------
ax = nexttile(t3,3); hold(ax,'on');
styleAxes(ax);

plot(ax, tVc, vo,'--', 'LineWidth',2);

plot(ax, t_vo, vo_max, 'LineWidth',1.8, ...
     'Color','r','LineStyle',':');
plot(ax, t_vo, vo_min, 'LineWidth',1.8, ...
     'Color','r','LineStyle',':');

ylabel(ax, '$v_o\;[\mathrm{V}]$','FontSize',20,'Interpreter',interpOpt);
legend(ax, {'$v_o$','$v_{o,\max}$','$v_{o,\min}$'}, ...
       'Location','eastoutside','Interpreter',interpOpt, ...
       'Box','on','Color','w');

xlabel(t3, xlab_text,'FontSize',20,'Interpreter',interpOpt);

exportgraphics(fig3,'TestBench/Data/fig_Vc_ie_vo.pdf', ...
    'ContentType','vector','BackgroundColor','white','Resolution',300);

%% === FIGURA 4: Solo referencias is* y límites (1 solo eje) ========
fig4 = figure('Units','normalized','Position',[0.25 0.1 0.6 0.6],'Color','w');
t4 = tiledlayout(1,1,'TileSpacing','compact','Padding','loose');

ax = nexttile(t4,1); hold(ax,'on');
styleAxes(ax);

for k = 1:6
    plot(ax, tIs, isr(k,:), '--','LineWidth',1.5);
end

plot(ax, tIs, is_max(1,:), 'r:','LineWidth',2);
plot(ax, tIs, is_max(2,:), 'r:','LineWidth',2);

ylabel(ax, '$i_{s}\;[\mathrm{A}]$','FontSize',20,'Interpreter',interpOpt);
xlabel(t4, xlab_text,'FontSize',20,'Interpreter',interpOpt);

legend(ax, {'$i_{s,1}^{*}$','$i_{s,2}^{*}$','$i_{s,3}^{*}$', ...
            '$i_{s,4}^{*}$','$i_{s,5}^{*}$','$i_{s,6}^{*}$', ...
            '$i_{s,\max}$','$i_{s,\min}$'}, ...
       'Location','eastoutside','Interpreter',interpOpt, ...
       'Box','on','Color','w');

exportgraphics(fig4,'TestBench/Data/fig_is_limits.pdf', ...
    'ContentType','vector','BackgroundColor','white','Resolution',300);

%% ==== Helpers =====================================================
function out = ternary(cond,a,b)
if cond, out = a; else, out = b; end
end

function styleAxes(ax)
ax.FontSize  = 18;
ax.Color     = [1 1 1];
ax.XColor    = [0 0 0];
ax.YColor    = [0 0 0];
ax.LineWidth = 0.5;
grid(ax,'on');
end
