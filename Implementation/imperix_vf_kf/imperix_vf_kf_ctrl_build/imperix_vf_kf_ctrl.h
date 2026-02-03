//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_vf_kf_ctrl.h
//
// Code generated for Simulink model 'imperix_vf_kf_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.101
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 17:07:16 2026
//
#ifndef imperix_vf_kf_ctrl_h_
#define imperix_vf_kf_ctrl_h_
#include "rtwtypes.h"
#include "imperix_vf_kf_ctrl_types.h"
#include "rt_r32zcfcn.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include "zero_crossing_types.h"

// Block signals (default storage)
struct B_imperix_vf_kf_ctrl_T {
  real_T In;                           // '<S193>/In'
  real32_T SFunction;                  // '<S207>/S-Function'
  real32_T DataTypeConversion1;        // '<S79>/Data Type Conversion1'
  real32_T DataTypeConversion1_l;      // '<S81>/Data Type Conversion1'
  real32_T DataTypeConversion1_la;     // '<S83>/Data Type Conversion1'
  real32_T DataTypeConversion1_p;      // '<S85>/Data Type Conversion1'
  real32_T DataTypeConversion1_a;      // '<S87>/Data Type Conversion1'
  real32_T DataTypeConversion1_e;      // '<S89>/Data Type Conversion1'
  real32_T ADC;                        // '<S64>/ADC'
  real32_T SFunction_k;                // '<S209>/S-Function'
  real32_T DataTypeConversion;         // '<S91>/Data Type Conversion'
  real32_T ADC_f;                      // '<S66>/ADC'
  real32_T ADC_e;                      // '<S68>/ADC'
  real32_T ADC_i;                      // '<S58>/ADC'
  real32_T ADC_d;                      // '<S70>/ADC'
  real32_T ADC_ib;                     // '<S60>/ADC'
  real32_T ADC_p;                      // '<S62>/ADC'
  real32_T DataTypeConversion_f;       // '<S93>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S95>/Data Type Conversion'
  real32_T DataTypeConversion_id;      // '<S97>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S99>/Data Type Conversion'
  real32_T SFunction_m;                // '<S215>/S-Function'
  real32_T SFunction_f;                // '<S217>/S-Function'
  real32_T DataTypeConversion_b;       // '<S101>/Data Type Conversion'
  real32_T DataTypeConversion_ir;      // '<S103>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S105>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S107>/Data Type Conversion'
  real32_T DataTypeConversion_fy;      // '<S109>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S111>/Data Type Conversion'
  real32_T DataTypeConversion_fo;      // '<S113>/Data Type Conversion'
  real32_T DataTypeConversion_bk;      // '<S115>/Data Type Conversion'
  real32_T DataTypeConversion_gl;      // '<S117>/Data Type Conversion'
  real32_T DataTypeConversion_f2;      // '<S119>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S121>/Data Type Conversion'
  real32_T DataTypeConversion_gx;      // '<S123>/Data Type Conversion'
  real32_T DataTypeConversion_fs;      // '<S125>/Data Type Conversion'
  real32_T DataTypeConversion_ba;      // '<S127>/Data Type Conversion'
  real32_T DataTypeConversion_fz;      // '<S129>/Data Type Conversion'
  real32_T DataTypeConversion_pq;      // '<S131>/Data Type Conversion'
  real32_T Saturation;                 // '<S72>/Saturation'
  real32_T SFunction_a;                // '<S211>/S-Function'
  real32_T DataTypeConversion1_le;     // '<S132>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S132>/Data Type Conversion2'
  real32_T SFunction_c;                // '<S213>/S-Function'
  real32_T DataTypeConversion1_pv;     // '<S133>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S133>/Data Type Conversion2'
  real32_T DataTypeConversion1_h;      // '<S134>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S134>/Data Type Conversion2'
  real32_T DataTypeConversion1_f;      // '<S135>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S135>/Data Type Conversion2'
  real32_T DataTypeConversion1_b;      // '<S144>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S144>/Data Type Conversion2'
  real32_T DataTypeConversion1_eo;     // '<S145>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S145>/Data Type Conversion2'
  real32_T DataTypeConversion1_po;     // '<S146>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S146>/Data Type Conversion2'
  real32_T DataTypeConversion1_c;      // '<S147>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S147>/Data Type Conversion2'
  real32_T DataTypeConversion1_h3;     // '<S157>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S157>/Data Type Conversion2'
  real32_T DataTypeConversion1_m;      // '<S158>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S158>/Data Type Conversion2'
  real32_T DataTypeConversion1_fz;     // '<S159>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S159>/Data Type Conversion2'
  real32_T DataTypeConversion1_i;      // '<S160>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S160>/Data Type Conversion2'
  real32_T DataTypeConversion1_al;     // '<S169>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S169>/Data Type Conversion2'
  real32_T DataTypeConversion1_k;      // '<S170>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S170>/Data Type Conversion2'
  real32_T DataTypeConversion1_l4;     // '<S171>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S171>/Data Type Conversion2'
  real32_T DataTypeConversion1_bg;     // '<S172>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S172>/Data Type Conversion2'
  real32_T DataTypeConversion1_d;      // '<S181>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S181>/Data Type Conversion2'
  real32_T DataTypeConversion1_o;      // '<S182>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S182>/Data Type Conversion2'
  real32_T DataTypeConversion1_ay;     // '<S183>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S183>/Data Type Conversion2'
  real32_T DataTypeConversion1_pf;     // '<S184>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S184>/Data Type Conversion2'
  real32_T DataTypeConversion1_als;    // '<S194>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S194>/Data Type Conversion2'
  real32_T DataTypeConversion1_ig;     // '<S195>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S195>/Data Type Conversion2'
  real32_T DataTypeConversion1_g;      // '<S196>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S196>/Data Type Conversion2'
  real32_T DataTypeConversion1_gw;     // '<S197>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S197>/Data Type Conversion2'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_vf_kf_ctrl_T {
  dsp_simulink_MovingAverage_im_T obj; // '<S48>/Moving Average'
  real_T SFunction_DSTATE;             // '<S207>/S-Function'
  real_T DiscreteTimeIntegrator2_DSTATE;// '<S1>/Discrete-Time Integrator2'
  real_T DiscreteTimeIntegrator1_DSTATE;// '<S1>/Discrete-Time Integrator1'
  real_T DAC_DSTATE;                   // '<S79>/DAC'
  real_T DAC_DSTATE_c;                 // '<S81>/DAC'
  real_T DAC_DSTATE_h;                 // '<S83>/DAC'
  real_T DAC_DSTATE_d;                 // '<S85>/DAC'
  real_T DAC_DSTATE_b;                 // '<S87>/DAC'
  real_T DAC_DSTATE_h0;                // '<S89>/DAC'
  real_T SFunction_DSTATE_o;           // '<S209>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S91>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S93>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S95>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S97>/S-Function'
  real_T SFunction_DSTATE_fe;          // '<S99>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S215>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S217>/S-Function'
  real_T SFunction_DSTATE_m;           // '<S101>/S-Function'
  real_T SFunction_DSTATE_m1;          // '<S103>/S-Function'
  real_T SFunction_DSTATE_il;          // '<S105>/S-Function'
  real_T SFunction_DSTATE_jr;          // '<S107>/S-Function'
  real_T SFunction_DSTATE_jt;          // '<S109>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S111>/S-Function'
  real_T SFunction_DSTATE_jh;          // '<S113>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S115>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S117>/S-Function'
  real_T SFunction_DSTATE_mg;          // '<S119>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S121>/S-Function'
  real_T SFunction_DSTATE_bw;          // '<S123>/S-Function'
  real_T SFunction_DSTATE_p0;          // '<S125>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S127>/S-Function'
  real_T SFunction_DSTATE_er;          // '<S129>/S-Function'
  real_T SFunction_DSTATE_pn;          // '<S131>/S-Function'
  real_T SFunction_DSTATE_ij;          // '<S211>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S75>/S-Function'
  real_T DiscreteTimeIntegrator3_DSTATE;// '<S1>/Discrete-Time Integrator3'
  real_T SFunction_DSTATE_fq;          // '<S213>/S-Function'
  real_T xt_est_apriori[4];            // '<S1>/Kalman Filter'
  real_T Inx[16];                      // '<S1>/Kalman Filter'
  int8_T DiscreteTimeIntegrator2_PrevRes;// '<S1>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator3_PrevRes;// '<S1>/Discrete-Time Integrator3'
};

// Zero-crossing (trigger) state
struct PrevZCX_imperix_vf_kf_ctrl_T {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S48>/Sample and Hold'
};

// Parameters (default storage)
struct P_imperix_vf_kf_ctrl_T_ {
  struct_1mUndb4d19cpHVlbIkwLFC KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain6'
                                          //    '<S11>/vP'
                                          //    '<S44>/Gain1'

  struct_aK5aQeabUeTOrz39VMjTKC IM;    // Variable: IM
                                          //  Referenced by:
                                          //    '<S1>/Kalman Filter'
                                          //    '<S1>/Bias1'
                                          //    '<S1>/Gain18'
                                          //    '<S1>/Gain19'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain23'
                                          //    '<S1>/Gain5'
                                          //    '<S1>/Gain7'
                                          //    '<S1>/Gain8'
                                          //    '<S1>/Gain9'

  real_T _Y0;                          // Expression: initCond
                                          //  Referenced by: '<S193>/ '

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S207>/S-Function'

  real_T DiscreteTimeIntegrator2_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator2_IC;   // Expression: 0
                                          //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator2_UpperSa;// Expression: 0.5
                                            //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator2_LowerSa;// Expression: 0
                                            //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC;   // Expression: 0
                                          //  Referenced by: '<S1>/Discrete-Time Integrator1'

  real_T Gain_Gain;                    // Expression: 5
                                          //  Referenced by: '<S1>/Gain'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S64>/ADC'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S209>/S-Function'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S66>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S68>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S58>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S70>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S60>/ADC'

  real_T ADC_P8_lh;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S62>/ADC'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S44>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S156>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S156>/Gain1'

  real_T Gain3_Gain_a[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S56>/Gain3'

  real_T Gain1_Gain_m;                 // Expression: 2/3
                                          //  Referenced by: '<S56>/Gain1'

  real_T SFunction_P17_c;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S215>/S-Function'

  real_T SFunction_P17_d;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S217>/S-Function'

  real_T SFunction_P17_nc;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S211>/S-Function'

  real_T DiscreteTimeIntegrator3_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator3_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real_T DiscreteTimeIntegrator3_IC;   // Expression: 0
                                          //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real_T DiscreteTimeIntegrator3_UpperSa;// Expression: 0.5
                                            //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real_T DiscreteTimeIntegrator3_LowerSa;// Expression: 0
                                            //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S132>/phase'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S213>/S-Function'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S133>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S134>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S135>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S144>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S145>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S146>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S147>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S157>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S158>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S159>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S160>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S169>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S170>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S171>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S172>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S181>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S182>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S183>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S184>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S194>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S195>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S196>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S197>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S137>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S137>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S137>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S139>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S139>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S139>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S141>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S141>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S141>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S143>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S143>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S143>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S149>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S149>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S149>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S151>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S151>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S151>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S153>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S153>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S153>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S155>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S155>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S155>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S162>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S162>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S162>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S164>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S164>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S164>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S166>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S166>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S166>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S168>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S168>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S168>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S174>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S174>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S174>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S176>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S176>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S176>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S178>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S178>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S178>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S180>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S180>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S180>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S186>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S186>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S186>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S188>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S188>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S188>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S190>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S190>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S190>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S192>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S192>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S192>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S199>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S199>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S199>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S201>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S201>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S201>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S203>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S203>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S203>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S205>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S205>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S205>/PWM'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S64>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S64>/ADC'

  real32_T SFunction_P3_h;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(0)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P6_j0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S91>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S91>/S-Function'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S66>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S66>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S58>/ADC'

  real32_T ADC_P3_l;                   // Expression: single(offset)
                                          //  Referenced by: '<S58>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P3_ck;                  // Expression: single(offset)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S60>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S60>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S62>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S62>/ADC'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S93>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S93>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S95>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S95>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S97>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S97>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S99>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S99>/S-Function'

  real32_T SFunction_P3_b;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P5_pi;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(0)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P7_p;             // Expression: single(0)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P3_l;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P5_e;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(0)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P7_f;             // Expression: single(0)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P6_g4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S101>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S101>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S103>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S103>/S-Function'

  real32_T SFunction_P6_kh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S105>/S-Function'

  real32_T SFunction_P12_ce;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S105>/S-Function'

  real32_T SFunction_P6_di;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S107>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S107>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S109>/S-Function'

  real32_T SFunction_P12_c1;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S109>/S-Function'

  real32_T SFunction_P6_mc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S111>/S-Function'

  real32_T SFunction_P12_fk;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S111>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S113>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S113>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S115>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S115>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S117>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S117>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S119>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S119>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T SFunction_P6_kr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S125>/S-Function'

  real32_T SFunction_P12_hp;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S125>/S-Function'

  real32_T SFunction_P6_k4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S127>/S-Function'

  real32_T SFunction_P12_o3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S127>/S-Function'

  real32_T SFunction_P6_kp;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S129>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S129>/S-Function'

  real32_T SFunction_P6_ct;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S131>/S-Function'

  real32_T SFunction_P12_cj;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S131>/S-Function'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<S72>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<S72>/Saturation'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S72>/CLK1'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P4_em;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P5_m;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(0)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P7_p2;            // Expression: single(0)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S75>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S75>/S-Function'

  real32_T CLK1_P2_i;                  // Expression: single(frequency)
                                          //  Referenced by: '<S77>/CLK1'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S91>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S91>/S-Function'

  uint32_T SFunction_P7_gu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S93>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S93>/S-Function'

  uint32_T SFunction_P7_l;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S95>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S95>/S-Function'

  uint32_T SFunction_P7_i;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S97>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S97>/S-Function'

  uint32_T SFunction_P7_mj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S99>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S99>/S-Function'

  uint32_T SFunction_P10_g;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P10_nr;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P7_ii;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S101>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S101>/S-Function'

  uint32_T SFunction_P7_ic;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S103>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S103>/S-Function'

  uint32_T SFunction_P7_nh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S105>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S105>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S107>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S107>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S109>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S109>/S-Function'

  uint32_T SFunction_P7_gz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S111>/S-Function'

  uint32_T SFunction_P13_h3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S111>/S-Function'

  uint32_T SFunction_P7_ma;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S113>/S-Function'

  uint32_T SFunction_P13_bm;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S113>/S-Function'

  uint32_T SFunction_P7_ny;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S115>/S-Function'

  uint32_T SFunction_P13_ol;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S115>/S-Function'

  uint32_T SFunction_P7_ga;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S117>/S-Function'

  uint32_T SFunction_P13_oo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S117>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S119>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S119>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S121>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S121>/S-Function'

  uint32_T SFunction_P7_hf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S123>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S123>/S-Function'

  uint32_T SFunction_P7_m5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S125>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S125>/S-Function'

  uint32_T SFunction_P7_jj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S127>/S-Function'

  uint32_T SFunction_P13_jk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S127>/S-Function'

  uint32_T SFunction_P7_h5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S129>/S-Function'

  uint32_T SFunction_P13_gz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S129>/S-Function'

  uint32_T SFunction_P7_oz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S131>/S-Function'

  uint32_T SFunction_P13_cc;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S131>/S-Function'

  uint32_T SFunction_P10_nl;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S143>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S143>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S143>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S143>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S143>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S143>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S155>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S155>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S155>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S155>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S155>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S155>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S162>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S174>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S174>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S174>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S174>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S174>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S174>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S186>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S186>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S186>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S186>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S186>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S186>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S188>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S188>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S188>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S188>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S188>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S188>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S190>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S190>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S190>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S190>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S190>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S190>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S192>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S192>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S192>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S192>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S192>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S192>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S199>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S199>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S199>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S199>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S199>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S199>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S201>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S201>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S201>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S201>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S201>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S201>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S203>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S203>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S203>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S203>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S203>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S203>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S205>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S205>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S205>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S205>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S205>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S205>/PWM'

  int16_T SFunction_P2_g;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T DAC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S79>/DAC'

  int16_T DAC_P2;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S79>/DAC'

  int16_T DAC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S81>/DAC'

  int16_T DAC_P2_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S81>/DAC'

  int16_T DAC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S83>/DAC'

  int16_T DAC_P2_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S83>/DAC'

  int16_T DAC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S85>/DAC'

  int16_T DAC_P2_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S85>/DAC'

  int16_T DAC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S87>/DAC'

  int16_T DAC_P2_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S87>/DAC'

  int16_T DAC_P1_nv;                   // Expression: int16(channel)
                                          //  Referenced by: '<S89>/DAC'

  int16_T DAC_P2_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S89>/DAC'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S64>/ADC'

  int16_T SFunction_P2_k;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S91>/S-Function'

  int16_T SFunction_P3_kp;             // Expression: int16(0)
                                          //  Referenced by: '<S91>/S-Function'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P1_ad;                   // Expression: int16(channel)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P4_it;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P9_n4;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S60>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S60>/ADC'

  int16_T ADC_P6_p0;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S60>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S60>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P4_b2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P9_nd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S62>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S93>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S93>/S-Function'

  int16_T SFunction_P2_k2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S95>/S-Function'

  int16_T SFunction_P3_l1;             // Expression: int16(0)
                                          //  Referenced by: '<S95>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S97>/S-Function'

  int16_T SFunction_P3_lb;             // Expression: int16(0)
                                          //  Referenced by: '<S97>/S-Function'

  int16_T SFunction_P2_a4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S99>/S-Function'

  int16_T SFunction_P3_ka;             // Expression: int16(0)
                                          //  Referenced by: '<S99>/S-Function'

  int16_T SFunction_P2_p;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P2_k2u;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S101>/S-Function'

  int16_T SFunction_P3_n2;             // Expression: int16(0)
                                          //  Referenced by: '<S101>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S103>/S-Function'

  int16_T SFunction_P3_m5;             // Expression: int16(0)
                                          //  Referenced by: '<S103>/S-Function'

  int16_T SFunction_P2_li;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S105>/S-Function'

  int16_T SFunction_P3_j;              // Expression: int16(0)
                                          //  Referenced by: '<S105>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S107>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S107>/S-Function'

  int16_T SFunction_P2_o3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S109>/S-Function'

  int16_T SFunction_P3_bt;             // Expression: int16(0)
                                          //  Referenced by: '<S109>/S-Function'

  int16_T SFunction_P2_ot;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S111>/S-Function'

  int16_T SFunction_P3_kj;             // Expression: int16(0)
                                          //  Referenced by: '<S111>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S113>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S113>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S115>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S115>/S-Function'

  int16_T SFunction_P2_ir;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S117>/S-Function'

  int16_T SFunction_P3_cm;             // Expression: int16(0)
                                          //  Referenced by: '<S117>/S-Function'

  int16_T SFunction_P2_ko;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S119>/S-Function'

  int16_T SFunction_P3_bv;             // Expression: int16(0)
                                          //  Referenced by: '<S119>/S-Function'

  int16_T SFunction_P2_iu;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S121>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S121>/S-Function'

  int16_T SFunction_P2_dk;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S123>/S-Function'

  int16_T SFunction_P3_np;             // Expression: int16(0)
                                          //  Referenced by: '<S123>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S125>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S125>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S127>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S127>/S-Function'

  int16_T SFunction_P2_ax;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S129>/S-Function'

  int16_T SFunction_P3_jm;             // Expression: int16(0)
                                          //  Referenced by: '<S129>/S-Function'

  int16_T SFunction_P2_l5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S131>/S-Function'

  int16_T SFunction_P3_hc;             // Expression: int16(0)
                                          //  Referenced by: '<S131>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S72>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S72>/CLK1'

  int16_T SFunction_P2_bn;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T clk_id_Value_o;              // Computed Parameter: clk_id_Value_o
                                          //  Referenced by: '<S77>/clk_id'

  int16_T CLK1_P1_c;                   // Expression: int16(id)
                                          //  Referenced by: '<S77>/CLK1'

  int16_T SFunction_P2_m;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P1[7];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P1_p[10];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P9_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P14_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P15_p;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P1_h[6];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P5_pp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P1_o[6];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P14_ne[5];        // Computed Parameter: SFunction_P14_ne
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P1_oj[3];         // Computed Parameter: SFunction_P1_oj
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P5_ma;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P14_n5[5];        // Computed Parameter: SFunction_P14_n5
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P1_j[3];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P11_j5;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P1_a[9];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P9_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P14_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P15_b;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P1_h5[8];         // Computed Parameter: SFunction_P1_h5
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P9_cs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P1_d[9];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P1_g[9];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P11_jo;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P1_n[6];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P8_jt;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P11_mg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P1_c[6];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P5_ar;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P8_l2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P14_mj[5];        // Computed Parameter: SFunction_P14_mj
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P1_jb[5];         // Computed Parameter: SFunction_P1_jb
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P5_jd;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P14_jh[5];        // Computed Parameter: SFunction_P14_jh
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P1_pk[2];         // Computed Parameter: SFunction_P1_pk
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P5_ic;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P8_kn;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P11_fb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P14_dy[5];        // Computed Parameter: SFunction_P14_dy
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P1_cf[3];         // Computed Parameter: SFunction_P1_cf
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P5_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P1_ai[2];         // Computed Parameter: SFunction_P1_ai
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P5_mt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P1_g2[2];         // Computed Parameter: SFunction_P1_g2
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P5_eg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P8_dm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P1_i[2];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P8_df;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P11_am;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P14_cy[5];        // Computed Parameter: SFunction_P14_cy
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P1_mj[2];         // Computed Parameter: SFunction_P1_mj
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P5_fe;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P8_nh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P11_je;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P1_na[2];         // Computed Parameter: SFunction_P1_na
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P5_hs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P8_d4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P11_ba;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P1_hj[3];         // Computed Parameter: SFunction_P1_hj
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P8_js;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P11_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P14_ey[5];        // Computed Parameter: SFunction_P14_ey
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P1_ow[3];         // Computed Parameter: SFunction_P1_ow
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P11_fr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P14_do[5];        // Computed Parameter: SFunction_P14_do
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P1_nq[3];         // Computed Parameter: SFunction_P1_nq
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P5_ml;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P11_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P14_ig[5];        // Computed Parameter: SFunction_P14_ig
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P1_k[2];          // Computed Parameter: SFunction_P1_k
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P5_dr;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P8_ns;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P11_as;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P14_mt[5];        // Computed Parameter: SFunction_P14_mt
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P1_i3[8];         // Computed Parameter: SFunction_P1_i3
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P9_f;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P14_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P15_l;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P1_f;             // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P11_atz;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S137>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S137>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S137>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S139>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S139>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S139>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S141>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S141>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S141>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S143>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S143>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S143>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S149>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S149>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S149>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S151>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S151>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S151>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S153>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S153>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S153>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S155>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S155>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S155>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S162>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S162>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S162>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S164>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S164>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S164>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S166>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S166>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S166>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S168>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S168>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S168>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S174>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S174>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S174>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S176>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S176>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S176>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S178>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S178>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S178>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S180>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S180>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S180>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S186>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S186>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S186>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S188>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S188>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S188>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S190>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S190>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S190>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S192>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S192>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S192>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S199>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S199>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S199>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S201>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S201>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S201>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S203>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S203>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S203>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S205>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S205>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S205>/PWM'

  boolean_T SFunction_P8_ik;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P12_iu;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P13_js;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S64>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S64>/ADC'

  boolean_T SFunction_P8_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P12_m3;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P13_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P16_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T SFunction_P9_csd;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T SFunction_P15_b4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S66>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S66>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S58>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S58>/ADC'

  boolean_T ADC_P5_gk;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S60>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S60>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S62>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S62>/ADC'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S93>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S93>/S-Function'

  boolean_T SFunction_P10_ni;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S93>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S93>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T SFunction_P9_p2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S97>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S97>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S97>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S97>/S-Function'

  boolean_T SFunction_P4_n;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S99>/S-Function'

  boolean_T SFunction_P9_m;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S99>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S99>/S-Function'

  boolean_T SFunction_P15_cr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S99>/S-Function'

  boolean_T SFunction_P8_ne;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P12_au;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P13_hq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P16_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P8_h0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P12_eh;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P13_hz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P16_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P4_m3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T SFunction_P15_gu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S103>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S103>/S-Function'

  boolean_T SFunction_P10_kp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S103>/S-Function'

  boolean_T SFunction_P15_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S103>/S-Function'

  boolean_T SFunction_P4_bf;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P9_g;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P10_by;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P4_m4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P9_g0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P10_gd;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P4_mo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P9_o;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P10_gn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P15_ef;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P4_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S111>/S-Function'

  boolean_T SFunction_P9_o5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S111>/S-Function'

  boolean_T SFunction_P10_ne;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S111>/S-Function'

  boolean_T SFunction_P15_aj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S111>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S113>/S-Function'

  boolean_T SFunction_P9_cg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S113>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S113>/S-Function'

  boolean_T SFunction_P15_ei;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S113>/S-Function'

  boolean_T SFunction_P4_ja;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S115>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S115>/S-Function'

  boolean_T SFunction_P10_cs;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S115>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S115>/S-Function'

  boolean_T SFunction_P4_aj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P9_a0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P15_oc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P4_kl;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P15_el;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P9_f0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P10_ol;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P15_gc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P4_eq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P9_lc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P10_imr;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P15_gp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S125>/S-Function'

  boolean_T SFunction_P9_oy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S125>/S-Function'

  boolean_T SFunction_P10_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S125>/S-Function'

  boolean_T SFunction_P15_bp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S125>/S-Function'

  boolean_T SFunction_P4_bo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S127>/S-Function'

  boolean_T SFunction_P9_ir;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S127>/S-Function'

  boolean_T SFunction_P10_hh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S127>/S-Function'

  boolean_T SFunction_P15_pr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S127>/S-Function'

  boolean_T SFunction_P4_h5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S129>/S-Function'

  boolean_T SFunction_P9_f4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S129>/S-Function'

  boolean_T SFunction_P10_gy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S129>/S-Function'

  boolean_T SFunction_P15_lb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S129>/S-Function'

  boolean_T SFunction_P4_hs;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S131>/S-Function'

  boolean_T SFunction_P9_gd;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S131>/S-Function'

  boolean_T SFunction_P10_bx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S131>/S-Function'

  boolean_T SFunction_P15_jg;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S131>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S72>/CLK1'

  boolean_T SFunction_P8_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P12_ly;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P13_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P16_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T CLK1_P3_d;                 // Expression: boolean(var_freq)
                                          //  Referenced by: '<S77>/CLK1'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

};

// Real-time Model Data Structure
struct tag_RTM_imperix_vf_kf_ctrl_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_imperix_vf_kf_ctrl_T imperix_vf_kf_ctrl_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_imperix_vf_kf_ctrl_T imperix_vf_kf_ctrl_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_imperix_vf_kf_ctrl_T imperix_vf_kf_ctrl_DW;

// Zero-crossing (trigger) state
extern PrevZCX_imperix_vf_kf_ctrl_T imperix_vf_kf_ctrl_PrevZCX;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void imperix_vf_kf_ctrl_initialize(void);
  extern void imperix_vf_kf_ctrl_step(void);
  extern void imperix_vf_kf_ctrl_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_imperix_vf_kf_ctrl_T *const imperix_vf_kf_ctrl_M;

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
//  Block '<S10>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S132>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S133>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S134>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S135>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S144>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S145>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S146>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S147>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S157>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S158>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S159>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S160>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S169>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S170>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S171>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S172>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S181>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S182>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S183>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S184>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S194>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S195>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S196>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S197>/Data Type Conversion3' : Eliminate redundant data type conversion


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
//  '<Root>' : 'imperix_vf_kf_ctrl'
//  '<S1>'   : 'imperix_vf_kf_ctrl/Closed_loop_control'
//  '<S2>'   : 'imperix_vf_kf_ctrl/Plant_Model'
//  '<S3>'   : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC22'
//  '<S4>'   : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC23'
//  '<S5>'   : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC24'
//  '<S6>'   : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC25'
//  '<S7>'   : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC26'
//  '<S8>'   : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC27'
//  '<S9>'   : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC3'
//  '<S10>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/CLK1'
//  '<S11>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Cluster Voltage Mapping'
//  '<S12>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Configuration'
//  '<S13>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC10'
//  '<S14>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC11'
//  '<S15>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC6'
//  '<S16>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC7'
//  '<S17>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC8'
//  '<S18>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC9'
//  '<S19>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Kalman Filter'
//  '<S20>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Modulation index'
//  '<S21>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe12'
//  '<S22>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe13'
//  '<S23>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe14'
//  '<S24>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe2'
//  '<S25>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe3'
//  '<S26>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe33'
//  '<S27>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe34'
//  '<S28>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe35'
//  '<S29>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe36'
//  '<S30>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe37'
//  '<S31>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe38'
//  '<S32>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe4'
//  '<S33>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe40'
//  '<S34>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe41'
//  '<S35>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe42'
//  '<S36>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe43'
//  '<S37>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe44'
//  '<S38>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe5'
//  '<S39>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe6'
//  '<S40>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe7'
//  '<S41>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe9'
//  '<S42>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1'
//  '<S43>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2'
//  '<S44>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem20'
//  '<S45>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3'
//  '<S46>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4'
//  '<S47>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5'
//  '<S48>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem8'
//  '<S49>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9'
//  '<S50>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S51>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter11'
//  '<S52>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter12'
//  '<S53>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S54>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter6'
//  '<S55>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter8'
//  '<S56>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/abc to Alpha-Beta-Zero'
//  '<S57>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC22/sub'
//  '<S58>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC22/sub/generation'
//  '<S59>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC23/sub'
//  '<S60>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC23/sub/generation'
//  '<S61>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC24/sub'
//  '<S62>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC24/sub/generation'
//  '<S63>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC25/sub'
//  '<S64>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC25/sub/generation'
//  '<S65>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC26/sub'
//  '<S66>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC26/sub/generation'
//  '<S67>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC27/sub'
//  '<S68>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC27/sub/generation'
//  '<S69>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC3/sub'
//  '<S70>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/ADC3/sub/generation'
//  '<S71>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/CLK1/sub'
//  '<S72>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/CLK1/sub/generation'
//  '<S73>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S74>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S75>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S76>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S77>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S78>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC10/sub'
//  '<S79>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC10/sub/generation'
//  '<S80>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC11/sub'
//  '<S81>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC11/sub/generation'
//  '<S82>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC6/sub'
//  '<S83>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC6/sub/generation'
//  '<S84>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC7/sub'
//  '<S85>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC7/sub/generation'
//  '<S86>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC8/sub'
//  '<S87>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC8/sub/generation'
//  '<S88>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC9/sub'
//  '<S89>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/DAC9/sub/generation'
//  '<S90>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe12/sub'
//  '<S91>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S92>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe13/sub'
//  '<S93>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe13/sub/generation'
//  '<S94>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe14/sub'
//  '<S95>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe14/sub/generation'
//  '<S96>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe2/sub'
//  '<S97>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S98>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe3/sub'
//  '<S99>'  : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S100>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe33/sub'
//  '<S101>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe33/sub/generation'
//  '<S102>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe34/sub'
//  '<S103>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe34/sub/generation'
//  '<S104>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe35/sub'
//  '<S105>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe35/sub/generation'
//  '<S106>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe36/sub'
//  '<S107>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe36/sub/generation'
//  '<S108>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe37/sub'
//  '<S109>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe37/sub/generation'
//  '<S110>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe38/sub'
//  '<S111>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe38/sub/generation'
//  '<S112>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe4/sub'
//  '<S113>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S114>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe40/sub'
//  '<S115>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe40/sub/generation'
//  '<S116>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe41/sub'
//  '<S117>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe41/sub/generation'
//  '<S118>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe42/sub'
//  '<S119>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe42/sub/generation'
//  '<S120>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe43/sub'
//  '<S121>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe43/sub/generation'
//  '<S122>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe44/sub'
//  '<S123>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe44/sub/generation'
//  '<S124>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe5/sub'
//  '<S125>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S126>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe6/sub'
//  '<S127>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S128>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe7/sub'
//  '<S129>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S130>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe9/sub'
//  '<S131>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S132>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S133>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S134>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S135>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S136>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S137>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S138>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S139>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S140>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S141>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S142>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S143>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S144>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S145>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S146>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S147>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S148>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S149>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S150>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S151>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S152>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S153>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S154>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S155>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S156>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem20/abc to Alpha-Beta-Zero'
//  '<S157>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S158>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S159>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S160>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S161>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S162>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S163>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S164>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S165>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S166>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S167>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S168>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S169>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S170>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S171>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S172>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S173>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S174>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S175>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S176>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S177>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S178>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S179>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S180>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S181>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S182>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S183>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S184>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S185>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S186>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S187>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S188>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S189>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S190>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S191>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S192>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S193>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem8/Sample and Hold'
//  '<S194>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S195>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S196>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S197>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S198>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S199>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S200>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S201>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S202>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S203>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S204>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S205>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S206>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S207>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S208>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter11/sub'
//  '<S209>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter11/sub/generation'
//  '<S210>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter12/sub'
//  '<S211>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter12/sub/generation'
//  '<S212>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S213>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S214>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter6/sub'
//  '<S215>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter6/sub/generation'
//  '<S216>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter8/sub'
//  '<S217>' : 'imperix_vf_kf_ctrl/Closed_loop_control/Tunable parameter8/sub/generation'

#endif                                 // imperix_vf_kf_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
