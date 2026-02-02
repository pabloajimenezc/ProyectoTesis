//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_ctrl.h
//
// Code generated for Simulink model 'imperix_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.83
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Feb  2 18:35:10 2026
//
#ifndef imperix_ctrl_h_
#define imperix_ctrl_h_
#include "rtwtypes.h"
#include "imperix_ctrl_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include "zero_crossing_types.h"

// Block signals for system '<S81>/Moving Average'
struct B_MovingAverage_imperix_ctrl_T {
  real_T MovingAverage[6];             // '<S81>/Moving Average'
};

// Block states (default storage) for system '<S81>/Moving Average'
struct DW_MovingAverage_imperix_ctrl_T {
  dsp_simulink_MovingAverage_im_T obj; // '<S81>/Moving Average'
  boolean_T objisempty;                // '<S81>/Moving Average'
};

// Block signals (default storage)
struct B_imperix_ctrl_T {
  real_T E[576];
  real_T c_b[576];
  real_T E_tmp[576];
  real_T TmpRTBAtVectorConcatenate4Outpo[3];// '<S32>/Vector Concatenate4'
  real_T In;                           // '<S667>/In'
  real_T Fcn;                          // '<S666>/Fcn'
  real_T Fcn1;                         // '<S666>/Fcn1'
  real_T Fcn_c;                        // '<S665>/Fcn'
  real_T Fcn1_e;                       // '<S665>/Fcn1'
  real_T Fcn_l;                        // '<S623>/Fcn'
  real_T Fcn1_b;                       // '<S623>/Fcn1'
  real_T Fcn_ct;                       // '<S622>/Fcn'
  real_T Fcn1_p;                       // '<S622>/Fcn1'
  real_T Fcn_b;                        // '<S549>/Fcn'
  real_T Fcn1_i;                       // '<S549>/Fcn1'
  real_T Fcn_d;                        // '<S548>/Fcn'
  real_T Fcn1_d;                       // '<S548>/Fcn1'
  real_T In_h[6];                      // '<S437>/In'
  real_T In_c[6];                      // '<S436>/In'
  real32_T SFunction;                  // '<S150>/S-Function'
  real32_T ADC;                        // '<S109>/ADC'
  real32_T ADC_g;                      // '<S127>/ADC'
  real32_T ADC_o;                      // '<S131>/ADC'
  real32_T ADC_h;                      // '<S113>/ADC'
  real32_T ADC_h0;                     // '<S133>/ADC'
  real32_T ADC_m;                      // '<S135>/ADC'
  real32_T DataTypeConversion1_e;      // '<S157>/Data Type Conversion1'
  real32_T DataTypeConversion1_m;      // '<S159>/Data Type Conversion1'
  real32_T DataTypeConversion1_o;      // '<S161>/Data Type Conversion1'
  real32_T DataTypeConversion1_j;      // '<S163>/Data Type Conversion1'
  real32_T DataTypeConversion1_mq;     // '<S165>/Data Type Conversion1'
  real32_T DataTypeConversion1_l;      // '<S167>/Data Type Conversion1'
  real32_T ADC_f;                      // '<S123>/ADC'
  real32_T ADC_e;                      // '<S125>/ADC'
  real32_T ADC_i;                      // '<S115>/ADC'
  real32_T ADC_d;                      // '<S129>/ADC'
  real32_T ADC_ib;                     // '<S117>/ADC'
  real32_T ADC_p;                      // '<S119>/ADC'
  real32_T DataTypeConversion;         // '<S229>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S231>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S233>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S235>/Data Type Conversion'
  real32_T ADC_gs;                     // '<S121>/ADC'
  real32_T SFunction_d;                // '<S683>/S-Function'
  real32_T DataTypeConversion_a;       // '<S237>/Data Type Conversion'
  real32_T DataTypeConversion_kq;      // '<S239>/Data Type Conversion'
  real32_T SFunction_o;                // '<S685>/S-Function'
  real32_T SFunction_i;                // '<S681>/S-Function'
  real32_T SFunction_p;                // '<S689>/S-Function'
  real32_T SFunction_e;                // '<S691>/S-Function'
  real32_T SFunction_or;               // '<S695>/S-Function'
  real32_T SFunction_h;                // '<S693>/S-Function'
  real32_T DataTypeConversion_d;       // '<S241>/Data Type Conversion'
  real32_T DataTypeConversion_at;      // '<S243>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S245>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S247>/Data Type Conversion'
  real32_T DataTypeConversion_cf;      // '<S249>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S251>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S253>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S255>/Data Type Conversion'
  real32_T DataTypeConversion_k1;      // '<S257>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S259>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S261>/Data Type Conversion'
  real32_T DataTypeConversion_l2;      // '<S263>/Data Type Conversion'
  real32_T DataTypeConversion_hg;      // '<S265>/Data Type Conversion'
  real32_T DataTypeConversion_as;      // '<S267>/Data Type Conversion'
  real32_T DataTypeConversion_fv;      // '<S269>/Data Type Conversion'
  real32_T DataTypeConversion_il;      // '<S271>/Data Type Conversion'
  real32_T DataTypeConversion_ep;      // '<S273>/Data Type Conversion'
  real32_T DataTypeConversion_ly;      // '<S275>/Data Type Conversion'
  real32_T DataTypeConversion_hm;      // '<S277>/Data Type Conversion'
  real32_T DataTypeConversion_fvu;     // '<S279>/Data Type Conversion'
  real32_T DataTypeConversion_nx;      // '<S281>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S283>/Data Type Conversion'
  real32_T DataTypeConversion_of;      // '<S285>/Data Type Conversion'
  real32_T DataTypeConversion_ch;      // '<S287>/Data Type Conversion'
  real32_T DataTypeConversion_cz;      // '<S289>/Data Type Conversion'
  real32_T DataTypeConversion_bt;      // '<S291>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S293>/Data Type Conversion'
  real32_T ADC_j;                      // '<S111>/ADC'
  real32_T DataTypeConversion_nc;      // '<S295>/Data Type Conversion'
  real32_T DataTypeConversion_lx;      // '<S297>/Data Type Conversion'
  real32_T DataTypeConversion_bk;      // '<S299>/Data Type Conversion'
  real32_T DataTypeConversion_gl;      // '<S301>/Data Type Conversion'
  real32_T DataTypeConversion_f2;      // '<S303>/Data Type Conversion'
  real32_T DataTypeConversion_hr;      // '<S305>/Data Type Conversion'
  real32_T DataTypeConversion_gx;      // '<S307>/Data Type Conversion'
  real32_T DataTypeConversion_kf;      // '<S309>/Data Type Conversion'
  real32_T DataTypeConversion_ex;      // '<S311>/Data Type Conversion'
  real32_T DataTypeConversion_p2;      // '<S313>/Data Type Conversion'
  real32_T DataTypeConversion_ok;      // '<S315>/Data Type Conversion'
  real32_T DataTypeConversion_j;       // '<S317>/Data Type Conversion'
  real32_T Saturation;                 // '<S137>/Saturation'
  real32_T SFunction_c;                // '<S687>/S-Function'
  real32_T Gain1[3];                   // '<S142>/Gain1'
  real32_T SFunction_em;               // '<S148>/S-Function'
  real32_T DataTypeConversion1_le;     // '<S424>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S424>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S424>/Data Type Conversion3'
  real32_T DataTypeConversion1_p;      // '<S425>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S425>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S425>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S426>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S426>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S426>/Data Type Conversion3'
  real32_T DataTypeConversion1_f;      // '<S427>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S427>/Data Type Conversion2'
  real32_T DataTypeConversion3_gf;     // '<S427>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S550>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S550>/Data Type Conversion2'
  real32_T DataTypeConversion3_gp;     // '<S550>/Data Type Conversion3'
  real32_T DataTypeConversion1_eo;     // '<S551>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S551>/Data Type Conversion2'
  real32_T DataTypeConversion3_gl;     // '<S551>/Data Type Conversion3'
  real32_T DataTypeConversion1_po;     // '<S552>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S552>/Data Type Conversion2'
  real32_T DataTypeConversion3_m;      // '<S552>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S553>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S553>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S553>/Data Type Conversion3'
  real32_T DataTypeConversion1_h3;     // '<S624>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S624>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S624>/Data Type Conversion3'
  real32_T DataTypeConversion1_mqr;    // '<S625>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S625>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S625>/Data Type Conversion3'
  real32_T DataTypeConversion1_fz;     // '<S626>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S626>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S626>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S627>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S627>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S627>/Data Type Conversion3'
  real32_T DataTypeConversion1_a;      // '<S636>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S636>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S636>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S637>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S637>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S637>/Data Type Conversion3'
  real32_T DataTypeConversion1_l4;     // '<S638>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S638>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S638>/Data Type Conversion3'
  real32_T DataTypeConversion1_bg;     // '<S639>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S639>/Data Type Conversion2'
  real32_T DataTypeConversion3_bs;     // '<S639>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S648>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S648>/Data Type Conversion2'
  real32_T DataTypeConversion3_bsx;    // '<S648>/Data Type Conversion3'
  real32_T DataTypeConversion1_o1;     // '<S649>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S649>/Data Type Conversion2'
  real32_T DataTypeConversion3_hm;     // '<S649>/Data Type Conversion3'
  real32_T DataTypeConversion1_ay;     // '<S650>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S650>/Data Type Conversion2'
  real32_T DataTypeConversion3_ip;     // '<S650>/Data Type Conversion3'
  real32_T DataTypeConversion1_pf;     // '<S651>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S651>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S651>/Data Type Conversion3'
  real32_T DataTypeConversion1_al;     // '<S668>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S668>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S668>/Data Type Conversion3'
  real32_T DataTypeConversion1_ig;     // '<S669>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S669>/Data Type Conversion2'
  real32_T DataTypeConversion3_bt;     // '<S669>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S670>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S670>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S670>/Data Type Conversion3'
  real32_T DataTypeConversion1_gw;     // '<S671>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S671>/Data Type Conversion2'
  real32_T DataTypeConversion3_bm;     // '<S671>/Data Type Conversion3'
  B_MovingAverage_imperix_ctrl_T MovingAverage_p;// '<S81>/Moving Average'
  B_MovingAverage_imperix_ctrl_T MovingAverage;// '<S81>/Moving Average'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_ctrl_T {
  dsp_simulink_MovingAverage_im_T obj; // '<S98>/Moving Average'
  mpcActiveSetOptions_imperix_c_T options_z;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_c_T options_o;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_c_T options;// '<S1>/LICCs control'
  mpcActiveSetOptions_imperix_c_T SolverOpts;// '<S32>/Saturation'
  real_T SFunction_DSTATE;             // '<S150>/S-Function'
  real_T DAC_DSTATE;                   // '<S157>/DAC'
  real_T DAC_DSTATE_j;                 // '<S159>/DAC'
  real_T DAC_DSTATE_o;                 // '<S161>/DAC'
  real_T DAC_DSTATE_h;                 // '<S163>/DAC'
  real_T DAC_DSTATE_p;                 // '<S165>/DAC'
  real_T DAC_DSTATE_pu;                // '<S167>/DAC'
  real_T SFunction_DSTATE_a;           // '<S229>/S-Function'
  real_T SFunction_DSTATE_aa;          // '<S231>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S233>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S235>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S683>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S237>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S239>/S-Function'
  real_T UnitDelay1_DSTATE[2];         // '<S170>/Unit Delay1'
  real_T UnitDelay1_DSTATE_o;          // '<S30>/Unit Delay1'
  real_T Integrator_DSTATE;            // '<S210>/Integrator'
  real_T SFunction_DSTATE_m;           // '<S685>/S-Function'
  real_T SFunction_DSTATE_fo;          // '<S681>/S-Function'
  real_T SFunction_DSTATE_am;          // '<S689>/S-Function'
  real_T UnitDelay_DSTATE[2];          // '<S84>/Unit Delay'
  real_T SFunction_DSTATE_b;           // '<S691>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S695>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S693>/S-Function'
  real_T Integrator_DSTATE_i;          // '<S354>/Integrator'
  real_T Integrator_DSTATE_d;          // '<S406>/Integrator'
  real_T Integrator_DSTATE_j;          // '<S476>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S528>/Integrator'
  real_T SFunction_DSTATE_f5;          // '<S241>/S-Function'
  real_T SFunction_DSTATE_i5;          // '<S243>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S245>/S-Function'
  real_T SFunction_DSTATE_cc;          // '<S247>/S-Function'
  real_T SFunction_DSTATE_cj;          // '<S249>/S-Function'
  real_T SFunction_DSTATE_ih;          // '<S251>/S-Function'
  real_T SFunction_DSTATE_bm;          // '<S253>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S255>/S-Function'
  real_T SFunction_DSTATE_jm;          // '<S257>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S259>/S-Function'
  real_T SFunction_DSTATE_f5c;         // '<S261>/S-Function'
  real_T SFunction_DSTATE_d5;          // '<S263>/S-Function'
  real_T SFunction_DSTATE_nw;          // '<S265>/S-Function'
  real_T SFunction_DSTATE_g4;          // '<S267>/S-Function'
  real_T SFunction_DSTATE_o5;          // '<S269>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S271>/S-Function'
  real_T SFunction_DSTATE_p0;          // '<S273>/S-Function'
  real_T SFunction_DSTATE_dq;          // '<S275>/S-Function'
  real_T SFunction_DSTATE_hf;          // '<S277>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S279>/S-Function'
  real_T SFunction_DSTATE_pb;          // '<S281>/S-Function'
  real_T SFunction_DSTATE_dh;          // '<S283>/S-Function'
  real_T SFunction_DSTATE_gh;          // '<S285>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S287>/S-Function'
  real_T SFunction_DSTATE_fx;          // '<S289>/S-Function'
  real_T SFunction_DSTATE_gt;          // '<S291>/S-Function'
  real_T SFunction_DSTATE_hv;          // '<S293>/S-Function'
  real_T SFunction_DSTATE_na;          // '<S295>/S-Function'
  real_T SFunction_DSTATE_pq;          // '<S297>/S-Function'
  real_T SFunction_DSTATE_pt;          // '<S299>/S-Function'
  real_T SFunction_DSTATE_b4;          // '<S301>/S-Function'
  real_T SFunction_DSTATE_mg;          // '<S303>/S-Function'
  real_T SFunction_DSTATE_kq;          // '<S305>/S-Function'
  real_T SFunction_DSTATE_bw;          // '<S307>/S-Function'
  real_T SFunction_DSTATE_fg;          // '<S309>/S-Function'
  real_T SFunction_DSTATE_fc;          // '<S311>/S-Function'
  real_T SFunction_DSTATE_ai;          // '<S313>/S-Function'
  real_T SFunction_DSTATE_id;          // '<S315>/S-Function'
  real_T SFunction_DSTATE_pm;          // '<S317>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S687>/S-Function'
  real_T SFunction_DSTATE_em;          // '<S144>/S-Function'
  real_T SFunction_DSTATE_kl;          // '<S146>/S-Function'
  real_T SFunction_DSTATE_bx;          // '<S148>/S-Function'
  real_T Integrator_DSTATE_p;          // '<S599>/Integrator'
  real_T SFunction_DSTATE_n5;          // '<S153>/S-Function'
  real_T TmpRTBAtVectorConcatenate4Outpo[3];// synthesized block
  real_T TmpRTBAtGainOutport1_Buffer[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport2_Bu[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport3_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport4_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport5_Bu;// synthesized block
  real_T Ac[24];                       // '<S32>/Saturation'
  real_T Ix[4];                        // '<S32>/Saturation'
  real_T Tol;                          // '<S32>/Saturation'
  real_T is_max_e;                     // '<S32>/Saturation'
  real_T A[8];                         // '<S1>/LICCs control'
  real_T B[16];                        // '<S1>/LICCs control'
  real_T H[16];                        // '<S1>/LICCs control'
  real_T Q[16];                        // '<S1>/LICCs control'
  real_T R[16];                        // '<S1>/LICCs control'
  real_T Aineq[96];                    // '<S1>/LICCs control'
  real_T pinvT[30];                    // '<S1>/LICCs control'
  real_T u_prev[2];                    // '<S1>/LICCs control'
  real_T xt_est_apriori[4];            // '<S1>/Kalman Filter'
  real_T C[8];                         // '<S1>/Kalman Filter'
  real_T kT;                           // '<S1>/Kalman Filter'
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
  real_T A_d[30];                      // '<S1>/Energy balance'
  real_T pinvA[30];                    // '<S1>/Energy balance'
  real_T K[576];                       // '<S1>/Energy balance'
  real_T MI[576];                      // '<S1>/Energy balance'
  real_T NN[192];                      // '<S1>/Energy balance'
  real_T ONE[96];                      // '<S1>/Energy balance'
  real_T Nl;                           // '<S1>/Energy balance'
  real_T is_max_p;                     // '<S1>/Energy balance'
  real_T is_max2;                      // '<S1>/Energy balance'
  real_T vo_max2;                      // '<S1>/Energy balance'
  real_T Ec_ref2;                      // '<S1>/Energy balance'
  real_T Hu_z[64];                     // '<S1>/Energy balance'
  real_T Aineq_z[384];                 // '<S1>/Energy balance'
  real_T lambda_z;                     // '<S1>/Energy balance'
  real_T Hu_o[16];                     // '<S1>/Energy balance'
  real_T Aineq_o[32];                  // '<S1>/Energy balance'
  real_T lambda_o;                     // '<S1>/Energy balance'
  real_T Ec_dev;                       // '<S1>/Energy balance'
  real32_T DiscreteTimeIntegrator1_DSTATE;// '<S18>/Discrete-Time Integrator1'
  int8_T Integrator_PrevResetState;    // '<S354>/Integrator'
  int8_T Integrator_PrevResetState_d;  // '<S406>/Integrator'
  int8_T Integrator_PrevResetState_n;  // '<S476>/Integrator'
  int8_T Integrator_PrevResetState_i;  // '<S528>/Integrator'
  boolean_T is_max_not_empty;          // '<S96>/MATLAB Function'
  boolean_T is_max_not_empty_n;        // '<S32>/White noise'
  boolean_T Ac_not_empty;              // '<S32>/Saturation'
  boolean_T Ec_ref_not_empty;          // '<S32>/Input format'
  boolean_T A_not_empty;               // '<S1>/LICCs control'
  boolean_T xt_est_apriori_not_empty;  // '<S1>/Kalman Filter'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  boolean_T Ts_not_empty;              // '<S1>/Energy balance'
  DW_MovingAverage_imperix_ctrl_T MovingAverage_p;// '<S81>/Moving Average'
  DW_MovingAverage_imperix_ctrl_T MovingAverage;// '<S81>/Moving Average'
};

// Zero-crossing (trigger) state
struct PrevZCX_imperix_ctrl_T {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S98>/Sample and Hold'
  ZCSigState SampleandHold_Trig_ZCE_i; // '<S82>/Sample and Hold'
  ZCSigState SampleandHold_Trig_ZCE_f; // '<S81>/Sample and Hold'
};

// Parameters for system: '<S441>/Subsystem - pi//2 delay'
struct P_Subsystempi2delay_imperix_c_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S548>/alpha_beta'

};

// Parameters for system: '<S441>/Subsystem1'
struct P_Subsystem1_imperix_ctrl_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S549>/alpha_beta'

};

// Parameters (default storage)
struct P_imperix_ctrl_T_ {
  struct_coWYOfcHQKga4h4Z3609x CEMPC;  // Variable: CEMPC
                                          //  Referenced by: '<S1>/Energy balance'

  struct_1mUndb4d19cpHVlbIkwLFC KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_WbJ8avaNECGQlGMumVRlBD CCMPC; // Variable: CCMPC
                                          //  Referenced by:
                                          //    '<S1>/LICCs control'
                                          //    '<S170>/Gain1'
                                          //    '<S170>/Gain2'

  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S1>/Constant'
                                          //    '<S1>/Gain'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain20'
                                          //    '<S1>/Gain21'
                                          //    '<S1>/Gain22'
                                          //    '<S1>/Gain4'
                                          //    '<S30>/Unit Delay1'
                                          //    '<S32>/Input format'
                                          //    '<S32>/Saturation'
                                          //    '<S32>/White noise'
                                          //    '<S32>/Gain7'
                                          //    '<S83>/vx'
                                          //    '<S86>/Gain1'
                                          //    '<S86>/Gain3'
                                          //    '<S86>/Gain4'
                                          //    '<S89>/Constant1'
                                          //    '<S90>/Gain'
                                          //    '<S96>/MATLAB Function'

  struct_aK5aQeabUeTOrz39VMjTKC IM;    // Variable: IM
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S1>/Kalman Filter'
                                          //    '<S1>/Gain10'
                                          //    '<S1>/Gain11'
                                          //    '<S1>/Gain12'
                                          //    '<S1>/Gain13'
                                          //    '<S1>/Gain14'
                                          //    '<S1>/Gain15'
                                          //    '<S1>/Gain17'
                                          //    '<S1>/Gain18'
                                          //    '<S1>/Gain19'
                                          //    '<S1>/Gain23'
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain5'
                                          //    '<S1>/Gain8'
                                          //    '<S1>/Gain9'
                                          //    '<S79>/isdN'
                                          //    '<S84>/Gain'

  struct_eLXpdkXVH71IKiDfJkdaiC RFT;   // Variable: RFT
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S32>/Input format'
                                          //    '<S32>/Gain5'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S346>/Kb'
                                          //    '<S351>/Integral Gain'
                                          //    '<S359>/Proportional Gain'
                                          //    '<S361>/Saturation'
                                          //    '<S398>/Kb'
                                          //    '<S403>/Integral Gain'
                                          //    '<S411>/Proportional Gain'
                                          //    '<S413>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S1>/Gain16'
                                          //    '<S468>/Kb'
                                          //    '<S473>/Integral Gain'
                                          //    '<S481>/Proportional Gain'
                                          //    '<S483>/Saturation'
                                          //    '<S520>/Kb'
                                          //    '<S525>/Integral Gain'
                                          //    '<S533>/Proportional Gain'
                                          //    '<S535>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S1>/Gain6'
                                          //    '<S1>/Gain7'
                                          //    '<S596>/Integral Gain'
                                          //    '<S604>/Proportional Gain'
                                          //    '<S606>/Saturation'
                                          //    '<S591>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEB;   // Variable: TEB
                                          //  Referenced by:
                                          //    '<S30>/Gain1'
                                          //    '<S30>/Gain2'
                                          //    '<S207>/Integral Gain'
                                          //    '<S215>/Proportional Gain'
                                          //    '<S217>/Saturation'
                                          //    '<S202>/DeadZone'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by:
                                          //    '<S32>/Input format'
                                          //    '<S32>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S32>/Gain4'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S662>/Constant'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S618>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_l;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_l
                                  //  Referenced by: '<S441>/Constant'

  real_T PIDController1_InitialCondition;
                              // Mask Parameter: PIDController1_InitialCondition
                                 //  Referenced by: '<S210>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S354>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S406>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S476>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S528>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S599>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S663>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S664>/Constant'

  real_T CompareToConstant_const_o; // Mask Parameter: CompareToConstant_const_o
                                       //  Referenced by: '<S620>/Constant'

  real_T CompareToConstant1_const_o;
                                   // Mask Parameter: CompareToConstant1_const_o
                                      //  Referenced by: '<S621>/Constant'

  real_T CompareToConstant_const_l; // Mask Parameter: CompareToConstant_const_l
                                       //  Referenced by: '<S546>/Constant'

  real_T CompareToConstant1_const_l;
                                   // Mask Parameter: CompareToConstant1_const_l
                                      //  Referenced by: '<S547>/Constant'

  real_T _Y0;                          // Expression: initCond
                                          //  Referenced by: '<S436>/ '

  real_T _Y0_o;                        // Expression: initCond
                                          //  Referenced by: '<S437>/ '

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S622>/dq'

  real_T dq_Y0_f[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S623>/dq'

  real_T _Y0_i;                        // Expression: initCond
                                          //  Referenced by: '<S667>/ '

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S200>/Constant1'

  real_T Constant1_Value_d;            // Expression: 0
                                          //  Referenced by: '<S589>/Constant1'

  real_T Constant3_Value;              // Expression: 260
                                          //  Referenced by: '<S18>/Constant3'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S150>/S-Function'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S109>/ADC'

  real_T ADC_P8_e;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S127>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S131>/ADC'

  real_T ADC_P8_lb;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S113>/ADC'

  real_T ADC_P8_d;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S133>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S135>/ADC'

  real_T Gain24_Gain;                  // Expression: 520
                                          //  Referenced by: '<S1>/Gain24'

  real_T ADC_P8_ls;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S123>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S125>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S115>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S129>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S117>/ADC'

  real_T ADC_P8_lh;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S119>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S121>/ADC'

  real_T SFunction_P17_o;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S683>/S-Function'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S170>/Unit Delay1'

  real_T TmpRTBAtVectorConcatenate4Outpo;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S210>/Integrator'

  real_T Gain3_Gain[2];                // Expression: [1; -1]
                                          //  Referenced by: '<S32>/Gain3'

  real_T SFunction_P17_j;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S685>/S-Function'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S681>/S-Function'

  real_T SFunction_P17_i;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S689>/S-Function'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S92>/Gain2'

  real_T Gain3_Gain_d[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S619>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S619>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S84>/Unit Delay'

  real_T SFunction_P17_p;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S691>/S-Function'

  real_T SFunction_P17_h;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S695>/S-Function'

  real_T SFunction_P17_f;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S693>/S-Function'

  real_T Integrator_gainval_a;       // Computed Parameter: Integrator_gainval_a
                                        //  Referenced by: '<S354>/Integrator'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S79>/Constant'

  real_T Integrator_gainval_e;       // Computed Parameter: Integrator_gainval_e
                                        //  Referenced by: '<S406>/Integrator'

  real_T Constant_Value_h;             // Expression: 0
                                          //  Referenced by: '<S88>/Constant'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T Integrator_gainval_i;       // Computed Parameter: Integrator_gainval_i
                                        //  Referenced by: '<S476>/Integrator'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S528>/Integrator'

  real_T Gain3_Gain_p[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S438>/Gain3'

  real_T Gain2_Gain_o[30];             // Expression: M2C.A'
                                          //  Referenced by: '<S83>/Gain2'

  real_T ADC_P8_h;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S111>/ADC'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S687>/S-Function'

  real_T SFunction_P17_oi;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S148>/S-Function'

  real_T Integrator_gainval_a3;     // Computed Parameter: Integrator_gainval_a3
                                       //  Referenced by: '<S599>/Integrator'

  real_T Gain1_Gain_m;                 // Expression: 2
                                          //  Referenced by: '<S84>/Gain1'

  real_T Constant_Value_b[2];          // Expression: [0; 0]
                                          //  Referenced by: '<S18>/Constant'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S200>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S424>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S425>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S426>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S427>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S550>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S551>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S552>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S553>/phase'

  real_T Gain3_Gain_m[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S661>/Gain3'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S87>/Gain'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S87>/Gain8'

  real_T Clamping_zero_Value_a;        // Expression: 0
                                          //  Referenced by: '<S589>/Clamping_zero'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S624>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S625>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S626>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S627>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S636>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S637>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S638>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S639>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S648>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S649>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S650>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S651>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S668>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S669>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S670>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S671>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S429>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S429>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S429>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S431>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S431>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S431>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S433>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S433>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S433>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S435>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S435>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S435>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S555>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S555>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S555>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S557>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S557>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S557>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S559>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S559>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S559>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S561>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S561>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S561>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S629>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S629>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S629>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S631>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S631>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S631>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S633>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S633>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S633>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S635>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S635>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S635>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S641>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S641>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S641>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S643>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S643>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S643>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S645>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S645>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S645>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S647>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S647>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S647>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S653>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S653>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S653>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S655>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S655>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S655>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S657>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S657>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S657>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S659>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S659>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S659>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S673>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S673>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S673>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S675>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S675>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S675>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S677>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S677>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S677>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S679>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S679>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S679>/PWM'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S150>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S150>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S150>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S150>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S150>/S-Function'

  real32_T Gain23_Gain;                // Computed Parameter: Gain23_Gain
                                          //  Referenced by: '<S18>/Gain23'

  real32_T Bias1_Bias;                 // Computed Parameter: Bias1_Bias
                                          //  Referenced by: '<S18>/Bias1'

  real32_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S18>/Discrete-Time Integrator1'

  real32_T DiscreteTimeIntegrator1_IC;
                               // Computed Parameter: DiscreteTimeIntegrator1_IC
                                  //  Referenced by: '<S18>/Discrete-Time Integrator1'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S109>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S109>/ADC'

  real32_T ADC_P2_n;                   // Expression: single(gain)
                                          //  Referenced by: '<S127>/ADC'

  real32_T ADC_P3_i;                   // Expression: single(offset)
                                          //  Referenced by: '<S127>/ADC'

  real32_T ADC_P2_g;                   // Expression: single(gain)
                                          //  Referenced by: '<S131>/ADC'

  real32_T ADC_P3_a;                   // Expression: single(offset)
                                          //  Referenced by: '<S131>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S113>/ADC'

  real32_T ADC_P3_p;                   // Expression: single(offset)
                                          //  Referenced by: '<S113>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S133>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S133>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S135>/ADC'

  real32_T ADC_P3_ir;                  // Expression: single(offset)
                                          //  Referenced by: '<S135>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S123>/ADC'

  real32_T ADC_P3_cq;                  // Expression: single(offset)
                                          //  Referenced by: '<S123>/ADC'

  real32_T ADC_P2_m1;                  // Expression: single(gain)
                                          //  Referenced by: '<S125>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S125>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S115>/ADC'

  real32_T ADC_P3_l;                   // Expression: single(offset)
                                          //  Referenced by: '<S115>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S129>/ADC'

  real32_T ADC_P3_ck;                  // Expression: single(offset)
                                          //  Referenced by: '<S129>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S117>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S117>/ADC'

  real32_T ADC_P2_p5;                  // Expression: single(gain)
                                          //  Referenced by: '<S119>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S119>/ADC'

  real32_T SFunction_P6_l;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P6_l1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P6_gj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T ADC_P2_pa;                  // Expression: single(gain)
                                          //  Referenced by: '<S121>/ADC'

  real32_T ADC_P3_eo;                  // Expression: single(offset)
                                          //  Referenced by: '<S121>/ADC'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S683>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S683>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S683>/S-Function'

  real32_T SFunction_P6_ge;            // Expression: single(0)
                                          //  Referenced by: '<S683>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S683>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P3_l;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S685>/S-Function'

  real32_T SFunction_P4_k;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S685>/S-Function'

  real32_T SFunction_P5_c;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S685>/S-Function'

  real32_T SFunction_P6_pi;            // Expression: single(0)
                                          //  Referenced by: '<S685>/S-Function'

  real32_T SFunction_P7_p;             // Expression: single(0)
                                          //  Referenced by: '<S685>/S-Function'

  real32_T SFunction_P3_o;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P4_d;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(0)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S681>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S689>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S689>/S-Function'

  real32_T SFunction_P5_n;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S689>/S-Function'

  real32_T SFunction_P6_jg;            // Expression: single(0)
                                          //  Referenced by: '<S689>/S-Function'

  real32_T SFunction_P7_il;            // Expression: single(0)
                                          //  Referenced by: '<S689>/S-Function'

  real32_T SFunction_P3_lm;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S691>/S-Function'

  real32_T SFunction_P4_f;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S691>/S-Function'

  real32_T SFunction_P5_l;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S691>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(0)
                                          //  Referenced by: '<S691>/S-Function'

  real32_T SFunction_P7_l;             // Expression: single(0)
                                          //  Referenced by: '<S691>/S-Function'

  real32_T SFunction_P3_d;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S695>/S-Function'

  real32_T SFunction_P4_m;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S695>/S-Function'

  real32_T SFunction_P5_p4;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S695>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(0)
                                          //  Referenced by: '<S695>/S-Function'

  real32_T SFunction_P7_n;             // Expression: single(0)
                                          //  Referenced by: '<S695>/S-Function'

  real32_T SFunction_P3_h;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S693>/S-Function'

  real32_T SFunction_P4_n;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S693>/S-Function'

  real32_T SFunction_P5_m;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S693>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(0)
                                          //  Referenced by: '<S693>/S-Function'

  real32_T SFunction_P7_k;             // Expression: single(0)
                                          //  Referenced by: '<S693>/S-Function'

  real32_T SFunction_P6_hz;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P6_df;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P12_jr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P6_nl;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P12_bn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P12_ho;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P6_ct;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S257>/S-Function'

  real32_T SFunction_P12_pr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S257>/S-Function'

  real32_T SFunction_P6_hs;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S259>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S259>/S-Function'

  real32_T SFunction_P6_n2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S261>/S-Function'

  real32_T SFunction_P12_gr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S261>/S-Function'

  real32_T SFunction_P6_c3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S263>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S263>/S-Function'

  real32_T SFunction_P6_ii;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S265>/S-Function'

  real32_T SFunction_P12_eo;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S265>/S-Function'

  real32_T SFunction_P6_iy;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S267>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S267>/S-Function'

  real32_T SFunction_P6_mc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S269>/S-Function'

  real32_T SFunction_P12_gf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S269>/S-Function'

  real32_T SFunction_P6_pm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S271>/S-Function'

  real32_T SFunction_P12_nf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S271>/S-Function'

  real32_T SFunction_P6_jl;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S273>/S-Function'

  real32_T SFunction_P12_jl;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S273>/S-Function'

  real32_T SFunction_P6_hb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S275>/S-Function'

  real32_T SFunction_P12_cn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S275>/S-Function'

  real32_T SFunction_P6_bm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S277>/S-Function'

  real32_T SFunction_P12_fd;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S277>/S-Function'

  real32_T SFunction_P6_jq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S279>/S-Function'

  real32_T SFunction_P12_oz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S279>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S281>/S-Function'

  real32_T SFunction_P12_ow;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S281>/S-Function'

  real32_T SFunction_P6_pf;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S283>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S283>/S-Function'

  real32_T SFunction_P6_ls;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S285>/S-Function'

  real32_T SFunction_P12_bno;          // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S285>/S-Function'

  real32_T SFunction_P6_ie;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S287>/S-Function'

  real32_T SFunction_P12_hk;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S287>/S-Function'

  real32_T SFunction_P6_pk;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S289>/S-Function'

  real32_T SFunction_P12_nl;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S289>/S-Function'

  real32_T SFunction_P6_bb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S291>/S-Function'

  real32_T SFunction_P12_ha;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S291>/S-Function'

  real32_T SFunction_P6_mcm;           // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S293>/S-Function'

  real32_T SFunction_P12_fk;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S293>/S-Function'

  real32_T ADC_P2_nu;                  // Expression: single(gain)
                                          //  Referenced by: '<S111>/ADC'

  real32_T ADC_P3_cp;                  // Expression: single(offset)
                                          //  Referenced by: '<S111>/ADC'

  real32_T SFunction_P6_fd;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S295>/S-Function'

  real32_T SFunction_P12_af;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S295>/S-Function'

  real32_T SFunction_P6_ne;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S297>/S-Function'

  real32_T SFunction_P12_fa;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S297>/S-Function'

  real32_T SFunction_P6_ih;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S299>/S-Function'

  real32_T SFunction_P12_jld;          // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S299>/S-Function'

  real32_T SFunction_P6_cl;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S301>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S301>/S-Function'

  real32_T SFunction_P6_f5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S303>/S-Function'

  real32_T SFunction_P12_ek;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S303>/S-Function'

  real32_T SFunction_P6_n4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S305>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S305>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S307>/S-Function'

  real32_T SFunction_P12_ok;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S307>/S-Function'

  real32_T SFunction_P6_c0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S309>/S-Function'

  real32_T SFunction_P12_om;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S309>/S-Function'

  real32_T SFunction_P6_dm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S311>/S-Function'

  real32_T SFunction_P12_l2;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S311>/S-Function'

  real32_T SFunction_P6_j2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S313>/S-Function'

  real32_T SFunction_P12_bv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S313>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S315>/S-Function'

  real32_T SFunction_P12_gw;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S315>/S-Function'

  real32_T SFunction_P6_kj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S317>/S-Function'

  real32_T SFunction_P12_kg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S317>/S-Function'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<S137>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<S137>/Saturation'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S137>/CLK1'

  real32_T SFunction_P3_na;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S687>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S687>/S-Function'

  real32_T SFunction_P5_fk;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S687>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S687>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S687>/S-Function'

  real32_T Gain3_Gain_pz[9];           // Computed Parameter: Gain3_Gain_pz
                                          //  Referenced by: '<S142>/Gain3'

  real32_T Gain1_Gain_k;               // Computed Parameter: Gain1_Gain_k
                                          //  Referenced by: '<S142>/Gain1'

  real32_T SFunction_P6_it;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S144>/S-Function'

  real32_T SFunction_P12_gh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S144>/S-Function'

  real32_T SFunction_P6_le;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S146>/S-Function'

  real32_T SFunction_P12_bq;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S146>/S-Function'

  real32_T SFunction_P3_j;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S148>/S-Function'

  real32_T SFunction_P4_nn;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S148>/S-Function'

  real32_T SFunction_P5_e;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S148>/S-Function'

  real32_T SFunction_P6_cq;            // Expression: single(0)
                                          //  Referenced by: '<S148>/S-Function'

  real32_T SFunction_P7_iw;            // Expression: single(0)
                                          //  Referenced by: '<S148>/S-Function'

  real32_T Gain22_Gain;                // Computed Parameter: Gain22_Gain
                                          //  Referenced by: '<S18>/Gain22'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S153>/S-Function'

  real32_T SFunction_P3_m5;            // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S153>/S-Function'

  real32_T CLK1_P2_i;                  // Expression: single(frequency)
                                          //  Referenced by: '<S155>/CLK1'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S150>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P7_e;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P7_dt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P10_b;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S683>/S-Function'

  uint32_T SFunction_P7_na;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P13_b2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S685>/S-Function'

  uint32_T SFunction_P10_a;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S681>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S689>/S-Function'

  uint32_T SFunction_P10_b1;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S691>/S-Function'

  uint32_T SFunction_P10_br;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S695>/S-Function'

  uint32_T SFunction_P10_e;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S693>/S-Function'

  uint32_T SFunction_P7_gq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P7_ii;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P7_oo;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P13_fg;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P7_ko;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P13_gr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P7_dw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P7_od;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P7_ku;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S257>/S-Function'

  uint32_T SFunction_P13_ar;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S257>/S-Function'

  uint32_T SFunction_P7_n4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S259>/S-Function'

  uint32_T SFunction_P13_bv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S259>/S-Function'

  uint32_T SFunction_P7_oc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S261>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S261>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S263>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S263>/S-Function'

  uint32_T SFunction_P7_dz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S265>/S-Function'

  uint32_T SFunction_P13_df;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S265>/S-Function'

  uint32_T SFunction_P7_hw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S267>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S267>/S-Function'

  uint32_T SFunction_P7_ag;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S269>/S-Function'

  uint32_T SFunction_P13_fo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S269>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S271>/S-Function'

  uint32_T SFunction_P13_cr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S271>/S-Function'

  uint32_T SFunction_P7_pf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S273>/S-Function'

  uint32_T SFunction_P13_i2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S273>/S-Function'

  uint32_T SFunction_P7_ci;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S275>/S-Function'

  uint32_T SFunction_P13_ig;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S275>/S-Function'

  uint32_T SFunction_P7_ev;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S277>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S277>/S-Function'

  uint32_T SFunction_P7_jx;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S279>/S-Function'

  uint32_T SFunction_P13_nc;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S279>/S-Function'

  uint32_T SFunction_P7_k3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S281>/S-Function'

  uint32_T SFunction_P13_fh;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S281>/S-Function'

  uint32_T SFunction_P7_ju;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S283>/S-Function'

  uint32_T SFunction_P13_lp;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S283>/S-Function'

  uint32_T SFunction_P7_jf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S285>/S-Function'

  uint32_T SFunction_P13_la;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S285>/S-Function'

  uint32_T SFunction_P7_gb;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S287>/S-Function'

  uint32_T SFunction_P13_kn;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S287>/S-Function'

  uint32_T SFunction_P7_b3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S289>/S-Function'

  uint32_T SFunction_P13_o2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S289>/S-Function'

  uint32_T SFunction_P7_ph;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S291>/S-Function'

  uint32_T SFunction_P13_o1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S291>/S-Function'

  uint32_T SFunction_P7_gz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S293>/S-Function'

  uint32_T SFunction_P13_h3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S293>/S-Function'

  uint32_T SFunction_P7_p1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S295>/S-Function'

  uint32_T SFunction_P13_ia;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S295>/S-Function'

  uint32_T SFunction_P7_nj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S297>/S-Function'

  uint32_T SFunction_P13_dz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S297>/S-Function'

  uint32_T SFunction_P7_ny;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S299>/S-Function'

  uint32_T SFunction_P13_ol;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S299>/S-Function'

  uint32_T SFunction_P7_ga;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S301>/S-Function'

  uint32_T SFunction_P13_oo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S301>/S-Function'

  uint32_T SFunction_P7_jxl;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S303>/S-Function'

  uint32_T SFunction_P13_eu;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S303>/S-Function'

  uint32_T SFunction_P7_hf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S305>/S-Function'

  uint32_T SFunction_P13_as;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S305>/S-Function'

  uint32_T SFunction_P7_hfk;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S307>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S307>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S309>/S-Function'

  uint32_T SFunction_P13_ch;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S309>/S-Function'

  uint32_T SFunction_P7_da;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S311>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S311>/S-Function'

  uint32_T SFunction_P7_c3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S313>/S-Function'

  uint32_T SFunction_P13_a1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S313>/S-Function'

  uint32_T SFunction_P7_pg;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S315>/S-Function'

  uint32_T SFunction_P13_oa;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S315>/S-Function'

  uint32_T SFunction_P7_h0;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S317>/S-Function'

  uint32_T SFunction_P13_ob;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S317>/S-Function'

  uint32_T SFunction_P10_k0;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S687>/S-Function'

  uint32_T SFunction_P7_ms;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S144>/S-Function'

  uint32_T SFunction_P13_gn;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S144>/S-Function'

  uint32_T SFunction_P7_mm;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S146>/S-Function'

  uint32_T SFunction_P13_fj;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S146>/S-Function'

  uint32_T SFunction_P10_er;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S148>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S429>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S429>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S429>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S429>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S429>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S429>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S431>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S431>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S431>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S431>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S431>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S431>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S433>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S433>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S433>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S433>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S433>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S433>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S435>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S435>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S435>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S435>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S435>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S435>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S561>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S561>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S561>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S561>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S561>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S561>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S629>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S629>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S629>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S629>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S629>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S629>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S631>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S631>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S631>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S631>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S631>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S631>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S633>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S633>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S633>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S633>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S633>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S633>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S635>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S635>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S635>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S635>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S635>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S635>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S641>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S643>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S645>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S645>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S645>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S645>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S645>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S645>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S647>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S647>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S647>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S647>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S647>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S647>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S653>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S655>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S657>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S659>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S673>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S673>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S673>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S673>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S673>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S673>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S675>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S675>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S675>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S675>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S675>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S675>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S677>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S677>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S677>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S677>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S677>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S677>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S679>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S679>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S679>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S679>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S679>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S679>/PWM'

  int16_T SFunction_P2_b;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S150>/S-Function'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S109>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S109>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S109>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S109>/ADC'

  int16_T ADC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S127>/ADC'

  int16_T ADC_P4_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S127>/ADC'

  int16_T ADC_P6_j;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S127>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S127>/ADC'

  int16_T ADC_P1_mt;                   // Expression: int16(channel)
                                          //  Referenced by: '<S131>/ADC'

  int16_T ADC_P4_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S131>/ADC'

  int16_T ADC_P6_jm;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S131>/ADC'

  int16_T ADC_P9_c;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S131>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S113>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S113>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S113>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S113>/ADC'

  int16_T ADC_P1_b;                    // Expression: int16(channel)
                                          //  Referenced by: '<S133>/ADC'

  int16_T ADC_P4_ie;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S133>/ADC'

  int16_T ADC_P6_jr;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S133>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S133>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S135>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S135>/ADC'

  int16_T ADC_P6_d;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S135>/ADC'

  int16_T ADC_P9_nr;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S135>/ADC'

  int16_T DAC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S157>/DAC'

  int16_T DAC_P2;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S157>/DAC'

  int16_T DAC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S159>/DAC'

  int16_T DAC_P2_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S159>/DAC'

  int16_T DAC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S161>/DAC'

  int16_T DAC_P2_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S161>/DAC'

  int16_T DAC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S163>/DAC'

  int16_T DAC_P2_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S163>/DAC'

  int16_T DAC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S165>/DAC'

  int16_T DAC_P2_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S165>/DAC'

  int16_T DAC_P1_nv;                   // Expression: int16(channel)
                                          //  Referenced by: '<S167>/DAC'

  int16_T DAC_P2_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S167>/DAC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S123>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S123>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S123>/ADC'

  int16_T ADC_P9_nh;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S123>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S125>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S125>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S125>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S125>/ADC'

  int16_T ADC_P1_ad;                   // Expression: int16(channel)
                                          //  Referenced by: '<S115>/ADC'

  int16_T ADC_P4_i4;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S115>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S115>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S115>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S129>/ADC'

  int16_T ADC_P4_it;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S129>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S129>/ADC'

  int16_T ADC_P9_n4;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S129>/ADC'

  int16_T ADC_P1_fx;                   // Expression: int16(channel)
                                          //  Referenced by: '<S117>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S117>/ADC'

  int16_T ADC_P6_p0;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S117>/ADC'

  int16_T ADC_P9_bb;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S117>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S119>/ADC'

  int16_T ADC_P4_b2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S119>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S119>/ADC'

  int16_T ADC_P9_nd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S119>/ADC'

  int16_T SFunction_P2_p;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P3_hu;             // Expression: int16(0)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P2_nm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P3_jc;             // Expression: int16(0)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T ADC_P1_ag;                   // Expression: int16(channel)
                                          //  Referenced by: '<S121>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S121>/ADC'

  int16_T ADC_P6_fi;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S121>/ADC'

  int16_T ADC_P9_i;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S121>/ADC'

  int16_T SFunction_P2_bu;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S683>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P3_k;              // Expression: int16(0)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P2_ny;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P2_ab;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S685>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S681>/S-Function'

  int16_T SFunction_P2_ao;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S689>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S691>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S695>/S-Function'

  int16_T SFunction_P2_nt;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S693>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P3_lo;             // Expression: int16(0)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P2_jy;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P3_ns;             // Expression: int16(0)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P2_fp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P2_a1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P2_kq;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P3_ks;             // Expression: int16(0)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P3_f0;             // Expression: int16(0)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P2_ix;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P3_e5;             // Expression: int16(0)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S257>/S-Function'

  int16_T SFunction_P3_d0;             // Expression: int16(0)
                                          //  Referenced by: '<S257>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S259>/S-Function'

  int16_T SFunction_P3_jt;             // Expression: int16(0)
                                          //  Referenced by: '<S259>/S-Function'

  int16_T SFunction_P2_go;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S261>/S-Function'

  int16_T SFunction_P3_ig;             // Expression: int16(0)
                                          //  Referenced by: '<S261>/S-Function'

  int16_T SFunction_P2_fpu;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S263>/S-Function'

  int16_T SFunction_P3_kv;             // Expression: int16(0)
                                          //  Referenced by: '<S263>/S-Function'

  int16_T SFunction_P2_k3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S265>/S-Function'

  int16_T SFunction_P3_fc;             // Expression: int16(0)
                                          //  Referenced by: '<S265>/S-Function'

  int16_T SFunction_P2_lq;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S267>/S-Function'

  int16_T SFunction_P3_fq;             // Expression: int16(0)
                                          //  Referenced by: '<S267>/S-Function'

  int16_T SFunction_P2_bg;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S269>/S-Function'

  int16_T SFunction_P3_gj;             // Expression: int16(0)
                                          //  Referenced by: '<S269>/S-Function'

  int16_T SFunction_P2_mq;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S271>/S-Function'

  int16_T SFunction_P3_nu;             // Expression: int16(0)
                                          //  Referenced by: '<S271>/S-Function'

  int16_T SFunction_P2_cm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S273>/S-Function'

  int16_T SFunction_P3_igb;            // Expression: int16(0)
                                          //  Referenced by: '<S273>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S275>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S275>/S-Function'

  int16_T SFunction_P2_oi;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S277>/S-Function'

  int16_T SFunction_P3_kk;             // Expression: int16(0)
                                          //  Referenced by: '<S277>/S-Function'

  int16_T SFunction_P2_a3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S279>/S-Function'

  int16_T SFunction_P3_f1;             // Expression: int16(0)
                                          //  Referenced by: '<S279>/S-Function'

  int16_T SFunction_P2_c0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S281>/S-Function'

  int16_T SFunction_P3_gb;             // Expression: int16(0)
                                          //  Referenced by: '<S281>/S-Function'

  int16_T SFunction_P2_m3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S283>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S283>/S-Function'

  int16_T SFunction_P2_bi;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S285>/S-Function'

  int16_T SFunction_P3_lv;             // Expression: int16(0)
                                          //  Referenced by: '<S285>/S-Function'

  int16_T SFunction_P2_gr;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S287>/S-Function'

  int16_T SFunction_P3_h4;             // Expression: int16(0)
                                          //  Referenced by: '<S287>/S-Function'

  int16_T SFunction_P2_ke;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S289>/S-Function'

  int16_T SFunction_P3_el;             // Expression: int16(0)
                                          //  Referenced by: '<S289>/S-Function'

  int16_T SFunction_P2_gp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S291>/S-Function'

  int16_T SFunction_P3_gi;             // Expression: int16(0)
                                          //  Referenced by: '<S291>/S-Function'

  int16_T SFunction_P2_ot;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S293>/S-Function'

  int16_T SFunction_P3_kj;             // Expression: int16(0)
                                          //  Referenced by: '<S293>/S-Function'

  int16_T ADC_P1_pk;                   // Expression: int16(channel)
                                          //  Referenced by: '<S111>/ADC'

  int16_T ADC_P4_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S111>/ADC'

  int16_T ADC_P6_pc;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S111>/ADC'

  int16_T ADC_P9_cs;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S111>/ADC'

  int16_T SFunction_P2_of;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S295>/S-Function'

  int16_T SFunction_P3_o2;             // Expression: int16(0)
                                          //  Referenced by: '<S295>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S297>/S-Function'

  int16_T SFunction_P3_o5;             // Expression: int16(0)
                                          //  Referenced by: '<S297>/S-Function'

  int16_T SFunction_P2_dl;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S299>/S-Function'

  int16_T SFunction_P3_i4;             // Expression: int16(0)
                                          //  Referenced by: '<S299>/S-Function'

  int16_T SFunction_P2_ir;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S301>/S-Function'

  int16_T SFunction_P3_cm;             // Expression: int16(0)
                                          //  Referenced by: '<S301>/S-Function'

  int16_T SFunction_P2_ko;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S303>/S-Function'

  int16_T SFunction_P3_bv;             // Expression: int16(0)
                                          //  Referenced by: '<S303>/S-Function'

  int16_T SFunction_P2_iu;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S305>/S-Function'

  int16_T SFunction_P3_a0;             // Expression: int16(0)
                                          //  Referenced by: '<S305>/S-Function'

  int16_T SFunction_P2_dk;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S307>/S-Function'

  int16_T SFunction_P3_np;             // Expression: int16(0)
                                          //  Referenced by: '<S307>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S309>/S-Function'

  int16_T SFunction_P3_ih;             // Expression: int16(0)
                                          //  Referenced by: '<S309>/S-Function'

  int16_T SFunction_P2_mc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S311>/S-Function'

  int16_T SFunction_P3_ho;             // Expression: int16(0)
                                          //  Referenced by: '<S311>/S-Function'

  int16_T SFunction_P2_fe;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S313>/S-Function'

  int16_T SFunction_P3_hl;             // Expression: int16(0)
                                          //  Referenced by: '<S313>/S-Function'

  int16_T SFunction_P2_ni;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S315>/S-Function'

  int16_T SFunction_P3_ba;             // Expression: int16(0)
                                          //  Referenced by: '<S315>/S-Function'

  int16_T SFunction_P2_ag;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S317>/S-Function'

  int16_T SFunction_P3_nl;             // Expression: int16(0)
                                          //  Referenced by: '<S317>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S137>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S137>/CLK1'

  int16_T SFunction_P2_m0;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S687>/S-Function'

  int16_T SFunction_P2_kd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S144>/S-Function'

  int16_T SFunction_P3_bt;             // Expression: int16(0)
                                          //  Referenced by: '<S144>/S-Function'

  int16_T SFunction_P2_p1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S146>/S-Function'

  int16_T SFunction_P3_l0;             // Expression: int16(0)
                                          //  Referenced by: '<S146>/S-Function'

  int16_T SFunction_P2_h;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S148>/S-Function'

  int16_T clk_id_Value_o;              // Computed Parameter: clk_id_Value_o
                                          //  Referenced by: '<S155>/clk_id'

  int16_T CLK1_P1_c;                   // Expression: int16(id)
                                          //  Referenced by: '<S155>/CLK1'

  uint16_T SFunction_P1[5];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S150>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S150>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S150>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S150>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S150>/S-Function'

  uint16_T SFunction_P1_e[3];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P5_pc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P14_e[5];         // Computed Parameter: SFunction_P14_e
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P1_o[3];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P1_f[3];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P1_g[3];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P5_eb;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P8_dm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P1_k[10];         // Computed Parameter: SFunction_P1_k
                                          //  Referenced by: '<S683>/S-Function'

  uint16_T SFunction_P9_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S683>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S683>/S-Function'

  uint16_T SFunction_P14_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S683>/S-Function'

  uint16_T SFunction_P15_f;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S683>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P1_h[3];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P5_j0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P11_cj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P14_aj[5];        // Computed Parameter: SFunction_P14_aj
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P1_l[9];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S685>/S-Function'

  uint16_T SFunction_P9_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S685>/S-Function'

  uint16_T SFunction_P11_lf;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S685>/S-Function'

  uint16_T SFunction_P14_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S685>/S-Function'

  uint16_T SFunction_P15_b;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S685>/S-Function'

  uint16_T SFunction_P1_i[5];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P9_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P11_ad;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P14_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P15_j;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S681>/S-Function'

  uint16_T SFunction_P1_fw[5];         // Computed Parameter: SFunction_P1_fw
                                          //  Referenced by: '<S689>/S-Function'

  uint16_T SFunction_P9_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S689>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S689>/S-Function'

  uint16_T SFunction_P14_ie;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S689>/S-Function'

  uint16_T SFunction_P15_f1;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S689>/S-Function'

  uint16_T SFunction_P1_j[9];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S691>/S-Function'

  uint16_T SFunction_P9_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S691>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S691>/S-Function'

  uint16_T SFunction_P14_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S691>/S-Function'

  uint16_T SFunction_P15_g;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S691>/S-Function'

  uint16_T SFunction_P1_b[8];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S695>/S-Function'

  uint16_T SFunction_P9_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S695>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S695>/S-Function'

  uint16_T SFunction_P14_j0;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S695>/S-Function'

  uint16_T SFunction_P15_p;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S695>/S-Function'

  uint16_T SFunction_P1_bf[8];         // Computed Parameter: SFunction_P1_bf
                                          //  Referenced by: '<S693>/S-Function'

  uint16_T SFunction_P9_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S693>/S-Function'

  uint16_T SFunction_P11_bg;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S693>/S-Function'

  uint16_T SFunction_P14_ec;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S693>/S-Function'

  uint16_T SFunction_P15_k;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S693>/S-Function'

  uint16_T SFunction_P1_c[5];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P5_lb;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P1_ma[4];         // Computed Parameter: SFunction_P1_ma
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P11_gf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P1_l5[5];         // Computed Parameter: SFunction_P1_l5
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P1_gf[3];         // Computed Parameter: SFunction_P1_gf
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P5_f5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P8_kc;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P11_j3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P14_eh[5];        // Computed Parameter: SFunction_P14_eh
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P14_kn[5];        // Computed Parameter: SFunction_P14_kn
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P1_p[4];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P14_ix[5];        // Computed Parameter: SFunction_P14_ix
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P1_l4[3];         // Computed Parameter: SFunction_P1_l4
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P5_kp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P8_de;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P11_pl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P14_l4[5];        // Computed Parameter: SFunction_P14_l4
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P1_pv[6];         // Computed Parameter: SFunction_P1_pv
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P5_m5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P11_k4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P1_lq[4];         // Computed Parameter: SFunction_P1_lq
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P5_ah;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P8_kk;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P14_jp[5];        // Computed Parameter: SFunction_P14_jp
                                          //  Referenced by: '<S257>/S-Function'

  uint16_T SFunction_P1_fh[2];         // Computed Parameter: SFunction_P1_fh
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P11_plx;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P14_fo[5];        // Computed Parameter: SFunction_P14_fo
                                          //  Referenced by: '<S259>/S-Function'

  uint16_T SFunction_P1_pw[4];         // Computed Parameter: SFunction_P1_pw
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P5_og;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P11_kr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P14_l44[5];       // Computed Parameter: SFunction_P14_l44
                                          //  Referenced by: '<S261>/S-Function'

  uint16_T SFunction_P1_mb[5];         // Computed Parameter: SFunction_P1_mb
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P5_ku;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P8_pj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S263>/S-Function'

  uint16_T SFunction_P1_ex[4];         // Computed Parameter: SFunction_P1_ex
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P5_gl;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P8_nd;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P11_ab;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S265>/S-Function'

  uint16_T SFunction_P1_a[4];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P5_ll;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P8_gu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P11_it;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P14_f2[5];        // Computed Parameter: SFunction_P14_f2
                                          //  Referenced by: '<S267>/S-Function'

  uint16_T SFunction_P1_eq[5];         // Computed Parameter: SFunction_P1_eq
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P5_ky;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P11_ly;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P14_im[5];        // Computed Parameter: SFunction_P14_im
                                          //  Referenced by: '<S269>/S-Function'

  uint16_T SFunction_P1_mq[4];         // Computed Parameter: SFunction_P1_mq
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P5_oj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P8_kv;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P11_d4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P14_an[5];        // Computed Parameter: SFunction_P14_an
                                          //  Referenced by: '<S271>/S-Function'

  uint16_T SFunction_P1_dd[5];         // Computed Parameter: SFunction_P1_dd
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P5_mo;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P14_pd[5];        // Computed Parameter: SFunction_P14_pd
                                          //  Referenced by: '<S273>/S-Function'

  uint16_T SFunction_P1_h0[3];         // Computed Parameter: SFunction_P1_h0
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P5_g0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P8_n5;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P11_fu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P14_nl[5];        // Computed Parameter: SFunction_P14_nl
                                          //  Referenced by: '<S275>/S-Function'

  uint16_T SFunction_P1_bi[4];         // Computed Parameter: SFunction_P1_bi
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P5_jm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P8_p1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P11_lj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P14_nj[5];        // Computed Parameter: SFunction_P14_nj
                                          //  Referenced by: '<S277>/S-Function'

  uint16_T SFunction_P1_ii[6];         // Computed Parameter: SFunction_P1_ii
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P8_da;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P11_pw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S279>/S-Function'

  uint16_T SFunction_P1_h1[6];         // Computed Parameter: SFunction_P1_h1
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P5_h2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P8_c0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P11_in;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P14_l0[5];        // Computed Parameter: SFunction_P14_l0
                                          //  Referenced by: '<S281>/S-Function'

  uint16_T SFunction_P1_on[9];         // Computed Parameter: SFunction_P1_on
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P5_gn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P8_eq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P11_gj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P14_gn[5];        // Computed Parameter: SFunction_P14_gn
                                          //  Referenced by: '<S283>/S-Function'

  uint16_T SFunction_P1_l3[9];         // Computed Parameter: SFunction_P1_l3
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P5_az;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P8_li;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P11_d2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P14_me[5];        // Computed Parameter: SFunction_P14_me
                                          //  Referenced by: '<S285>/S-Function'

  uint16_T SFunction_P1_j4[6];         // Computed Parameter: SFunction_P1_j4
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P5_ng;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P8_fu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P11_dd;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P14_ih[5];        // Computed Parameter: SFunction_P14_ih
                                          //  Referenced by: '<S287>/S-Function'

  uint16_T SFunction_P1_fx[6];         // Computed Parameter: SFunction_P1_fx
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P5_oh;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P8_oj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P11_gn;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P14_oo[5];        // Computed Parameter: SFunction_P14_oo
                                          //  Referenced by: '<S289>/S-Function'

  uint16_T SFunction_P1_dg[5];         // Computed Parameter: SFunction_P1_dg
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P5_o0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P8_ko;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P11_kl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P14_hw[5];        // Computed Parameter: SFunction_P14_hw
                                          //  Referenced by: '<S291>/S-Function'

  uint16_T SFunction_P1_pk[2];         // Computed Parameter: SFunction_P1_pk
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P5_ic;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P8_kn;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P11_fb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P14_dy[5];        // Computed Parameter: SFunction_P14_dy
                                          //  Referenced by: '<S293>/S-Function'

  uint16_T SFunction_P1_i2[2];         // Computed Parameter: SFunction_P1_i2
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P5_nv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P8_fz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P11_dz;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P14_hx[5];        // Computed Parameter: SFunction_P14_hx
                                          //  Referenced by: '<S295>/S-Function'

  uint16_T SFunction_P1_li[3];         // Computed Parameter: SFunction_P1_li
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P5_o4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P8_fj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P11_ar;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P14_ez[5];        // Computed Parameter: SFunction_P14_ez
                                          //  Referenced by: '<S297>/S-Function'

  uint16_T SFunction_P1_ai[2];         // Computed Parameter: SFunction_P1_ai
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P5_mt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P8_nm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P11_nf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P14_i4[5];        // Computed Parameter: SFunction_P14_i4
                                          //  Referenced by: '<S299>/S-Function'

  uint16_T SFunction_P1_g2[2];         // Computed Parameter: SFunction_P1_g2
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P5_eg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P8_dmb;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P11_cc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P14_bz[5];        // Computed Parameter: SFunction_P14_bz
                                          //  Referenced by: '<S301>/S-Function'

  uint16_T SFunction_P1_ip[2];         // Computed Parameter: SFunction_P1_ip
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P5_gx;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P8_df;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P11_am;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P14_cy[5];        // Computed Parameter: SFunction_P14_cy
                                          //  Referenced by: '<S303>/S-Function'

  uint16_T SFunction_P1_mj[2];         // Computed Parameter: SFunction_P1_mj
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P5_fe;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P8_nh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P11_je;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P14_fe[5];        // Computed Parameter: SFunction_P14_fe
                                          //  Referenced by: '<S305>/S-Function'

  uint16_T SFunction_P1_n[2];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S307>/S-Function'

  uint16_T SFunction_P5_hs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S307>/S-Function'

  uint16_T SFunction_P8_d4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S307>/S-Function'

  uint16_T SFunction_P11_ba;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S307>/S-Function'

  uint16_T SFunction_P14_pp[5];        // Computed Parameter: SFunction_P14_pp
                                          //  Referenced by: '<S307>/S-Function'

  uint16_T SFunction_P1_if[3];         // Computed Parameter: SFunction_P1_if
                                          //  Referenced by: '<S309>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S309>/S-Function'

  uint16_T SFunction_P8_fa;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S309>/S-Function'

  uint16_T SFunction_P11_p3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S309>/S-Function'

  uint16_T SFunction_P14_m3[5];        // Computed Parameter: SFunction_P14_m3
                                          //  Referenced by: '<S309>/S-Function'

  uint16_T SFunction_P1_o2[3];         // Computed Parameter: SFunction_P1_o2
                                          //  Referenced by: '<S311>/S-Function'

  uint16_T SFunction_P5_f0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S311>/S-Function'

  uint16_T SFunction_P8_o2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S311>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S311>/S-Function'

  uint16_T SFunction_P14_jj[5];        // Computed Parameter: SFunction_P14_jj
                                          //  Referenced by: '<S311>/S-Function'

  uint16_T SFunction_P1_jg[3];         // Computed Parameter: SFunction_P1_jg
                                          //  Referenced by: '<S313>/S-Function'

  uint16_T SFunction_P5_ov;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S313>/S-Function'

  uint16_T SFunction_P8_n2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S313>/S-Function'

  uint16_T SFunction_P11_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S313>/S-Function'

  uint16_T SFunction_P14_oa[5];        // Computed Parameter: SFunction_P14_oa
                                          //  Referenced by: '<S313>/S-Function'

  uint16_T SFunction_P1_fd[3];         // Computed Parameter: SFunction_P1_fd
                                          //  Referenced by: '<S315>/S-Function'

  uint16_T SFunction_P5_l0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S315>/S-Function'

  uint16_T SFunction_P8_jf;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S315>/S-Function'

  uint16_T SFunction_P11_pu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S315>/S-Function'

  uint16_T SFunction_P14_nc[5];        // Computed Parameter: SFunction_P14_nc
                                          //  Referenced by: '<S315>/S-Function'

  uint16_T SFunction_P1_ll[3];         // Computed Parameter: SFunction_P1_ll
                                          //  Referenced by: '<S317>/S-Function'

  uint16_T SFunction_P5_e4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S317>/S-Function'

  uint16_T SFunction_P8_fw;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S317>/S-Function'

  uint16_T SFunction_P11_hl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S317>/S-Function'

  uint16_T SFunction_P14_hc[5];        // Computed Parameter: SFunction_P14_hc
                                          //  Referenced by: '<S317>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S687>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S687>/S-Function'

  uint16_T SFunction_P11_atz;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S687>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S687>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S687>/S-Function'

  uint16_T SFunction_P1_la[5];         // Computed Parameter: SFunction_P1_la
                                          //  Referenced by: '<S144>/S-Function'

  uint16_T SFunction_P5_ij;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S144>/S-Function'

  uint16_T SFunction_P8_oj3;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S144>/S-Function'

  uint16_T SFunction_P11_fo;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S144>/S-Function'

  uint16_T SFunction_P14_m3o[5];       // Computed Parameter: SFunction_P14_m3o
                                          //  Referenced by: '<S144>/S-Function'

  uint16_T SFunction_P1_nm[5];         // Computed Parameter: SFunction_P1_nm
                                          //  Referenced by: '<S146>/S-Function'

  uint16_T SFunction_P5_jg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S146>/S-Function'

  uint16_T SFunction_P8_pw;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S146>/S-Function'

  uint16_T SFunction_P11_ns;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S146>/S-Function'

  uint16_T SFunction_P14_a5[5];        // Computed Parameter: SFunction_P14_a5
                                          //  Referenced by: '<S146>/S-Function'

  uint16_T SFunction_P1_ne[5];         // Computed Parameter: SFunction_P1_ne
                                          //  Referenced by: '<S148>/S-Function'

  uint16_T SFunction_P9_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S148>/S-Function'

  uint16_T SFunction_P11_jea;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S148>/S-Function'

  uint16_T SFunction_P14_ft;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S148>/S-Function'

  uint16_T SFunction_P15_e;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S148>/S-Function'

  uint16_T SFunction_P1_fdr;           // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P5_ci0;           // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S429>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S429>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S429>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S431>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S431>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S431>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S433>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S433>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S433>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S435>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S435>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S435>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S555>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S555>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S555>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S557>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S557>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S557>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S559>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S559>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S559>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S561>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S561>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S561>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S629>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S629>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S629>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S631>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S631>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S631>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S633>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S633>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S633>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S635>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S635>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S635>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S641>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S641>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S641>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S643>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S643>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S643>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S645>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S645>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S645>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S647>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S647>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S647>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S653>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S653>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S653>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S655>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S655>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S655>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S657>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S657>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S657>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S659>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S659>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S659>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S673>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S673>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S673>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S675>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S675>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S675>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S677>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S677>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S677>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S679>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S679>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S679>/PWM'

  boolean_T SFunction_P8_cy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S150>/S-Function'

  boolean_T SFunction_P12_ly;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S150>/S-Function'

  boolean_T SFunction_P13_du;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S150>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S150>/S-Function'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S109>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S109>/ADC'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S127>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S127>/ADC'

  boolean_T ADC_P5_dm;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S131>/ADC'

  boolean_T ADC_P7_hb;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S131>/ADC'

  boolean_T ADC_P5_i;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S113>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S113>/ADC'

  boolean_T ADC_P5_o;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S133>/ADC'

  boolean_T ADC_P7_a;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S133>/ADC'

  boolean_T ADC_P5_c;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S135>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S135>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S123>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S123>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S125>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S125>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S115>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S115>/ADC'

  boolean_T ADC_P5_gk;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S129>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S129>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S117>/ADC'

  boolean_T ADC_P7_mt;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S117>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S119>/ADC'

  boolean_T ADC_P7_hl;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S119>/ADC'

  boolean_T SFunction_P4_mz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P9_np;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P10_n;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P15_e3;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P4_e;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P9_ie;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P15_gx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P4_fx;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P9_co;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P10_ah;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P9_nb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S121>/ADC'

  boolean_T ADC_P7_na;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S121>/ADC'

  boolean_T SFunction_P8_pd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S683>/S-Function'

  boolean_T SFunction_P12_ol;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S683>/S-Function'

  boolean_T SFunction_P13_k0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S683>/S-Function'

  boolean_T SFunction_P16_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S683>/S-Function'

  boolean_T SFunction_P4_fn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P9_cs;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P10_b15;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P15_b4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P4_dy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P9_iu;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P15_jr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P8_bx;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S685>/S-Function'

  boolean_T SFunction_P12_av;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S685>/S-Function'

  boolean_T SFunction_P13_cd;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S685>/S-Function'

  boolean_T SFunction_P16_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S685>/S-Function'

  boolean_T SFunction_P8_o4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S681>/S-Function'

  boolean_T SFunction_P12_fm;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S681>/S-Function'

  boolean_T SFunction_P13_ls;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S681>/S-Function'

  boolean_T SFunction_P16_lv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S681>/S-Function'

  boolean_T SFunction_P8_i;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S689>/S-Function'

  boolean_T SFunction_P12_ls;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S689>/S-Function'

  boolean_T SFunction_P13_pl;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S689>/S-Function'

  boolean_T SFunction_P16_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S689>/S-Function'

  boolean_T SFunction_P8_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S691>/S-Function'

  boolean_T SFunction_P12_di;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S691>/S-Function'

  boolean_T SFunction_P13_a4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S691>/S-Function'

  boolean_T SFunction_P16_lk;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S691>/S-Function'

  boolean_T SFunction_P8_dw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S695>/S-Function'

  boolean_T SFunction_P12_dd;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S695>/S-Function'

  boolean_T SFunction_P13_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S695>/S-Function'

  boolean_T SFunction_P16_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S695>/S-Function'

  boolean_T SFunction_P8_lk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S693>/S-Function'

  boolean_T SFunction_P12_lk;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S693>/S-Function'

  boolean_T SFunction_P13_nn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S693>/S-Function'

  boolean_T SFunction_P16_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S693>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P9_d1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P15_je;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P4_ix;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P9_jx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P4_k5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P9_d0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P15_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P4_fu;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P9_g;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P15_k5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P4_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P9_dz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P10_lt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P15_hv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P4_l3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P9_lt;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P15_pe;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P4_ba;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P9_nf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P10_gf;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P4_kk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P10_je;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P15_cq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P4_hz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P10_ap;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P15_af;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S257>/S-Function'

  boolean_T SFunction_P4_i0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P9_ll;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P10_ju;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P15_pd;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S259>/S-Function'

  boolean_T SFunction_P4_hj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P9_ke;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P10_js;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P15_a5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S261>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P10_kx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P15_mb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S263>/S-Function'

  boolean_T SFunction_P4_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P9_be;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P10_lh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S265>/S-Function'

  boolean_T SFunction_P4_ms;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P9_ek;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P10_po;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P15_gw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S267>/S-Function'

  boolean_T SFunction_P4_bv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P9_ei;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P10_k3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P15_px;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S269>/S-Function'

  boolean_T SFunction_P4_fs;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P9_pn;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P10_ak;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P15_f1a;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S271>/S-Function'

  boolean_T SFunction_P4_lz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P9_lr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P10_dq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S273>/S-Function'

  boolean_T SFunction_P4_po;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P9_is;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P10_pp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P15_aq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S275>/S-Function'

  boolean_T SFunction_P4_o;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P9_mh;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P10_nw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P15_bi;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S277>/S-Function'

  boolean_T SFunction_P4_lm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P9_mg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P10_bm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P15_pq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S279>/S-Function'

  boolean_T SFunction_P4_f5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S281>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S281>/S-Function'

  boolean_T SFunction_P10_ee;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S281>/S-Function'

  boolean_T SFunction_P15_kk;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S281>/S-Function'

  boolean_T SFunction_P4_ju;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S283>/S-Function'

  boolean_T SFunction_P9_ko;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S283>/S-Function'

  boolean_T SFunction_P10_kz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S283>/S-Function'

  boolean_T SFunction_P15_cqa;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S283>/S-Function'

  boolean_T SFunction_P4_ls;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S285>/S-Function'

  boolean_T SFunction_P9_pg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S285>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S285>/S-Function'

  boolean_T SFunction_P15_bh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S285>/S-Function'

  boolean_T SFunction_P4_nv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S287>/S-Function'

  boolean_T SFunction_P9_or;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S287>/S-Function'

  boolean_T SFunction_P10_lr;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S287>/S-Function'

  boolean_T SFunction_P15_b4q;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S287>/S-Function'

  boolean_T SFunction_P4_gb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S289>/S-Function'

  boolean_T SFunction_P9_j5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S289>/S-Function'

  boolean_T SFunction_P10_on;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S289>/S-Function'

  boolean_T SFunction_P15_dp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S289>/S-Function'

  boolean_T SFunction_P4_fz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S291>/S-Function'

  boolean_T SFunction_P9_lu;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S291>/S-Function'

  boolean_T SFunction_P10_pq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S291>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S291>/S-Function'

  boolean_T SFunction_P4_fyj;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S293>/S-Function'

  boolean_T SFunction_P9_o5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S293>/S-Function'

  boolean_T SFunction_P10_ne;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S293>/S-Function'

  boolean_T SFunction_P15_aj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S293>/S-Function'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S111>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S111>/ADC'

  boolean_T SFunction_P4_dl;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S295>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S295>/S-Function'

  boolean_T SFunction_P10_ar;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S295>/S-Function'

  boolean_T SFunction_P15_dx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S295>/S-Function'

  boolean_T SFunction_P4_e2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S297>/S-Function'

  boolean_T SFunction_P9_px;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S297>/S-Function'

  boolean_T SFunction_P10_mm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S297>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S297>/S-Function'

  boolean_T SFunction_P4_ja;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S299>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S299>/S-Function'

  boolean_T SFunction_P10_cs;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S299>/S-Function'

  boolean_T SFunction_P15_hi;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S299>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S301>/S-Function'

  boolean_T SFunction_P9_a0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S301>/S-Function'

  boolean_T SFunction_P10_hh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S301>/S-Function'

  boolean_T SFunction_P15_oc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S301>/S-Function'

  boolean_T SFunction_P4_kl;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S303>/S-Function'

  boolean_T SFunction_P9_n5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S303>/S-Function'

  boolean_T SFunction_P10_f4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S303>/S-Function'

  boolean_T SFunction_P15_el;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S303>/S-Function'

  boolean_T SFunction_P4_db;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S305>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S305>/S-Function'

  boolean_T SFunction_P10_ol;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S305>/S-Function'

  boolean_T SFunction_P15_gc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S305>/S-Function'

  boolean_T SFunction_P4_eq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S307>/S-Function'

  boolean_T SFunction_P9_lc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S307>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S307>/S-Function'

  boolean_T SFunction_P15_gp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S307>/S-Function'

  boolean_T SFunction_P4_fc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S309>/S-Function'

  boolean_T SFunction_P9_j4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S309>/S-Function'

  boolean_T SFunction_P10_ks;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S309>/S-Function'

  boolean_T SFunction_P15_g2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S309>/S-Function'

  boolean_T SFunction_P4_hg;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S311>/S-Function'

  boolean_T SFunction_P9_gf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S311>/S-Function'

  boolean_T SFunction_P10_fu;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S311>/S-Function'

  boolean_T SFunction_P15_l5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S311>/S-Function'

  boolean_T SFunction_P4_gj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S313>/S-Function'

  boolean_T SFunction_P9_p5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S313>/S-Function'

  boolean_T SFunction_P10_nj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S313>/S-Function'

  boolean_T SFunction_P15_po;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S313>/S-Function'

  boolean_T SFunction_P4_fv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S315>/S-Function'

  boolean_T SFunction_P9_bu;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S315>/S-Function'

  boolean_T SFunction_P10_nk;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S315>/S-Function'

  boolean_T SFunction_P15_hr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S315>/S-Function'

  boolean_T SFunction_P4_hr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S317>/S-Function'

  boolean_T SFunction_P9_ft;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S317>/S-Function'

  boolean_T SFunction_P10_kw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S317>/S-Function'

  boolean_T SFunction_P15_ne;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S317>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S137>/CLK1'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S687>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S687>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S687>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S687>/S-Function'

  boolean_T SFunction_P4_gl;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S144>/S-Function'

  boolean_T SFunction_P9_ic;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S144>/S-Function'

  boolean_T SFunction_P10_bu;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S144>/S-Function'

  boolean_T SFunction_P15_mr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S144>/S-Function'

  boolean_T SFunction_P4_fd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S146>/S-Function'

  boolean_T SFunction_P9_f4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S146>/S-Function'

  boolean_T SFunction_P10_lg;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S146>/S-Function'

  boolean_T SFunction_P15_at;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S146>/S-Function'

  boolean_T SFunction_P8_hi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S148>/S-Function'

  boolean_T SFunction_P12_cz;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S148>/S-Function'

  boolean_T SFunction_P13_kg;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S148>/S-Function'

  boolean_T SFunction_P16_e2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S148>/S-Function'

  boolean_T CLK1_P3_d;                 // Expression: boolean(var_freq)
                                          //  Referenced by: '<S155>/CLK1'

  int8_T Constant_Value_e;             // Computed Parameter: Constant_Value_e
                                          //  Referenced by: '<S200>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S200>/Constant2'

  int8_T Constant3_Value_h;            // Computed Parameter: Constant3_Value_h
                                          //  Referenced by: '<S200>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S200>/Constant4'

  int8_T Constant_Value_hg;            // Computed Parameter: Constant_Value_hg
                                          //  Referenced by: '<S589>/Constant'

  int8_T Constant2_Value_a;            // Computed Parameter: Constant2_Value_a
                                          //  Referenced by: '<S589>/Constant2'

  int8_T Constant3_Value_j;            // Computed Parameter: Constant3_Value_j
                                          //  Referenced by: '<S589>/Constant3'

  int8_T Constant4_Value_a;            // Computed Parameter: Constant4_Value_a
                                          //  Referenced by: '<S589>/Constant4'

  P_Subsystem1_imperix_ctrl_T Subsystem1_o;// '<S662>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay_a;// '<S662>/Subsystem - pi//2 delay' 
  P_Subsystem1_imperix_ctrl_T Subsystem1;// '<S441>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay;// '<S441>/Subsystem - pi//2 delay' 
};

// Real-time Model Data Structure
struct tag_RTM_imperix_ctrl_T {
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

  extern P_imperix_ctrl_T imperix_ctrl_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_imperix_ctrl_T imperix_ctrl_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_imperix_ctrl_T imperix_ctrl_DW;

// Zero-crossing (trigger) state
extern PrevZCX_imperix_ctrl_T imperix_ctrl_PrevZCX;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void imperix_ctrl_initialize(void);
  extern void imperix_ctrl_step0(void);// Sample time: [0.000166667s, 0.0s]
  extern void imperix_ctrl_step1(void);// Sample time: [0.00166667s, 0.0s]
  extern void imperix_ctrl_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_imperix_ctrl_T *const imperix_ctrl_M;

#ifdef __cplusplus

}

#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S18>/Constant1' : Unused code path elimination
//  Block '<S18>/Gain' : Unused code path elimination
//  Block '<S18>/Sum11' : Unused code path elimination
//  Block '<S32>/Abs' : Unused code path elimination
//  Block '<S32>/Max of Elements' : Unused code path elimination
//  Block '<S32>/Mean' : Unused code path elimination
//  Block '<S32>/Sum' : Unused code path elimination
//  Block '<S32>/Switch' : Unused code path elimination
//  Block '<S87>/Gain6' : Unused code path elimination
//  Block '<S87>/Gain7' : Unused code path elimination
//  Block '<S87>/Sum4' : Unused code path elimination
//  Block '<S96>/is_max' : Unused code path elimination
//  Block '<S17>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S144>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S146>/Data Type Conversion' : Eliminate redundant data type conversion


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
//  '<Root>' : 'imperix_ctrl'
//  '<S1>'   : 'imperix_ctrl/Closed_loop_control'
//  '<S2>'   : 'imperix_ctrl/Plant_Model'
//  '<S3>'   : 'imperix_ctrl/Closed_loop_control/ADC19'
//  '<S4>'   : 'imperix_ctrl/Closed_loop_control/ADC2'
//  '<S5>'   : 'imperix_ctrl/Closed_loop_control/ADC21'
//  '<S6>'   : 'imperix_ctrl/Closed_loop_control/ADC22'
//  '<S7>'   : 'imperix_ctrl/Closed_loop_control/ADC23'
//  '<S8>'   : 'imperix_ctrl/Closed_loop_control/ADC24'
//  '<S9>'   : 'imperix_ctrl/Closed_loop_control/ADC25'
//  '<S10>'  : 'imperix_ctrl/Closed_loop_control/ADC26'
//  '<S11>'  : 'imperix_ctrl/Closed_loop_control/ADC27'
//  '<S12>'  : 'imperix_ctrl/Closed_loop_control/ADC28'
//  '<S13>'  : 'imperix_ctrl/Closed_loop_control/ADC3'
//  '<S14>'  : 'imperix_ctrl/Closed_loop_control/ADC4'
//  '<S15>'  : 'imperix_ctrl/Closed_loop_control/ADC5'
//  '<S16>'  : 'imperix_ctrl/Closed_loop_control/ADC8'
//  '<S17>'  : 'imperix_ctrl/Closed_loop_control/CLK1'
//  '<S18>'  : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping'
//  '<S19>'  : 'imperix_ctrl/Closed_loop_control/Configuration'
//  '<S20>'  : 'imperix_ctrl/Closed_loop_control/DAC'
//  '<S21>'  : 'imperix_ctrl/Closed_loop_control/DAC1'
//  '<S22>'  : 'imperix_ctrl/Closed_loop_control/DAC2'
//  '<S23>'  : 'imperix_ctrl/Closed_loop_control/DAC3'
//  '<S24>'  : 'imperix_ctrl/Closed_loop_control/DAC4'
//  '<S25>'  : 'imperix_ctrl/Closed_loop_control/DAC5'
//  '<S26>'  : 'imperix_ctrl/Closed_loop_control/Energy balance'
//  '<S27>'  : 'imperix_ctrl/Closed_loop_control/IM references'
//  '<S28>'  : 'imperix_ctrl/Closed_loop_control/Kalman Filter'
//  '<S29>'  : 'imperix_ctrl/Closed_loop_control/LICCs control'
//  '<S30>'  : 'imperix_ctrl/Closed_loop_control/LPF'
//  '<S31>'  : 'imperix_ctrl/Closed_loop_control/Modulation index'
//  '<S32>'  : 'imperix_ctrl/Closed_loop_control/NN CEC'
//  '<S33>'  : 'imperix_ctrl/Closed_loop_control/PID Controller1'
//  '<S34>'  : 'imperix_ctrl/Closed_loop_control/Probe'
//  '<S35>'  : 'imperix_ctrl/Closed_loop_control/Probe1'
//  '<S36>'  : 'imperix_ctrl/Closed_loop_control/Probe10'
//  '<S37>'  : 'imperix_ctrl/Closed_loop_control/Probe11'
//  '<S38>'  : 'imperix_ctrl/Closed_loop_control/Probe12'
//  '<S39>'  : 'imperix_ctrl/Closed_loop_control/Probe13'
//  '<S40>'  : 'imperix_ctrl/Closed_loop_control/Probe14'
//  '<S41>'  : 'imperix_ctrl/Closed_loop_control/Probe15'
//  '<S42>'  : 'imperix_ctrl/Closed_loop_control/Probe16'
//  '<S43>'  : 'imperix_ctrl/Closed_loop_control/Probe17'
//  '<S44>'  : 'imperix_ctrl/Closed_loop_control/Probe18'
//  '<S45>'  : 'imperix_ctrl/Closed_loop_control/Probe19'
//  '<S46>'  : 'imperix_ctrl/Closed_loop_control/Probe2'
//  '<S47>'  : 'imperix_ctrl/Closed_loop_control/Probe20'
//  '<S48>'  : 'imperix_ctrl/Closed_loop_control/Probe21'
//  '<S49>'  : 'imperix_ctrl/Closed_loop_control/Probe22'
//  '<S50>'  : 'imperix_ctrl/Closed_loop_control/Probe23'
//  '<S51>'  : 'imperix_ctrl/Closed_loop_control/Probe24'
//  '<S52>'  : 'imperix_ctrl/Closed_loop_control/Probe25'
//  '<S53>'  : 'imperix_ctrl/Closed_loop_control/Probe26'
//  '<S54>'  : 'imperix_ctrl/Closed_loop_control/Probe27'
//  '<S55>'  : 'imperix_ctrl/Closed_loop_control/Probe28'
//  '<S56>'  : 'imperix_ctrl/Closed_loop_control/Probe29'
//  '<S57>'  : 'imperix_ctrl/Closed_loop_control/Probe3'
//  '<S58>'  : 'imperix_ctrl/Closed_loop_control/Probe30'
//  '<S59>'  : 'imperix_ctrl/Closed_loop_control/Probe31'
//  '<S60>'  : 'imperix_ctrl/Closed_loop_control/Probe32'
//  '<S61>'  : 'imperix_ctrl/Closed_loop_control/Probe33'
//  '<S62>'  : 'imperix_ctrl/Closed_loop_control/Probe34'
//  '<S63>'  : 'imperix_ctrl/Closed_loop_control/Probe35'
//  '<S64>'  : 'imperix_ctrl/Closed_loop_control/Probe36'
//  '<S65>'  : 'imperix_ctrl/Closed_loop_control/Probe37'
//  '<S66>'  : 'imperix_ctrl/Closed_loop_control/Probe38'
//  '<S67>'  : 'imperix_ctrl/Closed_loop_control/Probe39'
//  '<S68>'  : 'imperix_ctrl/Closed_loop_control/Probe4'
//  '<S69>'  : 'imperix_ctrl/Closed_loop_control/Probe40'
//  '<S70>'  : 'imperix_ctrl/Closed_loop_control/Probe41'
//  '<S71>'  : 'imperix_ctrl/Closed_loop_control/Probe42'
//  '<S72>'  : 'imperix_ctrl/Closed_loop_control/Probe43'
//  '<S73>'  : 'imperix_ctrl/Closed_loop_control/Probe44'
//  '<S74>'  : 'imperix_ctrl/Closed_loop_control/Probe5'
//  '<S75>'  : 'imperix_ctrl/Closed_loop_control/Probe6'
//  '<S76>'  : 'imperix_ctrl/Closed_loop_control/Probe7'
//  '<S77>'  : 'imperix_ctrl/Closed_loop_control/Probe8'
//  '<S78>'  : 'imperix_ctrl/Closed_loop_control/Probe9'
//  '<S79>'  : 'imperix_ctrl/Closed_loop_control/Subsystem'
//  '<S80>'  : 'imperix_ctrl/Closed_loop_control/Subsystem1'
//  '<S81>'  : 'imperix_ctrl/Closed_loop_control/Subsystem10'
//  '<S82>'  : 'imperix_ctrl/Closed_loop_control/Subsystem11'
//  '<S83>'  : 'imperix_ctrl/Closed_loop_control/Subsystem13'
//  '<S84>'  : 'imperix_ctrl/Closed_loop_control/Subsystem19'
//  '<S85>'  : 'imperix_ctrl/Closed_loop_control/Subsystem2'
//  '<S86>'  : 'imperix_ctrl/Closed_loop_control/Subsystem20'
//  '<S87>'  : 'imperix_ctrl/Closed_loop_control/Subsystem21'
//  '<S88>'  : 'imperix_ctrl/Closed_loop_control/Subsystem22'
//  '<S89>'  : 'imperix_ctrl/Closed_loop_control/Subsystem23'
//  '<S90>'  : 'imperix_ctrl/Closed_loop_control/Subsystem24'
//  '<S91>'  : 'imperix_ctrl/Closed_loop_control/Subsystem25'
//  '<S92>'  : 'imperix_ctrl/Closed_loop_control/Subsystem26'
//  '<S93>'  : 'imperix_ctrl/Closed_loop_control/Subsystem3'
//  '<S94>'  : 'imperix_ctrl/Closed_loop_control/Subsystem4'
//  '<S95>'  : 'imperix_ctrl/Closed_loop_control/Subsystem5'
//  '<S96>'  : 'imperix_ctrl/Closed_loop_control/Subsystem6'
//  '<S97>'  : 'imperix_ctrl/Closed_loop_control/Subsystem7'
//  '<S98>'  : 'imperix_ctrl/Closed_loop_control/Subsystem8'
//  '<S99>'  : 'imperix_ctrl/Closed_loop_control/Subsystem9'
//  '<S100>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S101>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter11'
//  '<S102>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter12'
//  '<S103>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S104>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S105>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3'
//  '<S106>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter5'
//  '<S107>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter6'
//  '<S108>' : 'imperix_ctrl/Closed_loop_control/ADC19/sub'
//  '<S109>' : 'imperix_ctrl/Closed_loop_control/ADC19/sub/generation'
//  '<S110>' : 'imperix_ctrl/Closed_loop_control/ADC2/sub'
//  '<S111>' : 'imperix_ctrl/Closed_loop_control/ADC2/sub/generation'
//  '<S112>' : 'imperix_ctrl/Closed_loop_control/ADC21/sub'
//  '<S113>' : 'imperix_ctrl/Closed_loop_control/ADC21/sub/generation'
//  '<S114>' : 'imperix_ctrl/Closed_loop_control/ADC22/sub'
//  '<S115>' : 'imperix_ctrl/Closed_loop_control/ADC22/sub/generation'
//  '<S116>' : 'imperix_ctrl/Closed_loop_control/ADC23/sub'
//  '<S117>' : 'imperix_ctrl/Closed_loop_control/ADC23/sub/generation'
//  '<S118>' : 'imperix_ctrl/Closed_loop_control/ADC24/sub'
//  '<S119>' : 'imperix_ctrl/Closed_loop_control/ADC24/sub/generation'
//  '<S120>' : 'imperix_ctrl/Closed_loop_control/ADC25/sub'
//  '<S121>' : 'imperix_ctrl/Closed_loop_control/ADC25/sub/generation'
//  '<S122>' : 'imperix_ctrl/Closed_loop_control/ADC26/sub'
//  '<S123>' : 'imperix_ctrl/Closed_loop_control/ADC26/sub/generation'
//  '<S124>' : 'imperix_ctrl/Closed_loop_control/ADC27/sub'
//  '<S125>' : 'imperix_ctrl/Closed_loop_control/ADC27/sub/generation'
//  '<S126>' : 'imperix_ctrl/Closed_loop_control/ADC28/sub'
//  '<S127>' : 'imperix_ctrl/Closed_loop_control/ADC28/sub/generation'
//  '<S128>' : 'imperix_ctrl/Closed_loop_control/ADC3/sub'
//  '<S129>' : 'imperix_ctrl/Closed_loop_control/ADC3/sub/generation'
//  '<S130>' : 'imperix_ctrl/Closed_loop_control/ADC4/sub'
//  '<S131>' : 'imperix_ctrl/Closed_loop_control/ADC4/sub/generation'
//  '<S132>' : 'imperix_ctrl/Closed_loop_control/ADC5/sub'
//  '<S133>' : 'imperix_ctrl/Closed_loop_control/ADC5/sub/generation'
//  '<S134>' : 'imperix_ctrl/Closed_loop_control/ADC8/sub'
//  '<S135>' : 'imperix_ctrl/Closed_loop_control/ADC8/sub/generation'
//  '<S136>' : 'imperix_ctrl/Closed_loop_control/CLK1/sub'
//  '<S137>' : 'imperix_ctrl/Closed_loop_control/CLK1/sub/generation'
//  '<S138>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe'
//  '<S139>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe1'
//  '<S140>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter11'
//  '<S141>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter12'
//  '<S142>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/abc to Alpha-Beta-Zero'
//  '<S143>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe/sub'
//  '<S144>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe/sub/generation'
//  '<S145>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe1/sub'
//  '<S146>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe1/sub/generation'
//  '<S147>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter11/sub'
//  '<S148>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter11/sub/generation'
//  '<S149>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter12/sub'
//  '<S150>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter12/sub/generation'
//  '<S151>' : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S152>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S153>' : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S154>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S155>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S156>' : 'imperix_ctrl/Closed_loop_control/DAC/sub'
//  '<S157>' : 'imperix_ctrl/Closed_loop_control/DAC/sub/generation'
//  '<S158>' : 'imperix_ctrl/Closed_loop_control/DAC1/sub'
//  '<S159>' : 'imperix_ctrl/Closed_loop_control/DAC1/sub/generation'
//  '<S160>' : 'imperix_ctrl/Closed_loop_control/DAC2/sub'
//  '<S161>' : 'imperix_ctrl/Closed_loop_control/DAC2/sub/generation'
//  '<S162>' : 'imperix_ctrl/Closed_loop_control/DAC3/sub'
//  '<S163>' : 'imperix_ctrl/Closed_loop_control/DAC3/sub/generation'
//  '<S164>' : 'imperix_ctrl/Closed_loop_control/DAC4/sub'
//  '<S165>' : 'imperix_ctrl/Closed_loop_control/DAC4/sub/generation'
//  '<S166>' : 'imperix_ctrl/Closed_loop_control/DAC5/sub'
//  '<S167>' : 'imperix_ctrl/Closed_loop_control/DAC5/sub/generation'
//  '<S168>' : 'imperix_ctrl/Closed_loop_control/NN CEC/FFNN'
//  '<S169>' : 'imperix_ctrl/Closed_loop_control/NN CEC/Input format'
//  '<S170>' : 'imperix_ctrl/Closed_loop_control/NN CEC/LPF'
//  '<S171>' : 'imperix_ctrl/Closed_loop_control/NN CEC/Saturation'
//  '<S172>' : 'imperix_ctrl/Closed_loop_control/NN CEC/White noise'
//  '<S173>' : 'imperix_ctrl/Closed_loop_control/NN CEC/FFNN/MLFB'
//  '<S174>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup'
//  '<S175>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain'
//  '<S176>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative'
//  '<S177>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter'
//  '<S178>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs'
//  '<S179>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain'
//  '<S180>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain'
//  '<S181>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk'
//  '<S182>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator'
//  '<S183>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs'
//  '<S184>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy'
//  '<S185>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain'
//  '<S186>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy'
//  '<S187>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain'
//  '<S188>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal'
//  '<S189>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation'
//  '<S190>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk'
//  '<S191>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum'
//  '<S192>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk'
//  '<S193>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode'
//  '<S194>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum'
//  '<S195>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral'
//  '<S196>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain'
//  '<S197>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal'
//  '<S198>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal'
//  '<S199>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal'
//  '<S200>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel'
//  '<S201>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S202>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S203>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain/Disabled'
//  '<S204>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative/Disabled'
//  '<S205>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter/Disabled'
//  '<S206>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs/Disabled'
//  '<S207>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain/Internal Parameters'
//  '<S208>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain/Passthrough'
//  '<S209>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S210>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator/Discrete'
//  '<S211>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs/Internal IC'
//  '<S212>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S213>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain/Disabled'
//  '<S214>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy/Disabled'
//  '<S215>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S216>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal/Disabled'
//  '<S217>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation/Enabled'
//  '<S218>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk/Disabled'
//  '<S219>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum/Sum_PI'
//  '<S220>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk/Disabled'
//  '<S221>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode/Disabled'
//  '<S222>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S223>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S224>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S225>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal/Forward_Path'
//  '<S226>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal/Internal PreInt'
//  '<S227>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal/Forward_Path'
//  '<S228>' : 'imperix_ctrl/Closed_loop_control/Probe/sub'
//  '<S229>' : 'imperix_ctrl/Closed_loop_control/Probe/sub/generation'
//  '<S230>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub'
//  '<S231>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S232>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub'
//  '<S233>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub/generation'
//  '<S234>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub'
//  '<S235>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub/generation'
//  '<S236>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub'
//  '<S237>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S238>' : 'imperix_ctrl/Closed_loop_control/Probe13/sub'
//  '<S239>' : 'imperix_ctrl/Closed_loop_control/Probe13/sub/generation'
//  '<S240>' : 'imperix_ctrl/Closed_loop_control/Probe14/sub'
//  '<S241>' : 'imperix_ctrl/Closed_loop_control/Probe14/sub/generation'
//  '<S242>' : 'imperix_ctrl/Closed_loop_control/Probe15/sub'
//  '<S243>' : 'imperix_ctrl/Closed_loop_control/Probe15/sub/generation'
//  '<S244>' : 'imperix_ctrl/Closed_loop_control/Probe16/sub'
//  '<S245>' : 'imperix_ctrl/Closed_loop_control/Probe16/sub/generation'
//  '<S246>' : 'imperix_ctrl/Closed_loop_control/Probe17/sub'
//  '<S247>' : 'imperix_ctrl/Closed_loop_control/Probe17/sub/generation'
//  '<S248>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub'
//  '<S249>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S250>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub'
//  '<S251>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub/generation'
//  '<S252>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub'
//  '<S253>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S254>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub'
//  '<S255>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub/generation'
//  '<S256>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub'
//  '<S257>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub/generation'
//  '<S258>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub'
//  '<S259>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub/generation'
//  '<S260>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub'
//  '<S261>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S262>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub'
//  '<S263>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S264>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub'
//  '<S265>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S266>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub'
//  '<S267>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S268>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub'
//  '<S269>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S270>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub'
//  '<S271>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S272>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub'
//  '<S273>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S274>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub'
//  '<S275>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S276>' : 'imperix_ctrl/Closed_loop_control/Probe30/sub'
//  '<S277>' : 'imperix_ctrl/Closed_loop_control/Probe30/sub/generation'
//  '<S278>' : 'imperix_ctrl/Closed_loop_control/Probe31/sub'
//  '<S279>' : 'imperix_ctrl/Closed_loop_control/Probe31/sub/generation'
//  '<S280>' : 'imperix_ctrl/Closed_loop_control/Probe32/sub'
//  '<S281>' : 'imperix_ctrl/Closed_loop_control/Probe32/sub/generation'
//  '<S282>' : 'imperix_ctrl/Closed_loop_control/Probe33/sub'
//  '<S283>' : 'imperix_ctrl/Closed_loop_control/Probe33/sub/generation'
//  '<S284>' : 'imperix_ctrl/Closed_loop_control/Probe34/sub'
//  '<S285>' : 'imperix_ctrl/Closed_loop_control/Probe34/sub/generation'
//  '<S286>' : 'imperix_ctrl/Closed_loop_control/Probe35/sub'
//  '<S287>' : 'imperix_ctrl/Closed_loop_control/Probe35/sub/generation'
//  '<S288>' : 'imperix_ctrl/Closed_loop_control/Probe36/sub'
//  '<S289>' : 'imperix_ctrl/Closed_loop_control/Probe36/sub/generation'
//  '<S290>' : 'imperix_ctrl/Closed_loop_control/Probe37/sub'
//  '<S291>' : 'imperix_ctrl/Closed_loop_control/Probe37/sub/generation'
//  '<S292>' : 'imperix_ctrl/Closed_loop_control/Probe38/sub'
//  '<S293>' : 'imperix_ctrl/Closed_loop_control/Probe38/sub/generation'
//  '<S294>' : 'imperix_ctrl/Closed_loop_control/Probe39/sub'
//  '<S295>' : 'imperix_ctrl/Closed_loop_control/Probe39/sub/generation'
//  '<S296>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub'
//  '<S297>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S298>' : 'imperix_ctrl/Closed_loop_control/Probe40/sub'
//  '<S299>' : 'imperix_ctrl/Closed_loop_control/Probe40/sub/generation'
//  '<S300>' : 'imperix_ctrl/Closed_loop_control/Probe41/sub'
//  '<S301>' : 'imperix_ctrl/Closed_loop_control/Probe41/sub/generation'
//  '<S302>' : 'imperix_ctrl/Closed_loop_control/Probe42/sub'
//  '<S303>' : 'imperix_ctrl/Closed_loop_control/Probe42/sub/generation'
//  '<S304>' : 'imperix_ctrl/Closed_loop_control/Probe43/sub'
//  '<S305>' : 'imperix_ctrl/Closed_loop_control/Probe43/sub/generation'
//  '<S306>' : 'imperix_ctrl/Closed_loop_control/Probe44/sub'
//  '<S307>' : 'imperix_ctrl/Closed_loop_control/Probe44/sub/generation'
//  '<S308>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub'
//  '<S309>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S310>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub'
//  '<S311>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S312>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub'
//  '<S313>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S314>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub'
//  '<S315>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S316>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub'
//  '<S317>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S318>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI'
//  '<S319>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI'
//  '<S320>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup'
//  '<S321>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain'
//  '<S322>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative'
//  '<S323>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter'
//  '<S324>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs'
//  '<S325>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain'
//  '<S326>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain'
//  '<S327>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk'
//  '<S328>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator'
//  '<S329>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs'
//  '<S330>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy'
//  '<S331>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain'
//  '<S332>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy'
//  '<S333>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain'
//  '<S334>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal'
//  '<S335>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation'
//  '<S336>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk'
//  '<S337>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum'
//  '<S338>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk'
//  '<S339>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode'
//  '<S340>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum'
//  '<S341>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral'
//  '<S342>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain'
//  '<S343>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal'
//  '<S344>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal'
//  '<S345>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal'
//  '<S346>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup/Back Calculation'
//  '<S347>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain/Disabled'
//  '<S348>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative/Disabled'
//  '<S349>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter/Disabled'
//  '<S350>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs/Disabled'
//  '<S351>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain/Internal Parameters'
//  '<S352>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain/Passthrough'
//  '<S353>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S354>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator/Discrete'
//  '<S355>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs/Internal IC'
//  '<S356>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S357>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain/Disabled'
//  '<S358>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy/Disabled'
//  '<S359>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S360>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal/External Reset'
//  '<S361>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation/Enabled'
//  '<S362>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk/Disabled'
//  '<S363>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum/Sum_PI'
//  '<S364>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk/Disabled'
//  '<S365>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode/Disabled'
//  '<S366>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S367>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S368>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S369>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal/Forward_Path'
//  '<S370>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal/Internal PreInt'
//  '<S371>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal/Forward_Path'
//  '<S372>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup'
//  '<S373>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain'
//  '<S374>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative'
//  '<S375>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter'
//  '<S376>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs'
//  '<S377>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain'
//  '<S378>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain'
//  '<S379>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk'
//  '<S380>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator'
//  '<S381>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs'
//  '<S382>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy'
//  '<S383>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain'
//  '<S384>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy'
//  '<S385>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain'
//  '<S386>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal'
//  '<S387>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation'
//  '<S388>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk'
//  '<S389>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum'
//  '<S390>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk'
//  '<S391>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode'
//  '<S392>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum'
//  '<S393>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral'
//  '<S394>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain'
//  '<S395>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal'
//  '<S396>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal'
//  '<S397>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal'
//  '<S398>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup/Back Calculation'
//  '<S399>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain/Disabled'
//  '<S400>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative/Disabled'
//  '<S401>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter/Disabled'
//  '<S402>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs/Disabled'
//  '<S403>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain/Internal Parameters'
//  '<S404>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain/Passthrough'
//  '<S405>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S406>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator/Discrete'
//  '<S407>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs/Internal IC'
//  '<S408>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S409>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain/Disabled'
//  '<S410>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy/Disabled'
//  '<S411>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S412>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal/External Reset'
//  '<S413>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation/Enabled'
//  '<S414>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk/Disabled'
//  '<S415>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum/Sum_PI'
//  '<S416>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk/Disabled'
//  '<S417>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode/Disabled'
//  '<S418>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S419>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S420>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S421>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal/Forward_Path'
//  '<S422>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal/Internal PreInt'
//  '<S423>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal/Forward_Path'
//  '<S424>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S425>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S426>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S427>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S428>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S429>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S430>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S431>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S432>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S433>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S434>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S435>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S436>' : 'imperix_ctrl/Closed_loop_control/Subsystem10/Sample and Hold'
//  '<S437>' : 'imperix_ctrl/Closed_loop_control/Subsystem11/Sample and Hold'
//  '<S438>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/Alpha-Beta-Zero to abc'
//  '<S439>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S440>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S441>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S442>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S443>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S444>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S445>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S446>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S447>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S448>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S449>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S450>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S451>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S452>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S453>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S454>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S455>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S456>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S457>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S458>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S459>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S460>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S461>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S462>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S463>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S464>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S465>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S466>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S467>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S468>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S469>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S470>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S471>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S472>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S473>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S474>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S475>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S476>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S477>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S478>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S479>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S480>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S481>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S482>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/External Reset'
//  '<S483>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S484>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S485>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S486>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S487>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S488>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S489>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S490>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S491>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S492>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S493>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S494>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S495>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S496>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S497>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S498>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S499>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S500>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S501>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S502>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S503>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S504>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S505>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S506>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S507>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S508>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S509>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S510>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S511>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S512>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S513>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S514>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S515>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S516>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S517>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S518>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S519>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S520>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S521>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S522>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S523>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S524>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S525>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S526>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S527>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S528>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S529>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S530>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S531>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S532>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S533>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S534>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/External Reset'
//  '<S535>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S536>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S537>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S538>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S539>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S540>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S541>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S542>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S543>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S544>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S545>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S546>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S547>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S548>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S549>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S550>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S551>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S552>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S553>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S554>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S555>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S556>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S557>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S558>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S559>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S560>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S561>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S562>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI'
//  '<S563>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup'
//  '<S564>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain'
//  '<S565>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative'
//  '<S566>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter'
//  '<S567>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs'
//  '<S568>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain'
//  '<S569>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain'
//  '<S570>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk'
//  '<S571>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator'
//  '<S572>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs'
//  '<S573>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy'
//  '<S574>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain'
//  '<S575>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy'
//  '<S576>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain'
//  '<S577>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal'
//  '<S578>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation'
//  '<S579>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk'
//  '<S580>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum'
//  '<S581>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk'
//  '<S582>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode'
//  '<S583>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum'
//  '<S584>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral'
//  '<S585>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain'
//  '<S586>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal'
//  '<S587>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal'
//  '<S588>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal'
//  '<S589>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S590>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S591>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S592>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain/Disabled'
//  '<S593>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative/Disabled'
//  '<S594>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter/Disabled'
//  '<S595>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs/Disabled'
//  '<S596>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain/Internal Parameters'
//  '<S597>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain/Passthrough'
//  '<S598>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S599>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator/Discrete'
//  '<S600>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs/Internal IC'
//  '<S601>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S602>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain/Disabled'
//  '<S603>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy/Disabled'
//  '<S604>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S605>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal/Disabled'
//  '<S606>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation/Enabled'
//  '<S607>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk/Disabled'
//  '<S608>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum/Sum_PI'
//  '<S609>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk/Disabled'
//  '<S610>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode/Disabled'
//  '<S611>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S612>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S613>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S614>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal/Forward_Path'
//  '<S615>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal/Internal PreInt'
//  '<S616>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal/Forward_Path'
//  '<S617>' : 'imperix_ctrl/Closed_loop_control/Subsystem25/MATLAB Function'
//  '<S618>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S619>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S620>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S621>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S622>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S623>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S624>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S625>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S626>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S627>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S628>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S629>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S630>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S631>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S632>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S633>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S634>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S635>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S636>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S637>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S638>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S639>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S640>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S641>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S642>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S643>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S644>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S645>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S646>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S647>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S648>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S649>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S650>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S651>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S652>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S653>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S654>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S655>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S656>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S657>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S658>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S659>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S660>' : 'imperix_ctrl/Closed_loop_control/Subsystem6/MATLAB Function'
//  '<S661>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/Alpha-Beta-Zero to abc'
//  '<S662>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero'
//  '<S663>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S664>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S665>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S666>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S667>' : 'imperix_ctrl/Closed_loop_control/Subsystem8/Sample and Hold'
//  '<S668>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S669>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S670>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S671>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S672>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S673>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S674>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S675>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S676>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S677>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S678>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S679>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S680>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S681>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S682>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter11/sub'
//  '<S683>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter11/sub/generation'
//  '<S684>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter12/sub'
//  '<S685>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter12/sub/generation'
//  '<S686>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S687>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S688>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S689>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'
//  '<S690>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3/sub'
//  '<S691>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S692>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter5/sub'
//  '<S693>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter5/sub/generation'
//  '<S694>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter6/sub'
//  '<S695>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter6/sub/generation'

#endif                                 // imperix_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
