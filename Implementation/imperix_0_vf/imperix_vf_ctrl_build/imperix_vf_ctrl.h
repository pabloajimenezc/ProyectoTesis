//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_vf_ctrl.h
//
// Code generated for Simulink model 'imperix_vf_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.98
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 13:19:50 2026
//
#ifndef imperix_vf_ctrl_h_
#define imperix_vf_ctrl_h_
#include "rtwtypes.h"
#include "imperix_vf_ctrl_types.h"

// Block signals (default storage)
struct B_imperix_vf_ctrl_T {
  real32_T ADC;                        // '<S52>/ADC'
  real32_T Gain8;                      // '<S1>/Gain8'
  real32_T ADC_f;                      // '<S54>/ADC'
  real32_T ADC_e;                      // '<S56>/ADC'
  real32_T ADC_i;                      // '<S46>/ADC'
  real32_T ADC_d;                      // '<S58>/ADC'
  real32_T ADC_ib;                     // '<S48>/ADC'
  real32_T ADC_p;                      // '<S50>/ADC'
  real32_T Gain9[2];                   // '<S1>/Gain9'
  real32_T Gain6;                      // '<S1>/Gain6'
  real32_T SFunction;                  // '<S184>/S-Function'
  real32_T DataTypeConversion1;        // '<S67>/Data Type Conversion1'
  real32_T DataTypeConversion1_l;      // '<S69>/Data Type Conversion1'
  real32_T DataTypeConversion1_la;     // '<S71>/Data Type Conversion1'
  real32_T DataTypeConversion1_p;      // '<S73>/Data Type Conversion1'
  real32_T DataTypeConversion1_a;      // '<S75>/Data Type Conversion1'
  real32_T DataTypeConversion1_e;      // '<S77>/Data Type Conversion1'
  real32_T DataTypeConversion;         // '<S89>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S93>/Data Type Conversion'
  real32_T DataTypeConversion_g;       // '<S95>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S97>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S99>/Data Type Conversion'
  real32_T DataTypeConversion_gx;      // '<S101>/Data Type Conversion'
  real32_T Saturation;                 // '<S60>/Saturation'
  real32_T DataTypeConversion1_le;     // '<S110>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S110>/Data Type Conversion2'
  real32_T SFunction_c;                // '<S188>/S-Function'
  real32_T DataTypeConversion1_pv;     // '<S111>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S111>/Data Type Conversion2'
  real32_T DataTypeConversion1_h;      // '<S112>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S112>/Data Type Conversion2'
  real32_T DataTypeConversion1_f;      // '<S113>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S113>/Data Type Conversion2'
  real32_T DataTypeConversion1_b;      // '<S122>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S122>/Data Type Conversion2'
  real32_T DataTypeConversion1_eo;     // '<S123>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S123>/Data Type Conversion2'
  real32_T DataTypeConversion1_po;     // '<S124>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S124>/Data Type Conversion2'
  real32_T DataTypeConversion1_c;      // '<S125>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S125>/Data Type Conversion2'
  real32_T DataTypeConversion1_h3;     // '<S135>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S135>/Data Type Conversion2'
  real32_T DataTypeConversion1_m;      // '<S136>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S136>/Data Type Conversion2'
  real32_T DataTypeConversion1_fz;     // '<S137>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S137>/Data Type Conversion2'
  real32_T DataTypeConversion1_i;      // '<S138>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S138>/Data Type Conversion2'
  real32_T DataTypeConversion1_al;     // '<S147>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S147>/Data Type Conversion2'
  real32_T DataTypeConversion1_k;      // '<S148>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S148>/Data Type Conversion2'
  real32_T DataTypeConversion1_l4;     // '<S149>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S149>/Data Type Conversion2'
  real32_T DataTypeConversion1_bg;     // '<S150>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S150>/Data Type Conversion2'
  real32_T DataTypeConversion1_d;      // '<S159>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S159>/Data Type Conversion2'
  real32_T DataTypeConversion1_o;      // '<S160>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S160>/Data Type Conversion2'
  real32_T DataTypeConversion1_ay;     // '<S161>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S161>/Data Type Conversion2'
  real32_T DataTypeConversion1_pf;     // '<S162>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S162>/Data Type Conversion2'
  real32_T DataTypeConversion1_als;    // '<S171>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S171>/Data Type Conversion2'
  real32_T DataTypeConversion1_ig;     // '<S172>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S172>/Data Type Conversion2'
  real32_T DataTypeConversion1_g;      // '<S173>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S173>/Data Type Conversion2'
  real32_T DataTypeConversion1_gw;     // '<S174>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S174>/Data Type Conversion2'
  real32_T SFunction_a;                // '<S186>/S-Function'
  real32_T Gain1[6];                   // '<S1>/Gain1'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_vf_ctrl_T {
  real_T SFunction_DSTATE;             // '<S79>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S81>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S83>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S109>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S63>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S184>/S-Function'
  real_T DAC_DSTATE;                   // '<S67>/DAC'
  real_T DAC_DSTATE_c;                 // '<S69>/DAC'
  real_T DAC_DSTATE_h;                 // '<S71>/DAC'
  real_T DAC_DSTATE_d;                 // '<S73>/DAC'
  real_T DAC_DSTATE_b;                 // '<S75>/DAC'
  real_T DAC_DSTATE_h0;                // '<S77>/DAC'
  real_T SFunction_DSTATE_h;           // '<S89>/S-Function'
  real_T SFunction_DSTATE_pt;          // '<S93>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S95>/S-Function'
  real_T SFunction_DSTATE_m;           // '<S97>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S99>/S-Function'
  real_T SFunction_DSTATE_bw;          // '<S101>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S188>/S-Function'
  real_T SFunction_DSTATE_ij;          // '<S186>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S85>/S-Function'
  real_T SFunction_DSTATE_fe;          // '<S87>/S-Function'
  real_T SFunction_DSTATE_jh;          // '<S91>/S-Function'
  real_T SFunction_DSTATE_p0;          // '<S103>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S105>/S-Function'
  real_T SFunction_DSTATE_er;          // '<S107>/S-Function'
  real32_T DiscreteTimeIntegrator2_DSTATE;// '<S1>/Discrete-Time Integrator2'
  real32_T DiscreteTimeIntegrator1_DSTATE;// '<S1>/Discrete-Time Integrator1'
  real32_T DiscreteTimeIntegrator3_DSTATE;// '<S1>/Discrete-Time Integrator3'
  int8_T DiscreteTimeIntegrator2_PrevRes;// '<S1>/Discrete-Time Integrator2'
  int8_T DiscreteTimeIntegrator3_PrevRes;// '<S1>/Discrete-Time Integrator3'
};

// Parameters (default storage)
struct P_imperix_vf_ctrl_T_ {
  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by: '<S1>/Constant3'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S52>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S54>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S56>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S46>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S58>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S48>/ADC'

  real_T ADC_P8_lh;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S50>/ADC'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S184>/S-Function'

  real_T Gain_Gain;                    // Expression: 5
                                          //  Referenced by: '<S1>/Gain'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S110>/phase'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S188>/S-Function'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S111>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S112>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S113>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S122>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S123>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S124>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S125>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S135>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S136>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S137>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S138>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S147>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S148>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S149>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S150>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S159>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S160>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S161>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S162>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S171>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S172>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S173>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S174>/phase'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S186>/S-Function'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S115>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S115>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S115>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S117>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S117>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S117>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S119>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S119>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S119>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S121>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S121>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S121>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S127>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S127>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S127>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S129>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S129>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S129>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S131>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S131>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S131>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S133>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S133>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S133>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S140>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S140>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S140>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S142>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S142>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S142>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S144>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S144>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S144>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S146>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S146>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S146>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S152>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S152>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S152>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S154>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S154>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S154>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S156>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S156>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S156>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S158>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S158>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S158>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S164>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S164>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S164>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S166>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S166>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S166>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S168>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S168>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S168>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S170>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S170>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S170>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S176>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S176>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S176>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S178>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S178>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S178>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S180>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S180>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S180>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S182>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S182>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S182>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S52>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S52>/ADC'

  real32_T Gain8_Gain;                 // Computed Parameter: Gain8_Gain
                                          //  Referenced by: '<S1>/Gain8'

  real32_T SFunction_P6;               // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S79>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S79>/S-Function'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S54>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S54>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S56>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S56>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S46>/ADC'

  real32_T ADC_P3_l;                   // Expression: single(offset)
                                          //  Referenced by: '<S46>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S58>/ADC'

  real32_T ADC_P3_ck;                  // Expression: single(offset)
                                          //  Referenced by: '<S58>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S48>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S48>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S50>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S50>/ADC'

  real32_T Gain1_Gain[30];             // Expression: M2C.A
                                          //  Referenced by: '<S37>/Gain1'

  real32_T Gain2_Gain;                 // Computed Parameter: Gain2_Gain
                                          //  Referenced by: '<S37>/Gain2'

  real32_T Gain3_Gain[9];              // Computed Parameter: Gain3_Gain
                                          //  Referenced by: '<S134>/Gain3'

  real32_T Gain1_Gain_b;               // Computed Parameter: Gain1_Gain_b
                                          //  Referenced by: '<S134>/Gain1'

  real32_T Gain9_Gain;                 // Computed Parameter: Gain9_Gain
                                          //  Referenced by: '<S1>/Gain9'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S81>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S81>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S83>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S83>/S-Function'

  real32_T Gain6_Gain;                 // Computed Parameter: Gain6_Gain
                                          //  Referenced by: '<S1>/Gain6'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S109>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S109>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S63>/S-Function'

  real32_T SFunction_P3;               // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S63>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S65>/CLK1'

  real32_T SFunction_P3_j;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(0)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T DiscreteTimeIntegrator2_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real32_T DiscreteTimeIntegrator2_IC;
                               // Computed Parameter: DiscreteTimeIntegrator2_IC
                                  //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real32_T DiscreteTimeIntegrator2_UpperSa;
                          // Computed Parameter: DiscreteTimeIntegrator2_UpperSa
                             //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real32_T DiscreteTimeIntegrator2_LowerSa;
                          // Computed Parameter: DiscreteTimeIntegrator2_LowerSa
                             //  Referenced by: '<S1>/Discrete-Time Integrator2'

  real32_T Gain2_Gain_d;               // Computed Parameter: Gain2_Gain_d
                                          //  Referenced by: '<S1>/Gain2'

  real32_T Bias1_Bias;                 // Computed Parameter: Bias1_Bias
                                          //  Referenced by: '<S1>/Bias1'

  real32_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator1'

  real32_T DiscreteTimeIntegrator1_IC;
                               // Computed Parameter: DiscreteTimeIntegrator1_IC
                                  //  Referenced by: '<S1>/Discrete-Time Integrator1'

  real32_T SFunction_P6_mc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S89>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S89>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S93>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S93>/S-Function'

  real32_T SFunction_P6_cl;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S95>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S95>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S97>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S97>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S99>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S99>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S101>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S101>/S-Function'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<S60>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<S60>/Saturation'

  real32_T CLK1_P2_a;                  // Expression: single(frequency)
                                          //  Referenced by: '<S60>/CLK1'

  real32_T DiscreteTimeIntegrator3_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator3_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real32_T DiscreteTimeIntegrator3_IC;
                               // Computed Parameter: DiscreteTimeIntegrator3_IC
                                  //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real32_T DiscreteTimeIntegrator3_UpperSa;
                          // Computed Parameter: DiscreteTimeIntegrator3_UpperSa
                             //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real32_T DiscreteTimeIntegrator3_LowerSa;
                          // Computed Parameter: DiscreteTimeIntegrator3_LowerSa
                             //  Referenced by: '<S1>/Discrete-Time Integrator3'

  real32_T Gain7_Gain;                 // Computed Parameter: Gain7_Gain
                                          //  Referenced by: '<S1>/Gain7'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(0)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P5_m;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(0)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P7_p;             // Expression: single(0)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T Gain1_Gain_g;               // Computed Parameter: Gain1_Gain_g
                                          //  Referenced by: '<S1>/Gain1'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S85>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S85>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S87>/S-Function'

  real32_T SFunction_P12_fr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S87>/S-Function'

  real32_T SFunction_P6_ek;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S91>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S91>/S-Function'

  real32_T SFunction_P6_kr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S103>/S-Function'

  real32_T SFunction_P12_hp;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S103>/S-Function'

  real32_T SFunction_P6_k4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S105>/S-Function'

  real32_T SFunction_P12_o3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S105>/S-Function'

  real32_T SFunction_P6_kp;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S107>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S107>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S79>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S79>/S-Function'

  uint32_T SFunction_P7_gu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S81>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S81>/S-Function'

  uint32_T SFunction_P7_l;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S83>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S83>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S109>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S109>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S184>/S-Function'

  uint32_T SFunction_P7_gz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S89>/S-Function'

  uint32_T SFunction_P13_h3;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S89>/S-Function'

  uint32_T SFunction_P7_ny;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S93>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S93>/S-Function'

  uint32_T SFunction_P7_ga;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S95>/S-Function'

  uint32_T SFunction_P13_oo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S95>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S97>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S97>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S99>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S99>/S-Function'

  uint32_T SFunction_P7_hf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S101>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S101>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P7_i;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S85>/S-Function'

  uint32_T SFunction_P13_ck;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S85>/S-Function'

  uint32_T SFunction_P7_m;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S87>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S87>/S-Function'

  uint32_T SFunction_P7_ma;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S91>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S91>/S-Function'

  uint32_T SFunction_P7_m5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S103>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S103>/S-Function'

  uint32_T SFunction_P7_jj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S105>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S105>/S-Function'

  uint32_T SFunction_P7_h5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S107>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S107>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S119>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S119>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S119>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S119>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S119>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S119>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S121>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S121>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S121>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S121>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S121>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S121>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S131>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S131>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S131>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S131>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S131>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S131>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S133>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S133>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S133>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S133>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S133>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S133>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S140>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S140>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S140>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S140>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S140>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S140>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S142>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S142>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S142>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S142>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S142>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S142>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S144>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S144>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S144>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S144>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S144>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S144>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S146>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S146>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S146>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S146>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S146>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S146>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S152>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S152>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S152>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S152>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S152>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S152>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S154>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S154>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S154>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S154>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S154>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S154>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S156>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S156>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S156>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S156>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S156>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S156>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S158>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S158>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S158>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S158>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S158>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S158>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S164>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S166>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S168>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S170>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S170>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S170>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S170>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S170>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S170>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S176>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S178>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S180>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S182>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S182>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S52>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S52>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S52>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S52>/ADC'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S79>/S-Function'

  int16_T SFunction_P3_kp;             // Expression: int16(0)
                                          //  Referenced by: '<S79>/S-Function'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S54>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S54>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S54>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S54>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S56>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S56>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S56>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S56>/ADC'

  int16_T ADC_P1_ad;                   // Expression: int16(channel)
                                          //  Referenced by: '<S46>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S46>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S46>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S46>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P4_it;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P9_n4;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P6_p0;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S50>/ADC'

  int16_T ADC_P4_b2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S50>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S50>/ADC'

  int16_T ADC_P9_nd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S50>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S81>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S81>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S83>/S-Function'

  int16_T SFunction_P3_l;              // Expression: int16(0)
                                          //  Referenced by: '<S83>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S109>/S-Function'

  int16_T SFunction_P3_h;              // Expression: int16(0)
                                          //  Referenced by: '<S109>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S65>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S65>/CLK1'

  int16_T SFunction_P2_g;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S184>/S-Function'

  int16_T DAC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S67>/DAC'

  int16_T DAC_P2;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S67>/DAC'

  int16_T DAC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S69>/DAC'

  int16_T DAC_P2_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S69>/DAC'

  int16_T DAC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S71>/DAC'

  int16_T DAC_P2_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S71>/DAC'

  int16_T DAC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S73>/DAC'

  int16_T DAC_P2_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S73>/DAC'

  int16_T DAC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S75>/DAC'

  int16_T DAC_P2_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S75>/DAC'

  int16_T DAC_P1_nv;                   // Expression: int16(channel)
                                          //  Referenced by: '<S77>/DAC'

  int16_T DAC_P2_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S77>/DAC'

  int16_T SFunction_P2_ot;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S89>/S-Function'

  int16_T SFunction_P3_kj;             // Expression: int16(0)
                                          //  Referenced by: '<S89>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S93>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S93>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S95>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S95>/S-Function'

  int16_T SFunction_P2_ko;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S97>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S97>/S-Function'

  int16_T SFunction_P2_iu;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S99>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S99>/S-Function'

  int16_T SFunction_P2_dk;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S101>/S-Function'

  int16_T SFunction_P3_np;             // Expression: int16(0)
                                          //  Referenced by: '<S101>/S-Function'

  int16_T clk_id_Value_g;              // Computed Parameter: clk_id_Value_g
                                          //  Referenced by: '<S60>/clk_id'

  int16_T CLK1_P1_a;                   // Expression: int16(id)
                                          //  Referenced by: '<S60>/CLK1'

  int16_T SFunction_P2_m;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T SFunction_P2_bd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S85>/S-Function'

  int16_T SFunction_P3_lb;             // Expression: int16(0)
                                          //  Referenced by: '<S85>/S-Function'

  int16_T SFunction_P2_a4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S87>/S-Function'

  int16_T SFunction_P3_ka;             // Expression: int16(0)
                                          //  Referenced by: '<S87>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S91>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S91>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S103>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S103>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S105>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S105>/S-Function'

  int16_T SFunction_P2_ax;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S107>/S-Function'

  int16_T SFunction_P3_jm;             // Expression: int16(0)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P1[2];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P14[5];           // Computed Parameter: SFunction_P14
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P1_h[6];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P5_p;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P1_o[6];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S83>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S83>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S83>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S83>/S-Function'

  uint16_T SFunction_P14_ne[5];        // Computed Parameter: SFunction_P14_ne
                                          //  Referenced by: '<S83>/S-Function'

  uint16_T SFunction_P1_k[2];          // Computed Parameter: SFunction_P1_k
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P5_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P1_f;             // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S63>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S63>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S63>/S-Function'

  uint16_T SFunction_P1_e[7];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P14_mf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P1_p[2];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S89>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S89>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S89>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S89>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S89>/S-Function'

  uint16_T SFunction_P1_a[2];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P5_mt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P8_nm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S93>/S-Function'

  uint16_T SFunction_P1_g[2];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P1_i[2];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P8_df;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P11_am;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P5_fe;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P8_nh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P11_je;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S99>/S-Function'

  uint16_T SFunction_P1_n[2];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P8_d4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P11_ba;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P1_i3[8];         // Computed Parameter: SFunction_P1_i3
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P9_f;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P14_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P15_l;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P1_oj[3];         // Computed Parameter: SFunction_P1_oj
                                          //  Referenced by: '<S85>/S-Function'

  uint16_T SFunction_P5_ma;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S85>/S-Function'

  uint16_T SFunction_P8_do;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S85>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S85>/S-Function'

  uint16_T SFunction_P14_n5[5];        // Computed Parameter: SFunction_P14_n5
                                          //  Referenced by: '<S85>/S-Function'

  uint16_T SFunction_P1_j[3];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S87>/S-Function'

  uint16_T SFunction_P5_cn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S87>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S87>/S-Function'

  uint16_T SFunction_P11_j5;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S87>/S-Function'

  uint16_T SFunction_P14_mw[5];        // Computed Parameter: SFunction_P14_mw
                                          //  Referenced by: '<S87>/S-Function'

  uint16_T SFunction_P1_c[3];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P5_dm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P14_cc[5];        // Computed Parameter: SFunction_P14_cc
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P1_hj[3];         // Computed Parameter: SFunction_P1_hj
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P8_js;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P14_ey[5];        // Computed Parameter: SFunction_P14_ey
                                          //  Referenced by: '<S103>/S-Function'

  uint16_T SFunction_P1_ow[3];         // Computed Parameter: SFunction_P1_ow
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P11_fr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P14_do[5];        // Computed Parameter: SFunction_P14_do
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P1_nq[3];         // Computed Parameter: SFunction_P1_nq
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P5_ml;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P11_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P14_ig[5];        // Computed Parameter: SFunction_P14_ig
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S115>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S115>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S115>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S117>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S117>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S117>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S119>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S119>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S119>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S121>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S121>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S121>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S127>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S127>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S127>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S129>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S129>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S129>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S131>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S131>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S131>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S133>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S133>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S133>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S140>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S140>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S140>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S142>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S142>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S142>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S144>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S144>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S144>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S146>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S146>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S146>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S152>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S152>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S152>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S154>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S154>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S154>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S156>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S156>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S156>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S158>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S158>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S158>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S164>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S164>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S164>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S166>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S166>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S166>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S168>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S168>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S168>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S170>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S170>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S170>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S176>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S176>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S176>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S178>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S178>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S178>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S180>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S180>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S180>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S182>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S182>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S182>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S52>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S52>/ADC'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S79>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S79>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S79>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S79>/S-Function'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S54>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S54>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S56>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S56>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S46>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S46>/ADC'

  boolean_T ADC_P5_gk;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S58>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S58>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S48>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S48>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S50>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S50>/ADC'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S81>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S81>/S-Function'

  boolean_T SFunction_P10_ni;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S81>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S81>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S83>/S-Function'

  boolean_T SFunction_P9_p2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S83>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S83>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S83>/S-Function'

  boolean_T SFunction_P4_hs;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P9_g;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P10_bx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P15_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S65>/CLK1'

  boolean_T SFunction_P8_ik;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P12_i;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P13_js;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P4_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S89>/S-Function'

  boolean_T SFunction_P9_o;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S89>/S-Function'

  boolean_T SFunction_P10_ne;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S89>/S-Function'

  boolean_T SFunction_P15_aj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S89>/S-Function'

  boolean_T SFunction_P4_j;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S93>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S93>/S-Function'

  boolean_T SFunction_P10_cs;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S93>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S93>/S-Function'

  boolean_T SFunction_P4_aj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T SFunction_P15_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S97>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S97>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S97>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S97>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S99>/S-Function'

  boolean_T SFunction_P9_f0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S99>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S99>/S-Function'

  boolean_T SFunction_P15_gc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S99>/S-Function'

  boolean_T SFunction_P4_eq;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T SFunction_P9_lc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T SFunction_P15_gp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T CLK1_P3_i;                 // Expression: boolean(var_freq)
                                          //  Referenced by: '<S60>/CLK1'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P8_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P12_ly;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P13_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P16_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S85>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S85>/S-Function'

  boolean_T SFunction_P10_ik;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S85>/S-Function'

  boolean_T SFunction_P15_el;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S85>/S-Function'

  boolean_T SFunction_P4_n;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S87>/S-Function'

  boolean_T SFunction_P9_m;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S87>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S87>/S-Function'

  boolean_T SFunction_P15_cr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S87>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T SFunction_P9_cg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T SFunction_P15_ei;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S103>/S-Function'

  boolean_T SFunction_P9_oy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S103>/S-Function'

  boolean_T SFunction_P10_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S103>/S-Function'

  boolean_T SFunction_P15_bp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S103>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P10_hh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P4_h5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P9_f4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P15_lb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S107>/S-Function'

};

// Real-time Model Data Structure
struct tag_RTM_imperix_vf_ctrl_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_imperix_vf_ctrl_T imperix_vf_ctrl_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_imperix_vf_ctrl_T imperix_vf_ctrl_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_imperix_vf_ctrl_T imperix_vf_ctrl_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void imperix_vf_ctrl_initialize(void);
  extern void imperix_vf_ctrl_step(void);
  extern void imperix_vf_ctrl_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_imperix_vf_ctrl_T *const imperix_vf_ctrl_M;

#ifdef __cplusplus

}

#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Scope' : Unused code path elimination
//  Block '<S1>/Scope1' : Unused code path elimination
//  Block '<S1>/Scope2' : Unused code path elimination
//  Block '<S10>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S79>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S81>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S83>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S85>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S87>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S91>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S103>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S105>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S107>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S109>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S110>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S111>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S112>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S113>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S122>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S123>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S124>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S125>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S135>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S136>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S137>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S138>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S147>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S148>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S149>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S150>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S159>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S160>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S161>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S162>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S171>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S172>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S173>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S174>/Data Type Conversion3' : Eliminate redundant data type conversion


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
//  '<Root>' : 'imperix_vf_ctrl'
//  '<S1>'   : 'imperix_vf_ctrl/Closed_loop_control'
//  '<S2>'   : 'imperix_vf_ctrl/Plant_Model'
//  '<S3>'   : 'imperix_vf_ctrl/Closed_loop_control/ADC22'
//  '<S4>'   : 'imperix_vf_ctrl/Closed_loop_control/ADC23'
//  '<S5>'   : 'imperix_vf_ctrl/Closed_loop_control/ADC24'
//  '<S6>'   : 'imperix_vf_ctrl/Closed_loop_control/ADC25'
//  '<S7>'   : 'imperix_vf_ctrl/Closed_loop_control/ADC26'
//  '<S8>'   : 'imperix_vf_ctrl/Closed_loop_control/ADC27'
//  '<S9>'   : 'imperix_vf_ctrl/Closed_loop_control/ADC3'
//  '<S10>'  : 'imperix_vf_ctrl/Closed_loop_control/CLK1'
//  '<S11>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration'
//  '<S12>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC10'
//  '<S13>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC11'
//  '<S14>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC6'
//  '<S15>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC7'
//  '<S16>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC8'
//  '<S17>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC9'
//  '<S18>'  : 'imperix_vf_ctrl/Closed_loop_control/Modulation index'
//  '<S19>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe12'
//  '<S20>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe13'
//  '<S21>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe14'
//  '<S22>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe2'
//  '<S23>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe3'
//  '<S24>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe38'
//  '<S25>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe4'
//  '<S26>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe40'
//  '<S27>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe41'
//  '<S28>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe42'
//  '<S29>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe43'
//  '<S30>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe44'
//  '<S31>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe5'
//  '<S32>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe6'
//  '<S33>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe7'
//  '<S34>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe9'
//  '<S35>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1'
//  '<S36>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2'
//  '<S37>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem20'
//  '<S38>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3'
//  '<S39>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4'
//  '<S40>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5'
//  '<S41>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9'
//  '<S42>'  : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S43>'  : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter12'
//  '<S44>'  : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S45>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC22/sub'
//  '<S46>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC22/sub/generation'
//  '<S47>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC23/sub'
//  '<S48>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC23/sub/generation'
//  '<S49>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC24/sub'
//  '<S50>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC24/sub/generation'
//  '<S51>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC25/sub'
//  '<S52>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC25/sub/generation'
//  '<S53>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC26/sub'
//  '<S54>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC26/sub/generation'
//  '<S55>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC27/sub'
//  '<S56>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC27/sub/generation'
//  '<S57>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC3/sub'
//  '<S58>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC3/sub/generation'
//  '<S59>'  : 'imperix_vf_ctrl/Closed_loop_control/CLK1/sub'
//  '<S60>'  : 'imperix_vf_ctrl/Closed_loop_control/CLK1/sub/generation'
//  '<S61>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S62>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S63>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S64>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S65>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S66>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC10/sub'
//  '<S67>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC10/sub/generation'
//  '<S68>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC11/sub'
//  '<S69>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC11/sub/generation'
//  '<S70>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC6/sub'
//  '<S71>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC6/sub/generation'
//  '<S72>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC7/sub'
//  '<S73>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC7/sub/generation'
//  '<S74>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC8/sub'
//  '<S75>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC8/sub/generation'
//  '<S76>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC9/sub'
//  '<S77>'  : 'imperix_vf_ctrl/Closed_loop_control/DAC9/sub/generation'
//  '<S78>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe12/sub'
//  '<S79>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S80>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe13/sub'
//  '<S81>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe13/sub/generation'
//  '<S82>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe14/sub'
//  '<S83>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe14/sub/generation'
//  '<S84>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe2/sub'
//  '<S85>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S86>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe3/sub'
//  '<S87>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S88>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe38/sub'
//  '<S89>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe38/sub/generation'
//  '<S90>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe4/sub'
//  '<S91>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S92>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe40/sub'
//  '<S93>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe40/sub/generation'
//  '<S94>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe41/sub'
//  '<S95>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe41/sub/generation'
//  '<S96>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe42/sub'
//  '<S97>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe42/sub/generation'
//  '<S98>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe43/sub'
//  '<S99>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe43/sub/generation'
//  '<S100>' : 'imperix_vf_ctrl/Closed_loop_control/Probe44/sub'
//  '<S101>' : 'imperix_vf_ctrl/Closed_loop_control/Probe44/sub/generation'
//  '<S102>' : 'imperix_vf_ctrl/Closed_loop_control/Probe5/sub'
//  '<S103>' : 'imperix_vf_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S104>' : 'imperix_vf_ctrl/Closed_loop_control/Probe6/sub'
//  '<S105>' : 'imperix_vf_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S106>' : 'imperix_vf_ctrl/Closed_loop_control/Probe7/sub'
//  '<S107>' : 'imperix_vf_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S108>' : 'imperix_vf_ctrl/Closed_loop_control/Probe9/sub'
//  '<S109>' : 'imperix_vf_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S110>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S111>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S112>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S113>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S114>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S115>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S116>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S117>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S118>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S119>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S120>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S121>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S122>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S123>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S124>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S125>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S126>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S127>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S128>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S129>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S130>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S131>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S132>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S133>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S134>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem20/abc to Alpha-Beta-Zero'
//  '<S135>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S136>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S137>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S138>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S139>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S140>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S141>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S142>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S143>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S144>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S145>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S146>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S147>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S148>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S149>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S150>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S151>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S152>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S153>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S154>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S155>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S156>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S157>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S158>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S159>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S160>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S161>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S162>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S163>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S164>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S165>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S166>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S167>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S168>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S169>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S170>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S171>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S172>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S173>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S174>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S175>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S176>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S177>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S178>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S179>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S180>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S181>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S182>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S183>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S184>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S185>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter12/sub'
//  '<S186>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter12/sub/generation'
//  '<S187>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S188>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'

#endif                                 // imperix_vf_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
