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
// Model version                  : 19.118
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Wed Feb  4 19:50:06 2026
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

// Block signals (default storage)
struct B_imperix_balance_ctrl_T {
  real_T TmpRTBAtSaturationInport1[3]; // '<S31>/Vector Concatenate4'
  real_T In;                           // '<S624>/In'
  real_T Fcn;                          // '<S587>/Fcn'
  real_T Fcn1;                         // '<S587>/Fcn1'
  real_T Fcn_o;                        // '<S586>/Fcn'
  real_T Fcn1_l;                       // '<S586>/Fcn1'
  real_T Fcn_ou;                       // '<S514>/Fcn'
  real_T Fcn1_f;                       // '<S514>/Fcn1'
  real_T Fcn_b;                        // '<S513>/Fcn'
  real_T Fcn1_i;                       // '<S513>/Fcn1'
  real_T Fcn_br;                       // '<S403>/Fcn'
  real_T Fcn1_f3;                      // '<S403>/Fcn1'
  real_T Fcn_m;                        // '<S402>/Fcn'
  real_T Fcn1_c;                       // '<S402>/Fcn1'
  real32_T ADC;                        // '<S98>/ADC'
  real32_T ADC_o;                      // '<S116>/ADC'
  real32_T ADC_n;                      // '<S120>/ADC'
  real32_T ADC_m;                      // '<S102>/ADC'
  real32_T ADC_k;                      // '<S122>/ADC'
  real32_T ADC_f;                      // '<S124>/ADC'
  real32_T ADC_fp;                     // '<S112>/ADC'
  real32_T ADC_e;                      // '<S114>/ADC'
  real32_T ADC_i;                      // '<S104>/ADC'
  real32_T ADC_d;                      // '<S118>/ADC'
  real32_T ADC_ib;                     // '<S106>/ADC'
  real32_T ADC_p;                      // '<S108>/ADC'
  real32_T SFunction;                  // '<S638>/S-Function'
  real32_T SFunction_f;                // '<S646>/S-Function'
  real32_T ADC_g;                      // '<S110>/ADC'
  real32_T SFunction_k;                // '<S640>/S-Function'
  real32_T SFunction_c;                // '<S648>/S-Function'
  real32_T SFunction_m;                // '<S650>/S-Function'
  real32_T SFunction_fs;               // '<S652>/S-Function'
  real32_T DataTypeConversion1;        // '<S133>/Data Type Conversion1'
  real32_T DataTypeConversion1_l;      // '<S135>/Data Type Conversion1'
  real32_T DataTypeConversion1_la;     // '<S137>/Data Type Conversion1'
  real32_T DataTypeConversion1_p;      // '<S139>/Data Type Conversion1'
  real32_T DataTypeConversion1_a;      // '<S141>/Data Type Conversion1'
  real32_T DataTypeConversion1_e;      // '<S143>/Data Type Conversion1'
  real32_T DataTypeConversion;         // '<S205>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S207>/Data Type Conversion'
  real32_T DataTypeConversion_kx;      // '<S209>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S211>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S213>/Data Type Conversion'
  real32_T DataTypeConversion_m;       // '<S215>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S217>/Data Type Conversion'
  real32_T DataTypeConversion_iu;      // '<S219>/Data Type Conversion'
  real32_T DataTypeConversion_pe;      // '<S221>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S223>/Data Type Conversion'
  real32_T DataTypeConversion_id;      // '<S225>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S227>/Data Type Conversion'
  real32_T DataTypeConversion_gb;      // '<S229>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S231>/Data Type Conversion'
  real32_T DataTypeConversion_m1;      // '<S233>/Data Type Conversion'
  real32_T DataTypeConversion_dr;      // '<S235>/Data Type Conversion'
  real32_T DataTypeConversion_pw;      // '<S237>/Data Type Conversion'
  real32_T DataTypeConversion_mx;      // '<S239>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S241>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S243>/Data Type Conversion'
  real32_T DataTypeConversion_d4;      // '<S245>/Data Type Conversion'
  real32_T DataTypeConversion_pw0;     // '<S247>/Data Type Conversion'
  real32_T DataTypeConversion_ez;      // '<S249>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S251>/Data Type Conversion'
  real32_T DataTypeConversion_lu;      // '<S253>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S255>/Data Type Conversion'
  real32_T DataTypeConversion_ir;      // '<S257>/Data Type Conversion'
  real32_T DataTypeConversion_d5;      // '<S259>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S261>/Data Type Conversion'
  real32_T DataTypeConversion_fy;      // '<S263>/Data Type Conversion'
  real32_T DataTypeConversion_l5;      // '<S265>/Data Type Conversion'
  real32_T DataTypeConversion_iw;      // '<S267>/Data Type Conversion'
  real32_T DataTypeConversion_fo;      // '<S269>/Data Type Conversion'
  real32_T DataTypeConversion_a;       // '<S271>/Data Type Conversion'
  real32_T DataTypeConversion_fs;      // '<S273>/Data Type Conversion'
  real32_T DataTypeConversion_ba;      // '<S275>/Data Type Conversion'
  real32_T DataTypeConversion_fz;      // '<S277>/Data Type Conversion'
  real32_T DataTypeConversion_bg;      // '<S279>/Data Type Conversion'
  real32_T ADC_gk;                     // '<S100>/ADC'
  real32_T Saturation;                 // '<S126>/Saturation'
  real32_T DataTypeConversion1_le;     // '<S386>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S386>/Data Type Conversion2'
  real32_T SFunction_c4;               // '<S644>/S-Function'
  real32_T DataTypeConversion1_pv;     // '<S387>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S387>/Data Type Conversion2'
  real32_T DataTypeConversion1_h;      // '<S388>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S388>/Data Type Conversion2'
  real32_T DataTypeConversion1_f;      // '<S389>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S389>/Data Type Conversion2'
  real32_T DataTypeConversion1_b;      // '<S515>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S515>/Data Type Conversion2'
  real32_T DataTypeConversion1_eo;     // '<S516>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S516>/Data Type Conversion2'
  real32_T DataTypeConversion1_po;     // '<S517>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S517>/Data Type Conversion2'
  real32_T DataTypeConversion1_c;      // '<S518>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S518>/Data Type Conversion2'
  real32_T DataTypeConversion1_h3;     // '<S588>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S588>/Data Type Conversion2'
  real32_T DataTypeConversion1_m;      // '<S589>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S589>/Data Type Conversion2'
  real32_T DataTypeConversion1_fz;     // '<S590>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S590>/Data Type Conversion2'
  real32_T DataTypeConversion1_i;      // '<S591>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S591>/Data Type Conversion2'
  real32_T DataTypeConversion1_al;     // '<S600>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S600>/Data Type Conversion2'
  real32_T DataTypeConversion1_k;      // '<S601>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S601>/Data Type Conversion2'
  real32_T DataTypeConversion1_l4;     // '<S602>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S602>/Data Type Conversion2'
  real32_T DataTypeConversion1_bg;     // '<S603>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S603>/Data Type Conversion2'
  real32_T DataTypeConversion1_d;      // '<S612>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S612>/Data Type Conversion2'
  real32_T DataTypeConversion1_o;      // '<S613>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S613>/Data Type Conversion2'
  real32_T DataTypeConversion1_ay;     // '<S614>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S614>/Data Type Conversion2'
  real32_T DataTypeConversion1_pf;     // '<S615>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S615>/Data Type Conversion2'
  real32_T DataTypeConversion1_als;    // '<S625>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S625>/Data Type Conversion2'
  real32_T DataTypeConversion1_ig;     // '<S626>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S626>/Data Type Conversion2'
  real32_T DataTypeConversion1_g;      // '<S627>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S627>/Data Type Conversion2'
  real32_T DataTypeConversion1_gw;     // '<S628>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S628>/Data Type Conversion2'
  real32_T SFunction_co;               // '<S642>/S-Function'
  real32_T Gain11;                     // '<S1>/Gain11'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_balance_ctrl_T {
  dsp_simulink_MovingAverage_im_T obj; // '<S87>/Moving Average'
  mpcActiveSetOptions_imperix_b_T options_z;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_b_T options_o;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_b_T options;// '<S1>/LICCs control'
  mpcActiveSetOptions_imperix_b_T SolverOpts;// '<S31>/Saturation'
  real_T Integrator_DSTATE;            // '<S184>/Integrator'
  real_T Integrator_DSTATE_a;          // '<S564>/Integrator'
  real_T SFunction_DSTATE;             // '<S638>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S646>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S640>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S648>/S-Function'
  real_T Integrator_DSTATE_b;          // '<S368>/Integrator'
  real_T UnitDelay_DSTATE[2];          // '<S76>/Unit Delay'
  real_T SFunction_DSTATE_d;           // '<S650>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S652>/S-Function'
  real_T Integrator_DSTATE_k;          // '<S316>/Integrator'
  real_T Integrator_DSTATE_h;          // '<S441>/Integrator'
  real_T Integrator_DSTATE_m;          // '<S493>/Integrator'
  real_T UnitDelay1_DSTATE[2];         // '<S145>/Unit Delay1'
  real_T DAC_DSTATE;                   // '<S133>/DAC'
  real_T DAC_DSTATE_c;                 // '<S135>/DAC'
  real_T DAC_DSTATE_h;                 // '<S137>/DAC'
  real_T DAC_DSTATE_d;                 // '<S139>/DAC'
  real_T DAC_DSTATE_b;                 // '<S141>/DAC'
  real_T DAC_DSTATE_h0;                // '<S143>/DAC'
  real_T SFunction_DSTATE_l;           // '<S205>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S207>/S-Function'
  real_T SFunction_DSTATE_d2;          // '<S209>/S-Function'
  real_T SFunction_DSTATE_ix;          // '<S211>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S213>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S215>/S-Function'
  real_T SFunction_DSTATE_on;          // '<S217>/S-Function'
  real_T SFunction_DSTATE_ig;          // '<S219>/S-Function'
  real_T SFunction_DSTATE_ea;          // '<S221>/S-Function'
  real_T SFunction_DSTATE_af;          // '<S223>/S-Function'
  real_T SFunction_DSTATE_j0;          // '<S225>/S-Function'
  real_T SFunction_DSTATE_eh;          // '<S227>/S-Function'
  real_T SFunction_DSTATE_nx;          // '<S229>/S-Function'
  real_T SFunction_DSTATE_i1;          // '<S231>/S-Function'
  real_T SFunction_DSTATE_gi;          // '<S233>/S-Function'
  real_T SFunction_DSTATE_al;          // '<S235>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S237>/S-Function'
  real_T SFunction_DSTATE_m;           // '<S239>/S-Function'
  real_T SFunction_DSTATE_o2;          // '<S241>/S-Function'
  real_T SFunction_DSTATE_jn;          // '<S243>/S-Function'
  real_T SFunction_DSTATE_ap;          // '<S245>/S-Function'
  real_T SFunction_DSTATE_fe;          // '<S247>/S-Function'
  real_T SFunction_DSTATE_gc;          // '<S249>/S-Function'
  real_T UnitDelay1_DSTATE_l;          // '<S29>/Unit Delay1'
  real_T SFunction_DSTATE_lk;          // '<S251>/S-Function'
  real_T SFunction_DSTATE_iq;          // '<S253>/S-Function'
  real_T SFunction_DSTATE_m4;          // '<S255>/S-Function'
  real_T SFunction_DSTATE_m1;          // '<S257>/S-Function'
  real_T SFunction_DSTATE_il;          // '<S259>/S-Function'
  real_T SFunction_DSTATE_jr;          // '<S261>/S-Function'
  real_T SFunction_DSTATE_jt;          // '<S263>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S265>/S-Function'
  real_T SFunction_DSTATE_ab;          // '<S267>/S-Function'
  real_T SFunction_DSTATE_jh;          // '<S269>/S-Function'
  real_T SFunction_DSTATE_o1;          // '<S271>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S273>/S-Function'
  real_T SFunction_DSTATE_ek;          // '<S275>/S-Function'
  real_T SFunction_DSTATE_er;          // '<S277>/S-Function'
  real_T SFunction_DSTATE_pr;          // '<S279>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S129>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S644>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S642>/S-Function'
  real_T SFunction_DSTATE_mj;          // '<S203>/S-Function'
  real_T TmpRTBAtSaturationInport1_Buffe[3];// synthesized block
  real_T TmpRTBAtEnergybalanceInport1_Bu[6];// synthesized block
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
  int8_T Integrator_PrevResetState;    // '<S368>/Integrator'
  int8_T Integrator_PrevResetState_h;  // '<S316>/Integrator'
  int8_T Integrator_PrevResetState_p;  // '<S441>/Integrator'
  int8_T Integrator_PrevResetState_b;  // '<S493>/Integrator'
  boolean_T Ac_not_empty;              // '<S31>/Saturation'
  boolean_T A_not_empty;               // '<S1>/LICCs control'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  boolean_T Ts_not_empty;              // '<S1>/Energy balance'
};

// Zero-crossing (trigger) state
struct PrevZCX_imperix_balance_ctrl_T {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S87>/Sample and Hold'
};

// Constant parameters (default storage)
struct ConstP_imperix_balance_ctrl_T {
  // Expression: M2C.Vdc/2*[1; -1]
  //  Referenced by: '<S75>/vx'

  real_T vx_rtw_collapsed_sub_expr_yVo7x[2];
};

// Parameters for system: '<S399>/Subsystem - pi//2 delay'
struct P_Subsystempi2delay_imperix_b_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S402>/alpha_beta'

};

// Parameters for system: '<S399>/Subsystem1'
struct P_Subsystem1_imperix_balance__T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S403>/alpha_beta'

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
                                          //    '<S145>/Gain1'
                                          //    '<S145>/Gain2'

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
                                          //    '<S75>/vx'
                                          //    '<S80>/Constant1'
                                          //    '<S81>/Gain'
                                          //    '<S86>/Gain1'
                                          //    '<S86>/Gain3'
                                          //    '<S86>/Gain4'

  struct_3oGPhqag3LrQh40vmdz4AD IM;    // Variable: IM
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S1>/Kalman Filter'
                                          //    '<S1>/Gain10'
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
                                          //    '<S76>/Gain'

  struct_eLXpdkXVH71IKiDfJkdaiC RFT;   // Variable: RFT
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S31>/Gain5'
                                          //    '<S76>/Gain2'

  struct_O6gPH0RO1xYJuf7clpdGt MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S1>/Gain16'
                                          //    '<S433>/Kb'
                                          //    '<S438>/Integral Gain'
                                          //    '<S446>/Proportional Gain'
                                          //    '<S448>/Saturation'
                                          //    '<S485>/Kb'
                                          //    '<S490>/Integral Gain'
                                          //    '<S498>/Proportional Gain'
                                          //    '<S500>/Saturation'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S308>/Kb'
                                          //    '<S313>/Integral Gain'
                                          //    '<S321>/Proportional Gain'
                                          //    '<S323>/Saturation'
                                          //    '<S360>/Kb'
                                          //    '<S365>/Integral Gain'
                                          //    '<S373>/Proportional Gain'
                                          //    '<S375>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S1>/Gain17'
                                          //    '<S1>/Gain20'
                                          //    '<S561>/Integral Gain'
                                          //    '<S569>/Proportional Gain'
                                          //    '<S571>/Saturation'
                                          //    '<S556>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEC;   // Variable: TEC
                                          //  Referenced by:
                                          //    '<S29>/Gain1'
                                          //    '<S29>/Gain2'
                                          //    '<S181>/Integral Gain'
                                          //    '<S189>/Proportional Gain'
                                          //    '<S191>/Saturation'
                                          //    '<S176>/DeadZone'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S582>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S406>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_j;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_j
                                  //  Referenced by: '<S399>/Constant'

  real_T PIDController1_InitialCondition;
                              // Mask Parameter: PIDController1_InitialCondition
                                 //  Referenced by: '<S184>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S564>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S368>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S316>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S441>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S493>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S584>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S585>/Constant'

  real_T CompareToConstant_const_d; // Mask Parameter: CompareToConstant_const_d
                                       //  Referenced by: '<S511>/Constant'

  real_T CompareToConstant1_const_j;
                                   // Mask Parameter: CompareToConstant1_const_j
                                      //  Referenced by: '<S512>/Constant'

  real_T CompareToConstant_const_b; // Mask Parameter: CompareToConstant_const_b
                                       //  Referenced by: '<S400>/Constant'

  real_T CompareToConstant1_const_o;
                                   // Mask Parameter: CompareToConstant1_const_o
                                      //  Referenced by: '<S401>/Constant'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S586>/dq'

  real_T dq_Y0_c[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S587>/dq'

  real_T _Y0;                          // Expression: initCond
                                          //  Referenced by: '<S624>/ '

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S174>/Constant1'

  real_T Constant1_Value_e;            // Expression: 0
                                          //  Referenced by: '<S554>/Constant1'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S98>/ADC'

  real_T ADC_P8_h;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S116>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S120>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S102>/ADC'

  real_T ADC_P8_b;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S122>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S124>/ADC'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S184>/Integrator'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S112>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S114>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S104>/ADC'

  real_T ADC_P8_nj;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S118>/ADC'

  real_T ADC_P8_pr;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S106>/ADC'

  real_T ADC_P8_lh;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S108>/ADC'

  real_T Integrator_gainval_b;       // Computed Parameter: Integrator_gainval_b
                                        //  Referenced by: '<S564>/Integrator'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S638>/S-Function'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S646>/S-Function'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S110>/ADC'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S640>/S-Function'

  real_T SFunction_P17_h;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S648>/S-Function'

  real_T Integrator_gainval_g;       // Computed Parameter: Integrator_gainval_g
                                        //  Referenced by: '<S368>/Integrator'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S82>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S583>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S583>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S76>/Unit Delay'

  real_T SFunction_P17_c;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S650>/S-Function'

  real_T SFunction_P17_d;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S652>/S-Function'

  real_T Integrator_gainval_gz;     // Computed Parameter: Integrator_gainval_gz
                                       //  Referenced by: '<S316>/Integrator'

  real_T Integrator_gainval_h;       // Computed Parameter: Integrator_gainval_h
                                        //  Referenced by: '<S441>/Integrator'

  real_T Integrator_gainval_bo;     // Computed Parameter: Integrator_gainval_bo
                                       //  Referenced by: '<S493>/Integrator'

  real_T Gain1_Gain_m;                 // Expression: 2
                                          //  Referenced by: '<S76>/Gain1'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S145>/Unit Delay1'

  real_T TmpRTBAtSaturationInport1_Initi;// Expression: 0
                                            //  Referenced by:

  real_T Gain3_Gain_f[2];              // Expression: [1; -1]
                                          //  Referenced by: '<S31>/Gain3'

  real_T Gain2_Gain_i[30];             // Expression: M2C.A'
                                          //  Referenced by: '<S75>/Gain2'

  real_T Gain_Gain;                    // Expression: 5
                                          //  Referenced by: '<S1>/Gain'

  real_T ADC_P8_bf;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S100>/ADC'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S174>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S386>/phase'

  real_T SFunction_P17_bl;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S644>/S-Function'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S387>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S388>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S389>/phase'

  real_T Gain3_Gain_g[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S398>/Gain3'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S515>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S516>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S517>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S518>/phase'

  real_T Gain_Gain_h;                  // Expression: -1
                                          //  Referenced by: '<S78>/Gain'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S78>/Gain8'

  real_T Clamping_zero_Value_p;        // Expression: 0
                                          //  Referenced by: '<S554>/Clamping_zero'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S588>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S589>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S590>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S591>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S600>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S601>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S602>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S603>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S612>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S613>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S614>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S615>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S625>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S626>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S627>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S628>/phase'

  real_T SFunction_P17_j;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S642>/S-Function'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S391>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S391>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S391>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S393>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S393>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S393>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S395>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S395>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S395>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S397>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S397>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S397>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S520>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S520>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S520>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S522>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S522>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S522>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S524>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S524>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S524>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S593>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S593>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S593>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S595>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S595>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S595>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S597>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S597>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S597>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S599>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S599>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S599>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S605>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S605>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S605>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S607>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S607>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S607>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S609>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S609>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S609>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S611>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S611>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S611>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S617>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S617>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S617>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S619>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S619>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S619>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S621>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S621>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S621>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S623>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S623>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S623>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S630>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S630>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S630>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S632>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S632>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S632>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S634>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S634>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S634>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S636>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S636>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S636>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S98>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S98>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S116>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S116>/ADC'

  real32_T ADC_P2_n;                   // Expression: single(gain)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S102>/ADC'

  real32_T ADC_P3_fn;                  // Expression: single(offset)
                                          //  Referenced by: '<S102>/ADC'

  real32_T ADC_P2_hp;                  // Expression: single(gain)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P3_b;                   // Expression: single(offset)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S112>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S112>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S114>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S114>/ADC'

  real32_T ADC_P2_eg;                  // Expression: single(gain)
                                          //  Referenced by: '<S104>/ADC'

  real32_T ADC_P3_l;                   // Expression: single(offset)
                                          //  Referenced by: '<S104>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P3_ck;                  // Expression: single(offset)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P2_hb;                  // Expression: single(gain)
                                          //  Referenced by: '<S106>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S106>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P3_fy;                  // Expression: single(offset)
                                          //  Referenced by: '<S108>/ADC'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S638>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S638>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S638>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S638>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S638>/S-Function'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S646>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S646>/S-Function'

  real32_T SFunction_P5_i;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S646>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(0)
                                          //  Referenced by: '<S646>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S646>/S-Function'

  real32_T ADC_P2_pa;                  // Expression: single(gain)
                                          //  Referenced by: '<S110>/ADC'

  real32_T ADC_P3_eo;                  // Expression: single(offset)
                                          //  Referenced by: '<S110>/ADC'

  real32_T SFunction_P3_h;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S640>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S640>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S640>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(0)
                                          //  Referenced by: '<S640>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S640>/S-Function'

  real32_T SFunction_P3_l;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S648>/S-Function'

  real32_T SFunction_P4_o;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S648>/S-Function'

  real32_T SFunction_P5_j;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S648>/S-Function'

  real32_T SFunction_P6_jn;            // Expression: single(0)
                                          //  Referenced by: '<S648>/S-Function'

  real32_T SFunction_P7_o;             // Expression: single(0)
                                          //  Referenced by: '<S648>/S-Function'

  real32_T SFunction_P3_b;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S650>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S650>/S-Function'

  real32_T SFunction_P5_pi;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S650>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(0)
                                          //  Referenced by: '<S650>/S-Function'

  real32_T SFunction_P7_p;             // Expression: single(0)
                                          //  Referenced by: '<S650>/S-Function'

  real32_T SFunction_P3_lm;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S652>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S652>/S-Function'

  real32_T SFunction_P5_e;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S652>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(0)
                                          //  Referenced by: '<S652>/S-Function'

  real32_T SFunction_P7_f;             // Expression: single(0)
                                          //  Referenced by: '<S652>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S205>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S205>/S-Function'

  real32_T SFunction_P6_f1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P6_mk;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P6_gu;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P6_ab;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P6_ou;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P12_nh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P6_f2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P12_no;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P6_hj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P6_p1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P6_oc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P12_ik;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P6_jb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P12_ps;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P6_bq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P12_au;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P6_cj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P12_oi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P12_fz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P6_he;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P12_fr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P6_mb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P12_kn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P6_pq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P12_ai;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P6_e2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P12_n2;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P6_g4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S257>/S-Function'

  real32_T SFunction_P12_i4;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S257>/S-Function'

  real32_T SFunction_P6_kh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S259>/S-Function'

  real32_T SFunction_P12_ce;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S259>/S-Function'

  real32_T SFunction_P6_di;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S261>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S261>/S-Function'

  real32_T SFunction_P6_b0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S263>/S-Function'

  real32_T SFunction_P12_c1;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S263>/S-Function'

  real32_T SFunction_P6_aw;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S265>/S-Function'

  real32_T SFunction_P12_og;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S265>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S267>/S-Function'

  real32_T SFunction_P12_ld;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S267>/S-Function'

  real32_T SFunction_P6_ek;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S269>/S-Function'

  real32_T SFunction_P12_bk;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S269>/S-Function'

  real32_T SFunction_P6_o4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S271>/S-Function'

  real32_T SFunction_P12_mh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S271>/S-Function'

  real32_T SFunction_P6_kr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S273>/S-Function'

  real32_T SFunction_P12_hp;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S273>/S-Function'

  real32_T SFunction_P6_k4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S275>/S-Function'

  real32_T SFunction_P12_o3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S275>/S-Function'

  real32_T SFunction_P6_kp;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S277>/S-Function'

  real32_T SFunction_P12_av;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S277>/S-Function'

  real32_T SFunction_P6_cv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S279>/S-Function'

  real32_T SFunction_P12_m3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S279>/S-Function'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S100>/ADC'

  real32_T ADC_P3_ej;                  // Expression: single(offset)
                                          //  Referenced by: '<S100>/ADC'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<S126>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<S126>/Saturation'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S126>/CLK1'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S129>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S129>/S-Function'

  real32_T CLK1_P2_i;                  // Expression: single(frequency)
                                          //  Referenced by: '<S131>/CLK1'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S644>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S644>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S644>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S644>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S644>/S-Function'

  real32_T SFunction_P3_c;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S642>/S-Function'

  real32_T SFunction_P4_n;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S642>/S-Function'

  real32_T SFunction_P5_l;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S642>/S-Function'

  real32_T SFunction_P6_o1;            // Expression: single(0)
                                          //  Referenced by: '<S642>/S-Function'

  real32_T SFunction_P7_gi;            // Expression: single(0)
                                          //  Referenced by: '<S642>/S-Function'

  real32_T Gain11_Gain;                // Computed Parameter: Gain11_Gain
                                          //  Referenced by: '<S1>/Gain11'

  real32_T SFunction_P6_h5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S203>/S-Function'

  real32_T SFunction_P12_hz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S203>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S638>/S-Function'

  uint32_T SFunction_P10_c;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S646>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S640>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S648>/S-Function'

  uint32_T SFunction_P10_g;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S650>/S-Function'

  uint32_T SFunction_P10_nr;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S652>/S-Function'

  uint32_T SFunction_P7_ij;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S205>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S205>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P7_ik;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P7_gu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P7_l;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P13_fr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P7_k;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P7_fh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P7_f4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P7_ge;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P7_i1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P13_ck;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P7_oj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P13_el;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P7_o5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P13_cs;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P7_ib;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P13_ob;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P7_dq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P13_or;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P7_or;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P13_pe;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P7_c5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P7_no;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P13_hw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P13_ork;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P7_mj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P7_gn;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P7_bh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P13_ot;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P7_im;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P7_ii;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P13_jo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P7_ic;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S257>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S257>/S-Function'

  uint32_T SFunction_P7_nh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S259>/S-Function'

  uint32_T SFunction_P13_ota;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S259>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S261>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S261>/S-Function'

  uint32_T SFunction_P7_ov;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S263>/S-Function'

  uint32_T SFunction_P13_be;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S263>/S-Function'

  uint32_T SFunction_P7_bu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S265>/S-Function'

  uint32_T SFunction_P13_lm;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S265>/S-Function'

  uint32_T SFunction_P7_ms;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S267>/S-Function'

  uint32_T SFunction_P13_bj;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S267>/S-Function'

  uint32_T SFunction_P7_ma;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S269>/S-Function'

  uint32_T SFunction_P13_bm;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S269>/S-Function'

  uint32_T SFunction_P7_jj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S271>/S-Function'

  uint32_T SFunction_P13_mz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S271>/S-Function'

  uint32_T SFunction_P7_m5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S273>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S273>/S-Function'

  uint32_T SFunction_P7_jj1;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S275>/S-Function'

  uint32_T SFunction_P13_jk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S275>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S277>/S-Function'

  uint32_T SFunction_P13_gz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S277>/S-Function'

  uint32_T SFunction_P7_i5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S279>/S-Function'

  uint32_T SFunction_P13_kw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S279>/S-Function'

  uint32_T SFunction_P10_k0;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S644>/S-Function'

  uint32_T SFunction_P10_nm;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S642>/S-Function'

  uint32_T SFunction_P7_aq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S203>/S-Function'

  uint32_T SFunction_P13_it;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S203>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S391>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S391>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S391>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S391>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S391>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S391>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S393>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S393>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S393>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S393>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S393>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S393>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S395>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S395>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S395>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S395>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S395>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S395>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S397>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S397>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S397>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S397>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S397>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S397>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S520>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S520>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S520>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S520>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S520>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S520>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S595>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S595>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S595>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S595>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S595>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S595>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S597>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S597>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S597>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S597>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S597>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S597>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S599>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S599>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S599>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S599>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S599>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S599>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S605>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S605>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S605>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S605>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S605>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S605>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S607>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S607>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S607>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S607>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S607>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S607>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S609>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S609>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S609>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S609>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S609>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S609>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S611>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S611>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S611>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S611>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S611>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S611>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S617>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S617>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S617>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S617>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S617>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S617>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S619>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S619>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S619>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S619>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S619>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S619>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S621>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S621>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S621>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S621>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S621>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S621>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S623>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S623>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S623>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S623>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S623>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S623>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S630>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S630>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S630>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S630>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S630>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S630>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S632>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S634>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S636>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S636>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P9_k;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P1_l;                    // Expression: int16(channel)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P4_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P9_ke;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P4_gx;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P6_ct;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P9_a;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P1_h;                    // Expression: int16(channel)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P4_df;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P1_ad;                   // Expression: int16(channel)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P6_cx;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P4_it;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P9_n4;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P6_p0;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P1_el;                   // Expression: int16(channel)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P4_b2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P9_nd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S108>/ADC'

  int16_T SFunction_P2_n;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S638>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S646>/S-Function'

  int16_T ADC_P1_ag;                   // Expression: int16(channel)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P6_fi;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P9_i;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S110>/ADC'

  int16_T SFunction_P2_k;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S640>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S648>/S-Function'

  int16_T SFunction_P2_p;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S650>/S-Function'

  int16_T SFunction_P2_iq;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S652>/S-Function'

  int16_T DAC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S133>/DAC'

  int16_T DAC_P2;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S133>/DAC'

  int16_T DAC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S135>/DAC'

  int16_T DAC_P2_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S135>/DAC'

  int16_T DAC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S137>/DAC'

  int16_T DAC_P2_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S137>/DAC'

  int16_T DAC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S139>/DAC'

  int16_T DAC_P2_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S139>/DAC'

  int16_T DAC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S141>/DAC'

  int16_T DAC_P2_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S141>/DAC'

  int16_T DAC_P1_nv;                   // Expression: int16(channel)
                                          //  Referenced by: '<S143>/DAC'

  int16_T DAC_P2_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S143>/DAC'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S205>/S-Function'

  int16_T SFunction_P3_la;             // Expression: int16(0)
                                          //  Referenced by: '<S205>/S-Function'

  int16_T SFunction_P2_k3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T SFunction_P3_ny;             // Expression: int16(0)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T SFunction_P2_h;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P3_lq;             // Expression: int16(0)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T SFunction_P2_k2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P3_l1;             // Expression: int16(0)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P2_if;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P3_b2;             // Expression: int16(0)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P3_pb;             // Expression: int16(0)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P2_op;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P3_lb;             // Expression: int16(0)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P2_fj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P3_me;             // Expression: int16(0)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P2_hy;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P3_nw;             // Expression: int16(0)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P2_bp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P3_p5;             // Expression: int16(0)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P2_h1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P3_kr;             // Expression: int16(0)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P2_kp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P3_ma;             // Expression: int16(0)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P2_mw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P3_fu;             // Expression: int16(0)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P2_m0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P3_cn;             // Expression: int16(0)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P2_bf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P2_hd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P2_ex;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P3_hz;             // Expression: int16(0)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P3_ka;             // Expression: int16(0)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P3_h4;             // Expression: int16(0)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P2_ps;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P3_j;              // Expression: int16(0)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P2_it;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P3_jk;             // Expression: int16(0)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P2_k2u;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P3_n2;             // Expression: int16(0)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S257>/S-Function'

  int16_T SFunction_P3_m5;             // Expression: int16(0)
                                          //  Referenced by: '<S257>/S-Function'

  int16_T SFunction_P2_li;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S259>/S-Function'

  int16_T SFunction_P3_jo;             // Expression: int16(0)
                                          //  Referenced by: '<S259>/S-Function'

  int16_T SFunction_P2_no;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S261>/S-Function'

  int16_T SFunction_P3_cx;             // Expression: int16(0)
                                          //  Referenced by: '<S261>/S-Function'

  int16_T SFunction_P2_o3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S263>/S-Function'

  int16_T SFunction_P3_bt;             // Expression: int16(0)
                                          //  Referenced by: '<S263>/S-Function'

  int16_T SFunction_P2_ey;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S265>/S-Function'

  int16_T SFunction_P3_gx;             // Expression: int16(0)
                                          //  Referenced by: '<S265>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S267>/S-Function'

  int16_T SFunction_P3_in;             // Expression: int16(0)
                                          //  Referenced by: '<S267>/S-Function'

  int16_T SFunction_P2_ei;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S269>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S269>/S-Function'

  int16_T SFunction_P2_et;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S271>/S-Function'

  int16_T SFunction_P3_dw;             // Expression: int16(0)
                                          //  Referenced by: '<S271>/S-Function'

  int16_T SFunction_P2_j4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S273>/S-Function'

  int16_T SFunction_P3_gv;             // Expression: int16(0)
                                          //  Referenced by: '<S273>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S275>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S275>/S-Function'

  int16_T SFunction_P2_ax;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S277>/S-Function'

  int16_T SFunction_P3_jm;             // Expression: int16(0)
                                          //  Referenced by: '<S277>/S-Function'

  int16_T SFunction_P2_n2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S279>/S-Function'

  int16_T SFunction_P3_ap;             // Expression: int16(0)
                                          //  Referenced by: '<S279>/S-Function'

  int16_T ADC_P1_fz;                   // Expression: int16(channel)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P6_nv;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P9_n0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S100>/ADC'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S126>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S126>/CLK1'

  int16_T clk_id_Value_o;              // Computed Parameter: clk_id_Value_o
                                          //  Referenced by: '<S131>/clk_id'

  int16_T CLK1_P1_c;                   // Expression: int16(id)
                                          //  Referenced by: '<S131>/CLK1'

  int16_T SFunction_P2_m0o;            // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S644>/S-Function'

  int16_T SFunction_P2_f5;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S642>/S-Function'

  int16_T SFunction_P2_o3j;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S203>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P1[5];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S638>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S638>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S638>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S638>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S638>/S-Function'

  uint16_T SFunction_P1_f[5];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S646>/S-Function'

  uint16_T SFunction_P9_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S646>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S646>/S-Function'

  uint16_T SFunction_P14_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S646>/S-Function'

  uint16_T SFunction_P15_b;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S646>/S-Function'

  uint16_T SFunction_P1_p[10];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S640>/S-Function'

  uint16_T SFunction_P9_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S640>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S640>/S-Function'

  uint16_T SFunction_P14_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S640>/S-Function'

  uint16_T SFunction_P15_p;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S640>/S-Function'

  uint16_T SFunction_P1_n[8];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S648>/S-Function'

  uint16_T SFunction_P9_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S648>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S648>/S-Function'

  uint16_T SFunction_P14_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S648>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S648>/S-Function'

  uint16_T SFunction_P1_a[9];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S650>/S-Function'

  uint16_T SFunction_P9_c5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S650>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S650>/S-Function'

  uint16_T SFunction_P14_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S650>/S-Function'

  uint16_T SFunction_P15_bw;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S650>/S-Function'

  uint16_T SFunction_P1_h[8];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S652>/S-Function'

  uint16_T SFunction_P9_cs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S652>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S652>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S652>/S-Function'

  uint16_T SFunction_P15_o3;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S652>/S-Function'

  uint16_T SFunction_P1_a2[3];         // Computed Parameter: SFunction_P1_a2
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P5_pt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P1_i[3];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P5_je;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P14_k2[5];        // Computed Parameter: SFunction_P14_k2
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P1_h2[6];         // Computed Parameter: SFunction_P1_h2
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P5_pp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P8_mz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P11_bb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P1_o[6];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P11_je;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P14_ne[5];        // Computed Parameter: SFunction_P14_ne
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P1_e[5];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P8_a;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P1_hm[4];         // Computed Parameter: SFunction_P1_hm
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P5_oy;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P14_k4[5];        // Computed Parameter: SFunction_P14_k4
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P1_fk[5];         // Computed Parameter: SFunction_P1_fk
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P5_ex;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P1_f2[3];         // Computed Parameter: SFunction_P1_f2
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P14_b3[5];        // Computed Parameter: SFunction_P14_b3
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P1_m[3];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P5_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P1_oj[3];         // Computed Parameter: SFunction_P1_oj
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P8_do;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P11_lx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P14_n5[5];        // Computed Parameter: SFunction_P14_n5
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P1_m2[4];         // Computed Parameter: SFunction_P1_m2
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P5_es;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P8_av;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P1_ip[4];         // Computed Parameter: SFunction_P1_ip
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P5_l3;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P8_ez;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P11_j5;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P14_g5[5];        // Computed Parameter: SFunction_P14_g5
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P1_p0[2];         // Computed Parameter: SFunction_P1_p0
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P11_ev;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P1_j[4];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P11_mj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P14_hb[5];        // Computed Parameter: SFunction_P14_hb
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P1_jz[5];         // Computed Parameter: SFunction_P1_jz
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P5_gk;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P11_mw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P14_bd[5];        // Computed Parameter: SFunction_P14_bd
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P1_jb[4];         // Computed Parameter: SFunction_P1_jb
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P5_iv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P8_mb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P14_ku[5];        // Computed Parameter: SFunction_P14_ku
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P1_b[4];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P5_fc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P11_lz;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P14_fj[5];        // Computed Parameter: SFunction_P14_fj
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P1_fs[5];         // Computed Parameter: SFunction_P1_fs
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P8_la;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P11_ep;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P1_pk[4];         // Computed Parameter: SFunction_P1_pk
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P5_ez;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P8_eo;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P11_nn;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P14_ef[5];        // Computed Parameter: SFunction_P14_ef
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P1_el[5];         // Computed Parameter: SFunction_P1_el
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P5_g2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P8_od;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P11_iq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P14_bl[5];        // Computed Parameter: SFunction_P14_bl
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P1_jy[3];         // Computed Parameter: SFunction_P1_jy
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P5_cn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P8_pe;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P11_j5f;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P1_di[4];         // Computed Parameter: SFunction_P1_di
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P5_m1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P8_g1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P11_g1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P14_oz[5];        // Computed Parameter: SFunction_P14_oz
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P1_f20[6];        // Computed Parameter: SFunction_P1_f20
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P5_pq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P8_ej;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P11_oy;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P14_om[5];        // Computed Parameter: SFunction_P14_om
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P1_bt[3];         // Computed Parameter: SFunction_P1_bt
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P5_ec;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P8_jz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P11_ea;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P14_kp[5];        // Computed Parameter: SFunction_P14_kp
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P1_da[9];         // Computed Parameter: SFunction_P1_da
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P8_e0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P11_mh;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P14_g5c[5];       // Computed Parameter: SFunction_P14_g5c
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P1_g[9];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P5_iq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P8_lu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P11_jo;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P14_lr[5];        // Computed Parameter: SFunction_P14_lr
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P1_nn[6];         // Computed Parameter: SFunction_P1_nn
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P5_he;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P8_jt;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P11_mg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P1_c[6];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P5_ar;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P8_l2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P11_ku;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P14_mj[5];        // Computed Parameter: SFunction_P14_mj
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P1_jbs[5];        // Computed Parameter: SFunction_P1_jbs
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P5_jd;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P8_kl;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P11_hj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P14_jh[5];        // Computed Parameter: SFunction_P14_jh
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P1_j0[3];         // Computed Parameter: SFunction_P1_j0
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P5_bf;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P8_pq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P11_nj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P14_mp[5];        // Computed Parameter: SFunction_P14_mp
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P1_o3[3];         // Computed Parameter: SFunction_P1_o3
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P5_ph;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P8_p4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P11_dp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P1_cf[3];         // Computed Parameter: SFunction_P1_cf
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P5_dm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P8_gk;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P11_id;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P14_cc[5];        // Computed Parameter: SFunction_P14_cc
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P1_pl[3];         // Computed Parameter: SFunction_P1_pl
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P5_ip;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P11_k3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P14_l0[5];        // Computed Parameter: SFunction_P14_l0
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P1_hj[3];         // Computed Parameter: SFunction_P1_hj
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P5_lg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P8_js;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P11_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P14_ey[5];        // Computed Parameter: SFunction_P14_ey
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P1_ow[3];         // Computed Parameter: SFunction_P1_ow
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P5_on;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P8_h2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P11_fr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P14_do[5];        // Computed Parameter: SFunction_P14_do
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P1_nq[3];         // Computed Parameter: SFunction_P1_nq
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P5_ml;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P8_im;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P11_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P14_ig[5];        // Computed Parameter: SFunction_P14_ig
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P1_hs[2];         // Computed Parameter: SFunction_P1_hs
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P5_gp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P8_eb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P11_bt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P14_iz[5];        // Computed Parameter: SFunction_P14_iz
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P1_fd;            // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S644>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S644>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S644>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S644>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S644>/S-Function'

  uint16_T SFunction_P1_l[9];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S642>/S-Function'

  uint16_T SFunction_P9_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S642>/S-Function'

  uint16_T SFunction_P11_ax;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S642>/S-Function'

  uint16_T SFunction_P14_n4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S642>/S-Function'

  uint16_T SFunction_P15_bk;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S642>/S-Function'

  uint16_T SFunction_P1_mx[2];         // Computed Parameter: SFunction_P1_mx
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P5_ba;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P11_ik;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P14_ev[5];        // Computed Parameter: SFunction_P14_ev
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S391>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S391>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S391>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S393>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S393>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S393>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S395>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S395>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S395>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S397>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S397>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S397>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S520>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S520>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S520>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S522>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S522>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S522>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S524>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S524>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S524>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S593>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S593>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S593>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S595>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S595>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S595>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S597>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S597>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S597>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S599>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S599>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S599>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S605>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S605>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S605>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S607>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S607>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S607>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S609>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S609>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S609>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S611>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S611>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S611>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S617>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S617>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S617>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S619>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S619>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S619>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S621>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S621>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S621>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S623>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S623>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S623>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S630>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S630>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S630>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S632>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S632>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S632>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S634>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S634>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S634>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S636>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S636>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S636>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S98>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S98>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S116>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S116>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S102>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S102>/ADC'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P5_i;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S112>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S112>/ADC'

  boolean_T ADC_P5_g0;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S114>/ADC'

  boolean_T ADC_P7_gn;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S114>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S104>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S104>/ADC'

  boolean_T ADC_P5_gk;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S106>/ADC'

  boolean_T ADC_P7_mt;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S106>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P7_hl;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T SFunction_P8_it;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S638>/S-Function'

  boolean_T SFunction_P12_py;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S638>/S-Function'

  boolean_T SFunction_P13_oa;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S638>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S638>/S-Function'

  boolean_T SFunction_P8_lh;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S646>/S-Function'

  boolean_T SFunction_P12_nl;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S646>/S-Function'

  boolean_T SFunction_P13_en;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S646>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S646>/S-Function'

  boolean_T ADC_P5_a4;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T SFunction_P8_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S640>/S-Function'

  boolean_T SFunction_P12_m32;         // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S640>/S-Function'

  boolean_T SFunction_P13_pi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S640>/S-Function'

  boolean_T SFunction_P16_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S640>/S-Function'

  boolean_T SFunction_P8_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S648>/S-Function'

  boolean_T SFunction_P12_ad;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S648>/S-Function'

  boolean_T SFunction_P13_f3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S648>/S-Function'

  boolean_T SFunction_P16_k1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S648>/S-Function'

  boolean_T SFunction_P8_ne;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S650>/S-Function'

  boolean_T SFunction_P12_aug;         // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S650>/S-Function'

  boolean_T SFunction_P13_hq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S650>/S-Function'

  boolean_T SFunction_P16_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S650>/S-Function'

  boolean_T SFunction_P8_h0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S652>/S-Function'

  boolean_T SFunction_P12_eh;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S652>/S-Function'

  boolean_T SFunction_P13_hz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S652>/S-Function'

  boolean_T SFunction_P16_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S652>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P9_pi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P4_ad;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P9_pm;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P10_ni;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P15_cx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P9_p2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P10_cj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P4_co;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P4_cy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P9_g1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P15_at;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P4_hu;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P10_gr;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P15_ar;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P4_n5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P15_cb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P4_cj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P9_gc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P10_fn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P15_au;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P9_o;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P10_gq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P4_ap;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P9_io;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P10_dm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P15_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P4_h5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P9_od;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P10_f1;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P15_gt;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P9_o4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P10_f3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P15_pc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P4_hb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P9_m;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P10_gz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P15_pcd;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P4_jt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P9_ce;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P10_ib;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P15_li;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P4_j3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P9_pr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P10_l;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P15_fv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P4_bc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P9_ax;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P10_gqx;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P15_gb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P4_gj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P9_g1m;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P15_mh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P4_le;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P9_mi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P4_nt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P9_mb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P10_db;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P15_cr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P4_i4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P15_oe;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P4_bn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P9_j;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P10_bh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P15_pu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P4_g2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P9_er;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P10_pz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P15_gp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P4_m3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P9_ew;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P10_ok;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P15_gu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P4_ka;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P9_ar;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P10_kp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P15_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P4_bf;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P9_g5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P10_by;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P4_m4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P9_g0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P10_gd;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P4_mo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P10_gn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P15_ef;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P4_gu;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P9_im;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P10_gt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P15_pf;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P4_n5w;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P10_dmx;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P15_nx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P9_cg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P15_ei;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P9_oo;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P10_it;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P15_p5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P4_gr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P9_oy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P10_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P15_bp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P4_bo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P9_ir;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P10_hh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P15_pr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P4_h5w;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P9_f4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P10_gy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P15_lb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P4_ge;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P9_f3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P10_p2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P15_it;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S100>/ADC'

  boolean_T ADC_P7_nl;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S100>/ADC'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S126>/CLK1'

  boolean_T CLK1_P3_d;                 // Expression: boolean(var_freq)
                                          //  Referenced by: '<S131>/CLK1'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S644>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S644>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S644>/S-Function'

  boolean_T SFunction_P16_fp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S644>/S-Function'

  boolean_T SFunction_P8_ph;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S642>/S-Function'

  boolean_T SFunction_P12_n4;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S642>/S-Function'

  boolean_T SFunction_P13_i2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S642>/S-Function'

  boolean_T SFunction_P16_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S642>/S-Function'

  boolean_T SFunction_P4_o0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P9_kf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P10_is;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P15_ax;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S203>/S-Function'

  int8_T Constant_Value;               // Computed Parameter: Constant_Value
                                          //  Referenced by: '<S174>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S174>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S174>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S174>/Constant4'

  int8_T Constant_Value_g;             // Computed Parameter: Constant_Value_g
                                          //  Referenced by: '<S554>/Constant'

  int8_T Constant2_Value_c;            // Computed Parameter: Constant2_Value_c
                                          //  Referenced by: '<S554>/Constant2'

  int8_T Constant3_Value_f;            // Computed Parameter: Constant3_Value_f
                                          //  Referenced by: '<S554>/Constant3'

  int8_T Constant4_Value_a;            // Computed Parameter: Constant4_Value_a
                                          //  Referenced by: '<S554>/Constant4'

  P_Subsystem1_imperix_balance__T Subsystem1_e;// '<S406>/Subsystem1'
  P_Subsystempi2delay_imperix_b_T Subsystempi2delay_p;// '<S406>/Subsystem - pi//2 delay' 
  P_Subsystem1_imperix_balance__T Subsystem1;// '<S399>/Subsystem1'
  P_Subsystempi2delay_imperix_b_T Subsystempi2delay;// '<S399>/Subsystem - pi//2 delay' 
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
//  Block '<S1>/Scope' : Unused code path elimination
//  Block '<S1>/Scope1' : Unused code path elimination
//  Block '<S1>/Scope2' : Unused code path elimination
//  Block '<S1>/Scope3' : Unused code path elimination
//  Block '<S1>/Scope4' : Unused code path elimination
//  Block '<S1>/Scope5' : Unused code path elimination
//  Block '<S79>/Constant' : Unused code path elimination
//  Block '<S79>/Switch' : Unused code path elimination
//  Block '<S17>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S203>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S386>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S387>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S388>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S389>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S515>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S516>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S517>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S518>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S588>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S589>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S590>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S591>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S600>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S601>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S602>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S603>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S612>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S613>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S614>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S615>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S625>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S626>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S627>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S628>/Data Type Conversion3' : Eliminate redundant data type conversion


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
//  '<S75>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem13'
//  '<S76>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19'
//  '<S77>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2'
//  '<S78>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem21'
//  '<S79>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem22'
//  '<S80>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23'
//  '<S81>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem24'
//  '<S82>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26'
//  '<S83>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3'
//  '<S84>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4'
//  '<S85>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5'
//  '<S86>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem6'
//  '<S87>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem8'
//  '<S88>'  : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9'
//  '<S89>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S90>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11'
//  '<S91>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12'
//  '<S92>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S93>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S94>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5'
//  '<S95>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter6'
//  '<S96>'  : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8'
//  '<S97>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC19/sub'
//  '<S98>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC19/sub/generation'
//  '<S99>'  : 'imperix_balance_ctrl/Closed_loop_control/ADC2/sub'
//  '<S100>' : 'imperix_balance_ctrl/Closed_loop_control/ADC2/sub/generation'
//  '<S101>' : 'imperix_balance_ctrl/Closed_loop_control/ADC21/sub'
//  '<S102>' : 'imperix_balance_ctrl/Closed_loop_control/ADC21/sub/generation'
//  '<S103>' : 'imperix_balance_ctrl/Closed_loop_control/ADC22/sub'
//  '<S104>' : 'imperix_balance_ctrl/Closed_loop_control/ADC22/sub/generation'
//  '<S105>' : 'imperix_balance_ctrl/Closed_loop_control/ADC23/sub'
//  '<S106>' : 'imperix_balance_ctrl/Closed_loop_control/ADC23/sub/generation'
//  '<S107>' : 'imperix_balance_ctrl/Closed_loop_control/ADC24/sub'
//  '<S108>' : 'imperix_balance_ctrl/Closed_loop_control/ADC24/sub/generation'
//  '<S109>' : 'imperix_balance_ctrl/Closed_loop_control/ADC25/sub'
//  '<S110>' : 'imperix_balance_ctrl/Closed_loop_control/ADC25/sub/generation'
//  '<S111>' : 'imperix_balance_ctrl/Closed_loop_control/ADC26/sub'
//  '<S112>' : 'imperix_balance_ctrl/Closed_loop_control/ADC26/sub/generation'
//  '<S113>' : 'imperix_balance_ctrl/Closed_loop_control/ADC27/sub'
//  '<S114>' : 'imperix_balance_ctrl/Closed_loop_control/ADC27/sub/generation'
//  '<S115>' : 'imperix_balance_ctrl/Closed_loop_control/ADC28/sub'
//  '<S116>' : 'imperix_balance_ctrl/Closed_loop_control/ADC28/sub/generation'
//  '<S117>' : 'imperix_balance_ctrl/Closed_loop_control/ADC3/sub'
//  '<S118>' : 'imperix_balance_ctrl/Closed_loop_control/ADC3/sub/generation'
//  '<S119>' : 'imperix_balance_ctrl/Closed_loop_control/ADC4/sub'
//  '<S120>' : 'imperix_balance_ctrl/Closed_loop_control/ADC4/sub/generation'
//  '<S121>' : 'imperix_balance_ctrl/Closed_loop_control/ADC5/sub'
//  '<S122>' : 'imperix_balance_ctrl/Closed_loop_control/ADC5/sub/generation'
//  '<S123>' : 'imperix_balance_ctrl/Closed_loop_control/ADC8/sub'
//  '<S124>' : 'imperix_balance_ctrl/Closed_loop_control/ADC8/sub/generation'
//  '<S125>' : 'imperix_balance_ctrl/Closed_loop_control/CLK1/sub'
//  '<S126>' : 'imperix_balance_ctrl/Closed_loop_control/CLK1/sub/generation'
//  '<S127>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S128>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S129>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S130>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S131>' : 'imperix_balance_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S132>' : 'imperix_balance_ctrl/Closed_loop_control/DAC10/sub'
//  '<S133>' : 'imperix_balance_ctrl/Closed_loop_control/DAC10/sub/generation'
//  '<S134>' : 'imperix_balance_ctrl/Closed_loop_control/DAC11/sub'
//  '<S135>' : 'imperix_balance_ctrl/Closed_loop_control/DAC11/sub/generation'
//  '<S136>' : 'imperix_balance_ctrl/Closed_loop_control/DAC6/sub'
//  '<S137>' : 'imperix_balance_ctrl/Closed_loop_control/DAC6/sub/generation'
//  '<S138>' : 'imperix_balance_ctrl/Closed_loop_control/DAC7/sub'
//  '<S139>' : 'imperix_balance_ctrl/Closed_loop_control/DAC7/sub/generation'
//  '<S140>' : 'imperix_balance_ctrl/Closed_loop_control/DAC8/sub'
//  '<S141>' : 'imperix_balance_ctrl/Closed_loop_control/DAC8/sub/generation'
//  '<S142>' : 'imperix_balance_ctrl/Closed_loop_control/DAC9/sub'
//  '<S143>' : 'imperix_balance_ctrl/Closed_loop_control/DAC9/sub/generation'
//  '<S144>' : 'imperix_balance_ctrl/Closed_loop_control/Modulation Index/Modulation index'
//  '<S145>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/LPF'
//  '<S146>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/Saturation'
//  '<S147>' : 'imperix_balance_ctrl/Closed_loop_control/NN CEC/White noise'
//  '<S148>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Anti-windup'
//  '<S149>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/D Gain'
//  '<S150>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/External Derivative'
//  '<S151>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Filter'
//  '<S152>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Filter ICs'
//  '<S153>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/I Gain'
//  '<S154>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain'
//  '<S155>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk'
//  '<S156>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Integrator'
//  '<S157>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Integrator ICs'
//  '<S158>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/N Copy'
//  '<S159>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/N Gain'
//  '<S160>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/P Copy'
//  '<S161>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain'
//  '<S162>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Reset Signal'
//  '<S163>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Saturation'
//  '<S164>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk'
//  '<S165>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Sum'
//  '<S166>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk'
//  '<S167>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tracking Mode'
//  '<S168>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum'
//  '<S169>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral'
//  '<S170>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain'
//  '<S171>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/postSat Signal'
//  '<S172>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/preInt Signal'
//  '<S173>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/preSat Signal'
//  '<S174>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel'
//  '<S175>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S176>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S177>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/D Gain/Disabled'
//  '<S178>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/External Derivative/Disabled'
//  '<S179>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Filter/Disabled'
//  '<S180>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Filter ICs/Disabled'
//  '<S181>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/I Gain/Internal Parameters'
//  '<S182>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain/Passthrough'
//  '<S183>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S184>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Integrator/Discrete'
//  '<S185>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Integrator ICs/Internal IC'
//  '<S186>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S187>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/N Gain/Disabled'
//  '<S188>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/P Copy/Disabled'
//  '<S189>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S190>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Reset Signal/Disabled'
//  '<S191>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Saturation/Enabled'
//  '<S192>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk/Disabled'
//  '<S193>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Sum/Sum_PI'
//  '<S194>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk/Disabled'
//  '<S195>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tracking Mode/Disabled'
//  '<S196>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S197>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S198>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S199>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/postSat Signal/Forward_Path'
//  '<S200>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/preInt Signal/Internal PreInt'
//  '<S201>' : 'imperix_balance_ctrl/Closed_loop_control/PID Controller1/preSat Signal/Forward_Path'
//  '<S202>' : 'imperix_balance_ctrl/Closed_loop_control/Probe1/sub'
//  '<S203>' : 'imperix_balance_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S204>' : 'imperix_balance_ctrl/Closed_loop_control/Probe10/sub'
//  '<S205>' : 'imperix_balance_ctrl/Closed_loop_control/Probe10/sub/generation'
//  '<S206>' : 'imperix_balance_ctrl/Closed_loop_control/Probe11/sub'
//  '<S207>' : 'imperix_balance_ctrl/Closed_loop_control/Probe11/sub/generation'
//  '<S208>' : 'imperix_balance_ctrl/Closed_loop_control/Probe12/sub'
//  '<S209>' : 'imperix_balance_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S210>' : 'imperix_balance_ctrl/Closed_loop_control/Probe13/sub'
//  '<S211>' : 'imperix_balance_ctrl/Closed_loop_control/Probe13/sub/generation'
//  '<S212>' : 'imperix_balance_ctrl/Closed_loop_control/Probe14/sub'
//  '<S213>' : 'imperix_balance_ctrl/Closed_loop_control/Probe14/sub/generation'
//  '<S214>' : 'imperix_balance_ctrl/Closed_loop_control/Probe15/sub'
//  '<S215>' : 'imperix_balance_ctrl/Closed_loop_control/Probe15/sub/generation'
//  '<S216>' : 'imperix_balance_ctrl/Closed_loop_control/Probe16/sub'
//  '<S217>' : 'imperix_balance_ctrl/Closed_loop_control/Probe16/sub/generation'
//  '<S218>' : 'imperix_balance_ctrl/Closed_loop_control/Probe17/sub'
//  '<S219>' : 'imperix_balance_ctrl/Closed_loop_control/Probe17/sub/generation'
//  '<S220>' : 'imperix_balance_ctrl/Closed_loop_control/Probe18/sub'
//  '<S221>' : 'imperix_balance_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S222>' : 'imperix_balance_ctrl/Closed_loop_control/Probe19/sub'
//  '<S223>' : 'imperix_balance_ctrl/Closed_loop_control/Probe19/sub/generation'
//  '<S224>' : 'imperix_balance_ctrl/Closed_loop_control/Probe2/sub'
//  '<S225>' : 'imperix_balance_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S226>' : 'imperix_balance_ctrl/Closed_loop_control/Probe20/sub'
//  '<S227>' : 'imperix_balance_ctrl/Closed_loop_control/Probe20/sub/generation'
//  '<S228>' : 'imperix_balance_ctrl/Closed_loop_control/Probe21/sub'
//  '<S229>' : 'imperix_balance_ctrl/Closed_loop_control/Probe21/sub/generation'
//  '<S230>' : 'imperix_balance_ctrl/Closed_loop_control/Probe22/sub'
//  '<S231>' : 'imperix_balance_ctrl/Closed_loop_control/Probe22/sub/generation'
//  '<S232>' : 'imperix_balance_ctrl/Closed_loop_control/Probe23/sub'
//  '<S233>' : 'imperix_balance_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S234>' : 'imperix_balance_ctrl/Closed_loop_control/Probe24/sub'
//  '<S235>' : 'imperix_balance_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S236>' : 'imperix_balance_ctrl/Closed_loop_control/Probe25/sub'
//  '<S237>' : 'imperix_balance_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S238>' : 'imperix_balance_ctrl/Closed_loop_control/Probe26/sub'
//  '<S239>' : 'imperix_balance_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S240>' : 'imperix_balance_ctrl/Closed_loop_control/Probe27/sub'
//  '<S241>' : 'imperix_balance_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S242>' : 'imperix_balance_ctrl/Closed_loop_control/Probe28/sub'
//  '<S243>' : 'imperix_balance_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S244>' : 'imperix_balance_ctrl/Closed_loop_control/Probe29/sub'
//  '<S245>' : 'imperix_balance_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S246>' : 'imperix_balance_ctrl/Closed_loop_control/Probe3/sub'
//  '<S247>' : 'imperix_balance_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S248>' : 'imperix_balance_ctrl/Closed_loop_control/Probe30/sub'
//  '<S249>' : 'imperix_balance_ctrl/Closed_loop_control/Probe30/sub/generation'
//  '<S250>' : 'imperix_balance_ctrl/Closed_loop_control/Probe31/sub'
//  '<S251>' : 'imperix_balance_ctrl/Closed_loop_control/Probe31/sub/generation'
//  '<S252>' : 'imperix_balance_ctrl/Closed_loop_control/Probe32/sub'
//  '<S253>' : 'imperix_balance_ctrl/Closed_loop_control/Probe32/sub/generation'
//  '<S254>' : 'imperix_balance_ctrl/Closed_loop_control/Probe33/sub'
//  '<S255>' : 'imperix_balance_ctrl/Closed_loop_control/Probe33/sub/generation'
//  '<S256>' : 'imperix_balance_ctrl/Closed_loop_control/Probe34/sub'
//  '<S257>' : 'imperix_balance_ctrl/Closed_loop_control/Probe34/sub/generation'
//  '<S258>' : 'imperix_balance_ctrl/Closed_loop_control/Probe35/sub'
//  '<S259>' : 'imperix_balance_ctrl/Closed_loop_control/Probe35/sub/generation'
//  '<S260>' : 'imperix_balance_ctrl/Closed_loop_control/Probe36/sub'
//  '<S261>' : 'imperix_balance_ctrl/Closed_loop_control/Probe36/sub/generation'
//  '<S262>' : 'imperix_balance_ctrl/Closed_loop_control/Probe37/sub'
//  '<S263>' : 'imperix_balance_ctrl/Closed_loop_control/Probe37/sub/generation'
//  '<S264>' : 'imperix_balance_ctrl/Closed_loop_control/Probe38/sub'
//  '<S265>' : 'imperix_balance_ctrl/Closed_loop_control/Probe38/sub/generation'
//  '<S266>' : 'imperix_balance_ctrl/Closed_loop_control/Probe39/sub'
//  '<S267>' : 'imperix_balance_ctrl/Closed_loop_control/Probe39/sub/generation'
//  '<S268>' : 'imperix_balance_ctrl/Closed_loop_control/Probe4/sub'
//  '<S269>' : 'imperix_balance_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S270>' : 'imperix_balance_ctrl/Closed_loop_control/Probe40/sub'
//  '<S271>' : 'imperix_balance_ctrl/Closed_loop_control/Probe40/sub/generation'
//  '<S272>' : 'imperix_balance_ctrl/Closed_loop_control/Probe5/sub'
//  '<S273>' : 'imperix_balance_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S274>' : 'imperix_balance_ctrl/Closed_loop_control/Probe6/sub'
//  '<S275>' : 'imperix_balance_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S276>' : 'imperix_balance_ctrl/Closed_loop_control/Probe7/sub'
//  '<S277>' : 'imperix_balance_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S278>' : 'imperix_balance_ctrl/Closed_loop_control/Probe8/sub'
//  '<S279>' : 'imperix_balance_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S280>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI'
//  '<S281>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI'
//  '<S282>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup'
//  '<S283>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain'
//  '<S284>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative'
//  '<S285>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter'
//  '<S286>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs'
//  '<S287>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain'
//  '<S288>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain'
//  '<S289>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk'
//  '<S290>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator'
//  '<S291>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs'
//  '<S292>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy'
//  '<S293>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain'
//  '<S294>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy'
//  '<S295>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain'
//  '<S296>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal'
//  '<S297>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation'
//  '<S298>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk'
//  '<S299>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum'
//  '<S300>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk'
//  '<S301>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode'
//  '<S302>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum'
//  '<S303>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral'
//  '<S304>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain'
//  '<S305>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal'
//  '<S306>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal'
//  '<S307>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal'
//  '<S308>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup/Back Calculation'
//  '<S309>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain/Disabled'
//  '<S310>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative/Disabled'
//  '<S311>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter/Disabled'
//  '<S312>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs/Disabled'
//  '<S313>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain/Internal Parameters'
//  '<S314>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain/Passthrough'
//  '<S315>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S316>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator/Discrete'
//  '<S317>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs/Internal IC'
//  '<S318>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S319>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain/Disabled'
//  '<S320>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy/Disabled'
//  '<S321>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S322>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal/External Reset'
//  '<S323>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation/Enabled'
//  '<S324>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk/Disabled'
//  '<S325>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum/Sum_PI'
//  '<S326>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk/Disabled'
//  '<S327>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode/Disabled'
//  '<S328>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S329>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S330>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S331>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal/Forward_Path'
//  '<S332>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal/Internal PreInt'
//  '<S333>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal/Forward_Path'
//  '<S334>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup'
//  '<S335>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain'
//  '<S336>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative'
//  '<S337>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter'
//  '<S338>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs'
//  '<S339>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain'
//  '<S340>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain'
//  '<S341>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk'
//  '<S342>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator'
//  '<S343>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs'
//  '<S344>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy'
//  '<S345>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain'
//  '<S346>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy'
//  '<S347>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain'
//  '<S348>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal'
//  '<S349>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation'
//  '<S350>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk'
//  '<S351>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum'
//  '<S352>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk'
//  '<S353>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode'
//  '<S354>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum'
//  '<S355>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral'
//  '<S356>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain'
//  '<S357>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal'
//  '<S358>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal'
//  '<S359>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal'
//  '<S360>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup/Back Calculation'
//  '<S361>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain/Disabled'
//  '<S362>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative/Disabled'
//  '<S363>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter/Disabled'
//  '<S364>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs/Disabled'
//  '<S365>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain/Internal Parameters'
//  '<S366>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain/Passthrough'
//  '<S367>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S368>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator/Discrete'
//  '<S369>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs/Internal IC'
//  '<S370>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S371>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain/Disabled'
//  '<S372>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy/Disabled'
//  '<S373>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S374>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal/External Reset'
//  '<S375>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation/Enabled'
//  '<S376>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk/Disabled'
//  '<S377>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum/Sum_PI'
//  '<S378>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk/Disabled'
//  '<S379>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode/Disabled'
//  '<S380>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S381>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S382>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S383>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal/Forward_Path'
//  '<S384>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal/Internal PreInt'
//  '<S385>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal/Forward_Path'
//  '<S386>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S387>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S388>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S389>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S390>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S391>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S392>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S393>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S394>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S395>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S396>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S397>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S398>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/Alpha-Beta-Zero to abc'
//  '<S399>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero'
//  '<S400>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S401>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S402>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S403>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S404>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S405>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S406>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S407>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S408>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S409>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S410>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S411>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S412>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S413>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S414>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S415>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S416>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S417>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S418>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S419>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S420>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S421>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S422>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S423>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S424>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S425>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S426>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S427>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S428>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S429>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S430>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S431>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S432>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S433>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S434>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S435>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S436>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S437>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S438>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S439>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S440>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S441>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S442>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S443>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S444>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S445>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S446>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S447>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/External Reset'
//  '<S448>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S449>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S450>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S451>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S452>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S453>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S454>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S455>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S456>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S457>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S458>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S459>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S460>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S461>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S462>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S463>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S464>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S465>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S466>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S467>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S468>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S469>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S470>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S471>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S472>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S473>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S474>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S475>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S476>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S477>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S478>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S479>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S480>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S481>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S482>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S483>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S484>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S485>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S486>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S487>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S488>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S489>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S490>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S491>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S492>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S493>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S494>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S495>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S496>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S497>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S498>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S499>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/External Reset'
//  '<S500>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S501>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S502>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S503>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S504>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S505>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S506>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S507>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S508>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S509>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S510>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S511>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S512>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S513>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S514>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S515>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S516>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S517>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S518>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S519>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S520>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S521>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S522>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S523>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S524>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S525>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S526>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S527>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI'
//  '<S528>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup'
//  '<S529>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain'
//  '<S530>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative'
//  '<S531>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter'
//  '<S532>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs'
//  '<S533>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain'
//  '<S534>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain'
//  '<S535>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk'
//  '<S536>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator'
//  '<S537>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs'
//  '<S538>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy'
//  '<S539>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain'
//  '<S540>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy'
//  '<S541>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain'
//  '<S542>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal'
//  '<S543>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation'
//  '<S544>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk'
//  '<S545>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum'
//  '<S546>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk'
//  '<S547>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode'
//  '<S548>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum'
//  '<S549>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral'
//  '<S550>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain'
//  '<S551>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal'
//  '<S552>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal'
//  '<S553>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal'
//  '<S554>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S555>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S556>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S557>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain/Disabled'
//  '<S558>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative/Disabled'
//  '<S559>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter/Disabled'
//  '<S560>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs/Disabled'
//  '<S561>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain/Internal Parameters'
//  '<S562>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain/Passthrough'
//  '<S563>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S564>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator/Discrete'
//  '<S565>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs/Internal IC'
//  '<S566>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S567>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain/Disabled'
//  '<S568>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy/Disabled'
//  '<S569>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S570>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal/Disabled'
//  '<S571>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation/Enabled'
//  '<S572>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk/Disabled'
//  '<S573>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum/Sum_PI'
//  '<S574>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk/Disabled'
//  '<S575>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode/Disabled'
//  '<S576>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S577>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S578>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S579>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal/Forward_Path'
//  '<S580>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal/Internal PreInt'
//  '<S581>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal/Forward_Path'
//  '<S582>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S583>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S584>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S585>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S586>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S587>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S588>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S589>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S590>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S591>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S592>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S593>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S594>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S595>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S596>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S597>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S598>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S599>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S600>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S601>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S602>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S603>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S604>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S605>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S606>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S607>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S608>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S609>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S610>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S611>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S612>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S613>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S614>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S615>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S616>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S617>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S618>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S619>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S620>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S621>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S622>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S623>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S624>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem8/Sample and Hold'
//  '<S625>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S626>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S627>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S628>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S629>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S630>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S631>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S632>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S633>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S634>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S635>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S636>' : 'imperix_balance_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S637>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S638>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S639>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11/sub'
//  '<S640>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter11/sub/generation'
//  '<S641>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12/sub'
//  '<S642>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter12/sub/generation'
//  '<S643>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S644>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S645>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S646>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'
//  '<S647>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5/sub'
//  '<S648>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter5/sub/generation'
//  '<S649>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter6/sub'
//  '<S650>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter6/sub/generation'
//  '<S651>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8/sub'
//  '<S652>' : 'imperix_balance_ctrl/Closed_loop_control/Tunable parameter8/sub/generation'

#endif                                 // imperix_balance_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
