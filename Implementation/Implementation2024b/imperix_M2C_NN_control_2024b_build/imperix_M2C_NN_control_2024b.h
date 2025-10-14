//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_M2C_NN_control_2024b.h
//
// Code generated for Simulink model 'imperix_M2C_NN_control_2024b'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.8
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Oct 14 16:13:52 2025
//
#ifndef imperix_M2C_NN_control_2024b_h_
#define imperix_M2C_NN_control_2024b_h_
#include <cmath>
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "imperix_M2C_NN_control_2024b_types.h"

extern "C"
{

#include "rtGetInf.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

// Block signals for system '<S1>/Moving RMS1'
struct B_MovingRMS1_imperix_M2C_NN_c_T {
  real_T MovingRMS1[6];                // '<S1>/Moving RMS1'
};

// Block states (default storage) for system '<S1>/Moving RMS1'
struct DW_MovingRMS1_imperix_M2C_NN__T {
  dsp_simulink_MovingRMS_imperi_T obj; // '<S1>/Moving RMS1'
  boolean_T objisempty;                // '<S1>/Moving RMS1'
};

// Block signals (default storage)
struct B_imperix_M2C_NN_control_2024_T {
  real_T iq_ref;         // '<S1>/Speed Control Proportional Integral Control1'
  real_T Gain2[6];                     // '<S28>/Gain2'
  real_T ib[6];                        // '<S1>/Ib'
  real32_T ADC;                        // '<S116>/ADC'
  real32_T ADC_k;                      // '<S132>/ADC'
  real32_T ADC_e;                      // '<S110>/ADC'
  real32_T ADC_b;                      // '<S118>/ADC'
  real32_T ADC_k2;                     // '<S112>/ADC'
  real32_T ADC_f;                      // '<S114>/ADC'
  real32_T ADC_n;                      // '<S128>/ADC'
  real32_T ADC_p;                      // '<S130>/ADC'
  real32_T ADC_fj;                     // '<S120>/ADC'
  real32_T ADC_o;                      // '<S108>/ADC'
  real32_T ADC_bn;                     // '<S122>/ADC'
  real32_T ADC_i;                      // '<S124>/ADC'
  real32_T ADC_j;                      // '<S126>/ADC'
  real32_T SFunction;                  // '<S342>/S-Function'
  real32_T DataTypeConversion;         // '<S149>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S151>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S153>/Data Type Conversion'
  real32_T DataTypeConversion_a;       // '<S155>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S157>/Data Type Conversion'
  real32_T DataTypeConversion_il;      // '<S159>/Data Type Conversion'
  real32_T SFunction_i;                // '<S336>/S-Function'
  real32_T DataTypeConversion_m;       // '<S161>/Data Type Conversion'
  real32_T DataTypeConversion_dx;      // '<S163>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S165>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S167>/Data Type Conversion'
  real32_T DataTypeConversion_j;       // '<S169>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S171>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S175>/Data Type Conversion'
  real32_T DataTypeConversion_dy;      // '<S177>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S179>/Data Type Conversion'
  real32_T DataTypeConversion_dg;      // '<S181>/Data Type Conversion'
  real32_T DataTypeConversion_hg;      // '<S183>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S185>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S187>/Data Type Conversion'
  real32_T DataTypeConversion_m5;      // '<S189>/Data Type Conversion'
  real32_T SFunction_p;                // '<S340>/S-Function'
  real32_T SFunction_n;                // '<S338>/S-Function'
  real32_T DataTypeConversion_og;      // '<S191>/Data Type Conversion'
  real32_T DataTypeConversion_it;      // '<S193>/Data Type Conversion'
  real32_T DataTypeConversion_l4;      // '<S195>/Data Type Conversion'
  real32_T DataTypeConversion_kh;      // '<S197>/Data Type Conversion'
  real32_T DataTypeConversion_jl;      // '<S201>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S203>/Data Type Conversion'
  real32_T DataTypeConversion_dm;      // '<S205>/Data Type Conversion'
  real32_T DataTypeConversion_is;      // '<S207>/Data Type Conversion'
  real32_T DataTypeConversion_do;      // '<S209>/Data Type Conversion'
  real32_T DataTypeConversion_cq;      // '<S211>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S213>/Data Type Conversion'
  real32_T DataTypeConversion_n0;      // '<S215>/Data Type Conversion'
  real32_T DataTypeConversion_aq;      // '<S217>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S219>/Data Type Conversion'
  real32_T DataTypeConversion_ln;      // '<S221>/Data Type Conversion'
  real32_T DataTypeConversion_bp;      // '<S223>/Data Type Conversion'
  real32_T DataTypeConversion_f5;      // '<S225>/Data Type Conversion'
  real32_T DataTypeConversion_kk;      // '<S227>/Data Type Conversion'
  real32_T DataTypeConversion_on;      // '<S229>/Data Type Conversion'
  real32_T DataTypeConversion_ci;      // '<S231>/Data Type Conversion'
  real32_T DataTypeConversion_n4;      // '<S233>/Data Type Conversion'
  real32_T DataTypeConversion_o0;      // '<S235>/Data Type Conversion'
  real32_T DataTypeConversion_gg;      // '<S237>/Data Type Conversion'
  real32_T DataTypeConversion_khy;     // '<S239>/Data Type Conversion'
  real32_T DataTypeConversion_hb;      // '<S241>/Data Type Conversion'
  real32_T DataTypeConversion_by;      // '<S243>/Data Type Conversion'
  real32_T DataTypeConversion_if;      // '<S245>/Data Type Conversion'
  real32_T DataTypeConversion_gw;      // '<S247>/Data Type Conversion'
  real32_T DataTypeConversion_ne;      // '<S249>/Data Type Conversion'
  real32_T DataTypeConversion_nf;      // '<S251>/Data Type Conversion'
  real32_T DataTypeConversion_lj;      // '<S253>/Data Type Conversion'
  real32_T DataTypeConversion_nfm;     // '<S255>/Data Type Conversion'
  real32_T DataTypeConversion_ka;      // '<S257>/Data Type Conversion'
  real32_T DataTypeConversion_pc;      // '<S259>/Data Type Conversion'
  real32_T DataTypeConversion_ki;      // '<S261>/Data Type Conversion'
  real32_T SFunction_d;                // '<S346>/S-Function'
  real32_T DataTypeConversion1;        // '<S31>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S31>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S31>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S262>/Data Type Conversion1'
  real32_T DataTypeConversion2_e;      // '<S262>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S262>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S263>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S263>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S263>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S264>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S264>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S264>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S265>/Data Type Conversion1'
  real32_T DataTypeConversion2_gn;     // '<S265>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S265>/Data Type Conversion3'
  real32_T DataTypeConversion1_j;      // '<S274>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S274>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S274>/Data Type Conversion3'
  real32_T DataTypeConversion1_n;      // '<S275>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S275>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S275>/Data Type Conversion3'
  real32_T DataTypeConversion1_lt;     // '<S276>/Data Type Conversion1'
  real32_T DataTypeConversion2_ev;     // '<S276>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S276>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S277>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S277>/Data Type Conversion2'
  real32_T DataTypeConversion3_m;      // '<S277>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S286>/Data Type Conversion1'
  real32_T DataTypeConversion2_h;      // '<S286>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S286>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S287>/Data Type Conversion1'
  real32_T DataTypeConversion2_fi;     // '<S287>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S287>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S288>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S288>/Data Type Conversion2'
  real32_T DataTypeConversion3_bn;     // '<S288>/Data Type Conversion3'
  real32_T DataTypeConversion1_bn;     // '<S289>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S289>/Data Type Conversion2'
  real32_T DataTypeConversion3_k2;     // '<S289>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S298>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S298>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S298>/Data Type Conversion3'
  real32_T DataTypeConversion1_c0;     // '<S299>/Data Type Conversion1'
  real32_T DataTypeConversion2_eb;     // '<S299>/Data Type Conversion2'
  real32_T DataTypeConversion3_or;     // '<S299>/Data Type Conversion3'
  real32_T DataTypeConversion1_ls;     // '<S300>/Data Type Conversion1'
  real32_T DataTypeConversion2_kr;     // '<S300>/Data Type Conversion2'
  real32_T DataTypeConversion3_ln;     // '<S300>/Data Type Conversion3'
  real32_T DataTypeConversion1_bo;     // '<S301>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S301>/Data Type Conversion2'
  real32_T DataTypeConversion3_df;     // '<S301>/Data Type Conversion3'
  real32_T DataTypeConversion1_p;      // '<S310>/Data Type Conversion1'
  real32_T DataTypeConversion2_hz;     // '<S310>/Data Type Conversion2'
  real32_T DataTypeConversion3_je;     // '<S310>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S311>/Data Type Conversion1'
  real32_T DataTypeConversion2_k0;     // '<S311>/Data Type Conversion2'
  real32_T DataTypeConversion3_og;     // '<S311>/Data Type Conversion3'
  real32_T DataTypeConversion1_jv;     // '<S312>/Data Type Conversion1'
  real32_T DataTypeConversion2_fr;     // '<S312>/Data Type Conversion2'
  real32_T DataTypeConversion3_he;     // '<S312>/Data Type Conversion3'
  real32_T DataTypeConversion1_ko;     // '<S313>/Data Type Conversion1'
  real32_T DataTypeConversion2_m;      // '<S313>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S313>/Data Type Conversion3'
  real32_T DataTypeConversion1_f;      // '<S323>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S323>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S323>/Data Type Conversion3'
  real32_T DataTypeConversion1_km;     // '<S324>/Data Type Conversion1'
  real32_T DataTypeConversion2_av;     // '<S324>/Data Type Conversion2'
  real32_T DataTypeConversion3_gg;     // '<S324>/Data Type Conversion3'
  real32_T DataTypeConversion1_gd;     // '<S325>/Data Type Conversion1'
  real32_T DataTypeConversion2_gw;     // '<S325>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S325>/Data Type Conversion3'
  real32_T DataTypeConversion1_dr;     // '<S326>/Data Type Conversion1'
  real32_T DataTypeConversion2_gu;     // '<S326>/Data Type Conversion2'
  real32_T DataTypeConversion3_mp;     // '<S326>/Data Type Conversion3'
  real32_T DataTypeConversion_er;      // '<S199>/Data Type Conversion'
  real32_T DataTypeConversion_k0;      // '<S173>/Data Type Conversion'
  int32_T SFunction_f;                 // '<S344>/S-Function'
  int32_T SFunction_c;                 // '<S348>/S-Function'
  B_MovingRMS1_imperix_M2C_NN_c_T MovingRMS2;// '<S1>/Moving RMS1'
  B_MovingRMS1_imperix_M2C_NN_c_T MovingRMS1;// '<S1>/Moving RMS1'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_M2C_NN_control_202_T {
  real_T Integrator_DSTATE;            // '<S138>/Integrator'
  real_T SFunction_DSTATE;             // '<S342>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S344>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S348>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S149>/S-Function'
  real_T SFunction_DSTATE_ea;          // '<S151>/S-Function'
  real_T SFunction_DSTATE_m;           // '<S153>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S155>/S-Function'
  real_T SFunction_DSTATE_hw;          // '<S157>/S-Function'
  real_T SFunction_DSTATE_my;          // '<S159>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S336>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S161>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S163>/S-Function'
  real_T SFunction_DSTATE_fo;          // '<S165>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S167>/S-Function'
  real_T SFunction_DSTATE_cm;          // '<S169>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S171>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S175>/S-Function'
  real_T SFunction_DSTATE_fos;         // '<S177>/S-Function'
  real_T SFunction_DSTATE_cn;          // '<S179>/S-Function'
  real_T SFunction_DSTATE_fox;         // '<S181>/S-Function'
  real_T SFunction_DSTATE_ce;          // '<S183>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S185>/S-Function'
  real_T SFunction_DSTATE_jn;          // '<S187>/S-Function'
  real_T SFunction_DSTATE_ap;          // '<S189>/S-Function'
  real_T SFunction_DSTATE_fw;          // '<S340>/S-Function'
  real_T SFunction_DSTATE_o3;          // '<S338>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S191>/S-Function'
  real_T SFunction_DSTATE_fm;          // '<S193>/S-Function'
  real_T SFunction_DSTATE_ev;          // '<S195>/S-Function'
  real_T SFunction_DSTATE_ec;          // '<S197>/S-Function'
  real_T SFunction_DSTATE_ei;          // '<S201>/S-Function'
  real_T SFunction_DSTATE_dp;          // '<S203>/S-Function'
  real_T SFunction_DSTATE_hm;          // '<S205>/S-Function'
  real_T SFunction_DSTATE_du;          // '<S207>/S-Function'
  real_T SFunction_DSTATE_gm;          // '<S209>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S211>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S213>/S-Function'
  real_T SFunction_DSTATE_dt;          // '<S215>/S-Function'
  real_T SFunction_DSTATE_at;          // '<S217>/S-Function'
  real_T SFunction_DSTATE_gl;          // '<S219>/S-Function'
  real_T SFunction_DSTATE_fk;          // '<S221>/S-Function'
  real_T SFunction_DSTATE_ie;          // '<S223>/S-Function'
  real_T SFunction_DSTATE_a5;          // '<S225>/S-Function'
  real_T SFunction_DSTATE_ov;          // '<S227>/S-Function'
  real_T SFunction_DSTATE_pw;          // '<S229>/S-Function'
  real_T SFunction_DSTATE_pn;          // '<S231>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S233>/S-Function'
  real_T SFunction_DSTATE_lq;          // '<S235>/S-Function'
  real_T SFunction_DSTATE_ny;          // '<S237>/S-Function'
  real_T SFunction_DSTATE_cnk;         // '<S239>/S-Function'
  real_T SFunction_DSTATE_co;          // '<S241>/S-Function'
  real_T SFunction_DSTATE_md;          // '<S243>/S-Function'
  real_T SFunction_DSTATE_atl;         // '<S245>/S-Function'
  real_T SFunction_DSTATE_bz;          // '<S247>/S-Function'
  real_T SFunction_DSTATE_i3;          // '<S249>/S-Function'
  real_T SFunction_DSTATE_g4;          // '<S251>/S-Function'
  real_T SFunction_DSTATE_nb;          // '<S253>/S-Function'
  real_T SFunction_DSTATE_hl;          // '<S255>/S-Function'
  real_T SFunction_DSTATE_bo;          // '<S257>/S-Function'
  real_T SFunction_DSTATE_ej;          // '<S259>/S-Function'
  real_T SFunction_DSTATE_ck;          // '<S261>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S135>/S-Function'
  real_T SFunction_DSTATE_ms;          // '<S346>/S-Function'
  real_T SFunction_DSTATE_nd;          // '<S199>/S-Function'
  real_T SFunction_DSTATE_et;          // '<S173>/S-Function'
  real_T iq_ref_Buffer0;               // synthesized block
  real_T TmpRTBAtSpeedControlProportiona[2];// synthesized block
  real_T TmpRTBAtSpeedControlProportio_l;// synthesized block
  real_T a;                // '<S1>/TEB Control Proportional Integral Control1'
  real_T u;                // '<S1>/TEB Control Proportional Integral Control1'
  real_T p1;                           // '<S95>/MATLAB Function1'
  real_T p2;                           // '<S95>/MATLAB Function1'
  real_T p3;                           // '<S95>/MATLAB Function1'
  real_T p4;                           // '<S95>/MATLAB Function1'
  real_T a_n;            // '<S1>/Speed Control Proportional Integral Control1'
  real_T u_i;            // '<S1>/Speed Control Proportional Integral Control1'
  real_T ad;    // '<S1>/Output Current Control Proportional Integral Control1'
  real_T ud;    // '<S1>/Output Current Control Proportional Integral Control1'
  real_T aq;    // '<S1>/Output Current Control Proportional Integral Control1'
  real_T uq;    // '<S1>/Output Current Control Proportional Integral Control1'
  real_T Tinv[36];                     // '<S1>/MATLAB Function4'
  real_T a_d;     // '<S1>/Input Current Control Proportional Integral Control'
  real_T u_n;     // '<S1>/Input Current Control Proportional Integral Control'
  real_T psir0;                        // '<S1>/Flux obs2'
  real_T ialbet_delr[2];              // '<S1>/Circulating Current Control MPC'
  boolean_T Initial_FirstOutputTime;   // '<S138>/Initial'
  DW_MovingRMS1_imperix_M2C_NN__T MovingRMS2;// '<S1>/Moving RMS1'
  DW_MovingRMS1_imperix_M2C_NN__T MovingRMS1;// '<S1>/Moving RMS1'
};

// Parameters (default storage)
struct P_imperix_M2C_NN_control_2024_T_ {
  real_T A[30];                        // Variable: A
                                          //  Referenced by: '<S1>/Gain1'

  real_T A_cc[8];                      // Variable: A_cc
                                          //  Referenced by: '<S1>/Circulating Current Control MPC'

  real_T C;                            // Variable: C
                                          //  Referenced by:
                                          //    '<S1>/Gain39'
                                          //    '<S1>/Gain40'
                                          //    '<S28>/Gain3'

  real_T N[12];                        // Variable: N
                                          //  Referenced by: '<S28>/Gain2'

  real_T T[36];                        // Variable: T
                                          //  Referenced by:
                                          //    '<S1>/Gain41'
                                          //    '<S1>/Gain61'

  real_T Tab[6];                       // Variable: Tab
                                          //  Referenced by: '<S1>/P'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by: '<S28>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S28>/Gain1'

  real_T b_cc[4];                      // Variable: b_cc
                                          //  Referenced by: '<S1>/Circulating Current Control MPC'

  real_T n;                            // Variable: n
                                          //  Referenced by:
                                          //    '<S1>/Gain39'
                                          //    '<S1>/Gain40'
                                          //    '<S1>/Gain6'

  real_T prmt_EST[3];                  // Variable: prmt_EST
                                          //  Referenced by: '<S1>/Flux obs2'

  real_T prmt_FC[4];                   // Variable: prmt_FC
                                          //  Referenced by: '<S1>/Flux Control Proportional Control1'

  real_T prmt_ICC[5];                  // Variable: prmt_ICC
                                          //  Referenced by: '<S1>/Input Current Control Proportional Integral Control'

  real_T prmt_OCC[5];                  // Variable: prmt_OCC
                                          //  Referenced by: '<S1>/Output Current Control Proportional Integral Control1'

  real_T prmt_SC[4];                   // Variable: prmt_SC
                                          //  Referenced by: '<S1>/Speed Control Proportional Integral Control1'

  real_T prmt_TEB[10];                 // Variable: prmt_TEB
                                          //  Referenced by: '<S1>/TEB Control Proportional Integral Control1'

  real_T IntegratorwithWrappedStateDiscr;
                              // Mask Parameter: IntegratorwithWrappedStateDiscr
                                 //  Referenced by:
                                 //    '<S139>/Constant'
                                 //    '<S141>/Bias'
                                 //    '<S141>/Gain'
                                 //    '<S141>/Gain1'

  real_T IntegratorwithWrappedStateDis_p;
                              // Mask Parameter: IntegratorwithWrappedStateDis_p
                                 //  Referenced by:
                                 //    '<S140>/Constant'
                                 //    '<S141>/Gain'
                                 //    '<S141>/Gain1'

  real_T IntegratorwithWrappedStateDis_g;
                              // Mask Parameter: IntegratorwithWrappedStateDis_g
                                 //  Referenced by: '<S138>/Initial'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S116>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S132>/ADC'

  real_T ADC_P8_e;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S110>/ADC'

  real_T ADC_P8_ez;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S118>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S112>/ADC'

  real_T ADC_P8_h;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S114>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S128>/ADC'

  real_T ADC_P8_f;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S130>/ADC'

  real_T ADC_P8_kb;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S120>/ADC'

  real_T ADC_P8_i;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S108>/ADC'

  real_T ADC_P8_is;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S122>/ADC'

  real_T ADC_P8_j;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S124>/ADC'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S28>/Constant'

  real_T Gain3_Gain[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S142>/Gain3'

  real_T Gain3_Gain_n[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S350>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S350>/Gain1'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S138>/Integrator'

  real_T Gain31_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain31'

  real_T ADC_P8_kp;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S126>/ADC'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S342>/S-Function'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S1>/Gain8'

  real_T SFunction_P17_g;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S344>/S-Function'

  real_T iq_ref_InitialCondition;      // Expression: 0
                                          //  Referenced by:

  real_T SFunction_P17_gm;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S348>/S-Function'

  real_T Gain84_Gain;                  // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain84'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S28>/Constant1'

  real_T Gain3_Gain_j[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S143>/Gain3'

  real_T Gain17_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain17'

  real_T Constant2_Value;              // Expression: 520
                                          //  Referenced by: '<S1>/Constant2'

  real_T Constant1_Value_l;            // Expression: 0
                                          //  Referenced by: '<S1>/Constant1'

  real_T Gain3_Gain_nb[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S17>/Gain3'

  real_T Gain_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain'

  real_T Gain19_Gain;                  // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain19'

  real_T Constant13_Value;             // Expression: 520
                                          //  Referenced by: '<S1>/Constant13'

  real_T SFunction_P17_gu;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S336>/S-Function'

  real_T Constant14_Value;             // Expression: 520
                                          //  Referenced by: '<S1>/Constant14'

  real_T Gain54_Gain;                  // Expression: 3
                                          //  Referenced by: '<S1>/Gain54'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S340>/S-Function'

  real_T SFunction_P17_k;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S338>/S-Function'

  real_T Gain21_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain21'

  real_T Gain3_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S1>/Gain3'

  real_T Gain25_Gain;                  // Expression: 100/520
                                          //  Referenced by: '<S1>/Gain25'

  real_T Constant3_Value;              // Expression: 1
                                          //  Referenced by: '<S1>/Constant3'

  real_T SFunction_P17_p;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S346>/S-Function'

  real_T Gain20_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain20'

  real_T Gain9_Gain;                   // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain9'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S31>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S262>/phase'

  real_T phase_Value_b;                // Expression: PHASE
                                          //  Referenced by: '<S263>/phase'

  real_T phase_Value_nr;               // Expression: PHASE
                                          //  Referenced by: '<S264>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S265>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S274>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S275>/phase'

  real_T phase_Value_by;               // Expression: PHASE
                                          //  Referenced by: '<S276>/phase'

  real_T phase_Value_bys;              // Expression: PHASE
                                          //  Referenced by: '<S277>/phase'

  real_T Gain1_Gain_l;                 // Expression: -1
                                          //  Referenced by: '<S92>/Gain1'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S286>/phase'

  real_T phase_Value_oc;               // Expression: PHASE
                                          //  Referenced by: '<S287>/phase'

  real_T phase_Value_i0;               // Expression: PHASE
                                          //  Referenced by: '<S288>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S289>/phase'

  real_T Gain3_Gain_c;                 // Expression: -1
                                          //  Referenced by: '<S93>/Gain3'

  real_T phase_Value_bj;               // Expression: PHASE
                                          //  Referenced by: '<S298>/phase'

  real_T phase_Value_d;                // Expression: PHASE
                                          //  Referenced by: '<S299>/phase'

  real_T phase_Value_bm;               // Expression: PHASE
                                          //  Referenced by: '<S300>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S301>/phase'

  real_T Gain3_Gain_f;                 // Expression: -1
                                          //  Referenced by: '<S94>/Gain3'

  real_T phase_Value_lt;               // Expression: PHASE
                                          //  Referenced by: '<S310>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S311>/phase'

  real_T phase_Value_n1;               // Expression: PHASE
                                          //  Referenced by: '<S312>/phase'

  real_T phase_Value_cv;               // Expression: PHASE
                                          //  Referenced by: '<S313>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S323>/phase'

  real_T phase_Value_n13;              // Expression: PHASE
                                          //  Referenced by: '<S324>/phase'

  real_T phase_Value_e;                // Expression: PHASE
                                          //  Referenced by: '<S325>/phase'

  real_T phase_Value_g;                // Expression: PHASE
                                          //  Referenced by: '<S326>/phase'

  real_T Constant4_Value;              // Expression: 520
                                          //  Referenced by: '<S1>/Constant4'

  real_T Gain5_Gain;                   // Expression: 1/2
                                          //  Referenced by: '<S1>/Gain5'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S147>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S147>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S147>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S267>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S267>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S267>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S269>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S269>/PWM'

  real32_T PWM_P4_m;                   // Expression: single(phase)
                                          //  Referenced by: '<S269>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S271>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S271>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S271>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S273>/PWM'

  real32_T PWM_P3_j;                   // Expression: single(duty)
                                          //  Referenced by: '<S273>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S273>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S279>/PWM'

  real32_T PWM_P3_dz;                  // Expression: single(duty)
                                          //  Referenced by: '<S279>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S279>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S281>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S281>/PWM'

  real32_T PWM_P4_gw;                  // Expression: single(phase)
                                          //  Referenced by: '<S281>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S283>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S283>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S283>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S285>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S285>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S285>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S291>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S291>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S291>/PWM'

  real32_T PWM_P2_br;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S293>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S293>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S293>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S295>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S295>/PWM'

  real32_T PWM_P4_gk;                  // Expression: single(phase)
                                          //  Referenced by: '<S295>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S297>/PWM'

  real32_T PWM_P3_jn;                  // Expression: single(duty)
                                          //  Referenced by: '<S297>/PWM'

  real32_T PWM_P4_kr;                  // Expression: single(phase)
                                          //  Referenced by: '<S297>/PWM'

  real32_T PWM_P2_b4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S303>/PWM'

  real32_T PWM_P3_p1;                  // Expression: single(duty)
                                          //  Referenced by: '<S303>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S303>/PWM'

  real32_T PWM_P2_nf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S305>/PWM'

  real32_T PWM_P3_ii;                  // Expression: single(duty)
                                          //  Referenced by: '<S305>/PWM'

  real32_T PWM_P4_m3;                  // Expression: single(phase)
                                          //  Referenced by: '<S305>/PWM'

  real32_T PWM_P2_jc;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S307>/PWM'

  real32_T PWM_P3_my;                  // Expression: single(duty)
                                          //  Referenced by: '<S307>/PWM'

  real32_T PWM_P4_hb;                  // Expression: single(phase)
                                          //  Referenced by: '<S307>/PWM'

  real32_T PWM_P2_l;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S309>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S309>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S309>/PWM'

  real32_T PWM_P2_en;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P3_jb;                  // Expression: single(duty)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P4_ax;                  // Expression: single(phase)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P2_hu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S317>/PWM'

  real32_T PWM_P3_bk;                  // Expression: single(duty)
                                          //  Referenced by: '<S317>/PWM'

  real32_T PWM_P4_d;                   // Expression: single(phase)
                                          //  Referenced by: '<S317>/PWM'

  real32_T PWM_P2_fi;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S319>/PWM'

  real32_T PWM_P3_hx;                  // Expression: single(duty)
                                          //  Referenced by: '<S319>/PWM'

  real32_T PWM_P4_kt;                  // Expression: single(phase)
                                          //  Referenced by: '<S319>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S321>/PWM'

  real32_T PWM_P3_pz;                  // Expression: single(duty)
                                          //  Referenced by: '<S321>/PWM'

  real32_T PWM_P4_gq;                  // Expression: single(phase)
                                          //  Referenced by: '<S321>/PWM'

  real32_T PWM_P2_ku;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S328>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S328>/PWM'

  real32_T PWM_P4_im;                  // Expression: single(phase)
                                          //  Referenced by: '<S328>/PWM'

  real32_T PWM_P2_n0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S330>/PWM'

  real32_T PWM_P3_j1;                  // Expression: single(duty)
                                          //  Referenced by: '<S330>/PWM'

  real32_T PWM_P4_au;                  // Expression: single(phase)
                                          //  Referenced by: '<S330>/PWM'

  real32_T PWM_P2_jq;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S332>/PWM'

  real32_T PWM_P3_is;                  // Expression: single(duty)
                                          //  Referenced by: '<S332>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S332>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S334>/PWM'

  real32_T PWM_P3_h3;                  // Expression: single(duty)
                                          //  Referenced by: '<S334>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S334>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S116>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S116>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S132>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S132>/ADC'

  real32_T ADC_P2_d;                   // Expression: single(gain)
                                          //  Referenced by: '<S110>/ADC'

  real32_T ADC_P3_o;                   // Expression: single(offset)
                                          //  Referenced by: '<S110>/ADC'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P3_k;                   // Expression: single(offset)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S112>/ADC'

  real32_T ADC_P3_a;                   // Expression: single(offset)
                                          //  Referenced by: '<S112>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S114>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S114>/ADC'

  real32_T ADC_P2_j;                   // Expression: single(gain)
                                          //  Referenced by: '<S128>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S128>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S130>/ADC'

  real32_T ADC_P3_p;                   // Expression: single(offset)
                                          //  Referenced by: '<S130>/ADC'

  real32_T ADC_P2_g;                   // Expression: single(gain)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P3_nl;                  // Expression: single(offset)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P3_g;                   // Expression: single(offset)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P3_n2;                  // Expression: single(offset)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P2_gq;                  // Expression: single(gain)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P3_b;                   // Expression: single(offset)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S126>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S126>/ADC'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S342>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S342>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S342>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S342>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S342>/S-Function'

  real32_T SFunction_P3_a;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S344>/S-Function'

  real32_T SFunction_P4_m;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S344>/S-Function'

  real32_T SFunction_P5_j;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S344>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(0)
                                          //  Referenced by: '<S344>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S344>/S-Function'

  real32_T SFunction_P3_f;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S348>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S348>/S-Function'

  real32_T SFunction_P5_d;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S348>/S-Function'

  real32_T SFunction_P6_di;            // Expression: single(0)
                                          //  Referenced by: '<S348>/S-Function'

  real32_T SFunction_P7_ic;            // Expression: single(0)
                                          //  Referenced by: '<S348>/S-Function'

  real32_T SFunction_P6_d5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S149>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S149>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S151>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S151>/S-Function'

  real32_T SFunction_P6_d5c;           // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S153>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S153>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P3_j;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S336>/S-Function'

  real32_T SFunction_P4_k;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S336>/S-Function'

  real32_T SFunction_P5_h;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S336>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(0)
                                          //  Referenced by: '<S336>/S-Function'

  real32_T SFunction_P7_n;             // Expression: single(0)
                                          //  Referenced by: '<S336>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T SFunction_P12_ca;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T SFunction_P12_ip;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T SFunction_P6_l;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T SFunction_P12_kf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T SFunction_P6_oz;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P6_eh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S169>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S169>/S-Function'

  real32_T SFunction_P6_e4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S171>/S-Function'

  real32_T SFunction_P12_nn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S171>/S-Function'

  real32_T SFunction_P6_nj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S175>/S-Function'

  real32_T SFunction_P12_on;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S175>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S177>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S177>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S179>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S179>/S-Function'

  real32_T SFunction_P6_ef;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S181>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S181>/S-Function'

  real32_T SFunction_P6_fm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S183>/S-Function'

  real32_T SFunction_P12_kd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S183>/S-Function'

  real32_T SFunction_P6_ly;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S185>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S185>/S-Function'

  real32_T SFunction_P6_ea;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S187>/S-Function'

  real32_T SFunction_P12_gx;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S187>/S-Function'

  real32_T SFunction_P6_dd;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S189>/S-Function'

  real32_T SFunction_P12_oo;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S189>/S-Function'

  real32_T SFunction_P3_ae;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S340>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S340>/S-Function'

  real32_T SFunction_P5_g;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S340>/S-Function'

  real32_T SFunction_P6_ap;            // Expression: single(0)
                                          //  Referenced by: '<S340>/S-Function'

  real32_T SFunction_P7_nq;            // Expression: single(0)
                                          //  Referenced by: '<S340>/S-Function'

  real32_T SFunction_P3_b;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S338>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S338>/S-Function'

  real32_T SFunction_P5_c;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S338>/S-Function'

  real32_T SFunction_P6_ce;            // Expression: single(0)
                                          //  Referenced by: '<S338>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S338>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S191>/S-Function'

  real32_T SFunction_P12_hr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S191>/S-Function'

  real32_T SFunction_P6_bx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S193>/S-Function'

  real32_T SFunction_P12_ks;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S193>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S195>/S-Function'

  real32_T SFunction_P12_la;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S195>/S-Function'

  real32_T SFunction_P6_d1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S197>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S197>/S-Function'

  real32_T SFunction_P6_bv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S201>/S-Function'

  real32_T SFunction_P12_ax;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S201>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S203>/S-Function'

  real32_T SFunction_P12_ge;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S203>/S-Function'

  real32_T SFunction_P6_cy;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S205>/S-Function'

  real32_T SFunction_P12_bi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S205>/S-Function'

  real32_T SFunction_P6_kq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P12_hd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P6_l3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P12_kr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P12_hi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P6_m3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P12_gt;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P6_ob;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P12_dg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P6_lf;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P12_iv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P6_cb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P6_ou;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P12_ic;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P6_eq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P12_cd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P6_jx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P12_hj;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P6_j1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P12_na;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P12_al;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P6_ah;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P12_li;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P6_cr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P12_ny;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P6_fr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P12_ex;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P6_hg;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P12_au;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P6_mn;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P6_nm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P12_mh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P6_hf;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P12_cc;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P6_hj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P12_k3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P6_aa;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P12_iq;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P6_cc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P12_ks3;          // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P6_nh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P12_dc;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P6_je;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P12_eg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P6_n3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P12_hz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P6_nv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S257>/S-Function'

  real32_T SFunction_P12_cf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S257>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S259>/S-Function'

  real32_T SFunction_P12_ns;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S259>/S-Function'

  real32_T SFunction_P6_er;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S261>/S-Function'

  real32_T SFunction_P12_dr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S261>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S135>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S135>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S137>/CLK1'

  real32_T SFunction_P3_i;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S346>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S346>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S346>/S-Function'

  real32_T SFunction_P6_ci;            // Expression: single(0)
                                          //  Referenced by: '<S346>/S-Function'

  real32_T SFunction_P7_l;             // Expression: single(0)
                                          //  Referenced by: '<S346>/S-Function'

  real32_T SFunction_P6_gg;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S199>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S199>/S-Function'

  real32_T SFunction_P6_hx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S173>/S-Function'

  real32_T SFunction_P12_jv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S173>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S342>/S-Function'

  uint32_T SFunction_P10_e;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S344>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S348>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S149>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S149>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S151>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S151>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S153>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S153>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S155>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S155>/S-Function'

  uint32_T SFunction_P7_e;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S157>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S157>/S-Function'

  uint32_T SFunction_P7_ae;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S159>/S-Function'

  uint32_T SFunction_P13_f3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S159>/S-Function'

  uint32_T SFunction_P10_o;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S336>/S-Function'

  uint32_T SFunction_P7_b1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S161>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S161>/S-Function'

  uint32_T SFunction_P7_ev;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S163>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S163>/S-Function'

  uint32_T SFunction_P7_mi;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S165>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S165>/S-Function'

  uint32_T SFunction_P7_mk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S167>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S167>/S-Function'

  uint32_T SFunction_P7_n0;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S169>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S169>/S-Function'

  uint32_T SFunction_P7_g;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S171>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S171>/S-Function'

  uint32_T SFunction_P7_gj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S175>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S175>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S177>/S-Function'

  uint32_T SFunction_P13_kf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S177>/S-Function'

  uint32_T SFunction_P7_a5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S179>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S179>/S-Function'

  uint32_T SFunction_P7_dw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S181>/S-Function'

  uint32_T SFunction_P13_bv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S181>/S-Function'

  uint32_T SFunction_P7_d3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S183>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S183>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S185>/S-Function'

  uint32_T SFunction_P13_bz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S185>/S-Function'

  uint32_T SFunction_P7_dv;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S187>/S-Function'

  uint32_T SFunction_P13_mh;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S187>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S189>/S-Function'

  uint32_T SFunction_P13_fe;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S189>/S-Function'

  uint32_T SFunction_P10_b;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S340>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S338>/S-Function'

  uint32_T SFunction_P7_ci;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S191>/S-Function'

  uint32_T SFunction_P13_nq;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S191>/S-Function'

  uint32_T SFunction_P7_fk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S193>/S-Function'

  uint32_T SFunction_P13_b2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S193>/S-Function'

  uint32_T SFunction_P7_mp;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S195>/S-Function'

  uint32_T SFunction_P13_ac;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S195>/S-Function'

  uint32_T SFunction_P7_k;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S197>/S-Function'

  uint32_T SFunction_P13_c3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S197>/S-Function'

  uint32_T SFunction_P7_cc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S201>/S-Function'

  uint32_T SFunction_P13_mg;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S201>/S-Function'

  uint32_T SFunction_P7_ll;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S203>/S-Function'

  uint32_T SFunction_P13_ai;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S203>/S-Function'

  uint32_T SFunction_P7_bq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S205>/S-Function'

  uint32_T SFunction_P13_cn;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S205>/S-Function'

  uint32_T SFunction_P7_kq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P13_lu;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P7_do;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P13_lz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P7_af;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P13_ab;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P7_cx;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P13_ce;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P7_od;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P7_bk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P13_p3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P7_dt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P7_bu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P13_bl;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P7_ja;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P13_b0;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P7_g4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P13_jw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P7_id;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P13_ez;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P7_a1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P13_a1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P7_jc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P13_f4;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P7_gh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P13_l3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P7_be;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P13_nv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P7_ai;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P13_os;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P13_oy;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P7_i4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P13_hb;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P7_i4z;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P7_f5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P13_ct;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P7_f5h;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P13_f44;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P7_fu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P13_n5;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P7_ki;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P13_lp;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P7_e5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P13_dg;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P7_os;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P13_io;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P7_p;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S257>/S-Function'

  uint32_T SFunction_P13_gk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S257>/S-Function'

  uint32_T SFunction_P7_is;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S259>/S-Function'

  uint32_T SFunction_P13_if;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S259>/S-Function'

  uint32_T SFunction_P7_d2;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S261>/S-Function'

  uint32_T SFunction_P13_pz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S261>/S-Function'

  uint32_T SFunction_P10_c;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S346>/S-Function'

  uint32_T SFunction_P7_ji;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S199>/S-Function'

  uint32_T SFunction_P13_fk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S199>/S-Function'

  uint32_T SFunction_P7_fd;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S173>/S-Function'

  uint32_T SFunction_P13_ot;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S173>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P9_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P5_c4;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P1_p;                    // Expression: int16(lane)
                                          //  Referenced by: '<S273>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S273>/PWM'

  int16_T PWM_P6_k;                    // Expression: int16(rate)
                                          //  Referenced by: '<S273>/PWM'

  int16_T PWM_P7_bv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S273>/PWM'

  int16_T PWM_P8_a;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S273>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S273>/PWM'

  int16_T PWM_P1_hp;                   // Expression: int16(lane)
                                          //  Referenced by: '<S279>/PWM'

  int16_T PWM_P5_m;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S279>/PWM'

  int16_T PWM_P6_hr;                   // Expression: int16(rate)
                                          //  Referenced by: '<S279>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S279>/PWM'

  int16_T PWM_P8_af;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S279>/PWM'

  int16_T PWM_P9_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S279>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S281>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S281>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S281>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S281>/PWM'

  int16_T PWM_P8_i;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S281>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S281>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S283>/PWM'

  int16_T PWM_P5_ce;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S283>/PWM'

  int16_T PWM_P6_g;                    // Expression: int16(rate)
                                          //  Referenced by: '<S283>/PWM'

  int16_T PWM_P7_e;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S283>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S283>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S283>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S285>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S285>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S285>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S285>/PWM'

  int16_T PWM_P8_kl;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S285>/PWM'

  int16_T PWM_P9_p3;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S285>/PWM'

  int16_T PWM_P1_kk;                   // Expression: int16(lane)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P5_b;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P6_f1;                   // Expression: int16(rate)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P7_j;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P8_ee;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P9_pw;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P1_f;                    // Expression: int16(lane)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P5_iv;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P1_c;                    // Expression: int16(lane)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P6_eu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P7_eu;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P9_o5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P1_hs;                   // Expression: int16(lane)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P5_me;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P6_ma;                   // Expression: int16(rate)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P7_cz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P8_ek;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P1_c4;                   // Expression: int16(lane)
                                          //  Referenced by: '<S303>/PWM'

  int16_T PWM_P5_bj;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S303>/PWM'

  int16_T PWM_P6_o;                    // Expression: int16(rate)
                                          //  Referenced by: '<S303>/PWM'

  int16_T PWM_P7_mm;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S303>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S303>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S303>/PWM'

  int16_T PWM_P1_cj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S305>/PWM'

  int16_T PWM_P5_hb;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S305>/PWM'

  int16_T PWM_P6_ka;                   // Expression: int16(rate)
                                          //  Referenced by: '<S305>/PWM'

  int16_T PWM_P7_ob;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S305>/PWM'

  int16_T PWM_P8_b;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S305>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S305>/PWM'

  int16_T PWM_P1_f0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S307>/PWM'

  int16_T PWM_P5_a0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S307>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S307>/PWM'

  int16_T PWM_P7_n;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S307>/PWM'

  int16_T PWM_P8_oi;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S307>/PWM'

  int16_T PWM_P9_ax;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S307>/PWM'

  int16_T PWM_P1_cg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P5_mx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P7_n1;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P8_op;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P9_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P5_ke;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P6_gz;                   // Expression: int16(rate)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P7_ow;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P9_no;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P1_m;                    // Expression: int16(lane)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P6_gp;                   // Expression: int16(rate)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P7_jf;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P8_ea;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P9_nq;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P1_pa;                   // Expression: int16(lane)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P6_nh;                   // Expression: int16(rate)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P9_iz;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P1_jb;                   // Expression: int16(lane)
                                          //  Referenced by: '<S321>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S321>/PWM'

  int16_T PWM_P6_nd;                   // Expression: int16(rate)
                                          //  Referenced by: '<S321>/PWM'

  int16_T PWM_P7_nx;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S321>/PWM'

  int16_T PWM_P8_ox;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S321>/PWM'

  int16_T PWM_P9_ig;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S321>/PWM'

  int16_T PWM_P1_mc;                   // Expression: int16(lane)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P5_b4;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P6_ge;                   // Expression: int16(rate)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P7_io;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P9_f1;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S330>/PWM'

  int16_T PWM_P5_cs;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S330>/PWM'

  int16_T PWM_P6_gu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S330>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S330>/PWM'

  int16_T PWM_P8_g0;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S330>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S330>/PWM'

  int16_T PWM_P1_pg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S332>/PWM'

  int16_T PWM_P5_hi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S332>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S332>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S332>/PWM'

  int16_T PWM_P8_kg;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S332>/PWM'

  int16_T PWM_P9_ak;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S332>/PWM'

  int16_T PWM_P1_c2;                   // Expression: int16(lane)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P5_kh;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P6_c;                    // Expression: int16(rate)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P7_gf;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P8_hk;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P9_np;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S334>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S116>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P6_j;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P6_d;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P9_pw;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P4_pu;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P6_ds;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P6_jj;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S112>/ADC'

  int16_T ADC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P4_fs;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S114>/ADC'

  int16_T ADC_P1_gi;                   // Expression: int16(channel)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P6_jm;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P9_a;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P1_gp;                   // Expression: int16(channel)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P4_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P6_kz;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P4_my;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P6_da;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P4_fq;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P6_h;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P1_ji;                   // Expression: int16(channel)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P4_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P6_g;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P9_p0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P9_e;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S126>/ADC'

  int16_T SFunction_P2_h;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S342>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S344>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S348>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S149>/S-Function'

  int16_T SFunction_P3_h;              // Expression: int16(0)
                                          //  Referenced by: '<S149>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S151>/S-Function'

  int16_T SFunction_P3_mm;             // Expression: int16(0)
                                          //  Referenced by: '<S151>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S153>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S153>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S155>/S-Function'

  int16_T SFunction_P3_bb;             // Expression: int16(0)
                                          //  Referenced by: '<S155>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S157>/S-Function'

  int16_T SFunction_P3_k;              // Expression: int16(0)
                                          //  Referenced by: '<S157>/S-Function'

  int16_T SFunction_P2_ho;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S159>/S-Function'

  int16_T SFunction_P3_a5;             // Expression: int16(0)
                                          //  Referenced by: '<S159>/S-Function'

  int16_T SFunction_P2_ad;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S336>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S161>/S-Function'

  int16_T SFunction_P3_c4;             // Expression: int16(0)
                                          //  Referenced by: '<S161>/S-Function'

  int16_T SFunction_P2_hj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S163>/S-Function'

  int16_T SFunction_P3_an;             // Expression: int16(0)
                                          //  Referenced by: '<S163>/S-Function'

  int16_T SFunction_P2_ji;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S165>/S-Function'

  int16_T SFunction_P3_f4;             // Expression: int16(0)
                                          //  Referenced by: '<S165>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S167>/S-Function'

  int16_T SFunction_P3_l;              // Expression: int16(0)
                                          //  Referenced by: '<S167>/S-Function'

  int16_T SFunction_P2_j3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S169>/S-Function'

  int16_T SFunction_P3_i0;             // Expression: int16(0)
                                          //  Referenced by: '<S169>/S-Function'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S171>/S-Function'

  int16_T SFunction_P3_fz;             // Expression: int16(0)
                                          //  Referenced by: '<S171>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S175>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S175>/S-Function'

  int16_T SFunction_P2_dd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S177>/S-Function'

  int16_T SFunction_P3_do;             // Expression: int16(0)
                                          //  Referenced by: '<S177>/S-Function'

  int16_T SFunction_P2_nc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S179>/S-Function'

  int16_T SFunction_P3_n;              // Expression: int16(0)
                                          //  Referenced by: '<S179>/S-Function'

  int16_T SFunction_P2_cw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S181>/S-Function'

  int16_T SFunction_P3_k0;             // Expression: int16(0)
                                          //  Referenced by: '<S181>/S-Function'

  int16_T SFunction_P2_fh;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S183>/S-Function'

  int16_T SFunction_P3_nm;             // Expression: int16(0)
                                          //  Referenced by: '<S183>/S-Function'

  int16_T SFunction_P2_ni;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S185>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S185>/S-Function'

  int16_T SFunction_P2_bk;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S187>/S-Function'

  int16_T SFunction_P3_ne;             // Expression: int16(0)
                                          //  Referenced by: '<S187>/S-Function'

  int16_T SFunction_P2_f0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S189>/S-Function'

  int16_T SFunction_P3_nv;             // Expression: int16(0)
                                          //  Referenced by: '<S189>/S-Function'

  int16_T SFunction_P2_ls;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S340>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S338>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S191>/S-Function'

  int16_T SFunction_P3_ja;             // Expression: int16(0)
                                          //  Referenced by: '<S191>/S-Function'

  int16_T SFunction_P2_ep;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S193>/S-Function'

  int16_T SFunction_P3_fj;             // Expression: int16(0)
                                          //  Referenced by: '<S193>/S-Function'

  int16_T SFunction_P2_ea;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S195>/S-Function'

  int16_T SFunction_P3_b2;             // Expression: int16(0)
                                          //  Referenced by: '<S195>/S-Function'

  int16_T SFunction_P2_gz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S197>/S-Function'

  int16_T SFunction_P3_cr;             // Expression: int16(0)
                                          //  Referenced by: '<S197>/S-Function'

  int16_T SFunction_P2_el;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S201>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S201>/S-Function'

  int16_T SFunction_P2_gy;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S203>/S-Function'

  int16_T SFunction_P3_jb;             // Expression: int16(0)
                                          //  Referenced by: '<S203>/S-Function'

  int16_T SFunction_P2_oo;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S205>/S-Function'

  int16_T SFunction_P3_db;             // Expression: int16(0)
                                          //  Referenced by: '<S205>/S-Function'

  int16_T SFunction_P2_ec;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T SFunction_P3_ag;             // Expression: int16(0)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T SFunction_P2_me;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P3_aj;             // Expression: int16(0)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P2_mm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T SFunction_P3_lg;             // Expression: int16(0)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T SFunction_P2_lw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P3_bm;             // Expression: int16(0)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P2_nd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P3_lu;             // Expression: int16(0)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P2_k0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P3_al;             // Expression: int16(0)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P2_j0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P3_ab;             // Expression: int16(0)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P2_jv;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P3_dj;             // Expression: int16(0)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P2_fx;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P3_bq;             // Expression: int16(0)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P2_nj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P2_gv;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P2_da;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P3_mn;             // Expression: int16(0)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P2_m1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P3_mu;             // Expression: int16(0)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P2_ai;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P2_fa;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P3_g5;             // Expression: int16(0)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P2_or;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P3_op;             // Expression: int16(0)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P2_nx;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P3_fv;             // Expression: int16(0)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P2_mo;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P3_fj4;            // Expression: int16(0)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P2_mt;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P3_ft;             // Expression: int16(0)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P2_ns;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P3_gx;             // Expression: int16(0)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P2_nii;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P3_nw;             // Expression: int16(0)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P2_k01;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P3_mq;             // Expression: int16(0)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P3_dos;            // Expression: int16(0)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P2_ei;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P3_m0;             // Expression: int16(0)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P2_l1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P3_k1;             // Expression: int16(0)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P2_l5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S257>/S-Function'

  int16_T SFunction_P3_pd;             // Expression: int16(0)
                                          //  Referenced by: '<S257>/S-Function'

  int16_T SFunction_P2_n5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S259>/S-Function'

  int16_T SFunction_P3_nj;             // Expression: int16(0)
                                          //  Referenced by: '<S259>/S-Function'

  int16_T SFunction_P2_kd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S261>/S-Function'

  int16_T SFunction_P3_k4;             // Expression: int16(0)
                                          //  Referenced by: '<S261>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S137>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S137>/CLK1'

  int16_T SFunction_P2_gyn;            // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S346>/S-Function'

  int16_T SFunction_P2_mr;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S199>/S-Function'

  int16_T SFunction_P3_oc;             // Expression: int16(0)
                                          //  Referenced by: '<S199>/S-Function'

  int16_T SFunction_P2_c5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S173>/S-Function'

  int16_T SFunction_P3_jv;             // Expression: int16(0)
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P1[8];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S342>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S342>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S342>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S342>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S342>/S-Function'

  uint16_T SFunction_P1_k[12];         // Computed Parameter: SFunction_P1_k
                                          //  Referenced by: '<S344>/S-Function'

  uint16_T SFunction_P9_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S344>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S344>/S-Function'

  uint16_T SFunction_P14_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S344>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S344>/S-Function'

  uint16_T SFunction_P1_i[13];         // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S348>/S-Function'

  uint16_T SFunction_P9_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S348>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S348>/S-Function'

  uint16_T SFunction_P14_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S348>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S348>/S-Function'

  uint16_T SFunction_P1_b[6];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P14_pe[5];        // Computed Parameter: SFunction_P14_pe
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P1_g[8];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P5_eo;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P1_k4[8];         // Computed Parameter: SFunction_P1_k4
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P5_ht;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P8_d2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P14_nb[5];        // Computed Parameter: SFunction_P14_nb
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P1_g0[8];         // Computed Parameter: SFunction_P1_g0
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P5_f;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P14_ps[5];        // Computed Parameter: SFunction_P14_ps
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P1_c[8];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P11_ip;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P1_ie[5];         // Computed Parameter: SFunction_P1_ie
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P5_ev;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P14_j[5];         // Computed Parameter: SFunction_P14_j
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P1_p[13];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S336>/S-Function'

  uint16_T SFunction_P9_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S336>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S336>/S-Function'

  uint16_T SFunction_P14_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S336>/S-Function'

  uint16_T SFunction_P15_oy;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S336>/S-Function'

  uint16_T SFunction_P1_n[6];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P8_a;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P11_oe;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P1_h[5];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P8_le;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P11_ow;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P14_cg[5];        // Computed Parameter: SFunction_P14_cg
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P1_g5[3];         // Computed Parameter: SFunction_P1_g5
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P5_cs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P8_ov;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P11_it;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P1_j[4];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P8_jr;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P11_f3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P14_ho[5];        // Computed Parameter: SFunction_P14_ho
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P1_e[3];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P5_j4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P8_jt;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P1_f[6];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P14_bb[5];        // Computed Parameter: SFunction_P14_bb
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P1_kv[6];         // Computed Parameter: SFunction_P1_kv
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P5_cn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P11_ej;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P14_ir[5];        // Computed Parameter: SFunction_P14_ir
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P1_dj[6];         // Computed Parameter: SFunction_P1_dj
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P5_fg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P11_fm;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P14_ko[5];        // Computed Parameter: SFunction_P14_ko
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P1_pn[3];         // Computed Parameter: SFunction_P1_pn
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P5_el;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P8_gn;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P11_eq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P1_es[3];         // Computed Parameter: SFunction_P1_es
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P5_gj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P11_n4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P14_hoz[5];       // Computed Parameter: SFunction_P14_hoz
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P1_pg[5];         // Computed Parameter: SFunction_P1_pg
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P5_cz;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P11_fx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P1_gv[4];         // Computed Parameter: SFunction_P1_gv
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P5_hw;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P8_fg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P14_n0[5];        // Computed Parameter: SFunction_P14_n0
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P1_df[4];         // Computed Parameter: SFunction_P1_df
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P5_ec;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P8_bq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P14_nt[5];        // Computed Parameter: SFunction_P14_nt
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P1_o[9];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S340>/S-Function'

  uint16_T SFunction_P9_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S340>/S-Function'

  uint16_T SFunction_P11_cj;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S340>/S-Function'

  uint16_T SFunction_P14_fi;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S340>/S-Function'

  uint16_T SFunction_P15_f;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S340>/S-Function'

  uint16_T SFunction_P1_nt[9];         // Computed Parameter: SFunction_P1_nt
                                          //  Referenced by: '<S338>/S-Function'

  uint16_T SFunction_P9_g4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S338>/S-Function'

  uint16_T SFunction_P11_hc;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S338>/S-Function'

  uint16_T SFunction_P14_ia;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S338>/S-Function'

  uint16_T SFunction_P15_ar;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S338>/S-Function'

  uint16_T SFunction_P1_bw[5];         // Computed Parameter: SFunction_P1_bw
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P5_kv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P8_dg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P11_ea;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P14_ba[5];        // Computed Parameter: SFunction_P14_ba
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P1_cf[3];         // Computed Parameter: SFunction_P1_cf
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P5_hn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P8_lc;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P11_hd;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P14_fq[5];        // Computed Parameter: SFunction_P14_fq
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P1_nw[3];         // Computed Parameter: SFunction_P1_nw
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P5_og;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P11_kr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P14_pr[5];        // Computed Parameter: SFunction_P14_pr
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P1_m[3];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P5_oy;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P8_gs;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P11_of;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P14_prh[5];       // Computed Parameter: SFunction_P14_prh
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P1_a[5];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P5_kg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P8_m3;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P11_ky;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P14_d5[5];        // Computed Parameter: SFunction_P14_d5
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P1_mi[5];         // Computed Parameter: SFunction_P1_mi
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P8_h0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P11_lp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P14_gx[5];        // Computed Parameter: SFunction_P14_gx
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P1_pm[5];         // Computed Parameter: SFunction_P1_pm
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P5_a3;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P8_au;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P11_gi;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P14_kz[5];        // Computed Parameter: SFunction_P14_kz
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P1_cff[7];        // Computed Parameter: SFunction_P1_cff
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P5_bs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P8_ac;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P11_ga;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P14_gz[5];        // Computed Parameter: SFunction_P14_gz
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P1_k3[2];         // Computed Parameter: SFunction_P1_k3
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P5_ej;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P8_fn;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P11_pm;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P14_e[5];         // Computed Parameter: SFunction_P14_e
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P1_kn[5];         // Computed Parameter: SFunction_P1_kn
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P5_hc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P11_ni;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P14_cf[5];        // Computed Parameter: SFunction_P14_cf
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P5_oj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P14_pn[5];        // Computed Parameter: SFunction_P14_pn
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P1_ez[3];         // Computed Parameter: SFunction_P1_ez
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P5_mj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P8_jx;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P11_im;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P1_bk[3];         // Computed Parameter: SFunction_P1_bk
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P5_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P8_fv;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P11_pt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P14_lm[5];        // Computed Parameter: SFunction_P14_lm
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P1_hg[3];         // Computed Parameter: SFunction_P1_hg
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P5_c0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P1_e5[3];         // Computed Parameter: SFunction_P1_e5
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P5_jz;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P8_ap;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P11_dq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P1_po[7];         // Computed Parameter: SFunction_P1_po
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P5_ey;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P8_by;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P11_k2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P14_bs[5];        // Computed Parameter: SFunction_P14_bs
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P1_p1[7];         // Computed Parameter: SFunction_P1_p1
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P5_dh;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P8_gb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P11_j3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P14_gp[5];        // Computed Parameter: SFunction_P14_gp
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P1_eb[5];         // Computed Parameter: SFunction_P1_eb
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P5_bm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P8_lp;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P11_jj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P14_fc[5];        // Computed Parameter: SFunction_P14_fc
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P1_br[7];         // Computed Parameter: SFunction_P1_br
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P5_br;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P8_aa;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P14_gw[5];        // Computed Parameter: SFunction_P14_gw
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P1_as[5];         // Computed Parameter: SFunction_P1_as
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P5_e1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P8_df;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P11_hj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P14_jr[5];        // Computed Parameter: SFunction_P14_jr
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P1_ga[3];         // Computed Parameter: SFunction_P1_ga
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P5_j5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P8_cb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P11_ev;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P14_eu[5];        // Computed Parameter: SFunction_P14_eu
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P1_m4[5];         // Computed Parameter: SFunction_P1_m4
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P5_dt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P8_ka;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P11_b1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P14_ex[5];        // Computed Parameter: SFunction_P14_ex
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P1_pmg[5];        // Computed Parameter: SFunction_P1_pmg
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P8_p4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P11_gv;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P14_hf[5];        // Computed Parameter: SFunction_P14_hf
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P1_he[5];         // Computed Parameter: SFunction_P1_he
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P5_e1z;           // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P8_db;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P11_ai;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P14_lf[5];        // Computed Parameter: SFunction_P14_lf
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P1_l3[5];         // Computed Parameter: SFunction_P1_l3
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P5_db;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P8_ps;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P11_ez;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P14_kh[5];        // Computed Parameter: SFunction_P14_kh
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P1_fn[3];         // Computed Parameter: SFunction_P1_fn
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P5_mq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P8_fh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P11_kb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P14_hfu[5];       // Computed Parameter: SFunction_P14_hfu
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P1_cq[5];         // Computed Parameter: SFunction_P1_cq
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P5_po;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P8_cb5;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P11_ix;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P14_mf[5];        // Computed Parameter: SFunction_P14_mf
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P1_cv[5];         // Computed Parameter: SFunction_P1_cv
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P5_ow;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P8_lb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P11_bv;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P14_iz[5];        // Computed Parameter: SFunction_P14_iz
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P1_hj;            // Computed Parameter: SFunction_P1_hj
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P5_nv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P8_fz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P11_ik;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P14_e1[5];        // Computed Parameter: SFunction_P14_e1
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P1_mo[3];         // Computed Parameter: SFunction_P1_mo
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P5_pw;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P8_ly;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P11_k4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P14_pg[5];        // Computed Parameter: SFunction_P14_pg
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P1_iec[3];        // Computed Parameter: SFunction_P1_iec
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P5_nr;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P8_io;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P11_dh;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P14_hx[5];        // Computed Parameter: SFunction_P14_hx
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P1_bd[3];         // Computed Parameter: SFunction_P1_bd
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P5_ph;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P8_jp;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P11_fk;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P14_lb[5];        // Computed Parameter: SFunction_P14_lb
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P1_dz[3];         // Computed Parameter: SFunction_P1_dz
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P5_n4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P11_bg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P14_km[5];        // Computed Parameter: SFunction_P14_km
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P1_m3[8];         // Computed Parameter: SFunction_P1_m3
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P5_j0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P8_lh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P11_pf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P14_i0[5];        // Computed Parameter: SFunction_P14_i0
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P1_gm[8];         // Computed Parameter: SFunction_P1_gm
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P5_is;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P8_jo;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P11_j4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P14_iu[5];        // Computed Parameter: SFunction_P14_iu
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P1_fd;            // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S135>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S135>/S-Function'

  uint16_T SFunction_P5_ci0;           // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S135>/S-Function'

  uint16_T SFunction_P1_gy[5];         // Computed Parameter: SFunction_P1_gy
                                          //  Referenced by: '<S346>/S-Function'

  uint16_T SFunction_P9_jp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S346>/S-Function'

  uint16_T SFunction_P11_iu;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S346>/S-Function'

  uint16_T SFunction_P14_pq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S346>/S-Function'

  uint16_T SFunction_P15_j;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S346>/S-Function'

  uint16_T SFunction_P1_i0[3];         // Computed Parameter: SFunction_P1_i0
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P5_ew;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P8_be;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P11_f2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P14_at[5];        // Computed Parameter: SFunction_P14_at
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P1_ep[7];         // Computed Parameter: SFunction_P1_ep
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P5_av;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P8_ff;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P11_n4s;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P14_izn[5];       // Computed Parameter: SFunction_P14_izn
                                          //  Referenced by: '<S173>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S147>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S147>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S147>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S267>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S267>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S267>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S269>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S269>/PWM'

  boolean_T PWM_P12_b;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S269>/PWM'

  boolean_T PWM_P10_d;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S271>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S271>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S271>/PWM'

  boolean_T PWM_P10_e;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S273>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S273>/PWM'

  boolean_T PWM_P12_m;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S273>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S279>/PWM'

  boolean_T PWM_P11_c0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S279>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S279>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S281>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S281>/PWM'

  boolean_T PWM_P12_bn;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S281>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S283>/PWM'

  boolean_T PWM_P11_gw;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S283>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S283>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S285>/PWM'

  boolean_T PWM_P11_k5;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S285>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S285>/PWM'

  boolean_T PWM_P10_dc;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S291>/PWM'

  boolean_T PWM_P11_l0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S291>/PWM'

  boolean_T PWM_P12_or;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S291>/PWM'

  boolean_T PWM_P10_ed;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S293>/PWM'

  boolean_T PWM_P11_kz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S293>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S293>/PWM'

  boolean_T PWM_P10_oh;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S295>/PWM'

  boolean_T PWM_P11_a;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S295>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S295>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S297>/PWM'

  boolean_T PWM_P11_gg;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S297>/PWM'

  boolean_T PWM_P12_ot;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S297>/PWM'

  boolean_T PWM_P10_b4;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S303>/PWM'

  boolean_T PWM_P11_o;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S303>/PWM'

  boolean_T PWM_P12_o4;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S303>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S305>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S305>/PWM'

  boolean_T PWM_P12_a;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S305>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S307>/PWM'

  boolean_T PWM_P11_ao;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S307>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S307>/PWM'

  boolean_T PWM_P10_be;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S309>/PWM'

  boolean_T PWM_P11_oj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S309>/PWM'

  boolean_T PWM_P12_ht;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S309>/PWM'

  boolean_T PWM_P10_bw;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P12_jc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P10_ga;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S317>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S317>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S317>/PWM'

  boolean_T PWM_P10_cy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S319>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S319>/PWM'

  boolean_T PWM_P12_js;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S319>/PWM'

  boolean_T PWM_P10_lq;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S321>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S321>/PWM'

  boolean_T PWM_P12_d;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S321>/PWM'

  boolean_T PWM_P10_dm;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S328>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S328>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S328>/PWM'

  boolean_T PWM_P10_c1;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S330>/PWM'

  boolean_T PWM_P11_db;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S330>/PWM'

  boolean_T PWM_P12_d5;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S330>/PWM'

  boolean_T PWM_P10_hb;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S332>/PWM'

  boolean_T PWM_P11_k4;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S332>/PWM'

  boolean_T PWM_P12_kd;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S332>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S334>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S334>/PWM'

  boolean_T PWM_P12_mr;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S334>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S116>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S116>/ADC'

  boolean_T ADC_P5_h;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S132>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S132>/ADC'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P5_dl;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S112>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S112>/ADC'

  boolean_T ADC_P5_b;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S114>/ADC'

  boolean_T ADC_P7_de;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S114>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S128>/ADC'

  boolean_T ADC_P7_c;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S128>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S130>/ADC'

  boolean_T ADC_P7_cc;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S130>/ADC'

  boolean_T ADC_P5_bh;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P7_o;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P5_d2;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P7_ln;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P5_o;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P5_c;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S126>/ADC'

  boolean_T ADC_P7_j;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S126>/ADC'

  boolean_T SFunction_P8_cm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S342>/S-Function'

  boolean_T SFunction_P12_he;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S342>/S-Function'

  boolean_T SFunction_P13_luf;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S342>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S342>/S-Function'

  boolean_T SFunction_P8_bd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S344>/S-Function'

  boolean_T SFunction_P12_gi;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S344>/S-Function'

  boolean_T SFunction_P13_c4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S344>/S-Function'

  boolean_T SFunction_P16_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S344>/S-Function'

  boolean_T SFunction_P8_p42;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S348>/S-Function'

  boolean_T SFunction_P12_b1;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S348>/S-Function'

  boolean_T SFunction_P13_kj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S348>/S-Function'

  boolean_T SFunction_P16_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S348>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S149>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S149>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S149>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S149>/S-Function'

  boolean_T SFunction_P4_ic;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S151>/S-Function'

  boolean_T SFunction_P9_h;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S151>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S151>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S151>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T SFunction_P9_o5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T SFunction_P10_cz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T SFunction_P4_hc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P9_oe;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P10_n;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P15_jj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P9_m;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P10_n3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P4_cr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P8_bp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S336>/S-Function'

  boolean_T SFunction_P12_em;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S336>/S-Function'

  boolean_T SFunction_P13_fw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S336>/S-Function'

  boolean_T SFunction_P16_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S336>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P9_oa;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P10_il;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P15_h1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P4_kk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P4_ao;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P10_nv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P15_ii;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P4_d1;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P9_h5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P10_ae;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P4_cq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S169>/S-Function'

  boolean_T SFunction_P9_cz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S169>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S169>/S-Function'

  boolean_T SFunction_P15_da;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S169>/S-Function'

  boolean_T SFunction_P4_jk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S171>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S171>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S171>/S-Function'

  boolean_T SFunction_P15_pv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S171>/S-Function'

  boolean_T SFunction_P4_bp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S175>/S-Function'

  boolean_T SFunction_P9_ha;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S175>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S175>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S175>/S-Function'

  boolean_T SFunction_P4_ko;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S177>/S-Function'

  boolean_T SFunction_P9_o5b;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S177>/S-Function'

  boolean_T SFunction_P10_ilz;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S177>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S177>/S-Function'

  boolean_T SFunction_P4_n;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S179>/S-Function'

  boolean_T SFunction_P9_nz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S179>/S-Function'

  boolean_T SFunction_P10_h2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S179>/S-Function'

  boolean_T SFunction_P15_hg;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S179>/S-Function'

  boolean_T SFunction_P4_jkt;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S181>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S181>/S-Function'

  boolean_T SFunction_P10_if;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S181>/S-Function'

  boolean_T SFunction_P15_ok;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S181>/S-Function'

  boolean_T SFunction_P4_ng;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S183>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S183>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S183>/S-Function'

  boolean_T SFunction_P15_h4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S183>/S-Function'

  boolean_T SFunction_P4_ni;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S185>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S185>/S-Function'

  boolean_T SFunction_P10_iq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S185>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S185>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S187>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S187>/S-Function'

  boolean_T SFunction_P10_hv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S187>/S-Function'

  boolean_T SFunction_P15_di;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S187>/S-Function'

  boolean_T SFunction_P4_o;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S189>/S-Function'

  boolean_T SFunction_P9_g0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S189>/S-Function'

  boolean_T SFunction_P10_oh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S189>/S-Function'

  boolean_T SFunction_P15_bc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S189>/S-Function'

  boolean_T SFunction_P8_dm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S340>/S-Function'

  boolean_T SFunction_P12_lu;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S340>/S-Function'

  boolean_T SFunction_P13_cv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S340>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S340>/S-Function'

  boolean_T SFunction_P8_c0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S338>/S-Function'

  boolean_T SFunction_P12_cy;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S338>/S-Function'

  boolean_T SFunction_P13_gw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S338>/S-Function'

  boolean_T SFunction_P16_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S338>/S-Function'

  boolean_T SFunction_P4_lx;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S191>/S-Function'

  boolean_T SFunction_P9_ku;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S191>/S-Function'

  boolean_T SFunction_P10_an;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S191>/S-Function'

  boolean_T SFunction_P15_b1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S191>/S-Function'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S193>/S-Function'

  boolean_T SFunction_P9_bg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S193>/S-Function'

  boolean_T SFunction_P10_j4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S193>/S-Function'

  boolean_T SFunction_P15_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S193>/S-Function'

  boolean_T SFunction_P4_m4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S195>/S-Function'

  boolean_T SFunction_P9_al;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S195>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S195>/S-Function'

  boolean_T SFunction_P15_mm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S195>/S-Function'

  boolean_T SFunction_P4_na;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S197>/S-Function'

  boolean_T SFunction_P9_kf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S197>/S-Function'

  boolean_T SFunction_P10_dz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S197>/S-Function'

  boolean_T SFunction_P15_ps;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S197>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S201>/S-Function'

  boolean_T SFunction_P9_fo;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S201>/S-Function'

  boolean_T SFunction_P10_jj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S201>/S-Function'

  boolean_T SFunction_P15_ej;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S201>/S-Function'

  boolean_T SFunction_P4_cc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P9_gq;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P10_i5;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P15_ex;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P4_et;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P9_gs;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P10_g4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P15_pu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P4_cj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P9_n2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P10_ac;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P15_ky;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P4_br;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P9_ox;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P10_nt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P15_dp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P4_ig;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P9_nh;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P10_ph;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P15_mu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P4_kw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P9_kr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P10_ii;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P15_bh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P4_d4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P9_nr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P10_hi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P4_bt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P9_ht;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P10_mp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P15_j0;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P4_on;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P10_ls;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P15_ct;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P4_bj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P9_n0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P10_nj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P15_d2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P4_hw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P9_ny;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P10_nji;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P15_ce;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P4_hb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P9_cv;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P10_iy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P15_dp1;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P4_oz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P9_iy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P10_fv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P15_cc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P4_fi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P9_l;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P10_ds;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P15_lp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P4_c1;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P9_l1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P10_o5;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P15_p1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P4_m4p;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P9_jg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P10_fp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P15_fw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P4_cd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P9_au;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P10_iij;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P15_oc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P4_iz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P9_ny4;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P10_fr;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P15_nm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P4_p4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P9_ah;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P10_oi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P15_gj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P4_f4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P9_hy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P10_g4g;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P15_oa;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P4_em;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P9_bi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P10_b5;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P15_fq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P4_dz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P9_oo;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P10_km;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P15_i4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P4_fq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P9_jz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P10_kj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P15_jv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P4_nir;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P9_p3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P10_ck;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P15_pj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P4_m0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P9_ooa;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P10_gx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P15_n1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P4_mz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P9_ez;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P10_cv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P15_nr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P4_jo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P10_ao;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P15_lv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P4_kc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P9_l3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P10_k0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P15_as;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P4_kcf;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P9_ka;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P10_b3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P15_hh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P4_i0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P9_czh;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P10_ju;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P15_j5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S137>/CLK1'

  boolean_T SFunction_P8_ca;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S346>/S-Function'

  boolean_T SFunction_P12_kg;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S346>/S-Function'

  boolean_T SFunction_P13_oa;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S346>/S-Function'

  boolean_T SFunction_P16_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S346>/S-Function'

  boolean_T SFunction_P4_ju;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S199>/S-Function'

  boolean_T SFunction_P9_ol;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S199>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S199>/S-Function'

  boolean_T SFunction_P15_l5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S199>/S-Function'

  boolean_T SFunction_P4_mi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S173>/S-Function'

  boolean_T SFunction_P9_oj;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S173>/S-Function'

  boolean_T SFunction_P10_a0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S173>/S-Function'

  boolean_T SFunction_P15_dw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S173>/S-Function'

};

// Real-time Model Data Structure
struct tag_RTM_imperix_M2C_NN_contro_T {
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

  extern P_imperix_M2C_NN_control_2024_T imperix_M2C_NN_control_2024b_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_imperix_M2C_NN_control_2024_T imperix_M2C_NN_control_2024b_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_imperix_M2C_NN_control_202_T imperix_M2C_NN_control_2024b_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void imperix_M2C_NN_control_2024b_initialize(void);
  extern void imperix_M2C_NN_control_2024b_step0(void);// Sample time: [0.000166667s, 0.0s] 
  extern void imperix_M2C_NN_control_2024b_step1(void);// Sample time: [0.001s, 0.0s] 
  extern void imperix_M2C_NN_control_2024b_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_imperix_M2C_NN_contr_T *const imperix_M2C_NN_control_2024b_M;

#ifdef __cplusplus

}

#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Constant' : Unused code path elimination
//  Block '<S1>/Data Type Conversion102' : Unused code path elimination
//  Block '<S1>/Data Type Conversion107' : Unused code path elimination
//  Block '<S1>/Data Type Conversion110' : Unused code path elimination
//  Block '<S1>/Data Type Conversion115' : Unused code path elimination
//  Block '<S1>/Data Type Conversion118' : Unused code path elimination
//  Block '<S1>/Data Type Conversion15' : Unused code path elimination
//  Block '<S1>/Data Type Conversion30' : Unused code path elimination
//  Block '<S1>/Data Type Conversion31' : Unused code path elimination
//  Block '<S1>/Data Type Conversion32' : Unused code path elimination
//  Block '<S1>/Data Type Conversion33' : Unused code path elimination
//  Block '<S1>/Data Type Conversion35' : Unused code path elimination
//  Block '<S1>/Data Type Conversion37' : Unused code path elimination
//  Block '<S1>/Data Type Conversion38' : Unused code path elimination
//  Block '<S1>/Data Type Conversion41' : Unused code path elimination
//  Block '<S1>/Data Type Conversion45' : Unused code path elimination
//  Block '<S1>/Data Type Conversion46' : Unused code path elimination
//  Block '<S1>/Data Type Conversion48' : Unused code path elimination
//  Block '<S1>/Data Type Conversion49' : Unused code path elimination
//  Block '<S1>/Data Type Conversion9' : Unused code path elimination
//  Block '<S1>/Data Type Conversion97' : Unused code path elimination
//  Block '<S1>/Data Type Conversion23' : Eliminate redundant data type conversion
//  Block '<S1>/Zero-Order Hold' : Eliminated since input and output rates are identical


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
//  '<Root>' : 'imperix_M2C_NN_control_2024b'
//  '<S1>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control'
//  '<S2>'   : 'imperix_M2C_NN_control_2024b/Plant_Model'
//  '<S3>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/3ph->RRF'
//  '<S4>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC10'
//  '<S5>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC11'
//  '<S6>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC12'
//  '<S7>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC13'
//  '<S8>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC14'
//  '<S9>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC15'
//  '<S10>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC16'
//  '<S11>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC17'
//  '<S12>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC18'
//  '<S13>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC20'
//  '<S14>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC6'
//  '<S15>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC7'
//  '<S16>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC9'
//  '<S17>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Alpha-Beta-Zero to abc'
//  '<S18>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Circulating Current Control MPC'
//  '<S19>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration'
//  '<S20>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/DQ - AlphaBeta'
//  '<S21>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Divide'
//  '<S22>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Flux Control Proportional Control1'
//  '<S23>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Flux obs2'
//  '<S24>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Ib'
//  '<S25>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Input Current Control Proportional Integral Control'
//  '<S26>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)'
//  '<S27>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/MATLAB Function4'
//  '<S28>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM'
//  '<S29>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Output Current Control Proportional Integral Control1'
//  '<S30>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/P'
//  '<S31>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/PWM_CB3'
//  '<S32>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe1'
//  '<S33>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe10'
//  '<S34>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe11'
//  '<S35>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe12'
//  '<S36>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe13'
//  '<S37>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe14'
//  '<S38>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe15'
//  '<S39>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe16'
//  '<S40>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe17'
//  '<S41>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe18'
//  '<S42>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe19'
//  '<S43>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe20'
//  '<S44>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe21'
//  '<S45>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe22'
//  '<S46>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe23'
//  '<S47>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe24'
//  '<S48>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe25'
//  '<S49>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe32'
//  '<S50>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe33'
//  '<S51>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe35'
//  '<S52>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe36'
//  '<S53>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe37'
//  '<S54>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe38'
//  '<S55>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe39'
//  '<S56>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe40'
//  '<S57>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe41'
//  '<S58>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe42'
//  '<S59>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe43'
//  '<S60>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe44'
//  '<S61>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe45'
//  '<S62>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe46'
//  '<S63>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe47'
//  '<S64>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe48'
//  '<S65>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe49'
//  '<S66>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe50'
//  '<S67>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe51'
//  '<S68>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe52'
//  '<S69>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe53'
//  '<S70>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe54'
//  '<S71>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe55'
//  '<S72>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe56'
//  '<S73>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe57'
//  '<S74>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe58'
//  '<S75>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe59'
//  '<S76>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe60'
//  '<S77>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe61'
//  '<S78>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe62'
//  '<S79>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe63'
//  '<S80>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe64'
//  '<S81>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe65'
//  '<S82>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe66'
//  '<S83>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe67'
//  '<S84>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe68'
//  '<S85>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe69'
//  '<S86>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe70'
//  '<S87>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe8'
//  '<S88>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe9'
//  '<S89>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Speed Control Proportional Integral Control1'
//  '<S90>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1'
//  '<S91>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2'
//  '<S92>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3'
//  '<S93>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4'
//  '<S94>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5'
//  '<S95>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9'
//  '<S96>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/TEB Control Proportional Integral Control1'
//  '<S97>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tab0'
//  '<S98>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter16'
//  '<S99>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter17'
//  '<S100>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter18'
//  '<S101>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter20'
//  '<S102>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter21'
//  '<S103>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter23'
//  '<S104>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter3'
//  '<S105>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/abc to dq1'
//  '<S106>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/dq --> ab'
//  '<S107>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC10/sub'
//  '<S108>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC10/sub/generation'
//  '<S109>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC11/sub'
//  '<S110>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC11/sub/generation'
//  '<S111>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC12/sub'
//  '<S112>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC12/sub/generation'
//  '<S113>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC13/sub'
//  '<S114>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC13/sub/generation'
//  '<S115>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC14/sub'
//  '<S116>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC14/sub/generation'
//  '<S117>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC15/sub'
//  '<S118>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC15/sub/generation'
//  '<S119>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC16/sub'
//  '<S120>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC16/sub/generation'
//  '<S121>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC17/sub'
//  '<S122>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC17/sub/generation'
//  '<S123>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC18/sub'
//  '<S124>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC18/sub/generation'
//  '<S125>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC20/sub'
//  '<S126>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC20/sub/generation'
//  '<S127>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC6/sub'
//  '<S128>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC6/sub/generation'
//  '<S129>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC7/sub'
//  '<S130>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC7/sub/generation'
//  '<S131>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC9/sub'
//  '<S132>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC9/sub/generation'
//  '<S133>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/Sampling clock'
//  '<S134>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/clk0'
//  '<S135>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S136>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/clk0/sub'
//  '<S137>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S138>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete'
//  '<S139>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Compare To Constant'
//  '<S140>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Compare To Constant1'
//  '<S141>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Reinitialization'
//  '<S142>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM/Alpha-Beta-Zero to abc'
//  '<S143>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM/Alpha-Beta-Zero to abc1'
//  '<S144>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM/NN CEC'
//  '<S145>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM/NN CEC/MLFB'
//  '<S146>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/PWM_CB3/sub'
//  '<S147>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/PWM_CB3/sub/generation'
//  '<S148>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe1/sub'
//  '<S149>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe1/sub/generation'
//  '<S150>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe10/sub'
//  '<S151>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe10/sub/generation'
//  '<S152>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe11/sub'
//  '<S153>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe11/sub/generation'
//  '<S154>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe12/sub'
//  '<S155>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe12/sub/generation'
//  '<S156>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe13/sub'
//  '<S157>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe13/sub/generation'
//  '<S158>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe14/sub'
//  '<S159>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe14/sub/generation'
//  '<S160>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe15/sub'
//  '<S161>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe15/sub/generation'
//  '<S162>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe16/sub'
//  '<S163>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe16/sub/generation'
//  '<S164>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe17/sub'
//  '<S165>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe17/sub/generation'
//  '<S166>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe18/sub'
//  '<S167>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe18/sub/generation'
//  '<S168>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe19/sub'
//  '<S169>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe19/sub/generation'
//  '<S170>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe20/sub'
//  '<S171>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe20/sub/generation'
//  '<S172>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe21/sub'
//  '<S173>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe21/sub/generation'
//  '<S174>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe22/sub'
//  '<S175>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe22/sub/generation'
//  '<S176>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe23/sub'
//  '<S177>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe23/sub/generation'
//  '<S178>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe24/sub'
//  '<S179>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe24/sub/generation'
//  '<S180>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe25/sub'
//  '<S181>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe25/sub/generation'
//  '<S182>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe32/sub'
//  '<S183>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe32/sub/generation'
//  '<S184>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe33/sub'
//  '<S185>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe33/sub/generation'
//  '<S186>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe35/sub'
//  '<S187>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe35/sub/generation'
//  '<S188>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe36/sub'
//  '<S189>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe36/sub/generation'
//  '<S190>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe37/sub'
//  '<S191>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe37/sub/generation'
//  '<S192>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe38/sub'
//  '<S193>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe38/sub/generation'
//  '<S194>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe39/sub'
//  '<S195>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe39/sub/generation'
//  '<S196>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe40/sub'
//  '<S197>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe40/sub/generation'
//  '<S198>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe41/sub'
//  '<S199>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe41/sub/generation'
//  '<S200>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe42/sub'
//  '<S201>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe42/sub/generation'
//  '<S202>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe43/sub'
//  '<S203>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe43/sub/generation'
//  '<S204>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe44/sub'
//  '<S205>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe44/sub/generation'
//  '<S206>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe45/sub'
//  '<S207>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe45/sub/generation'
//  '<S208>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe46/sub'
//  '<S209>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe46/sub/generation'
//  '<S210>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe47/sub'
//  '<S211>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe47/sub/generation'
//  '<S212>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe48/sub'
//  '<S213>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe48/sub/generation'
//  '<S214>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe49/sub'
//  '<S215>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe49/sub/generation'
//  '<S216>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe50/sub'
//  '<S217>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe50/sub/generation'
//  '<S218>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe51/sub'
//  '<S219>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe51/sub/generation'
//  '<S220>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe52/sub'
//  '<S221>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe52/sub/generation'
//  '<S222>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe53/sub'
//  '<S223>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe53/sub/generation'
//  '<S224>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe54/sub'
//  '<S225>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe54/sub/generation'
//  '<S226>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe55/sub'
//  '<S227>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe55/sub/generation'
//  '<S228>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe56/sub'
//  '<S229>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe56/sub/generation'
//  '<S230>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe57/sub'
//  '<S231>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe57/sub/generation'
//  '<S232>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe58/sub'
//  '<S233>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe58/sub/generation'
//  '<S234>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe59/sub'
//  '<S235>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe59/sub/generation'
//  '<S236>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe60/sub'
//  '<S237>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe60/sub/generation'
//  '<S238>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe61/sub'
//  '<S239>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe61/sub/generation'
//  '<S240>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe62/sub'
//  '<S241>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe62/sub/generation'
//  '<S242>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe63/sub'
//  '<S243>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe63/sub/generation'
//  '<S244>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe64/sub'
//  '<S245>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe64/sub/generation'
//  '<S246>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe65/sub'
//  '<S247>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe65/sub/generation'
//  '<S248>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe66/sub'
//  '<S249>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe66/sub/generation'
//  '<S250>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe67/sub'
//  '<S251>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe67/sub/generation'
//  '<S252>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe68/sub'
//  '<S253>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe68/sub/generation'
//  '<S254>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe69/sub'
//  '<S255>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe69/sub/generation'
//  '<S256>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe70/sub'
//  '<S257>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe70/sub/generation'
//  '<S258>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe8/sub'
//  '<S259>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe8/sub/generation'
//  '<S260>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe9/sub'
//  '<S261>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe9/sub/generation'
//  '<S262>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S263>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S264>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S265>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S266>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S267>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S268>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S269>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S270>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S271>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S272>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S273>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S274>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S275>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S276>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S277>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S278>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S279>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S280>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S281>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S282>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S283>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S284>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S285>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S286>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S287>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S288>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S289>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S290>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S291>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S292>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S293>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S294>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S295>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S296>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S297>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S298>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S299>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S300>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S301>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S302>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S303>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S304>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S305>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S306>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S307>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S308>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S309>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S310>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S311>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S312>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S313>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S314>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S315>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S316>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S317>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S318>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S319>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S320>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S321>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S322>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/MATLAB Function1'
//  '<S323>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S324>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S325>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S326>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S327>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S328>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S329>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S330>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S331>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S332>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S333>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S334>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S335>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter16/sub'
//  '<S336>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S337>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter17/sub'
//  '<S338>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter17/sub/generation'
//  '<S339>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter18/sub'
//  '<S340>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter18/sub/generation'
//  '<S341>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter20/sub'
//  '<S342>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter20/sub/generation'
//  '<S343>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter21/sub'
//  '<S344>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter21/sub/generation'
//  '<S345>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter23/sub'
//  '<S346>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter23/sub/generation'
//  '<S347>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter3/sub'
//  '<S348>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S349>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/abc to dq1/Alpha-Beta-Zero to dq1'
//  '<S350>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/abc to dq1/abc to Alpha-Beta-Zero1'

#endif                                 // imperix_M2C_NN_control_2024b_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
