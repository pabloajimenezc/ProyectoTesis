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
// Model version                  : 19.10
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Oct 21 15:31:07 2025
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
  real_T Gain2[6];                     // '<S29>/Gain2'
  real_T ib[6];                        // '<S1>/Ib'
  real32_T ADC;                        // '<S119>/ADC'
  real32_T ADC_k;                      // '<S135>/ADC'
  real32_T ADC_e;                      // '<S113>/ADC'
  real32_T ADC_b;                      // '<S121>/ADC'
  real32_T ADC_k2;                     // '<S115>/ADC'
  real32_T ADC_f;                      // '<S117>/ADC'
  real32_T ADC_n;                      // '<S131>/ADC'
  real32_T ADC_p;                      // '<S133>/ADC'
  real32_T ADC_fj;                     // '<S123>/ADC'
  real32_T ADC_o;                      // '<S111>/ADC'
  real32_T ADC_bn;                     // '<S125>/ADC'
  real32_T ADC_i;                      // '<S127>/ADC'
  real32_T ADC_j;                      // '<S129>/ADC'
  real32_T SFunction;                  // '<S345>/S-Function'
  real32_T DataTypeConversion;         // '<S152>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S154>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S156>/Data Type Conversion'
  real32_T DataTypeConversion_a;       // '<S158>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S160>/Data Type Conversion'
  real32_T DataTypeConversion_il;      // '<S162>/Data Type Conversion'
  real32_T SFunction_i;                // '<S339>/S-Function'
  real32_T DataTypeConversion_m;       // '<S164>/Data Type Conversion'
  real32_T DataTypeConversion_dx;      // '<S166>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S168>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S170>/Data Type Conversion'
  real32_T DataTypeConversion_j;       // '<S172>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S174>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S178>/Data Type Conversion'
  real32_T DataTypeConversion_dy;      // '<S180>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S182>/Data Type Conversion'
  real32_T DataTypeConversion_dg;      // '<S184>/Data Type Conversion'
  real32_T DataTypeConversion_hg;      // '<S186>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S188>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S190>/Data Type Conversion'
  real32_T DataTypeConversion_m5;      // '<S192>/Data Type Conversion'
  real32_T SFunction_p;                // '<S343>/S-Function'
  real32_T SFunction_n;                // '<S341>/S-Function'
  real32_T DataTypeConversion_og;      // '<S194>/Data Type Conversion'
  real32_T DataTypeConversion_it;      // '<S196>/Data Type Conversion'
  real32_T DataTypeConversion_l4;      // '<S198>/Data Type Conversion'
  real32_T DataTypeConversion_kh;      // '<S200>/Data Type Conversion'
  real32_T DataTypeConversion_jl;      // '<S204>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S206>/Data Type Conversion'
  real32_T DataTypeConversion_dm;      // '<S208>/Data Type Conversion'
  real32_T DataTypeConversion_is;      // '<S210>/Data Type Conversion'
  real32_T DataTypeConversion_do;      // '<S212>/Data Type Conversion'
  real32_T DataTypeConversion_cq;      // '<S214>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S216>/Data Type Conversion'
  real32_T DataTypeConversion_n0;      // '<S218>/Data Type Conversion'
  real32_T DataTypeConversion_aq;      // '<S220>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S222>/Data Type Conversion'
  real32_T DataTypeConversion_ln;      // '<S224>/Data Type Conversion'
  real32_T DataTypeConversion_bp;      // '<S226>/Data Type Conversion'
  real32_T DataTypeConversion_f5;      // '<S228>/Data Type Conversion'
  real32_T DataTypeConversion_kk;      // '<S230>/Data Type Conversion'
  real32_T DataTypeConversion_on;      // '<S232>/Data Type Conversion'
  real32_T DataTypeConversion_ci;      // '<S234>/Data Type Conversion'
  real32_T DataTypeConversion_n4;      // '<S236>/Data Type Conversion'
  real32_T DataTypeConversion_o0;      // '<S238>/Data Type Conversion'
  real32_T DataTypeConversion_gg;      // '<S240>/Data Type Conversion'
  real32_T DataTypeConversion_khy;     // '<S242>/Data Type Conversion'
  real32_T DataTypeConversion_hb;      // '<S244>/Data Type Conversion'
  real32_T DataTypeConversion_by;      // '<S246>/Data Type Conversion'
  real32_T DataTypeConversion_if;      // '<S248>/Data Type Conversion'
  real32_T DataTypeConversion_gw;      // '<S250>/Data Type Conversion'
  real32_T DataTypeConversion_ne;      // '<S252>/Data Type Conversion'
  real32_T DataTypeConversion_nf;      // '<S254>/Data Type Conversion'
  real32_T DataTypeConversion_lj;      // '<S256>/Data Type Conversion'
  real32_T DataTypeConversion_nfm;     // '<S258>/Data Type Conversion'
  real32_T DataTypeConversion_ka;      // '<S260>/Data Type Conversion'
  real32_T DataTypeConversion_pc;      // '<S262>/Data Type Conversion'
  real32_T DataTypeConversion_ki;      // '<S264>/Data Type Conversion'
  real32_T SFunction_d;                // '<S349>/S-Function'
  real32_T DataTypeConversion1;        // '<S32>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S32>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S32>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S265>/Data Type Conversion1'
  real32_T DataTypeConversion2_e;      // '<S265>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S265>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S266>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S266>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S266>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S267>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S267>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S267>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S268>/Data Type Conversion1'
  real32_T DataTypeConversion2_gn;     // '<S268>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S268>/Data Type Conversion3'
  real32_T DataTypeConversion1_j;      // '<S277>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S277>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S277>/Data Type Conversion3'
  real32_T DataTypeConversion1_n;      // '<S278>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S278>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S278>/Data Type Conversion3'
  real32_T DataTypeConversion1_lt;     // '<S279>/Data Type Conversion1'
  real32_T DataTypeConversion2_ev;     // '<S279>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S279>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S280>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S280>/Data Type Conversion2'
  real32_T DataTypeConversion3_m;      // '<S280>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S289>/Data Type Conversion1'
  real32_T DataTypeConversion2_h;      // '<S289>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S289>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S290>/Data Type Conversion1'
  real32_T DataTypeConversion2_fi;     // '<S290>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S290>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S291>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S291>/Data Type Conversion2'
  real32_T DataTypeConversion3_bn;     // '<S291>/Data Type Conversion3'
  real32_T DataTypeConversion1_bn;     // '<S292>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S292>/Data Type Conversion2'
  real32_T DataTypeConversion3_k2;     // '<S292>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S301>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S301>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S301>/Data Type Conversion3'
  real32_T DataTypeConversion1_c0;     // '<S302>/Data Type Conversion1'
  real32_T DataTypeConversion2_eb;     // '<S302>/Data Type Conversion2'
  real32_T DataTypeConversion3_or;     // '<S302>/Data Type Conversion3'
  real32_T DataTypeConversion1_ls;     // '<S303>/Data Type Conversion1'
  real32_T DataTypeConversion2_kr;     // '<S303>/Data Type Conversion2'
  real32_T DataTypeConversion3_ln;     // '<S303>/Data Type Conversion3'
  real32_T DataTypeConversion1_bo;     // '<S304>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S304>/Data Type Conversion2'
  real32_T DataTypeConversion3_df;     // '<S304>/Data Type Conversion3'
  real32_T DataTypeConversion1_p;      // '<S313>/Data Type Conversion1'
  real32_T DataTypeConversion2_hz;     // '<S313>/Data Type Conversion2'
  real32_T DataTypeConversion3_je;     // '<S313>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S314>/Data Type Conversion1'
  real32_T DataTypeConversion2_k0;     // '<S314>/Data Type Conversion2'
  real32_T DataTypeConversion3_og;     // '<S314>/Data Type Conversion3'
  real32_T DataTypeConversion1_jv;     // '<S315>/Data Type Conversion1'
  real32_T DataTypeConversion2_fr;     // '<S315>/Data Type Conversion2'
  real32_T DataTypeConversion3_he;     // '<S315>/Data Type Conversion3'
  real32_T DataTypeConversion1_ko;     // '<S316>/Data Type Conversion1'
  real32_T DataTypeConversion2_m;      // '<S316>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S316>/Data Type Conversion3'
  real32_T DataTypeConversion1_f;      // '<S326>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S326>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S326>/Data Type Conversion3'
  real32_T DataTypeConversion1_km;     // '<S327>/Data Type Conversion1'
  real32_T DataTypeConversion2_av;     // '<S327>/Data Type Conversion2'
  real32_T DataTypeConversion3_gg;     // '<S327>/Data Type Conversion3'
  real32_T DataTypeConversion1_gd;     // '<S328>/Data Type Conversion1'
  real32_T DataTypeConversion2_gw;     // '<S328>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S328>/Data Type Conversion3'
  real32_T DataTypeConversion1_dr;     // '<S329>/Data Type Conversion1'
  real32_T DataTypeConversion2_gu;     // '<S329>/Data Type Conversion2'
  real32_T DataTypeConversion3_mp;     // '<S329>/Data Type Conversion3'
  real32_T ADC_jl;                     // '<S109>/ADC'
  real32_T DataTypeConversion_er;      // '<S202>/Data Type Conversion'
  real32_T DataTypeConversion_k0;      // '<S176>/Data Type Conversion'
  int32_T SFunction_f;                 // '<S347>/S-Function'
  int32_T SFunction_c;                 // '<S351>/S-Function'
  B_MovingRMS1_imperix_M2C_NN_c_T MovingRMS2;// '<S1>/Moving RMS1'
  B_MovingRMS1_imperix_M2C_NN_c_T MovingRMS1;// '<S1>/Moving RMS1'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_M2C_NN_control_202_T {
  real_T Integrator_DSTATE;            // '<S141>/Integrator'
  real_T SFunction_DSTATE;             // '<S345>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S347>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S351>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S152>/S-Function'
  real_T SFunction_DSTATE_ea;          // '<S154>/S-Function'
  real_T SFunction_DSTATE_m;           // '<S156>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S158>/S-Function'
  real_T SFunction_DSTATE_hw;          // '<S160>/S-Function'
  real_T SFunction_DSTATE_my;          // '<S162>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S339>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S164>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S166>/S-Function'
  real_T SFunction_DSTATE_fo;          // '<S168>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S170>/S-Function'
  real_T SFunction_DSTATE_cm;          // '<S172>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S174>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S178>/S-Function'
  real_T SFunction_DSTATE_fos;         // '<S180>/S-Function'
  real_T SFunction_DSTATE_cn;          // '<S182>/S-Function'
  real_T SFunction_DSTATE_fox;         // '<S184>/S-Function'
  real_T SFunction_DSTATE_ce;          // '<S186>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S188>/S-Function'
  real_T SFunction_DSTATE_jn;          // '<S190>/S-Function'
  real_T SFunction_DSTATE_ap;          // '<S192>/S-Function'
  real_T SFunction_DSTATE_fw;          // '<S343>/S-Function'
  real_T SFunction_DSTATE_o3;          // '<S341>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S194>/S-Function'
  real_T SFunction_DSTATE_fm;          // '<S196>/S-Function'
  real_T SFunction_DSTATE_ev;          // '<S198>/S-Function'
  real_T SFunction_DSTATE_ec;          // '<S200>/S-Function'
  real_T SFunction_DSTATE_ei;          // '<S204>/S-Function'
  real_T SFunction_DSTATE_dp;          // '<S206>/S-Function'
  real_T SFunction_DSTATE_hm;          // '<S208>/S-Function'
  real_T SFunction_DSTATE_du;          // '<S210>/S-Function'
  real_T SFunction_DSTATE_gm;          // '<S212>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S214>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S216>/S-Function'
  real_T SFunction_DSTATE_dt;          // '<S218>/S-Function'
  real_T SFunction_DSTATE_at;          // '<S220>/S-Function'
  real_T SFunction_DSTATE_gl;          // '<S222>/S-Function'
  real_T SFunction_DSTATE_fk;          // '<S224>/S-Function'
  real_T SFunction_DSTATE_ie;          // '<S226>/S-Function'
  real_T SFunction_DSTATE_a5;          // '<S228>/S-Function'
  real_T SFunction_DSTATE_ov;          // '<S230>/S-Function'
  real_T SFunction_DSTATE_pw;          // '<S232>/S-Function'
  real_T SFunction_DSTATE_pn;          // '<S234>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S236>/S-Function'
  real_T SFunction_DSTATE_lq;          // '<S238>/S-Function'
  real_T SFunction_DSTATE_ny;          // '<S240>/S-Function'
  real_T SFunction_DSTATE_cnk;         // '<S242>/S-Function'
  real_T SFunction_DSTATE_co;          // '<S244>/S-Function'
  real_T SFunction_DSTATE_md;          // '<S246>/S-Function'
  real_T SFunction_DSTATE_atl;         // '<S248>/S-Function'
  real_T SFunction_DSTATE_bz;          // '<S250>/S-Function'
  real_T SFunction_DSTATE_i3;          // '<S252>/S-Function'
  real_T SFunction_DSTATE_g4;          // '<S254>/S-Function'
  real_T SFunction_DSTATE_nb;          // '<S256>/S-Function'
  real_T SFunction_DSTATE_hl;          // '<S258>/S-Function'
  real_T SFunction_DSTATE_bo;          // '<S260>/S-Function'
  real_T SFunction_DSTATE_ej;          // '<S262>/S-Function'
  real_T SFunction_DSTATE_ck;          // '<S264>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S138>/S-Function'
  real_T SFunction_DSTATE_ms;          // '<S349>/S-Function'
  real_T SFunction_DSTATE_nd;          // '<S202>/S-Function'
  real_T SFunction_DSTATE_et;          // '<S176>/S-Function'
  real_T iq_ref_Buffer0;               // synthesized block
  real_T TmpRTBAtSpeedControlProportiona[2];// synthesized block
  real_T TmpRTBAtSpeedControlProportio_l;// synthesized block
  real_T a;                // '<S1>/TEB Control Proportional Integral Control1'
  real_T u;                // '<S1>/TEB Control Proportional Integral Control1'
  real_T p1;                           // '<S96>/MATLAB Function1'
  real_T p2;                           // '<S96>/MATLAB Function1'
  real_T p3;                           // '<S96>/MATLAB Function1'
  real_T p4;                           // '<S96>/MATLAB Function1'
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
  boolean_T Initial_FirstOutputTime;   // '<S141>/Initial'
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
                                          //    '<S29>/Gain3'

  real_T N[12];                        // Variable: N
                                          //  Referenced by: '<S29>/Gain2'

  real_T T[36];                        // Variable: T
                                          //  Referenced by:
                                          //    '<S1>/Gain41'
                                          //    '<S1>/Gain61'

  real_T Tab[6];                       // Variable: Tab
                                          //  Referenced by: '<S1>/P'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by: '<S29>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S29>/Gain1'

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
                                 //    '<S142>/Constant'
                                 //    '<S144>/Bias'
                                 //    '<S144>/Gain'
                                 //    '<S144>/Gain1'

  real_T IntegratorwithWrappedStateDis_p;
                              // Mask Parameter: IntegratorwithWrappedStateDis_p
                                 //  Referenced by:
                                 //    '<S143>/Constant'
                                 //    '<S144>/Gain'
                                 //    '<S144>/Gain1'

  real_T IntegratorwithWrappedStateDis_g;
                              // Mask Parameter: IntegratorwithWrappedStateDis_g
                                 //  Referenced by: '<S141>/Initial'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S119>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S135>/ADC'

  real_T ADC_P8_e;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S113>/ADC'

  real_T ADC_P8_ez;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S121>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S115>/ADC'

  real_T ADC_P8_h;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S117>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S131>/ADC'

  real_T ADC_P8_f;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S133>/ADC'

  real_T ADC_P8_kb;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S123>/ADC'

  real_T ADC_P8_i;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S111>/ADC'

  real_T ADC_P8_is;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S125>/ADC'

  real_T ADC_P8_j;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S127>/ADC'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S29>/Constant'

  real_T Gain3_Gain[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S145>/Gain3'

  real_T Gain3_Gain_n[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S353>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S353>/Gain1'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S141>/Integrator'

  real_T Gain31_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain31'

  real_T ADC_P8_kp;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S129>/ADC'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S345>/S-Function'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S1>/Gain8'

  real_T SFunction_P17_g;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S347>/S-Function'

  real_T iq_ref_InitialCondition;      // Expression: 0
                                          //  Referenced by:

  real_T SFunction_P17_gm;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S351>/S-Function'

  real_T Gain84_Gain;                  // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain84'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S29>/Constant1'

  real_T Gain3_Gain_j[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S146>/Gain3'

  real_T Gain17_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain17'

  real_T Constant2_Value;              // Expression: 520
                                          //  Referenced by: '<S1>/Constant2'

  real_T Constant1_Value_l;            // Expression: 0
                                          //  Referenced by: '<S1>/Constant1'

  real_T Gain3_Gain_nb[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S18>/Gain3'

  real_T Gain_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain'

  real_T Gain19_Gain;                  // Expression: 0.5
                                          //  Referenced by: '<S1>/Gain19'

  real_T Constant13_Value;             // Expression: 520
                                          //  Referenced by: '<S1>/Constant13'

  real_T SFunction_P17_gu;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S339>/S-Function'

  real_T Constant14_Value;             // Expression: 520
                                          //  Referenced by: '<S1>/Constant14'

  real_T Gain54_Gain;                  // Expression: 3
                                          //  Referenced by: '<S1>/Gain54'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S343>/S-Function'

  real_T SFunction_P17_k;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S341>/S-Function'

  real_T Gain21_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain21'

  real_T Gain3_Gain_a;                 // Expression: -1
                                          //  Referenced by: '<S1>/Gain3'

  real_T Gain25_Gain;                  // Expression: 100/520
                                          //  Referenced by: '<S1>/Gain25'

  real_T Constant3_Value;              // Expression: 1
                                          //  Referenced by: '<S1>/Constant3'

  real_T SFunction_P17_p;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S349>/S-Function'

  real_T Gain20_Gain;                  // Expression: -1
                                          //  Referenced by: '<S1>/Gain20'

  real_T Gain9_Gain;                   // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain9'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S32>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S265>/phase'

  real_T phase_Value_b;                // Expression: PHASE
                                          //  Referenced by: '<S266>/phase'

  real_T phase_Value_nr;               // Expression: PHASE
                                          //  Referenced by: '<S267>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S268>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S277>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S278>/phase'

  real_T phase_Value_by;               // Expression: PHASE
                                          //  Referenced by: '<S279>/phase'

  real_T phase_Value_bys;              // Expression: PHASE
                                          //  Referenced by: '<S280>/phase'

  real_T Gain1_Gain_l;                 // Expression: -1
                                          //  Referenced by: '<S93>/Gain1'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S289>/phase'

  real_T phase_Value_oc;               // Expression: PHASE
                                          //  Referenced by: '<S290>/phase'

  real_T phase_Value_i0;               // Expression: PHASE
                                          //  Referenced by: '<S291>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S292>/phase'

  real_T Gain3_Gain_c;                 // Expression: -1
                                          //  Referenced by: '<S94>/Gain3'

  real_T phase_Value_bj;               // Expression: PHASE
                                          //  Referenced by: '<S301>/phase'

  real_T phase_Value_d;                // Expression: PHASE
                                          //  Referenced by: '<S302>/phase'

  real_T phase_Value_bm;               // Expression: PHASE
                                          //  Referenced by: '<S303>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S304>/phase'

  real_T Gain3_Gain_f;                 // Expression: -1
                                          //  Referenced by: '<S95>/Gain3'

  real_T phase_Value_lt;               // Expression: PHASE
                                          //  Referenced by: '<S313>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S314>/phase'

  real_T phase_Value_n1;               // Expression: PHASE
                                          //  Referenced by: '<S315>/phase'

  real_T phase_Value_cv;               // Expression: PHASE
                                          //  Referenced by: '<S316>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S326>/phase'

  real_T phase_Value_n13;              // Expression: PHASE
                                          //  Referenced by: '<S327>/phase'

  real_T phase_Value_e;                // Expression: PHASE
                                          //  Referenced by: '<S328>/phase'

  real_T phase_Value_g;                // Expression: PHASE
                                          //  Referenced by: '<S329>/phase'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S109>/ADC'

  real_T Constant4_Value;              // Expression: 520
                                          //  Referenced by: '<S1>/Constant4'

  real_T Gain5_Gain;                   // Expression: 1/2
                                          //  Referenced by: '<S1>/Gain5'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S150>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S150>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S150>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S270>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S270>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S270>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S272>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S272>/PWM'

  real32_T PWM_P4_m;                   // Expression: single(phase)
                                          //  Referenced by: '<S272>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S274>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S274>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S274>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S276>/PWM'

  real32_T PWM_P3_j;                   // Expression: single(duty)
                                          //  Referenced by: '<S276>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S276>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S282>/PWM'

  real32_T PWM_P3_dz;                  // Expression: single(duty)
                                          //  Referenced by: '<S282>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S282>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S284>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S284>/PWM'

  real32_T PWM_P4_gw;                  // Expression: single(phase)
                                          //  Referenced by: '<S284>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S286>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S286>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S286>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S288>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S288>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S288>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S294>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S294>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S294>/PWM'

  real32_T PWM_P2_br;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S296>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S296>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S296>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S298>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S298>/PWM'

  real32_T PWM_P4_gk;                  // Expression: single(phase)
                                          //  Referenced by: '<S298>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S300>/PWM'

  real32_T PWM_P3_jn;                  // Expression: single(duty)
                                          //  Referenced by: '<S300>/PWM'

  real32_T PWM_P4_kr;                  // Expression: single(phase)
                                          //  Referenced by: '<S300>/PWM'

  real32_T PWM_P2_b4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S306>/PWM'

  real32_T PWM_P3_p1;                  // Expression: single(duty)
                                          //  Referenced by: '<S306>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S306>/PWM'

  real32_T PWM_P2_nf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S308>/PWM'

  real32_T PWM_P3_ii;                  // Expression: single(duty)
                                          //  Referenced by: '<S308>/PWM'

  real32_T PWM_P4_m3;                  // Expression: single(phase)
                                          //  Referenced by: '<S308>/PWM'

  real32_T PWM_P2_jc;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S310>/PWM'

  real32_T PWM_P3_my;                  // Expression: single(duty)
                                          //  Referenced by: '<S310>/PWM'

  real32_T PWM_P4_hb;                  // Expression: single(phase)
                                          //  Referenced by: '<S310>/PWM'

  real32_T PWM_P2_l;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S312>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S312>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S312>/PWM'

  real32_T PWM_P2_en;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S318>/PWM'

  real32_T PWM_P3_jb;                  // Expression: single(duty)
                                          //  Referenced by: '<S318>/PWM'

  real32_T PWM_P4_ax;                  // Expression: single(phase)
                                          //  Referenced by: '<S318>/PWM'

  real32_T PWM_P2_hu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S320>/PWM'

  real32_T PWM_P3_bk;                  // Expression: single(duty)
                                          //  Referenced by: '<S320>/PWM'

  real32_T PWM_P4_d;                   // Expression: single(phase)
                                          //  Referenced by: '<S320>/PWM'

  real32_T PWM_P2_fi;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S322>/PWM'

  real32_T PWM_P3_hx;                  // Expression: single(duty)
                                          //  Referenced by: '<S322>/PWM'

  real32_T PWM_P4_kt;                  // Expression: single(phase)
                                          //  Referenced by: '<S322>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S324>/PWM'

  real32_T PWM_P3_pz;                  // Expression: single(duty)
                                          //  Referenced by: '<S324>/PWM'

  real32_T PWM_P4_gq;                  // Expression: single(phase)
                                          //  Referenced by: '<S324>/PWM'

  real32_T PWM_P2_ku;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S331>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S331>/PWM'

  real32_T PWM_P4_im;                  // Expression: single(phase)
                                          //  Referenced by: '<S331>/PWM'

  real32_T PWM_P2_n0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S333>/PWM'

  real32_T PWM_P3_j1;                  // Expression: single(duty)
                                          //  Referenced by: '<S333>/PWM'

  real32_T PWM_P4_au;                  // Expression: single(phase)
                                          //  Referenced by: '<S333>/PWM'

  real32_T PWM_P2_jq;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S335>/PWM'

  real32_T PWM_P3_is;                  // Expression: single(duty)
                                          //  Referenced by: '<S335>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S335>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S337>/PWM'

  real32_T PWM_P3_h3;                  // Expression: single(duty)
                                          //  Referenced by: '<S337>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S337>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S119>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S119>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S135>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S135>/ADC'

  real32_T ADC_P2_d;                   // Expression: single(gain)
                                          //  Referenced by: '<S113>/ADC'

  real32_T ADC_P3_o;                   // Expression: single(offset)
                                          //  Referenced by: '<S113>/ADC'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S121>/ADC'

  real32_T ADC_P3_k;                   // Expression: single(offset)
                                          //  Referenced by: '<S121>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S115>/ADC'

  real32_T ADC_P3_a;                   // Expression: single(offset)
                                          //  Referenced by: '<S115>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S117>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S117>/ADC'

  real32_T ADC_P2_j;                   // Expression: single(gain)
                                          //  Referenced by: '<S131>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S131>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S133>/ADC'

  real32_T ADC_P3_p;                   // Expression: single(offset)
                                          //  Referenced by: '<S133>/ADC'

  real32_T ADC_P2_g;                   // Expression: single(gain)
                                          //  Referenced by: '<S123>/ADC'

  real32_T ADC_P3_nl;                  // Expression: single(offset)
                                          //  Referenced by: '<S123>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S111>/ADC'

  real32_T ADC_P3_g;                   // Expression: single(offset)
                                          //  Referenced by: '<S111>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S125>/ADC'

  real32_T ADC_P3_n2;                  // Expression: single(offset)
                                          //  Referenced by: '<S125>/ADC'

  real32_T ADC_P2_gq;                  // Expression: single(gain)
                                          //  Referenced by: '<S127>/ADC'

  real32_T ADC_P3_b;                   // Expression: single(offset)
                                          //  Referenced by: '<S127>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S129>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S129>/ADC'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S345>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S345>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S345>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S345>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S345>/S-Function'

  real32_T SFunction_P3_a;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S347>/S-Function'

  real32_T SFunction_P4_m;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S347>/S-Function'

  real32_T SFunction_P5_j;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S347>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(0)
                                          //  Referenced by: '<S347>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S347>/S-Function'

  real32_T SFunction_P3_f;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S351>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S351>/S-Function'

  real32_T SFunction_P5_d;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S351>/S-Function'

  real32_T SFunction_P6_di;            // Expression: single(0)
                                          //  Referenced by: '<S351>/S-Function'

  real32_T SFunction_P7_ic;            // Expression: single(0)
                                          //  Referenced by: '<S351>/S-Function'

  real32_T SFunction_P6_d5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S152>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S152>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S154>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S154>/S-Function'

  real32_T SFunction_P6_d5c;           // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S156>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S156>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S158>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S158>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S160>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S160>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S162>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S162>/S-Function'

  real32_T SFunction_P3_j;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S339>/S-Function'

  real32_T SFunction_P4_k;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S339>/S-Function'

  real32_T SFunction_P5_h;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S339>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(0)
                                          //  Referenced by: '<S339>/S-Function'

  real32_T SFunction_P7_n;             // Expression: single(0)
                                          //  Referenced by: '<S339>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S164>/S-Function'

  real32_T SFunction_P12_ca;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S164>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S166>/S-Function'

  real32_T SFunction_P12_ip;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S166>/S-Function'

  real32_T SFunction_P6_l;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S168>/S-Function'

  real32_T SFunction_P12_kf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S168>/S-Function'

  real32_T SFunction_P6_oz;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S170>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S170>/S-Function'

  real32_T SFunction_P6_eh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S172>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S172>/S-Function'

  real32_T SFunction_P6_e4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S174>/S-Function'

  real32_T SFunction_P12_nn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S174>/S-Function'

  real32_T SFunction_P6_nj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S178>/S-Function'

  real32_T SFunction_P12_on;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S178>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S180>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S180>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S182>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S182>/S-Function'

  real32_T SFunction_P6_ef;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P6_fm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P12_kd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P6_ly;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P6_ea;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S190>/S-Function'

  real32_T SFunction_P12_gx;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S190>/S-Function'

  real32_T SFunction_P6_dd;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S192>/S-Function'

  real32_T SFunction_P12_oo;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S192>/S-Function'

  real32_T SFunction_P3_ae;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S343>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S343>/S-Function'

  real32_T SFunction_P5_g;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S343>/S-Function'

  real32_T SFunction_P6_ap;            // Expression: single(0)
                                          //  Referenced by: '<S343>/S-Function'

  real32_T SFunction_P7_nq;            // Expression: single(0)
                                          //  Referenced by: '<S343>/S-Function'

  real32_T SFunction_P3_b;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S341>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S341>/S-Function'

  real32_T SFunction_P5_c;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S341>/S-Function'

  real32_T SFunction_P6_ce;            // Expression: single(0)
                                          //  Referenced by: '<S341>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S341>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S194>/S-Function'

  real32_T SFunction_P12_hr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S194>/S-Function'

  real32_T SFunction_P6_bx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S196>/S-Function'

  real32_T SFunction_P12_ks;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S196>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S198>/S-Function'

  real32_T SFunction_P12_la;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S198>/S-Function'

  real32_T SFunction_P6_d1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S200>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S200>/S-Function'

  real32_T SFunction_P6_bv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S204>/S-Function'

  real32_T SFunction_P12_ax;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S204>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S206>/S-Function'

  real32_T SFunction_P12_ge;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S206>/S-Function'

  real32_T SFunction_P6_cy;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S208>/S-Function'

  real32_T SFunction_P12_bi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S208>/S-Function'

  real32_T SFunction_P6_kq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S210>/S-Function'

  real32_T SFunction_P12_hd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S210>/S-Function'

  real32_T SFunction_P6_l3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S212>/S-Function'

  real32_T SFunction_P12_kr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S212>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S214>/S-Function'

  real32_T SFunction_P12_hi;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S214>/S-Function'

  real32_T SFunction_P6_m3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S216>/S-Function'

  real32_T SFunction_P12_gt;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S216>/S-Function'

  real32_T SFunction_P6_ob;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S218>/S-Function'

  real32_T SFunction_P12_dg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S218>/S-Function'

  real32_T SFunction_P6_lf;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S220>/S-Function'

  real32_T SFunction_P12_iv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S220>/S-Function'

  real32_T SFunction_P6_cb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S222>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S222>/S-Function'

  real32_T SFunction_P6_ou;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P12_ic;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P6_eq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P12_cd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P6_jx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P12_hj;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P6_j1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P12_na;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P12_al;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P6_ah;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P12_li;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P6_cr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P12_ny;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P6_fr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P12_ex;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P6_hg;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P12_au;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P6_mn;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P6_nm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P12_mh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P6_hf;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P12_cc;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P6_hj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P12_k3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P6_aa;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P12_iq;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P6_cc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P12_ks3;          // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P6_nh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S254>/S-Function'

  real32_T SFunction_P12_dc;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S254>/S-Function'

  real32_T SFunction_P6_je;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S256>/S-Function'

  real32_T SFunction_P12_eg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S256>/S-Function'

  real32_T SFunction_P6_n3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S258>/S-Function'

  real32_T SFunction_P12_hz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S258>/S-Function'

  real32_T SFunction_P6_nv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S260>/S-Function'

  real32_T SFunction_P12_cf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S260>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S262>/S-Function'

  real32_T SFunction_P12_ns;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S262>/S-Function'

  real32_T SFunction_P6_er;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S264>/S-Function'

  real32_T SFunction_P12_dr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S264>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S138>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S138>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S140>/CLK1'

  real32_T SFunction_P3_i;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S349>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S349>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S349>/S-Function'

  real32_T SFunction_P6_ci;            // Expression: single(0)
                                          //  Referenced by: '<S349>/S-Function'

  real32_T SFunction_P7_l;             // Expression: single(0)
                                          //  Referenced by: '<S349>/S-Function'

  real32_T ADC_P2_i1;                  // Expression: single(gain)
                                          //  Referenced by: '<S109>/ADC'

  real32_T ADC_P3_p4;                  // Expression: single(offset)
                                          //  Referenced by: '<S109>/ADC'

  real32_T SFunction_P6_gg;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S202>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S202>/S-Function'

  real32_T SFunction_P6_hx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S176>/S-Function'

  real32_T SFunction_P12_jv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S176>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S345>/S-Function'

  uint32_T SFunction_P10_e;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S347>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S351>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S152>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S152>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S154>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S154>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S156>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S156>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S158>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S158>/S-Function'

  uint32_T SFunction_P7_e;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S160>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S160>/S-Function'

  uint32_T SFunction_P7_ae;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S162>/S-Function'

  uint32_T SFunction_P13_f3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S162>/S-Function'

  uint32_T SFunction_P10_o;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S339>/S-Function'

  uint32_T SFunction_P7_b1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S164>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S164>/S-Function'

  uint32_T SFunction_P7_ev;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S166>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S166>/S-Function'

  uint32_T SFunction_P7_mi;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S168>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S168>/S-Function'

  uint32_T SFunction_P7_mk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S170>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S170>/S-Function'

  uint32_T SFunction_P7_n0;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S172>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S172>/S-Function'

  uint32_T SFunction_P7_g;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S174>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S174>/S-Function'

  uint32_T SFunction_P7_gj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S178>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S178>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S180>/S-Function'

  uint32_T SFunction_P13_kf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S180>/S-Function'

  uint32_T SFunction_P7_a5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S182>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S182>/S-Function'

  uint32_T SFunction_P7_dw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S184>/S-Function'

  uint32_T SFunction_P13_bv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S184>/S-Function'

  uint32_T SFunction_P7_d3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P13_bz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P7_dv;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S190>/S-Function'

  uint32_T SFunction_P13_mh;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S190>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S192>/S-Function'

  uint32_T SFunction_P13_fe;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S192>/S-Function'

  uint32_T SFunction_P10_b;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S343>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S341>/S-Function'

  uint32_T SFunction_P7_ci;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S194>/S-Function'

  uint32_T SFunction_P13_nq;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S194>/S-Function'

  uint32_T SFunction_P7_fk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S196>/S-Function'

  uint32_T SFunction_P13_b2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S196>/S-Function'

  uint32_T SFunction_P7_mp;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S198>/S-Function'

  uint32_T SFunction_P13_ac;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S198>/S-Function'

  uint32_T SFunction_P7_k;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S200>/S-Function'

  uint32_T SFunction_P13_c3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S200>/S-Function'

  uint32_T SFunction_P7_cc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S204>/S-Function'

  uint32_T SFunction_P13_mg;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S204>/S-Function'

  uint32_T SFunction_P7_ll;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S206>/S-Function'

  uint32_T SFunction_P13_ai;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S206>/S-Function'

  uint32_T SFunction_P7_bq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S208>/S-Function'

  uint32_T SFunction_P13_cn;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S208>/S-Function'

  uint32_T SFunction_P7_kq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S210>/S-Function'

  uint32_T SFunction_P13_lu;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S210>/S-Function'

  uint32_T SFunction_P7_do;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S212>/S-Function'

  uint32_T SFunction_P13_lz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S212>/S-Function'

  uint32_T SFunction_P7_af;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S214>/S-Function'

  uint32_T SFunction_P13_ab;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S214>/S-Function'

  uint32_T SFunction_P7_cx;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S216>/S-Function'

  uint32_T SFunction_P13_ce;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S216>/S-Function'

  uint32_T SFunction_P7_od;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S218>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S218>/S-Function'

  uint32_T SFunction_P7_bk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S220>/S-Function'

  uint32_T SFunction_P13_p3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S220>/S-Function'

  uint32_T SFunction_P7_dt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S222>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S222>/S-Function'

  uint32_T SFunction_P7_bu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P13_bl;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P7_ja;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P13_b0;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P7_g4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P13_jw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P7_id;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P13_ez;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P7_a1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P13_a1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P7_jc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P13_f4;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P7_gh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P13_l3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P7_be;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P13_nv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P7_ai;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P13_os;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P13_oy;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P7_i4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P13_hb;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P7_i4z;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P7_f5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P13_ct;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P7_f5h;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P13_f44;          // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P7_fu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P13_n5;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P7_ki;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S254>/S-Function'

  uint32_T SFunction_P13_lp;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S254>/S-Function'

  uint32_T SFunction_P7_e5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S256>/S-Function'

  uint32_T SFunction_P13_dg;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S256>/S-Function'

  uint32_T SFunction_P7_os;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S258>/S-Function'

  uint32_T SFunction_P13_io;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S258>/S-Function'

  uint32_T SFunction_P7_p;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S260>/S-Function'

  uint32_T SFunction_P13_gk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S260>/S-Function'

  uint32_T SFunction_P7_is;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S262>/S-Function'

  uint32_T SFunction_P13_if;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S262>/S-Function'

  uint32_T SFunction_P7_d2;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S264>/S-Function'

  uint32_T SFunction_P13_pz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S264>/S-Function'

  uint32_T SFunction_P10_c;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S349>/S-Function'

  uint32_T SFunction_P7_ji;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S202>/S-Function'

  uint32_T SFunction_P13_fk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S202>/S-Function'

  uint32_T SFunction_P7_fd;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S176>/S-Function'

  uint32_T SFunction_P13_ot;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S176>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S150>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S150>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S150>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S150>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S150>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S150>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S270>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S270>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S270>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S270>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S270>/PWM'

  int16_T PWM_P9_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S270>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S272>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S272>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S272>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S272>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S272>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S272>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S274>/PWM'

  int16_T PWM_P5_c4;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S274>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S274>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S274>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S274>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S274>/PWM'

  int16_T PWM_P1_p;                    // Expression: int16(lane)
                                          //  Referenced by: '<S276>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S276>/PWM'

  int16_T PWM_P6_k;                    // Expression: int16(rate)
                                          //  Referenced by: '<S276>/PWM'

  int16_T PWM_P7_bv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S276>/PWM'

  int16_T PWM_P8_a;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S276>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S276>/PWM'

  int16_T PWM_P1_hp;                   // Expression: int16(lane)
                                          //  Referenced by: '<S282>/PWM'

  int16_T PWM_P5_m;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S282>/PWM'

  int16_T PWM_P6_hr;                   // Expression: int16(rate)
                                          //  Referenced by: '<S282>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S282>/PWM'

  int16_T PWM_P8_af;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S282>/PWM'

  int16_T PWM_P9_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S282>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S284>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S284>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S284>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S284>/PWM'

  int16_T PWM_P8_i;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S284>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S284>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P5_ce;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P6_g;                    // Expression: int16(rate)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P7_e;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S286>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P8_kl;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P9_p3;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S288>/PWM'

  int16_T PWM_P1_kk;                   // Expression: int16(lane)
                                          //  Referenced by: '<S294>/PWM'

  int16_T PWM_P5_b;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S294>/PWM'

  int16_T PWM_P6_f1;                   // Expression: int16(rate)
                                          //  Referenced by: '<S294>/PWM'

  int16_T PWM_P7_j;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S294>/PWM'

  int16_T PWM_P8_ee;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S294>/PWM'

  int16_T PWM_P9_pw;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S294>/PWM'

  int16_T PWM_P1_f;                    // Expression: int16(lane)
                                          //  Referenced by: '<S296>/PWM'

  int16_T PWM_P5_iv;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S296>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S296>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S296>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S296>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S296>/PWM'

  int16_T PWM_P1_c;                    // Expression: int16(lane)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P6_eu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P7_eu;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P9_o5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S298>/PWM'

  int16_T PWM_P1_hs;                   // Expression: int16(lane)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P5_me;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P6_ma;                   // Expression: int16(rate)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P7_cz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P8_ek;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S300>/PWM'

  int16_T PWM_P1_c4;                   // Expression: int16(lane)
                                          //  Referenced by: '<S306>/PWM'

  int16_T PWM_P5_bj;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S306>/PWM'

  int16_T PWM_P6_o;                    // Expression: int16(rate)
                                          //  Referenced by: '<S306>/PWM'

  int16_T PWM_P7_mm;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S306>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S306>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S306>/PWM'

  int16_T PWM_P1_cj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S308>/PWM'

  int16_T PWM_P5_hb;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S308>/PWM'

  int16_T PWM_P6_ka;                   // Expression: int16(rate)
                                          //  Referenced by: '<S308>/PWM'

  int16_T PWM_P7_ob;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S308>/PWM'

  int16_T PWM_P8_b;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S308>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S308>/PWM'

  int16_T PWM_P1_f0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P5_a0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P7_n;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P8_oi;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P9_ax;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S310>/PWM'

  int16_T PWM_P1_cg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P5_mx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P7_n1;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P8_op;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P9_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S312>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S318>/PWM'

  int16_T PWM_P5_ke;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S318>/PWM'

  int16_T PWM_P6_gz;                   // Expression: int16(rate)
                                          //  Referenced by: '<S318>/PWM'

  int16_T PWM_P7_ow;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S318>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S318>/PWM'

  int16_T PWM_P9_no;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S318>/PWM'

  int16_T PWM_P1_m;                    // Expression: int16(lane)
                                          //  Referenced by: '<S320>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S320>/PWM'

  int16_T PWM_P6_gp;                   // Expression: int16(rate)
                                          //  Referenced by: '<S320>/PWM'

  int16_T PWM_P7_jf;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S320>/PWM'

  int16_T PWM_P8_ea;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S320>/PWM'

  int16_T PWM_P9_nq;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S320>/PWM'

  int16_T PWM_P1_pa;                   // Expression: int16(lane)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P6_nh;                   // Expression: int16(rate)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P9_iz;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S322>/PWM'

  int16_T PWM_P1_jb;                   // Expression: int16(lane)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P6_nd;                   // Expression: int16(rate)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P7_nx;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P8_ox;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P9_ig;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S324>/PWM'

  int16_T PWM_P1_mc;                   // Expression: int16(lane)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P5_b4;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P6_ge;                   // Expression: int16(rate)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P7_io;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P9_f1;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P5_cs;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P6_gu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P8_g0;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P1_pg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P5_hi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P8_kg;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P9_ak;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P1_c2;                   // Expression: int16(lane)
                                          //  Referenced by: '<S337>/PWM'

  int16_T PWM_P5_kh;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S337>/PWM'

  int16_T PWM_P6_c;                    // Expression: int16(rate)
                                          //  Referenced by: '<S337>/PWM'

  int16_T PWM_P7_gf;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S337>/PWM'

  int16_T PWM_P8_hk;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S337>/PWM'

  int16_T PWM_P9_np;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S337>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S119>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S119>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S119>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S119>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S135>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S135>/ADC'

  int16_T ADC_P6_j;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S135>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S135>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S113>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S113>/ADC'

  int16_T ADC_P6_d;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S113>/ADC'

  int16_T ADC_P9_pw;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S113>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S121>/ADC'

  int16_T ADC_P4_pu;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S121>/ADC'

  int16_T ADC_P6_ds;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S121>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S121>/ADC'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S115>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S115>/ADC'

  int16_T ADC_P6_jj;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S115>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S115>/ADC'

  int16_T ADC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S117>/ADC'

  int16_T ADC_P4_fs;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S117>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S117>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S117>/ADC'

  int16_T ADC_P1_gi;                   // Expression: int16(channel)
                                          //  Referenced by: '<S131>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S131>/ADC'

  int16_T ADC_P6_jm;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S131>/ADC'

  int16_T ADC_P9_a;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S131>/ADC'

  int16_T ADC_P1_gp;                   // Expression: int16(channel)
                                          //  Referenced by: '<S133>/ADC'

  int16_T ADC_P4_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S133>/ADC'

  int16_T ADC_P6_kz;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S133>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S133>/ADC'

  int16_T ADC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S123>/ADC'

  int16_T ADC_P4_my;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S123>/ADC'

  int16_T ADC_P6_da;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S123>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S123>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S111>/ADC'

  int16_T ADC_P4_fq;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S111>/ADC'

  int16_T ADC_P6_h;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S111>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S111>/ADC'

  int16_T ADC_P1_ji;                   // Expression: int16(channel)
                                          //  Referenced by: '<S125>/ADC'

  int16_T ADC_P4_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S125>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S125>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S125>/ADC'

  int16_T ADC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S127>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S127>/ADC'

  int16_T ADC_P6_g;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S127>/ADC'

  int16_T ADC_P9_p0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S127>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S129>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S129>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S129>/ADC'

  int16_T ADC_P9_e;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S129>/ADC'

  int16_T SFunction_P2_h;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S345>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S347>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S351>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S152>/S-Function'

  int16_T SFunction_P3_h;              // Expression: int16(0)
                                          //  Referenced by: '<S152>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S154>/S-Function'

  int16_T SFunction_P3_mm;             // Expression: int16(0)
                                          //  Referenced by: '<S154>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S156>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S156>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S158>/S-Function'

  int16_T SFunction_P3_bb;             // Expression: int16(0)
                                          //  Referenced by: '<S158>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S160>/S-Function'

  int16_T SFunction_P3_k;              // Expression: int16(0)
                                          //  Referenced by: '<S160>/S-Function'

  int16_T SFunction_P2_ho;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S162>/S-Function'

  int16_T SFunction_P3_a5;             // Expression: int16(0)
                                          //  Referenced by: '<S162>/S-Function'

  int16_T SFunction_P2_ad;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S339>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S164>/S-Function'

  int16_T SFunction_P3_c4;             // Expression: int16(0)
                                          //  Referenced by: '<S164>/S-Function'

  int16_T SFunction_P2_hj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S166>/S-Function'

  int16_T SFunction_P3_an;             // Expression: int16(0)
                                          //  Referenced by: '<S166>/S-Function'

  int16_T SFunction_P2_ji;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S168>/S-Function'

  int16_T SFunction_P3_f4;             // Expression: int16(0)
                                          //  Referenced by: '<S168>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S170>/S-Function'

  int16_T SFunction_P3_l;              // Expression: int16(0)
                                          //  Referenced by: '<S170>/S-Function'

  int16_T SFunction_P2_j3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S172>/S-Function'

  int16_T SFunction_P3_i0;             // Expression: int16(0)
                                          //  Referenced by: '<S172>/S-Function'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S174>/S-Function'

  int16_T SFunction_P3_fz;             // Expression: int16(0)
                                          //  Referenced by: '<S174>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S178>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S178>/S-Function'

  int16_T SFunction_P2_dd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S180>/S-Function'

  int16_T SFunction_P3_do;             // Expression: int16(0)
                                          //  Referenced by: '<S180>/S-Function'

  int16_T SFunction_P2_nc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S182>/S-Function'

  int16_T SFunction_P3_n;              // Expression: int16(0)
                                          //  Referenced by: '<S182>/S-Function'

  int16_T SFunction_P2_cw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S184>/S-Function'

  int16_T SFunction_P3_k0;             // Expression: int16(0)
                                          //  Referenced by: '<S184>/S-Function'

  int16_T SFunction_P2_fh;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T SFunction_P3_nm;             // Expression: int16(0)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T SFunction_P2_ni;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P2_bk;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S190>/S-Function'

  int16_T SFunction_P3_ne;             // Expression: int16(0)
                                          //  Referenced by: '<S190>/S-Function'

  int16_T SFunction_P2_f0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S192>/S-Function'

  int16_T SFunction_P3_nv;             // Expression: int16(0)
                                          //  Referenced by: '<S192>/S-Function'

  int16_T SFunction_P2_ls;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S343>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S341>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S194>/S-Function'

  int16_T SFunction_P3_ja;             // Expression: int16(0)
                                          //  Referenced by: '<S194>/S-Function'

  int16_T SFunction_P2_ep;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S196>/S-Function'

  int16_T SFunction_P3_fj;             // Expression: int16(0)
                                          //  Referenced by: '<S196>/S-Function'

  int16_T SFunction_P2_ea;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S198>/S-Function'

  int16_T SFunction_P3_b2;             // Expression: int16(0)
                                          //  Referenced by: '<S198>/S-Function'

  int16_T SFunction_P2_gz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S200>/S-Function'

  int16_T SFunction_P3_cr;             // Expression: int16(0)
                                          //  Referenced by: '<S200>/S-Function'

  int16_T SFunction_P2_el;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S204>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S204>/S-Function'

  int16_T SFunction_P2_gy;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S206>/S-Function'

  int16_T SFunction_P3_jb;             // Expression: int16(0)
                                          //  Referenced by: '<S206>/S-Function'

  int16_T SFunction_P2_oo;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S208>/S-Function'

  int16_T SFunction_P3_db;             // Expression: int16(0)
                                          //  Referenced by: '<S208>/S-Function'

  int16_T SFunction_P2_ec;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S210>/S-Function'

  int16_T SFunction_P3_ag;             // Expression: int16(0)
                                          //  Referenced by: '<S210>/S-Function'

  int16_T SFunction_P2_me;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S212>/S-Function'

  int16_T SFunction_P3_aj;             // Expression: int16(0)
                                          //  Referenced by: '<S212>/S-Function'

  int16_T SFunction_P2_mm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S214>/S-Function'

  int16_T SFunction_P3_lg;             // Expression: int16(0)
                                          //  Referenced by: '<S214>/S-Function'

  int16_T SFunction_P2_lw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S216>/S-Function'

  int16_T SFunction_P3_bm;             // Expression: int16(0)
                                          //  Referenced by: '<S216>/S-Function'

  int16_T SFunction_P2_nd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S218>/S-Function'

  int16_T SFunction_P3_lu;             // Expression: int16(0)
                                          //  Referenced by: '<S218>/S-Function'

  int16_T SFunction_P2_k0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S220>/S-Function'

  int16_T SFunction_P3_al;             // Expression: int16(0)
                                          //  Referenced by: '<S220>/S-Function'

  int16_T SFunction_P2_j0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S222>/S-Function'

  int16_T SFunction_P3_ab;             // Expression: int16(0)
                                          //  Referenced by: '<S222>/S-Function'

  int16_T SFunction_P2_jv;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P3_dj;             // Expression: int16(0)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P2_fx;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P3_bq;             // Expression: int16(0)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P2_nj;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P2_gv;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P2_da;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P3_mn;             // Expression: int16(0)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P2_m1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P3_mu;             // Expression: int16(0)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P2_ai;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P2_fa;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P3_g5;             // Expression: int16(0)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P2_or;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P3_op;             // Expression: int16(0)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P2_nx;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P3_fv;             // Expression: int16(0)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P2_mo;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P3_fj4;            // Expression: int16(0)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P2_mt;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P3_ft;             // Expression: int16(0)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P2_ns;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P3_gx;             // Expression: int16(0)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P2_nii;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P3_nw;             // Expression: int16(0)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P2_k01;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P3_mq;             // Expression: int16(0)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S254>/S-Function'

  int16_T SFunction_P3_dos;            // Expression: int16(0)
                                          //  Referenced by: '<S254>/S-Function'

  int16_T SFunction_P2_ei;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S256>/S-Function'

  int16_T SFunction_P3_m0;             // Expression: int16(0)
                                          //  Referenced by: '<S256>/S-Function'

  int16_T SFunction_P2_l1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S258>/S-Function'

  int16_T SFunction_P3_k1;             // Expression: int16(0)
                                          //  Referenced by: '<S258>/S-Function'

  int16_T SFunction_P2_l5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S260>/S-Function'

  int16_T SFunction_P3_pd;             // Expression: int16(0)
                                          //  Referenced by: '<S260>/S-Function'

  int16_T SFunction_P2_n5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S262>/S-Function'

  int16_T SFunction_P3_nj;             // Expression: int16(0)
                                          //  Referenced by: '<S262>/S-Function'

  int16_T SFunction_P2_kd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S264>/S-Function'

  int16_T SFunction_P3_k4;             // Expression: int16(0)
                                          //  Referenced by: '<S264>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S140>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S140>/CLK1'

  int16_T SFunction_P2_gyn;            // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S349>/S-Function'

  int16_T ADC_P1_ni;                   // Expression: int16(channel)
                                          //  Referenced by: '<S109>/ADC'

  int16_T ADC_P4_js;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S109>/ADC'

  int16_T ADC_P6_kx;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S109>/ADC'

  int16_T ADC_P9_ed;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S109>/ADC'

  int16_T SFunction_P2_mr;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S202>/S-Function'

  int16_T SFunction_P3_oc;             // Expression: int16(0)
                                          //  Referenced by: '<S202>/S-Function'

  int16_T SFunction_P2_c5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S176>/S-Function'

  int16_T SFunction_P3_jv;             // Expression: int16(0)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P1[8];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S345>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S345>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S345>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S345>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S345>/S-Function'

  uint16_T SFunction_P1_k[12];         // Computed Parameter: SFunction_P1_k
                                          //  Referenced by: '<S347>/S-Function'

  uint16_T SFunction_P9_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S347>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S347>/S-Function'

  uint16_T SFunction_P14_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S347>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S347>/S-Function'

  uint16_T SFunction_P1_i[13];         // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S351>/S-Function'

  uint16_T SFunction_P9_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S351>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S351>/S-Function'

  uint16_T SFunction_P14_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S351>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S351>/S-Function'

  uint16_T SFunction_P1_b[6];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P14_pe[5];        // Computed Parameter: SFunction_P14_pe
                                          //  Referenced by: '<S152>/S-Function'

  uint16_T SFunction_P1_g[8];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S154>/S-Function'

  uint16_T SFunction_P5_eo;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S154>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S154>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S154>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S154>/S-Function'

  uint16_T SFunction_P1_k4[8];         // Computed Parameter: SFunction_P1_k4
                                          //  Referenced by: '<S156>/S-Function'

  uint16_T SFunction_P5_ht;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S156>/S-Function'

  uint16_T SFunction_P8_d2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S156>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S156>/S-Function'

  uint16_T SFunction_P14_nb[5];        // Computed Parameter: SFunction_P14_nb
                                          //  Referenced by: '<S156>/S-Function'

  uint16_T SFunction_P1_g0[8];         // Computed Parameter: SFunction_P1_g0
                                          //  Referenced by: '<S158>/S-Function'

  uint16_T SFunction_P5_f;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S158>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S158>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S158>/S-Function'

  uint16_T SFunction_P14_ps[5];        // Computed Parameter: SFunction_P14_ps
                                          //  Referenced by: '<S158>/S-Function'

  uint16_T SFunction_P1_c[8];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S160>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S160>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S160>/S-Function'

  uint16_T SFunction_P11_ip;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S160>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S160>/S-Function'

  uint16_T SFunction_P1_ie[5];         // Computed Parameter: SFunction_P1_ie
                                          //  Referenced by: '<S162>/S-Function'

  uint16_T SFunction_P5_ev;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S162>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S162>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S162>/S-Function'

  uint16_T SFunction_P14_j[5];         // Computed Parameter: SFunction_P14_j
                                          //  Referenced by: '<S162>/S-Function'

  uint16_T SFunction_P1_p[13];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S339>/S-Function'

  uint16_T SFunction_P9_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S339>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S339>/S-Function'

  uint16_T SFunction_P14_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S339>/S-Function'

  uint16_T SFunction_P15_oy;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S339>/S-Function'

  uint16_T SFunction_P1_n[6];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P8_a;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P11_oe;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S164>/S-Function'

  uint16_T SFunction_P1_h[5];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S166>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P8_le;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P11_ow;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P14_cg[5];        // Computed Parameter: SFunction_P14_cg
                                          //  Referenced by: '<S168>/S-Function'

  uint16_T SFunction_P1_g5[3];         // Computed Parameter: SFunction_P1_g5
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P5_cs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P8_ov;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P11_it;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S170>/S-Function'

  uint16_T SFunction_P1_j[4];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P8_jr;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P11_f3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P14_ho[5];        // Computed Parameter: SFunction_P14_ho
                                          //  Referenced by: '<S172>/S-Function'

  uint16_T SFunction_P1_e[3];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P5_j4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P8_jt;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S174>/S-Function'

  uint16_T SFunction_P1_f[6];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P14_bb[5];        // Computed Parameter: SFunction_P14_bb
                                          //  Referenced by: '<S178>/S-Function'

  uint16_T SFunction_P1_kv[6];         // Computed Parameter: SFunction_P1_kv
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P5_cn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P11_ej;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P14_ir[5];        // Computed Parameter: SFunction_P14_ir
                                          //  Referenced by: '<S180>/S-Function'

  uint16_T SFunction_P1_dj[6];         // Computed Parameter: SFunction_P1_dj
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P5_fg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P11_fm;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P14_ko[5];        // Computed Parameter: SFunction_P14_ko
                                          //  Referenced by: '<S182>/S-Function'

  uint16_T SFunction_P1_pn[3];         // Computed Parameter: SFunction_P1_pn
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P5_el;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P8_gn;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P11_eq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P1_es[3];         // Computed Parameter: SFunction_P1_es
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P5_gj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P11_n4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P14_hoz[5];       // Computed Parameter: SFunction_P14_hoz
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P1_pg[5];         // Computed Parameter: SFunction_P1_pg
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P5_cz;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P11_fx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P1_gv[4];         // Computed Parameter: SFunction_P1_gv
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P5_hw;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P8_fg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P14_n0[5];        // Computed Parameter: SFunction_P14_n0
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P1_df[4];         // Computed Parameter: SFunction_P1_df
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P5_ec;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P8_bq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P14_nt[5];        // Computed Parameter: SFunction_P14_nt
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P1_o[9];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S343>/S-Function'

  uint16_T SFunction_P9_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S343>/S-Function'

  uint16_T SFunction_P11_cj;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S343>/S-Function'

  uint16_T SFunction_P14_fi;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S343>/S-Function'

  uint16_T SFunction_P15_f;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S343>/S-Function'

  uint16_T SFunction_P1_nt[9];         // Computed Parameter: SFunction_P1_nt
                                          //  Referenced by: '<S341>/S-Function'

  uint16_T SFunction_P9_g4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S341>/S-Function'

  uint16_T SFunction_P11_hc;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S341>/S-Function'

  uint16_T SFunction_P14_ia;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S341>/S-Function'

  uint16_T SFunction_P15_ar;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S341>/S-Function'

  uint16_T SFunction_P1_bw[5];         // Computed Parameter: SFunction_P1_bw
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P5_kv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P8_dg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P11_ea;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P14_ba[5];        // Computed Parameter: SFunction_P14_ba
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P1_cf[3];         // Computed Parameter: SFunction_P1_cf
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P5_hn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P8_lc;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P11_hd;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P14_fq[5];        // Computed Parameter: SFunction_P14_fq
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P1_nw[3];         // Computed Parameter: SFunction_P1_nw
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P5_og;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P11_kr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P14_pr[5];        // Computed Parameter: SFunction_P14_pr
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P1_m[3];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P5_oy;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P8_gs;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P11_of;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P14_prh[5];       // Computed Parameter: SFunction_P14_prh
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P1_a[5];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P5_kg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P8_m3;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P11_ky;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P14_d5[5];        // Computed Parameter: SFunction_P14_d5
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P1_mi[5];         // Computed Parameter: SFunction_P1_mi
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P8_h0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P11_lp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P14_gx[5];        // Computed Parameter: SFunction_P14_gx
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P1_pm[5];         // Computed Parameter: SFunction_P1_pm
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P5_a3;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P8_au;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P11_gi;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P14_kz[5];        // Computed Parameter: SFunction_P14_kz
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P1_cff[7];        // Computed Parameter: SFunction_P1_cff
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P5_bs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P8_ac;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P11_ga;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P14_gz[5];        // Computed Parameter: SFunction_P14_gz
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P1_k3[2];         // Computed Parameter: SFunction_P1_k3
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P5_ej;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P8_fn;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P11_pm;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P14_e[5];         // Computed Parameter: SFunction_P14_e
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P1_kn[5];         // Computed Parameter: SFunction_P1_kn
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P5_hc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P11_ni;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P14_cf[5];        // Computed Parameter: SFunction_P14_cf
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P5_oj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P14_pn[5];        // Computed Parameter: SFunction_P14_pn
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P1_ez[3];         // Computed Parameter: SFunction_P1_ez
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P5_mj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P8_jx;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P11_im;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P1_bk[3];         // Computed Parameter: SFunction_P1_bk
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P5_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P8_fv;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P11_pt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P14_lm[5];        // Computed Parameter: SFunction_P14_lm
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P1_hg[3];         // Computed Parameter: SFunction_P1_hg
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P5_c0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P1_e5[3];         // Computed Parameter: SFunction_P1_e5
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P5_jz;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P8_ap;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P11_dq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P1_po[7];         // Computed Parameter: SFunction_P1_po
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P5_ey;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P8_by;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P11_k2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P14_bs[5];        // Computed Parameter: SFunction_P14_bs
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P1_p1[7];         // Computed Parameter: SFunction_P1_p1
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P5_dh;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P8_gb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P11_j3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P14_gp[5];        // Computed Parameter: SFunction_P14_gp
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P1_eb[5];         // Computed Parameter: SFunction_P1_eb
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P5_bm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P8_lp;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P11_jj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P14_fc[5];        // Computed Parameter: SFunction_P14_fc
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P1_br[7];         // Computed Parameter: SFunction_P1_br
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P5_br;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P8_aa;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P14_gw[5];        // Computed Parameter: SFunction_P14_gw
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P1_as[5];         // Computed Parameter: SFunction_P1_as
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P5_e1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P8_df;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P11_hj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P14_jr[5];        // Computed Parameter: SFunction_P14_jr
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P1_ga[3];         // Computed Parameter: SFunction_P1_ga
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P5_j5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P8_cb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P11_ev;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P14_eu[5];        // Computed Parameter: SFunction_P14_eu
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P1_m4[5];         // Computed Parameter: SFunction_P1_m4
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P5_dt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P8_ka;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P11_b1;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P14_ex[5];        // Computed Parameter: SFunction_P14_ex
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P1_pmg[5];        // Computed Parameter: SFunction_P1_pmg
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P8_p4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P11_gv;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P14_hf[5];        // Computed Parameter: SFunction_P14_hf
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P1_he[5];         // Computed Parameter: SFunction_P1_he
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P5_e1z;           // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P8_db;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P11_ai;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P14_lf[5];        // Computed Parameter: SFunction_P14_lf
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P1_l3[5];         // Computed Parameter: SFunction_P1_l3
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P5_db;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P8_ps;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P11_ez;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P14_kh[5];        // Computed Parameter: SFunction_P14_kh
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P1_fn[3];         // Computed Parameter: SFunction_P1_fn
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P5_mq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P8_fh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P11_kb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P14_hfu[5];       // Computed Parameter: SFunction_P14_hfu
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P1_cq[5];         // Computed Parameter: SFunction_P1_cq
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P5_po;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P8_cb5;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P11_ix;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P14_mf[5];        // Computed Parameter: SFunction_P14_mf
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P1_cv[5];         // Computed Parameter: SFunction_P1_cv
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P5_ow;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P8_lb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P11_bv;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P14_iz[5];        // Computed Parameter: SFunction_P14_iz
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P1_hj;            // Computed Parameter: SFunction_P1_hj
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P5_nv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P8_fz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P11_ik;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P14_e1[5];        // Computed Parameter: SFunction_P14_e1
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P1_mo[3];         // Computed Parameter: SFunction_P1_mo
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P5_pw;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P8_ly;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P11_k4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P14_pg[5];        // Computed Parameter: SFunction_P14_pg
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P1_iec[3];        // Computed Parameter: SFunction_P1_iec
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P5_nr;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P8_io;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P11_dh;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P14_hx[5];        // Computed Parameter: SFunction_P14_hx
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P1_bd[3];         // Computed Parameter: SFunction_P1_bd
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P5_ph;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P8_jp;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P11_fk;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P14_lb[5];        // Computed Parameter: SFunction_P14_lb
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P1_dz[3];         // Computed Parameter: SFunction_P1_dz
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P5_n4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P11_bg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P14_km[5];        // Computed Parameter: SFunction_P14_km
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P1_m3[8];         // Computed Parameter: SFunction_P1_m3
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P5_j0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P8_lh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P11_pf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P14_i0[5];        // Computed Parameter: SFunction_P14_i0
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P1_gm[8];         // Computed Parameter: SFunction_P1_gm
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P5_is;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P8_jo;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P11_j4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P14_iu[5];        // Computed Parameter: SFunction_P14_iu
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P1_fd;            // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S138>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S138>/S-Function'

  uint16_T SFunction_P5_ci0;           // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S138>/S-Function'

  uint16_T SFunction_P1_gy[5];         // Computed Parameter: SFunction_P1_gy
                                          //  Referenced by: '<S349>/S-Function'

  uint16_T SFunction_P9_jp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S349>/S-Function'

  uint16_T SFunction_P11_iu;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S349>/S-Function'

  uint16_T SFunction_P14_pq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S349>/S-Function'

  uint16_T SFunction_P15_j;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S349>/S-Function'

  uint16_T SFunction_P1_i0[3];         // Computed Parameter: SFunction_P1_i0
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P5_ew;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P8_be;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P11_f2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P14_at[5];        // Computed Parameter: SFunction_P14_at
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P1_ep[7];         // Computed Parameter: SFunction_P1_ep
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P5_av;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P8_ff;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P11_n4s;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S176>/S-Function'

  uint16_T SFunction_P14_izn[5];       // Computed Parameter: SFunction_P14_izn
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S150>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S150>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S150>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S270>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S270>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S270>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S272>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S272>/PWM'

  boolean_T PWM_P12_b;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S272>/PWM'

  boolean_T PWM_P10_d;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S274>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S274>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S274>/PWM'

  boolean_T PWM_P10_e;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S276>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S276>/PWM'

  boolean_T PWM_P12_m;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S276>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S282>/PWM'

  boolean_T PWM_P11_c0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S282>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S282>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S284>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S284>/PWM'

  boolean_T PWM_P12_bn;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S284>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S286>/PWM'

  boolean_T PWM_P11_gw;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S286>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S286>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S288>/PWM'

  boolean_T PWM_P11_k5;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S288>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S288>/PWM'

  boolean_T PWM_P10_dc;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S294>/PWM'

  boolean_T PWM_P11_l0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S294>/PWM'

  boolean_T PWM_P12_or;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S294>/PWM'

  boolean_T PWM_P10_ed;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S296>/PWM'

  boolean_T PWM_P11_kz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S296>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S296>/PWM'

  boolean_T PWM_P10_oh;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S298>/PWM'

  boolean_T PWM_P11_a;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S298>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S298>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S300>/PWM'

  boolean_T PWM_P11_gg;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S300>/PWM'

  boolean_T PWM_P12_ot;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S300>/PWM'

  boolean_T PWM_P10_b4;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S306>/PWM'

  boolean_T PWM_P11_o;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S306>/PWM'

  boolean_T PWM_P12_o4;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S306>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S308>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S308>/PWM'

  boolean_T PWM_P12_a;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S308>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S310>/PWM'

  boolean_T PWM_P11_ao;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S310>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S310>/PWM'

  boolean_T PWM_P10_be;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S312>/PWM'

  boolean_T PWM_P11_oj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S312>/PWM'

  boolean_T PWM_P12_ht;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S312>/PWM'

  boolean_T PWM_P10_bw;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S318>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S318>/PWM'

  boolean_T PWM_P12_jc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S318>/PWM'

  boolean_T PWM_P10_ga;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S320>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S320>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S320>/PWM'

  boolean_T PWM_P10_cy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S322>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S322>/PWM'

  boolean_T PWM_P12_js;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S322>/PWM'

  boolean_T PWM_P10_lq;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S324>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S324>/PWM'

  boolean_T PWM_P12_d;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S324>/PWM'

  boolean_T PWM_P10_dm;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S331>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S331>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S331>/PWM'

  boolean_T PWM_P10_c1;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S333>/PWM'

  boolean_T PWM_P11_db;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S333>/PWM'

  boolean_T PWM_P12_d5;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S333>/PWM'

  boolean_T PWM_P10_hb;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S335>/PWM'

  boolean_T PWM_P11_k4;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S335>/PWM'

  boolean_T PWM_P12_kd;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S335>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S337>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S337>/PWM'

  boolean_T PWM_P12_mr;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S337>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S119>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S119>/ADC'

  boolean_T ADC_P5_h;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S135>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S135>/ADC'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S113>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S113>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S121>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S121>/ADC'

  boolean_T ADC_P5_dl;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S115>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S115>/ADC'

  boolean_T ADC_P5_b;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S117>/ADC'

  boolean_T ADC_P7_de;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S117>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S131>/ADC'

  boolean_T ADC_P7_c;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S131>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S133>/ADC'

  boolean_T ADC_P7_cc;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S133>/ADC'

  boolean_T ADC_P5_bh;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S123>/ADC'

  boolean_T ADC_P7_o;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S123>/ADC'

  boolean_T ADC_P5_d2;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S111>/ADC'

  boolean_T ADC_P7_ln;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S111>/ADC'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S125>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S125>/ADC'

  boolean_T ADC_P5_o;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S127>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S127>/ADC'

  boolean_T ADC_P5_c;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S129>/ADC'

  boolean_T ADC_P7_j;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S129>/ADC'

  boolean_T SFunction_P8_cm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S345>/S-Function'

  boolean_T SFunction_P12_he;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S345>/S-Function'

  boolean_T SFunction_P13_luf;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S345>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S345>/S-Function'

  boolean_T SFunction_P8_bd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S347>/S-Function'

  boolean_T SFunction_P12_gi;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S347>/S-Function'

  boolean_T SFunction_P13_c4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S347>/S-Function'

  boolean_T SFunction_P16_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S347>/S-Function'

  boolean_T SFunction_P8_p42;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S351>/S-Function'

  boolean_T SFunction_P12_b1;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S351>/S-Function'

  boolean_T SFunction_P13_kj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S351>/S-Function'

  boolean_T SFunction_P16_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S351>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S152>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S152>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S152>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S152>/S-Function'

  boolean_T SFunction_P4_ic;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S154>/S-Function'

  boolean_T SFunction_P9_h;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S154>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S154>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S154>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S156>/S-Function'

  boolean_T SFunction_P9_o5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S156>/S-Function'

  boolean_T SFunction_P10_cz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S156>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S156>/S-Function'

  boolean_T SFunction_P4_hc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S158>/S-Function'

  boolean_T SFunction_P9_oe;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S158>/S-Function'

  boolean_T SFunction_P10_n;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S158>/S-Function'

  boolean_T SFunction_P15_jj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S158>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S160>/S-Function'

  boolean_T SFunction_P9_m;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S160>/S-Function'

  boolean_T SFunction_P10_n3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S160>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S160>/S-Function'

  boolean_T SFunction_P4_cr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S162>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S162>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S162>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S162>/S-Function'

  boolean_T SFunction_P8_bp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S339>/S-Function'

  boolean_T SFunction_P12_em;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S339>/S-Function'

  boolean_T SFunction_P13_fw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S339>/S-Function'

  boolean_T SFunction_P16_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S339>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S164>/S-Function'

  boolean_T SFunction_P9_oa;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S164>/S-Function'

  boolean_T SFunction_P10_il;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S164>/S-Function'

  boolean_T SFunction_P15_h1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S164>/S-Function'

  boolean_T SFunction_P4_kk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S166>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S166>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S166>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S166>/S-Function'

  boolean_T SFunction_P4_ao;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S168>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S168>/S-Function'

  boolean_T SFunction_P10_nv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S168>/S-Function'

  boolean_T SFunction_P15_ii;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S168>/S-Function'

  boolean_T SFunction_P4_d1;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P9_h5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P10_ae;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S170>/S-Function'

  boolean_T SFunction_P4_cq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P9_cz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P15_da;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S172>/S-Function'

  boolean_T SFunction_P4_jk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P15_pv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S174>/S-Function'

  boolean_T SFunction_P4_bp;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P9_ha;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S178>/S-Function'

  boolean_T SFunction_P4_ko;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P9_o5b;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P10_ilz;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S180>/S-Function'

  boolean_T SFunction_P4_n;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S182>/S-Function'

  boolean_T SFunction_P9_nz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S182>/S-Function'

  boolean_T SFunction_P10_h2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S182>/S-Function'

  boolean_T SFunction_P15_hg;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S182>/S-Function'

  boolean_T SFunction_P4_jkt;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P10_if;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P15_ok;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P4_ng;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P15_h4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P4_ni;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P10_iq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P10_hv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P15_di;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P4_o;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P9_g0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P10_oh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P15_bc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P8_dm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S343>/S-Function'

  boolean_T SFunction_P12_lu;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S343>/S-Function'

  boolean_T SFunction_P13_cv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S343>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S343>/S-Function'

  boolean_T SFunction_P8_c0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S341>/S-Function'

  boolean_T SFunction_P12_cy;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S341>/S-Function'

  boolean_T SFunction_P13_gw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S341>/S-Function'

  boolean_T SFunction_P16_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S341>/S-Function'

  boolean_T SFunction_P4_lx;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P9_ku;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P10_an;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P15_b1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P9_bg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P10_j4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P15_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P4_m4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P9_al;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P15_mm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P4_na;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P9_kf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P10_dz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P15_ps;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P9_fo;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P10_jj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P15_ej;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P4_cc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P9_gq;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P10_i5;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P15_ex;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P4_et;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P9_gs;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P10_g4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P15_pu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P4_cj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P9_n2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P10_ac;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P15_ky;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P4_br;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P9_ox;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P10_nt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P15_dp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P4_ig;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P9_nh;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P10_ph;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P15_mu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P4_kw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P9_kr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P10_ii;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P15_bh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P4_d4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P9_nr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P10_hi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P4_bt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P9_ht;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P10_mp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P15_j0;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P4_on;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P10_ls;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P15_ct;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P4_bj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P9_n0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P10_nj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P15_d2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P4_hw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P9_ny;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P10_nji;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P15_ce;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P4_hb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P9_cv;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P10_iy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P15_dp1;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P4_oz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P9_iy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P10_fv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P15_cc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P4_fi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P9_l;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P10_ds;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P15_lp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P4_c1;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P9_l1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P10_o5;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P15_p1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P4_m4p;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P9_jg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P10_fp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P15_fw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P4_cd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P9_au;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P10_iij;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P15_oc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P4_iz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P9_ny4;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P10_fr;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P15_nm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P4_p4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P9_ah;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P10_oi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P15_gj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P4_f4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P9_hy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P10_g4g;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P15_oa;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P4_em;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P9_bi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P10_b5;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P15_fq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P4_dz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P9_oo;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P10_km;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P15_i4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P4_fq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P9_jz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P10_kj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P15_jv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P4_nir;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P9_p3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P10_ck;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P15_pj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P4_m0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P9_ooa;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P10_gx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P15_n1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P4_mz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P9_ez;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P10_cv;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P15_nr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P4_jo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P10_ao;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P15_lv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P4_kc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P9_l3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P10_k0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P15_as;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P4_kcf;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P9_ka;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P10_b3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P15_hh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P4_i0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P9_czh;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P10_ju;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P15_j5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S140>/CLK1'

  boolean_T SFunction_P8_ca;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S349>/S-Function'

  boolean_T SFunction_P12_kg;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S349>/S-Function'

  boolean_T SFunction_P13_oa;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S349>/S-Function'

  boolean_T SFunction_P16_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S349>/S-Function'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S109>/ADC'

  boolean_T ADC_P7_ci;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S109>/ADC'

  boolean_T SFunction_P4_ju;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P9_ol;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P15_l5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P4_mi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P9_oj;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P10_a0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S176>/S-Function'

  boolean_T SFunction_P15_dw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S176>/S-Function'

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
//  '<S4>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC1'
//  '<S5>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC10'
//  '<S6>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC11'
//  '<S7>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC12'
//  '<S8>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC13'
//  '<S9>'   : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC14'
//  '<S10>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC15'
//  '<S11>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC16'
//  '<S12>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC17'
//  '<S13>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC18'
//  '<S14>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC20'
//  '<S15>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC6'
//  '<S16>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC7'
//  '<S17>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC9'
//  '<S18>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Alpha-Beta-Zero to abc'
//  '<S19>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Circulating Current Control MPC'
//  '<S20>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration'
//  '<S21>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/DQ - AlphaBeta'
//  '<S22>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Divide'
//  '<S23>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Flux Control Proportional Control1'
//  '<S24>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Flux obs2'
//  '<S25>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Ib'
//  '<S26>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Input Current Control Proportional Integral Control'
//  '<S27>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)'
//  '<S28>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/MATLAB Function4'
//  '<S29>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM'
//  '<S30>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Output Current Control Proportional Integral Control1'
//  '<S31>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/P'
//  '<S32>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/PWM_CB3'
//  '<S33>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe1'
//  '<S34>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe10'
//  '<S35>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe11'
//  '<S36>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe12'
//  '<S37>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe13'
//  '<S38>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe14'
//  '<S39>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe15'
//  '<S40>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe16'
//  '<S41>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe17'
//  '<S42>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe18'
//  '<S43>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe19'
//  '<S44>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe20'
//  '<S45>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe21'
//  '<S46>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe22'
//  '<S47>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe23'
//  '<S48>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe24'
//  '<S49>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe25'
//  '<S50>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe32'
//  '<S51>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe33'
//  '<S52>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe35'
//  '<S53>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe36'
//  '<S54>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe37'
//  '<S55>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe38'
//  '<S56>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe39'
//  '<S57>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe40'
//  '<S58>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe41'
//  '<S59>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe42'
//  '<S60>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe43'
//  '<S61>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe44'
//  '<S62>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe45'
//  '<S63>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe46'
//  '<S64>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe47'
//  '<S65>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe48'
//  '<S66>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe49'
//  '<S67>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe50'
//  '<S68>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe51'
//  '<S69>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe52'
//  '<S70>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe53'
//  '<S71>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe54'
//  '<S72>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe55'
//  '<S73>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe56'
//  '<S74>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe57'
//  '<S75>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe58'
//  '<S76>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe59'
//  '<S77>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe60'
//  '<S78>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe61'
//  '<S79>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe62'
//  '<S80>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe63'
//  '<S81>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe64'
//  '<S82>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe65'
//  '<S83>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe66'
//  '<S84>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe67'
//  '<S85>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe68'
//  '<S86>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe69'
//  '<S87>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe70'
//  '<S88>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe8'
//  '<S89>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe9'
//  '<S90>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Speed Control Proportional Integral Control1'
//  '<S91>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1'
//  '<S92>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2'
//  '<S93>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3'
//  '<S94>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4'
//  '<S95>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5'
//  '<S96>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9'
//  '<S97>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/TEB Control Proportional Integral Control1'
//  '<S98>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tab0'
//  '<S99>'  : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter16'
//  '<S100>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter17'
//  '<S101>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter18'
//  '<S102>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter20'
//  '<S103>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter21'
//  '<S104>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter23'
//  '<S105>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter3'
//  '<S106>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/abc to dq1'
//  '<S107>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/dq --> ab'
//  '<S108>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC1/sub'
//  '<S109>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC1/sub/generation'
//  '<S110>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC10/sub'
//  '<S111>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC10/sub/generation'
//  '<S112>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC11/sub'
//  '<S113>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC11/sub/generation'
//  '<S114>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC12/sub'
//  '<S115>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC12/sub/generation'
//  '<S116>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC13/sub'
//  '<S117>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC13/sub/generation'
//  '<S118>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC14/sub'
//  '<S119>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC14/sub/generation'
//  '<S120>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC15/sub'
//  '<S121>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC15/sub/generation'
//  '<S122>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC16/sub'
//  '<S123>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC16/sub/generation'
//  '<S124>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC17/sub'
//  '<S125>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC17/sub/generation'
//  '<S126>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC18/sub'
//  '<S127>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC18/sub/generation'
//  '<S128>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC20/sub'
//  '<S129>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC20/sub/generation'
//  '<S130>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC6/sub'
//  '<S131>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC6/sub/generation'
//  '<S132>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC7/sub'
//  '<S133>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC7/sub/generation'
//  '<S134>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC9/sub'
//  '<S135>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/ADC9/sub/generation'
//  '<S136>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/Sampling clock'
//  '<S137>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/clk0'
//  '<S138>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S139>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/clk0/sub'
//  '<S140>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S141>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete'
//  '<S142>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Compare To Constant'
//  '<S143>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Compare To Constant1'
//  '<S144>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Integrator with Wrapped State (Discrete or Continuous)/Discrete/Reinitialization'
//  '<S145>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM/Alpha-Beta-Zero to abc'
//  '<S146>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM/Alpha-Beta-Zero to abc1'
//  '<S147>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM/NN CEC'
//  '<S148>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/NN based ICB + LFOM/NN CEC/MLFB'
//  '<S149>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/PWM_CB3/sub'
//  '<S150>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/PWM_CB3/sub/generation'
//  '<S151>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe1/sub'
//  '<S152>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe1/sub/generation'
//  '<S153>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe10/sub'
//  '<S154>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe10/sub/generation'
//  '<S155>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe11/sub'
//  '<S156>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe11/sub/generation'
//  '<S157>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe12/sub'
//  '<S158>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe12/sub/generation'
//  '<S159>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe13/sub'
//  '<S160>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe13/sub/generation'
//  '<S161>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe14/sub'
//  '<S162>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe14/sub/generation'
//  '<S163>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe15/sub'
//  '<S164>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe15/sub/generation'
//  '<S165>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe16/sub'
//  '<S166>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe16/sub/generation'
//  '<S167>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe17/sub'
//  '<S168>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe17/sub/generation'
//  '<S169>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe18/sub'
//  '<S170>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe18/sub/generation'
//  '<S171>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe19/sub'
//  '<S172>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe19/sub/generation'
//  '<S173>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe20/sub'
//  '<S174>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe20/sub/generation'
//  '<S175>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe21/sub'
//  '<S176>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe21/sub/generation'
//  '<S177>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe22/sub'
//  '<S178>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe22/sub/generation'
//  '<S179>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe23/sub'
//  '<S180>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe23/sub/generation'
//  '<S181>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe24/sub'
//  '<S182>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe24/sub/generation'
//  '<S183>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe25/sub'
//  '<S184>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe25/sub/generation'
//  '<S185>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe32/sub'
//  '<S186>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe32/sub/generation'
//  '<S187>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe33/sub'
//  '<S188>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe33/sub/generation'
//  '<S189>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe35/sub'
//  '<S190>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe35/sub/generation'
//  '<S191>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe36/sub'
//  '<S192>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe36/sub/generation'
//  '<S193>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe37/sub'
//  '<S194>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe37/sub/generation'
//  '<S195>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe38/sub'
//  '<S196>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe38/sub/generation'
//  '<S197>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe39/sub'
//  '<S198>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe39/sub/generation'
//  '<S199>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe40/sub'
//  '<S200>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe40/sub/generation'
//  '<S201>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe41/sub'
//  '<S202>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe41/sub/generation'
//  '<S203>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe42/sub'
//  '<S204>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe42/sub/generation'
//  '<S205>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe43/sub'
//  '<S206>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe43/sub/generation'
//  '<S207>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe44/sub'
//  '<S208>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe44/sub/generation'
//  '<S209>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe45/sub'
//  '<S210>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe45/sub/generation'
//  '<S211>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe46/sub'
//  '<S212>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe46/sub/generation'
//  '<S213>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe47/sub'
//  '<S214>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe47/sub/generation'
//  '<S215>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe48/sub'
//  '<S216>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe48/sub/generation'
//  '<S217>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe49/sub'
//  '<S218>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe49/sub/generation'
//  '<S219>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe50/sub'
//  '<S220>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe50/sub/generation'
//  '<S221>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe51/sub'
//  '<S222>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe51/sub/generation'
//  '<S223>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe52/sub'
//  '<S224>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe52/sub/generation'
//  '<S225>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe53/sub'
//  '<S226>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe53/sub/generation'
//  '<S227>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe54/sub'
//  '<S228>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe54/sub/generation'
//  '<S229>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe55/sub'
//  '<S230>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe55/sub/generation'
//  '<S231>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe56/sub'
//  '<S232>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe56/sub/generation'
//  '<S233>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe57/sub'
//  '<S234>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe57/sub/generation'
//  '<S235>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe58/sub'
//  '<S236>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe58/sub/generation'
//  '<S237>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe59/sub'
//  '<S238>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe59/sub/generation'
//  '<S239>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe60/sub'
//  '<S240>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe60/sub/generation'
//  '<S241>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe61/sub'
//  '<S242>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe61/sub/generation'
//  '<S243>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe62/sub'
//  '<S244>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe62/sub/generation'
//  '<S245>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe63/sub'
//  '<S246>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe63/sub/generation'
//  '<S247>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe64/sub'
//  '<S248>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe64/sub/generation'
//  '<S249>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe65/sub'
//  '<S250>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe65/sub/generation'
//  '<S251>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe66/sub'
//  '<S252>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe66/sub/generation'
//  '<S253>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe67/sub'
//  '<S254>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe67/sub/generation'
//  '<S255>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe68/sub'
//  '<S256>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe68/sub/generation'
//  '<S257>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe69/sub'
//  '<S258>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe69/sub/generation'
//  '<S259>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe70/sub'
//  '<S260>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe70/sub/generation'
//  '<S261>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe8/sub'
//  '<S262>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe8/sub/generation'
//  '<S263>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe9/sub'
//  '<S264>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Probe9/sub/generation'
//  '<S265>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S266>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S267>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S268>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S269>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S270>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S271>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S272>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S273>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S274>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S275>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S276>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S277>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S278>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S279>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S280>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S281>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S282>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S283>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S284>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S285>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S286>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S287>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S288>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S289>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S290>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S291>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S292>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S293>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S294>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S295>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S296>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S297>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S298>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S299>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S300>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S301>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S302>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S303>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S304>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S305>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S306>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S307>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S308>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S309>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S310>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S311>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S312>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S313>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S314>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S315>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S316>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S317>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S318>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S319>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S320>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S321>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S322>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S323>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S324>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S325>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/MATLAB Function1'
//  '<S326>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S327>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S328>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S329>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S330>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S331>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S332>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S333>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S334>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S335>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S336>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S337>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S338>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter16/sub'
//  '<S339>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S340>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter17/sub'
//  '<S341>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter17/sub/generation'
//  '<S342>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter18/sub'
//  '<S343>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter18/sub/generation'
//  '<S344>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter20/sub'
//  '<S345>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter20/sub/generation'
//  '<S346>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter21/sub'
//  '<S347>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter21/sub/generation'
//  '<S348>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter23/sub'
//  '<S349>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter23/sub/generation'
//  '<S350>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter3/sub'
//  '<S351>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S352>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/abc to dq1/Alpha-Beta-Zero to dq1'
//  '<S353>' : 'imperix_M2C_NN_control_2024b/Closed_loop_control/abc to dq1/abc to Alpha-Beta-Zero1'

#endif                                 // imperix_M2C_NN_control_2024b_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
