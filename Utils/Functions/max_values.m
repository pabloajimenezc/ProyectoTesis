function [ix_max, iy_max, is_max, vo_max, vB_max, VCdiff, eta] = max_values(Ax, Ay, Topology)
    % max_values: Get maximum values for system variables

%% Currents

iy_max = 4;                                 % Maximum output current
% Maximum input and cluster current
if strcmp(Topology, 'M3C')
    eta = 1;
    ix_max = (Ay / Ax) * iy_max;
    is_max = (ix_max / 3 + iy_max / 3) * (1 + eta);
elseif strcmp(Topology, 'M2C')
    ix_max = 3 * Ay / (2 * Ax) * iy_max;
    % is_max = (ix_max / 2 + iy_max / 3) * (1 + eta);
    is_max = 8.5;
    eta = is_max / (ix_max / 2 + iy_max / 3) - 1;
end

%% Voltages
vo_max = (Ax + Ay) / 2;                     % Maximum common mode voltage
vB_max = Ax + Ay;                           % Maximum branch voltage
VCdiff = 15/100;                            % Max. fraction of capacitor voltage deviation
% VCdiff is used for training
% and is supposed to be maximum deviation during real operation.

end