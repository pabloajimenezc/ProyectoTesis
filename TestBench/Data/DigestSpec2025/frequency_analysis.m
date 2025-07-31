% clear all
% tblBCD = readtable('summaryBCD.csv');
% tblNN  = readtable('summaryNN.csv');
% 
% tables = {tblBCD, tblNN};
% methodNames = {'BCD', 'NN'};
% 
% %% FFT promedio de ie*_ref
% t1 = tblBCD.Time; Ts1 = mean(diff(t1)); Fs1 = 1/Ts1; N1 = length(t1); f1 = Fs1*(0:(N1/2))/N1;
% t2 = tblNN.Time;  Ts2 = mean(diff(t2)); Fs2 = 1/Ts2; N2 = length(t2); f2 = Fs2*(0:(N2/2))/N2;
% assert(all(abs(f1-f2)<1e-6),'Frecuencia de muestreo distinta');
% 
% ie_ref_BCD = mean([tblBCD.ie1_ref, tblBCD.ie2_ref],2);
% ie_ref_NN  = mean([tblNN.ie1_ref,  tblNN.ie2_ref],2);
% 
% X1 = fft(ie_ref_BCD); X1 = abs(X1/N1); X1 = X1(1:floor(N1/2)+1); X1(2:end-1) = 2*X1(2:end-1);
% X2 = fft(ie_ref_NN);  X2 = abs(X2/N2); X2 = X2(1:floor(N2/2)+1); X2(2:end-1) = 2*X2(2:end-1);
% 
% % Ajuste lineal
% mdl = fitlm(X1, X2, 'linear');
% slope = mdl.Coefficients.Estimate(2);
% intercept = mdl.Coefficients.Estimate(1);
% R2 = mdl.Rsquared.Ordinary;
% 
% % Scatter
% figure('Name', 'FFT Comparison: Circulating Current Ref', 'Color', 'w');
% scatter(X1, X2, 20, f1, 'filled'); colorbar; hold on;
% mx = max([X1(:);X2(:)]);
% plot([0 mx], [0 mx], 'k--', 'LineWidth',1.5); % y=x
% plot([0 mx], intercept + slope*[0 mx], 'r-', 'LineWidth',2);
% xlabel('BCD Magnitude'), ylabel('NN Magnitude')
% title('Circulating Current Ref: FFT Magnitude Comparison')
% 
% % Mostrar ecuación y R^2
% str_eq = sprintf('y = %.3f x %+0.3f', slope, intercept);
% str_r2 = sprintf('R^2 = %.4f', R2);
% text(0.05*mx, 0.85*mx, {str_eq, str_r2},...
%     'FontSize',14,'FontWeight','bold','Color','k','BackgroundColor','w');
% 
% grid on
% 
% %% FFT de vo
% vo_BCD = tblBCD.vo;
% vo_NN  = tblNN.vo;
% 
% Y1 = fft(vo_BCD); Y1 = abs(Y1/N1); Y1 = Y1(1:floor(N1/2)+1); Y1(2:end-1) = 2*Y1(2:end-1);
% Y2 = fft(vo_NN);  Y2 = abs(Y2/N2); Y2 = Y2(1:floor(N2/2)+1); Y2(2:end-1) = 2*Y2(2:end-1);
% 
% mdl = fitlm(Y1, Y2, 'linear');
% slope = mdl.Coefficients.Estimate(2);
% intercept = mdl.Coefficients.Estimate(1);
% R2 = mdl.Rsquared.Ordinary;
% 
% figure('Name', 'FFT Comparison: Common-Mode Voltage', 'Color', 'w');
% scatter(Y1, Y2, 20, f1, 'filled'); colorbar; hold on;
% mx = max([Y1(:);Y2(:)]);
% plot([0 mx], [0 mx], 'k--', 'LineWidth',1.5); % y=x
% plot([0 mx], intercept + slope*[0 mx], 'r-', 'LineWidth',2);
% xlabel('BCD Magnitude'), ylabel('NN Magnitude')
% title('Common-Mode Voltage: FFT Magnitude Comparison')
% 
% str_eq = sprintf('y = %.3f x %+0.3f', slope, intercept);
% str_r2 = sprintf('R^2 = %.4f', R2);
% text(0.05*mx, 0.85*mx, {str_eq, str_r2},...
%     'FontSize',14,'FontWeight','bold','Color','k','BackgroundColor','w');
% 
% grid on



% 
% 
% clear all
% tblBCD = readtable('summaryBCD.csv');
% tblNN  = readtable('summaryNN.csv');
% 
% Fs = 1/mean(diff(tblBCD.Time));
% window = 256; 
% noverlap = round(0.8 * window); 
% nfft = 512;
% 
% %% --- Circulating current ref ---
% ie_ref_BCD = mean([tblBCD.ie1_ref, tblBCD.ie2_ref],2);
% ie_ref_NN  = mean([tblNN.ie1_ref,  tblNN.ie2_ref],2);
% 
% [Sb,F,T] = spectrogram(ie_ref_BCD, window, noverlap, nfft, Fs);
% [Sn,~,~] = spectrogram(ie_ref_NN, window, noverlap, nfft, Fs);
% Diff_ie = abs(Sb) - abs(Sn); % Diferencia algebraica de magnitud espectral
% 
% %% --- Common-mode voltage (vo) ---
% vo_BCD = tblBCD.vo;
% vo_NN  = tblNN.vo;
% 
% [Svb,Fv,Tv] = spectrogram(vo_BCD, window, noverlap, nfft, Fs);
% [Svn,~,~]   = spectrogram(vo_NN, window, noverlap, nfft, Fs);
% Diff_vo = abs(Svb) - abs(Svn); % Diferencia algebraica de magnitud espectral
% 
% %% --- Plots juntos, usando colormap tipo 'jet' centrado en cero ---
% figure('Name','Spectrogram Signed Difference Heatmaps','Color','w');
% 
% subplot(2,1,1)
% imagesc(T,F,Diff_ie);
% set(gca,'YDir','normal');
% xlabel('Time [s]'); ylabel('Frequency [Hz]');
% title('Signed Difference: |Spectrogram BCD| - |Spectrogram NN| (Circulating Current Ref)');
% colorbar
% ylim([0 500])
% clim([-max(abs(Diff_ie(:))) max(abs(Diff_ie(:)))]) % Centra el color en cero
% % colormap(gca, 'colorcube');
% colormap(gca, black_blue_white_red_black(256));
% 
% subplot(2,1,2)
% imagesc(Tv,Fv,Diff_vo);
% set(gca,'YDir','normal');
% xlabel('Time [s]'); ylabel('Frequency [Hz]');
% title('Signed Difference: |Spectrogram BCD| - |Spectrogram NN| (Common-Mode Voltage)');
% colorbar
% ylim([0 200])
% clim([-max(abs(Diff_vo(:))) max(abs(Diff_vo(:)))])
% % colormap(gca, 'colorcube');
% colormap(gca, black_blue_white_red_black(256));
% 
% function cmap = black_blue_white_red_black(N)
% % Mapa de color: negro → azul → blanco → rojo → negro (con degradado suave)
% if nargin < 1
%     N = 256;
% end
% 
% % Define los puntos de control del gradiente:
% %    negro      azul      blanco     rojo     negro
% cpts = [ 0  0  0;   % negro (mínimo)
%          0  0  1;   % azul
%          1  1  1;   % blanco (cero)
%          1  0  0;   % rojo
%          0  0  0];  % negro (máximo)
% 
% xp = linspace(0,1,size(cpts,1)); % posiciones de los puntos de control
% xi = linspace(0,1,N);            % interpolación para N colores
% 
% cmap = zeros(N,3);
% for k = 1:3
%     cmap(:,k) = interp1(xp, cpts(:,k), xi, 'linear');
% end
% end


clear all
tblBCD = readtable('summaryBCD.csv');
tblNN  = readtable('summaryNN.csv');

Fs = 1/mean(diff(tblBCD.Time));
window = 512;
noverlap = round(0.8 * window);
nfft = 1024;

%% Corriente circulante de referencia: promedio espectral de ie1_ref y ie2_ref
signals_BCD = [tblBCD.ie1_ref, tblBCD.ie2_ref];
signals_NN  = [tblNN.ie1_ref,  tblNN.ie2_ref];

specs_BCD = [];
specs_NN = [];
for k = 1:2
    [S_BCD,F,T] = spectrogram(signals_BCD(:,k), window, noverlap, nfft, Fs);
    [S_NN,~,~]  = spectrogram(signals_NN(:,k),  window, noverlap, nfft, Fs);
    specs_BCD(:,:,k) = abs(S_BCD); % f x t x canal
    specs_NN(:,:,k)  = abs(S_NN);
end
meanSpec_BCD = mean(specs_BCD, 3); % promedio espectral entre corrientes
meanSpec_NN  = mean(specs_NN, 3);

%% Tensión de modo común (vo)
vo_BCD = tblBCD.vo;
vo_NN  = tblNN.vo;
[Svb,Fv,Tv] = spectrogram(vo_BCD, window, noverlap, nfft, Fs);
[Svn,~,~]   = spectrogram(vo_NN, window, noverlap, nfft, Fs);

%% Figura 2x2
figure('Name','Spectrograms BCD vs NN','Color','w', 'Position',[200 200 1200 800]);

subplot(2,2,1)
imagesc(T,F,meanSpec_BCD);
set(gca,'YDir','normal');
xlabel('Time [s]'); ylabel('Frequency [Hz]');
title('Circulating Current Ref (BCD)');
colorbar; ylim([0 500])
colormap(gca, 'jet');

subplot(2,2,2)
imagesc(T,F,meanSpec_NN);
set(gca,'YDir','normal');
xlabel('Time [s]'); ylabel('Frequency [Hz]');
title('Circulating Current Ref (NN)');
colorbar; ylim([0 500])
colormap(gca, 'jet');

subplot(2,2,3)
imagesc(Tv,Fv,abs(Svb));
set(gca,'YDir','normal');
xlabel('Time [s]'); ylabel('Frequency [Hz]');
title('Common-Mode Voltage (BCD)');
colorbar; ylim([0 200])
colormap(gca, 'jet');

subplot(2,2,4)
imagesc(Tv,Fv,abs(Svn));
set(gca,'YDir','normal');
xlabel('Time [s]'); ylabel('Frequency [Hz]');
title('Common-Mode Voltage (NN)');
colorbar; ylim([0 200])
colormap(gca, 'jet');

vec1 = meanSpec_BCD(:);
vec2 = meanSpec_NN(:);

R = corr(vec1, vec2);
MSE = mean((vec1 - vec2).^2);
cos_sim = dot(vec1, vec2) / (norm(vec1) * norm(vec2));

fprintf('Correlación (R): %.4f\n', R)
fprintf('Cosine similarity: %.4f\n', cos_sim)
fprintf('MSE: %.6f\n', MSE)

vec1 = Svb(:);
vec2 = Svn(:);

R = corr(vec1, vec2);
MSE = mean((vec1 - vec2).^2);
cos_sim = dot(vec1, vec2) / (norm(vec1) * norm(vec2));

fprintf('Correlación (R): %.4f\n', R)
fprintf('Cosine similarity: %.4f\n', cos_sim)
fprintf('MSE: %.6f\n', MSE)