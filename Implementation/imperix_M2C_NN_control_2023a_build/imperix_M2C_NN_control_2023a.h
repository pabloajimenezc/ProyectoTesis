//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_M2C_NN_control_2023a.h
//
// Code generated for Simulink model 'imperix_M2C_NN_control_2023a'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.1
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Sep  4 17:53:33 2025
//
#ifndef imperix_M2C_NN_control_2023a_h_
#define imperix_M2C_NN_control_2023a_h_
#include <cmath>
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "imperix_M2C_NN_control_2023a_types.h"

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
struct B_imperix_M2C_NN_control_2023_T {
  real_T iq_ref;         // '<S1>/Speed Control Proportional Integral Control1'
  real_T Gain2[6];                     // '<S33>/Gain2'
  real_T ib[6];                        // '<S1>/Ib'
  real32_T ADC;                        // '<S134>/ADC'
  real32_T ADC_e;                      // '<S122>/ADC'
  real32_T ADC_i;                      // '<S128>/ADC'
  real32_T ADC_p;                      // '<S136>/ADC'
  real32_T ADC_c;                      // '<S130>/ADC'
  real32_T ADC_j;                      // '<S132>/ADC'
  real32_T ADC_iu;                     // '<S118>/ADC'
  real32_T ADC_d;                      // '<S120>/ADC'
  real32_T ADC_k;                      // '<S138>/ADC'
  real32_T ADC_g;                      // '<S124>/ADC'
  real32_T ADC_gh;                     // '<S140>/ADC'
  real32_T ADC_em;                     // '<S142>/ADC'
  real32_T ADC_a;                      // '<S144>/ADC'
  real32_T SFunction;                  // '<S365>/S-Function'
  real32_T DataTypeConversion;         // '<S164>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S166>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S168>/Data Type Conversion'
  real32_T DataTypeConversion_a;       // '<S170>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S172>/Data Type Conversion'
  real32_T DataTypeConversion_il;      // '<S174>/Data Type Conversion'
  real32_T SFunction_p;                // '<S152>/S-Function'
  real32_T SFunction_i;                // '<S357>/S-Function'
  real32_T DataTypeConversion_m;       // '<S176>/Data Type Conversion'
  real32_T DataTypeConversion_dx;      // '<S178>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S180>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S182>/Data Type Conversion'
  real32_T DataTypeConversion_j;       // '<S184>/Data Type Conversion'
  real32_T DataTypeConversion_kq;      // '<S186>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S188>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S192>/Data Type Conversion'
  real32_T DataTypeConversion_dy;      // '<S194>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S196>/Data Type Conversion'
  real32_T DataTypeConversion_dg;      // '<S198>/Data Type Conversion'
  real32_T DataTypeConversion_oq;      // '<S200>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S202>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S204>/Data Type Conversion'
  real32_T DataTypeConversion_k0;      // '<S206>/Data Type Conversion'
  real32_T DataTypeConversion_os;      // '<S208>/Data Type Conversion'
  real32_T DataTypeConversion_ki;      // '<S210>/Data Type Conversion'
  real32_T DataTypeConversion_bm;      // '<S212>/Data Type Conversion'
  real32_T DataTypeConversion_hg;      // '<S214>/Data Type Conversion'
  real32_T DataTypeConversion_bb;      // '<S216>/Data Type Conversion'
  real32_T DataTypeConversion_d3;      // '<S218>/Data Type Conversion'
  real32_T DataTypeConversion_lc;      // '<S220>/Data Type Conversion'
  real32_T DataTypeConversion_m5;      // '<S222>/Data Type Conversion'
  real32_T SFunction_pq;               // '<S361>/S-Function'
  real32_T SFunction_n;                // '<S359>/S-Function'
  real32_T DataTypeConversion_og;      // '<S224>/Data Type Conversion'
  real32_T DataTypeConversion_it;      // '<S226>/Data Type Conversion'
  real32_T DataTypeConversion_l4;      // '<S228>/Data Type Conversion'
  real32_T DataTypeConversion_cx;      // '<S230>/Data Type Conversion'
  real32_T DataTypeConversion_kh;      // '<S232>/Data Type Conversion'
  real32_T DataTypeConversion_jl;      // '<S236>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S238>/Data Type Conversion'
  real32_T DataTypeConversion_dm;      // '<S240>/Data Type Conversion'
  real32_T DataTypeConversion_is;      // '<S242>/Data Type Conversion'
  real32_T DataTypeConversion_do;      // '<S244>/Data Type Conversion'
  real32_T DataTypeConversion_cq;      // '<S246>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S248>/Data Type Conversion'
  real32_T DataTypeConversion_n0;      // '<S250>/Data Type Conversion'
  real32_T DataTypeConversion_g2;      // '<S252>/Data Type Conversion'
  real32_T DataTypeConversion_aq;      // '<S254>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S256>/Data Type Conversion'
  real32_T DataTypeConversion_ln;      // '<S258>/Data Type Conversion'
  real32_T DataTypeConversion_bp;      // '<S260>/Data Type Conversion'
  real32_T DataTypeConversion_f5;      // '<S262>/Data Type Conversion'
  real32_T DataTypeConversion_kk;      // '<S264>/Data Type Conversion'
  real32_T DataTypeConversion_on;      // '<S266>/Data Type Conversion'
  real32_T DataTypeConversion_ith;     // '<S268>/Data Type Conversion'
  real32_T DataTypeConversion_n4;      // '<S270>/Data Type Conversion'
  real32_T DataTypeConversion_o0;      // '<S272>/Data Type Conversion'
  real32_T DataTypeConversion_kf;      // '<S274>/Data Type Conversion'
  real32_T DataTypeConversion_o1;      // '<S276>/Data Type Conversion'
  real32_T DataTypeConversion_pc;      // '<S278>/Data Type Conversion'
  real32_T DataTypeConversion_kig;     // '<S280>/Data Type Conversion'
  real32_T ADC_l;                      // '<S126>/ADC'
  real32_T SFunction_d;                // '<S369>/S-Function'
  real32_T DataTypeConversion1;        // '<S36>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S36>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S36>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S281>/Data Type Conversion1'
  real32_T DataTypeConversion2_e;      // '<S281>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S281>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S282>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S282>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S282>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S283>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S283>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S283>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S284>/Data Type Conversion1'
  real32_T DataTypeConversion2_gn;     // '<S284>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S284>/Data Type Conversion3'
  real32_T DataTypeConversion1_j;      // '<S293>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S293>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S293>/Data Type Conversion3'
  real32_T DataTypeConversion1_n;      // '<S294>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S294>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S294>/Data Type Conversion3'
  real32_T DataTypeConversion1_lt;     // '<S295>/Data Type Conversion1'
  real32_T DataTypeConversion2_ev;     // '<S295>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S295>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S296>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S296>/Data Type Conversion2'
  real32_T DataTypeConversion3_m;      // '<S296>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S305>/Data Type Conversion1'
  real32_T DataTypeConversion2_h;      // '<S305>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S305>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S306>/Data Type Conversion1'
  real32_T DataTypeConversion2_fi;     // '<S306>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S306>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S307>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S307>/Data Type Conversion2'
  real32_T DataTypeConversion3_bn;     // '<S307>/Data Type Conversion3'
  real32_T DataTypeConversion1_bn;     // '<S308>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S308>/Data Type Conversion2'
  real32_T DataTypeConversion3_k2;     // '<S308>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S317>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S317>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S317>/Data Type Conversion3'
  real32_T DataTypeConversion1_c0;     // '<S318>/Data Type Conversion1'
  real32_T DataTypeConversion2_eb;     // '<S318>/Data Type Conversion2'
  real32_T DataTypeConversion3_or;     // '<S318>/Data Type Conversion3'
  real32_T DataTypeConversion1_ls;     // '<S319>/Data Type Conversion1'
  real32_T DataTypeConversion2_kr;     // '<S319>/Data Type Conversion2'
  real32_T DataTypeConversion3_ln;     // '<S319>/Data Type Conversion3'
  real32_T DataTypeConversion1_bo;     // '<S320>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S320>/Data Type Conversion2'
  real32_T DataTypeConversion3_df;     // '<S320>/Data Type Conversion3'
  real32_T DataTypeConversion1_p;      // '<S329>/Data Type Conversion1'
  real32_T DataTypeConversion2_hz;     // '<S329>/Data Type Conversion2'
  real32_T DataTypeConversion3_je;     // '<S329>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S330>/Data Type Conversion1'
  real32_T DataTypeConversion2_k0;     // '<S330>/Data Type Conversion2'
  real32_T DataTypeConversion3_og;     // '<S330>/Data Type Conversion3'
  real32_T DataTypeConversion1_jv;     // '<S331>/Data Type Conversion1'
  real32_T DataTypeConversion2_fr;     // '<S331>/Data Type Conversion2'
  real32_T DataTypeConversion3_he;     // '<S331>/Data Type Conversion3'
  real32_T DataTypeConversion1_ko;     // '<S332>/Data Type Conversion1'
  real32_T DataTypeConversion2_m;      // '<S332>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S332>/Data Type Conversion3'
  real32_T DataTypeConversion1_f;      // '<S342>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S342>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S342>/Data Type Conversion3'
  real32_T DataTypeConversion1_km;     // '<S343>/Data Type Conversion1'
  real32_T DataTypeConversion2_av;     // '<S343>/Data Type Conversion2'
  real32_T DataTypeConversion3_gg;     // '<S343>/Data Type Conversion3'
  real32_T DataTypeConversion1_gd;     // '<S344>/Data Type Conversion1'
  real32_T DataTypeConversion2_gw;     // '<S344>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S344>/Data Type Conversion3'
  real32_T DataTypeConversion1_dr;     // '<S345>/Data Type Conversion1'
  real32_T DataTypeConversion2_gu;     // '<S345>/Data Type Conversion2'
  real32_T DataTypeConversion3_mp;     // '<S345>/Data Type Conversion3'
  real32_T DataTypeConversion_er;      // '<S234>/Data Type Conversion'
  real32_T SFunction_k;                // '<S363>/S-Function'
  real32_T SFunction_if;               // '<S355>/S-Function'
  real32_T DataTypeConversion_k0z;     // '<S190>/Data Type Conversion'
  int32_T SFunction_f;                 // '<S367>/S-Function'
  int32_T SFunction_c;                 // '<S371>/S-Function'
  B_MovingRMS1_imperix_M2C_NN_c_T MovingRMS2;// '<S1>/Moving RMS1'
  B_MovingRMS1_imperix_M2C_NN_c_T MovingRMS1;// '<S1>/Moving RMS1'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_M2C_NN_control_202_T {
  real_T Integrator_DSTATE;            // '<S153>/Integrator'
  real_T SFunction_DSTATE;             // '<S365>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S367>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S371>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S164>/S-Function'
  real_T SFunction_DSTATE_ea;          // '<S166>/S-Function'
  real_T SFunction_DSTATE_m;           // '<S168>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S170>/S-Function'
  real_T SFunction_DSTATE_hw;          // '<S172>/S-Function'
  real_T SFunction_DSTATE_my;          // '<S174>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S152>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S357>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S176>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S178>/S-Function'
  real_T SFunction_DSTATE_fo;          // '<S180>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S182>/S-Function'
  real_T SFunction_DSTATE_cm;          // '<S184>/S-Function'
  real_T SFunction_DSTATE_hq;          // '<S186>/S-Function'
  real_T SFunction_DSTATE_jq;          // '<S188>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S192>/S-Function'
  real_T SFunction_DSTATE_fos;         // '<S194>/S-Function'
  real_T SFunction_DSTATE_cn;          // '<S196>/S-Function'
  real_T SFunction_DSTATE_fox;         // '<S198>/S-Function'
  real_T SFunction_DSTATE_hb;          // '<S200>/S-Function'
  real_T SFunction_DSTATE_op;          // '<S202>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S204>/S-Function'
  real_T SFunction_DSTATE_o4;          // '<S206>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S208>/S-Function'
  real_T SFunction_DSTATE_f3;          // '<S210>/S-Function'
  real_T SFunction_DSTATE_o44;         // '<S212>/S-Function'
  real_T SFunction_DSTATE_ce;          // '<S214>/S-Function'
  real_T SFunction_DSTATE_ia;          // '<S216>/S-Function'
  real_T SFunction_DSTATE_iy;          // '<S218>/S-Function'
  real_T SFunction_DSTATE_jn;          // '<S220>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S222>/S-Function'
  real_T SFunction_DSTATE_fw;          // '<S361>/S-Function'
  real_T SFunction_DSTATE_o3;          // '<S359>/S-Function'
  real_T SFunction_DSTATE_pu;          // '<S224>/S-Function'
  real_T SFunction_DSTATE_fm;          // '<S226>/S-Function'
  real_T SFunction_DSTATE_ev;          // '<S228>/S-Function'
  real_T SFunction_DSTATE_ou;          // '<S230>/S-Function'
  real_T SFunction_DSTATE_ec;          // '<S232>/S-Function'
  real_T SFunction_DSTATE_ei;          // '<S236>/S-Function'
  real_T SFunction_DSTATE_dp;          // '<S238>/S-Function'
  real_T SFunction_DSTATE_hm;          // '<S240>/S-Function'
  real_T SFunction_DSTATE_du;          // '<S242>/S-Function'
  real_T SFunction_DSTATE_gm;          // '<S244>/S-Function'
  real_T SFunction_DSTATE_bz;          // '<S246>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S248>/S-Function'
  real_T SFunction_DSTATE_dt;          // '<S250>/S-Function'
  real_T SFunction_DSTATE_lv;          // '<S252>/S-Function'
  real_T SFunction_DSTATE_at;          // '<S254>/S-Function'
  real_T SFunction_DSTATE_gl;          // '<S256>/S-Function'
  real_T SFunction_DSTATE_fk;          // '<S258>/S-Function'
  real_T SFunction_DSTATE_ie;          // '<S260>/S-Function'
  real_T SFunction_DSTATE_a5;          // '<S262>/S-Function'
  real_T SFunction_DSTATE_ov;          // '<S264>/S-Function'
  real_T SFunction_DSTATE_pw;          // '<S266>/S-Function'
  real_T SFunction_DSTATE_gb;          // '<S268>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S270>/S-Function'
  real_T SFunction_DSTATE_lq;          // '<S272>/S-Function'
  real_T SFunction_DSTATE_aty;         // '<S274>/S-Function'
  real_T SFunction_DSTATE_p3;          // '<S276>/S-Function'
  real_T SFunction_DSTATE_ej;          // '<S278>/S-Function'
  real_T SFunction_DSTATE_ck;          // '<S280>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S147>/S-Function'
  real_T SFunction_DSTATE_ms;          // '<S369>/S-Function'
  real_T SFunction_DSTATE_nd;          // '<S234>/S-Function'
  real_T SFunction_DSTATE_cv;          // '<S363>/S-Function'
  real_T SFunction_DSTATE_eo;          // '<S355>/S-Function'
  real_T SFunction_DSTATE_et;          // '<S190>/S-Function'
  real_T iq_ref_Buffer0;               // synthesized block
  real_T TmpRTBAtSpeedControlProportiona[2];// synthesized block
  real_T TmpRTBAtSpeedControlProportio_l;// synthesized block
  real_T a;                // '<S1>/TEB Control Proportional Integral Control1'
  real_T u;                // '<S1>/TEB Control Proportional Integral Control1'
  real_T p1;                           // '<S102>/MATLAB Function1'
  real_T p2;                           // '<S102>/MATLAB Function1'
  real_T p3;                           // '<S102>/MATLAB Function1'
  real_T p4;                           // '<S102>/MATLAB Function1'
  real_T a_f;            // '<S1>/Speed Control Proportional Integral Control1'
  real_T u_b;            // '<S1>/Speed Control Proportional Integral Control1'
  real_T ad;    // '<S1>/Output Current Control Proportional Integral Control1'
  real_T ud;    // '<S1>/Output Current Control Proportional Integral Control1'
  real_T aq;    // '<S1>/Output Current Control Proportional Integral Control1'
  real_T uq;    // '<S1>/Output Current Control Proportional Integral Control1'
  real_T a_n;     // '<S1>/Input Current Control Proportional Integral Control'
  real_T u_d;     // '<S1>/Input Current Control Proportional Integral Control'
  real_T psir0;                        // '<S1>/Flux obs2'
  real_T ialbet_delr[2];              // '<S1>/Circulating Current Control MPC'
  boolean_T Initial_FirstOutputTime;   // '<S153>/Initial'
  DW_MovingRMS1_imperix_M2C_NN__T MovingRMS2;// '<S1>/Moving RMS1'
  DW_MovingRMS1_imperix_M2C_NN__T MovingRMS1;// '<S1>/Moving RMS1'
};

// Parameters (default storage)
struct P_imperix_M2C_NN_control_2023_T_ {
  real_T A_cc[8];                      // Variable: A_cc
                                          //  Referenced by: '<S1>/Circulating Current Control MPC'

  real_T Ag;                           // Variable: Ag
                                          //  Referenced by:
                                          //    '<S1>/Constant13'
                                          //    '<S1>/Constant14'

  real_T C;                            // Variable: C
                                          //  Referenced by:
                                          //    '<S1>/Gain39'
                                          //    '<S1>/Gain40'
                                          //    '<S33>/Gain3'

  real_T N[12];                        // Variable: N
                                          //  Referenced by: '<S33>/Gain2'

  real_T T[36];                        // Variable: T
                                          //  Referenced by:
                                          //    '<S1>/Gain41'
                                          //    '<S1>/Gain61'

  real_T Tab[6];                       // Variable: Tab
                                          //  Referenced by: '<S1>/P,Q1'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by: '<S33>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S33>/Gain1'

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
                                 //    '<S154>/Constant'
                                 //    '<S156>/Bias'
                                 //    '<S156>/Gain'
                                 //    '<S156>/Gain1'

  real_T IntegratorwithWrappedStateDis_p;
                              // Mask Parameter: IntegratorwithWrappedStateDis_p
                                 //  Referenced by:
                                 //    '<S155>/Constant'
                                 //    '<S156>/Gain'
                                 //    '<S156>/Gain1'

  real_T IntegratorwithWrappedStateDis_g;
                              // Mask Parameter: IntegratorwithWrappedStateDis_g
                                 //  Referenced by: '<S153>/Initial'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S134>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S122>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S128>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S136>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S130>/ADC'

  real_T ADC_P8_o;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S132>/ADC'

  real_T Gain4_Gain;                   // Expression: 1/6
                                          //  Referenced by: '<S33>/Gain4'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S118>/ADC'

  real_T ADC_P8_ns;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S120>/ADC'

  real_T ADC_P8_b;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S138>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S124>/ADC'

  real_T ADC_P8_c2;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S140>/ADC'

  real_T ADC_P8_gz;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S142>/ADC'

  real_T Gain5_Gain;                   // Expression: 1
                                          //  Referenced by: '<S33>/Gain5'

  real_T Gain3_Gain[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S157>/Gain3'

  real_T Gain3_Gain_n[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S373>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S373>/Gain1'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S153>/Integrator'

  real_T Gain31_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain31'

  real_T ADC_P8_h;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S144>/ADC'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S365>/S-Function'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S1>/Gain8'

  real_T SFunction_P17_g;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S367>/S-Function'

  real_T iq_ref_InitialCondition;      // Expression: 0
                                          //  Referenced by:

  real_T SFunction_P17_gm;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S371>/S-Function'

  real_T Factor_Value;                 // Expression: 1
                                          //  Referenced by: '<S1>/Factor'

  real_T Gain84_Gain;                  // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain84'

  real_T Gain3_Gain_j[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S158>/Gain3'

  real_T Constant1_Value;              // Expression: 0.01
                                          //  Referenced by: '<S1>/Constant1'

  real_T Gain17_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain17'

  real_T SFunction_P17_f;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S152>/S-Function'

  real_T Gain3_Gain_nb[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S19>/Gain3'

  real_T Gain_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain'

  real_T Gain19_Gain;                  // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain19'

  real_T SFunction_P17_gu;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S357>/S-Function'

  real_T Constant1_Value_c;            // Expression: 0
                                          //  Referenced by: '<S33>/Constant1'

  real_T Gain22_Gain;                  // Expression: 1/6
                                          //  Referenced by: '<S1>/Gain22'

  real_T Gain23_Gain;                  // Expression: 1/6
                                          //  Referenced by: '<S1>/Gain23'

  real_T Gain54_Gain;                  // Expression: 3
                                          //  Referenced by: '<S1>/Gain54'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S361>/S-Function'

  real_T SFunction_P17_k;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S359>/S-Function'

  real_T Gain21_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain21'

  real_T Gain3_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S1>/Gain3'

  real_T Gain4_Gain_l;                 // Expression: 1/6
                                          //  Referenced by: '<S1>/Gain4'

  real_T Gain24_Gain;                  // Expression: 1/6
                                          //  Referenced by: '<S1>/Gain24'

  real_T Gain25_Gain;                  // Expression: 100/520
                                          //  Referenced by: '<S1>/Gain25'

  real_T ADC_P8_e;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S126>/ADC'

  real_T Constant3_Value;              // Expression: 1
                                          //  Referenced by: '<S1>/Constant3'

  real_T SFunction_P17_p;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S369>/S-Function'

  real_T Gain10_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain10'

  real_T Gain11_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain11'

  real_T Gain12_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain12'

  real_T Gain13_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain13'

  real_T Gain14_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain14'

  real_T Gain20_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain20'

  real_T Gain9_Gain;                   // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain9'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S36>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S281>/phase'

  real_T phase_Value_b;                // Expression: PHASE
                                          //  Referenced by: '<S282>/phase'

  real_T phase_Value_nr;               // Expression: PHASE
                                          //  Referenced by: '<S283>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S284>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S293>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S294>/phase'

  real_T phase_Value_by;               // Expression: PHASE
                                          //  Referenced by: '<S295>/phase'

  real_T phase_Value_bys;              // Expression: PHASE
                                          //  Referenced by: '<S296>/phase'

  real_T Gain1_Gain_l;                 // Expression: -1
                                          //  Referenced by: '<S99>/Gain1'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S305>/phase'

  real_T phase_Value_oc;               // Expression: PHASE
                                          //  Referenced by: '<S306>/phase'

  real_T phase_Value_i0;               // Expression: PHASE
                                          //  Referenced by: '<S307>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S308>/phase'

  real_T Gain3_Gain_c;                 // Expression: -1
                                          //  Referenced by: '<S100>/Gain3'

  real_T phase_Value_bj;               // Expression: PHASE
                                          //  Referenced by: '<S317>/phase'

  real_T phase_Value_d;                // Expression: PHASE
                                          //  Referenced by: '<S318>/phase'

  real_T phase_Value_bm;               // Expression: PHASE
                                          //  Referenced by: '<S319>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S320>/phase'

  real_T Gain3_Gain_f;                 // Expression: -1
                                          //  Referenced by: '<S101>/Gain3'

  real_T phase_Value_lt;               // Expression: PHASE
                                          //  Referenced by: '<S329>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S330>/phase'

  real_T phase_Value_n1;               // Expression: PHASE
                                          //  Referenced by: '<S331>/phase'

  real_T phase_Value_cv;               // Expression: PHASE
                                          //  Referenced by: '<S332>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S342>/phase'

  real_T phase_Value_n13;              // Expression: PHASE
                                          //  Referenced by: '<S343>/phase'

  real_T phase_Value_e;                // Expression: PHASE
                                          //  Referenced by: '<S344>/phase'

  real_T phase_Value_g;                // Expression: PHASE
                                          //  Referenced by: '<S345>/phase'

  real_T Constant4_Value;              // Expression: 520
                                          //  Referenced by: '<S1>/Constant4'

  real_T Gain5_Gain_d;                 // Expression: 1/2
                                          //  Referenced by: '<S1>/Gain5'

  real_T SFunction_P17_m;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S363>/S-Function'

  real_T SFunction_P17_o;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S355>/S-Function'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S162>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S162>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S162>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S286>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S286>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S286>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S288>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S288>/PWM'

  real32_T PWM_P4_m;                   // Expression: single(phase)
                                          //  Referenced by: '<S288>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S290>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S290>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S290>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S292>/PWM'

  real32_T PWM_P3_j;                   // Expression: single(duty)
                                          //  Referenced by: '<S292>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S292>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S298>/PWM'

  real32_T PWM_P3_dz;                  // Expression: single(duty)
                                          //  Referenced by: '<S298>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S298>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S300>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S300>/PWM'

  real32_T PWM_P4_gw;                  // Expression: single(phase)
                                          //  Referenced by: '<S300>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S302>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S302>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S302>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S304>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S304>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S304>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S310>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S310>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S310>/PWM'

  real32_T PWM_P2_br;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S312>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S312>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S312>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S314>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S314>/PWM'

  real32_T PWM_P4_gk;                  // Expression: single(phase)
                                          //  Referenced by: '<S314>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S316>/PWM'

  real32_T PWM_P3_jn;                  // Expression: single(duty)
                                          //  Referenced by: '<S316>/PWM'

  real32_T PWM_P4_kr;                  // Expression: single(phase)
                                          //  Referenced by: '<S316>/PWM'

  real32_T PWM_P2_b4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S322>/PWM'

  real32_T PWM_P3_p1;                  // Expression: single(duty)
                                          //  Referenced by: '<S322>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S322>/PWM'

  real32_T PWM_P2_nf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S324>/PWM'

  real32_T PWM_P3_ii;                  // Expression: single(duty)
                                          //  Referenced by: '<S324>/PWM'

  real32_T PWM_P4_m3;                  // Expression: single(phase)
                                          //  Referenced by: '<S324>/PWM'

  real32_T PWM_P2_jc;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S326>/PWM'

  real32_T PWM_P3_my;                  // Expression: single(duty)
                                          //  Referenced by: '<S326>/PWM'

  real32_T PWM_P4_hb;                  // Expression: single(phase)
                                          //  Referenced by: '<S326>/PWM'

  real32_T PWM_P2_l;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S328>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S328>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S328>/PWM'

  real32_T PWM_P2_en;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S334>/PWM'

  real32_T PWM_P3_jb;                  // Expression: single(duty)
                                          //  Referenced by: '<S334>/PWM'

  real32_T PWM_P4_ax;                  // Expression: single(phase)
                                          //  Referenced by: '<S334>/PWM'

  real32_T PWM_P2_hu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S336>/PWM'

  real32_T PWM_P3_bk;                  // Expression: single(duty)
                                          //  Referenced by: '<S336>/PWM'

  real32_T PWM_P4_d;                   // Expression: single(phase)
                                          //  Referenced by: '<S336>/PWM'

  real32_T PWM_P2_fi;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S338>/PWM'

  real32_T PWM_P3_hx;                  // Expression: single(duty)
                                          //  Referenced by: '<S338>/PWM'

  real32_T PWM_P4_kt;                  // Expression: single(phase)
                                          //  Referenced by: '<S338>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S340>/PWM'

  real32_T PWM_P3_pz;                  // Expression: single(duty)
                                          //  Referenced by: '<S340>/PWM'

  real32_T PWM_P4_gq;                  // Expression: single(phase)
                                          //  Referenced by: '<S340>/PWM'

  real32_T PWM_P2_ku;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S347>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S347>/PWM'

  real32_T PWM_P4_im;                  // Expression: single(phase)
                                          //  Referenced by: '<S347>/PWM'

  real32_T PWM_P2_n0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S349>/PWM'

  real32_T PWM_P3_j1;                  // Expression: single(duty)
                                          //  Referenced by: '<S349>/PWM'

  real32_T PWM_P4_au;                  // Expression: single(phase)
                                          //  Referenced by: '<S349>/PWM'

  real32_T PWM_P2_jq;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S351>/PWM'

  real32_T PWM_P3_is;                  // Expression: single(duty)
                                          //  Referenced by: '<S351>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S351>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S353>/PWM'

  real32_T PWM_P3_h3;                  // Expression: single(duty)
                                          //  Referenced by: '<S353>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S353>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S134>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S134>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P3_b;                   // Expression: single(offset)
                                          //  Referenced by: '<S122>/ADC'

  real32_T ADC_P2_j;                   // Expression: single(gain)
                                          //  Referenced by: '<S128>/ADC'

  real32_T ADC_P3_o;                   // Expression: single(offset)
                                          //  Referenced by: '<S128>/ADC'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S136>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S136>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S130>/ADC'

  real32_T ADC_P3_k;                   // Expression: single(offset)
                                          //  Referenced by: '<S130>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S132>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S132>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P3_h;                   // Expression: single(offset)
                                          //  Referenced by: '<S118>/ADC'

  real32_T ADC_P2_mz;                  // Expression: single(gain)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P3_a;                   // Expression: single(offset)
                                          //  Referenced by: '<S120>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S138>/ADC'

  real32_T ADC_P3_e1;                  // Expression: single(offset)
                                          //  Referenced by: '<S138>/ADC'

  real32_T ADC_P2_pq;                  // Expression: single(gain)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S124>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S140>/ADC'

  real32_T ADC_P3_n0;                  // Expression: single(offset)
                                          //  Referenced by: '<S140>/ADC'

  real32_T ADC_P2_kd;                  // Expression: single(gain)
                                          //  Referenced by: '<S142>/ADC'

  real32_T ADC_P3_oz;                  // Expression: single(offset)
                                          //  Referenced by: '<S142>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S144>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S144>/ADC'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S365>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S365>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S365>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S365>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S365>/S-Function'

  real32_T SFunction_P3_a;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S367>/S-Function'

  real32_T SFunction_P4_m;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S367>/S-Function'

  real32_T SFunction_P5_j;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S367>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(0)
                                          //  Referenced by: '<S367>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S367>/S-Function'

  real32_T SFunction_P3_f;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S371>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S371>/S-Function'

  real32_T SFunction_P5_d;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S371>/S-Function'

  real32_T SFunction_P6_di;            // Expression: single(0)
                                          //  Referenced by: '<S371>/S-Function'

  real32_T SFunction_P7_ic;            // Expression: single(0)
                                          //  Referenced by: '<S371>/S-Function'

  real32_T SFunction_P6_d5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S164>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S164>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S166>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S166>/S-Function'

  real32_T SFunction_P6_d5c;           // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S168>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S168>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S170>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S170>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S172>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S172>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S174>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S174>/S-Function'

  real32_T SFunction_P3_d;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S152>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S152>/S-Function'

  real32_T SFunction_P5_k;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S152>/S-Function'

  real32_T SFunction_P6_l;             // Expression: single(0)
                                          //  Referenced by: '<S152>/S-Function'

  real32_T SFunction_P7_l;             // Expression: single(0)
                                          //  Referenced by: '<S152>/S-Function'

  real32_T SFunction_P3_j;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S357>/S-Function'

  real32_T SFunction_P4_k;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S357>/S-Function'

  real32_T SFunction_P5_h;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S357>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(0)
                                          //  Referenced by: '<S357>/S-Function'

  real32_T SFunction_P7_n;             // Expression: single(0)
                                          //  Referenced by: '<S357>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S176>/S-Function'

  real32_T SFunction_P12_ca;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S176>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S178>/S-Function'

  real32_T SFunction_P12_ip;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S178>/S-Function'

  real32_T SFunction_P6_lo;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S180>/S-Function'

  real32_T SFunction_P12_kf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S180>/S-Function'

  real32_T SFunction_P6_oz;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S182>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S182>/S-Function'

  real32_T SFunction_P6_eh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P6_nb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P12_og;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P6_nj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S192>/S-Function'

  real32_T SFunction_P12_on;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S192>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S194>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S194>/S-Function'

  real32_T SFunction_P6_cr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S196>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S196>/S-Function'

  real32_T SFunction_P6_ef;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S198>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S198>/S-Function'

  real32_T SFunction_P6_ao;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S200>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S200>/S-Function'

  real32_T SFunction_P6_ds;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S202>/S-Function'

  real32_T SFunction_P12_ds;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S202>/S-Function'

  real32_T SFunction_P6_aq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S204>/S-Function'

  real32_T SFunction_P12_of;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S204>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S206>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S206>/S-Function'

  real32_T SFunction_P6_ah;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S208>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S208>/S-Function'

  real32_T SFunction_P6_bk;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S210>/S-Function'

  real32_T SFunction_P12_ef;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S210>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S212>/S-Function'

  real32_T SFunction_P12_ku;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S212>/S-Function'

  real32_T SFunction_P6_fm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S214>/S-Function'

  real32_T SFunction_P12_kd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S214>/S-Function'

  real32_T SFunction_P6_ly;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S216>/S-Function'

  real32_T SFunction_P12_gb;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S216>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S218>/S-Function'

  real32_T SFunction_P12_du;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S218>/S-Function'

  real32_T SFunction_P6_ea;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S220>/S-Function'

  real32_T SFunction_P12_gx;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S220>/S-Function'

  real32_T SFunction_P6_dd;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S222>/S-Function'

  real32_T SFunction_P12_oo;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S222>/S-Function'

  real32_T SFunction_P3_ae;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S361>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S361>/S-Function'

  real32_T SFunction_P5_g;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S361>/S-Function'

  real32_T SFunction_P6_ap;            // Expression: single(0)
                                          //  Referenced by: '<S361>/S-Function'

  real32_T SFunction_P7_nq;            // Expression: single(0)
                                          //  Referenced by: '<S361>/S-Function'

  real32_T SFunction_P3_b;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S359>/S-Function'

  real32_T SFunction_P4_c5;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S359>/S-Function'

  real32_T SFunction_P5_c;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S359>/S-Function'

  real32_T SFunction_P6_ce;            // Expression: single(0)
                                          //  Referenced by: '<S359>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S359>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P12_hr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P6_bx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P12_ks;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P6_hj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P12_la;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P6_im;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P12_iw;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P6_d1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P6_bv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P12_ax;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P12_ge;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P6_cy;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P12_bi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P6_kq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P12_hd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P6_l3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P12_kr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P6_ic;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P12_hi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P6_m3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P12_gt;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P6_ob;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P12_dg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P6_pj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P12_mq;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P6_lf;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S254>/S-Function'

  real32_T SFunction_P12_iv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S254>/S-Function'

  real32_T SFunction_P6_cb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S256>/S-Function'

  real32_T SFunction_P12_p3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S256>/S-Function'

  real32_T SFunction_P6_ou;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S258>/S-Function'

  real32_T SFunction_P12_ic;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S258>/S-Function'

  real32_T SFunction_P6_eq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S260>/S-Function'

  real32_T SFunction_P12_cd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S260>/S-Function'

  real32_T SFunction_P6_jx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S262>/S-Function'

  real32_T SFunction_P12_hj;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S262>/S-Function'

  real32_T SFunction_P6_j1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S264>/S-Function'

  real32_T SFunction_P12_na;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S264>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S266>/S-Function'

  real32_T SFunction_P12_al;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S266>/S-Function'

  real32_T SFunction_P6_pq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S268>/S-Function'

  real32_T SFunction_P12_ni;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S268>/S-Function'

  real32_T SFunction_P6_crq;           // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S270>/S-Function'

  real32_T SFunction_P12_ny;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S270>/S-Function'

  real32_T SFunction_P6_fr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S272>/S-Function'

  real32_T SFunction_P12_ex;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S272>/S-Function'

  real32_T SFunction_P6_ag;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S274>/S-Function'

  real32_T SFunction_P12_bt;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S274>/S-Function'

  real32_T SFunction_P6_jd;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S276>/S-Function'

  real32_T SFunction_P12_kj;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S276>/S-Function'

  real32_T SFunction_P6_pe;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S278>/S-Function'

  real32_T SFunction_P12_ns;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S278>/S-Function'

  real32_T SFunction_P6_er;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S280>/S-Function'

  real32_T SFunction_P12_dr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S280>/S-Function'

  real32_T ADC_P2_c3;                  // Expression: single(gain)
                                          //  Referenced by: '<S126>/ADC'

  real32_T ADC_P3_jt;                  // Expression: single(offset)
                                          //  Referenced by: '<S126>/ADC'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S147>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S147>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S149>/CLK1'

  real32_T SFunction_P3_i;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S369>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S369>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S369>/S-Function'

  real32_T SFunction_P6_ci;            // Expression: single(0)
                                          //  Referenced by: '<S369>/S-Function'

  real32_T SFunction_P7_lk;            // Expression: single(0)
                                          //  Referenced by: '<S369>/S-Function'

  real32_T SFunction_P6_gg;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P3_l;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S363>/S-Function'

  real32_T SFunction_P4_a;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S363>/S-Function'

  real32_T SFunction_P5_ph;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S363>/S-Function'

  real32_T SFunction_P6_oz5;           // Expression: single(0)
                                          //  Referenced by: '<S363>/S-Function'

  real32_T SFunction_P7_a;             // Expression: single(0)
                                          //  Referenced by: '<S363>/S-Function'

  real32_T SFunction_P3_p;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S355>/S-Function'

  real32_T SFunction_P4_o;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S355>/S-Function'

  real32_T SFunction_P5_j5;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S355>/S-Function'

  real32_T SFunction_P6_fx;            // Expression: single(0)
                                          //  Referenced by: '<S355>/S-Function'

  real32_T SFunction_P7_le;            // Expression: single(0)
                                          //  Referenced by: '<S355>/S-Function'

  real32_T SFunction_P6_hx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S190>/S-Function'

  real32_T SFunction_P12_jv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S190>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S365>/S-Function'

  uint32_T SFunction_P10_e;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S367>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S371>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S164>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S164>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S166>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S166>/S-Function'

  uint32_T SFunction_P7_at;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S168>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S168>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S170>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S170>/S-Function'

  uint32_T SFunction_P7_e;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S172>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S172>/S-Function'

  uint32_T SFunction_P7_ae;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S174>/S-Function'

  uint32_T SFunction_P13_f3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S174>/S-Function'

  uint32_T SFunction_P10_ky;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S152>/S-Function'

  uint32_T SFunction_P10_o;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S357>/S-Function'

  uint32_T SFunction_P7_b1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S176>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S176>/S-Function'

  uint32_T SFunction_P7_ev;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S178>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S178>/S-Function'

  uint32_T SFunction_P7_mi;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S180>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S180>/S-Function'

  uint32_T SFunction_P7_mk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S182>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S182>/S-Function'

  uint32_T SFunction_P7_n0;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S184>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S184>/S-Function'

  uint32_T SFunction_P7_k;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P7_g;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P13_jz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P7_gj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S192>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S192>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S194>/S-Function'

  uint32_T SFunction_P13_kf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S194>/S-Function'

  uint32_T SFunction_P7_a5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S196>/S-Function'

  uint32_T SFunction_P13_aw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S196>/S-Function'

  uint32_T SFunction_P7_dw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S198>/S-Function'

  uint32_T SFunction_P13_bv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S198>/S-Function'

  uint32_T SFunction_P7_mq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S200>/S-Function'

  uint32_T SFunction_P13_b5;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S200>/S-Function'

  uint32_T SFunction_P7_lj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S202>/S-Function'

  uint32_T SFunction_P13_ls;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S202>/S-Function'

  uint32_T SFunction_P7_kf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S204>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S204>/S-Function'

  uint32_T SFunction_P7_e5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S206>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S206>/S-Function'

  uint32_T SFunction_P7_bh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S208>/S-Function'

  uint32_T SFunction_P13_di;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S208>/S-Function'

  uint32_T SFunction_P7_gx;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S210>/S-Function'

  uint32_T SFunction_P13_d3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S210>/S-Function'

  uint32_T SFunction_P7_dt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S212>/S-Function'

  uint32_T SFunction_P13_b0;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S212>/S-Function'

  uint32_T SFunction_P7_d3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S214>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S214>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S216>/S-Function'

  uint32_T SFunction_P13_bz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S216>/S-Function'

  uint32_T SFunction_P7_p;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S218>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S218>/S-Function'

  uint32_T SFunction_P7_dv;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S220>/S-Function'

  uint32_T SFunction_P13_mh;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S220>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S222>/S-Function'

  uint32_T SFunction_P13_fe;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S222>/S-Function'

  uint32_T SFunction_P10_b;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S361>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S359>/S-Function'

  uint32_T SFunction_P7_ci;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P7_fk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P13_b2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P7_mp;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P13_ac;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P7_mc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P13_cg;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P7_kt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P13_c3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P7_cc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P13_mg;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P7_ll;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P13_ai;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P7_bq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P13_cn;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P7_kq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P13_lu;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P7_do;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P13_lz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P7_af;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P13_ab;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P7_cx;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P13_ce;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P7_od;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P13_pr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P7_og;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P13_bu;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P7_bk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S254>/S-Function'

  uint32_T SFunction_P13_p3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S254>/S-Function'

  uint32_T SFunction_P7_dtt;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S256>/S-Function'

  uint32_T SFunction_P13_iy;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S256>/S-Function'

  uint32_T SFunction_P7_bu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S258>/S-Function'

  uint32_T SFunction_P13_bl;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S258>/S-Function'

  uint32_T SFunction_P7_ja;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S260>/S-Function'

  uint32_T SFunction_P13_b0d;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S260>/S-Function'

  uint32_T SFunction_P7_g4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S262>/S-Function'

  uint32_T SFunction_P13_jw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S262>/S-Function'

  uint32_T SFunction_P7_id;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S264>/S-Function'

  uint32_T SFunction_P13_ez;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S264>/S-Function'

  uint32_T SFunction_P7_a1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S266>/S-Function'

  uint32_T SFunction_P13_a1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S266>/S-Function'

  uint32_T SFunction_P7_fh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S268>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S268>/S-Function'

  uint32_T SFunction_P7_gh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S270>/S-Function'

  uint32_T SFunction_P13_l3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S270>/S-Function'

  uint32_T SFunction_P7_be;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S272>/S-Function'

  uint32_T SFunction_P13_nv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S272>/S-Function'

  uint32_T SFunction_P7_fe;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S274>/S-Function'

  uint32_T SFunction_P13_km;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S274>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S276>/S-Function'

  uint32_T SFunction_P13_ax;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S276>/S-Function'

  uint32_T SFunction_P7_is;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S278>/S-Function'

  uint32_T SFunction_P13_if;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S278>/S-Function'

  uint32_T SFunction_P7_d2;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S280>/S-Function'

  uint32_T SFunction_P13_pz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S280>/S-Function'

  uint32_T SFunction_P10_c;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S369>/S-Function'

  uint32_T SFunction_P7_ji;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P13_fk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S363>/S-Function'

  uint32_T SFunction_P10_bd;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S355>/S-Function'

  uint32_T SFunction_P7_fd;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S190>/S-Function'

  uint32_T SFunction_P13_ot;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S190>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P9_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S290>/PWM'

  int16_T PWM_P5_c4;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S290>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S290>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S290>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S290>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S290>/PWM'

  int16_T PWM_P1_p;                    // Expression: int16(lane)
                                          //  Referenced by: '<S292>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S292>/PWM'

  int16_T PWM_P6_k;                    // Expression: int16(rate)
                                          //  Referenced by: '<S292>/PWM'

  int16_T PWM_P7_bv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S292>/PWM'

  int16_T PWM_P8_a;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S292>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S292>/PWM'

  int16_T PWM_P1_hp;                   // Expression: int16(lane)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P5_m;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P6_hr;                   // Expression: int16(rate)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P8_af;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P9_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P8_i;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S302>/PWM'

  int16_T PWM_P5_ce;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S302>/PWM'

  int16_T PWM_P6_g;                    // Expression: int16(rate)
                                          //  Referenced by: '<S302>/PWM'

  int16_T PWM_P7_e;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S302>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S302>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S302>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S304>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S304>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S304>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S304>/PWM'

  int16_T PWM_P8_kl;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S304>/PWM'

  int16_T PWM_P9_p3;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S304>/PWM'

  int16_T PWM_P1_kk;                   // Expression: int16(lane)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P5_b;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P6_f1;                   // Expression: int16(rate)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P7_j;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P8_ee;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P9_pw;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P1_f;                    // Expression: int16(lane)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P5_iv;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P1_c;                    // Expression: int16(lane)
                                          //  Referenced by: '<S314>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S314>/PWM'

  int16_T PWM_P6_eu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S314>/PWM'

  int16_T PWM_P7_eu;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S314>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S314>/PWM'

  int16_T PWM_P9_o5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S314>/PWM'

  int16_T PWM_P1_hs;                   // Expression: int16(lane)
                                          //  Referenced by: '<S316>/PWM'

  int16_T PWM_P5_me;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S316>/PWM'

  int16_T PWM_P6_ma;                   // Expression: int16(rate)
                                          //  Referenced by: '<S316>/PWM'

  int16_T PWM_P7_cz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S316>/PWM'

  int16_T PWM_P8_ek;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S316>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S316>/PWM'

  int16_T PWM_P1_c4;                   // Expression: int16(lane)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P5_bj;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P6_o;                    // Expression: int16(rate)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P7_mm;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P1_cj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P5_hb;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P6_ka;                   // Expression: int16(rate)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P7_ob;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P8_b;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P1_f0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S326>/PWM'

  int16_T PWM_P5_a0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S326>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S326>/PWM'

  int16_T PWM_P7_n;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S326>/PWM'

  int16_T PWM_P8_oi;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S326>/PWM'

  int16_T PWM_P9_ax;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S326>/PWM'

  int16_T PWM_P1_cg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P5_mx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P7_n1;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P8_op;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P9_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S328>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P5_ke;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P6_gz;                   // Expression: int16(rate)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P7_ow;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P9_no;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S334>/PWM'

  int16_T PWM_P1_m;                    // Expression: int16(lane)
                                          //  Referenced by: '<S336>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S336>/PWM'

  int16_T PWM_P6_gp;                   // Expression: int16(rate)
                                          //  Referenced by: '<S336>/PWM'

  int16_T PWM_P7_jf;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S336>/PWM'

  int16_T PWM_P8_ea;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S336>/PWM'

  int16_T PWM_P9_nq;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S336>/PWM'

  int16_T PWM_P1_pa;                   // Expression: int16(lane)
                                          //  Referenced by: '<S338>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S338>/PWM'

  int16_T PWM_P6_nh;                   // Expression: int16(rate)
                                          //  Referenced by: '<S338>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S338>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S338>/PWM'

  int16_T PWM_P9_iz;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S338>/PWM'

  int16_T PWM_P1_jb;                   // Expression: int16(lane)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P6_nd;                   // Expression: int16(rate)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P7_nx;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P8_ox;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P9_ig;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P1_mc;                   // Expression: int16(lane)
                                          //  Referenced by: '<S347>/PWM'

  int16_T PWM_P5_b4;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S347>/PWM'

  int16_T PWM_P6_ge;                   // Expression: int16(rate)
                                          //  Referenced by: '<S347>/PWM'

  int16_T PWM_P7_io;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S347>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S347>/PWM'

  int16_T PWM_P9_f1;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S347>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S349>/PWM'

  int16_T PWM_P5_cs;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S349>/PWM'

  int16_T PWM_P6_gu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S349>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S349>/PWM'

  int16_T PWM_P8_g0;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S349>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S349>/PWM'

  int16_T PWM_P1_pg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S351>/PWM'

  int16_T PWM_P5_hi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S351>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S351>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S351>/PWM'

  int16_T PWM_P8_kg;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S351>/PWM'

  int16_T PWM_P9_ak;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S351>/PWM'

  int16_T PWM_P1_c2;                   // Expression: int16(lane)
                                          //  Referenced by: '<S353>/PWM'

  int16_T PWM_P5_kh;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S353>/PWM'

  int16_T PWM_P6_c;                    // Expression: int16(rate)
                                          //  Referenced by: '<S353>/PWM'

  int16_T PWM_P7_gf;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S353>/PWM'

  int16_T PWM_P8_hk;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S353>/PWM'

  int16_T PWM_P9_np;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S353>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S134>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S134>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S134>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S134>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P6_b;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P9_g;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S122>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S128>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S136>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S136>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S136>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S136>/ADC'

  int16_T ADC_P1_et;                   // Expression: int16(channel)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P6_g;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P9_fo;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S130>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P9_fc;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S132>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P4_ol;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P9_j;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S118>/ADC'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P9_e;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S120>/ADC'

  int16_T ADC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S138>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S138>/ADC'

  int16_T ADC_P6_h;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S138>/ADC'

  int16_T ADC_P9_er;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S138>/ADC'

  int16_T ADC_P1_h;                    // Expression: int16(channel)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P4_o2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P6_lc;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S124>/ADC'

  int16_T ADC_P1_gd;                   // Expression: int16(channel)
                                          //  Referenced by: '<S140>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S140>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S140>/ADC'

  int16_T ADC_P9_f1;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S140>/ADC'

  int16_T ADC_P1_d;                    // Expression: int16(channel)
                                          //  Referenced by: '<S142>/ADC'

  int16_T ADC_P4_ic;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S142>/ADC'

  int16_T ADC_P6_gg;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S142>/ADC'

  int16_T ADC_P9_c;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S142>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S144>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S144>/ADC'

  int16_T ADC_P6_mf;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S144>/ADC'

  int16_T ADC_P9_fx;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S144>/ADC'

  int16_T SFunction_P2_h;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S365>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S367>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S371>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S164>/S-Function'

  int16_T SFunction_P3_h;              // Expression: int16(0)
                                          //  Referenced by: '<S164>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S166>/S-Function'

  int16_T SFunction_P3_mm;             // Expression: int16(0)
                                          //  Referenced by: '<S166>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S168>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S168>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S170>/S-Function'

  int16_T SFunction_P3_bb;             // Expression: int16(0)
                                          //  Referenced by: '<S170>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S172>/S-Function'

  int16_T SFunction_P3_k;              // Expression: int16(0)
                                          //  Referenced by: '<S172>/S-Function'

  int16_T SFunction_P2_ho;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S174>/S-Function'

  int16_T SFunction_P3_a5;             // Expression: int16(0)
                                          //  Referenced by: '<S174>/S-Function'

  int16_T SFunction_P2_fq;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S152>/S-Function'

  int16_T SFunction_P2_ad;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S357>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S176>/S-Function'

  int16_T SFunction_P3_c4;             // Expression: int16(0)
                                          //  Referenced by: '<S176>/S-Function'

  int16_T SFunction_P2_hj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S178>/S-Function'

  int16_T SFunction_P3_an;             // Expression: int16(0)
                                          //  Referenced by: '<S178>/S-Function'

  int16_T SFunction_P2_ji;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S180>/S-Function'

  int16_T SFunction_P3_f4;             // Expression: int16(0)
                                          //  Referenced by: '<S180>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S182>/S-Function'

  int16_T SFunction_P3_l4;             // Expression: int16(0)
                                          //  Referenced by: '<S182>/S-Function'

  int16_T SFunction_P2_j3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S184>/S-Function'

  int16_T SFunction_P3_i0;             // Expression: int16(0)
                                          //  Referenced by: '<S184>/S-Function'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T SFunction_P3_bg;             // Expression: int16(0)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S192>/S-Function'

  int16_T SFunction_P3_d2;             // Expression: int16(0)
                                          //  Referenced by: '<S192>/S-Function'

  int16_T SFunction_P2_dd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S194>/S-Function'

  int16_T SFunction_P3_do;             // Expression: int16(0)
                                          //  Referenced by: '<S194>/S-Function'

  int16_T SFunction_P2_nc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S196>/S-Function'

  int16_T SFunction_P3_n;              // Expression: int16(0)
                                          //  Referenced by: '<S196>/S-Function'

  int16_T SFunction_P2_cw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S198>/S-Function'

  int16_T SFunction_P3_k0;             // Expression: int16(0)
                                          //  Referenced by: '<S198>/S-Function'

  int16_T SFunction_P2_eh;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S200>/S-Function'

  int16_T SFunction_P3_iq;             // Expression: int16(0)
                                          //  Referenced by: '<S200>/S-Function'

  int16_T SFunction_P2_m3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S202>/S-Function'

  int16_T SFunction_P3_ay;             // Expression: int16(0)
                                          //  Referenced by: '<S202>/S-Function'

  int16_T SFunction_P2_p;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S204>/S-Function'

  int16_T SFunction_P3_b5;             // Expression: int16(0)
                                          //  Referenced by: '<S204>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S206>/S-Function'

  int16_T SFunction_P3_hh;             // Expression: int16(0)
                                          //  Referenced by: '<S206>/S-Function'

  int16_T SFunction_P2_cv;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S208>/S-Function'

  int16_T SFunction_P3_bk;             // Expression: int16(0)
                                          //  Referenced by: '<S208>/S-Function'

  int16_T SFunction_P2_lh;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S210>/S-Function'

  int16_T SFunction_P3_aa;             // Expression: int16(0)
                                          //  Referenced by: '<S210>/S-Function'

  int16_T SFunction_P2_fg;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S212>/S-Function'

  int16_T SFunction_P3_ib;             // Expression: int16(0)
                                          //  Referenced by: '<S212>/S-Function'

  int16_T SFunction_P2_fh;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S214>/S-Function'

  int16_T SFunction_P3_nm;             // Expression: int16(0)
                                          //  Referenced by: '<S214>/S-Function'

  int16_T SFunction_P2_ni;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S216>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S216>/S-Function'

  int16_T SFunction_P2_dt;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S218>/S-Function'

  int16_T SFunction_P3_kb;             // Expression: int16(0)
                                          //  Referenced by: '<S218>/S-Function'

  int16_T SFunction_P2_bk;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S220>/S-Function'

  int16_T SFunction_P3_ne;             // Expression: int16(0)
                                          //  Referenced by: '<S220>/S-Function'

  int16_T SFunction_P2_f0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S222>/S-Function'

  int16_T SFunction_P3_nv;             // Expression: int16(0)
                                          //  Referenced by: '<S222>/S-Function'

  int16_T SFunction_P2_ls;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S361>/S-Function'

  int16_T SFunction_P2_ka;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S359>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P3_ja;             // Expression: int16(0)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P2_ep;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P3_fj;             // Expression: int16(0)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P2_ea;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P3_b2;             // Expression: int16(0)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P2_gg;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P3_hv;             // Expression: int16(0)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P2_gz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P3_cr;             // Expression: int16(0)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P2_el;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P2_gy;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P3_jb;             // Expression: int16(0)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P2_oo;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P3_db;             // Expression: int16(0)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P2_ec;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P3_ag;             // Expression: int16(0)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P2_me;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P3_aj;             // Expression: int16(0)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P2_mm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P3_lg;             // Expression: int16(0)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P2_lw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P3_bm;             // Expression: int16(0)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P2_nd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P3_lu;             // Expression: int16(0)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P2_c3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P3_f1;             // Expression: int16(0)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P2_k0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S254>/S-Function'

  int16_T SFunction_P3_al;             // Expression: int16(0)
                                          //  Referenced by: '<S254>/S-Function'

  int16_T SFunction_P2_j0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S256>/S-Function'

  int16_T SFunction_P3_ab;             // Expression: int16(0)
                                          //  Referenced by: '<S256>/S-Function'

  int16_T SFunction_P2_jv;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S258>/S-Function'

  int16_T SFunction_P3_dj;             // Expression: int16(0)
                                          //  Referenced by: '<S258>/S-Function'

  int16_T SFunction_P2_fx;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S260>/S-Function'

  int16_T SFunction_P3_bq;             // Expression: int16(0)
                                          //  Referenced by: '<S260>/S-Function'

  int16_T SFunction_P2_nj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S262>/S-Function'

  int16_T SFunction_P3_ob;             // Expression: int16(0)
                                          //  Referenced by: '<S262>/S-Function'

  int16_T SFunction_P2_gv;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S264>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S264>/S-Function'

  int16_T SFunction_P2_da;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S266>/S-Function'

  int16_T SFunction_P3_mn;             // Expression: int16(0)
                                          //  Referenced by: '<S266>/S-Function'

  int16_T SFunction_P2_oe;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S268>/S-Function'

  int16_T SFunction_P3_n1;             // Expression: int16(0)
                                          //  Referenced by: '<S268>/S-Function'

  int16_T SFunction_P2_ai;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S270>/S-Function'

  int16_T SFunction_P3_px;             // Expression: int16(0)
                                          //  Referenced by: '<S270>/S-Function'

  int16_T SFunction_P2_fa;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S272>/S-Function'

  int16_T SFunction_P3_g5;             // Expression: int16(0)
                                          //  Referenced by: '<S272>/S-Function'

  int16_T SFunction_P2_ck;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S274>/S-Function'

  int16_T SFunction_P3_nl;             // Expression: int16(0)
                                          //  Referenced by: '<S274>/S-Function'

  int16_T SFunction_P2_cwm;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S276>/S-Function'

  int16_T SFunction_P3_ev;             // Expression: int16(0)
                                          //  Referenced by: '<S276>/S-Function'

  int16_T SFunction_P2_n5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S278>/S-Function'

  int16_T SFunction_P3_nj;             // Expression: int16(0)
                                          //  Referenced by: '<S278>/S-Function'

  int16_T SFunction_P2_kd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S280>/S-Function'

  int16_T SFunction_P3_k4;             // Expression: int16(0)
                                          //  Referenced by: '<S280>/S-Function'

  int16_T ADC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P4_kp;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P6_d;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S126>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S126>/ADC'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S149>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S149>/CLK1'

  int16_T SFunction_P2_gyn;            // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S369>/S-Function'

  int16_T SFunction_P2_mr;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P3_oc;             // Expression: int16(0)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P2_i2;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S363>/S-Function'

  int16_T SFunction_P2_gn;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S355>/S-Function'

  int16_T SFunction_P2_c5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S190>/S-Function'

  int16_T SFunction_P3_jv;             // Expression: int16(0)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P1[8];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S365>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S365>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S365>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S365>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S365>/S-Function'

  uint16_T SFunction_P1_k[12];         // Computed Parameter: SFunction_P1_k
                                          //  Referenced by: '<S367>/S-Function'

  uint16_T SFunction_P9_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S367>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S367>/S-Function'

  uint16_T SFunction_P14_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S367>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S367>/S-Function'

  uint16_T SFunction_P1_i[13];         // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S371>/S-Function'

  uint16_T SFunction_P9_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S371>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S371>/S-Function'

  uint16_T SFunction_P14_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S371>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S371>/S-Function'

  uint16_T SFunction_P1_b[6];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P14_pe[5];        // Computed Parameter: SFunction_P14_pe
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P1_g[8];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P5_eo;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P1_k4[8];         // Computed Parameter: SFunction_P1_k4
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P5_ht;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P8_d2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P14_nb[5];        // Computed Parameter: SFunction_P14_nb
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P1_g0[8];         // Computed Parameter: SFunction_P1_g0
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P5_f;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P14_ps[5];        // Computed Parameter: SFunction_P14_ps
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P1_c[8];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P11_ip;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P1_ie[5];         // Computed Parameter: SFunction_P1_ie
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P5_ev;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P14_j[5];         // Computed Parameter: SFunction_P14_j
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P1_bg[6];         // Computed Parameter: SFunction_P1_bg
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P9_nv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P11_nj;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P15_m;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P1_p[13];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S357>/S-Function'

  uint16_T SFunction_P9_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S357>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S357>/S-Function'

  uint16_T SFunction_P14_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S357>/S-Function'

  uint16_T SFunction_P15_oy;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S357>/S-Function'

  uint16_T SFunction_P1_n[7];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P8_a;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P11_oe;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P1_h[5];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P8_le;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P11_ow;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P14_cg[5];        // Computed Parameter: SFunction_P14_cg
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P1_g5[3];         // Computed Parameter: SFunction_P1_g5
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P5_cs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P8_ov;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P11_it;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P1_j[4];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P8_jr;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P11_f3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P14_ho[5];        // Computed Parameter: SFunction_P14_ho
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P1_jl[3];         // Computed Parameter: SFunction_P1_jl
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P5_pl;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P14_dd[5];        // Computed Parameter: SFunction_P14_dd
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P1_e[3];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P5_ga;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P11_fd;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P1_f[6];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P5_kp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P14_bb[5];        // Computed Parameter: SFunction_P14_bb
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P1_kv[6];         // Computed Parameter: SFunction_P1_kv
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P5_cn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P14_ir[5];        // Computed Parameter: SFunction_P14_ir
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P1_dj[6];         // Computed Parameter: SFunction_P1_dj
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P5_fg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P11_fm;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P14_ko[5];        // Computed Parameter: SFunction_P14_ko
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P1_pn[3];         // Computed Parameter: SFunction_P1_pn
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P5_el;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P8_gn;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P11_eq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P1_pc[5];         // Computed Parameter: SFunction_P1_pc
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P5_bj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P11_nl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P14_nh[5];        // Computed Parameter: SFunction_P14_nh
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P1_kf[5];         // Computed Parameter: SFunction_P1_kf
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P5_p3;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P11_id;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P1_cu[5];         // Computed Parameter: SFunction_P1_cu
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P5_cnz;           // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P8_et;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P11_iy;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P14_mk[5];        // Computed Parameter: SFunction_P14_mk
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P1_o[5];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P5_a1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P8_mh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P11_h3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P1_hy[3];         // Computed Parameter: SFunction_P1_hy
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P5_h3;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P11_cg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P14_dt[5];        // Computed Parameter: SFunction_P14_dt
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P1_ig[5];         // Computed Parameter: SFunction_P1_ig
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P5_bu;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P8_gs;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P11_nt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P1_fm[5];         // Computed Parameter: SFunction_P1_fm
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P5_be;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P8_db;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P11_ko;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P14_ks[5];        // Computed Parameter: SFunction_P14_ks
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P1_es[3];         // Computed Parameter: SFunction_P1_es
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P5_gj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P8_bh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P11_n4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P14_hoz[5];       // Computed Parameter: SFunction_P14_hoz
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P1_pg[5];         // Computed Parameter: SFunction_P1_pg
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P5_cz;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P8_hv;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P11_fx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P14_gu[5];        // Computed Parameter: SFunction_P14_gu
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P1_oa;            // Computed Parameter: SFunction_P1_oa
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P5_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P8_h4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P11_cu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P14_cm[5];        // Computed Parameter: SFunction_P14_cm
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P1_gv[4];         // Computed Parameter: SFunction_P1_gv
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P5_hw;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P8_fg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P11_cf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P14_n0[5];        // Computed Parameter: SFunction_P14_n0
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P1_df[4];         // Computed Parameter: SFunction_P1_df
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P5_ec;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P8_bq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P14_nt[5];        // Computed Parameter: SFunction_P14_nt
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P1_o5[9];         // Computed Parameter: SFunction_P1_o5
                                          //  Referenced by: '<S361>/S-Function'

  uint16_T SFunction_P9_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S361>/S-Function'

  uint16_T SFunction_P11_cj;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S361>/S-Function'

  uint16_T SFunction_P14_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S361>/S-Function'

  uint16_T SFunction_P15_f;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S361>/S-Function'

  uint16_T SFunction_P1_nt[9];         // Computed Parameter: SFunction_P1_nt
                                          //  Referenced by: '<S359>/S-Function'

  uint16_T SFunction_P9_g4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S359>/S-Function'

  uint16_T SFunction_P11_hc;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S359>/S-Function'

  uint16_T SFunction_P14_ia;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S359>/S-Function'

  uint16_T SFunction_P15_ar;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S359>/S-Function'

  uint16_T SFunction_P1_bw[5];         // Computed Parameter: SFunction_P1_bw
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P5_kv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P8_dg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P11_ea;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P14_ba[5];        // Computed Parameter: SFunction_P14_ba
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P1_cf[3];         // Computed Parameter: SFunction_P1_cf
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P5_hn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P8_lc;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P11_hd;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P14_fq[5];        // Computed Parameter: SFunction_P14_fq
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P1_nw[3];         // Computed Parameter: SFunction_P1_nw
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P5_og;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P8_mk;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P11_kr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P14_pr[5];        // Computed Parameter: SFunction_P14_pr
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P1_hz[3];         // Computed Parameter: SFunction_P1_hz
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P5_j2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P8_lh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P11_k1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P14_oe[5];        // Computed Parameter: SFunction_P14_oe
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P1_m[3];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P5_oy;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P8_gsx;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P11_of;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P14_prh[5];       // Computed Parameter: SFunction_P14_prh
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P1_a[5];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P5_kg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P8_m3;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P11_ky;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P14_d5[5];        // Computed Parameter: SFunction_P14_d5
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P1_mi[5];         // Computed Parameter: SFunction_P1_mi
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P8_h0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P11_lp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P14_gx[5];        // Computed Parameter: SFunction_P14_gx
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P1_pm[5];         // Computed Parameter: SFunction_P1_pm
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P5_a3;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P8_au;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P11_gi;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P14_kz[5];        // Computed Parameter: SFunction_P14_kz
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P1_cff[7];        // Computed Parameter: SFunction_P1_cff
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P5_bs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P8_ac;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P11_ga;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P14_gz[5];        // Computed Parameter: SFunction_P14_gz
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P1_k3[2];         // Computed Parameter: SFunction_P1_k3
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P5_ej;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P8_fn;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P11_pm;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P14_e5[5];        // Computed Parameter: SFunction_P14_e5
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P1_kn[5];         // Computed Parameter: SFunction_P1_kn
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P5_hc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P11_ni;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P14_cf[5];        // Computed Parameter: SFunction_P14_cf
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P5_oj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P14_pn[5];        // Computed Parameter: SFunction_P14_pn
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P1_ez[3];         // Computed Parameter: SFunction_P1_ez
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P5_mj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P8_jx;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P11_im;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P14_ao[5];        // Computed Parameter: SFunction_P14_ao
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P1_ng[3];         // Computed Parameter: SFunction_P1_ng
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P5_pp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P8_ho;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P11_gc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P14_kc[5];        // Computed Parameter: SFunction_P14_kc
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P1_bk[3];         // Computed Parameter: SFunction_P1_bk
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P5_nf;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P8_fv;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P11_pt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P14_lm[5];        // Computed Parameter: SFunction_P14_lm
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P1_hg[3];         // Computed Parameter: SFunction_P1_hg
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P5_c0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P8_pq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P14_mi[5];        // Computed Parameter: SFunction_P14_mi
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P1_e5[3];         // Computed Parameter: SFunction_P1_e5
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P5_jz;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P8_ap;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P11_dq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P14_ok[5];        // Computed Parameter: SFunction_P14_ok
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P1_po[7];         // Computed Parameter: SFunction_P1_po
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P5_ey;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P8_by;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P11_k2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P14_bs[5];        // Computed Parameter: SFunction_P14_bs
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P1_p1[7];         // Computed Parameter: SFunction_P1_p1
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P5_dh;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P8_gb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P11_j3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P14_gp[5];        // Computed Parameter: SFunction_P14_gp
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P1_eb[5];         // Computed Parameter: SFunction_P1_eb
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P5_bm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P8_lp;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P11_jj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P14_fc[5];        // Computed Parameter: SFunction_P14_fc
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P1_br[7];         // Computed Parameter: SFunction_P1_br
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P5_br;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P8_aa;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P14_gw[5];        // Computed Parameter: SFunction_P14_gw
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P1_nq[4];         // Computed Parameter: SFunction_P1_nq
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P5_e5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P8_lcr;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P11_kd;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P14_gwi[5];       // Computed Parameter: SFunction_P14_gwi
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P1_ga[3];         // Computed Parameter: SFunction_P1_ga
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P5_j5p;           // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P8_cb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P11_ev;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P14_eu[5];        // Computed Parameter: SFunction_P14_eu
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P1_m4[5];         // Computed Parameter: SFunction_P1_m4
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P5_dt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P8_ka;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P11_b1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P14_ex[5];        // Computed Parameter: SFunction_P14_ex
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P1_me[3];         // Computed Parameter: SFunction_P1_me
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P5_bp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P8_i3;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P11_dj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P14_mkz[5];       // Computed Parameter: SFunction_P14_mkz
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P1_hym[3];        // Computed Parameter: SFunction_P1_hym
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P5_fq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P8_fj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P11_k3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P14_am[5];        // Computed Parameter: SFunction_P14_am
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P1_m3[8];         // Computed Parameter: SFunction_P1_m3
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P5_j0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P8_lhf;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P11_pf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P14_i0[5];        // Computed Parameter: SFunction_P14_i0
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P1_gm[8];         // Computed Parameter: SFunction_P1_gm
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P5_is;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P8_jo;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P11_j4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P14_iu[5];        // Computed Parameter: SFunction_P14_iu
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P1_fd;            // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S147>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S147>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S147>/S-Function'

  uint16_T SFunction_P1_gy[5];         // Computed Parameter: SFunction_P1_gy
                                          //  Referenced by: '<S369>/S-Function'

  uint16_T SFunction_P9_jp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S369>/S-Function'

  uint16_T SFunction_P11_iu;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S369>/S-Function'

  uint16_T SFunction_P14_pq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S369>/S-Function'

  uint16_T SFunction_P15_j;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S369>/S-Function'

  uint16_T SFunction_P1_i0[3];         // Computed Parameter: SFunction_P1_i0
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P5_ew;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P8_be;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P11_f2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P14_at[5];        // Computed Parameter: SFunction_P14_at
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P1_pa[8];         // Computed Parameter: SFunction_P1_pa
                                          //  Referenced by: '<S363>/S-Function'

  uint16_T SFunction_P9_p;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S363>/S-Function'

  uint16_T SFunction_P11_kod;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S363>/S-Function'

  uint16_T SFunction_P14_ck;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S363>/S-Function'

  uint16_T SFunction_P15_h;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S363>/S-Function'

  uint16_T SFunction_P1_db[11];        // Computed Parameter: SFunction_P1_db
                                          //  Referenced by: '<S355>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S355>/S-Function'

  uint16_T SFunction_P11_pk;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S355>/S-Function'

  uint16_T SFunction_P14_ag;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S355>/S-Function'

  uint16_T SFunction_P15_c;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S355>/S-Function'

  uint16_T SFunction_P1_ep[7];         // Computed Parameter: SFunction_P1_ep
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P5_av;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P8_ff;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P11_n4s;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P14_iz[5];        // Computed Parameter: SFunction_P14_iz
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S162>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S162>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S162>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S286>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S286>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S286>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S288>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S288>/PWM'

  boolean_T PWM_P12_b;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S288>/PWM'

  boolean_T PWM_P10_d;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S290>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S290>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S290>/PWM'

  boolean_T PWM_P10_e;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S292>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S292>/PWM'

  boolean_T PWM_P12_m;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S292>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S298>/PWM'

  boolean_T PWM_P11_c0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S298>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S298>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S300>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S300>/PWM'

  boolean_T PWM_P12_bn;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S300>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S302>/PWM'

  boolean_T PWM_P11_gw;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S302>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S302>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S304>/PWM'

  boolean_T PWM_P11_k5;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S304>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S304>/PWM'

  boolean_T PWM_P10_dc;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S310>/PWM'

  boolean_T PWM_P11_l0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S310>/PWM'

  boolean_T PWM_P12_or;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S310>/PWM'

  boolean_T PWM_P10_ed;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S312>/PWM'

  boolean_T PWM_P11_kz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S312>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S312>/PWM'

  boolean_T PWM_P10_oh;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S314>/PWM'

  boolean_T PWM_P11_a;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S314>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S314>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S316>/PWM'

  boolean_T PWM_P11_gg;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S316>/PWM'

  boolean_T PWM_P12_ot;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S316>/PWM'

  boolean_T PWM_P10_b4;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S322>/PWM'

  boolean_T PWM_P11_o;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S322>/PWM'

  boolean_T PWM_P12_o4;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S322>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S324>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S324>/PWM'

  boolean_T PWM_P12_a;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S324>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S326>/PWM'

  boolean_T PWM_P11_ao;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S326>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S326>/PWM'

  boolean_T PWM_P10_be;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S328>/PWM'

  boolean_T PWM_P11_oj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S328>/PWM'

  boolean_T PWM_P12_ht;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S328>/PWM'

  boolean_T PWM_P10_bw;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S334>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S334>/PWM'

  boolean_T PWM_P12_jc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S334>/PWM'

  boolean_T PWM_P10_ga;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S336>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S336>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S336>/PWM'

  boolean_T PWM_P10_cy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S338>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S338>/PWM'

  boolean_T PWM_P12_js;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S338>/PWM'

  boolean_T PWM_P10_lq;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S340>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S340>/PWM'

  boolean_T PWM_P12_d;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S340>/PWM'

  boolean_T PWM_P10_dm;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S347>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S347>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S347>/PWM'

  boolean_T PWM_P10_c1;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S349>/PWM'

  boolean_T PWM_P11_db;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S349>/PWM'

  boolean_T PWM_P12_d5;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S349>/PWM'

  boolean_T PWM_P10_hb;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S351>/PWM'

  boolean_T PWM_P11_k4;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S351>/PWM'

  boolean_T PWM_P12_kd;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S351>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S353>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S353>/PWM'

  boolean_T PWM_P12_mr;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S353>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S134>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S134>/ADC'

  boolean_T ADC_P5_b;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P7_o;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S122>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S128>/ADC'

  boolean_T ADC_P7_c;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S128>/ADC'

  boolean_T ADC_P5_o;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S136>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S136>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S130>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S130>/ADC'

  boolean_T ADC_P5_ja;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S132>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S132>/ADC'

  boolean_T ADC_P5_c;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S118>/ADC'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S120>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S138>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S138>/ADC'

  boolean_T ADC_P5_h;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S124>/ADC'

  boolean_T ADC_P5_at;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S140>/ADC'

  boolean_T ADC_P7_om;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S140>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S142>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S142>/ADC'

  boolean_T ADC_P5_oh;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S144>/ADC'

  boolean_T ADC_P7_kb;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S144>/ADC'

  boolean_T SFunction_P8_cm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S365>/S-Function'

  boolean_T SFunction_P12_he;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S365>/S-Function'

  boolean_T SFunction_P13_luf;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S365>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S365>/S-Function'

  boolean_T SFunction_P8_bd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S367>/S-Function'

  boolean_T SFunction_P12_gi;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S367>/S-Function'

  boolean_T SFunction_P13_c4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S367>/S-Function'

  boolean_T SFunction_P16_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S367>/S-Function'

  boolean_T SFunction_P8_p4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S371>/S-Function'

  boolean_T SFunction_P12_b1;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S371>/S-Function'

  boolean_T SFunction_P13_kj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S371>/S-Function'

  boolean_T SFunction_P16_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S371>/S-Function'

  boolean_T SFunction_P4_ap;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S164>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S164>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S164>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S164>/S-Function'

  boolean_T SFunction_P4_ic;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S166>/S-Function'

  boolean_T SFunction_P9_h;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S166>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S166>/S-Function'

  boolean_T SFunction_P15_m3;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S166>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S168>/S-Function'

  boolean_T SFunction_P9_o5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S168>/S-Function'

  boolean_T SFunction_P10_cz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S168>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S168>/S-Function'

  boolean_T SFunction_P4_hc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P9_oe;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P10_ns;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P15_jj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P9_m;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P10_n3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P15_hn;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P4_cr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P8_leb;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S152>/S-Function'

  boolean_T SFunction_P12_jc;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S152>/S-Function'

  boolean_T SFunction_P13_dx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S152>/S-Function'

  boolean_T SFunction_P16_ns;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S152>/S-Function'

  boolean_T SFunction_P8_bp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S357>/S-Function'

  boolean_T SFunction_P12_em;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S357>/S-Function'

  boolean_T SFunction_P13_fw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S357>/S-Function'

  boolean_T SFunction_P16_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S357>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P9_oa;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P10_il;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P15_h1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P4_kk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P4_ao;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P10_nv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P15_ii;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P4_d1;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S182>/S-Function'

  boolean_T SFunction_P9_h5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S182>/S-Function'

  boolean_T SFunction_P10_ae;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S182>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S182>/S-Function'

  boolean_T SFunction_P4_cq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P9_cz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P15_da;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P4_od;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P9_fc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P10_el;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P15_lp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P4_mc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P10_ie;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P15_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P4_bp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P9_ha;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P4_ko;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P9_o5b;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P10_ilz;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P4_n;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P9_nz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P10_h2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P15_hg;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P4_jk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P10_if;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P15_ok;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P4_of;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P9_nl;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P15_nm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P4_kz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P9_d2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P10_jp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P15_ph;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P9_i1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P10_oz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P15_dq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P4_ed;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P9_ft;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P10_bn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P4_bd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P9_im;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P10_du;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P15_g4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P4_ni;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P10_hy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P15_hc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P4_bm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P9_jf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P10_pp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P15_iy;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P4_ng;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P15_h4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P4_nih;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P9_pk;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P10_iq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P15_cz;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P9_a0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P10_c4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P15_p3;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P10_hv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P15_di;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P4_ol;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P9_g0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P10_oh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P15_bc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P8_dm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S361>/S-Function'

  boolean_T SFunction_P12_lu;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S361>/S-Function'

  boolean_T SFunction_P13_cv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S361>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S361>/S-Function'

  boolean_T SFunction_P8_c0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S359>/S-Function'

  boolean_T SFunction_P12_cy;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S359>/S-Function'

  boolean_T SFunction_P13_gw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S359>/S-Function'

  boolean_T SFunction_P16_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S359>/S-Function'

  boolean_T SFunction_P4_lx;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P9_ku;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P10_an;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P15_b1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P4_ft;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P9_bg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P10_j4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P15_k0;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P4_m4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P9_al;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P10_dn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P15_mm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P4_m5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P9_dm;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P10_lb;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P15_cs;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P4_na;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P9_kf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P10_dz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P15_ps;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P4_pm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P9_fo;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P10_jj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P15_ej;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P4_cc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P9_gq;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P10_i5;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P15_ex;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P4_et;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P9_gs;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P15_pu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P4_cj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P9_n2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P10_ac;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P15_ky;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P4_br;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P9_ox;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P10_nt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P15_dp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P4_ig;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P9_nh;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P10_ph;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P15_mu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P4_kw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P9_kr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P10_ii;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P15_bh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P4_d4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P9_nr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P10_hi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P15_ge;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P9_fx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P10_o0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P15_cr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P4_bt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P9_ht;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P10_mp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P15_j0;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P4_on;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P9_en;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P10_ls;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P15_ct;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P4_bj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P9_n0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P10_nj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P15_d2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P4_hw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P9_ny;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P10_nji;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P15_ce;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P4_hb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P9_cv;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P10_iy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P15_dp1;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P4_oz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P9_iy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P10_fv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P15_cc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P4_fi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P9_lh;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P10_ds;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P15_lpy;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P4_lj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S268>/S-Function'

  boolean_T SFunction_P9_oc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S268>/S-Function'

  boolean_T SFunction_P10_kq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S268>/S-Function'

  boolean_T SFunction_P15_je;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S268>/S-Function'

  boolean_T SFunction_P4_m4p;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S270>/S-Function'

  boolean_T SFunction_P9_jg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S270>/S-Function'

  boolean_T SFunction_P10_fp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S270>/S-Function'

  boolean_T SFunction_P15_fw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S270>/S-Function'

  boolean_T SFunction_P4_cd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S272>/S-Function'

  boolean_T SFunction_P9_au;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S272>/S-Function'

  boolean_T SFunction_P10_iij;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S272>/S-Function'

  boolean_T SFunction_P15_oc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S272>/S-Function'

  boolean_T SFunction_P4_bpq;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S274>/S-Function'

  boolean_T SFunction_P9_f3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S274>/S-Function'

  boolean_T SFunction_P10_dm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S274>/S-Function'

  boolean_T SFunction_P15_ka;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S274>/S-Function'

  boolean_T SFunction_P4_b4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S276>/S-Function'

  boolean_T SFunction_P9_nt;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S276>/S-Function'

  boolean_T SFunction_P10_f0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S276>/S-Function'

  boolean_T SFunction_P15_gx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S276>/S-Function'

  boolean_T SFunction_P4_kc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S278>/S-Function'

  boolean_T SFunction_P9_ka;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S278>/S-Function'

  boolean_T SFunction_P10_b3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S278>/S-Function'

  boolean_T SFunction_P15_hh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S278>/S-Function'

  boolean_T SFunction_P4_i0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S280>/S-Function'

  boolean_T SFunction_P9_czh;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S280>/S-Function'

  boolean_T SFunction_P10_ju;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S280>/S-Function'

  boolean_T SFunction_P15_j5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S280>/S-Function'

  boolean_T ADC_P5_h1;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S126>/ADC'

  boolean_T ADC_P7_j;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S126>/ADC'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S149>/CLK1'

  boolean_T SFunction_P8_ca;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S369>/S-Function'

  boolean_T SFunction_P12_kg;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S369>/S-Function'

  boolean_T SFunction_P13_oa;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S369>/S-Function'

  boolean_T SFunction_P16_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S369>/S-Function'

  boolean_T SFunction_P4_ju;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P9_ol;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P15_l5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P8_hy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S363>/S-Function'

  boolean_T SFunction_P12_do;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S363>/S-Function'

  boolean_T SFunction_P13_d33;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S363>/S-Function'

  boolean_T SFunction_P16_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S363>/S-Function'

  boolean_T SFunction_P8_ki;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S355>/S-Function'

  boolean_T SFunction_P12_pf;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S355>/S-Function'

  boolean_T SFunction_P13_dd;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S355>/S-Function'

  boolean_T SFunction_P16_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S355>/S-Function'

  boolean_T SFunction_P4_mi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P9_oj;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P10_a0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P15_dw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S190>/S-Function'

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

  extern P_imperix_M2C_NN_control_2023_T imperix_M2C_NN_control_2023a_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_imperix_M2C_NN_control_2023_T imperix_M2C_NN_control_2023a_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_imperix_M2C_NN_control_202_T imperix_M2C_NN_control_2023a_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void imperix_M2C_NN_control_2023a_initialize(void);
  extern void imperix_M2C_NN_control_2023a_step0(void);// Sample time: [0.000166667s, 0.0s] 
  extern void imperix_M2C_NN_control_2023a_step1(void);// Sample time: [0.001s, 0.0s] 
  extern void imperix_M2C_NN_control_2023a_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_imperix_M2C_NN_contr_T *const imperix_M2C_NN_control_2023a_M;

#ifdef __cplusplus

}

#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S3>/Gain' : Unused code path elimination
//  Block '<S3>/Gain19' : Unused code path elimination
//  Block '<S1>/Add21' : Unused code path elimination
//  Block '<S1>/Data Type Conversion1' : Unused code path elimination
//  Block '<S1>/Data Type Conversion102' : Unused code path elimination
//  Block '<S1>/Data Type Conversion107' : Unused code path elimination
//  Block '<S1>/Data Type Conversion110' : Unused code path elimination
//  Block '<S1>/Data Type Conversion115' : Unused code path elimination
//  Block '<S1>/Data Type Conversion118' : Unused code path elimination
//  Block '<S1>/Data Type Conversion15' : Unused code path elimination
//  Block '<S1>/Data Type Conversion17' : Unused code path elimination
//  Block '<S1>/Data Type Conversion18' : Unused code path elimination
//  Block '<S1>/Data Type Conversion19' : Unused code path elimination
//  Block '<S1>/Data Type Conversion2' : Unused code path elimination
//  Block '<S1>/Data Type Conversion21' : Unused code path elimination
//  Block '<S1>/Data Type Conversion24' : Unused code path elimination
//  Block '<S1>/Data Type Conversion3' : Unused code path elimination
//  Block '<S1>/Data Type Conversion36' : Unused code path elimination
//  Block '<S1>/Data Type Conversion39' : Unused code path elimination
//  Block '<S1>/Data Type Conversion4' : Unused code path elimination
//  Block '<S1>/Data Type Conversion5' : Unused code path elimination
//  Block '<S1>/Data Type Conversion54' : Unused code path elimination
//  Block '<S1>/Data Type Conversion55' : Unused code path elimination
//  Block '<S1>/Data Type Conversion57' : Unused code path elimination
//  Block '<S1>/Data Type Conversion6' : Unused code path elimination
//  Block '<S1>/Data Type Conversion78' : Unused code path elimination
//  Block '<S1>/Data Type Conversion80' : Unused code path elimination
//  Block '<S1>/Data Type Conversion9' : Unused code path elimination
//  Block '<S1>/Data Type Conversion97' : Unused code path elimination
//  Block '<S1>/Gain2' : Unused code path elimination
//  Block '<S28>/Add1' : Unused code path elimination
//  Block '<S28>/Add2' : Unused code path elimination
//  Block '<S28>/Gain1' : Unused code path elimination
//  Block '<S28>/Gain2' : Unused code path elimination
//  Block '<S28>/Step' : Unused code path elimination
//  Block '<S28>/Step2' : Unused code path elimination
//  Block '<S28>/Step3' : Unused code path elimination
//  Block '<S28>/Step5' : Unused code path elimination
//  Block '<S28>/Step6' : Unused code path elimination
//  Block '<S102>/Constant' : Unused code path elimination
//  Block '<S102>/Gain' : Unused code path elimination
//  Block '<S102>/Sum' : Unused code path elimination
//  Block '<S1>/Sum of Elements11' : Unused code path elimination
//  Block '<S1>/Sum of Elements13' : Unused code path elimination
//  Block '<S1>/Sum of Elements3' : Unused code path elimination
//  Block '<S1>/Sum of Elements4' : Unused code path elimination
//  Block '<S1>/Sum of Elements5' : Unused code path elimination
//  Block '<S1>/Sum of Elements6' : Unused code path elimination
//  Block '<S1>/Sum of Elements9' : Unused code path elimination
//  Block '<S1>/To Workspace4' : Unused code path elimination
//  Block '<S114>/Gain1' : Unused code path elimination
//  Block '<S114>/Gain3' : Unused code path elimination
//  Block '<S1>/Data Type Conversion23' : Eliminate redundant data type conversion


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
//  '<Root>' : 'imperix_M2C_NN_control_2023a'
//  '<S1>'   : 'imperix_M2C_NN_control_2023a/Closed_loop_control'
//  '<S2>'   : 'imperix_M2C_NN_control_2023a/Plant_Model'
//  '<S3>'   : 'imperix_M2C_NN_control_2023a/Closed_loop_control/1 to-+-6'
//  '<S4>'   : 'imperix_M2C_NN_control_2023a/Closed_loop_control/3ph->RRF'
//  '<S5>'   : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC'
//  '<S6>'   : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC1'
//  '<S7>'   : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC19'
//  '<S8>'   : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC2'
//  '<S9>'   : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC20'
//  '<S10>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC21'
//  '<S11>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC22'
//  '<S12>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC23'
//  '<S13>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC24'
//  '<S14>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC25'
//  '<S15>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC3'
//  '<S16>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC4'
//  '<S17>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC5'
//  '<S18>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC8'
//  '<S19>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Alpha-Beta-Zero to abc'
//  '<S20>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Circulating Current Control MPC'
//  '<S21>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Configuration'
//  '<S22>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/DQ - AlphaBeta'
//  '<S23>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Divide'
//  '<S24>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Flux Control Proportional Control1'
//  '<S25>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Flux obs2'
//  '<S26>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Ib'
//  '<S27>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Input Current Control Proportional Integral Control'
//  '<S28>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Input and Output References'
//  '<S29>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)'
//  '<S30>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/MATLAB Function2'
//  '<S31>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/MATLAB Function3'
//  '<S32>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/MATLAB Function4'
//  '<S33>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/NN based ICB + LFOM'
//  '<S34>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Output Current Control Proportional Integral Control1'
//  '<S35>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/P,Q1'
//  '<S36>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/PWM_CB3'
//  '<S37>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe1'
//  '<S38>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe10'
//  '<S39>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe11'
//  '<S40>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe12'
//  '<S41>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe13'
//  '<S42>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe14'
//  '<S43>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe15'
//  '<S44>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe16'
//  '<S45>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe17'
//  '<S46>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe18'
//  '<S47>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe19'
//  '<S48>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe2'
//  '<S49>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe20'
//  '<S50>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe21'
//  '<S51>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe22'
//  '<S52>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe23'
//  '<S53>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe24'
//  '<S54>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe25'
//  '<S55>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe26'
//  '<S56>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe27'
//  '<S57>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe28'
//  '<S58>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe29'
//  '<S59>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe3'
//  '<S60>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe30'
//  '<S61>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe31'
//  '<S62>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe32'
//  '<S63>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe33'
//  '<S64>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe34'
//  '<S65>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe35'
//  '<S66>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe36'
//  '<S67>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe37'
//  '<S68>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe38'
//  '<S69>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe39'
//  '<S70>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe4'
//  '<S71>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe40'
//  '<S72>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe41'
//  '<S73>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe42'
//  '<S74>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe43'
//  '<S75>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe44'
//  '<S76>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe45'
//  '<S77>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe46'
//  '<S78>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe47'
//  '<S79>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe48'
//  '<S80>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe49'
//  '<S81>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe5'
//  '<S82>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe50'
//  '<S83>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe51'
//  '<S84>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe52'
//  '<S85>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe53'
//  '<S86>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe54'
//  '<S87>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe55'
//  '<S88>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe56'
//  '<S89>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe57'
//  '<S90>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe58'
//  '<S91>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe59'
//  '<S92>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe6'
//  '<S93>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe7'
//  '<S94>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe8'
//  '<S95>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe9'
//  '<S96>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Speed Control Proportional Integral Control1'
//  '<S97>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1'
//  '<S98>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2'
//  '<S99>'  : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3'
//  '<S100>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4'
//  '<S101>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5'
//  '<S102>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9'
//  '<S103>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/TEB Control Proportional Integral Control1'
//  '<S104>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tab0'
//  '<S105>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter1'
//  '<S106>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter16'
//  '<S107>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter17'
//  '<S108>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter18'
//  '<S109>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter19'
//  '<S110>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter20'
//  '<S111>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter21'
//  '<S112>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter23'
//  '<S113>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter3'
//  '<S114>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/abc to Alpha-Beta-Zero'
//  '<S115>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/abc to dq1'
//  '<S116>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/dq --> ab'
//  '<S117>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC/sub'
//  '<S118>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC/sub/generation'
//  '<S119>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC1/sub'
//  '<S120>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC1/sub/generation'
//  '<S121>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC19/sub'
//  '<S122>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC19/sub/generation'
//  '<S123>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC2/sub'
//  '<S124>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC2/sub/generation'
//  '<S125>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC20/sub'
//  '<S126>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC20/sub/generation'
//  '<S127>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC21/sub'
//  '<S128>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC21/sub/generation'
//  '<S129>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC22/sub'
//  '<S130>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC22/sub/generation'
//  '<S131>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC23/sub'
//  '<S132>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC23/sub/generation'
//  '<S133>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC24/sub'
//  '<S134>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC24/sub/generation'
//  '<S135>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC25/sub'
//  '<S136>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC25/sub/generation'
//  '<S137>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC3/sub'
//  '<S138>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC3/sub/generation'
//  '<S139>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC4/sub'
//  '<S140>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC4/sub/generation'
//  '<S141>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC5/sub'
//  '<S142>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC5/sub/generation'
//  '<S143>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC8/sub'
//  '<S144>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/ADC8/sub/generation'
//  '<S145>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Configuration/Sampling clock'
//  '<S146>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Configuration/clk0'
//  '<S147>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S148>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Configuration/clk0/sub'
//  '<S149>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S150>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Input and Output References/Tunable parameter'
//  '<S151>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Input and Output References/Tunable parameter/sub'
//  '<S152>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Input and Output References/Tunable parameter/sub/generation'
//  '<S153>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete'
//  '<S154>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Compare To Constant'
//  '<S155>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Compare To Constant1'
//  '<S156>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Reinitialization'
//  '<S157>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/NN based ICB + LFOM/Alpha-Beta-Zero to abc'
//  '<S158>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/NN based ICB + LFOM/Alpha-Beta-Zero to abc1'
//  '<S159>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/NN based ICB + LFOM/Predict'
//  '<S160>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/NN based ICB + LFOM/Predict/MLFB'
//  '<S161>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/PWM_CB3/sub'
//  '<S162>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/PWM_CB3/sub/generation'
//  '<S163>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe1/sub'
//  '<S164>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe1/sub/generation'
//  '<S165>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe10/sub'
//  '<S166>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe10/sub/generation'
//  '<S167>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe11/sub'
//  '<S168>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe11/sub/generation'
//  '<S169>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe12/sub'
//  '<S170>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe12/sub/generation'
//  '<S171>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe13/sub'
//  '<S172>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe13/sub/generation'
//  '<S173>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe14/sub'
//  '<S174>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe14/sub/generation'
//  '<S175>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe15/sub'
//  '<S176>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe15/sub/generation'
//  '<S177>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe16/sub'
//  '<S178>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe16/sub/generation'
//  '<S179>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe17/sub'
//  '<S180>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe17/sub/generation'
//  '<S181>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe18/sub'
//  '<S182>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe18/sub/generation'
//  '<S183>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe19/sub'
//  '<S184>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe19/sub/generation'
//  '<S185>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe2/sub'
//  '<S186>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe2/sub/generation'
//  '<S187>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe20/sub'
//  '<S188>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe20/sub/generation'
//  '<S189>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe21/sub'
//  '<S190>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe21/sub/generation'
//  '<S191>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe22/sub'
//  '<S192>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe22/sub/generation'
//  '<S193>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe23/sub'
//  '<S194>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe23/sub/generation'
//  '<S195>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe24/sub'
//  '<S196>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe24/sub/generation'
//  '<S197>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe25/sub'
//  '<S198>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe25/sub/generation'
//  '<S199>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe26/sub'
//  '<S200>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe26/sub/generation'
//  '<S201>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe27/sub'
//  '<S202>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe27/sub/generation'
//  '<S203>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe28/sub'
//  '<S204>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe28/sub/generation'
//  '<S205>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe29/sub'
//  '<S206>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe29/sub/generation'
//  '<S207>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe3/sub'
//  '<S208>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe3/sub/generation'
//  '<S209>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe30/sub'
//  '<S210>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe30/sub/generation'
//  '<S211>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe31/sub'
//  '<S212>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe31/sub/generation'
//  '<S213>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe32/sub'
//  '<S214>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe32/sub/generation'
//  '<S215>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe33/sub'
//  '<S216>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe33/sub/generation'
//  '<S217>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe34/sub'
//  '<S218>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe34/sub/generation'
//  '<S219>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe35/sub'
//  '<S220>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe35/sub/generation'
//  '<S221>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe36/sub'
//  '<S222>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe36/sub/generation'
//  '<S223>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe37/sub'
//  '<S224>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe37/sub/generation'
//  '<S225>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe38/sub'
//  '<S226>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe38/sub/generation'
//  '<S227>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe39/sub'
//  '<S228>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe39/sub/generation'
//  '<S229>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe4/sub'
//  '<S230>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe4/sub/generation'
//  '<S231>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe40/sub'
//  '<S232>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe40/sub/generation'
//  '<S233>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe41/sub'
//  '<S234>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe41/sub/generation'
//  '<S235>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe42/sub'
//  '<S236>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe42/sub/generation'
//  '<S237>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe43/sub'
//  '<S238>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe43/sub/generation'
//  '<S239>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe44/sub'
//  '<S240>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe44/sub/generation'
//  '<S241>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe45/sub'
//  '<S242>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe45/sub/generation'
//  '<S243>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe46/sub'
//  '<S244>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe46/sub/generation'
//  '<S245>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe47/sub'
//  '<S246>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe47/sub/generation'
//  '<S247>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe48/sub'
//  '<S248>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe48/sub/generation'
//  '<S249>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe49/sub'
//  '<S250>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe49/sub/generation'
//  '<S251>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe5/sub'
//  '<S252>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe5/sub/generation'
//  '<S253>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe50/sub'
//  '<S254>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe50/sub/generation'
//  '<S255>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe51/sub'
//  '<S256>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe51/sub/generation'
//  '<S257>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe52/sub'
//  '<S258>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe52/sub/generation'
//  '<S259>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe53/sub'
//  '<S260>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe53/sub/generation'
//  '<S261>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe54/sub'
//  '<S262>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe54/sub/generation'
//  '<S263>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe55/sub'
//  '<S264>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe55/sub/generation'
//  '<S265>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe56/sub'
//  '<S266>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe56/sub/generation'
//  '<S267>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe57/sub'
//  '<S268>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe57/sub/generation'
//  '<S269>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe58/sub'
//  '<S270>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe58/sub/generation'
//  '<S271>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe59/sub'
//  '<S272>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe59/sub/generation'
//  '<S273>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe6/sub'
//  '<S274>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe6/sub/generation'
//  '<S275>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe7/sub'
//  '<S276>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe7/sub/generation'
//  '<S277>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe8/sub'
//  '<S278>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe8/sub/generation'
//  '<S279>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe9/sub'
//  '<S280>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Probe9/sub/generation'
//  '<S281>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S282>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S283>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S284>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S285>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S286>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S287>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S288>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S289>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S290>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S291>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S292>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S293>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S294>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S295>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S296>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S297>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S298>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S299>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S300>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S301>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S302>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S303>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S304>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S305>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S306>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S307>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S308>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S309>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S310>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S311>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S312>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S313>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S314>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S315>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S316>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S317>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S318>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S319>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S320>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S321>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S322>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S323>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S324>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S325>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S326>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S327>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S328>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S329>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S330>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S331>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S332>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S333>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S334>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S335>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S336>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S337>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S338>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S339>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S340>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S341>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/MATLAB Function1'
//  '<S342>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S343>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S344>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S345>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S346>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S347>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S348>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S349>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S350>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S351>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S352>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S353>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S354>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter1/sub'
//  '<S355>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S356>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter16/sub'
//  '<S357>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S358>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter17/sub'
//  '<S359>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter17/sub/generation'
//  '<S360>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter18/sub'
//  '<S361>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter18/sub/generation'
//  '<S362>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter19/sub'
//  '<S363>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter19/sub/generation'
//  '<S364>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter20/sub'
//  '<S365>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter20/sub/generation'
//  '<S366>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter21/sub'
//  '<S367>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter21/sub/generation'
//  '<S368>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter23/sub'
//  '<S369>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter23/sub/generation'
//  '<S370>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter3/sub'
//  '<S371>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S372>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/abc to dq1/Alpha-Beta-Zero to dq1'
//  '<S373>' : 'imperix_M2C_NN_control_2023a/Closed_loop_control/abc to dq1/abc to Alpha-Beta-Zero1'

#endif                                 // imperix_M2C_NN_control_2023a_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
