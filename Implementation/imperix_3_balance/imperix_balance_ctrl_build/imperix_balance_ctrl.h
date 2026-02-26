//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_balance_ctrl.h
//
// Code generated for Simulink model 'imperix_balance_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.161
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Feb 26 19:55:06 2026
//
#ifndef imperix_balance_ctrl_h_
#define imperix_balance_ctrl_h_
#include "rtwtypes.h"
#include "imperix_balance_ctrl_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rt_r32zcfcn.h"

extern "C"
{

#include "rtGetNaN.h"

}

#include "zero_crossing_types.h"

// Block signals for system '<S78>/Moving Average'
struct B_MovingAverage_imperix_balan_T {
  real_T MovingAverage;                // '<S78>/Moving Average'
};

// Block states (default storage) for system '<S78>/Moving Average'
struct DW_MovingAverage_imperix_bala_T {
  dsp_simulink_MovingAverage_im_T obj; // '<S78>/Moving Average'
  boolean_T objisempty;                // '<S78>/Moving Average'
};

// Block signals (default storage)
struct B_imperix_balance_ctrl_T {
  real_T TmpRTBAtWhitenoiseOutport1[3];// '<S27>/White noise'
  real_T In;                           // '<S674>/In'
  real_T In_c;                         // '<S673>/In'
  real_T In_k;                         // '<S672>/In'
  real_T In_n;                         // '<S671>/In'
  real_T In_m;                         // '<S670>/In'
  real_T In_g;                         // '<S669>/In'
  real_T In_nz;                        // '<S668>/In'
  real_T Fcn;                          // '<S631>/Fcn'
  real_T Fcn1;                         // '<S631>/Fcn1'
  real_T Fcn_o;                        // '<S630>/Fcn'
  real_T Fcn1_l;                       // '<S630>/Fcn1'
  real_T Fcn_ou;                       // '<S558>/Fcn'
  real_T Fcn1_f;                       // '<S558>/Fcn1'
  real_T Fcn_b;                        // '<S557>/Fcn'
  real_T Fcn1_i;                       // '<S557>/Fcn1'
  real_T In_ge;                        // '<S391>/In'
  real_T Fcn_br;                       // '<S390>/Fcn'
  real_T Fcn1_f3;                      // '<S390>/Fcn1'
  real_T Fcn_m;                        // '<S389>/Fcn'
  real_T Fcn1_c;                       // '<S389>/Fcn1'
  real32_T SFunction;                  // '<S688>/S-Function'
  real32_T SFunction_f;                // '<S698>/S-Function'
  real32_T ADC;                        // '<S120>/ADC'
  real32_T SFunction_k;                // '<S692>/S-Function'
  real32_T SFunction_c;                // '<S704>/S-Function'
  real32_T ADC_f;                      // '<S122>/ADC'
  real32_T ADC_e;                      // '<S124>/ADC'
  real32_T ADC_i;                      // '<S114>/ADC'
  real32_T ADC_d;                      // '<S128>/ADC'
  real32_T ADC_ib;                     // '<S116>/ADC'
  real32_T ADC_p;                      // '<S118>/ADC'
  real32_T SFunction_fs;               // '<S708>/S-Function'
  real32_T SFunction_co;               // '<S694>/S-Function'
  real32_T ADC_b;                      // '<S108>/ADC'
  real32_T ADC_o;                      // '<S126>/ADC'
  real32_T ADC_n;                      // '<S130>/ADC'
  real32_T ADC_m;                      // '<S112>/ADC'
  real32_T ADC_k;                      // '<S132>/ADC'
  real32_T ADC_fe;                     // '<S134>/ADC'
  real32_T DataTypeConversion1;        // '<S143>/Data Type Conversion1'
  real32_T DataTypeConversion1_l;      // '<S145>/Data Type Conversion1'
  real32_T DataTypeConversion1_la;     // '<S151>/Data Type Conversion1'
  real32_T DataTypeConversion1_p;      // '<S153>/Data Type Conversion1'
  real32_T DataTypeConversion1_a;      // '<S155>/Data Type Conversion1'
  real32_T DataTypeConversion1_e;      // '<S157>/Data Type Conversion1'
  real32_T ADC_g;                      // '<S110>/ADC'
  real32_T DataTypeConversion;         // '<S186>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S188>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S190>/Data Type Conversion'
  real32_T DataTypeConversion_kx;      // '<S192>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S194>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S196>/Data Type Conversion'
  real32_T DataTypeConversion_m;       // '<S198>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S200>/Data Type Conversion'
  real32_T DataTypeConversion_iu;      // '<S202>/Data Type Conversion'
  real32_T DataTypeConversion_pe;      // '<S204>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S206>/Data Type Conversion'
  real32_T DataTypeConversion_id;      // '<S208>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S210>/Data Type Conversion'
  real32_T DataTypeConversion_gb;      // '<S212>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S214>/Data Type Conversion'
  real32_T DataTypeConversion_m1;      // '<S216>/Data Type Conversion'
  real32_T DataTypeConversion_dr;      // '<S218>/Data Type Conversion'
  real32_T DataTypeConversion_pw;      // '<S220>/Data Type Conversion'
  real32_T DataTypeConversion_mx;      // '<S222>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S224>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S226>/Data Type Conversion'
  real32_T DataTypeConversion_d4;      // '<S228>/Data Type Conversion'
  real32_T DataTypeConversion_pw0;     // '<S230>/Data Type Conversion'
  real32_T DataTypeConversion_ez;      // '<S232>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S234>/Data Type Conversion'
  real32_T DataTypeConversion_lu;      // '<S236>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S238>/Data Type Conversion'
  real32_T DataTypeConversion_ir;      // '<S240>/Data Type Conversion'
  real32_T DataTypeConversion_d5;      // '<S242>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S244>/Data Type Conversion'
  real32_T DataTypeConversion_fy;      // '<S246>/Data Type Conversion'
  real32_T DataTypeConversion_l5;      // '<S248>/Data Type Conversion'
  real32_T DataTypeConversion_iw;      // '<S250>/Data Type Conversion'
  real32_T DataTypeConversion_fo;      // '<S252>/Data Type Conversion'
  real32_T DataTypeConversion_a;       // '<S254>/Data Type Conversion'
  real32_T DataTypeConversion_l4;      // '<S256>/Data Type Conversion'
  real32_T DataTypeConversion_fs;      // '<S258>/Data Type Conversion'
  real32_T DataTypeConversion_ba;      // '<S260>/Data Type Conversion'
  real32_T DataTypeConversion_fz;      // '<S262>/Data Type Conversion'
  real32_T DataTypeConversion_bg;      // '<S264>/Data Type Conversion'
  real32_T DataTypeConversion_fn;      // '<S266>/Data Type Conversion'
  real32_T SFunction_e;                // '<S700>/S-Function'
  real32_T Saturation;                 // '<S136>/Saturation'
  real32_T DataTypeConversion_ao;      // '<S170>/Data Type Conversion'
  real32_T DataTypeConversion_ay;      // '<S172>/Data Type Conversion'
  real32_T DataTypeConversion_hd;      // '<S174>/Data Type Conversion'
  real32_T DataTypeConversion_gh;      // '<S176>/Data Type Conversion'
  real32_T DataTypeConversion_ns;      // '<S178>/Data Type Conversion'
  real32_T DataTypeConversion_ep;      // '<S180>/Data Type Conversion'
  real32_T DataTypeConversion2;        // '<S32>/Data Type Conversion2'
  real32_T SFunction_g;                // '<S690>/S-Function'
  real32_T SFunction_c4;               // '<S696>/S-Function'
  real32_T DataTypeConversion2_j;      // '<S33>/Data Type Conversion2'
  real32_T SFunction_j;                // '<S702>/S-Function'
  real32_T DataTypeConversion1_le;     // '<S373>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S373>/Data Type Conversion2'
  real32_T DataTypeConversion1_pv;     // '<S374>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S374>/Data Type Conversion2'
  real32_T DataTypeConversion1_h;      // '<S375>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S375>/Data Type Conversion2'
  real32_T DataTypeConversion1_f;      // '<S376>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S376>/Data Type Conversion2'
  real32_T DataTypeConversion1_b;      // '<S559>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S559>/Data Type Conversion2'
  real32_T DataTypeConversion1_eo;     // '<S560>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S560>/Data Type Conversion2'
  real32_T DataTypeConversion1_po;     // '<S561>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S561>/Data Type Conversion2'
  real32_T DataTypeConversion1_c;      // '<S562>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S562>/Data Type Conversion2'
  real32_T DataTypeConversion1_h3;     // '<S632>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S632>/Data Type Conversion2'
  real32_T DataTypeConversion1_m;      // '<S633>/Data Type Conversion1'
  real32_T DataTypeConversion2_jk;     // '<S633>/Data Type Conversion2'
  real32_T DataTypeConversion1_fz;     // '<S634>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S634>/Data Type Conversion2'
  real32_T DataTypeConversion1_i;      // '<S635>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S635>/Data Type Conversion2'
  real32_T DataTypeConversion1_al;     // '<S644>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S644>/Data Type Conversion2'
  real32_T DataTypeConversion1_k;      // '<S645>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S645>/Data Type Conversion2'
  real32_T DataTypeConversion1_l4;     // '<S646>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S646>/Data Type Conversion2'
  real32_T DataTypeConversion1_bg;     // '<S647>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S647>/Data Type Conversion2'
  real32_T DataTypeConversion1_d;      // '<S656>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S656>/Data Type Conversion2'
  real32_T DataTypeConversion1_o;      // '<S657>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S657>/Data Type Conversion2'
  real32_T DataTypeConversion1_ay;     // '<S658>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S658>/Data Type Conversion2'
  real32_T DataTypeConversion1_pf;     // '<S659>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S659>/Data Type Conversion2'
  real32_T DataTypeConversion1_als;    // '<S675>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S675>/Data Type Conversion2'
  real32_T DataTypeConversion1_ig;     // '<S676>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S676>/Data Type Conversion2'
  real32_T DataTypeConversion1_g;      // '<S677>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S677>/Data Type Conversion2'
  real32_T DataTypeConversion1_gw;     // '<S678>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S678>/Data Type Conversion2'
  real32_T SFunction_fd;               // '<S710>/S-Function'
  real32_T Gain8;                      // '<S1>/Gain8'
  real32_T SFunction_o;                // '<S706>/S-Function'
  real32_T Gain6;                      // '<S1>/Gain6'
  B_MovingAverage_imperix_balan_T MovingAverage_pn;// '<S78>/Moving Average'
  B_MovingAverage_imperix_balan_T MovingAverage5;// '<S78>/Moving Average'
  B_MovingAverage_imperix_balan_T MovingAverage4;// '<S78>/Moving Average'
  B_MovingAverage_imperix_balan_T MovingAverage3;// '<S78>/Moving Average'
  B_MovingAverage_imperix_balan_T MovingAverage2;// '<S78>/Moving Average'
  B_MovingAverage_imperix_balan_T MovingAverage1;// '<S78>/Moving Average'
  B_MovingAverage_imperix_balan_T MovingAverage_p;// '<S78>/Moving Average'
  B_MovingAverage_imperix_balan_T MovingAverage;// '<S78>/Moving Average'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_balance_ctrl_T {
  mpcActiveSetOptions_imperix_b_T options_z;// '<S27>/Energy balance'
  mpcActiveSetOptions_imperix_b_T options_o;// '<S27>/Energy balance'
  mpcActiveSetOptions_imperix_b_T SolverOpts;// '<S27>/Saturation'
  mpcActiveSetOptions_imperix_b_T options;// '<S1>/LICCs control'
  real_T SFunction_DSTATE;             // '<S688>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S698>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S692>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S704>/S-Function'
  real_T Integrator_DSTATE;            // '<S355>/Integrator'
  real_T UnitDelay_DSTATE[2];          // '<S81>/Unit Delay'
  real_T SFunction_DSTATE_g;           // '<S708>/S-Function'
  real_T Integrator_DSTATE_k;          // '<S303>/Integrator'
  real_T SFunction_DSTATE_c;           // '<S694>/S-Function'
  real_T Integrator_DSTATE_h;          // '<S485>/Integrator'
  real_T Integrator_DSTATE_m;          // '<S537>/Integrator'
  real_T UnitDelay1_DSTATE;            // '<S392>/Unit Delay1'
  real_T Integrator_DSTATE_p;          // '<S430>/Integrator'
  real_T Integrator_DSTATE_a;          // '<S608>/Integrator'
  real_T UnitDelay1_DSTATE_f[2];       // '<S159>/Unit Delay1'
  real_T DAC_DSTATE;                   // '<S143>/DAC'
  real_T DAC_DSTATE_c;                 // '<S145>/DAC'
  real_T DAC_DSTATE_h;                 // '<S151>/DAC'
  real_T DAC_DSTATE_d;                 // '<S153>/DAC'
  real_T DAC_DSTATE_b;                 // '<S155>/DAC'
  real_T DAC_DSTATE_h0;                // '<S157>/DAC'
  real_T SFunction_DSTATE_m;           // '<S186>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S188>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S190>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S192>/S-Function'
  real_T SFunction_DSTATE_ix;          // '<S194>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S196>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S198>/S-Function'
  real_T SFunction_DSTATE_on;          // '<S200>/S-Function'
  real_T SFunction_DSTATE_ig;          // '<S202>/S-Function'
  real_T SFunction_DSTATE_ea;          // '<S204>/S-Function'
  real_T SFunction_DSTATE_af;          // '<S206>/S-Function'
  real_T SFunction_DSTATE_j0;          // '<S208>/S-Function'
  real_T SFunction_DSTATE_eh;          // '<S210>/S-Function'
  real_T SFunction_DSTATE_nx;          // '<S212>/S-Function'
  real_T SFunction_DSTATE_i1;          // '<S214>/S-Function'
  real_T SFunction_DSTATE_gi;          // '<S216>/S-Function'
  real_T SFunction_DSTATE_al;          // '<S218>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S220>/S-Function'
  real_T SFunction_DSTATE_m1;          // '<S222>/S-Function'
  real_T SFunction_DSTATE_o2;          // '<S224>/S-Function'
  real_T SFunction_DSTATE_jn;          // '<S226>/S-Function'
  real_T SFunction_DSTATE_ap;          // '<S228>/S-Function'
  real_T SFunction_DSTATE_fe;          // '<S230>/S-Function'
  real_T SFunction_DSTATE_gc;          // '<S232>/S-Function'
  real_T SFunction_DSTATE_lk;          // '<S234>/S-Function'
  real_T SFunction_DSTATE_iq;          // '<S236>/S-Function'
  real_T SFunction_DSTATE_m4;          // '<S238>/S-Function'
  real_T SFunction_DSTATE_m1g;         // '<S240>/S-Function'
  real_T SFunction_DSTATE_il;          // '<S242>/S-Function'
  real_T SFunction_DSTATE_jr;          // '<S244>/S-Function'
  real_T SFunction_DSTATE_jt;          // '<S246>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S248>/S-Function'
  real_T SFunction_DSTATE_ab;          // '<S250>/S-Function'
  real_T SFunction_DSTATE_jh;          // '<S252>/S-Function'
  real_T SFunction_DSTATE_o1;          // '<S254>/S-Function'
  real_T SFunction_DSTATE_am;          // '<S256>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S258>/S-Function'
  real_T SFunction_DSTATE_ek;          // '<S260>/S-Function'
  real_T SFunction_DSTATE_er;          // '<S262>/S-Function'
  real_T SFunction_DSTATE_pr;          // '<S264>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S266>/S-Function'
  real_T SFunction_DSTATE_d5;          // '<S700>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S139>/S-Function'
  real_T SFunction_DSTATE_or;          // '<S170>/S-Function'
  real_T SFunction_DSTATE_nf;          // '<S172>/S-Function'
  real_T SFunction_DSTATE_eb;          // '<S174>/S-Function'
  real_T SFunction_DSTATE_dz;          // '<S176>/S-Function'
  real_T SFunction_DSTATE_lc;          // '<S178>/S-Function'
  real_T SFunction_DSTATE_ik;          // '<S180>/S-Function'
  real_T SFunction_DSTATE_kl;          // '<S690>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S696>/S-Function'
  real_T SFunction_DSTATE_fd;          // '<S702>/S-Function'
  real_T SFunction_DSTATE_fl;          // '<S710>/S-Function'
  real_T DAC_DSTATE_o;                 // '<S147>/DAC'
  real_T SFunction_DSTATE_hm;          // '<S706>/S-Function'
  real_T DAC_DSTATE_n;                 // '<S149>/DAC'
  real_T TmpRTBAtWhitenoiseOutport1_Buff[3];// synthesized block
  real_T TmpRTBAtEnergybalanceInport2_Bu[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport3_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport4_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport5_Bu;// synthesized block
  volatile real_T TmpRTBAtZeroOrderHold1Inport1_B[6];// synthesized block
  volatile real_T TmpRTBAtEnergybalanceInport1_Bu[12];// synthesized block
  real_T A[8];                         // '<S1>/LICCs control'
  real_T B[16];                        // '<S1>/LICCs control'
  real_T H[16];                        // '<S1>/LICCs control'
  real_T Q[16];                        // '<S1>/LICCs control'
  real_T R[16];                        // '<S1>/LICCs control'
  real_T Aineq[96];                    // '<S1>/LICCs control'
  real_T pinvTx[6];                    // '<S1>/LICCs control'
  real_T pinvTy[12];                   // '<S1>/LICCs control'
  real_T u_prev[4];                    // '<S1>/LICCs control'
  real_T xt_est_apriori[4];            // '<S1>/Kalman Filter'
  real_T Inx[16];                      // '<S1>/Kalman Filter'
  real_T F_max;                        // '<S1>/IM references'
  real_T w_max;                        // '<S1>/IM references'
  real_T F_prev;                       // '<S1>/IM references'
  real_T w_prev;                       // '<S1>/IM references'
  real_T dF;                           // '<S1>/IM references'
  real_T dw;                           // '<S1>/IM references'
  real_T Ac[24];                       // '<S27>/Saturation'
  real_T Ix[4];                        // '<S27>/Saturation'
  real_T Tol;                          // '<S27>/Saturation'
  real_T is_max;                       // '<S27>/Saturation'
  real_T Ts;                           // '<S27>/Energy balance'
  real_T Tab2abc[6];                   // '<S27>/Energy balance'
  real_T Tabc2ab[6];                   // '<S27>/Energy balance'
  real_T A_b[30];                      // '<S27>/Energy balance'
  real_T pinvA[30];                    // '<S27>/Energy balance'
  real_T K[144];                       // '<S27>/Energy balance'
  real_T MI[144];                      // '<S27>/Energy balance'
  real_T NN[48];                       // '<S27>/Energy balance'
  real_T ONE[24];                      // '<S27>/Energy balance'
  real_T Nl;                           // '<S27>/Energy balance'
  real_T is_max_j;                     // '<S27>/Energy balance'
  real_T is_max2;                      // '<S27>/Energy balance'
  real_T DEc_max2;                     // '<S27>/Energy balance'
  real_T Hu_z[16];                     // '<S27>/Energy balance'
  real_T Aineq_z[96];                  // '<S27>/Energy balance'
  real_T lambda_z;                     // '<S27>/Energy balance'
  real_T Hu_o[4];                      // '<S27>/Energy balance'
  real_T Aineq_o[8];                   // '<S27>/Energy balance'
  real_T lambda_o;                     // '<S27>/Energy balance'
  int8_T Integrator_PrevResetState;    // '<S355>/Integrator'
  int8_T Integrator_PrevResetState_h;  // '<S303>/Integrator'
  int8_T Integrator_PrevResetState_p;  // '<S485>/Integrator'
  int8_T Integrator_PrevResetState_b;  // '<S537>/Integrator'
  volatile int8_T TmpRTBAtZeroOrderHold1Inport1_s;// synthesized block
  volatile int8_T TmpRTBAtEnergybalanceInport1_Ac;// synthesized block
  boolean_T A_not_empty;               // '<S1>/LICCs control'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  boolean_T Ac_not_empty;              // '<S27>/Saturation'
  boolean_T Ts_not_empty;              // '<S27>/Energy balance'
  DW_MovingAverage_imperix_bala_T MovingAverage_pn;// '<S78>/Moving Average'
  DW_MovingAverage_imperix_bala_T MovingAverage5;// '<S78>/Moving Average'
  DW_MovingAverage_imperix_bala_T MovingAverage4;// '<S78>/Moving Average'
  DW_MovingAverage_imperix_bala_T MovingAverage3;// '<S78>/Moving Average'
  DW_MovingAverage_imperix_bala_T MovingAverage2;// '<S78>/Moving Average'
  DW_MovingAverage_imperix_bala_T MovingAverage1;// '<S78>/Moving Average'
  DW_MovingAverage_imperix_bala_T MovingAverage_p;// '<S78>/Moving Average'
  DW_MovingAverage_imperix_bala_T MovingAverage;// '<S78>/Moving Average'
};

// Zero-crossing (trigger) state
struct PrevZCX_imperix_balance_ctrl_T {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S93>/Sample and Hold'
  ZCSigState SampleandHold5_Trig_ZCE;  // '<S92>/Sample and Hold5'
  ZCSigState SampleandHold4_Trig_ZCE;  // '<S92>/Sample and Hold4'
  ZCSigState SampleandHold3_Trig_ZCE;  // '<S92>/Sample and Hold3'
  ZCSigState SampleandHold2_Trig_ZCE;  // '<S92>/Sample and Hold2'
  ZCSigState SampleandHold1_Trig_ZCE;  // '<S92>/Sample and Hold1'
  ZCSigState SampleandHold_Trig_ZCE_h; // '<S92>/Sample and Hold'
  ZCSigState SampleandHold_Trig_ZCE_hy;// '<S78>/Sample and Hold'
};

// Constant parameters (default storage)
struct ConstP_imperix_balance_ctrl_T {
  // Expression: M2C.Vdc/2*[1; -1]
  //  Referenced by: '<S80>/vx'

  real_T vx_rtw_collapsed_sub_expr_yVo7x[2];
};

// Parameters for system: '<S386>/Subsystem - pi//2 delay'
struct P_Subsystempi2delay_imperix_b_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S389>/alpha_beta'

};

// Parameters for system: '<S386>/Subsystem1'
struct P_Subsystem1_imperix_balance__T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S390>/alpha_beta'

};

// Parameters (default storage)
struct P_imperix_balance_ctrl_T_ {
  struct_Rky7CkjZg6FWKeiF92MwY KF;     // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_YUQGZT1wNQqHOlVxPRDLvF IEC;   // Variable: IEC
                                          //  Referenced by: '<S27>/Energy balance'

  struct_KGBPdpuUNiPn7rR2MwzhRE M2C;   // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/LICCs control'
                                          //    '<S1>/Vc_ref'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain16'
                                          //    '<S1>/Gain21'
                                          //    '<S1>/Gain22'
                                          //    '<S1>/Gain24'
                                          //    '<S1>/Gain25'
                                          //    '<S1>/Gain26'
                                          //    '<S1>/Gain27'
                                          //    '<S1>/Gain28'
                                          //    '<S27>/Energy balance'
                                          //    '<S27>/Saturation'
                                          //    '<S27>/White noise'
                                          //    '<S27>/Gain7'
                                          //    '<S31>/Gain'
                                          //    '<S79>/Gain30'
                                          //    '<S80>/vx'
                                          //    '<S85>/Constant1'
                                          //    '<S86>/Gain'
                                          //    '<S91>/Gain1'
                                          //    '<S91>/Gain3'
                                          //    '<S92>/Bias'
                                          //    '<S392>/Unit Delay1'

  struct_rFOxCXlMLRQfdQMau5zCw CCC;    // Variable: CCC
                                          //  Referenced by:
                                          //    '<S1>/LICCs control'
                                          //    '<S159>/Gain1'
                                          //    '<S159>/Gain2'

  struct_vMmolkBO3MQ2WCj8YrPzlG IM;    // Variable: IM
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S1>/Kalman Filter'
                                          //    '<S1>/Gain10'
                                          //    '<S1>/Gain11'
                                          //    '<S1>/Gain12'
                                          //    '<S1>/Gain13'
                                          //    '<S1>/Gain14'
                                          //    '<S1>/Gain15'
                                          //    '<S1>/Gain18'
                                          //    '<S1>/Gain19'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain23'
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain4'
                                          //    '<S1>/Gain5'
                                          //    '<S1>/Gain7'
                                          //    '<S1>/Gain9'

  struct_eLXpdkXVH71IKiDfJkdaiC RFT;   // Variable: RFT
                                          //  Referenced by:
                                          //    '<S27>/Energy balance'
                                          //    '<S27>/Gain5'
                                          //    '<S81>/Gain2'

  struct_O6gPH0RO1xYJuf7clpdGt MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S81>/Gain'
                                          //    '<S477>/Kb'
                                          //    '<S482>/Integral Gain'
                                          //    '<S490>/Proportional Gain'
                                          //    '<S492>/Saturation'
                                          //    '<S529>/Kb'
                                          //    '<S534>/Integral Gain'
                                          //    '<S542>/Proportional Gain'
                                          //    '<S544>/Saturation'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S295>/Kb'
                                          //    '<S300>/Integral Gain'
                                          //    '<S308>/Proportional Gain'
                                          //    '<S310>/Saturation'
                                          //    '<S347>/Kb'
                                          //    '<S352>/Integral Gain'
                                          //    '<S360>/Proportional Gain'
                                          //    '<S362>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S1>/Gain17'
                                          //    '<S1>/Gain20'
                                          //    '<S605>/Integral Gain'
                                          //    '<S613>/Proportional Gain'
                                          //    '<S615>/Saturation'
                                          //    '<S600>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEC;   // Variable: TEC
                                          //  Referenced by:
                                          //    '<S392>/Gain1'
                                          //    '<S392>/Gain2'
                                          //    '<S427>/Integral Gain'
                                          //    '<S435>/Proportional Gain'
                                          //    '<S437>/Saturation'
                                          //    '<S422>/DeadZone'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S626>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S450>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_j;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_j
                                  //  Referenced by: '<S386>/Constant'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S355>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S303>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S485>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S537>/Integrator'

  real_T PIDController1_InitialCondition;
                              // Mask Parameter: PIDController1_InitialCondition
                                 //  Referenced by: '<S430>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S608>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S628>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S629>/Constant'

  real_T CompareToConstant_const_d; // Mask Parameter: CompareToConstant_const_d
                                       //  Referenced by: '<S555>/Constant'

  real_T CompareToConstant1_const_j;
                                   // Mask Parameter: CompareToConstant1_const_j
                                      //  Referenced by: '<S556>/Constant'

  real_T CompareToConstant_const_b; // Mask Parameter: CompareToConstant_const_b
                                       //  Referenced by: '<S387>/Constant'

  real_T CompareToConstant1_const_o;
                                   // Mask Parameter: CompareToConstant1_const_o
                                      //  Referenced by: '<S388>/Constant'

  real_T _Y0;                          // Expression: initCond
                                          //  Referenced by: '<S391>/ '

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S630>/dq'

  real_T dq_Y0_c[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S631>/dq'

  real_T _Y0_e;                        // Expression: initCond
                                          //  Referenced by: '<S668>/ '

  real_T _Y0_m;                        // Expression: initCond
                                          //  Referenced by: '<S669>/ '

  real_T _Y0_eo;                       // Expression: initCond
                                          //  Referenced by: '<S670>/ '

  real_T _Y0_mx;                       // Expression: initCond
                                          //  Referenced by: '<S671>/ '

  real_T _Y0_h;                        // Expression: initCond
                                          //  Referenced by: '<S672>/ '

  real_T _Y0_o;                        // Expression: initCond
                                          //  Referenced by: '<S673>/ '

  real_T _Y0_b;                        // Expression: initCond
                                          //  Referenced by: '<S674>/ '

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S420>/Constant1'

  real_T Constant1_Value_e;            // Expression: 0
                                          //  Referenced by: '<S598>/Constant1'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S688>/S-Function'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S698>/S-Function'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S120>/ADC'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S692>/S-Function'

  real_T SFunction_P17_h;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S704>/S-Function'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S355>/Integrator'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S122>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S124>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S114>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S128>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S116>/ADC'

  real_T ADC_P8_lh;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S118>/ADC'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S87>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S627>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S627>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S81>/Unit Delay'

  real_T SFunction_P17_d;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S708>/S-Function'

  real_T Integrator_gainval_g;       // Computed Parameter: Integrator_gainval_g
                                        //  Referenced by: '<S303>/Integrator'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S84>/Constant'

  real_T SFunction_P17_j;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S694>/S-Function'

  real_T Integrator_gainval_h;       // Computed Parameter: Integrator_gainval_h
                                        //  Referenced by: '<S485>/Integrator'

  real_T Integrator_gainval_b;       // Computed Parameter: Integrator_gainval_b
                                        //  Referenced by: '<S537>/Integrator'

  real_T Gain1_Gain_m;                 // Expression: 0.5
                                          //  Referenced by: '<S81>/Gain1'

  real_T Gain4_Gain;                   // Expression: -1
                                          //  Referenced by: '<S81>/Gain4'

  real_T Integrator_gainval_n;       // Computed Parameter: Integrator_gainval_n
                                        //  Referenced by: '<S430>/Integrator'

  real_T Integrator_gainval_b1;     // Computed Parameter: Integrator_gainval_b1
                                       //  Referenced by: '<S608>/Integrator'

  real_T TmpRTBAtWhitenoiseOutport1_Init;// Expression: 0
                                            //  Referenced by:

  real_T Gain3_Gain_f[2];              // Expression: [1; -1]
                                          //  Referenced by: '<S27>/Gain3'

  real_T Gain3_Gain_c;                 // Expression: 0.5
                                          //  Referenced by: '<S81>/Gain3'

  real_T Gain2_Gain_i[30];             // Expression: M2C.A'
                                          //  Referenced by: '<S80>/Gain2'

  real_T ADC_P8_b;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S108>/ADC'

  real_T ADC_P8_h;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S126>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S130>/ADC'

  real_T ADC_P8_nj;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S112>/ADC'

  real_T ADC_P8_bz;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S132>/ADC'

  real_T ADC_P8_ps;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S134>/ADC'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S159>/Unit Delay1'

  real_T Gain_Gain;                    // Expression: 5
                                          //  Referenced by: '<S1>/Gain'

  real_T ADC_P8_bf;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S110>/ADC'

  real_T SFunction_P17_c;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S700>/S-Function'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S83>/Gain8'

  real_T Gain3_Gain_g[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S385>/Gain3'

  real_T Gain_Gain_h;                  // Expression: -1
                                          //  Referenced by: '<S83>/Gain'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S32>/phase'

  real_T SFunction_P17_ds;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S690>/S-Function'

  real_T SFunction_P17_bl;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S696>/S-Function'

  real_T phase_Value_b;                // Expression: PHASE
                                          //  Referenced by: '<S33>/phase'

  real_T SFunction_P17_ni;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S702>/S-Function'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S373>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S374>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S375>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S376>/phase'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S420>/Clamping_zero'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S559>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S560>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S561>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S562>/phase'

  real_T Clamping_zero_Value_p;        // Expression: 0
                                          //  Referenced by: '<S598>/Clamping_zero'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S632>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S633>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S634>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S635>/phase'

  real_T phase_Value_ji;               // Expression: PHASE
                                          //  Referenced by: '<S644>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S645>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S646>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S647>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S656>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S657>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S658>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S659>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S675>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S676>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S677>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S678>/phase'

  real_T SFunction_P17_m;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S710>/S-Function'

  real_T SFunction_P17_j4;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S706>/S-Function'

  real_T TmpRTBAtEnergybalanceInport1_In;// Expression: 0
                                            //  Referenced by:

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S182>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S182>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S182>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S184>/PWM'

  real32_T PWM_P3_f;                   // Expression: single(duty)
                                          //  Referenced by: '<S184>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S184>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S378>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S378>/PWM'

  real32_T PWM_P4_c;                   // Expression: single(phase)
                                          //  Referenced by: '<S378>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S380>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S380>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S380>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S382>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S382>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S382>/PWM'

  real32_T PWM_P2_hd;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S384>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S384>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S384>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S564>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S564>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S564>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S566>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S566>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S566>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P3_n2;                  // Expression: single(duty)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P4_ln;                  // Expression: single(phase)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S570>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S570>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S570>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S637>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S637>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S637>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S639>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S639>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S639>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S641>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S641>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S641>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S643>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S643>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S643>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S649>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S649>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S649>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S651>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S651>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S651>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S653>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S653>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S653>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S655>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S655>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S655>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S661>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S661>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S661>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S663>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S663>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S663>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S665>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S665>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S665>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S667>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S667>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S667>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S680>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S680>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S680>/PWM'

  real32_T PWM_P2_er;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S682>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S682>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S682>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S684>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S684>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S684>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S686>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S686>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S686>/PWM'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S688>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S688>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S688>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S688>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S688>/S-Function'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S698>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S698>/S-Function'

  real32_T SFunction_P5_i;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S698>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(0)
                                          //  Referenced by: '<S698>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S698>/S-Function'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S120>/ADC'

  real32_T SFunction_P3_h;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S692>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S692>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S692>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(0)
                                          //  Referenced by: '<S692>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S692>/S-Function'

  real32_T SFunction_P3_l;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S704>/S-Function'

  real32_T SFunction_P4_o;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S704>/S-Function'

  real32_T SFunction_P5_j;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S704>/S-Function'

  real32_T SFunction_P6_jn;            // Expression: single(0)
                                          //  Referenced by: '<S704>/S-Function'

  real32_T SFunction_P7_o;             // Expression: single(0)
                                          //  Referenced by: '<S704>/S-Function'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S114>/ADC'

  real32_T ADC_P3_l;                   // Expression: single(offset)
                                          //  Referenced by: '<S114>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S128>/ADC'

  real32_T ADC_P3_ck;                  // Expression: single(offset)
                                          //  Referenced by: '<S128>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S116>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S116>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S118>/ADC'

  real32_T SFunction_P3_lm;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S708>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S708>/S-Function'

  real32_T SFunction_P5_e;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S708>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(0)
                                          //  Referenced by: '<S708>/S-Function'

  real32_T SFunction_P7_f;             // Expression: single(0)
                                          //  Referenced by: '<S708>/S-Function'

  real32_T SFunction_P3_c;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S694>/S-Function'

  real32_T SFunction_P4_n;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S694>/S-Function'

  real32_T SFunction_P5_l;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S694>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(0)
                                          //  Referenced by: '<S694>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S694>/S-Function'

  real32_T Switch_Threshold;           // Computed Parameter: Switch_Threshold
                                          //  Referenced by: '<S84>/Switch'

  real32_T ADC_P2_a;                   // Expression: single(gain)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P3_fc;                  // Expression: single(offset)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P2_hy;                  // Expression: single(gain)
                                          //  Referenced by: '<S126>/ADC'

  real32_T ADC_P3_fp;                  // Expression: single(offset)
                                          //  Referenced by: '<S126>/ADC'

  real32_T ADC_P2_n;                   // Expression: single(gain)
                                          //  Referenced by: '<S130>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S130>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S112>/ADC'

  real32_T ADC_P3_fn;                  // Expression: single(offset)
                                          //  Referenced by: '<S112>/ADC'

  real32_T ADC_P2_hp;                  // Expression: single(gain)
                                          //  Referenced by: '<S132>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S132>/ADC'

  real32_T ADC_P2_eh;                  // Expression: single(gain)
                                          //  Referenced by: '<S134>/ADC'

  real32_T ADC_P3_b;                   // Expression: single(offset)
                                          //  Referenced by: '<S134>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S110>/ADC'

  real32_T ADC_P3_ej;                  // Expression: single(offset)
                                          //  Referenced by: '<S110>/ADC'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P6_f1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S190>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S190>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S192>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S192>/S-Function'

  real32_T SFunction_P6_mk;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S194>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S194>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S196>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S196>/S-Function'

  real32_T SFunction_P6_gu;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S198>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S198>/S-Function'

  real32_T SFunction_P6_ab;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S200>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S200>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S202>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S202>/S-Function'

  real32_T SFunction_P6_o5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S204>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S204>/S-Function'

  real32_T SFunction_P6_ou;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S206>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S206>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S208>/S-Function'

  real32_T SFunction_P12_nh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S208>/S-Function'

  real32_T SFunction_P6_h3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S210>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S210>/S-Function'

  real32_T SFunction_P6_f2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S212>/S-Function'

  real32_T SFunction_P12_no;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S212>/S-Function'

  real32_T SFunction_P6_hj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S214>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S214>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S216>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S216>/S-Function'

  real32_T SFunction_P6_oc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S218>/S-Function'

  real32_T SFunction_P12_ik;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S218>/S-Function'

  real32_T SFunction_P6_jb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S220>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S220>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S222>/S-Function'

  real32_T SFunction_P12_ps;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S222>/S-Function'

  real32_T SFunction_P6_bq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P12_au;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P6_cj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P12_oi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P12_fz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P6_he;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P12_fr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P6_mb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P12_kn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P6_pq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P12_ai;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P6_e2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P12_n2;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P6_g4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P12_i4;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P6_kh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P12_ce;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P6_di;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P6_b0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P12_c1;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P6_aw;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P12_og;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P12_ld;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P6_ek;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P12_bk;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P6_o4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S254>/S-Function'

  real32_T SFunction_P12_mh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S254>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S256>/S-Function'

  real32_T SFunction_P12_jx;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S256>/S-Function'

  real32_T SFunction_P6_kr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S258>/S-Function'

  real32_T SFunction_P12_hp;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S258>/S-Function'

  real32_T SFunction_P6_k4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S260>/S-Function'

  real32_T SFunction_P12_o3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S260>/S-Function'

  real32_T SFunction_P6_kp;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S262>/S-Function'

  real32_T SFunction_P12_av;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S262>/S-Function'

  real32_T SFunction_P6_cv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S264>/S-Function'

  real32_T SFunction_P12_m3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S264>/S-Function'

  real32_T SFunction_P6_px;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S266>/S-Function'

  real32_T SFunction_P12_g4;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S266>/S-Function'

  real32_T SFunction_P3_p;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S700>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S700>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S700>/S-Function'

  real32_T SFunction_P6_gl;            // Expression: single(0)
                                          //  Referenced by: '<S700>/S-Function'

  real32_T SFunction_P7_j;             // Expression: single(0)
                                          //  Referenced by: '<S700>/S-Function'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<S136>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<S136>/Saturation'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S136>/CLK1'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S139>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S139>/S-Function'

  real32_T CLK1_P2_i;                  // Expression: single(frequency)
                                          //  Referenced by: '<S141>/CLK1'

  real32_T SFunction_P6_ez;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S170>/S-Function'

  real32_T SFunction_P12_ia;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S170>/S-Function'

  real32_T SFunction_P6_of;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S172>/S-Function'

  real32_T SFunction_P12_ba;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S172>/S-Function'

  real32_T SFunction_P6_gb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S174>/S-Function'

  real32_T SFunction_P12_gj;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S174>/S-Function'

  real32_T SFunction_P6_i3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S176>/S-Function'

  real32_T SFunction_P12_dr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S176>/S-Function'

  real32_T SFunction_P6_af;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S178>/S-Function'

  real32_T SFunction_P12_dv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S178>/S-Function'

  real32_T SFunction_P6_kt;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S180>/S-Function'

  real32_T SFunction_P12_kq;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S180>/S-Function'

  real32_T SFunction_P3_o;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S690>/S-Function'

  real32_T SFunction_P4_bd;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S690>/S-Function'

  real32_T SFunction_P5_g;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S690>/S-Function'

  real32_T SFunction_P6_l;             // Expression: single(0)
                                          //  Referenced by: '<S690>/S-Function'

  real32_T SFunction_P7_p;             // Expression: single(0)
                                          //  Referenced by: '<S690>/S-Function'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S696>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S696>/S-Function'

  real32_T SFunction_P5_fk;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S696>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S696>/S-Function'

  real32_T SFunction_P7_gu;            // Expression: single(0)
                                          //  Referenced by: '<S696>/S-Function'

  real32_T SFunction_P3_d;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S702>/S-Function'

  real32_T SFunction_P4_a;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S702>/S-Function'

  real32_T SFunction_P5_n;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S702>/S-Function'

  real32_T SFunction_P6_lf;            // Expression: single(0)
                                          //  Referenced by: '<S702>/S-Function'

  real32_T SFunction_P7_b;             // Expression: single(0)
                                          //  Referenced by: '<S702>/S-Function'

  real32_T SFunction_P3_f;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S710>/S-Function'

  real32_T SFunction_P4_m;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S710>/S-Function'

  real32_T SFunction_P5_pr;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S710>/S-Function'

  real32_T SFunction_P6_l5;            // Expression: single(0)
                                          //  Referenced by: '<S710>/S-Function'

  real32_T SFunction_P7_gz;            // Expression: single(0)
                                          //  Referenced by: '<S710>/S-Function'

  real32_T Gain8_Gain_f;               // Computed Parameter: Gain8_Gain_f
                                          //  Referenced by: '<S1>/Gain8'

  real32_T SFunction_P3_ff;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S706>/S-Function'

  real32_T SFunction_P4_l;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S706>/S-Function'

  real32_T SFunction_P5_fz;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S706>/S-Function'

  real32_T SFunction_P6_gq;            // Expression: single(0)
                                          //  Referenced by: '<S706>/S-Function'

  real32_T SFunction_P7_e;             // Expression: single(0)
                                          //  Referenced by: '<S706>/S-Function'

  real32_T Gain6_Gain;                 // Computed Parameter: Gain6_Gain
                                          //  Referenced by: '<S1>/Gain6'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S688>/S-Function'

  uint32_T SFunction_P10_c;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S698>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S692>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S704>/S-Function'

  uint32_T SFunction_P10_nr;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S708>/S-Function'

  uint32_T SFunction_P10_nm;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S694>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P7_ij;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S190>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S190>/S-Function'

  uint32_T SFunction_P7_ik;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S192>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S192>/S-Function'

  uint32_T SFunction_P7_guv;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S194>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S194>/S-Function'

  uint32_T SFunction_P7_l;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S196>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S196>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S198>/S-Function'

  uint32_T SFunction_P13_fr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S198>/S-Function'

  uint32_T SFunction_P7_k;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S200>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S200>/S-Function'

  uint32_T SFunction_P7_fh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S202>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S202>/S-Function'

  uint32_T SFunction_P7_f4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S204>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S204>/S-Function'

  uint32_T SFunction_P7_ge;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S206>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S206>/S-Function'

  uint32_T SFunction_P7_i1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S208>/S-Function'

  uint32_T SFunction_P13_ck;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S208>/S-Function'

  uint32_T SFunction_P7_oj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S210>/S-Function'

  uint32_T SFunction_P13_el;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S210>/S-Function'

  uint32_T SFunction_P7_o5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S212>/S-Function'

  uint32_T SFunction_P13_cs;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S212>/S-Function'

  uint32_T SFunction_P7_ib;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S214>/S-Function'

  uint32_T SFunction_P13_ob;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S214>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S216>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S216>/S-Function'

  uint32_T SFunction_P7_dq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S218>/S-Function'

  uint32_T SFunction_P13_or;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S218>/S-Function'

  uint32_T SFunction_P7_or;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S220>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S220>/S-Function'

  uint32_T SFunction_P7_bc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S222>/S-Function'

  uint32_T SFunction_P13_pe;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S222>/S-Function'

  uint32_T SFunction_P7_c5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P13_iv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P7_no;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P13_hw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P7_jb;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P13_ork;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P7_mj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P7_gn;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P7_bh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P13_ot;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P7_im;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P7_ii;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P13_jo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P7_ic;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P7_nh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P13_ota;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P7_ac;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P7_ov;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P13_be;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P7_bu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P13_lm;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P7_ms;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P13_bj;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P7_ma;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P13_bm;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P7_jj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S254>/S-Function'

  uint32_T SFunction_P13_mz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S254>/S-Function'

  uint32_T SFunction_P7_f4x;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S256>/S-Function'

  uint32_T SFunction_P13_ch;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S256>/S-Function'

  uint32_T SFunction_P7_m5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S258>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S258>/S-Function'

  uint32_T SFunction_P7_jj1;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S260>/S-Function'

  uint32_T SFunction_P13_jk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S260>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S262>/S-Function'

  uint32_T SFunction_P13_gz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S262>/S-Function'

  uint32_T SFunction_P7_i5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S264>/S-Function'

  uint32_T SFunction_P13_kw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S264>/S-Function'

  uint32_T SFunction_P7_e4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S266>/S-Function'

  uint32_T SFunction_P13_ct;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S266>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S700>/S-Function'

  uint32_T SFunction_P7_fy;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S170>/S-Function'

  uint32_T SFunction_P13_b5;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S170>/S-Function'

  uint32_T SFunction_P7_jk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S172>/S-Function'

  uint32_T SFunction_P13_lu;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S172>/S-Function'

  uint32_T SFunction_P7_pr;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S174>/S-Function'

  uint32_T SFunction_P13_o5;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S174>/S-Function'

  uint32_T SFunction_P7_km;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S176>/S-Function'

  uint32_T SFunction_P13_pq;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S176>/S-Function'

  uint32_T SFunction_P7_ho;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S178>/S-Function'

  uint32_T SFunction_P13_ckh;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S178>/S-Function'

  uint32_T SFunction_P7_de;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S180>/S-Function'

  uint32_T SFunction_P13_f2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S180>/S-Function'

  uint32_T SFunction_P10_l2;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S690>/S-Function'

  uint32_T SFunction_P10_k0;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S696>/S-Function'

  uint32_T SFunction_P10_e;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S702>/S-Function'

  uint32_T SFunction_P10_es;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S710>/S-Function'

  uint32_T SFunction_P10_e5;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S706>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S184>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S184>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S184>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S184>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S184>/PWM'

  int16_T PWM_P9_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S184>/PWM'

  int16_T PWM_P1_f;                    // Expression: int16(lane)
                                          //  Referenced by: '<S378>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S378>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S378>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S378>/PWM'

  int16_T PWM_P8_i;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S378>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S378>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S380>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S380>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S380>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S380>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S380>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S380>/PWM'

  int16_T PWM_P1_au;                   // Expression: int16(lane)
                                          //  Referenced by: '<S382>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S382>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S382>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S382>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S382>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S382>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S384>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S384>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S384>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S384>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S384>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S384>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P5_dt;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P6_at;                   // Expression: int16(rate)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P7_oy;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S637>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S637>/PWM'

  int16_T PWM_P6_bx;                   // Expression: int16(rate)
                                          //  Referenced by: '<S637>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S637>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S637>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S637>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S639>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S639>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S639>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S639>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S639>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S639>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S649>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S649>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S649>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S649>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S649>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S649>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S651>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S651>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S651>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S651>/PWM'

  int16_T PWM_P8_gm;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S651>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S651>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P7_f3;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P9_m2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S665>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S665>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S665>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S665>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S665>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S665>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S667>/PWM'

  int16_T PWM_P5_p5;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S667>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S667>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S667>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S667>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S667>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S680>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S680>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S680>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S680>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S680>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S680>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S682>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S682>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S682>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S682>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S682>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S682>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S684>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S684>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S684>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S684>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S684>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S684>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S686>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S686>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S686>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S686>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S686>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S686>/PWM'

  int16_T SFunction_P2_n;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S688>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S698>/S-Function'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S120>/ADC'

  int16_T SFunction_P2_k;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S692>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S704>/S-Function'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P1_ad;                   // Expression: int16(channel)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P4_it;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P9_n4;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P6_p0;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P4_b2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P9_nd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S118>/ADC'

  int16_T SFunction_P2_iq;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S708>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S694>/S-Function'

  int16_T ADC_P1_h;                    // Expression: int16(channel)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P6_o;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P1_e1;                   // Expression: int16(channel)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P9_k;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P1_l;                    // Expression: int16(channel)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P4_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P6_cz;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P9_ke;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P4_gx;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P6_ct;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P9_a;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P1_hm;                   // Expression: int16(channel)
                                          //  Referenced by: '<S134>/ADC'

  int16_T ADC_P4_d2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S134>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S134>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S134>/ADC'

  int16_T DAC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S143>/DAC'

  int16_T DAC_P2;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S143>/DAC'

  int16_T DAC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S145>/DAC'

  int16_T DAC_P2_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S145>/DAC'

  int16_T DAC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S151>/DAC'

  int16_T DAC_P2_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S151>/DAC'

  int16_T DAC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S153>/DAC'

  int16_T DAC_P2_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S153>/DAC'

  int16_T DAC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S155>/DAC'

  int16_T DAC_P2_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S155>/DAC'

  int16_T DAC_P1_nv;                   // Expression: int16(channel)
                                          //  Referenced by: '<S157>/DAC'

  int16_T DAC_P2_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S157>/DAC'

  int16_T ADC_P1_fz;                   // Expression: int16(channel)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P6_nv;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P9_n0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S110>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T SFunction_P3_or;             // Expression: int16(0)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P3_la;             // Expression: int16(0)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P2_k3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S190>/S-Function'

  int16_T SFunction_P3_ny;             // Expression: int16(0)
                                          //  Referenced by: '<S190>/S-Function'

  int16_T SFunction_P2_h;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S192>/S-Function'

  int16_T SFunction_P3_lq;             // Expression: int16(0)
                                          //  Referenced by: '<S192>/S-Function'

  int16_T SFunction_P2_oz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S194>/S-Function'

  int16_T SFunction_P3_f5;             // Expression: int16(0)
                                          //  Referenced by: '<S194>/S-Function'

  int16_T SFunction_P2_k2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S196>/S-Function'

  int16_T SFunction_P3_l1;             // Expression: int16(0)
                                          //  Referenced by: '<S196>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S198>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S198>/S-Function'

  int16_T SFunction_P2_if;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S200>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S200>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S202>/S-Function'

  int16_T SFunction_P3_pj;             // Expression: int16(0)
                                          //  Referenced by: '<S202>/S-Function'

  int16_T SFunction_P2_ft;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S204>/S-Function'

  int16_T SFunction_P3_pb;             // Expression: int16(0)
                                          //  Referenced by: '<S204>/S-Function'

  int16_T SFunction_P2_op;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S206>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S206>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S208>/S-Function'

  int16_T SFunction_P3_lb;             // Expression: int16(0)
                                          //  Referenced by: '<S208>/S-Function'

  int16_T SFunction_P2_fj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S210>/S-Function'

  int16_T SFunction_P3_me;             // Expression: int16(0)
                                          //  Referenced by: '<S210>/S-Function'

  int16_T SFunction_P2_hy;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S212>/S-Function'

  int16_T SFunction_P3_nw;             // Expression: int16(0)
                                          //  Referenced by: '<S212>/S-Function'

  int16_T SFunction_P2_bp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S214>/S-Function'

  int16_T SFunction_P3_p5;             // Expression: int16(0)
                                          //  Referenced by: '<S214>/S-Function'

  int16_T SFunction_P2_h1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S216>/S-Function'

  int16_T SFunction_P3_kr;             // Expression: int16(0)
                                          //  Referenced by: '<S216>/S-Function'

  int16_T SFunction_P2_kp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S218>/S-Function'

  int16_T SFunction_P3_ma;             // Expression: int16(0)
                                          //  Referenced by: '<S218>/S-Function'

  int16_T SFunction_P2_mw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S220>/S-Function'

  int16_T SFunction_P3_fu;             // Expression: int16(0)
                                          //  Referenced by: '<S220>/S-Function'

  int16_T SFunction_P2_m0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S222>/S-Function'

  int16_T SFunction_P3_cn;             // Expression: int16(0)
                                          //  Referenced by: '<S222>/S-Function'

  int16_T SFunction_P2_bf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P2_hd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P2_ex;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P3_hz;             // Expression: int16(0)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P3_ka;             // Expression: int16(0)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P3_h4;             // Expression: int16(0)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P2_p;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P3_j;              // Expression: int16(0)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P2_it;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P3_jk;             // Expression: int16(0)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P2_k2u;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P3_n2;             // Expression: int16(0)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P3_m5;             // Expression: int16(0)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P2_li;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P3_jo;             // Expression: int16(0)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P2_no;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P3_cx;             // Expression: int16(0)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P2_o3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P3_bt;             // Expression: int16(0)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P2_ey;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P3_gx;             // Expression: int16(0)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P3_in;             // Expression: int16(0)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P2_ei;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P3_dg;             // Expression: int16(0)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P2_et;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S254>/S-Function'

  int16_T SFunction_P3_dw;             // Expression: int16(0)
                                          //  Referenced by: '<S254>/S-Function'

  int16_T SFunction_P2_ar;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S256>/S-Function'

  int16_T SFunction_P3_og;             // Expression: int16(0)
                                          //  Referenced by: '<S256>/S-Function'

  int16_T SFunction_P2_j4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S258>/S-Function'

  int16_T SFunction_P3_gv;             // Expression: int16(0)
                                          //  Referenced by: '<S258>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S260>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S260>/S-Function'

  int16_T SFunction_P2_ax;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S262>/S-Function'

  int16_T SFunction_P3_jm;             // Expression: int16(0)
                                          //  Referenced by: '<S262>/S-Function'

  int16_T SFunction_P2_n2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S264>/S-Function'

  int16_T SFunction_P3_ap;             // Expression: int16(0)
                                          //  Referenced by: '<S264>/S-Function'

  int16_T SFunction_P2_nz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S266>/S-Function'

  int16_T SFunction_P3_hi5;            // Expression: int16(0)
                                          //  Referenced by: '<S266>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S136>/clk_id'

  int16_T SFunction_P2_mc;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S700>/S-Function'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S136>/CLK1'

  int16_T clk_id_Value_o;              // Computed Parameter: clk_id_Value_o
                                          //  Referenced by: '<S141>/clk_id'

  int16_T CLK1_P1_c;                   // Expression: int16(id)
                                          //  Referenced by: '<S141>/CLK1'

  int16_T SFunction_P2_ls;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S170>/S-Function'

  int16_T SFunction_P3_hh;             // Expression: int16(0)
                                          //  Referenced by: '<S170>/S-Function'

  int16_T SFunction_P2_iv;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S172>/S-Function'

  int16_T SFunction_P3_fn;             // Expression: int16(0)
                                          //  Referenced by: '<S172>/S-Function'

  int16_T SFunction_P2_pl;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S174>/S-Function'

  int16_T SFunction_P3_d3;             // Expression: int16(0)
                                          //  Referenced by: '<S174>/S-Function'

  int16_T SFunction_P2_fa;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S176>/S-Function'

  int16_T SFunction_P3_ci;             // Expression: int16(0)
                                          //  Referenced by: '<S176>/S-Function'

  int16_T SFunction_P2_lsn;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S178>/S-Function'

  int16_T SFunction_P3_fx;             // Expression: int16(0)
                                          //  Referenced by: '<S178>/S-Function'

  int16_T SFunction_P2_gz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S180>/S-Function'

  int16_T SFunction_P3_kb;             // Expression: int16(0)
                                          //  Referenced by: '<S180>/S-Function'

  int16_T SFunction_P2_b0;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S690>/S-Function'

  int16_T SFunction_P2_m0o;            // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S696>/S-Function'

  int16_T SFunction_P2_ii;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S702>/S-Function'

  int16_T SFunction_P2_nw;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S710>/S-Function'

  int16_T DAC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S147>/DAC'

  int16_T DAC_P2_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S147>/DAC'

  int16_T SFunction_P2_gg;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S706>/S-Function'

  int16_T DAC_P1_az;                   // Expression: int16(channel)
                                          //  Referenced by: '<S149>/DAC'

  int16_T DAC_P2_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S149>/DAC'

  uint16_T SFunction_P1[5];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S688>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S688>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S688>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S688>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S688>/S-Function'

  uint16_T SFunction_P1_f[5];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S698>/S-Function'

  uint16_T SFunction_P9_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S698>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S698>/S-Function'

  uint16_T SFunction_P14_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S698>/S-Function'

  uint16_T SFunction_P15_b;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S698>/S-Function'

  uint16_T SFunction_P1_p[10];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S692>/S-Function'

  uint16_T SFunction_P9_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S692>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S692>/S-Function'

  uint16_T SFunction_P14_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S692>/S-Function'

  uint16_T SFunction_P15_p;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S692>/S-Function'

  uint16_T SFunction_P1_n[8];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S704>/S-Function'

  uint16_T SFunction_P9_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S704>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S704>/S-Function'

  uint16_T SFunction_P14_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S704>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S704>/S-Function'

  uint16_T SFunction_P1_h[8];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S708>/S-Function'

  uint16_T SFunction_P9_cs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S708>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S708>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S708>/S-Function'

  uint16_T SFunction_P15_o3;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S708>/S-Function'

  uint16_T SFunction_P1_l[9];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S694>/S-Function'

  uint16_T SFunction_P9_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S694>/S-Function'

  uint16_T SFunction_P11_ax;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S694>/S-Function'

  uint16_T SFunction_P14_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S694>/S-Function'

  uint16_T SFunction_P15_bk;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S694>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P14_ev[5];        // Computed Parameter: SFunction_P14_ev
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P1_a[3];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P5_pt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P1_i[3];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P5_je;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P14_k2[5];        // Computed Parameter: SFunction_P14_k2
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P1_h2[6];         // Computed Parameter: SFunction_P1_h2
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P5_pp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P8_mz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P11_bb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P14_n4[5];        // Computed Parameter: SFunction_P14_n4
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P1_o[6];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P11_je;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P14_ne[5];        // Computed Parameter: SFunction_P14_ne
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P1_e[5];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P8_a;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P1_hm[4];         // Computed Parameter: SFunction_P1_hm
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P5_oy;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P14_k4[5];        // Computed Parameter: SFunction_P14_k4
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P1_fk[5];         // Computed Parameter: SFunction_P1_fk
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P5_ex;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P1_f2[3];         // Computed Parameter: SFunction_P1_f2
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P5_ga;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P14_b3[5];        // Computed Parameter: SFunction_P14_b3
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P1_mr[3];         // Computed Parameter: SFunction_P1_mr
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P5_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P11_i1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P1_oj[3];         // Computed Parameter: SFunction_P1_oj
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P8_do;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P11_lx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P14_n5[5];        // Computed Parameter: SFunction_P14_n5
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P1_m2[4];         // Computed Parameter: SFunction_P1_m2
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P5_es;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P8_av;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P1_ip[4];         // Computed Parameter: SFunction_P1_ip
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P5_l3;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P8_ez;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P11_j5;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P14_g5[5];        // Computed Parameter: SFunction_P14_g5
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P1_p0[2];         // Computed Parameter: SFunction_P1_p0
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P5_bm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P11_ev;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P1_j[4];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P11_mj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P14_hb[5];        // Computed Parameter: SFunction_P14_hb
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P1_jz[5];         // Computed Parameter: SFunction_P1_jz
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P5_gk;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P11_mw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P14_bd[5];        // Computed Parameter: SFunction_P14_bd
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P1_jb[4];         // Computed Parameter: SFunction_P1_jb
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P5_iv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P8_mb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P14_ku[5];        // Computed Parameter: SFunction_P14_ku
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P1_b[4];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P5_fc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P11_lz;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P14_fj[5];        // Computed Parameter: SFunction_P14_fj
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P1_fs[5];         // Computed Parameter: SFunction_P1_fs
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P8_la;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P11_ep;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P1_pk[4];         // Computed Parameter: SFunction_P1_pk
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P5_ez;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P8_eo;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P11_nn;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P14_ef[5];        // Computed Parameter: SFunction_P14_ef
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P1_el[5];         // Computed Parameter: SFunction_P1_el
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P5_g2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P8_od;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P11_iq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P14_bl[5];        // Computed Parameter: SFunction_P14_bl
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P1_jy[3];         // Computed Parameter: SFunction_P1_jy
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P5_cn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P8_pe;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P11_j5f;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P1_di[4];         // Computed Parameter: SFunction_P1_di
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P5_m1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P8_g1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P11_g1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P14_oz[5];        // Computed Parameter: SFunction_P14_oz
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P1_f20[6];        // Computed Parameter: SFunction_P1_f20
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P5_pq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P8_ej;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P14_om[5];        // Computed Parameter: SFunction_P14_om
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P1_bt[3];         // Computed Parameter: SFunction_P1_bt
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P5_ec;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P8_jz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P11_ea;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P14_kp[5];        // Computed Parameter: SFunction_P14_kp
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P1_da[9];         // Computed Parameter: SFunction_P1_da
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P8_e0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P11_mh;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P14_g5c[5];       // Computed Parameter: SFunction_P14_g5c
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P1_g[9];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P5_iq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P8_lu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P11_jo;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P14_lr[5];        // Computed Parameter: SFunction_P14_lr
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P1_nn[6];         // Computed Parameter: SFunction_P1_nn
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P5_he;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P8_jt;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P11_mg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P1_c[6];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P5_ar;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P8_l2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P11_ku;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P14_mj[5];        // Computed Parameter: SFunction_P14_mj
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P1_jbs[5];        // Computed Parameter: SFunction_P1_jbs
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P5_jd;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P8_kl;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P11_hj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P14_j[5];         // Computed Parameter: SFunction_P14_j
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P1_j0[3];         // Computed Parameter: SFunction_P1_j0
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P5_bf;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P8_pq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P11_nj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P14_mp[5];        // Computed Parameter: SFunction_P14_mp
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P1_o3[3];         // Computed Parameter: SFunction_P1_o3
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P5_ph;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P8_p4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P11_dp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P1_cf[3];         // Computed Parameter: SFunction_P1_cf
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P5_dm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P8_gk;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P11_id;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P14_cc[5];        // Computed Parameter: SFunction_P14_cc
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P1_pl[3];         // Computed Parameter: SFunction_P1_pl
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P5_ip;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P11_k3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P14_l0[5];        // Computed Parameter: SFunction_P14_l0
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P1_md[6];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P5_io;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P8_kl1;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P14_fz[5];        // Computed Parameter: SFunction_P14_fz
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P1_hj[3];         // Computed Parameter: SFunction_P1_hj
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P5_lg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P8_js;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P11_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P14_ey[5];        // Computed Parameter: SFunction_P14_ey
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P1_ow[3];         // Computed Parameter: SFunction_P1_ow
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P5_on;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P8_h2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P11_fr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P14_do[5];        // Computed Parameter: SFunction_P14_do
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P1_nq[3];         // Computed Parameter: SFunction_P1_nq
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P5_ml;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P8_im;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P11_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P14_ig[5];        // Computed Parameter: SFunction_P14_ig
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P1_hs[2];         // Computed Parameter: SFunction_P1_hs
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P5_gp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P8_eb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P11_bt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P14_iz[5];        // Computed Parameter: SFunction_P14_iz
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P1_pg[6];         // Computed Parameter: SFunction_P1_pg
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P5_mq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P8_mc;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P11_da;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P14_fe[5];        // Computed Parameter: SFunction_P14_fe
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P1_p1[8];         // Computed Parameter: SFunction_P1_p1
                                          //  Referenced by: '<S700>/S-Function'

  uint16_T SFunction_P9_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S700>/S-Function'

  uint16_T SFunction_P11_pc;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S700>/S-Function'

  uint16_T SFunction_P14_aw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S700>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S700>/S-Function'

  uint16_T SFunction_P1_fd;            // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S139>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S139>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S139>/S-Function'

  uint16_T SFunction_P1_dl[2];         // Computed Parameter: SFunction_P1_dl
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P5_kv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P8_fe;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P11_eb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P14_nt[5];        // Computed Parameter: SFunction_P14_nt
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P1_hw[2];         // Computed Parameter: SFunction_P1_hw
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P5_of;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P11_lzc;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P14_fk[5];        // Computed Parameter: SFunction_P14_fk
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P1_be[2];         // Computed Parameter: SFunction_P1_be
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P5_mr;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P8_pz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P11_kd;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P14_pu[5];        // Computed Parameter: SFunction_P14_pu
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P1_gh[2];         // Computed Parameter: SFunction_P1_gh
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P5_f2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P11_gr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P14_nf[5];        // Computed Parameter: SFunction_P14_nf
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P1_bk[2];         // Computed Parameter: SFunction_P1_bk
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P5_jdq;           // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P8_az;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P11_ct;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P14_kul[5];       // Computed Parameter: SFunction_P14_kul
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P1_ae[2];         // Computed Parameter: SFunction_P1_ae
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P5_hk;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P8_aj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P11_dt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P14_b0[5];        // Computed Parameter: SFunction_P14_b0
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P1_gg[6];         // Computed Parameter: SFunction_P1_gg
                                          //  Referenced by: '<S690>/S-Function'

  uint16_T SFunction_P9_c5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S690>/S-Function'

  uint16_T SFunction_P11_gu;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S690>/S-Function'

  uint16_T SFunction_P14_nm;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S690>/S-Function'

  uint16_T SFunction_P15_d;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S690>/S-Function'

  uint16_T SFunction_P1_md2[9];        // Computed Parameter: SFunction_P1_md2
                                          //  Referenced by: '<S696>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S696>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S696>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S696>/S-Function'

  uint16_T SFunction_P15_ai;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S696>/S-Function'

  uint16_T SFunction_P1_cq[4];         // Computed Parameter: SFunction_P1_cq
                                          //  Referenced by: '<S702>/S-Function'

  uint16_T SFunction_P9_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S702>/S-Function'

  uint16_T SFunction_P11_er;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S702>/S-Function'

  uint16_T SFunction_P14_p5;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S702>/S-Function'

  uint16_T SFunction_P15_e;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S702>/S-Function'

  uint16_T SFunction_P1_ia[4];         // Computed Parameter: SFunction_P1_ia
                                          //  Referenced by: '<S710>/S-Function'

  uint16_T SFunction_P9_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S710>/S-Function'

  uint16_T SFunction_P11_c5;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S710>/S-Function'

  uint16_T SFunction_P14_pg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S710>/S-Function'

  uint16_T SFunction_P15_g;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S710>/S-Function'

  uint16_T SFunction_P1_om[4];         // Computed Parameter: SFunction_P1_om
                                          //  Referenced by: '<S706>/S-Function'

  uint16_T SFunction_P9_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S706>/S-Function'

  uint16_T SFunction_P11_bz;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S706>/S-Function'

  uint16_T SFunction_P14_da;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S706>/S-Function'

  uint16_T SFunction_P15_k;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S706>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S182>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S182>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S182>/PWM'

  boolean_T PWM_P10_d;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S184>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S184>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S184>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S378>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S378>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S378>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S380>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S380>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S380>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S382>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S382>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S382>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S384>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S384>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S384>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S564>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S564>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S564>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S566>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S566>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S566>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S570>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S570>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S570>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S637>/PWM'

  boolean_T PWM_P11_jk;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S637>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S637>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S639>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S639>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S639>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S641>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S641>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S641>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S643>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S643>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S643>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S649>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S649>/PWM'

  boolean_T PWM_P12_hy;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S649>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S651>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S651>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S651>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S653>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S653>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S653>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S655>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S655>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S655>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S661>/PWM'

  boolean_T PWM_P11_by;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S661>/PWM'

  boolean_T PWM_P12_ic;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S661>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S663>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S663>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S663>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S665>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S665>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S665>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S667>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S667>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S667>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S680>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S680>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S680>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S682>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S682>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S682>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S684>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S684>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S684>/PWM'

  boolean_T PWM_P10_id;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S686>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S686>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S686>/PWM'

  boolean_T SFunction_P8_it;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S688>/S-Function'

  boolean_T SFunction_P12_py;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S688>/S-Function'

  boolean_T SFunction_P13_oa;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S688>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S688>/S-Function'

  boolean_T SFunction_P8_lh;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S698>/S-Function'

  boolean_T SFunction_P12_nl;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S698>/S-Function'

  boolean_T SFunction_P13_en;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S698>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S698>/S-Function'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T SFunction_P8_fp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S692>/S-Function'

  boolean_T SFunction_P12_m32;         // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S692>/S-Function'

  boolean_T SFunction_P13_pi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S692>/S-Function'

  boolean_T SFunction_P16_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S692>/S-Function'

  boolean_T SFunction_P8_cp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S704>/S-Function'

  boolean_T SFunction_P12_ad;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S704>/S-Function'

  boolean_T SFunction_P13_f3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S704>/S-Function'

  boolean_T SFunction_P16_k1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S704>/S-Function'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S114>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S114>/ADC'

  boolean_T ADC_P5_gk;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S128>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S128>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S116>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S116>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T SFunction_P8_h0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S708>/S-Function'

  boolean_T SFunction_P12_eh;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S708>/S-Function'

  boolean_T SFunction_P13_hz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S708>/S-Function'

  boolean_T SFunction_P16_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S708>/S-Function'

  boolean_T SFunction_P8_ph;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S694>/S-Function'

  boolean_T SFunction_P12_n4;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S694>/S-Function'

  boolean_T SFunction_P13_i2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S694>/S-Function'

  boolean_T SFunction_P16_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S694>/S-Function'

  boolean_T ADC_P5_n;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P5_gb;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S126>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S126>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S130>/ADC'

  boolean_T ADC_P7_my;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S130>/ADC'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S112>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S112>/ADC'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S132>/ADC'

  boolean_T ADC_P7_hw;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S132>/ADC'

  boolean_T ADC_P5_i;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S134>/ADC'

  boolean_T ADC_P7_g3;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S134>/ADC'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T SFunction_P4_o0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P15_ax;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P9_kw;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P4_au;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P9_pi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P4_ad;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P9_pm;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P10_ni;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P15_cx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P9_p2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P10_cj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P15_gw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P4_co;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P4_cy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P9_g1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P15_at;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P4_hu;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P15_ar;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P4_n5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P9_d2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P15_cb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P4_cj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P9_gc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P10_fn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P15_au;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P4_mr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P10_ik;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P15_el;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P9_o;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P10_gq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P4_ap;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P9_io;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P10_dm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P15_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P4_h5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P9_od;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P10_f1;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P15_gt;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P4_lh;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P9_o4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P10_f3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P15_pc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P4_hb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P9_mc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P10_gz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P15_pcd;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P4_jt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P9_ce;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P10_ib;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P15_li;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P4_j3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P9_pr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P10_lw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P15_fv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P4_bc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P9_ax;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P10_gqx;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P15_gb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P4_gj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P9_g1m;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P15_mh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P4_le;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P9_mi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P15_dk;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P4_nt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P9_mb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P10_db;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P15_cr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P4_i4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P15_oe;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P4_bn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P9_jd;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P10_bh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P15_pu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P4_g2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P9_er;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P10_pz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P15_gp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P4_m3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P9_ew;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P10_ok;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P15_gu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P4_ka;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P9_ar;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P10_kp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P15_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P4_bf;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P9_g5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P10_by;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P4_m4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P9_g0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P10_gd;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P4_mo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P10_gn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P15_ef;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P4_gu;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P9_im;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P10_gt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P15_pf;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P4_n5w;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P10_dmx;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P15_nx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P9_cg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P15_ei;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P9_oo;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P10_it;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P15_p5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P4_oz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P9_h3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P10_n2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P15_ko;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P4_gr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P9_oy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P10_e2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P15_bp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P4_bo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P9_ir;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P10_hh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P15_pr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P4_h5w;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P9_f4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P10_gy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P15_lb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P4_ge;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P9_f3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P10_p2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P15_it;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P4_iq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P9_nc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P10_eu;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P15_hf;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P8_jj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S700>/S-Function'

  boolean_T SFunction_P12_lq;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S700>/S-Function'

  boolean_T SFunction_P13_iw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S700>/S-Function'

  boolean_T SFunction_P16_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S700>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S136>/CLK1'

  boolean_T CLK1_P3_d;                 // Expression: boolean(var_freq)
                                          //  Referenced by: '<S141>/CLK1'

  boolean_T SFunction_P4_hg;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P9_jf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P10_ai;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P15_ch;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P4_geg;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P9_af;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P10_m2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P15_auw;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P4_ja;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P9_kk;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P10_oe;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P15_j5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P4_g3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P9_f1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P10_cf;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P15_jk;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P4_c2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P9_a1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P10_an;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P15_cru;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P4_jo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P9_h0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P10_ck;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P15_ld;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P8_pi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S690>/S-Function'

  boolean_T SFunction_P12_el;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S690>/S-Function'

  boolean_T SFunction_P13_it;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S690>/S-Function'

  boolean_T SFunction_P16_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S690>/S-Function'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S696>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S696>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S696>/S-Function'

  boolean_T SFunction_P16_fp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S696>/S-Function'

  boolean_T SFunction_P8_ki;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S702>/S-Function'

  boolean_T SFunction_P12_ey;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S702>/S-Function'

  boolean_T SFunction_P13_jt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S702>/S-Function'

  boolean_T SFunction_P16_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S702>/S-Function'

  boolean_T SFunction_P8_pn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S710>/S-Function'

  boolean_T SFunction_P12_at;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S710>/S-Function'

  boolean_T SFunction_P13_dk;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S710>/S-Function'

  boolean_T SFunction_P16_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S710>/S-Function'

  boolean_T SFunction_P8_c2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S706>/S-Function'

  boolean_T SFunction_P12_fk;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S706>/S-Function'

  boolean_T SFunction_P13_kv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S706>/S-Function'

  boolean_T SFunction_P16_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S706>/S-Function'

  int8_T Constant_Value_g;             // Computed Parameter: Constant_Value_g
                                          //  Referenced by: '<S420>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S420>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S420>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S420>/Constant4'

  int8_T Constant_Value_gx;            // Computed Parameter: Constant_Value_gx
                                          //  Referenced by: '<S598>/Constant'

  int8_T Constant2_Value_c;            // Computed Parameter: Constant2_Value_c
                                          //  Referenced by: '<S598>/Constant2'

  int8_T Constant3_Value_f;            // Computed Parameter: Constant3_Value_f
                                          //  Referenced by: '<S598>/Constant3'

  int8_T Constant4_Value_a;            // Computed Parameter: Constant4_Value_a
                                          //  Referenced by: '<S598>/Constant4'

  P_Subsystem1_imperix_balance__T Subsystem1_e;// '<S450>/Subsystem1'
  P_Subsystempi2delay_imperix_b_T Subsystempi2delay_p;// '<S450>/Subsystem - pi//2 delay' 
  P_Subsystem1_imperix_balance__T Subsystem1;// '<S386>/Subsystem1'
  P_Subsystempi2delay_imperix_b_T Subsystempi2delay;// '<S386>/Subsystem - pi//2 delay' 
};

// Real-time Model Data Structure
struct tag_RTM_imperix_balance_ctrl_T {
  const char_T * volatile errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    struct {
      uint8_T TID[3];
      uint8_T cLimit[3];
    } TaskCounters;

    struct {
      uint8_T TID0_1;
    } RateInteraction;
  } Timing;

  boolean_T StepTask(int32_T idx) const;
  uint8_T &CounterLimit(int32_T idx);
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
  uint8_T &TaskCounter(int32_T idx);
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_imperix_balance_ctrl_T imperix_balance_ctrl_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_imperix_balance_ctrl_T imperix_balance_ctrl_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_imperix_balance_ctrl_T imperix_balance_ctrl_DW;

// Zero-crossing (trigger) state
extern PrevZCX_imperix_balance_ctrl_T imperix_balance_ctrl_PrevZCX;

// Constant parameters (default storage)
extern const ConstP_imperix_balance_ctrl_T imperix_balance_ctrl_ConstP;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void imperix_balance_ctrl_initialize(void);
  extern void imperix_balance_ctrl_step0(void);// Sample time: [0.000166667s, 0.0s] 
  extern void imperix_balance_ctrl_step1(void);// Sample time: [0.00166667s, 0.0s] 
  extern void imperix_balance_ctrl_step2(void);
                                    // Sample time: [0.00166667s, 0.000833333s]
  extern void imperix_balance_ctrl_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_imperix_balance_ctrl_T *const imperix_balance_ctrl_M;

#ifdef __cplusplus

}

#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Scope' : Unused code path elimination
//  Block '<S1>/Scope1' : Unused code path elimination
//  Block '<S1>/Scope2' : Unused code path elimination
//  Block '<S1>/Scope3' : Unused code path elimination
//  Block '<S1>/Scope4' : Unused code path elimination
//  Block '<S1>/Scope5' : Unused code path elimination
//  Block '<S1>/Scope7' : Unused code path elimination
//  Block '<S17>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S147>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S149>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S27>/Zero-Order Hold1' : Eliminated since input and output rates are identical
//  Block '<S32>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S32>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S33>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S33>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S373>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S374>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S375>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S376>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S559>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S560>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S561>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S562>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S632>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S633>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S634>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S635>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S644>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S645>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S646>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S647>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S656>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S657>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S658>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S659>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S675>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S676>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S677>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S678>/Data Type Conversion3' : Eliminate redundant data type conversion


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'imperix_balance_ctrl'
//  '<S1>'   : 'imperix_balance_ctrl/Closed_loop_control'
//  '<S2>'   : 'imperix_balance_ctrl/Plant_Model'
//  '<S3>'   : 'imperix_balance_ctrl/Closed_loop_control/ADC19'
//  '<S4>'   : 'imperix_balance_ctrl/Closed_loop_control/ADC2'
//  '<S5>'   : 'imperix_balance_ctrl/Closed_loop_control/ADC21'
//  '<S6>'   : 'imperix_balance_ctrl/Closed_loop_control/ADC22'
//  '<S7>'   : 'imperix_balance_ctrl/Closed_loop_control/ADC23'
//  '<S8>'   : 'imperix_balance_ctrl/Closed_loop_control/ADC24'
//  '<S9>'   : 'imperix_balance_ctrl/Closed_loop_control/ADC25'
//  '<S10>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC26'
//  '<S11>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC27'
//  '<S12>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC28'
//  '<S13>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC3'
//  '<S14>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC4'
//  '<S15>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC5'
//  '<S16>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC8'
//  '<S17>'  : 'imperix_balance_ctrl/Closed_loop_control/CLK1'
//  '<S18>'  : 'imperix_balance_ctrl/Closed_loop_control/Configuration'
//  '<S19>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC10'
//  '<S20>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC11'
//  '<S21>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC12'
//  '<S22>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC3'
//  '<S23>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC6'
//  '<S24>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC7'
//  '<S25>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC8'
//  '<S26>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC9'
//  '<S27>'  : 'imperix_balance_ctrl/Closed_loop_control/ICB'
//  '<S28>'  : 'imperix_balance_ctrl/Closed_loop_control/IM references'
//  '<S29>'  : 'imperix_balance_ctrl/Closed_loop_control/Kalman Filter'
//  '<S30>'  : 'imperix_balance_ctrl/Closed_loop_control/LICCs control'
//  '<S31>'  : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index'
//  '<S32>'  : 'imperix_balance_ctrl/Closed_loop_control/PWM_CB1'
//  '<S33>'  : 'imperix_balance_ctrl/Closed_loop_control/PWM_CB4'
//  '<S34>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe1'
//  '<S35>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe10'
//  '<S36>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe11'
//  '<S37>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe12'
//  '<S38>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe13'
//  '<S39>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe14'
//  '<S40>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe15'
//  '<S41>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe16'
//  '<S42>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe17'
//  '<S43>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe18'
//  '<S44>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe19'
//  '<S45>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe2'
//  '<S46>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe20'
//  '<S47>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe21'
//  '<S48>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe22'
//  '<S49>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe23'
//  '<S50>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe24'
//  '<S51>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe25'
//  '<S52>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe26'
//  '<S53>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe27'
//  '<S54>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe28'
//  '<S55>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe29'
//  '<S56>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe3'
//  '<S57>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe30'
//  '<S58>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe31'
//  '<S59>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe32'
//  '<S60>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe33'
//  '<S61>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe34'
//  '<S62>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe35'
//  '<S63>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe36'
//  '<S64>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe37'
//  '<S65>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe38'
//  '<S66>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe39'
//  '<S67>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe4'
//  '<S68>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe40'
//  '<S69>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe41'
//  '<S70>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe5'
//  '<S71>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe6'
//  '<S72>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe7'
//  '<S73>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe8'
//  '<S74>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe9'
//  '<S75>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem'
//  '<S76>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1'
//  '<S77>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10'
//  '<S78>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem11'
//  '<S79>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12'
//  '<S80>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem13'
//  '<S81>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19'
//  '<S82>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2'
//  '<S83>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem21'
//  '<S84>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem22'
//  '<S85>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23'
//  '<S86>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem24'
//  '<S87>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26'
//  '<S88>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3'
//  '<S89>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4'
//  '<S90>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5'
//  '<S91>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem6'
//  '<S92>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem7'
//  '<S93>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem8'
//  '<S94>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9'
//  '<S95>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S96>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter10'
//  '<S97>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11'
//  '<S98>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12'
//  '<S99>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S100>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S101>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter3'
//  '<S102>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter4'
//  '<S103>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5'
//  '<S104>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter7'
//  '<S105>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8'
//  '<S106>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter9'
//  '<S107>' : 'imperix_balance_ctrl/Closed_loop_control/ADC19/sub'
//  '<S108>' : 'imperix_balance_ctrl/Closed_loop_control/ADC19/sub/generation'
//  '<S109>' : 'imperix_balance_ctrl/Closed_loop_control/ADC2/sub'
//  '<S110>' : 'imperix_balance_ctrl/Closed_loop_control/ADC2/sub/generation'
//  '<S111>' : 'imperix_balance_ctrl/Closed_loop_control/ADC21/sub'
//  '<S112>' : 'imperix_balance_ctrl/Closed_loop_control/ADC21/sub/generation'
//  '<S113>' : 'imperix_balance_ctrl/Closed_loop_control/ADC22/sub'
//  '<S114>' : 'imperix_balance_ctrl/Closed_loop_control/ADC22/sub/generation'
//  '<S115>' : 'imperix_balance_ctrl/Closed_loop_control/ADC23/sub'
//  '<S116>' : 'imperix_balance_ctrl/Closed_loop_control/ADC23/sub/generation'
//  '<S117>' : 'imperix_balance_ctrl/Closed_loop_control/ADC24/sub'
//  '<S118>' : 'imperix_balance_ctrl/Closed_loop_control/ADC24/sub/generation'
//  '<S119>' : 'imperix_balance_ctrl/Closed_loop_control/ADC25/sub'
//  '<S120>' : 'imperix_balance_ctrl/Closed_loop_control/ADC25/sub/generation'
//  '<S121>' : 'imperix_balance_ctrl/Closed_loop_control/ADC26/sub'
//  '<S122>' : 'imperix_balance_ctrl/Closed_loop_control/ADC26/sub/generation'
//  '<S123>' : 'imperix_balance_ctrl/Closed_loop_control/ADC27/sub'
//  '<S124>' : 'imperix_balance_ctrl/Closed_loop_control/ADC27/sub/generation'
//  '<S125>' : 'imperix_balance_ctrl/Closed_loop_control/ADC28/sub'
//  '<S126>' : 'imperix_balance_ctrl/Closed_loop_control/ADC28/sub/generation'
//  '<S127>' : 'imperix_balance_ctrl/Closed_loop_control/ADC3/sub'
//  '<S128>' : 'imperix_balance_ctrl/Closed_loop_control/ADC3/sub/generation'
//  '<S129>' : 'imperix_balance_ctrl/Closed_loop_control/ADC4/sub'
//  '<S130>' : 'imperix_balance_ctrl/Closed_loop_control/ADC4/sub/generation'
//  '<S131>' : 'imperix_balance_ctrl/Closed_loop_control/ADC5/sub'
//  '<S132>' : 'imperix_balance_ctrl/Closed_loop_control/ADC5/sub/generation'
//  '<S133>' : 'imperix_balance_ctrl/Closed_loop_control/ADC8/sub'
//  '<S134>' : 'imperix_balance_ctrl/Closed_loop_control/ADC8/sub/generation'
//  '<S135>' : 'imperix_balance_ctrl/Closed_loop_control/CLK1/sub'
//  '<S136>' : 'imperix_balance_ctrl/Closed_loop_control/CLK1/sub/generation'
//  '<S137>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S138>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S139>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S140>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S141>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S142>' : 'imperix_balance_ctrl/Closed_loop_control/DAC10/sub'
//  '<S143>' : 'imperix_balance_ctrl/Closed_loop_control/DAC10/sub/generation'
//  '<S144>' : 'imperix_balance_ctrl/Closed_loop_control/DAC11/sub'
//  '<S145>' : 'imperix_balance_ctrl/Closed_loop_control/DAC11/sub/generation'
//  '<S146>' : 'imperix_balance_ctrl/Closed_loop_control/DAC12/sub'
//  '<S147>' : 'imperix_balance_ctrl/Closed_loop_control/DAC12/sub/generation'
//  '<S148>' : 'imperix_balance_ctrl/Closed_loop_control/DAC3/sub'
//  '<S149>' : 'imperix_balance_ctrl/Closed_loop_control/DAC3/sub/generation'
//  '<S150>' : 'imperix_balance_ctrl/Closed_loop_control/DAC6/sub'
//  '<S151>' : 'imperix_balance_ctrl/Closed_loop_control/DAC6/sub/generation'
//  '<S152>' : 'imperix_balance_ctrl/Closed_loop_control/DAC7/sub'
//  '<S153>' : 'imperix_balance_ctrl/Closed_loop_control/DAC7/sub/generation'
//  '<S154>' : 'imperix_balance_ctrl/Closed_loop_control/DAC8/sub'
//  '<S155>' : 'imperix_balance_ctrl/Closed_loop_control/DAC8/sub/generation'
//  '<S156>' : 'imperix_balance_ctrl/Closed_loop_control/DAC9/sub'
//  '<S157>' : 'imperix_balance_ctrl/Closed_loop_control/DAC9/sub/generation'
//  '<S158>' : 'imperix_balance_ctrl/Closed_loop_control/ICB/Energy balance'
//  '<S159>' : 'imperix_balance_ctrl/Closed_loop_control/ICB/LPF'
//  '<S160>' : 'imperix_balance_ctrl/Closed_loop_control/ICB/Saturation'
//  '<S161>' : 'imperix_balance_ctrl/Closed_loop_control/ICB/White noise'
//  '<S162>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Modulation index'
//  '<S163>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe2'
//  '<S164>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe3'
//  '<S165>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe4'
//  '<S166>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe5'
//  '<S167>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe6'
//  '<S168>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe7'
//  '<S169>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe2/sub'
//  '<S170>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe2/sub/generation'
//  '<S171>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe3/sub'
//  '<S172>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe3/sub/generation'
//  '<S173>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe4/sub'
//  '<S174>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe4/sub/generation'
//  '<S175>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe5/sub'
//  '<S176>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe5/sub/generation'
//  '<S177>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe6/sub'
//  '<S178>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe6/sub/generation'
//  '<S179>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe7/sub'
//  '<S180>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Probe7/sub/generation'
//  '<S181>' : 'imperix_balance_ctrl/Closed_loop_control/PWM_CB1/sub'
//  '<S182>' : 'imperix_balance_ctrl/Closed_loop_control/PWM_CB1/sub/generation'
//  '<S183>' : 'imperix_balance_ctrl/Closed_loop_control/PWM_CB4/sub'
//  '<S184>' : 'imperix_balance_ctrl/Closed_loop_control/PWM_CB4/sub/generation'
//  '<S185>' : 'imperix_balance_ctrl/Closed_loop_control/Probe1/sub'
//  '<S186>' : 'imperix_balance_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S187>' : 'imperix_balance_ctrl/Closed_loop_control/Probe10/sub'
//  '<S188>' : 'imperix_balance_ctrl/Closed_loop_control/Probe10/sub/generation'
//  '<S189>' : 'imperix_balance_ctrl/Closed_loop_control/Probe11/sub'
//  '<S190>' : 'imperix_balance_ctrl/Closed_loop_control/Probe11/sub/generation'
//  '<S191>' : 'imperix_balance_ctrl/Closed_loop_control/Probe12/sub'
//  '<S192>' : 'imperix_balance_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S193>' : 'imperix_balance_ctrl/Closed_loop_control/Probe13/sub'
//  '<S194>' : 'imperix_balance_ctrl/Closed_loop_control/Probe13/sub/generation'
//  '<S195>' : 'imperix_balance_ctrl/Closed_loop_control/Probe14/sub'
//  '<S196>' : 'imperix_balance_ctrl/Closed_loop_control/Probe14/sub/generation'
//  '<S197>' : 'imperix_balance_ctrl/Closed_loop_control/Probe15/sub'
//  '<S198>' : 'imperix_balance_ctrl/Closed_loop_control/Probe15/sub/generation'
//  '<S199>' : 'imperix_balance_ctrl/Closed_loop_control/Probe16/sub'
//  '<S200>' : 'imperix_balance_ctrl/Closed_loop_control/Probe16/sub/generation'
//  '<S201>' : 'imperix_balance_ctrl/Closed_loop_control/Probe17/sub'
//  '<S202>' : 'imperix_balance_ctrl/Closed_loop_control/Probe17/sub/generation'
//  '<S203>' : 'imperix_balance_ctrl/Closed_loop_control/Probe18/sub'
//  '<S204>' : 'imperix_balance_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S205>' : 'imperix_balance_ctrl/Closed_loop_control/Probe19/sub'
//  '<S206>' : 'imperix_balance_ctrl/Closed_loop_control/Probe19/sub/generation'
//  '<S207>' : 'imperix_balance_ctrl/Closed_loop_control/Probe2/sub'
//  '<S208>' : 'imperix_balance_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S209>' : 'imperix_balance_ctrl/Closed_loop_control/Probe20/sub'
//  '<S210>' : 'imperix_balance_ctrl/Closed_loop_control/Probe20/sub/generation'
//  '<S211>' : 'imperix_balance_ctrl/Closed_loop_control/Probe21/sub'
//  '<S212>' : 'imperix_balance_ctrl/Closed_loop_control/Probe21/sub/generation'
//  '<S213>' : 'imperix_balance_ctrl/Closed_loop_control/Probe22/sub'
//  '<S214>' : 'imperix_balance_ctrl/Closed_loop_control/Probe22/sub/generation'
//  '<S215>' : 'imperix_balance_ctrl/Closed_loop_control/Probe23/sub'
//  '<S216>' : 'imperix_balance_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S217>' : 'imperix_balance_ctrl/Closed_loop_control/Probe24/sub'
//  '<S218>' : 'imperix_balance_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S219>' : 'imperix_balance_ctrl/Closed_loop_control/Probe25/sub'
//  '<S220>' : 'imperix_balance_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S221>' : 'imperix_balance_ctrl/Closed_loop_control/Probe26/sub'
//  '<S222>' : 'imperix_balance_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S223>' : 'imperix_balance_ctrl/Closed_loop_control/Probe27/sub'
//  '<S224>' : 'imperix_balance_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S225>' : 'imperix_balance_ctrl/Closed_loop_control/Probe28/sub'
//  '<S226>' : 'imperix_balance_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S227>' : 'imperix_balance_ctrl/Closed_loop_control/Probe29/sub'
//  '<S228>' : 'imperix_balance_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S229>' : 'imperix_balance_ctrl/Closed_loop_control/Probe3/sub'
//  '<S230>' : 'imperix_balance_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S231>' : 'imperix_balance_ctrl/Closed_loop_control/Probe30/sub'
//  '<S232>' : 'imperix_balance_ctrl/Closed_loop_control/Probe30/sub/generation'
//  '<S233>' : 'imperix_balance_ctrl/Closed_loop_control/Probe31/sub'
//  '<S234>' : 'imperix_balance_ctrl/Closed_loop_control/Probe31/sub/generation'
//  '<S235>' : 'imperix_balance_ctrl/Closed_loop_control/Probe32/sub'
//  '<S236>' : 'imperix_balance_ctrl/Closed_loop_control/Probe32/sub/generation'
//  '<S237>' : 'imperix_balance_ctrl/Closed_loop_control/Probe33/sub'
//  '<S238>' : 'imperix_balance_ctrl/Closed_loop_control/Probe33/sub/generation'
//  '<S239>' : 'imperix_balance_ctrl/Closed_loop_control/Probe34/sub'
//  '<S240>' : 'imperix_balance_ctrl/Closed_loop_control/Probe34/sub/generation'
//  '<S241>' : 'imperix_balance_ctrl/Closed_loop_control/Probe35/sub'
//  '<S242>' : 'imperix_balance_ctrl/Closed_loop_control/Probe35/sub/generation'
//  '<S243>' : 'imperix_balance_ctrl/Closed_loop_control/Probe36/sub'
//  '<S244>' : 'imperix_balance_ctrl/Closed_loop_control/Probe36/sub/generation'
//  '<S245>' : 'imperix_balance_ctrl/Closed_loop_control/Probe37/sub'
//  '<S246>' : 'imperix_balance_ctrl/Closed_loop_control/Probe37/sub/generation'
//  '<S247>' : 'imperix_balance_ctrl/Closed_loop_control/Probe38/sub'
//  '<S248>' : 'imperix_balance_ctrl/Closed_loop_control/Probe38/sub/generation'
//  '<S249>' : 'imperix_balance_ctrl/Closed_loop_control/Probe39/sub'
//  '<S250>' : 'imperix_balance_ctrl/Closed_loop_control/Probe39/sub/generation'
//  '<S251>' : 'imperix_balance_ctrl/Closed_loop_control/Probe4/sub'
//  '<S252>' : 'imperix_balance_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S253>' : 'imperix_balance_ctrl/Closed_loop_control/Probe40/sub'
//  '<S254>' : 'imperix_balance_ctrl/Closed_loop_control/Probe40/sub/generation'
//  '<S255>' : 'imperix_balance_ctrl/Closed_loop_control/Probe41/sub'
//  '<S256>' : 'imperix_balance_ctrl/Closed_loop_control/Probe41/sub/generation'
//  '<S257>' : 'imperix_balance_ctrl/Closed_loop_control/Probe5/sub'
//  '<S258>' : 'imperix_balance_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S259>' : 'imperix_balance_ctrl/Closed_loop_control/Probe6/sub'
//  '<S260>' : 'imperix_balance_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S261>' : 'imperix_balance_ctrl/Closed_loop_control/Probe7/sub'
//  '<S262>' : 'imperix_balance_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S263>' : 'imperix_balance_ctrl/Closed_loop_control/Probe8/sub'
//  '<S264>' : 'imperix_balance_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S265>' : 'imperix_balance_ctrl/Closed_loop_control/Probe9/sub'
//  '<S266>' : 'imperix_balance_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S267>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI'
//  '<S268>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI'
//  '<S269>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup'
//  '<S270>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain'
//  '<S271>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative'
//  '<S272>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter'
//  '<S273>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs'
//  '<S274>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain'
//  '<S275>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain'
//  '<S276>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk'
//  '<S277>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator'
//  '<S278>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs'
//  '<S279>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy'
//  '<S280>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain'
//  '<S281>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy'
//  '<S282>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain'
//  '<S283>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal'
//  '<S284>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation'
//  '<S285>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk'
//  '<S286>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum'
//  '<S287>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk'
//  '<S288>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode'
//  '<S289>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum'
//  '<S290>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral'
//  '<S291>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain'
//  '<S292>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal'
//  '<S293>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal'
//  '<S294>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal'
//  '<S295>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup/Back Calculation'
//  '<S296>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain/Disabled'
//  '<S297>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative/Disabled'
//  '<S298>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter/Disabled'
//  '<S299>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs/Disabled'
//  '<S300>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain/Internal Parameters'
//  '<S301>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain/Passthrough'
//  '<S302>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S303>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator/Discrete'
//  '<S304>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs/Internal IC'
//  '<S305>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S306>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain/Disabled'
//  '<S307>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy/Disabled'
//  '<S308>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S309>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal/External Reset'
//  '<S310>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation/Enabled'
//  '<S311>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk/Disabled'
//  '<S312>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum/Sum_PI'
//  '<S313>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk/Disabled'
//  '<S314>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode/Disabled'
//  '<S315>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S316>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S317>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S318>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal/Forward_Path'
//  '<S319>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal/Internal PreInt'
//  '<S320>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal/Forward_Path'
//  '<S321>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup'
//  '<S322>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain'
//  '<S323>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative'
//  '<S324>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter'
//  '<S325>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs'
//  '<S326>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain'
//  '<S327>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain'
//  '<S328>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk'
//  '<S329>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator'
//  '<S330>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs'
//  '<S331>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy'
//  '<S332>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain'
//  '<S333>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy'
//  '<S334>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain'
//  '<S335>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal'
//  '<S336>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation'
//  '<S337>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk'
//  '<S338>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum'
//  '<S339>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk'
//  '<S340>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode'
//  '<S341>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum'
//  '<S342>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral'
//  '<S343>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain'
//  '<S344>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal'
//  '<S345>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal'
//  '<S346>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal'
//  '<S347>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup/Back Calculation'
//  '<S348>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain/Disabled'
//  '<S349>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative/Disabled'
//  '<S350>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter/Disabled'
//  '<S351>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs/Disabled'
//  '<S352>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain/Internal Parameters'
//  '<S353>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain/Passthrough'
//  '<S354>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S355>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator/Discrete'
//  '<S356>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs/Internal IC'
//  '<S357>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S358>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain/Disabled'
//  '<S359>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy/Disabled'
//  '<S360>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S361>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal/External Reset'
//  '<S362>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation/Enabled'
//  '<S363>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk/Disabled'
//  '<S364>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum/Sum_PI'
//  '<S365>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk/Disabled'
//  '<S366>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode/Disabled'
//  '<S367>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S368>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S369>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S370>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal/Forward_Path'
//  '<S371>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal/Internal PreInt'
//  '<S372>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal/Forward_Path'
//  '<S373>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S374>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S375>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S376>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S377>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S378>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S379>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S380>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S381>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S382>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S383>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S384>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S385>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/Alpha-Beta-Zero to abc'
//  '<S386>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero'
//  '<S387>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S388>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S389>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S390>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S391>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem11/Sample and Hold'
//  '<S392>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/LPF'
//  '<S393>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1'
//  '<S394>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Anti-windup'
//  '<S395>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/D Gain'
//  '<S396>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/External Derivative'
//  '<S397>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Filter'
//  '<S398>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Filter ICs'
//  '<S399>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/I Gain'
//  '<S400>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Ideal P Gain'
//  '<S401>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Ideal P Gain Fdbk'
//  '<S402>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Integrator'
//  '<S403>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Integrator ICs'
//  '<S404>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/N Copy'
//  '<S405>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/N Gain'
//  '<S406>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/P Copy'
//  '<S407>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Parallel P Gain'
//  '<S408>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Reset Signal'
//  '<S409>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Saturation'
//  '<S410>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Saturation Fdbk'
//  '<S411>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Sum'
//  '<S412>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Sum Fdbk'
//  '<S413>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Tracking Mode'
//  '<S414>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Tracking Mode Sum'
//  '<S415>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Tsamp - Integral'
//  '<S416>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Tsamp - Ngain'
//  '<S417>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/postSat Signal'
//  '<S418>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/preInt Signal'
//  '<S419>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/preSat Signal'
//  '<S420>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Anti-windup/Disc. Clamping Parallel'
//  '<S421>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S422>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S423>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/D Gain/Disabled'
//  '<S424>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/External Derivative/Disabled'
//  '<S425>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Filter/Disabled'
//  '<S426>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Filter ICs/Disabled'
//  '<S427>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/I Gain/Internal Parameters'
//  '<S428>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Ideal P Gain/Passthrough'
//  '<S429>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S430>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Integrator/Discrete'
//  '<S431>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Integrator ICs/Internal IC'
//  '<S432>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S433>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/N Gain/Disabled'
//  '<S434>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/P Copy/Disabled'
//  '<S435>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S436>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Reset Signal/Disabled'
//  '<S437>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Saturation/Enabled'
//  '<S438>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Saturation Fdbk/Disabled'
//  '<S439>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Sum/Sum_PI'
//  '<S440>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Sum Fdbk/Disabled'
//  '<S441>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Tracking Mode/Disabled'
//  '<S442>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S443>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S444>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S445>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/postSat Signal/Forward_Path'
//  '<S446>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/preInt Signal/Internal PreInt'
//  '<S447>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem12/PID Controller1/preSat Signal/Forward_Path'
//  '<S448>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S449>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S450>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S451>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S452>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S453>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S454>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S455>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S456>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S457>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S458>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S459>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S460>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S461>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S462>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S463>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S464>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S465>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S466>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S467>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S468>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S469>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S470>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S471>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S472>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S473>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S474>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S475>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S476>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S477>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S478>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S479>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S480>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S481>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S482>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S483>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S484>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S485>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S486>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S487>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S488>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S489>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S490>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S491>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/External Reset'
//  '<S492>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S493>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S494>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S495>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S496>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S497>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S498>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S499>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S500>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S501>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S502>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S503>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S504>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S505>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S506>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S507>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S508>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S509>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S510>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S511>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S512>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S513>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S514>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S515>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S516>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S517>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S518>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S519>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S520>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S521>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S522>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S523>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S524>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S525>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S526>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S527>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S528>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S529>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S530>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S531>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S532>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S533>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S534>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S535>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S536>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S537>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S538>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S539>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S540>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S541>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S542>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S543>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/External Reset'
//  '<S544>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S545>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S546>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S547>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S548>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S549>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S550>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S551>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S552>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S553>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S554>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S555>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S556>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S557>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S558>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S559>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S560>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S561>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S562>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S563>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S564>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S565>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S566>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S567>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S568>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S569>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S570>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S571>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI'
//  '<S572>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup'
//  '<S573>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain'
//  '<S574>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative'
//  '<S575>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter'
//  '<S576>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs'
//  '<S577>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain'
//  '<S578>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain'
//  '<S579>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk'
//  '<S580>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator'
//  '<S581>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs'
//  '<S582>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy'
//  '<S583>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain'
//  '<S584>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy'
//  '<S585>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain'
//  '<S586>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal'
//  '<S587>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation'
//  '<S588>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk'
//  '<S589>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum'
//  '<S590>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk'
//  '<S591>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode'
//  '<S592>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum'
//  '<S593>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral'
//  '<S594>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain'
//  '<S595>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal'
//  '<S596>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal'
//  '<S597>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal'
//  '<S598>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S599>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S600>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S601>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain/Disabled'
//  '<S602>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative/Disabled'
//  '<S603>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter/Disabled'
//  '<S604>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs/Disabled'
//  '<S605>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain/Internal Parameters'
//  '<S606>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain/Passthrough'
//  '<S607>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S608>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator/Discrete'
//  '<S609>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs/Internal IC'
//  '<S610>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S611>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain/Disabled'
//  '<S612>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy/Disabled'
//  '<S613>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S614>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal/Disabled'
//  '<S615>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation/Enabled'
//  '<S616>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk/Disabled'
//  '<S617>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum/Sum_PI'
//  '<S618>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk/Disabled'
//  '<S619>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode/Disabled'
//  '<S620>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S621>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S622>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S623>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal/Forward_Path'
//  '<S624>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal/Internal PreInt'
//  '<S625>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal/Forward_Path'
//  '<S626>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S627>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S628>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S629>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S630>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S631>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S632>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S633>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S634>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S635>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S636>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S637>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S638>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S639>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S640>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S641>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S642>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S643>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S644>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S645>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S646>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S647>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S648>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S649>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S650>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S651>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S652>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S653>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S654>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S655>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S656>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S657>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S658>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S659>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S660>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S661>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S662>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S663>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S664>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S665>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S666>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S667>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S668>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem7/Sample and Hold'
//  '<S669>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem7/Sample and Hold1'
//  '<S670>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem7/Sample and Hold2'
//  '<S671>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem7/Sample and Hold3'
//  '<S672>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem7/Sample and Hold4'
//  '<S673>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem7/Sample and Hold5'
//  '<S674>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem8/Sample and Hold'
//  '<S675>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S676>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S677>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S678>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S679>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S680>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S681>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S682>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S683>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S684>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S685>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S686>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S687>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S688>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S689>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter10/sub'
//  '<S690>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter10/sub/generation'
//  '<S691>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11/sub'
//  '<S692>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11/sub/generation'
//  '<S693>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12/sub'
//  '<S694>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12/sub/generation'
//  '<S695>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S696>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S697>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S698>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'
//  '<S699>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter3/sub'
//  '<S700>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S701>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter4/sub'
//  '<S702>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter4/sub/generation'
//  '<S703>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5/sub'
//  '<S704>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5/sub/generation'
//  '<S705>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter7/sub'
//  '<S706>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter7/sub/generation'
//  '<S707>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8/sub'
//  '<S708>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8/sub/generation'
//  '<S709>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter9/sub'
//  '<S710>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter9/sub/generation'

#endif                                 // imperix_balance_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
