function [ix_max, iy_max, is_max, vo_max, vB_max, VCdiff] = max_values(Ax, Ay)
iy_max = 100;                               % Maximum output current
ix_max = Ay / Ax * iy_max;                  % Maximum input current
eta = 1.5;
is_max = (ix_max + iy_max) / 3 * (1 + eta); % Maximum cluster current
vo_max = (Ax + Ay) / 2;                   % Maximum common mode voltage
% vo_max = 0.5 * (Ax + Ay) / 2;
vB_max = Ax + Ay;                           % Maximum branch voltage
% VCdiff = 0.002;                             % Max. fraction of capacitor voltage deviation
VCdiff = 0.2/100;
% VCdiff is used for training
% and is supposed to be maximum deviation during real operation.
end

