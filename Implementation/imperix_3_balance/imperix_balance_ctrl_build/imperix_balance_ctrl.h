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
// Model version                  : 19.129
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Fri Feb 20 18:44:57 2026
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

// Block signals for system '<S75>/Moving Average'
struct B_MovingAverage_imperix_balan_T {
  real_T MovingAverage;                // '<S75>/Moving Average'
};

// Block states (default storage) for system '<S75>/Moving Average'
struct DW_MovingAverage_imperix_bala_T {
  dsp_simulink_MovingAverage_im_T obj; // '<S75>/Moving Average'
  boolean_T objisempty;                // '<S75>/Moving Average'
};

// Block signals (default storage)
struct B_imperix_balance_ctrl_T {
  real_T TmpRTBAtSaturationInport1[3]; // '<S31>/Vector Concatenate4'
  real_T In;                           // '<S651>/In'
  real_T Fcn;                          // '<S614>/Fcn'
  real_T Fcn1;                         // '<S614>/Fcn1'
  real_T Fcn_o;                        // '<S613>/Fcn'
  real_T Fcn1_l;                       // '<S613>/Fcn1'
  real_T Fcn_ou;                       // '<S541>/Fcn'
  real_T Fcn1_f;                       // '<S541>/Fcn1'
  real_T Fcn_b;                        // '<S540>/Fcn'
  real_T Fcn1_i;                       // '<S540>/Fcn1'
  real_T In_g;                         // '<S430>/In'
  real_T Fcn_br;                       // '<S429>/Fcn'
  real_T Fcn1_f3;                      // '<S429>/Fcn1'
  real_T Fcn_m;                        // '<S428>/Fcn'
  real_T Fcn1_c;                       // '<S428>/Fcn1'
  real32_T SFunction;                  // '<S155>/S-Function'
  real32_T SFunction_n;                // '<S157>/S-Function'
  real32_T SFunction_a;                // '<S159>/S-Function'
  real32_T SFunction_j;                // '<S161>/S-Function'
  real32_T SFunction_j0;               // '<S165>/S-Function'
  real32_T SFunction_e;                // '<S167>/S-Function'
  real32_T SFunction_g;                // '<S163>/S-Function'
  real32_T ADC;                        // '<S100>/ADC'
  real32_T ADC_o;                      // '<S118>/ADC'
  real32_T ADC_n;                      // '<S122>/ADC'
  real32_T ADC_m;                      // '<S104>/ADC'
  real32_T ADC_k;                      // '<S124>/ADC'
  real32_T ADC_f;                      // '<S126>/ADC'
  real32_T ADC_fp;                     // '<S114>/ADC'
  real32_T ADC_e;                      // '<S116>/ADC'
  real32_T ADC_i;                      // '<S106>/ADC'
  real32_T ADC_d;                      // '<S120>/ADC'
  real32_T ADC_ib;                     // '<S108>/ADC'
  real32_T ADC_p;                      // '<S110>/ADC'
  real32_T SFunction_gn;               // '<S665>/S-Function'
  real32_T SFunction_f;                // '<S673>/S-Function'
  real32_T ADC_g;                      // '<S112>/ADC'
  real32_T SFunction_k;                // '<S667>/S-Function'
  real32_T SFunction_c;                // '<S677>/S-Function'
  real32_T SFunction_m;                // '<S679>/S-Function'
  real32_T SFunction_fs;               // '<S681>/S-Function'
  real32_T SFunction_co;               // '<S669>/S-Function'
  real32_T DataTypeConversion1;        // '<S135>/Data Type Conversion1'
  real32_T DataTypeConversion1_l;      // '<S137>/Data Type Conversion1'
  real32_T DataTypeConversion1_la;     // '<S139>/Data Type Conversion1'
  real32_T DataTypeConversion1_p;      // '<S141>/Data Type Conversion1'
  real32_T DataTypeConversion1_a;      // '<S143>/Data Type Conversion1'
  real32_T DataTypeConversion1_e;      // '<S145>/Data Type Conversion1'
  real32_T ADC_gk;                     // '<S102>/ADC'
  real32_T DataTypeConversion;         // '<S229>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S231>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S233>/Data Type Conversion'
  real32_T DataTypeConversion_kx;      // '<S235>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S237>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S239>/Data Type Conversion'
  real32_T DataTypeConversion_m;       // '<S241>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S243>/Data Type Conversion'
  real32_T DataTypeConversion_iu;      // '<S245>/Data Type Conversion'
  real32_T DataTypeConversion_pe;      // '<S247>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S249>/Data Type Conversion'
  real32_T DataTypeConversion_id;      // '<S251>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S253>/Data Type Conversion'
  real32_T DataTypeConversion_gb;      // '<S255>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S257>/Data Type Conversion'
  real32_T DataTypeConversion_m1;      // '<S259>/Data Type Conversion'
  real32_T DataTypeConversion_dr;      // '<S261>/Data Type Conversion'
  real32_T DataTypeConversion_pw;      // '<S263>/Data Type Conversion'
  real32_T DataTypeConversion_mx;      // '<S265>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S267>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S269>/Data Type Conversion'
  real32_T DataTypeConversion_d4;      // '<S271>/Data Type Conversion'
  real32_T DataTypeConversion_pw0;     // '<S273>/Data Type Conversion'
  real32_T DataTypeConversion_ez;      // '<S275>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S277>/Data Type Conversion'
  real32_T DataTypeConversion_lu;      // '<S279>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S281>/Data Type Conversion'
  real32_T DataTypeConversion_ir;      // '<S283>/Data Type Conversion'
  real32_T DataTypeConversion_d5;      // '<S285>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S287>/Data Type Conversion'
  real32_T DataTypeConversion_fy;      // '<S289>/Data Type Conversion'
  real32_T DataTypeConversion_l5;      // '<S291>/Data Type Conversion'
  real32_T DataTypeConversion_iw;      // '<S293>/Data Type Conversion'
  real32_T DataTypeConversion_fo;      // '<S295>/Data Type Conversion'
  real32_T DataTypeConversion_a;       // '<S297>/Data Type Conversion'
  real32_T DataTypeConversion_fs;      // '<S299>/Data Type Conversion'
  real32_T DataTypeConversion_ba;      // '<S301>/Data Type Conversion'
  real32_T DataTypeConversion_fz;      // '<S303>/Data Type Conversion'
  real32_T DataTypeConversion_bg;      // '<S305>/Data Type Conversion'
  real32_T SFunction_es;               // '<S675>/S-Function'
  real32_T Saturation;                 // '<S128>/Saturation'
  real32_T DataTypeConversion1_le;     // '<S412>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S412>/Data Type Conversion2'
  real32_T SFunction_c4;               // '<S671>/S-Function'
  real32_T DataTypeConversion1_pv;     // '<S413>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S413>/Data Type Conversion2'
  real32_T DataTypeConversion1_h;      // '<S414>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S414>/Data Type Conversion2'
  real32_T DataTypeConversion1_f;      // '<S415>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S415>/Data Type Conversion2'
  real32_T DataTypeConversion1_b;      // '<S542>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S542>/Data Type Conversion2'
  real32_T DataTypeConversion1_eo;     // '<S543>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S543>/Data Type Conversion2'
  real32_T DataTypeConversion1_po;     // '<S544>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S544>/Data Type Conversion2'
  real32_T DataTypeConversion1_c;      // '<S545>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S545>/Data Type Conversion2'
  real32_T DataTypeConversion1_h3;     // '<S615>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S615>/Data Type Conversion2'
  real32_T DataTypeConversion1_m;      // '<S616>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S616>/Data Type Conversion2'
  real32_T DataTypeConversion1_fz;     // '<S617>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S617>/Data Type Conversion2'
  real32_T DataTypeConversion1_i;      // '<S618>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S618>/Data Type Conversion2'
  real32_T DataTypeConversion1_al;     // '<S627>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S627>/Data Type Conversion2'
  real32_T DataTypeConversion1_k;      // '<S628>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S628>/Data Type Conversion2'
  real32_T DataTypeConversion1_l4;     // '<S629>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S629>/Data Type Conversion2'
  real32_T DataTypeConversion1_bg;     // '<S630>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S630>/Data Type Conversion2'
  real32_T DataTypeConversion1_d;      // '<S639>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S639>/Data Type Conversion2'
  real32_T DataTypeConversion1_o;      // '<S640>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S640>/Data Type Conversion2'
  real32_T DataTypeConversion1_ay;     // '<S641>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S641>/Data Type Conversion2'
  real32_T DataTypeConversion1_pf;     // '<S642>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S642>/Data Type Conversion2'
  real32_T DataTypeConversion1_als;    // '<S652>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S652>/Data Type Conversion2'
  real32_T DataTypeConversion1_ig;     // '<S653>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S653>/Data Type Conversion2'
  real32_T DataTypeConversion1_g;      // '<S654>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S654>/Data Type Conversion2'
  real32_T DataTypeConversion1_gw;     // '<S655>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S655>/Data Type Conversion2'
  B_MovingAverage_imperix_balan_T MovingAverage_p;// '<S75>/Moving Average'
  B_MovingAverage_imperix_balan_T MovingAverage;// '<S75>/Moving Average'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_balance_ctrl_T {
  mpcActiveSetOptions_imperix_b_T options_z;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_b_T options_o;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_b_T options;// '<S1>/LICCs control'
  mpcActiveSetOptions_imperix_b_T SolverOpts;// '<S31>/Saturation'
  real_T SFunction_DSTATE;             // '<S155>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S157>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S159>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S161>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S165>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S167>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S163>/S-Function'
  real_T UnitDelay1_DSTATE;            // '<S29>/Unit Delay1'
  real_T Integrator_DSTATE;            // '<S210>/Integrator'
  real_T Integrator_DSTATE_a;          // '<S591>/Integrator'
  real_T SFunction_DSTATE_c;           // '<S665>/S-Function'
  real_T SFunction_DSTATE_en;          // '<S673>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S667>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S677>/S-Function'
  real_T Integrator_DSTATE_b;          // '<S394>/Integrator'
  real_T UnitDelay_DSTATE[2];          // '<S77>/Unit Delay'
  real_T SFunction_DSTATE_d;           // '<S679>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S681>/S-Function'
  real_T Integrator_DSTATE_k;          // '<S342>/Integrator'
  real_T SFunction_DSTATE_c4;          // '<S669>/S-Function'
  real_T Integrator_DSTATE_h;          // '<S468>/Integrator'
  real_T Integrator_DSTATE_m;          // '<S520>/Integrator'
  real_T UnitDelay1_DSTATE_f[2];       // '<S170>/Unit Delay1'
  real_T DAC_DSTATE;                   // '<S135>/DAC'
  real_T DAC_DSTATE_c;                 // '<S137>/DAC'
  real_T DAC_DSTATE_h;                 // '<S139>/DAC'
  real_T DAC_DSTATE_d;                 // '<S141>/DAC'
  real_T DAC_DSTATE_b;                 // '<S143>/DAC'
  real_T DAC_DSTATE_h0;                // '<S145>/DAC'
  real_T SFunction_DSTATE_m;           // '<S229>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S231>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S233>/S-Function'
  real_T SFunction_DSTATE_d2;          // '<S235>/S-Function'
  real_T SFunction_DSTATE_ix;          // '<S237>/S-Function'
  real_T SFunction_DSTATE_nd;          // '<S239>/S-Function'
  real_T SFunction_DSTATE_j0;          // '<S241>/S-Function'
  real_T SFunction_DSTATE_on;          // '<S243>/S-Function'
  real_T SFunction_DSTATE_ig;          // '<S245>/S-Function'
  real_T SFunction_DSTATE_ea;          // '<S247>/S-Function'
  real_T SFunction_DSTATE_af;          // '<S249>/S-Function'
  real_T SFunction_DSTATE_j0n;         // '<S251>/S-Function'
  real_T SFunction_DSTATE_eh;          // '<S253>/S-Function'
  real_T SFunction_DSTATE_nx;          // '<S255>/S-Function'
  real_T SFunction_DSTATE_i1;          // '<S257>/S-Function'
  real_T SFunction_DSTATE_gi;          // '<S259>/S-Function'
  real_T SFunction_DSTATE_al;          // '<S261>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S263>/S-Function'
  real_T SFunction_DSTATE_m1;          // '<S265>/S-Function'
  real_T SFunction_DSTATE_o2;          // '<S267>/S-Function'
  real_T SFunction_DSTATE_jn;          // '<S269>/S-Function'
  real_T SFunction_DSTATE_ap;          // '<S271>/S-Function'
  real_T SFunction_DSTATE_fe;          // '<S273>/S-Function'
  real_T SFunction_DSTATE_gc;          // '<S275>/S-Function'
  real_T SFunction_DSTATE_lk;          // '<S277>/S-Function'
  real_T SFunction_DSTATE_iq;          // '<S279>/S-Function'
  real_T SFunction_DSTATE_m4;          // '<S281>/S-Function'
  real_T SFunction_DSTATE_m1g;         // '<S283>/S-Function'
  real_T SFunction_DSTATE_il;          // '<S285>/S-Function'
  real_T SFunction_DSTATE_jr;          // '<S287>/S-Function'
  real_T SFunction_DSTATE_jt;          // '<S289>/S-Function'
  real_T SFunction_DSTATE_hq;          // '<S291>/S-Function'
  real_T SFunction_DSTATE_ab;          // '<S293>/S-Function'
  real_T SFunction_DSTATE_jh;          // '<S295>/S-Function'
  real_T SFunction_DSTATE_o1;          // '<S297>/S-Function'
  real_T SFunction_DSTATE_p0;          // '<S299>/S-Function'
  real_T SFunction_DSTATE_ek;          // '<S301>/S-Function'
  real_T SFunction_DSTATE_er;          // '<S303>/S-Function'
  real_T SFunction_DSTATE_pr;          // '<S305>/S-Function'
  real_T SFunction_DSTATE_d5;          // '<S675>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S131>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S671>/S-Function'
  real_T TmpRTBAtSaturationInport1_Buffe[3];// synthesized block
  real_T TmpRTBAtGainOutport1_Buffer[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport2_Bu[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport3_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport4_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport5_Bu;// synthesized block
  real_T Ac[24];                       // '<S31>/Saturation'
  real_T Ix[4];                        // '<S31>/Saturation'
  real_T Tol;                          // '<S31>/Saturation'
  real_T is_max;                       // '<S31>/Saturation'
  real_T A[8];                         // '<S1>/LICCs control'
  real_T B[16];                        // '<S1>/LICCs control'
  real_T H[16];                        // '<S1>/LICCs control'
  real_T Q[16];                        // '<S1>/LICCs control'
  real_T R[16];                        // '<S1>/LICCs control'
  real_T Aineq[96];                    // '<S1>/LICCs control'
  real_T pinvT[30];                    // '<S1>/LICCs control'
  real_T u_prev[2];                    // '<S1>/LICCs control'
  real_T xt_est_apriori[4];            // '<S1>/Kalman Filter'
  real_T Inx[16];                      // '<S1>/Kalman Filter'
  real_T F_max;                        // '<S1>/IM references'
  real_T w_max;                        // '<S1>/IM references'
  real_T F_prev;                       // '<S1>/IM references'
  real_T w_prev;                       // '<S1>/IM references'
  real_T dF;                           // '<S1>/IM references'
  real_T dw;                           // '<S1>/IM references'
  real_T Ts;                           // '<S1>/Energy balance'
  real_T Tab2abc[6];                   // '<S1>/Energy balance'
  real_T Tabc2ab[6];                   // '<S1>/Energy balance'
  real_T A_b[30];                      // '<S1>/Energy balance'
  real_T pinvA[30];                    // '<S1>/Energy balance'
  real_T K[324];                       // '<S1>/Energy balance'
  real_T MI[324];                      // '<S1>/Energy balance'
  real_T NN[108];                      // '<S1>/Energy balance'
  real_T ONE[54];                      // '<S1>/Energy balance'
  real_T Nl;                           // '<S1>/Energy balance'
  real_T is_max_j;                     // '<S1>/Energy balance'
  real_T is_max2;                      // '<S1>/Energy balance'
  real_T vo_max2;                      // '<S1>/Energy balance'
  real_T Ec_ref2;                      // '<S1>/Energy balance'
  real_T Hu_z[36];                     // '<S1>/Energy balance'
  real_T Aineq_z[216];                 // '<S1>/Energy balance'
  real_T lambda_z;                     // '<S1>/Energy balance'
  real_T Hu_o[9];                      // '<S1>/Energy balance'
  real_T Aineq_o[18];                  // '<S1>/Energy balance'
  real_T lambda_o;                     // '<S1>/Energy balance'
  real_T Ec_dev;                       // '<S1>/Energy balance'
  int8_T Integrator_PrevResetState;    // '<S394>/Integrator'
  int8_T Integrator_PrevResetState_h;  // '<S342>/Integrator'
  int8_T Integrator_PrevResetState_p;  // '<S468>/Integrator'
  int8_T Integrator_PrevResetState_b;  // '<S520>/Integrator'
  boolean_T Ac_not_empty;              // '<S31>/Saturation'
  boolean_T A_not_empty;               // '<S1>/LICCs control'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  boolean_T Ts_not_empty;              // '<S1>/Energy balance'
  DW_MovingAverage_imperix_bala_T MovingAverage_p;// '<S75>/Moving Average'
  DW_MovingAverage_imperix_bala_T MovingAverage;// '<S75>/Moving Average'
};

// Zero-crossing (trigger) state
struct PrevZCX_imperix_balance_ctrl_T {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S88>/Sample and Hold'
  ZCSigState SampleandHold_Trig_ZCE_h; // '<S75>/Sample and Hold'
};

// Constant parameters (default storage)
struct ConstP_imperix_balance_ctrl_T {
  // Expression: M2C.Vdc/2*[1; -1]
  //  Referenced by: '<S76>/vx'

  real_T vx_rtw_collapsed_sub_expr_yVo7x[2];
};

// Parameters for system: '<S425>/Subsystem - pi//2 delay'
struct P_Subsystempi2delay_imperix_b_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S428>/alpha_beta'

};

// Parameters for system: '<S425>/Subsystem1'
struct P_Subsystem1_imperix_balance__T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S429>/alpha_beta'

};

// Parameters (default storage)
struct P_imperix_balance_ctrl_T_ {
  struct_Rky7CkjZg6FWKeiF92MwY KF;     // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_kYK8klzU7k6CF2sPPFadY IEC;    // Variable: IEC
                                          //  Referenced by: '<S1>/Energy balance'

  struct_iBNhAmynxvQUSUJjZwUnnE CCC;   // Variable: CCC
                                          //  Referenced by:
                                          //    '<S1>/LICCs control'
                                          //    '<S30>/Gain'
                                          //    '<S170>/Gain1'
                                          //    '<S170>/Gain2'

  struct_d2khE9mo8aVLkTDaaK7QMB M2C;   // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S1>/Vc_m_ref'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain21'
                                          //    '<S1>/Gain22'
                                          //    '<S1>/Gain24'
                                          //    '<S1>/Gain25'
                                          //    '<S1>/Gain26'
                                          //    '<S1>/Gain27'
                                          //    '<S29>/Unit Delay1'
                                          //    '<S31>/Saturation'
                                          //    '<S31>/White noise'
                                          //    '<S31>/Gain7'
                                          //    '<S76>/vx'
                                          //    '<S81>/Constant1'
                                          //    '<S82>/Gain'
                                          //    '<S87>/Gain1'
                                          //    '<S87>/Gain3'
                                          //    '<S87>/Gain4'

  struct_3oGPhqag3LrQh40vmdz4AD IM;    // Variable: IM
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
                                          //    '<S77>/Gain'

  struct_eLXpdkXVH71IKiDfJkdaiC RFT;   // Variable: RFT
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S31>/Gain5'
                                          //    '<S77>/Gain2'

  struct_O6gPH0RO1xYJuf7clpdGt MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S1>/Gain16'
                                          //    '<S460>/Kb'
                                          //    '<S465>/Integral Gain'
                                          //    '<S473>/Proportional Gain'
                                          //    '<S475>/Saturation'
                                          //    '<S512>/Kb'
                                          //    '<S517>/Integral Gain'
                                          //    '<S525>/Proportional Gain'
                                          //    '<S527>/Saturation'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S334>/Kb'
                                          //    '<S339>/Integral Gain'
                                          //    '<S347>/Proportional Gain'
                                          //    '<S349>/Saturation'
                                          //    '<S386>/Kb'
                                          //    '<S391>/Integral Gain'
                                          //    '<S399>/Proportional Gain'
                                          //    '<S401>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S1>/Gain17'
                                          //    '<S1>/Gain20'
                                          //    '<S588>/Integral Gain'
                                          //    '<S596>/Proportional Gain'
                                          //    '<S598>/Saturation'
                                          //    '<S583>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEC;   // Variable: TEC
                                          //  Referenced by:
                                          //    '<S29>/Gain1'
                                          //    '<S29>/Gain2'
                                          //    '<S207>/Integral Gain'
                                          //    '<S215>/Proportional Gain'
                                          //    '<S217>/Saturation'
                                          //    '<S202>/DeadZone'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by:
                                          //    '<S31>/Input format'
                                          //    '<S31>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S31>/Gain4'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S609>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S433>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_j;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_j
                                  //  Referenced by: '<S425>/Constant'

  real_T PIDController1_InitialCondition;
                              // Mask Parameter: PIDController1_InitialCondition
                                 //  Referenced by: '<S210>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S591>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S394>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S342>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S468>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S520>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S611>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S612>/Constant'

  real_T CompareToConstant_const_d; // Mask Parameter: CompareToConstant_const_d
                                       //  Referenced by: '<S538>/Constant'

  real_T CompareToConstant1_const_j;
                                   // Mask Parameter: CompareToConstant1_const_j
                                      //  Referenced by: '<S539>/Constant'

  real_T CompareToConstant_const_b; // Mask Parameter: CompareToConstant_const_b
                                       //  Referenced by: '<S426>/Constant'

  real_T CompareToConstant1_const_o;
                                   // Mask Parameter: CompareToConstant1_const_o
                                      //  Referenced by: '<S427>/Constant'

  real_T _Y0;                          // Expression: initCond
                                          //  Referenced by: '<S430>/ '

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S613>/dq'

  real_T dq_Y0_c[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S614>/dq'

  real_T _Y0_b;                        // Expression: initCond
                                          //  Referenced by: '<S651>/ '

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S200>/Constant1'

  real_T Constant1_Value_e;            // Expression: 0
                                          //  Referenced by: '<S581>/Constant1'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S155>/S-Function'

  real_T SFunction_P17_j;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S157>/S-Function'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S159>/S-Function'

  real_T SFunction_P17_bu;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S161>/S-Function'

  real_T SFunction_P17_i;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S165>/S-Function'

  real_T SFunction_P17_e;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S167>/S-Function'

  real_T SFunction_P17_ig;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S163>/S-Function'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S100>/ADC'

  real_T ADC_P8_h;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S118>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S122>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S104>/ADC'

  real_T ADC_P8_b;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S124>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S126>/ADC'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S210>/Integrator'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S114>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S116>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S106>/ADC'

  real_T ADC_P8_nj;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S120>/ADC'

  real_T ADC_P8_pr;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S108>/ADC'

  real_T ADC_P8_lh;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S110>/ADC'

  real_T Integrator_gainval_b;       // Computed Parameter: Integrator_gainval_b
                                        //  Referenced by: '<S591>/Integrator'

  real_T SFunction_P17_a;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S665>/S-Function'

  real_T SFunction_P17_bf;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S673>/S-Function'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S112>/ADC'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S667>/S-Function'

  real_T SFunction_P17_h;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S677>/S-Function'

  real_T Integrator_gainval_g;       // Computed Parameter: Integrator_gainval_g
                                        //  Referenced by: '<S394>/Integrator'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S83>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S610>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S610>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S77>/Unit Delay'

  real_T SFunction_P17_c;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S679>/S-Function'

  real_T SFunction_P17_d;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S681>/S-Function'

  real_T Integrator_gainval_gz;     // Computed Parameter: Integrator_gainval_gz
                                       //  Referenced by: '<S342>/Integrator'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S80>/Constant'

  real_T SFunction_P17_jg;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S669>/S-Function'

  real_T Integrator_gainval_h;       // Computed Parameter: Integrator_gainval_h
                                        //  Referenced by: '<S468>/Integrator'

  real_T Integrator_gainval_bo;     // Computed Parameter: Integrator_gainval_bo
                                       //  Referenced by: '<S520>/Integrator'

  real_T Gain1_Gain_m;                 // Expression: 2
                                          //  Referenced by: '<S77>/Gain1'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S170>/Unit Delay1'

  real_T TmpRTBAtSaturationInport1_Initi;// Expression: 0
                                            //  Referenced by:

  real_T Gain3_Gain_f[2];              // Expression: [1; -1]
                                          //  Referenced by: '<S31>/Gain3'

  real_T Gain2_Gain_i[30];             // Expression: M2C.A'
                                          //  Referenced by: '<S76>/Gain2'

  real_T Gain_Gain;                    // Expression: 5
                                          //  Referenced by: '<S1>/Gain'

  real_T ADC_P8_bf;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S102>/ADC'

  real_T SFunction_P17_ch;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S675>/S-Function'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S200>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S412>/phase'

  real_T SFunction_P17_bl;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S671>/S-Function'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S413>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S414>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S415>/phase'

  real_T Gain3_Gain_g[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S424>/Gain3'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S542>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S543>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S544>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S545>/phase'

  real_T Gain_Gain_h;                  // Expression: -1
                                          //  Referenced by: '<S79>/Gain'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S79>/Gain8'

  real_T Clamping_zero_Value_p;        // Expression: 0
                                          //  Referenced by: '<S581>/Clamping_zero'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S615>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S616>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S617>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S618>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S627>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S628>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S629>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S630>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S639>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S640>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S641>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S642>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S652>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S653>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S654>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S655>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S417>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S417>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S417>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S419>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S419>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S419>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S421>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S421>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S421>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S423>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S423>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S423>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S547>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S547>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S547>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S549>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S549>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S549>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S551>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S551>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S551>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S553>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S553>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S553>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S620>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S620>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S620>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S622>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S622>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S622>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S624>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S624>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S624>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S626>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S626>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S626>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S632>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S632>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S632>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S634>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S634>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S634>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S636>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S636>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S636>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S638>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S638>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S638>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S644>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S644>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S644>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S646>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S646>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S646>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S648>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S648>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S648>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S650>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S650>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S650>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S657>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S657>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S657>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S659>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S659>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S659>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S661>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S661>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S661>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S663>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S663>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S663>/PWM'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P3_j;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P4_m;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P5_e;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(0)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P7_a;             // Expression: single(0)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P4_o;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(0)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P7_e;             // Expression: single(0)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P3_h;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T SFunction_P4_g;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T SFunction_P5_m;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(0)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T SFunction_P7_c;             // Expression: single(0)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T SFunction_P3_d;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T SFunction_P4_f;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(0)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T SFunction_P3_c;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P5_k;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P6_l;             // Expression: single(0)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P3_mi;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T SFunction_P4_gq;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T SFunction_P5_a;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(0)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T SFunction_P7_a2;            // Expression: single(0)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S100>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S100>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P2_n;                   // Expression: single(gain)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S104>/ADC'

  real32_T ADC_P3_fn;                  // Expression: single(offset)
                                          //  Referenced by: '<S104>/ADC'

  real32_T ADC_P2_hp;                  // Expression: single(gain)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S126>/ADC'

  real32_T ADC_P3_b;                   // Expression: single(offset)
                                          //  Referenced by: '<S126>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S114>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S114>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S116>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S116>/ADC'

  real32_T ADC_P2_eg;                  // Expression: single(gain)
                                          //  Referenced by: '<S106>/ADC'

  real32_T ADC_P3_l;                   // Expression: single(offset)
                                          //  Referenced by: '<S106>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P3_ck;                  // Expression: single(offset)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P2_hb;                  // Expression: single(gain)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S110>/ADC'

  real32_T ADC_P3_fy;                  // Expression: single(offset)
                                          //  Referenced by: '<S110>/ADC'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S665>/S-Function'

  real32_T SFunction_P4_d;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S665>/S-Function'

  real32_T SFunction_P5_d;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S665>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(0)
                                          //  Referenced by: '<S665>/S-Function'

  real32_T SFunction_P7_h;             // Expression: single(0)
                                          //  Referenced by: '<S665>/S-Function'

  real32_T SFunction_P3_ke;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S673>/S-Function'

  real32_T SFunction_P4_cu;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S673>/S-Function'

  real32_T SFunction_P5_i;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S673>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(0)
                                          //  Referenced by: '<S673>/S-Function'

  real32_T SFunction_P7_ir;            // Expression: single(0)
                                          //  Referenced by: '<S673>/S-Function'

  real32_T ADC_P2_pa;                  // Expression: single(gain)
                                          //  Referenced by: '<S112>/ADC'

  real32_T ADC_P3_eo;                  // Expression: single(offset)
                                          //  Referenced by: '<S112>/ADC'

  real32_T SFunction_P3_hp;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S667>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S667>/S-Function'

  real32_T SFunction_P5_px;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S667>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(0)
                                          //  Referenced by: '<S667>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S667>/S-Function'

  real32_T SFunction_P3_l;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S677>/S-Function'

  real32_T SFunction_P4_oy;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S677>/S-Function'

  real32_T SFunction_P5_j;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S677>/S-Function'

  real32_T SFunction_P6_jn;            // Expression: single(0)
                                          //  Referenced by: '<S677>/S-Function'

  real32_T SFunction_P7_o;             // Expression: single(0)
                                          //  Referenced by: '<S677>/S-Function'

  real32_T SFunction_P3_b;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S679>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S679>/S-Function'

  real32_T SFunction_P5_pi;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S679>/S-Function'

  real32_T SFunction_P6_py;            // Expression: single(0)
                                          //  Referenced by: '<S679>/S-Function'

  real32_T SFunction_P7_p;             // Expression: single(0)
                                          //  Referenced by: '<S679>/S-Function'

  real32_T SFunction_P3_lm;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P5_eg;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(0)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P7_f;             // Expression: single(0)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P3_ck;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S669>/S-Function'

  real32_T SFunction_P4_n;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S669>/S-Function'

  real32_T SFunction_P5_l;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S669>/S-Function'

  real32_T SFunction_P6_o1;            // Expression: single(0)
                                          //  Referenced by: '<S669>/S-Function'

  real32_T SFunction_P7_gi;            // Expression: single(0)
                                          //  Referenced by: '<S669>/S-Function'

  real32_T Switch_Threshold;           // Computed Parameter: Switch_Threshold
                                          //  Referenced by: '<S80>/Switch'

  real32_T Switch_Threshold_d;         // Computed Parameter: Switch_Threshold_d
                                          //  Referenced by: '<S30>/Switch'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S102>/ADC'

  real32_T ADC_P3_ej;                  // Expression: single(offset)
                                          //  Referenced by: '<S102>/ADC'

  real32_T SFunction_P6_h5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P6_f1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P6_mk;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P6_an;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P6_gu;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P6_ab;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P6_o5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P6_ou;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P6_kq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P12_nh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P6_h3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P6_f2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P12_no;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P6_hj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S257>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S257>/S-Function'

  real32_T SFunction_P6_p1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S259>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S259>/S-Function'

  real32_T SFunction_P6_oc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S261>/S-Function'

  real32_T SFunction_P12_ik;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S261>/S-Function'

  real32_T SFunction_P6_jb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S263>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S263>/S-Function'

  real32_T SFunction_P6_bz;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S265>/S-Function'

  real32_T SFunction_P12_ps;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S265>/S-Function'

  real32_T SFunction_P6_bq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S267>/S-Function'

  real32_T SFunction_P12_au;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S267>/S-Function'

  real32_T SFunction_P6_cj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S269>/S-Function'

  real32_T SFunction_P12_oi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S269>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S271>/S-Function'

  real32_T SFunction_P12_fz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S271>/S-Function'

  real32_T SFunction_P6_he;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S273>/S-Function'

  real32_T SFunction_P12_fr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S273>/S-Function'

  real32_T SFunction_P6_mb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S275>/S-Function'

  real32_T SFunction_P12_kn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S275>/S-Function'

  real32_T SFunction_P6_pq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S277>/S-Function'

  real32_T SFunction_P12_ai;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S277>/S-Function'

  real32_T SFunction_P6_e2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S279>/S-Function'

  real32_T SFunction_P12_n2;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S279>/S-Function'

  real32_T SFunction_P6_g4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S281>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S281>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S283>/S-Function'

  real32_T SFunction_P12_i4;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S283>/S-Function'

  real32_T SFunction_P6_kh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S285>/S-Function'

  real32_T SFunction_P12_ce;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S285>/S-Function'

  real32_T SFunction_P6_di;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S287>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S287>/S-Function'

  real32_T SFunction_P6_b0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S289>/S-Function'

  real32_T SFunction_P12_c1;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S289>/S-Function'

  real32_T SFunction_P6_aw;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S291>/S-Function'

  real32_T SFunction_P12_og;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S291>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S293>/S-Function'

  real32_T SFunction_P12_ld;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S293>/S-Function'

  real32_T SFunction_P6_ek;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S295>/S-Function'

  real32_T SFunction_P12_bk;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S295>/S-Function'

  real32_T SFunction_P6_o4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S297>/S-Function'

  real32_T SFunction_P12_mh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S297>/S-Function'

  real32_T SFunction_P6_kr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S299>/S-Function'

  real32_T SFunction_P12_hp;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S299>/S-Function'

  real32_T SFunction_P6_k4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S301>/S-Function'

  real32_T SFunction_P12_o3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S301>/S-Function'

  real32_T SFunction_P6_kp;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S303>/S-Function'

  real32_T SFunction_P12_av;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S303>/S-Function'

  real32_T SFunction_P6_cv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S305>/S-Function'

  real32_T SFunction_P12_m3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S305>/S-Function'

  real32_T SFunction_P3_p;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S675>/S-Function'

  real32_T SFunction_P4_bo;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S675>/S-Function'

  real32_T SFunction_P5_f0;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S675>/S-Function'

  real32_T SFunction_P6_gl;            // Expression: single(0)
                                          //  Referenced by: '<S675>/S-Function'

  real32_T SFunction_P7_j;             // Expression: single(0)
                                          //  Referenced by: '<S675>/S-Function'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<S128>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<S128>/Saturation'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S128>/CLK1'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S131>/S-Function'

  real32_T SFunction_P3_m5;            // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S131>/S-Function'

  real32_T CLK1_P2_i;                  // Expression: single(frequency)
                                          //  Referenced by: '<S133>/CLK1'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S671>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S671>/S-Function'

  real32_T SFunction_P5_fk;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S671>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S671>/S-Function'

  real32_T SFunction_P7_gu;            // Expression: single(0)
                                          //  Referenced by: '<S671>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S155>/S-Function'

  uint32_T SFunction_P10_g;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S157>/S-Function'

  uint32_T SFunction_P10_h;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S159>/S-Function'

  uint32_T SFunction_P10_i;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S161>/S-Function'

  uint32_T SFunction_P10_b;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S165>/S-Function'

  uint32_T SFunction_P10_p;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S167>/S-Function'

  uint32_T SFunction_P10_f;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S163>/S-Function'

  uint32_T SFunction_P10_o;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S665>/S-Function'

  uint32_T SFunction_P10_c;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S673>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S667>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S677>/S-Function'

  uint32_T SFunction_P10_go;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S679>/S-Function'

  uint32_T SFunction_P10_nr;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S681>/S-Function'

  uint32_T SFunction_P10_nm;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S669>/S-Function'

  uint32_T SFunction_P7_aq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P7_ij;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P7_cn;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P7_ik;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P7_guv;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P7_l;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P13_fr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P7_k;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P7_fh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P7_f4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P7_ge;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P7_i1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P13_ck;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P7_oj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P13_el;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P7_o5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P13_cs;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P7_ib;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S257>/S-Function'

  uint32_T SFunction_P13_ob;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S257>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S259>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S259>/S-Function'

  uint32_T SFunction_P7_dq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S261>/S-Function'

  uint32_T SFunction_P13_or;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S261>/S-Function'

  uint32_T SFunction_P7_or;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S263>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S263>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S265>/S-Function'

  uint32_T SFunction_P13_pe;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S265>/S-Function'

  uint32_T SFunction_P7_c5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S267>/S-Function'

  uint32_T SFunction_P13_iv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S267>/S-Function'

  uint32_T SFunction_P7_no;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S269>/S-Function'

  uint32_T SFunction_P13_hw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S269>/S-Function'

  uint32_T SFunction_P7_jb;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S271>/S-Function'

  uint32_T SFunction_P13_ork;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S271>/S-Function'

  uint32_T SFunction_P7_mj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S273>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S273>/S-Function'

  uint32_T SFunction_P7_gn;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S275>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S275>/S-Function'

  uint32_T SFunction_P7_bh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S277>/S-Function'

  uint32_T SFunction_P13_ot;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S277>/S-Function'

  uint32_T SFunction_P7_im;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S279>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S279>/S-Function'

  uint32_T SFunction_P7_ii;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S281>/S-Function'

  uint32_T SFunction_P13_jo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S281>/S-Function'

  uint32_T SFunction_P7_ic;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S283>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S283>/S-Function'

  uint32_T SFunction_P7_nh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S285>/S-Function'

  uint32_T SFunction_P13_ota;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S285>/S-Function'

  uint32_T SFunction_P7_ac;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S287>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S287>/S-Function'

  uint32_T SFunction_P7_ov;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S289>/S-Function'

  uint32_T SFunction_P13_be;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S289>/S-Function'

  uint32_T SFunction_P7_bu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S291>/S-Function'

  uint32_T SFunction_P13_lm;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S291>/S-Function'

  uint32_T SFunction_P7_ms;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S293>/S-Function'

  uint32_T SFunction_P13_bj;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S293>/S-Function'

  uint32_T SFunction_P7_ma;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S295>/S-Function'

  uint32_T SFunction_P13_bm;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S295>/S-Function'

  uint32_T SFunction_P7_jj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S297>/S-Function'

  uint32_T SFunction_P13_mz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S297>/S-Function'

  uint32_T SFunction_P7_m5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S299>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S299>/S-Function'

  uint32_T SFunction_P7_jj1;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S301>/S-Function'

  uint32_T SFunction_P13_jk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S301>/S-Function'

  uint32_T SFunction_P7_h5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S303>/S-Function'

  uint32_T SFunction_P13_gz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S303>/S-Function'

  uint32_T SFunction_P7_i5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S305>/S-Function'

  uint32_T SFunction_P13_kw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S305>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S675>/S-Function'

  uint32_T SFunction_P10_k0;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S671>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S417>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S417>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S417>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S417>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S417>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S417>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S419>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S419>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S419>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S419>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S419>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S419>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S421>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S421>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S421>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S421>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S421>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S421>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S423>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S423>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S423>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S423>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S423>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S423>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S549>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S549>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S549>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S549>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S549>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S549>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S551>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S551>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S551>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S551>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S551>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S551>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S620>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S620>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S620>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S620>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S620>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S620>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S622>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S622>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S622>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S622>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S622>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S622>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S624>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S624>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S624>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S624>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S624>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S624>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S626>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S626>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S626>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S626>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S626>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S626>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S638>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S638>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S638>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S638>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S638>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S638>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S644>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S644>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S644>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S644>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S644>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S644>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S646>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S646>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S646>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S646>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S646>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S646>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S648>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S648>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S648>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S648>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S648>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S648>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S650>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S650>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S650>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S650>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S650>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S650>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S661>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S663>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S663>/PWM'

  int16_T SFunction_P2_f;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S155>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S157>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S159>/S-Function'

  int16_T SFunction_P2_fi;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S161>/S-Function'

  int16_T SFunction_P2_n1;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S165>/S-Function'

  int16_T SFunction_P2_o;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S167>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S163>/S-Function'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P9_k;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P1_l;                    // Expression: int16(channel)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P4_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P9_ke;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P4_gx;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P6_ct;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P9_a;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P1_h;                    // Expression: int16(channel)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P4_df;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P1_ad;                   // Expression: int16(channel)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P6_cx;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P4_it;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P9_n4;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P6_p0;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P1_el;                   // Expression: int16(channel)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P4_b2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P9_nd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S110>/ADC'

  int16_T SFunction_P2_no;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S665>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S673>/S-Function'

  int16_T ADC_P1_ag;                   // Expression: int16(channel)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P6_fi;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P9_i;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S112>/ADC'

  int16_T SFunction_P2_kn;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S667>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S677>/S-Function'

  int16_T SFunction_P2_p;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S679>/S-Function'

  int16_T SFunction_P2_iq;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S681>/S-Function'

  int16_T SFunction_P2_f5;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S669>/S-Function'

  int16_T DAC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S135>/DAC'

  int16_T DAC_P2;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S135>/DAC'

  int16_T DAC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S137>/DAC'

  int16_T DAC_P2_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S137>/DAC'

  int16_T DAC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S139>/DAC'

  int16_T DAC_P2_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S139>/DAC'

  int16_T DAC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S141>/DAC'

  int16_T DAC_P2_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S141>/DAC'

  int16_T DAC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S143>/DAC'

  int16_T DAC_P2_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S143>/DAC'

  int16_T DAC_P1_nv;                   // Expression: int16(channel)
                                          //  Referenced by: '<S145>/DAC'

  int16_T DAC_P2_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S145>/DAC'

  int16_T ADC_P1_fz;                   // Expression: int16(channel)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P6_nv;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P9_n0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S102>/ADC'

  int16_T SFunction_P2_o3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P3_la;             // Expression: int16(0)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P2_k3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P3_ny;             // Expression: int16(0)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P2_h;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P3_lq;             // Expression: int16(0)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P2_oz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P2_k2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P3_l1;             // Expression: int16(0)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P2_if;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P3_b2;             // Expression: int16(0)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P3_pj;             // Expression: int16(0)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P2_ft;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P3_pb;             // Expression: int16(0)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P2_op;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P3_lb;             // Expression: int16(0)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P2_fj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P3_me;             // Expression: int16(0)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P2_hy;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P3_nw;             // Expression: int16(0)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P2_bp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S257>/S-Function'

  int16_T SFunction_P3_p5;             // Expression: int16(0)
                                          //  Referenced by: '<S257>/S-Function'

  int16_T SFunction_P2_h1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S259>/S-Function'

  int16_T SFunction_P3_kr;             // Expression: int16(0)
                                          //  Referenced by: '<S259>/S-Function'

  int16_T SFunction_P2_kp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S261>/S-Function'

  int16_T SFunction_P3_ma;             // Expression: int16(0)
                                          //  Referenced by: '<S261>/S-Function'

  int16_T SFunction_P2_mw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S263>/S-Function'

  int16_T SFunction_P3_fu;             // Expression: int16(0)
                                          //  Referenced by: '<S263>/S-Function'

  int16_T SFunction_P2_m0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S265>/S-Function'

  int16_T SFunction_P3_cn;             // Expression: int16(0)
                                          //  Referenced by: '<S265>/S-Function'

  int16_T SFunction_P2_bf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S267>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S267>/S-Function'

  int16_T SFunction_P2_hd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S269>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S269>/S-Function'

  int16_T SFunction_P2_ex;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S271>/S-Function'

  int16_T SFunction_P3_hz;             // Expression: int16(0)
                                          //  Referenced by: '<S271>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S273>/S-Function'

  int16_T SFunction_P3_ka;             // Expression: int16(0)
                                          //  Referenced by: '<S273>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S275>/S-Function'

  int16_T SFunction_P3_h4;             // Expression: int16(0)
                                          //  Referenced by: '<S275>/S-Function'

  int16_T SFunction_P2_ps;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S277>/S-Function'

  int16_T SFunction_P3_jv;             // Expression: int16(0)
                                          //  Referenced by: '<S277>/S-Function'

  int16_T SFunction_P2_it;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S279>/S-Function'

  int16_T SFunction_P3_jk;             // Expression: int16(0)
                                          //  Referenced by: '<S279>/S-Function'

  int16_T SFunction_P2_k2u;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S281>/S-Function'

  int16_T SFunction_P3_n2;             // Expression: int16(0)
                                          //  Referenced by: '<S281>/S-Function'

  int16_T SFunction_P2_lj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S283>/S-Function'

  int16_T SFunction_P3_m5z;            // Expression: int16(0)
                                          //  Referenced by: '<S283>/S-Function'

  int16_T SFunction_P2_li;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S285>/S-Function'

  int16_T SFunction_P3_jo;             // Expression: int16(0)
                                          //  Referenced by: '<S285>/S-Function'

  int16_T SFunction_P2_nob;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S287>/S-Function'

  int16_T SFunction_P3_cx;             // Expression: int16(0)
                                          //  Referenced by: '<S287>/S-Function'

  int16_T SFunction_P2_o32;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S289>/S-Function'

  int16_T SFunction_P3_bt;             // Expression: int16(0)
                                          //  Referenced by: '<S289>/S-Function'

  int16_T SFunction_P2_ey;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S291>/S-Function'

  int16_T SFunction_P3_gx;             // Expression: int16(0)
                                          //  Referenced by: '<S291>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S293>/S-Function'

  int16_T SFunction_P3_in;             // Expression: int16(0)
                                          //  Referenced by: '<S293>/S-Function'

  int16_T SFunction_P2_ei;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S295>/S-Function'

  int16_T SFunction_P3_dg;             // Expression: int16(0)
                                          //  Referenced by: '<S295>/S-Function'

  int16_T SFunction_P2_et;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S297>/S-Function'

  int16_T SFunction_P3_dw;             // Expression: int16(0)
                                          //  Referenced by: '<S297>/S-Function'

  int16_T SFunction_P2_j4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S299>/S-Function'

  int16_T SFunction_P3_gv;             // Expression: int16(0)
                                          //  Referenced by: '<S299>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S301>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S301>/S-Function'

  int16_T SFunction_P2_ax;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S303>/S-Function'

  int16_T SFunction_P3_jm;             // Expression: int16(0)
                                          //  Referenced by: '<S303>/S-Function'

  int16_T SFunction_P2_n2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S305>/S-Function'

  int16_T SFunction_P3_ap;             // Expression: int16(0)
                                          //  Referenced by: '<S305>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S128>/clk_id'

  int16_T SFunction_P2_mc;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S675>/S-Function'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S128>/CLK1'

  int16_T clk_id_Value_o;              // Computed Parameter: clk_id_Value_o
                                          //  Referenced by: '<S133>/clk_id'

  int16_T CLK1_P1_c;                   // Expression: int16(id)
                                          //  Referenced by: '<S133>/CLK1'

  int16_T SFunction_P2_m0o;            // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S671>/S-Function'

  uint16_T SFunction_P1[2];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P1_o[2];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P9_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P14_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P15_g;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P1_oz[2];         // Computed Parameter: SFunction_P1_oz
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P9_p;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P14_gn;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P15_l;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P1_h[2];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P9_ac;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P14_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P15_b;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P1_c[2];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P9_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P14_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P15_k;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P1_ck[2];         // Computed Parameter: SFunction_P1_ck
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P9_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P11_oz;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P14_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P15_h;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P1_hv[8];         // Computed Parameter: SFunction_P1_hv
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P9_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P14_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P15_j;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P1_l[5];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S665>/S-Function'

  uint16_T SFunction_P9_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S665>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S665>/S-Function'

  uint16_T SFunction_P14_lw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S665>/S-Function'

  uint16_T SFunction_P15_p;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S665>/S-Function'

  uint16_T SFunction_P1_f[5];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S673>/S-Function'

  uint16_T SFunction_P9_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S673>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S673>/S-Function'

  uint16_T SFunction_P14_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S673>/S-Function'

  uint16_T SFunction_P15_bl;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S673>/S-Function'

  uint16_T SFunction_P1_p[10];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S667>/S-Function'

  uint16_T SFunction_P9_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S667>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S667>/S-Function'

  uint16_T SFunction_P14_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S667>/S-Function'

  uint16_T SFunction_P15_pm;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S667>/S-Function'

  uint16_T SFunction_P1_n[8];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S677>/S-Function'

  uint16_T SFunction_P9_as;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S677>/S-Function'

  uint16_T SFunction_P11_bm;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S677>/S-Function'

  uint16_T SFunction_P14_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S677>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S677>/S-Function'

  uint16_T SFunction_P1_a[9];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S679>/S-Function'

  uint16_T SFunction_P9_c5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S679>/S-Function'

  uint16_T SFunction_P11_o0;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S679>/S-Function'

  uint16_T SFunction_P14_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S679>/S-Function'

  uint16_T SFunction_P15_bw;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S679>/S-Function'

  uint16_T SFunction_P1_h5[8];         // Computed Parameter: SFunction_P1_h5
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P9_cs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P11_f2;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P15_o3;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P1_lm[9];         // Computed Parameter: SFunction_P1_lm
                                          //  Referenced by: '<S669>/S-Function'

  uint16_T SFunction_P9_g1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S669>/S-Function'

  uint16_T SFunction_P11_ax;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S669>/S-Function'

  uint16_T SFunction_P14_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S669>/S-Function'

  uint16_T SFunction_P15_bk;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S669>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P14_ev[5];        // Computed Parameter: SFunction_P14_ev
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P1_a2[3];         // Computed Parameter: SFunction_P1_a2
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P5_pt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P1_i[3];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P5_je;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P14_k2[5];        // Computed Parameter: SFunction_P14_k2
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P1_h2[6];         // Computed Parameter: SFunction_P1_h2
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P5_pp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P8_mz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P11_bb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P14_n4[5];        // Computed Parameter: SFunction_P14_n4
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P1_oo[6];         // Computed Parameter: SFunction_P1_oo
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P11_je;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P14_ne[5];        // Computed Parameter: SFunction_P14_ne
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P1_e[5];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P8_a;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P1_hm[4];         // Computed Parameter: SFunction_P1_hm
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P5_oy;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P11_l2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P14_k4[5];        // Computed Parameter: SFunction_P14_k4
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P1_fk[5];         // Computed Parameter: SFunction_P1_fk
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P5_ex;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P14_li[5];        // Computed Parameter: SFunction_P14_li
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P1_f2[3];         // Computed Parameter: SFunction_P1_f2
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P11_m5;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P14_b3[5];        // Computed Parameter: SFunction_P14_b3
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P1_mr[3];         // Computed Parameter: SFunction_P1_mr
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P5_dv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P11_i1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P14_fa[5];        // Computed Parameter: SFunction_P14_fa
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P1_oj[3];         // Computed Parameter: SFunction_P1_oj
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P5_ma;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P8_do;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P11_lx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P14_n5[5];        // Computed Parameter: SFunction_P14_n5
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P1_m2[4];         // Computed Parameter: SFunction_P1_m2
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P5_es;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P8_av;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P14_g0[5];        // Computed Parameter: SFunction_P14_g0
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P1_ip[4];         // Computed Parameter: SFunction_P1_ip
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P5_l3;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P8_ez;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P11_j5;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P14_g5[5];        // Computed Parameter: SFunction_P14_g5
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P1_p0[2];         // Computed Parameter: SFunction_P1_p0
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P5_bm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P11_ev;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P14_is[5];        // Computed Parameter: SFunction_P14_is
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P1_j[4];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P11_mj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P14_hb[5];        // Computed Parameter: SFunction_P14_hb
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P1_jz[5];         // Computed Parameter: SFunction_P1_jz
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P5_gk;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P11_mw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P14_bd[5];        // Computed Parameter: SFunction_P14_bd
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P1_jb[4];         // Computed Parameter: SFunction_P1_jb
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P5_iv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P8_mb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P14_ku[5];        // Computed Parameter: SFunction_P14_ku
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P1_b[4];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P5_fc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P11_lz;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P14_fj[5];        // Computed Parameter: SFunction_P14_fj
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P1_fs[5];         // Computed Parameter: SFunction_P1_fs
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P5_km;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P8_la;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P11_ep;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P1_pk[4];         // Computed Parameter: SFunction_P1_pk
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P5_ez;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P8_eo;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P11_nn;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P14_ef[5];        // Computed Parameter: SFunction_P14_ef
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P1_el[5];         // Computed Parameter: SFunction_P1_el
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P5_g2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P8_od;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P11_iq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P14_bl[5];        // Computed Parameter: SFunction_P14_bl
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P1_jy[3];         // Computed Parameter: SFunction_P1_jy
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P5_cn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P8_pe;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P11_j5f;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P14_mw[5];        // Computed Parameter: SFunction_P14_mw
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P1_di[4];         // Computed Parameter: SFunction_P1_di
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P5_m1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P8_g1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P11_g1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P14_oz[5];        // Computed Parameter: SFunction_P14_oz
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P1_f20[6];        // Computed Parameter: SFunction_P1_f20
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P5_pq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P8_ej;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P11_oy;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P14_om[5];        // Computed Parameter: SFunction_P14_om
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P1_bt[3];         // Computed Parameter: SFunction_P1_bt
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P5_ec;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P8_jz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P11_ea;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P14_kp[5];        // Computed Parameter: SFunction_P14_kp
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P1_da[9];         // Computed Parameter: SFunction_P1_da
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P5_a1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P8_e0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P11_mh;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P14_g5c[5];       // Computed Parameter: SFunction_P14_g5c
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P1_g[9];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P5_iq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P8_lu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P11_jo;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P14_lr[5];        // Computed Parameter: SFunction_P14_lr
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P1_nn[6];         // Computed Parameter: SFunction_P1_nn
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P5_he;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P8_jt;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P11_mg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P1_ct[6];         // Computed Parameter: SFunction_P1_ct
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P5_ar;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P8_l2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P11_ku;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P14_mj[5];        // Computed Parameter: SFunction_P14_mj
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P1_jbs[5];        // Computed Parameter: SFunction_P1_jbs
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P5_jd;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P8_kl;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P11_hj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P14_jh[5];        // Computed Parameter: SFunction_P14_jh
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P1_j0[3];         // Computed Parameter: SFunction_P1_j0
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P5_bf;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P8_pq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P11_nj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P14_mp[5];        // Computed Parameter: SFunction_P14_mp
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P1_o3[3];         // Computed Parameter: SFunction_P1_o3
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P5_ph;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P8_p4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P11_dp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P1_cf[3];         // Computed Parameter: SFunction_P1_cf
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P5_dm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P8_gk;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P11_id;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P14_cc[5];        // Computed Parameter: SFunction_P14_cc
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P1_pl[3];         // Computed Parameter: SFunction_P1_pl
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P5_ip;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P11_k3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P14_l0[5];        // Computed Parameter: SFunction_P14_l0
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P1_hj[3];         // Computed Parameter: SFunction_P1_hj
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P5_lg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P8_js;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P11_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P14_ey[5];        // Computed Parameter: SFunction_P14_ey
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P1_ow[3];         // Computed Parameter: SFunction_P1_ow
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P5_on;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P8_h2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P11_fr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P14_do[5];        // Computed Parameter: SFunction_P14_do
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P1_nq[3];         // Computed Parameter: SFunction_P1_nq
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P5_ml;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P8_im;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P11_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P14_ig[5];        // Computed Parameter: SFunction_P14_ig
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P1_hs[2];         // Computed Parameter: SFunction_P1_hs
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P5_gp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P8_eb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P11_bt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P14_iz[5];        // Computed Parameter: SFunction_P14_iz
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P1_p1[8];         // Computed Parameter: SFunction_P1_p1
                                          //  Referenced by: '<S675>/S-Function'

  uint16_T SFunction_P9_js;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S675>/S-Function'

  uint16_T SFunction_P11_pc;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S675>/S-Function'

  uint16_T SFunction_P14_aw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S675>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S675>/S-Function'

  uint16_T SFunction_P1_fd;            // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S671>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S671>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S671>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S671>/S-Function'

  uint16_T SFunction_P15_ai;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S671>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S417>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S417>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S417>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S419>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S419>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S419>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S421>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S421>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S421>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S423>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S423>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S423>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S547>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S547>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S547>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S549>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S549>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S549>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S551>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S551>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S551>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S553>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S553>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S553>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S620>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S620>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S620>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S622>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S622>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S622>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S624>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S624>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S624>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S626>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S626>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S626>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S632>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S632>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S632>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S634>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S634>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S634>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S636>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S636>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S636>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S638>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S638>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S638>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S644>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S644>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S644>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S646>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S646>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S646>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S648>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S648>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S648>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S650>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S650>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S650>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S657>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S657>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S657>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S659>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S659>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S659>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S661>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S661>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S661>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S663>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S663>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S663>/PWM'

  boolean_T SFunction_P8_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P12_bd;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P13_ch;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P8_n;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P12_p4;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P13_np;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P16_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P8_d0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P12_df;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P13_lf;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P16_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P8_o2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P12_jc;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P13_ma;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P16_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P8_np;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P12_et;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P13_pn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P16_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P8_bg;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P12_or;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P13_ly;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P16_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P8_lt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P12_i2;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P13_er;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P16_a;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S100>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S100>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S104>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S104>/ADC'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P5_i;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S126>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S126>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S114>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S114>/ADC'

  boolean_T ADC_P5_g0;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S116>/ADC'

  boolean_T ADC_P7_gn;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S116>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S106>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S106>/ADC'

  boolean_T ADC_P5_gk;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P7_mt;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T ADC_P7_hl;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T SFunction_P8_it;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S665>/S-Function'

  boolean_T SFunction_P12_py;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S665>/S-Function'

  boolean_T SFunction_P13_oa;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S665>/S-Function'

  boolean_T SFunction_P16_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S665>/S-Function'

  boolean_T SFunction_P8_lh;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S673>/S-Function'

  boolean_T SFunction_P12_nl;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S673>/S-Function'

  boolean_T SFunction_P13_en;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S673>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S673>/S-Function'

  boolean_T ADC_P5_a4;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S112>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S112>/ADC'

  boolean_T SFunction_P8_fp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S667>/S-Function'

  boolean_T SFunction_P12_m32;         // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S667>/S-Function'

  boolean_T SFunction_P13_pi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S667>/S-Function'

  boolean_T SFunction_P16_kf;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S667>/S-Function'

  boolean_T SFunction_P8_cp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S677>/S-Function'

  boolean_T SFunction_P12_ad;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S677>/S-Function'

  boolean_T SFunction_P13_f3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S677>/S-Function'

  boolean_T SFunction_P16_k1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S677>/S-Function'

  boolean_T SFunction_P8_ne;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S679>/S-Function'

  boolean_T SFunction_P12_aug;         // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S679>/S-Function'

  boolean_T SFunction_P13_hq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S679>/S-Function'

  boolean_T SFunction_P16_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S679>/S-Function'

  boolean_T SFunction_P8_h0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S681>/S-Function'

  boolean_T SFunction_P12_eh;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S681>/S-Function'

  boolean_T SFunction_P13_hz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S681>/S-Function'

  boolean_T SFunction_P16_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S681>/S-Function'

  boolean_T SFunction_P8_ph;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S669>/S-Function'

  boolean_T SFunction_P12_n4;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S669>/S-Function'

  boolean_T SFunction_P13_i2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S669>/S-Function'

  boolean_T SFunction_P16_bw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S669>/S-Function'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S102>/ADC'

  boolean_T ADC_P7_nl;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S102>/ADC'

  boolean_T SFunction_P4_o0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P10_is;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P15_ax;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P4_ga;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P9_pl;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P4_fw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P9_kw;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P10_oi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P9_pi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P15_hm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P4_ad;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P9_pm;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P10_ni;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P15_cx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P9_p2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P10_cj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P15_gw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P4_co;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P10_pn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P4_cy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P9_g1r;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P10_fi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P15_at;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P4_hu;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P10_gr;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P15_ar;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P4_n5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P10_bb;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P15_cb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P4_cj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P9_gc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P10_fn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P15_au;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P4_mr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P10_ik;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P9_o;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P10_gq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P15_lv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P4_ap;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P9_io;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P10_dm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P15_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P4_h5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P9_od;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P10_f1;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P15_gt;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P9_o4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P10_f3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P15_pc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P4_hb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P9_mc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P10_gz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P15_pcd;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P4_jt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P9_ce;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P10_ib;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P15_li;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P4_j3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P9_pr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P10_lw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P15_fv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P4_bc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P9_ax;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P10_gqx;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P15_gb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P4_gj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P9_g1m;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P10_hb;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P15_mh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P4_le;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P9_mi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P4_nt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P9_mb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P10_db;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P15_cr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P4_i4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P15_oe;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P4_bn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P9_jd;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P10_bh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P15_pu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P4_g2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P9_er;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P10_pz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P15_gp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P4_m3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S281>/S-Function'

  boolean_T SFunction_P9_ew;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S281>/S-Function'

  boolean_T SFunction_P10_ok;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S281>/S-Function'

  boolean_T SFunction_P15_gu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S281>/S-Function'

  boolean_T SFunction_P4_ka;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S283>/S-Function'

  boolean_T SFunction_P9_ar;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S283>/S-Function'

  boolean_T SFunction_P10_kp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S283>/S-Function'

  boolean_T SFunction_P15_jn;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S283>/S-Function'

  boolean_T SFunction_P4_bf;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S285>/S-Function'

  boolean_T SFunction_P9_g5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S285>/S-Function'

  boolean_T SFunction_P10_by;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S285>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S285>/S-Function'

  boolean_T SFunction_P4_m4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S287>/S-Function'

  boolean_T SFunction_P9_g0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S287>/S-Function'

  boolean_T SFunction_P10_gd;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S287>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S287>/S-Function'

  boolean_T SFunction_P4_mo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S289>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S289>/S-Function'

  boolean_T SFunction_P10_gn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S289>/S-Function'

  boolean_T SFunction_P15_ef;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S289>/S-Function'

  boolean_T SFunction_P4_gu;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S291>/S-Function'

  boolean_T SFunction_P9_im;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S291>/S-Function'

  boolean_T SFunction_P10_gt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S291>/S-Function'

  boolean_T SFunction_P15_pf;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S291>/S-Function'

  boolean_T SFunction_P4_n5w;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S293>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S293>/S-Function'

  boolean_T SFunction_P10_dmx;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S293>/S-Function'

  boolean_T SFunction_P15_nx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S293>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S295>/S-Function'

  boolean_T SFunction_P9_cg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S295>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S295>/S-Function'

  boolean_T SFunction_P15_ei;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S295>/S-Function'

  boolean_T SFunction_P4_ds;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S297>/S-Function'

  boolean_T SFunction_P9_oo;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S297>/S-Function'

  boolean_T SFunction_P10_it;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S297>/S-Function'

  boolean_T SFunction_P15_p5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S297>/S-Function'

  boolean_T SFunction_P4_gr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S299>/S-Function'

  boolean_T SFunction_P9_oy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S299>/S-Function'

  boolean_T SFunction_P10_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S299>/S-Function'

  boolean_T SFunction_P15_bp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S299>/S-Function'

  boolean_T SFunction_P4_bo3;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S301>/S-Function'

  boolean_T SFunction_P9_ir;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S301>/S-Function'

  boolean_T SFunction_P10_hh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S301>/S-Function'

  boolean_T SFunction_P15_pr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S301>/S-Function'

  boolean_T SFunction_P4_h5w;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S303>/S-Function'

  boolean_T SFunction_P9_f4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S303>/S-Function'

  boolean_T SFunction_P10_gy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S303>/S-Function'

  boolean_T SFunction_P15_lb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S303>/S-Function'

  boolean_T SFunction_P4_ge;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S305>/S-Function'

  boolean_T SFunction_P9_f3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S305>/S-Function'

  boolean_T SFunction_P10_p2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S305>/S-Function'

  boolean_T SFunction_P15_it;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S305>/S-Function'

  boolean_T SFunction_P8_jj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S675>/S-Function'

  boolean_T SFunction_P12_lq;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S675>/S-Function'

  boolean_T SFunction_P13_iw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S675>/S-Function'

  boolean_T SFunction_P16_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S675>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S128>/CLK1'

  boolean_T CLK1_P3_d;                 // Expression: boolean(var_freq)
                                          //  Referenced by: '<S133>/CLK1'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S671>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S671>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S671>/S-Function'

  boolean_T SFunction_P16_fp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S671>/S-Function'

  int8_T Constant_Value_g;             // Computed Parameter: Constant_Value_g
                                          //  Referenced by: '<S200>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S200>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S200>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S200>/Constant4'

  int8_T Constant_Value_gx;            // Computed Parameter: Constant_Value_gx
                                          //  Referenced by: '<S581>/Constant'

  int8_T Constant2_Value_c;            // Computed Parameter: Constant2_Value_c
                                          //  Referenced by: '<S581>/Constant2'

  int8_T Constant3_Value_f;            // Computed Parameter: Constant3_Value_f
                                          //  Referenced by: '<S581>/Constant3'

  int8_T Constant4_Value_a;            // Computed Parameter: Constant4_Value_a
                                          //  Referenced by: '<S581>/Constant4'

  P_Subsystem1_imperix_balance__T Subsystem1_e;// '<S433>/Subsystem1'
  P_Subsystempi2delay_imperix_b_T Subsystempi2delay_p;// '<S433>/Subsystem - pi//2 delay' 
  P_Subsystem1_imperix_balance__T Subsystem1;// '<S425>/Subsystem1'
  P_Subsystempi2delay_imperix_b_T Subsystempi2delay;// '<S425>/Subsystem - pi//2 delay' 
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
      uint8_T TID[2];
      uint8_T cLimit[2];
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
//  Block '<S31>/Scope' : Unused code path elimination
//  Block '<S31>/Switch' : Unused code path elimination
//  Block '<S1>/Scope' : Unused code path elimination
//  Block '<S1>/Scope1' : Unused code path elimination
//  Block '<S1>/Scope2' : Unused code path elimination
//  Block '<S1>/Scope3' : Unused code path elimination
//  Block '<S1>/Scope4' : Unused code path elimination
//  Block '<S1>/Scope5' : Unused code path elimination
//  Block '<S1>/Scope6' : Unused code path elimination
//  Block '<S1>/Scope7' : Unused code path elimination
//  Block '<S1>/Scope8' : Unused code path elimination
//  Block '<S17>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S412>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S413>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S414>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S415>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S542>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S543>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S544>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S545>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S615>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S616>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S617>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S618>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S627>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S628>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S629>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S630>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S639>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S640>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S641>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S642>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S652>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S653>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S654>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S655>/Data Type Conversion3' : Eliminate redundant data type conversion


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
//  '<S21>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC6'
//  '<S22>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC7'
//  '<S23>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC8'
//  '<S24>'  : 'imperix_balance_ctrl/Closed_loop_control/DAC9'
//  '<S25>'  : 'imperix_balance_ctrl/Closed_loop_control/Energy balance'
//  '<S26>'  : 'imperix_balance_ctrl/Closed_loop_control/IM references'
//  '<S27>'  : 'imperix_balance_ctrl/Closed_loop_control/Kalman Filter'
//  '<S28>'  : 'imperix_balance_ctrl/Closed_loop_control/LICCs control'
//  '<S29>'  : 'imperix_balance_ctrl/Closed_loop_control/LPF'
//  '<S30>'  : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index'
//  '<S31>'  : 'imperix_balance_ctrl/Closed_loop_control/NN CEC'
//  '<S32>'  : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1'
//  '<S33>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe1'
//  '<S34>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe10'
//  '<S35>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe11'
//  '<S36>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe12'
//  '<S37>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe13'
//  '<S38>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe14'
//  '<S39>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe15'
//  '<S40>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe16'
//  '<S41>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe17'
//  '<S42>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe18'
//  '<S43>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe19'
//  '<S44>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe2'
//  '<S45>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe20'
//  '<S46>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe21'
//  '<S47>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe22'
//  '<S48>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe23'
//  '<S49>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe24'
//  '<S50>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe25'
//  '<S51>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe26'
//  '<S52>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe27'
//  '<S53>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe28'
//  '<S54>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe29'
//  '<S55>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe3'
//  '<S56>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe30'
//  '<S57>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe31'
//  '<S58>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe32'
//  '<S59>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe33'
//  '<S60>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe34'
//  '<S61>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe35'
//  '<S62>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe36'
//  '<S63>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe37'
//  '<S64>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe38'
//  '<S65>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe39'
//  '<S66>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe4'
//  '<S67>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe40'
//  '<S68>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe5'
//  '<S69>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe6'
//  '<S70>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe7'
//  '<S71>'  : 'imperix_balance_ctrl/Closed_loop_control/Probe8'
//  '<S72>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem'
//  '<S73>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1'
//  '<S74>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10'
//  '<S75>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem11'
//  '<S76>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem13'
//  '<S77>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19'
//  '<S78>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2'
//  '<S79>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem21'
//  '<S80>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem22'
//  '<S81>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23'
//  '<S82>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem24'
//  '<S83>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26'
//  '<S84>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3'
//  '<S85>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4'
//  '<S86>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5'
//  '<S87>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem6'
//  '<S88>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem8'
//  '<S89>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9'
//  '<S90>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S91>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11'
//  '<S92>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12'
//  '<S93>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S94>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S95>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter3'
//  '<S96>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5'
//  '<S97>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter6'
//  '<S98>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8'
//  '<S99>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC19/sub'
//  '<S100>' : 'imperix_balance_ctrl/Closed_loop_control/ADC19/sub/generation'
//  '<S101>' : 'imperix_balance_ctrl/Closed_loop_control/ADC2/sub'
//  '<S102>' : 'imperix_balance_ctrl/Closed_loop_control/ADC2/sub/generation'
//  '<S103>' : 'imperix_balance_ctrl/Closed_loop_control/ADC21/sub'
//  '<S104>' : 'imperix_balance_ctrl/Closed_loop_control/ADC21/sub/generation'
//  '<S105>' : 'imperix_balance_ctrl/Closed_loop_control/ADC22/sub'
//  '<S106>' : 'imperix_balance_ctrl/Closed_loop_control/ADC22/sub/generation'
//  '<S107>' : 'imperix_balance_ctrl/Closed_loop_control/ADC23/sub'
//  '<S108>' : 'imperix_balance_ctrl/Closed_loop_control/ADC23/sub/generation'
//  '<S109>' : 'imperix_balance_ctrl/Closed_loop_control/ADC24/sub'
//  '<S110>' : 'imperix_balance_ctrl/Closed_loop_control/ADC24/sub/generation'
//  '<S111>' : 'imperix_balance_ctrl/Closed_loop_control/ADC25/sub'
//  '<S112>' : 'imperix_balance_ctrl/Closed_loop_control/ADC25/sub/generation'
//  '<S113>' : 'imperix_balance_ctrl/Closed_loop_control/ADC26/sub'
//  '<S114>' : 'imperix_balance_ctrl/Closed_loop_control/ADC26/sub/generation'
//  '<S115>' : 'imperix_balance_ctrl/Closed_loop_control/ADC27/sub'
//  '<S116>' : 'imperix_balance_ctrl/Closed_loop_control/ADC27/sub/generation'
//  '<S117>' : 'imperix_balance_ctrl/Closed_loop_control/ADC28/sub'
//  '<S118>' : 'imperix_balance_ctrl/Closed_loop_control/ADC28/sub/generation'
//  '<S119>' : 'imperix_balance_ctrl/Closed_loop_control/ADC3/sub'
//  '<S120>' : 'imperix_balance_ctrl/Closed_loop_control/ADC3/sub/generation'
//  '<S121>' : 'imperix_balance_ctrl/Closed_loop_control/ADC4/sub'
//  '<S122>' : 'imperix_balance_ctrl/Closed_loop_control/ADC4/sub/generation'
//  '<S123>' : 'imperix_balance_ctrl/Closed_loop_control/ADC5/sub'
//  '<S124>' : 'imperix_balance_ctrl/Closed_loop_control/ADC5/sub/generation'
//  '<S125>' : 'imperix_balance_ctrl/Closed_loop_control/ADC8/sub'
//  '<S126>' : 'imperix_balance_ctrl/Closed_loop_control/ADC8/sub/generation'
//  '<S127>' : 'imperix_balance_ctrl/Closed_loop_control/CLK1/sub'
//  '<S128>' : 'imperix_balance_ctrl/Closed_loop_control/CLK1/sub/generation'
//  '<S129>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S130>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S131>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S132>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S133>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S134>' : 'imperix_balance_ctrl/Closed_loop_control/DAC10/sub'
//  '<S135>' : 'imperix_balance_ctrl/Closed_loop_control/DAC10/sub/generation'
//  '<S136>' : 'imperix_balance_ctrl/Closed_loop_control/DAC11/sub'
//  '<S137>' : 'imperix_balance_ctrl/Closed_loop_control/DAC11/sub/generation'
//  '<S138>' : 'imperix_balance_ctrl/Closed_loop_control/DAC6/sub'
//  '<S139>' : 'imperix_balance_ctrl/Closed_loop_control/DAC6/sub/generation'
//  '<S140>' : 'imperix_balance_ctrl/Closed_loop_control/DAC7/sub'
//  '<S141>' : 'imperix_balance_ctrl/Closed_loop_control/DAC7/sub/generation'
//  '<S142>' : 'imperix_balance_ctrl/Closed_loop_control/DAC8/sub'
//  '<S143>' : 'imperix_balance_ctrl/Closed_loop_control/DAC8/sub/generation'
//  '<S144>' : 'imperix_balance_ctrl/Closed_loop_control/DAC9/sub'
//  '<S145>' : 'imperix_balance_ctrl/Closed_loop_control/DAC9/sub/generation'
//  '<S146>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Modulation index'
//  '<S147>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter1'
//  '<S148>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter2'
//  '<S149>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter3'
//  '<S150>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter4'
//  '<S151>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter5'
//  '<S152>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter6'
//  '<S153>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter7'
//  '<S154>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter1/sub'
//  '<S155>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter1/sub/generation'
//  '<S156>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter2/sub'
//  '<S157>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter2/sub/generation'
//  '<S158>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter3/sub'
//  '<S159>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter3/sub/generation'
//  '<S160>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter4/sub'
//  '<S161>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter4/sub/generation'
//  '<S162>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter5/sub'
//  '<S163>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter5/sub/generation'
//  '<S164>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter6/sub'
//  '<S165>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter6/sub/generation'
//  '<S166>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter7/sub'
//  '<S167>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Tunable parameter7/sub/generation'
//  '<S168>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/FFNN'
//  '<S169>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/Input format'
//  '<S170>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/LPF'
//  '<S171>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/Saturation'
//  '<S172>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/White noise'
//  '<S173>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/FFNN/MLFB'
//  '<S174>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Anti-windup'
//  '<S175>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/D Gain'
//  '<S176>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/External Derivative'
//  '<S177>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Filter'
//  '<S178>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Filter ICs'
//  '<S179>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/I Gain'
//  '<S180>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain'
//  '<S181>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk'
//  '<S182>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Integrator'
//  '<S183>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Integrator ICs'
//  '<S184>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/N Copy'
//  '<S185>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/N Gain'
//  '<S186>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/P Copy'
//  '<S187>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain'
//  '<S188>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Reset Signal'
//  '<S189>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Saturation'
//  '<S190>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk'
//  '<S191>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Sum'
//  '<S192>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk'
//  '<S193>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tracking Mode'
//  '<S194>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum'
//  '<S195>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral'
//  '<S196>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain'
//  '<S197>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/postSat Signal'
//  '<S198>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/preInt Signal'
//  '<S199>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/preSat Signal'
//  '<S200>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel'
//  '<S201>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S202>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S203>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/D Gain/Disabled'
//  '<S204>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/External Derivative/Disabled'
//  '<S205>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Filter/Disabled'
//  '<S206>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Filter ICs/Disabled'
//  '<S207>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/I Gain/Internal Parameters'
//  '<S208>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain/Passthrough'
//  '<S209>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S210>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Integrator/Discrete'
//  '<S211>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Integrator ICs/Internal IC'
//  '<S212>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S213>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/N Gain/Disabled'
//  '<S214>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/P Copy/Disabled'
//  '<S215>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S216>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Reset Signal/Disabled'
//  '<S217>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Saturation/Enabled'
//  '<S218>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk/Disabled'
//  '<S219>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Sum/Sum_PI'
//  '<S220>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk/Disabled'
//  '<S221>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tracking Mode/Disabled'
//  '<S222>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S223>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S224>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S225>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/postSat Signal/Forward_Path'
//  '<S226>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/preInt Signal/Internal PreInt'
//  '<S227>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/preSat Signal/Forward_Path'
//  '<S228>' : 'imperix_balance_ctrl/Closed_loop_control/Probe1/sub'
//  '<S229>' : 'imperix_balance_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S230>' : 'imperix_balance_ctrl/Closed_loop_control/Probe10/sub'
//  '<S231>' : 'imperix_balance_ctrl/Closed_loop_control/Probe10/sub/generation'
//  '<S232>' : 'imperix_balance_ctrl/Closed_loop_control/Probe11/sub'
//  '<S233>' : 'imperix_balance_ctrl/Closed_loop_control/Probe11/sub/generation'
//  '<S234>' : 'imperix_balance_ctrl/Closed_loop_control/Probe12/sub'
//  '<S235>' : 'imperix_balance_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S236>' : 'imperix_balance_ctrl/Closed_loop_control/Probe13/sub'
//  '<S237>' : 'imperix_balance_ctrl/Closed_loop_control/Probe13/sub/generation'
//  '<S238>' : 'imperix_balance_ctrl/Closed_loop_control/Probe14/sub'
//  '<S239>' : 'imperix_balance_ctrl/Closed_loop_control/Probe14/sub/generation'
//  '<S240>' : 'imperix_balance_ctrl/Closed_loop_control/Probe15/sub'
//  '<S241>' : 'imperix_balance_ctrl/Closed_loop_control/Probe15/sub/generation'
//  '<S242>' : 'imperix_balance_ctrl/Closed_loop_control/Probe16/sub'
//  '<S243>' : 'imperix_balance_ctrl/Closed_loop_control/Probe16/sub/generation'
//  '<S244>' : 'imperix_balance_ctrl/Closed_loop_control/Probe17/sub'
//  '<S245>' : 'imperix_balance_ctrl/Closed_loop_control/Probe17/sub/generation'
//  '<S246>' : 'imperix_balance_ctrl/Closed_loop_control/Probe18/sub'
//  '<S247>' : 'imperix_balance_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S248>' : 'imperix_balance_ctrl/Closed_loop_control/Probe19/sub'
//  '<S249>' : 'imperix_balance_ctrl/Closed_loop_control/Probe19/sub/generation'
//  '<S250>' : 'imperix_balance_ctrl/Closed_loop_control/Probe2/sub'
//  '<S251>' : 'imperix_balance_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S252>' : 'imperix_balance_ctrl/Closed_loop_control/Probe20/sub'
//  '<S253>' : 'imperix_balance_ctrl/Closed_loop_control/Probe20/sub/generation'
//  '<S254>' : 'imperix_balance_ctrl/Closed_loop_control/Probe21/sub'
//  '<S255>' : 'imperix_balance_ctrl/Closed_loop_control/Probe21/sub/generation'
//  '<S256>' : 'imperix_balance_ctrl/Closed_loop_control/Probe22/sub'
//  '<S257>' : 'imperix_balance_ctrl/Closed_loop_control/Probe22/sub/generation'
//  '<S258>' : 'imperix_balance_ctrl/Closed_loop_control/Probe23/sub'
//  '<S259>' : 'imperix_balance_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S260>' : 'imperix_balance_ctrl/Closed_loop_control/Probe24/sub'
//  '<S261>' : 'imperix_balance_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S262>' : 'imperix_balance_ctrl/Closed_loop_control/Probe25/sub'
//  '<S263>' : 'imperix_balance_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S264>' : 'imperix_balance_ctrl/Closed_loop_control/Probe26/sub'
//  '<S265>' : 'imperix_balance_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S266>' : 'imperix_balance_ctrl/Closed_loop_control/Probe27/sub'
//  '<S267>' : 'imperix_balance_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S268>' : 'imperix_balance_ctrl/Closed_loop_control/Probe28/sub'
//  '<S269>' : 'imperix_balance_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S270>' : 'imperix_balance_ctrl/Closed_loop_control/Probe29/sub'
//  '<S271>' : 'imperix_balance_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S272>' : 'imperix_balance_ctrl/Closed_loop_control/Probe3/sub'
//  '<S273>' : 'imperix_balance_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S274>' : 'imperix_balance_ctrl/Closed_loop_control/Probe30/sub'
//  '<S275>' : 'imperix_balance_ctrl/Closed_loop_control/Probe30/sub/generation'
//  '<S276>' : 'imperix_balance_ctrl/Closed_loop_control/Probe31/sub'
//  '<S277>' : 'imperix_balance_ctrl/Closed_loop_control/Probe31/sub/generation'
//  '<S278>' : 'imperix_balance_ctrl/Closed_loop_control/Probe32/sub'
//  '<S279>' : 'imperix_balance_ctrl/Closed_loop_control/Probe32/sub/generation'
//  '<S280>' : 'imperix_balance_ctrl/Closed_loop_control/Probe33/sub'
//  '<S281>' : 'imperix_balance_ctrl/Closed_loop_control/Probe33/sub/generation'
//  '<S282>' : 'imperix_balance_ctrl/Closed_loop_control/Probe34/sub'
//  '<S283>' : 'imperix_balance_ctrl/Closed_loop_control/Probe34/sub/generation'
//  '<S284>' : 'imperix_balance_ctrl/Closed_loop_control/Probe35/sub'
//  '<S285>' : 'imperix_balance_ctrl/Closed_loop_control/Probe35/sub/generation'
//  '<S286>' : 'imperix_balance_ctrl/Closed_loop_control/Probe36/sub'
//  '<S287>' : 'imperix_balance_ctrl/Closed_loop_control/Probe36/sub/generation'
//  '<S288>' : 'imperix_balance_ctrl/Closed_loop_control/Probe37/sub'
//  '<S289>' : 'imperix_balance_ctrl/Closed_loop_control/Probe37/sub/generation'
//  '<S290>' : 'imperix_balance_ctrl/Closed_loop_control/Probe38/sub'
//  '<S291>' : 'imperix_balance_ctrl/Closed_loop_control/Probe38/sub/generation'
//  '<S292>' : 'imperix_balance_ctrl/Closed_loop_control/Probe39/sub'
//  '<S293>' : 'imperix_balance_ctrl/Closed_loop_control/Probe39/sub/generation'
//  '<S294>' : 'imperix_balance_ctrl/Closed_loop_control/Probe4/sub'
//  '<S295>' : 'imperix_balance_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S296>' : 'imperix_balance_ctrl/Closed_loop_control/Probe40/sub'
//  '<S297>' : 'imperix_balance_ctrl/Closed_loop_control/Probe40/sub/generation'
//  '<S298>' : 'imperix_balance_ctrl/Closed_loop_control/Probe5/sub'
//  '<S299>' : 'imperix_balance_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S300>' : 'imperix_balance_ctrl/Closed_loop_control/Probe6/sub'
//  '<S301>' : 'imperix_balance_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S302>' : 'imperix_balance_ctrl/Closed_loop_control/Probe7/sub'
//  '<S303>' : 'imperix_balance_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S304>' : 'imperix_balance_ctrl/Closed_loop_control/Probe8/sub'
//  '<S305>' : 'imperix_balance_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S306>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI'
//  '<S307>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI'
//  '<S308>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup'
//  '<S309>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain'
//  '<S310>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative'
//  '<S311>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter'
//  '<S312>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs'
//  '<S313>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain'
//  '<S314>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain'
//  '<S315>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk'
//  '<S316>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator'
//  '<S317>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs'
//  '<S318>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy'
//  '<S319>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain'
//  '<S320>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy'
//  '<S321>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain'
//  '<S322>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal'
//  '<S323>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation'
//  '<S324>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk'
//  '<S325>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum'
//  '<S326>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk'
//  '<S327>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode'
//  '<S328>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum'
//  '<S329>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral'
//  '<S330>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain'
//  '<S331>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal'
//  '<S332>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal'
//  '<S333>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal'
//  '<S334>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup/Back Calculation'
//  '<S335>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain/Disabled'
//  '<S336>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative/Disabled'
//  '<S337>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter/Disabled'
//  '<S338>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs/Disabled'
//  '<S339>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain/Internal Parameters'
//  '<S340>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain/Passthrough'
//  '<S341>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S342>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator/Discrete'
//  '<S343>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs/Internal IC'
//  '<S344>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S345>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain/Disabled'
//  '<S346>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy/Disabled'
//  '<S347>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S348>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal/External Reset'
//  '<S349>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation/Enabled'
//  '<S350>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk/Disabled'
//  '<S351>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum/Sum_PI'
//  '<S352>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk/Disabled'
//  '<S353>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode/Disabled'
//  '<S354>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S355>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S356>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S357>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal/Forward_Path'
//  '<S358>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal/Internal PreInt'
//  '<S359>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal/Forward_Path'
//  '<S360>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup'
//  '<S361>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain'
//  '<S362>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative'
//  '<S363>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter'
//  '<S364>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs'
//  '<S365>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain'
//  '<S366>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain'
//  '<S367>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk'
//  '<S368>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator'
//  '<S369>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs'
//  '<S370>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy'
//  '<S371>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain'
//  '<S372>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy'
//  '<S373>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain'
//  '<S374>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal'
//  '<S375>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation'
//  '<S376>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk'
//  '<S377>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum'
//  '<S378>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk'
//  '<S379>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode'
//  '<S380>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum'
//  '<S381>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral'
//  '<S382>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain'
//  '<S383>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal'
//  '<S384>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal'
//  '<S385>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal'
//  '<S386>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup/Back Calculation'
//  '<S387>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain/Disabled'
//  '<S388>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative/Disabled'
//  '<S389>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter/Disabled'
//  '<S390>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs/Disabled'
//  '<S391>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain/Internal Parameters'
//  '<S392>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain/Passthrough'
//  '<S393>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S394>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator/Discrete'
//  '<S395>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs/Internal IC'
//  '<S396>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S397>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain/Disabled'
//  '<S398>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy/Disabled'
//  '<S399>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S400>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal/External Reset'
//  '<S401>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation/Enabled'
//  '<S402>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk/Disabled'
//  '<S403>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum/Sum_PI'
//  '<S404>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk/Disabled'
//  '<S405>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode/Disabled'
//  '<S406>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S407>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S408>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S409>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal/Forward_Path'
//  '<S410>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal/Internal PreInt'
//  '<S411>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal/Forward_Path'
//  '<S412>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S413>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S414>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S415>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S416>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S417>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S418>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S419>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S420>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S421>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S422>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S423>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S424>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/Alpha-Beta-Zero to abc'
//  '<S425>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero'
//  '<S426>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S427>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S428>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S429>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S430>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem11/Sample and Hold'
//  '<S431>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S432>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S433>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S434>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S435>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S436>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S437>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S438>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S439>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S440>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S441>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S442>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S443>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S444>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S445>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S446>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S447>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S448>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S449>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S450>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S451>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S452>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S453>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S454>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S455>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S456>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S457>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S458>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S459>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S460>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S461>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S462>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S463>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S464>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S465>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S466>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S467>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S468>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S469>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S470>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S471>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S472>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S473>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S474>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/External Reset'
//  '<S475>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S476>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S477>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S478>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S479>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S480>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S481>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S482>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S483>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S484>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S485>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S486>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S487>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S488>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S489>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S490>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S491>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S492>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S493>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S494>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S495>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S496>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S497>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S498>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S499>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S500>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S501>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S502>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S503>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S504>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S505>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S506>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S507>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S508>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S509>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S510>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S511>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S512>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S513>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S514>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S515>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S516>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S517>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S518>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S519>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S520>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S521>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S522>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S523>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S524>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S525>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S526>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/External Reset'
//  '<S527>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S528>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S529>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S530>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S531>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S532>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S533>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S534>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S535>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S536>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S537>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S538>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S539>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S540>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S541>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S542>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S543>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S544>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S545>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S546>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S547>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S548>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S549>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S550>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S551>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S552>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S553>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S554>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI'
//  '<S555>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup'
//  '<S556>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain'
//  '<S557>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative'
//  '<S558>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter'
//  '<S559>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs'
//  '<S560>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain'
//  '<S561>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain'
//  '<S562>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk'
//  '<S563>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator'
//  '<S564>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs'
//  '<S565>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy'
//  '<S566>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain'
//  '<S567>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy'
//  '<S568>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain'
//  '<S569>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal'
//  '<S570>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation'
//  '<S571>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk'
//  '<S572>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum'
//  '<S573>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk'
//  '<S574>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode'
//  '<S575>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum'
//  '<S576>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral'
//  '<S577>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain'
//  '<S578>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal'
//  '<S579>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal'
//  '<S580>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal'
//  '<S581>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S582>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S583>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S584>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain/Disabled'
//  '<S585>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative/Disabled'
//  '<S586>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter/Disabled'
//  '<S587>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs/Disabled'
//  '<S588>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain/Internal Parameters'
//  '<S589>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain/Passthrough'
//  '<S590>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S591>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator/Discrete'
//  '<S592>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs/Internal IC'
//  '<S593>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S594>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain/Disabled'
//  '<S595>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy/Disabled'
//  '<S596>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S597>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal/Disabled'
//  '<S598>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation/Enabled'
//  '<S599>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk/Disabled'
//  '<S600>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum/Sum_PI'
//  '<S601>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk/Disabled'
//  '<S602>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode/Disabled'
//  '<S603>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S604>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S605>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S606>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal/Forward_Path'
//  '<S607>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal/Internal PreInt'
//  '<S608>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal/Forward_Path'
//  '<S609>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S610>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S611>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S612>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S613>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S614>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S615>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S616>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S617>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S618>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S619>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S620>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S621>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S622>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S623>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S624>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S625>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S626>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S627>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S628>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S629>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S630>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S631>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S632>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S633>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S634>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S635>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S636>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S637>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S638>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S639>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S640>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S641>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S642>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S643>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S644>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S645>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S646>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S647>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S648>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S649>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S650>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S651>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem8/Sample and Hold'
//  '<S652>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S653>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S654>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S655>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S656>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S657>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S658>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S659>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S660>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S661>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S662>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S663>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S664>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S665>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S666>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11/sub'
//  '<S667>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11/sub/generation'
//  '<S668>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12/sub'
//  '<S669>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12/sub/generation'
//  '<S670>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S671>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S672>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S673>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'
//  '<S674>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter3/sub'
//  '<S675>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S676>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5/sub'
//  '<S677>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5/sub/generation'
//  '<S678>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter6/sub'
//  '<S679>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter6/sub/generation'
//  '<S680>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8/sub'
//  '<S681>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8/sub/generation'

#endif                                 // imperix_balance_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
