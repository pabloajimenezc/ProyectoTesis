%% PRELIMINARY
s = tf('s');
sqr3 = 1.73205080756888;
TWOPI = 6.283185307179586476925286766559;
e = 2.718281828;
j = sqrt(-1);

Np = 2; % Prediction horizon

Tabc = [1 0; -.5 sqrt(3)/2; -.5 -sqrt(3)/2];
TGD = 0.5*[1 1;
        1 -1];
Tab0 = (1/3)*[2 -1 -1; 
              0 sqrt(3) -sqrt(3); 
              1 1 1];
Taby = Tab0';
P = [TGD zeros(2,3);
     zeros(3,2) Tab0];
A = [1 1 1 0 0 0;
     0 0 0 1 1 1;
     -1 0 0 -1 0 0;
     0 -1 0 0 -1 0;
     0 0 -1 0 0 -1];
N = [1 1;
     -1 0
     0 -1;
     -1 -1;
     1 0;
     0 1];
%N=[1/sqrt(3) 0;-1/(2*sqrt(3)) 1/2;-1/(2*sqrt(3)) -1/2;-1/sqrt(3) 0;1/(2*sqrt(3)) -1/2;1/(2*sqrt(3)) 1/2]; %orthonormal matrix

At = P*A;
An = At(1:4,:);
T = [An;
    pinv(N)];


sqr2=1.73205080756888;
PI=3.1415926535897932384626433832795;
TWOPI=6.283185307179586476925286766559;
%Ag=2*7000;			%Grid Amplitude
Ag=520;
%Ag=80;
Fg=0;			%Grid Frequency
%Am=4900;
Am=380*sqrt(2/3);
%Am=100;
Fm=50;		%Input frequency
Wg=2*pi*Fg;
Wm=2*pi*Fm;
n=4;				%Bridges per arm
%n=3;
%Kcap=1/7e-3;
%Kcap=1/20e-3; 
Kcap=1/(987e-6);
%Tiempos y matriz


N1=repmat({N(:,1)},1,Np);
N1=blkdiag(N1{:});
N2=repmat({N(:,2)},1,Np);
N2=blkdiag(N2{:});

% Matrices de transformacion
Tabc = [1 0; -.5 sqrt(3)/2; -.5 -sqrt(3)/2];
Tab0 = (1/sqrt(6))*[2 -1 1; 0 sqrt(3) sqrt(3); sqrt(2) sqrt(2) sqrt(2)];
Tab  = (2/3)*[1 -.5 -.5; 0 sqrt(3)/2 -sqrt(3)/2];

%% CLUSTERS PARAMETERS
V0c = 0;			%Initial voltage for each capacitor
n = 4;				%Bridges per arm
Vc_sm = 130;
Vc0 = n*Vc_sm;

Lmm = 5e-3;    
Rm = 0.025;
L = 5e-3;			%Arm inductance
R = 0.2;			%Arm resistance
C_sm = 987e-6;	    %Capacitance in each cell
Kcap = 1/(C_sm*Vc0);

Vxymax=(Ag+Am)/2; %max possible arm voltage
%V0=(1.4815*Vxymax)^2;			%Initial voltage for each capacitor
V0=(1.11*Vxymax)^2;	
V0i=sqrt(V0);
V0i=0;
%V0=150^2;
V0c = 1*V0;
%Vc0=1.5*Vxymax;
Vc0=1.2526*Vxymax;
%C=20e-3;			%Capacitance in each cell
C=987e-6;
%C=4.7e-3;
fs=700;		%Switch frequency

fc2=1/(3*fs);
fc3=2/(3*fs);

Lm=5e-4;
Rm=0.1;
%L=1.3e-3;			%Arm inductance
%L=12e-3;
L=5e-3;
%L=2.5e-3;
%R=1e-6;			%Arm resistance
R=0.0001;
Lg=4e-3;		%Load inductance
%Lg=5e-3;
Rg=0.0001;			%Load resistance
Kpc=13;				%Proporcional gain, input current control (resonant)
Kz=-2*pi*L*200;	%Proporcional gain, circulating current control
%% DC-LINK
Vdc = n*Vc_sm;			%DC Amplitude
% Vdc = 500;
%% SAMPLING
fs = 6e3;		%Switch frequency
ts = 1/fs;	%Sample time
tsim = ts/40;

%%capacitor control

Kpt=6.48156886919677;
Kit=397.264633627808;
Kpt=(2*Vc0*n*C/Am)*6^2;
Kit=6.44*(2*Vc0*n*C/Am)*6^2;
%input control
%Kpo=100*pi*Lm	%Proporcional gain, input current control
%Kio=100*pi*0.1	%Integral gain, input current control
Kpo=1.9825;	%Proporcional gain, input current control
Kio=198.25;	%Integral gain, input current control

%output control
%Kpo2=200*pi*Lg	%Proporcional gain, output (load) current control
%Kio2=400*pi*0.1	%Integral gain, output (load) current control
Kpo2=1.9825;
Kio2=198.25;

f1=5;
K1=2*sqrt(6)*n*C*f1*pi*Vc0/Am;	%Inner-Subconverter proportional gain, currend control

f0i=5;
K0i=2*sqrt(3)*n*C*f1*pi*Vc0/Am;		%Inter-Subconverter proportional gain, currend control

f0V=5;
Is=1500;
K0V=4*n*C*f0V*pi*Vc0/Is;				%Inter-Subconverter proportional gain, voltage control



umax=Vxymax;	%Maximun voltage
umin=-Vxymax;	%Maximun voltage
vmax=Vxymax;		%Maximun voltage
aw=1;			   %Anti wind-up (Anti wind-up active if aw>1)
imax=10;

%parameters
prmt_CCV=[K0i,K0V,K1];
prmt_TEB=[Kpt,Kit,imax,Am,ts];
prmt_IIC=[Lm,Kpo,Kio,vmax,ts];
prmt_OIC=[Lg,Kpo2,Kio2,vmax,ts];

%induction machine
%  rs=0.203; %stator resistance
%  rr=0.158*12; %rotor resistance
%  lls=9.968e-3; %stator leakage inductance
%  llr=10.37e-3; %rotor leakage inductance
%  lm=277.8e-3; %main inductance
% ls=lls+lm; %stator inductance
%  lr=llr+lm; %rotor inductance
%% MACHINE PARAMETERS
VLLN = 380; %V
fN = 50; %Hz
PN = 3e3; %W
FPn = 0.81;
SN = PN/FPn; %VA
nN = 1450; % rpm
IN = SN/(VLLN*sqrt(3)); %A

p = 2; % pares de polos
% J = 0.1;
J = 0.006;
TN = PN/(nN*pi/30);

Rs = 1.8;
Rr = 1.8;
% Rs = 1.5;
% Rr = 1.5;
Lsigmas = 2.6e-3;
Lsigmar = 2.6e-3;
% Lm = 97.2e-3;
Lm = 235.1e-3;

Ls = Lsigmas + Lm;
Lr = Lsigmar + Lm;

% Valores base
Vb = sqrt(2)*VLLN/sqrt(3); %Tensión peak de fase
Ib = sqrt(2)*IN;
fb = fN;

%Se desprende
wb = 2*pi*fb;
Zb = Vb/Ib;
Lb = Zb/wb;

kr = Lm/Lr;
ks = Lm/Ls;
tr=Lr/Rr;
sigma = 1 - ks*kr;
Rsig = Rs + Rr*kr^2;
Leq = Ls*sigma + L*0.5;

ws_nom = 2*pi*fN;
phirN = 1*Vb/ws_nom;
IsdN = phirN/Lm;
%% PWM
fc = fs/(1*n);
tc = 1/fc;
Ns = ts/tsim;
prmt_pspwm = [ts, Ns, n, tc, tsim];

%% INPUT CURRENT CONTROL

K_icc = -1/R;
tau_icc = L/R;

dam = 0.8;
% tau_dom = ts*10;
wn_icc = 2*pi*250;

kp_icc = (2*dam*wn_icc*tau_icc - 1)/K_icc;
ki_icc = (tau_icc*(wn_icc^2))/K_icc;

C_icc = (kp_icc*s + ki_icc)/(s);

[n_icc, ~, k_icc] = ZPK(c2d(C_icc, ts, 'tustin'));

vmax_icc = 1.5*Vdc;

%% TOTAL ENERGY BALANCE CONTROL
K_teb = Vdc;

% wn_teb = wn_icc/5;
wn_teb = 2*pi*10;

kp_teb = 2*dam*wn_teb/K_teb;
ki_teb = (wn_teb^2)/K_teb;

C_teb = (kp_teb*s + ki_teb)/(s);

[n_teb, ~, k_teb] = ZPK(c2d(C_teb, ts, 'tustin'));

imax_teb = 4.2;
En_tref = 6*0.5*C_sm*n*(Vc_sm)^2;

%% OUTPUT CURRENT CONTROL

K_occ = 1/(Rsig);
tau_sig = Leq/Rsig;

dam_occ = 0.8;
tau_dom = ts*10; 
wn_occ = 1/(dam*tau_dom);

% wn_occ = 2*pi*80;

kp_occ = (2*dam*wn_occ*tau_sig - 1)/K_occ;
ki_occ = (tau_sig*(wn_occ^2))/K_occ;

C_occ = (kp_occ*s + ki_occ)/(s);

[n_occ, ~, k_occ] = ZPK(c2d(C_occ, ts, 'tustin'));

vmax_occ = Vb*1;


%% SPEED CONTROL
kT = 1.5*p*kr;
% k_conv = 117.65;
% k_p = p*pi/30;
k_conv = 1;
k_p = 1;
K_speed = kT*p*phirN/(J*k_conv*k_p);
% K_speed = 1.5*Lm*IsdN/(J*k_conv*k_p);

% wn_speed = min([2*pi*30 wn_occ/10]);
wn_speed = 2*pi*8;

kp_speed = 20*dam*wn_speed/K_speed;
ki_speed = 10*(wn_speed^2)/K_speed;

C_speed = (kp_speed*s + ki_speed)/(s);

[n_speed, ~, k_speed] = ZPK(c2d(C_speed, 6*ts, 'tustin'));

% imax_speed = 1*Ib;
imax_speed = 5;

wm_ref = nN*p/60;

%% FLUX CONTROL

tau_r = Lr/Rr;

% wn_flux = min([2*pi*10 wn_occ/10]);
wn_flux = 2*pi*4;

kp_flux = (wn_flux^2)*tau_dom*tau_r - 1;

% imax_flux = 1*Ib;
imax_flux = 5;

%% FLUX OBSERVER

% load covar.mat

J_imag = [0 -1;
          1 0];
w_sint = 2*pi*200;
tau_sig = Ls*sigma/Rsig;
A11 = -(1/tau_sig)*eye(2);
A21 = (Lm/tau_r)*eye(2);
A12 = (kr/(sigma*Ls))*((1/tau_r)*eye(2) - w_sint*J_imag);
A22 = -((1/tau_r)*eye(2) - J_imag*w_sint);
B1 = (1/(sigma*Ls))*eye(2);
B_obs = [B1; zeros(2)];
C_obs = [eye(2) zeros(2)];

A_obs = [A11*0 A12*0;
         A21 A22];
Ad_obs = eye(4) + A_obs*ts + 0.5*A_obs*A_obs*(ts^2);

% [~,K_obs1,~] = idare(Ad_obs', C_obs', 1*eye(4), R_error1);
[~,K_obs1,~] = idare(Ad_obs', C_obs', 1*eye(4), zeros(2));

w_sint = -2*pi*200;

A11 = -(1/tau_sig)*eye(2);
A21 = (Lm/tau_r)*eye(2);
A12 = (kr/(sigma*Ls))*((1/tau_r)*eye(2) - w_sint*J_imag);
A22 = -((1/tau_r)*eye(2) - J_imag*w_sint);
C_obs = [eye(2) zeros(2)];

A_obs = [A11*0 A12*0;
         A21 A22];
% A_obs = [A21 A22];
Ad_obs = eye(4) + A_obs*ts + 0.5*A_obs*A_obs*(ts^2);

% [~,K_obs2,~] = idare(Ad_obs', C_obs', 1*eye(4), R_error1);
[~,K_obs2,~] = idare(Ad_obs', C_obs', 1*eye(4), zeros(2));

K_obsp = K_obs1';
K_obsm = K_obs2';

%% INTERCLUSTER BALANCE (CIRCULATING CURRENT REFERENCE GENERATOR) 

% ip im ia ib ic = A*[ipa ipb ipc ima imb imc]
A = [1 1 1 0 0 0;
     0 0 0 1 1 1;
     -1 0 0 -1 0 0;
     0 -1 0 0 -1 0;
     0 0 -1 0 0 -1];
imax_admm = 8.5;
b_admm = imax_admm*ones(Np,1);
c_admm = -imax_admm*ones(Np,1);
A_admm = zeros(2*Np, Np);
for i = 0:Np-1
    A_admm(2*i+1,i+1) = 1;
    A_admm(2*i+2,i+1) = -1;
end
b_admm_1 = imax_admm*ones(2*Np,1);
vomax=260;
b_cmv = 260*ones(Np,1);
% for j = 1:Np
%     if j == 1
%         b_admm(j) = imax_admm;
%         c_admm(j) = -imax_admm;
%     end
% end

q = 1;
lambda_z = 1/(5*150); % Control effort
lambda_e = 1; % Tracking error
rho = 0.02e0;
lambda_zo = (Np/4)*(5/6)*0.5e-1;


Ak = zeros(5*Np,Np,6);

for j = 1:6
    for l = 0:Np-1
        Ak(5*l+1:5*l+5,l+1,j) = A(:,j);
    end
end

lambda_o = lambda_z; % Control effort i_z0

A_g = [Ak(:,:,1) Ak(:,:,2) Ak(:,:,3) Ak(:,:,4) Ak(:,:,5) Ak(:,:,6)];
b_g = zeros(5*Np,1);
ub_qp = 12*ones(6*Np,1);
lb_qp = -12*ones(6*Np,1);
R_g = [lambda_z*eye(Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np);
       zeros(Np,Np) lambda_z*eye(Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np);
       zeros(Np,Np) zeros(Np,Np) lambda_z*eye(Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np);
       zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) lambda_z*eye(Np) zeros(Np,Np) zeros(Np,Np);
       zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) lambda_z*eye(Np) zeros(Np,Np);
       zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) zeros(Np,Np) lambda_z*eye(Np)];
N=[1/sqrt(3) 0;-1/(2*sqrt(3)) 1/2;-1/(2*sqrt(3)) -1/2;-1/sqrt(3) 0;1/(2*sqrt(3)) -1/2;1/(2*sqrt(3)) 1/2];
%[phi,vmag]=cart2pol(Vxab(1),Vxab(2));
%N=(1/sqrt(3))*[cos(phi) -sin(phi);cos(phi-2*pi/3) -sin(phi-2*pi/3); cos(phi+2*pi/3) -sin(phi+2*pi/3);-cos(phi) sin(phi);-cos(phi-2*pi/3) sin(phi-2*pi/3); -cos(phi+2*pi/3) sin(phi+2*pi/3)];
N1=repmat({N(:,1)},1,Np);
N1=blkdiag(N1{:});
N2=repmat({N(:,2)},1,Np);
N2=blkdiag(N2{:});
Hz=eye(Np)*(rho+4*0.03);
Hiz=inv(Hz);
%% CIRCULATING CURRENT CONTROL (MPC)
lambda_u = 1e-4; %Control effort
lambda_i = 1; %Tracking error
G_cc = [1 1;
       -1 0;
        0 -1;
       -1 -1;
        1  0;
        0  1];
Vmax_cc = 100;
A_cc = [1 0;
        0 1;
        -1 0;
        0 -1];
b_cc = Vmax_cc*ones(4,1);
%% CARGA

R_l = 23;
L_l = 1e-3;

kp = 1/R_l;
tau_p = L_l/R_l; 

dam = 0.8;
wn = 2*pi*250;
kmax = 1.5; % cantidad de saturación

kpi = 2*dam*wn*L_l - R_l;
kii = (wn^2)*L_l; 
Vmax = 100;

C_i = (kpi*s + kii)/(s);

[ni, ~, ki] = ZPK(c2d(C_i, ts, 'tustin'));

prmt_OCCRL = [ki, ni, Vmax, ts, L_l+L/2];

%% CALLING PARAMETERS
prmt_LCB = [ts, Vc_sm, C_sm];

prmt_TEB = [k_teb, n_teb, imax_teb, Vdc, C_sm, n, ts, wn_teb, dam, e];
prmt_ICC = [k_icc, n_icc, vmax_icc, Vdc, n];

prmt_OCC = [k_occ, n_occ, vmax_occ, ts, Leq];
prmt_SC = [k_speed, n_speed, imax_speed, ts];
prmt_FC = [kp_flux, imax_flux, ts, Lm];
prmt_OBS = [ts, kr, sigma, Ls, tau_r];
prmt_EST = [ts, tau_r, Lm];

prmt_CCMPC = [ts, L, lambda_u, lambda_i, R, e];
prmt_bkpsi = [ts, Np, lambda_o, imax_admm];
prmt_ADMM = [n, lambda_z, rho, lambda_e, C_sm, Np, imax_admm];
prmt_admm = [ts, lambda_z, rho, lambda_e, C_sm, Np];

%% TIMES 
t_sim = 5;
t_teb = 0;
t_lcb = t_teb;
t_act_admm = t_teb + 0.1;
% t_lcb = t_sim;
t_maq = t_act_admm + 0.1;
t_flux = t_maq + 0.1;
t_arranque = t_flux + 5/(dam*wn_flux) + 0.4;
% t_arranque = t_flux + 0.8;
% t_arranque = 0.5;
t_cmv = t_flux;

t_load = t_arranque;

%%

vc_mean_ref = Vc0;
VCdiff = 10/100;
ix_max = 4.2;
iy_max = 4;
is_max = 8.5;
Ay0 = 380 * sqrt(2/3) * 25/50;
vo_max = 100;
Cb = C / n;

Emean = Cb / 2 * vc_mean_ref^2;                    % mean(Ec)
Ediff = Emean * ((1+VCdiff)^2 - 1) *ones(6, 1); % Ec-mean(Ec)
IY    = iy_max                     *ones(2, 1);      % iya, iyb
VY    = sqrt(3) * Ay0              *ones(2, 1);      % vyac, vybc
PY    = VY .* IY;                                    % py1, py2
IX    = ix_max;                    % ix

Xmax  = [Emean; Ediff; IY; VY; PY; IX];

IE = is_max *ones(2, 1); % LICCs
VO = vo_max;                  % CMV

Ymax = [IE; VO];

net = load('ImitationLearning\ActualArchitecture\Results_v2.mat').net;