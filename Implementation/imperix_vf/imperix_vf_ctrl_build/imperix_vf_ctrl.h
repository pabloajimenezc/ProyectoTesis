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
// Model version                  : 19.85
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Feb  2 19:19:24 2026
//
#ifndef imperix_vf_ctrl_h_
#define imperix_vf_ctrl_h_
#include "rtwtypes.h"
#include "imperix_vf_ctrl_types.h"

// Block signals (default storage)
struct B_imperix_vf_ctrl_T {
  real32_T ADC;                        // '<S42>/ADC'
  real32_T DataTypeConversion;         // '<S57>/Data Type Conversion'
  real32_T ADC_f;                      // '<S44>/ADC'
  real32_T ADC_e;                      // '<S46>/ADC'
  real32_T ADC_i;                      // '<S36>/ADC'
  real32_T ADC_d;                      // '<S48>/ADC'
  real32_T ADC_ib;                     // '<S38>/ADC'
  real32_T ADC_p;                      // '<S40>/ADC'
  real32_T DataTypeConversion_i;       // '<S59>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S61>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S65>/Data Type Conversion'
  real32_T DataTypeConversion_fs;      // '<S77>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S79>/Data Type Conversion'
  real32_T DataTypeConversion_fz;      // '<S81>/Data Type Conversion'
  real32_T SFunction;                  // '<S157>/S-Function'
  real32_T DataTypeConversion_g;       // '<S63>/Data Type Conversion'
  real32_T DataTypeConversion_bk;      // '<S67>/Data Type Conversion'
  real32_T DataTypeConversion_gl;      // '<S69>/Data Type Conversion'
  real32_T DataTypeConversion_f2;      // '<S71>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S73>/Data Type Conversion'
  real32_T DataTypeConversion_gx;      // '<S75>/Data Type Conversion'
  real32_T Saturation;                 // '<S50>/Saturation'
  real32_T SFunction_e;                // '<S155>/S-Function'
  real32_T DataTypeConversion1;        // '<S82>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S82>/Data Type Conversion2'
  real32_T SFunction_c;                // '<S159>/S-Function'
  real32_T DataTypeConversion1_p;      // '<S83>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S83>/Data Type Conversion2'
  real32_T DataTypeConversion1_h;      // '<S84>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S84>/Data Type Conversion2'
  real32_T DataTypeConversion1_f;      // '<S85>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S85>/Data Type Conversion2'
  real32_T DataTypeConversion1_b;      // '<S94>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S94>/Data Type Conversion2'
  real32_T DataTypeConversion1_e;      // '<S95>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S95>/Data Type Conversion2'
  real32_T DataTypeConversion1_po;     // '<S96>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S96>/Data Type Conversion2'
  real32_T DataTypeConversion1_c;      // '<S97>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S97>/Data Type Conversion2'
  real32_T DataTypeConversion1_h3;     // '<S106>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S106>/Data Type Conversion2'
  real32_T DataTypeConversion1_m;      // '<S107>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S107>/Data Type Conversion2'
  real32_T DataTypeConversion1_fz;     // '<S108>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S108>/Data Type Conversion2'
  real32_T DataTypeConversion1_i;      // '<S109>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S109>/Data Type Conversion2'
  real32_T DataTypeConversion1_a;      // '<S118>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S118>/Data Type Conversion2'
  real32_T DataTypeConversion1_k;      // '<S119>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S119>/Data Type Conversion2'
  real32_T DataTypeConversion1_l;      // '<S120>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S120>/Data Type Conversion2'
  real32_T DataTypeConversion1_bg;     // '<S121>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S121>/Data Type Conversion2'
  real32_T DataTypeConversion1_d;      // '<S130>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S130>/Data Type Conversion2'
  real32_T DataTypeConversion1_o;      // '<S131>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S131>/Data Type Conversion2'
  real32_T DataTypeConversion1_ay;     // '<S132>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S132>/Data Type Conversion2'
  real32_T DataTypeConversion1_pf;     // '<S133>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S133>/Data Type Conversion2'
  real32_T DataTypeConversion1_al;     // '<S142>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S142>/Data Type Conversion2'
  real32_T DataTypeConversion1_ig;     // '<S143>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S143>/Data Type Conversion2'
  real32_T DataTypeConversion1_g;      // '<S144>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S144>/Data Type Conversion2'
  real32_T DataTypeConversion1_gw;     // '<S145>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S145>/Data Type Conversion2'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_vf_ctrl_T {
  real_T SFunction_DSTATE;             // '<S57>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S59>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S61>/S-Function'
  real_T SFunction_DSTATE_jh;          // '<S65>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S77>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S79>/S-Function'
  real_T SFunction_DSTATE_er;          // '<S81>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S53>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S157>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S63>/S-Function'
  real_T SFunction_DSTATE_pt;          // '<S67>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S69>/S-Function'
  real_T SFunction_DSTATE_m;           // '<S71>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S73>/S-Function'
  real_T SFunction_DSTATE_bw;          // '<S75>/S-Function'
  real_T SFunction_DSTATE_bx;          // '<S155>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S159>/S-Function'
  real32_T DiscreteTimeIntegrator1_DSTATE;// '<S1>/Discrete-Time Integrator1'
};

// Parameters (default storage)
struct P_imperix_vf_ctrl_T_ {
  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by: '<S1>/Gain1'

  struct_aK5aQeabUeTOrz39VMjTKC IM;    // Variable: IM
                                          //  Referenced by: '<S1>/Gain8'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S42>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S44>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S46>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S36>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S48>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S38>/ADC'

  real_T ADC_P8_lh;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S40>/ADC'

  real_T Constant3_Value;              // Expression: 260
                                          //  Referenced by: '<S1>/Constant3'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S157>/S-Function'

  real_T SFunction_P17_o;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S155>/S-Function'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S82>/phase'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S159>/S-Function'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S83>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S84>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S85>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S94>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S95>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S96>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S97>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S106>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S107>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S108>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S109>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S118>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S119>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S120>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S121>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S130>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S131>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S132>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S133>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S142>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S143>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S144>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S145>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S87>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S87>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S87>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S89>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S89>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S89>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S91>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S91>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S91>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S93>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S93>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S93>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S99>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S99>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S99>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S101>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S101>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S101>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S103>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S103>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S103>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S105>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S105>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S105>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S111>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S111>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S111>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S113>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S113>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S113>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S115>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S115>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S115>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S117>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S117>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S117>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S123>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S123>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S123>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S125>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S125>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S125>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S127>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S127>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S127>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S129>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S129>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S129>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S135>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S135>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S135>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S137>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S137>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S137>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S139>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S139>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S139>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S141>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S141>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S141>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S147>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S147>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S147>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S149>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S149>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S149>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S151>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S151>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S151>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S153>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S153>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S153>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S42>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S42>/ADC'

  real32_T SFunction_P6;               // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S57>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S57>/S-Function'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S44>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S44>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S46>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S46>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S36>/ADC'

  real32_T ADC_P3_l;                   // Expression: single(offset)
                                          //  Referenced by: '<S36>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S48>/ADC'

  real32_T ADC_P3_ck;                  // Expression: single(offset)
                                          //  Referenced by: '<S48>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S38>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S38>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S40>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S40>/ADC'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S59>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S59>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S61>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S61>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S65>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S65>/S-Function'

  real32_T SFunction_P6_kr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S77>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S77>/S-Function'

  real32_T SFunction_P6_k4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S79>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S79>/S-Function'

  real32_T SFunction_P6_kp;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S81>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S81>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S53>/S-Function'

  real32_T SFunction_P3;               // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S53>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S55>/CLK1'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(0)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S157>/S-Function'

  real32_T Gain23_Gain;                // Computed Parameter: Gain23_Gain
                                          //  Referenced by: '<S1>/Gain23'

  real32_T Bias1_Bias;                 // Computed Parameter: Bias1_Bias
                                          //  Referenced by: '<S1>/Bias1'

  real32_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S1>/Discrete-Time Integrator1'

  real32_T DiscreteTimeIntegrator1_IC;
                               // Computed Parameter: DiscreteTimeIntegrator1_IC
                                  //  Referenced by: '<S1>/Discrete-Time Integrator1'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S63>/S-Function'

  real32_T SFunction_P12_fk;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S63>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S67>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S67>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S69>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S69>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S71>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S71>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S73>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S73>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S75>/S-Function'

  real32_T SFunction_P12_ok;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S75>/S-Function'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<S50>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<S50>/Saturation'

  real32_T CLK1_P2_c;                  // Expression: single(frequency)
                                          //  Referenced by: '<S50>/CLK1'

  real32_T SFunction_P3_j;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P4_n;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P5_e;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P6_cq;            // Expression: single(0)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S155>/S-Function'

  real32_T Gain22_Gain;                // Computed Parameter: Gain22_Gain
                                          //  Referenced by: '<S1>/Gain22'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(0)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S159>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S57>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S57>/S-Function'

  uint32_T SFunction_P7_i1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S59>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S59>/S-Function'

  uint32_T SFunction_P7_m;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S61>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S61>/S-Function'

  uint32_T SFunction_P7_ma;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S65>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S65>/S-Function'

  uint32_T SFunction_P7_m5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S77>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S77>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S79>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S79>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S81>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S81>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S157>/S-Function'

  uint32_T SFunction_P7_gz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S63>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S63>/S-Function'

  uint32_T SFunction_P7_ny;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S67>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S67>/S-Function'

  uint32_T SFunction_P7_ga;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S69>/S-Function'

  uint32_T SFunction_P13_oo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S69>/S-Function'

  uint32_T SFunction_P7_jx;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S71>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S71>/S-Function'

  uint32_T SFunction_P7_hf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S73>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S73>/S-Function'

  uint32_T SFunction_P7_hfk;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S75>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S75>/S-Function'

  uint32_T SFunction_P10_e;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S155>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S159>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S87>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S87>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S87>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S87>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S87>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S87>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S89>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S89>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S89>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S89>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S89>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S89>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S91>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S91>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S91>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S91>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S91>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S91>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S93>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S93>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S93>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S93>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S93>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S93>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S99>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S99>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S99>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S99>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S99>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S99>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S101>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S101>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S101>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S101>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S101>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S101>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S103>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S103>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S103>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S103>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S103>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S103>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S105>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S105>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S105>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S105>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S105>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S105>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S111>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S111>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S111>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S111>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S111>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S111>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S113>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S113>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S113>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S113>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S113>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S113>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S115>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S117>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S123>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S123>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S123>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S123>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S123>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S123>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S125>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S125>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S125>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S125>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S125>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S125>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S127>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S129>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S135>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S135>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S135>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S135>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S135>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S135>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S137>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S139>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S141>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S147>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S149>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S151>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S153>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S153>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S42>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S42>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S42>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S42>/ADC'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S57>/S-Function'

  int16_T SFunction_P3_kp;             // Expression: int16(0)
                                          //  Referenced by: '<S57>/S-Function'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S44>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S44>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S44>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S44>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S46>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S46>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S46>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S46>/ADC'

  int16_T ADC_P1_ad;                   // Expression: int16(channel)
                                          //  Referenced by: '<S36>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S36>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S36>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S36>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P4_it;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P9_n4;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S38>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S38>/ADC'

  int16_T ADC_P6_p0;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S38>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S38>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S40>/ADC'

  int16_T ADC_P4_b2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S40>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S40>/ADC'

  int16_T ADC_P9_nd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S40>/ADC'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S59>/S-Function'

  int16_T SFunction_P3_l;              // Expression: int16(0)
                                          //  Referenced by: '<S59>/S-Function'

  int16_T SFunction_P2_a4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S61>/S-Function'

  int16_T SFunction_P3_ka;             // Expression: int16(0)
                                          //  Referenced by: '<S61>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S65>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S65>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S77>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S77>/S-Function'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S79>/S-Function'

  int16_T SFunction_P3_h;              // Expression: int16(0)
                                          //  Referenced by: '<S79>/S-Function'

  int16_T SFunction_P2_ax;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S81>/S-Function'

  int16_T SFunction_P3_jm;             // Expression: int16(0)
                                          //  Referenced by: '<S81>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S55>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S55>/CLK1'

  int16_T SFunction_P2_bn;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S157>/S-Function'

  int16_T SFunction_P2_ot;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S63>/S-Function'

  int16_T SFunction_P3_kj;             // Expression: int16(0)
                                          //  Referenced by: '<S63>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S67>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S67>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S69>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S69>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S71>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S71>/S-Function'

  int16_T SFunction_P2_iu;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S73>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S73>/S-Function'

  int16_T SFunction_P2_dk;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S75>/S-Function'

  int16_T SFunction_P3_np;             // Expression: int16(0)
                                          //  Referenced by: '<S75>/S-Function'

  int16_T clk_id_Value_d;              // Computed Parameter: clk_id_Value_d
                                          //  Referenced by: '<S50>/clk_id'

  int16_T CLK1_P1_b;                   // Expression: int16(id)
                                          //  Referenced by: '<S50>/CLK1'

  int16_T SFunction_P2_h;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S155>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P1[2];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S57>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S57>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S57>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S57>/S-Function'

  uint16_T SFunction_P14[5];           // Computed Parameter: SFunction_P14
                                          //  Referenced by: '<S57>/S-Function'

  uint16_T SFunction_P1_o[3];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S59>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S59>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S59>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S59>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S59>/S-Function'

  uint16_T SFunction_P1_j[3];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S61>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S61>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S61>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S61>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S61>/S-Function'

  uint16_T SFunction_P1_c[3];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S65>/S-Function'

  uint16_T SFunction_P5_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S65>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S65>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S65>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S65>/S-Function'

  uint16_T SFunction_P1_h[3];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S77>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S77>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S77>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S77>/S-Function'

  uint16_T SFunction_P14_e[5];         // Computed Parameter: SFunction_P14_e
                                          //  Referenced by: '<S77>/S-Function'

  uint16_T SFunction_P1_ow[3];         // Computed Parameter: SFunction_P1_ow
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S79>/S-Function'

  uint16_T SFunction_P1_n[3];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P5_ml;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P11_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S81>/S-Function'

  uint16_T SFunction_P1_f;             // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S53>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S53>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S53>/S-Function'

  uint16_T SFunction_P1_i[5];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P14_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S157>/S-Function'

  uint16_T SFunction_P1_p[2];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S63>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S63>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S63>/S-Function'

  uint16_T SFunction_P11_fb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S63>/S-Function'

  uint16_T SFunction_P14_dy[5];        // Computed Parameter: SFunction_P14_dy
                                          //  Referenced by: '<S63>/S-Function'

  uint16_T SFunction_P1_a[2];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S67>/S-Function'

  uint16_T SFunction_P5_mt;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S67>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S67>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S67>/S-Function'

  uint16_T SFunction_P14_i4[5];        // Computed Parameter: SFunction_P14_i4
                                          //  Referenced by: '<S67>/S-Function'

  uint16_T SFunction_P1_g[2];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S69>/S-Function'

  uint16_T SFunction_P5_eg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S69>/S-Function'

  uint16_T SFunction_P8_dm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S69>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S69>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S69>/S-Function'

  uint16_T SFunction_P1_ip[2];         // Computed Parameter: SFunction_P1_ip
                                          //  Referenced by: '<S71>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S71>/S-Function'

  uint16_T SFunction_P8_df;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S71>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S71>/S-Function'

  uint16_T SFunction_P14_cy[5];        // Computed Parameter: SFunction_P14_cy
                                          //  Referenced by: '<S71>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S73>/S-Function'

  uint16_T SFunction_P5_fe;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S73>/S-Function'

  uint16_T SFunction_P8_nh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S73>/S-Function'

  uint16_T SFunction_P11_je;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S73>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S73>/S-Function'

  uint16_T SFunction_P1_na[2];         // Computed Parameter: SFunction_P1_na
                                          //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P8_d4;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P1_ne[5];         // Computed Parameter: SFunction_P1_ne
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P9_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P11_jea;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P14_ft;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P15_e;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S155>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S87>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S87>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S87>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S89>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S89>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S89>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S91>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S91>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S91>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S93>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S93>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S93>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S99>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S99>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S99>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S101>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S101>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S101>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S103>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S103>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S103>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S105>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S105>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S105>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S111>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S111>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S111>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S113>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S113>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S113>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S115>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S115>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S115>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S117>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S117>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S117>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S123>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S123>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S123>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S125>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S125>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S125>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S127>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S127>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S127>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S129>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S129>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S129>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S135>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S135>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S135>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S137>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S137>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S137>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S139>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S139>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S139>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S141>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S141>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S141>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S147>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S147>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S147>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S149>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S149>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S149>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S151>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S151>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S151>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S153>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S153>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S153>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S42>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S42>/ADC'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S57>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S57>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S57>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S57>/S-Function'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S44>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S44>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S46>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S46>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S36>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S36>/ADC'

  boolean_T ADC_P5_gk;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S48>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S48>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S38>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S38>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S40>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S40>/ADC'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S59>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S59>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S59>/S-Function'

  boolean_T SFunction_P15_el;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S59>/S-Function'

  boolean_T SFunction_P4_nt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S61>/S-Function'

  boolean_T SFunction_P9_m;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S61>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S61>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S61>/S-Function'

  boolean_T SFunction_P4_j;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S65>/S-Function'

  boolean_T SFunction_P9_cg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S65>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S65>/S-Function'

  boolean_T SFunction_P15_ei;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S65>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S77>/S-Function'

  boolean_T SFunction_P9_o;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S77>/S-Function'

  boolean_T SFunction_P10_e2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S77>/S-Function'

  boolean_T SFunction_P15_bp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S77>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S79>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S79>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S79>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S79>/S-Function'

  boolean_T SFunction_P4_h5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S81>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S81>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S81>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S81>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S55>/CLK1'

  boolean_T SFunction_P8_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P12_ly;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P13_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S157>/S-Function'

  boolean_T SFunction_P4_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S63>/S-Function'

  boolean_T SFunction_P9_o5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S63>/S-Function'

  boolean_T SFunction_P10_n;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S63>/S-Function'

  boolean_T SFunction_P15_aj;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S63>/S-Function'

  boolean_T SFunction_P4_ja;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S67>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S67>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S67>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S67>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S69>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S69>/S-Function'

  boolean_T SFunction_P10_hh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S69>/S-Function'

  boolean_T SFunction_P15_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S69>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S71>/S-Function'

  boolean_T SFunction_P9_n5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S71>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S71>/S-Function'

  boolean_T SFunction_P15_eln;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S71>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S73>/S-Function'

  boolean_T SFunction_P9_f0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S73>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S73>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S73>/S-Function'

  boolean_T SFunction_P4_e;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S75>/S-Function'

  boolean_T SFunction_P9_lc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S75>/S-Function'

  boolean_T SFunction_P10_imr;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S75>/S-Function'

  boolean_T SFunction_P15_gp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S75>/S-Function'

  boolean_T CLK1_P3_e;                 // Expression: boolean(var_freq)
                                          //  Referenced by: '<S50>/CLK1'

  boolean_T SFunction_P8_hi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P12_c;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P13_k;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P16_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S155>/S-Function'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S159>/S-Function'

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
//  Block '<S10>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S82>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S83>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S84>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S85>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S94>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S95>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S96>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S97>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S106>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S107>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S108>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S109>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S118>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S119>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S120>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S121>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S130>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S131>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S132>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S133>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S142>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S143>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S144>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S145>/Data Type Conversion3' : Eliminate redundant data type conversion


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
//  '<S12>'  : 'imperix_vf_ctrl/Closed_loop_control/Modulation index'
//  '<S13>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe12'
//  '<S14>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe2'
//  '<S15>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe3'
//  '<S16>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe38'
//  '<S17>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe4'
//  '<S18>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe40'
//  '<S19>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe41'
//  '<S20>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe42'
//  '<S21>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe43'
//  '<S22>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe44'
//  '<S23>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe5'
//  '<S24>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe6'
//  '<S25>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe7'
//  '<S26>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1'
//  '<S27>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2'
//  '<S28>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3'
//  '<S29>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4'
//  '<S30>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5'
//  '<S31>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9'
//  '<S32>'  : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter11'
//  '<S33>'  : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter12'
//  '<S34>'  : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S35>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC22/sub'
//  '<S36>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC22/sub/generation'
//  '<S37>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC23/sub'
//  '<S38>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC23/sub/generation'
//  '<S39>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC24/sub'
//  '<S40>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC24/sub/generation'
//  '<S41>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC25/sub'
//  '<S42>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC25/sub/generation'
//  '<S43>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC26/sub'
//  '<S44>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC26/sub/generation'
//  '<S45>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC27/sub'
//  '<S46>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC27/sub/generation'
//  '<S47>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC3/sub'
//  '<S48>'  : 'imperix_vf_ctrl/Closed_loop_control/ADC3/sub/generation'
//  '<S49>'  : 'imperix_vf_ctrl/Closed_loop_control/CLK1/sub'
//  '<S50>'  : 'imperix_vf_ctrl/Closed_loop_control/CLK1/sub/generation'
//  '<S51>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S52>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S53>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S54>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S55>'  : 'imperix_vf_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S56>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe12/sub'
//  '<S57>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S58>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe2/sub'
//  '<S59>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S60>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe3/sub'
//  '<S61>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S62>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe38/sub'
//  '<S63>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe38/sub/generation'
//  '<S64>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe4/sub'
//  '<S65>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S66>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe40/sub'
//  '<S67>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe40/sub/generation'
//  '<S68>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe41/sub'
//  '<S69>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe41/sub/generation'
//  '<S70>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe42/sub'
//  '<S71>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe42/sub/generation'
//  '<S72>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe43/sub'
//  '<S73>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe43/sub/generation'
//  '<S74>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe44/sub'
//  '<S75>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe44/sub/generation'
//  '<S76>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe5/sub'
//  '<S77>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S78>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe6/sub'
//  '<S79>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S80>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe7/sub'
//  '<S81>'  : 'imperix_vf_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S82>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S83>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S84>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S85>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S86>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S87>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S88>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S89>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S90>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S91>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S92>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S93>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S94>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S95>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S96>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S97>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S98>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S99>'  : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S100>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S101>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S102>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S103>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S104>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S105>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S106>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S107>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S108>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S109>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S110>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S111>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S112>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S113>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S114>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S115>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S116>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S117>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S118>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S119>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S120>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S121>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S122>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S123>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S124>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S125>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S126>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S127>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S128>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S129>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S130>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S131>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S132>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S133>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S134>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S135>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S136>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S137>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S138>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S139>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S140>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S141>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S142>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S143>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S144>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S145>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S146>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S147>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S148>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S149>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S150>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S151>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S152>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S153>' : 'imperix_vf_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S154>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter11/sub'
//  '<S155>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter11/sub/generation'
//  '<S156>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter12/sub'
//  '<S157>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter12/sub/generation'
//  '<S158>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S159>' : 'imperix_vf_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'

#endif                                 // imperix_vf_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
