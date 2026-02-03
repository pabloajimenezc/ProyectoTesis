//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_foc_ctrl.h
//
// Code generated for Simulink model 'imperix_foc_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.103
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 19:36:59 2026
//
#ifndef imperix_foc_ctrl_h_
#define imperix_foc_ctrl_h_
#include "rtwtypes.h"
#include "imperix_foc_ctrl_types.h"

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

// Block signals for system '<S51>/Moving Average'
struct B_MovingAverage_imperix_foc_c_T {
  real_T MovingAverage;                // '<S51>/Moving Average'
};

// Block states (default storage) for system '<S51>/Moving Average'
struct DW_MovingAverage_imperix_foc__T {
  dsp_simulink_MovingAverage_im_T obj; // '<S51>/Moving Average'
  boolean_T objisempty;                // '<S51>/Moving Average'
};

// Block signals (default storage)
struct B_imperix_foc_ctrl_T {
  real_T In;                           // '<S445>/In'
  real_T Fcn;                          // '<S408>/Fcn'
  real_T Fcn1;                         // '<S408>/Fcn1'
  real_T Fcn_o;                        // '<S407>/Fcn'
  real_T Fcn1_l;                       // '<S407>/Fcn1'
  real_T Fcn_ou;                       // '<S390>/Fcn'
  real_T Fcn1_f;                       // '<S390>/Fcn1'
  real_T Fcn_b;                        // '<S389>/Fcn'
  real_T Fcn1_i;                       // '<S389>/Fcn1'
  real_T In_g;                         // '<S278>/In'
  real32_T SFunction;                  // '<S459>/S-Function'
  real32_T SFunction_f;                // '<S465>/S-Function'
  real32_T ADC;                        // '<S78>/ADC'
  real32_T SFunction_k;                // '<S461>/S-Function'
  real32_T SFunction_c;                // '<S467>/S-Function'
  real32_T ADC_f;                      // '<S80>/ADC'
  real32_T ADC_e;                      // '<S82>/ADC'
  real32_T ADC_i;                      // '<S72>/ADC'
  real32_T ADC_d;                      // '<S84>/ADC'
  real32_T ADC_ib;                     // '<S74>/ADC'
  real32_T ADC_p;                      // '<S76>/ADC'
  real32_T SFunction_m;                // '<S469>/S-Function'
  real32_T SFunction_fs;               // '<S471>/S-Function'
  real32_T DataTypeConversion1;        // '<S93>/Data Type Conversion1'
  real32_T DataTypeConversion1_l;      // '<S95>/Data Type Conversion1'
  real32_T DataTypeConversion1_la;     // '<S97>/Data Type Conversion1'
  real32_T DataTypeConversion1_p;      // '<S99>/Data Type Conversion1'
  real32_T DataTypeConversion1_a;      // '<S101>/Data Type Conversion1'
  real32_T DataTypeConversion1_e;      // '<S103>/Data Type Conversion1'
  real32_T ADC_g;                      // '<S70>/ADC'
  real32_T DataTypeConversion;         // '<S105>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S107>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S109>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S111>/Data Type Conversion'
  real32_T DataTypeConversion_id;      // '<S113>/Data Type Conversion'
  real32_T DataTypeConversion_m;       // '<S115>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S117>/Data Type Conversion'
  real32_T DataTypeConversion_pw;      // '<S119>/Data Type Conversion'
  real32_T DataTypeConversion_mx;      // '<S121>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S123>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S125>/Data Type Conversion'
  real32_T DataTypeConversion_d4;      // '<S127>/Data Type Conversion'
  real32_T DataTypeConversion_pw0;     // '<S129>/Data Type Conversion'
  real32_T DataTypeConversion_ez;      // '<S131>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S133>/Data Type Conversion'
  real32_T DataTypeConversion_ir;      // '<S135>/Data Type Conversion'
  real32_T DataTypeConversion_d5;      // '<S137>/Data Type Conversion'
  real32_T DataTypeConversion_c;       // '<S139>/Data Type Conversion'
  real32_T DataTypeConversion_fy;      // '<S141>/Data Type Conversion'
  real32_T DataTypeConversion_fo;      // '<S143>/Data Type Conversion'
  real32_T DataTypeConversion_fs;      // '<S145>/Data Type Conversion'
  real32_T DataTypeConversion_ba;      // '<S147>/Data Type Conversion'
  real32_T DataTypeConversion_fz;      // '<S149>/Data Type Conversion'
  real32_T DataTypeConversion_bg;      // '<S151>/Data Type Conversion'
  real32_T DataTypeConversion_pq;      // '<S153>/Data Type Conversion'
  real32_T Saturation;                 // '<S86>/Saturation'
  real32_T DataTypeConversion1_le;     // '<S260>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S260>/Data Type Conversion2'
  real32_T SFunction_c4;               // '<S463>/S-Function'
  real32_T DataTypeConversion1_pv;     // '<S261>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S261>/Data Type Conversion2'
  real32_T DataTypeConversion1_h;      // '<S262>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S262>/Data Type Conversion2'
  real32_T DataTypeConversion1_f;      // '<S263>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S263>/Data Type Conversion2'
  real32_T DataTypeConversion1_b;      // '<S391>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S391>/Data Type Conversion2'
  real32_T DataTypeConversion1_eo;     // '<S392>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S392>/Data Type Conversion2'
  real32_T DataTypeConversion1_po;     // '<S393>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S393>/Data Type Conversion2'
  real32_T DataTypeConversion1_c;      // '<S394>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S394>/Data Type Conversion2'
  real32_T DataTypeConversion1_h3;     // '<S409>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S409>/Data Type Conversion2'
  real32_T DataTypeConversion1_m;      // '<S410>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S410>/Data Type Conversion2'
  real32_T DataTypeConversion1_fz;     // '<S411>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S411>/Data Type Conversion2'
  real32_T DataTypeConversion1_i;      // '<S412>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S412>/Data Type Conversion2'
  real32_T DataTypeConversion1_al;     // '<S421>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S421>/Data Type Conversion2'
  real32_T DataTypeConversion1_k;      // '<S422>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S422>/Data Type Conversion2'
  real32_T DataTypeConversion1_l4;     // '<S423>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S423>/Data Type Conversion2'
  real32_T DataTypeConversion1_bg;     // '<S424>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S424>/Data Type Conversion2'
  real32_T DataTypeConversion1_d;      // '<S433>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S433>/Data Type Conversion2'
  real32_T DataTypeConversion1_o;      // '<S434>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S434>/Data Type Conversion2'
  real32_T DataTypeConversion1_ay;     // '<S435>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S435>/Data Type Conversion2'
  real32_T DataTypeConversion1_pf;     // '<S436>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S436>/Data Type Conversion2'
  real32_T DataTypeConversion1_als;    // '<S446>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S446>/Data Type Conversion2'
  real32_T DataTypeConversion1_ig;     // '<S447>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S447>/Data Type Conversion2'
  real32_T DataTypeConversion1_g;      // '<S448>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S448>/Data Type Conversion2'
  real32_T DataTypeConversion1_gw;     // '<S449>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S449>/Data Type Conversion2'
  B_MovingAverage_imperix_foc_c_T MovingAverage_p;// '<S51>/Moving Average'
  B_MovingAverage_imperix_foc_c_T MovingAverage;// '<S51>/Moving Average'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_foc_ctrl_T {
  real_T SFunction_DSTATE;             // '<S459>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S465>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S461>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S467>/S-Function'
  real_T Integrator_DSTATE;            // '<S242>/Integrator'
  real_T UnitDelay_DSTATE[2];          // '<S52>/Unit Delay'
  real_T SFunction_DSTATE_d;           // '<S469>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S471>/S-Function'
  real_T Integrator_DSTATE_k;          // '<S190>/Integrator'
  real_T Integrator_DSTATE_h;          // '<S317>/Integrator'
  real_T Integrator_DSTATE_m;          // '<S369>/Integrator'
  real_T DAC_DSTATE;                   // '<S93>/DAC'
  real_T DAC_DSTATE_c;                 // '<S95>/DAC'
  real_T DAC_DSTATE_h;                 // '<S97>/DAC'
  real_T DAC_DSTATE_d;                 // '<S99>/DAC'
  real_T DAC_DSTATE_b;                 // '<S101>/DAC'
  real_T DAC_DSTATE_h0;                // '<S103>/DAC'
  real_T SFunction_DSTATE_m;           // '<S105>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S107>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S109>/S-Function'
  real_T SFunction_DSTATE_ea;          // '<S111>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S113>/S-Function'
  real_T SFunction_DSTATE_gi;          // '<S115>/S-Function'
  real_T SFunction_DSTATE_al;          // '<S117>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S119>/S-Function'
  real_T SFunction_DSTATE_m1;          // '<S121>/S-Function'
  real_T SFunction_DSTATE_o2;          // '<S123>/S-Function'
  real_T SFunction_DSTATE_jn;          // '<S125>/S-Function'
  real_T SFunction_DSTATE_ap;          // '<S127>/S-Function'
  real_T SFunction_DSTATE_fe;          // '<S129>/S-Function'
  real_T SFunction_DSTATE_gc;          // '<S131>/S-Function'
  real_T SFunction_DSTATE_m4;          // '<S133>/S-Function'
  real_T SFunction_DSTATE_m1g;         // '<S135>/S-Function'
  real_T SFunction_DSTATE_il;          // '<S137>/S-Function'
  real_T SFunction_DSTATE_jr;          // '<S139>/S-Function'
  real_T SFunction_DSTATE_jt;          // '<S141>/S-Function'
  real_T SFunction_DSTATE_jh;          // '<S143>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S145>/S-Function'
  real_T SFunction_DSTATE_ek;          // '<S147>/S-Function'
  real_T SFunction_DSTATE_er;          // '<S149>/S-Function'
  real_T SFunction_DSTATE_pr;          // '<S151>/S-Function'
  real_T SFunction_DSTATE_pn;          // '<S153>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S89>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S463>/S-Function'
  real_T xt_est_apriori[4];            // '<S1>/Kalman Filter'
  real_T Inx[16];                      // '<S1>/Kalman Filter'
  real_T F_max;                        // '<S1>/IM references'
  real_T w_max;                        // '<S1>/IM references'
  real_T F_prev;                       // '<S1>/IM references'
  real_T w_prev;                       // '<S1>/IM references'
  real_T dF;                           // '<S1>/IM references'
  real_T dw;                           // '<S1>/IM references'
  int8_T Integrator_PrevResetState;    // '<S242>/Integrator'
  int8_T Integrator_PrevResetState_h;  // '<S190>/Integrator'
  int8_T Integrator_PrevResetState_p;  // '<S317>/Integrator'
  int8_T Integrator_PrevResetState_b;  // '<S369>/Integrator'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  DW_MovingAverage_imperix_foc__T MovingAverage_p;// '<S51>/Moving Average'
  DW_MovingAverage_imperix_foc__T MovingAverage;// '<S51>/Moving Average'
};

// Zero-crossing (trigger) state
struct PrevZCX_imperix_foc_ctrl_T {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S60>/Sample and Hold'
  ZCSigState SampleandHold_Trig_ZCE_h; // '<S51>/Sample and Hold'
};

// Parameters (default storage)
struct P_imperix_foc_ctrl_T_ {
  struct_1mUndb4d19cpHVlbIkwLFC KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain6'
                                          //    '<S12>/vP'
                                          //    '<S59>/Gain1'

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
                                          //    '<S1>/Gain18'
                                          //    '<S1>/Gain19'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain23'
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain4'
                                          //    '<S1>/Gain5'
                                          //    '<S1>/Gain7'
                                          //    '<S1>/Gain9'
                                          //    '<S52>/Gain'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S182>/Kb'
                                          //    '<S187>/Integral Gain'
                                          //    '<S195>/Proportional Gain'
                                          //    '<S197>/Saturation'
                                          //    '<S234>/Kb'
                                          //    '<S239>/Integral Gain'
                                          //    '<S247>/Proportional Gain'
                                          //    '<S249>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S1>/Gain16'
                                          //    '<S309>/Kb'
                                          //    '<S314>/Integral Gain'
                                          //    '<S322>/Proportional Gain'
                                          //    '<S324>/Saturation'
                                          //    '<S361>/Kb'
                                          //    '<S366>/Integral Gain'
                                          //    '<S374>/Proportional Gain'
                                          //    '<S376>/Saturation'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S403>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S282>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_j;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_j
                                  //  Referenced by: '<S273>/Constant'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S242>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S190>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S317>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S369>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S405>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S406>/Constant'

  real_T CompareToConstant_const_d; // Mask Parameter: CompareToConstant_const_d
                                       //  Referenced by: '<S387>/Constant'

  real_T CompareToConstant1_const_j;
                                   // Mask Parameter: CompareToConstant1_const_j
                                      //  Referenced by: '<S388>/Constant'

  real_T CompareToConstant_const_b; // Mask Parameter: CompareToConstant_const_b
                                       //  Referenced by: '<S274>/Constant'

  real_T CompareToConstant1_const_o;
                                   // Mask Parameter: CompareToConstant1_const_o
                                      //  Referenced by: '<S275>/Constant'

  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S276>/alpha_beta'

  real_T alpha_beta_Y0_a[2];           // Expression: [0,0]
                                          //  Referenced by: '<S277>/alpha_beta'

  real_T _Y0;                          // Expression: initCond
                                          //  Referenced by: '<S278>/ '

  real_T alpha_beta_Y0_i[2];           // Expression: [0,0]
                                          //  Referenced by: '<S389>/alpha_beta'

  real_T alpha_beta_Y0_g[2];           // Expression: [0,0]
                                          //  Referenced by: '<S390>/alpha_beta'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S407>/dq'

  real_T dq_Y0_c[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S408>/dq'

  real_T _Y0_b;                        // Expression: initCond
                                          //  Referenced by: '<S445>/ '

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S459>/S-Function'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S465>/S-Function'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S78>/ADC'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S461>/S-Function'

  real_T SFunction_P17_h;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S467>/S-Function'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S242>/Integrator'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S80>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S82>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S72>/ADC'

  real_T ADC_P8_n;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S84>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S74>/ADC'

  real_T ADC_P8_lh;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S76>/ADC'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S55>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S404>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S404>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S52>/Unit Delay'

  real_T SFunction_P17_c;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S469>/S-Function'

  real_T SFunction_P17_d;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S471>/S-Function'

  real_T Integrator_gainval_g;       // Computed Parameter: Integrator_gainval_g
                                        //  Referenced by: '<S190>/Integrator'

  real_T Integrator_gainval_h;       // Computed Parameter: Integrator_gainval_h
                                        //  Referenced by: '<S317>/Integrator'

  real_T Integrator_gainval_b;       // Computed Parameter: Integrator_gainval_b
                                        //  Referenced by: '<S369>/Integrator'

  real_T Gain3_Gain_b[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S279>/Gain3'

  real_T Gain_Gain;                    // Expression: 5
                                          //  Referenced by: '<S1>/Gain'

  real_T ADC_P8_b;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S70>/ADC'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S260>/phase'

  real_T SFunction_P17_bl;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S463>/S-Function'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S261>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S262>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S263>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S391>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S392>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S393>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S394>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S409>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S410>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S411>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S412>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S421>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S422>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S423>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S424>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S433>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S434>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S435>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S436>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S446>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S447>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S448>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S449>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S265>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S265>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S265>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S267>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S267>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S267>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S269>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S269>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S269>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S271>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S271>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S271>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S396>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S396>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S396>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S398>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S398>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S398>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S400>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S400>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S400>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S402>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S402>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S402>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S414>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S414>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S414>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S416>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S416>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S416>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S418>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S418>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S418>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S420>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S420>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S420>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S426>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S426>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S426>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S428>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S428>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S428>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S430>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S430>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S430>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S432>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S432>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S432>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S438>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S438>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S438>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S440>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S440>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S440>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S442>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S442>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S442>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S444>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S444>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S444>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S451>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S451>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S451>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S453>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S453>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S453>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S455>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S455>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S455>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S457>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S457>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S457>/PWM'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S459>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S459>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S459>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S459>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S459>/S-Function'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S465>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S465>/S-Function'

  real32_T SFunction_P5_i;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S465>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(0)
                                          //  Referenced by: '<S465>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S465>/S-Function'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S78>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S78>/ADC'

  real32_T SFunction_P3_h;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S461>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S461>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S461>/S-Function'

  real32_T SFunction_P6_j;             // Expression: single(0)
                                          //  Referenced by: '<S461>/S-Function'

  real32_T SFunction_P7_m;             // Expression: single(0)
                                          //  Referenced by: '<S461>/S-Function'

  real32_T SFunction_P3_l;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S467>/S-Function'

  real32_T SFunction_P4_o;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S467>/S-Function'

  real32_T SFunction_P5_j;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S467>/S-Function'

  real32_T SFunction_P6_jn;            // Expression: single(0)
                                          //  Referenced by: '<S467>/S-Function'

  real32_T SFunction_P7_o;             // Expression: single(0)
                                          //  Referenced by: '<S467>/S-Function'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S80>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S80>/ADC'

  real32_T ADC_P2_m;                   // Expression: single(gain)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P3_l;                   // Expression: single(offset)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P3_ck;                  // Expression: single(offset)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S74>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S74>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P3_f;                   // Expression: single(offset)
                                          //  Referenced by: '<S76>/ADC'

  real32_T SFunction_P3_b;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S469>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S469>/S-Function'

  real32_T SFunction_P5_pi;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S469>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(0)
                                          //  Referenced by: '<S469>/S-Function'

  real32_T SFunction_P7_p;             // Expression: single(0)
                                          //  Referenced by: '<S469>/S-Function'

  real32_T SFunction_P3_lm;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S471>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S471>/S-Function'

  real32_T SFunction_P5_e;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S471>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(0)
                                          //  Referenced by: '<S471>/S-Function'

  real32_T SFunction_P7_f;             // Expression: single(0)
                                          //  Referenced by: '<S471>/S-Function'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P3_ej;                  // Expression: single(offset)
                                          //  Referenced by: '<S70>/ADC'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S105>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S105>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S107>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S107>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S109>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S109>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S111>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S111>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S113>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S113>/S-Function'

  real32_T SFunction_P6_p1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S115>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S115>/S-Function'

  real32_T SFunction_P6_oc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S117>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S117>/S-Function'

  real32_T SFunction_P6_jb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S119>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S119>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T SFunction_P12_ps;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T SFunction_P6_bq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T SFunction_P12_au;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S125>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S125>/S-Function'

  real32_T SFunction_P6_fh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S127>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S127>/S-Function'

  real32_T SFunction_P6_he;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S129>/S-Function'

  real32_T SFunction_P12_fr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S129>/S-Function'

  real32_T SFunction_P6_mb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S131>/S-Function'

  real32_T SFunction_P12_kn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S131>/S-Function'

  real32_T SFunction_P6_g4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S133>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S133>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S135>/S-Function'

  real32_T SFunction_P12_i4;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S135>/S-Function'

  real32_T SFunction_P6_kh;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S137>/S-Function'

  real32_T SFunction_P12_ce;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S137>/S-Function'

  real32_T SFunction_P6_di;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S139>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S139>/S-Function'

  real32_T SFunction_P6_b0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S141>/S-Function'

  real32_T SFunction_P12_c1;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S141>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S143>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S143>/S-Function'

  real32_T SFunction_P6_kr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S145>/S-Function'

  real32_T SFunction_P12_hp;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S145>/S-Function'

  real32_T SFunction_P6_k4;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S147>/S-Function'

  real32_T SFunction_P12_o3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S147>/S-Function'

  real32_T SFunction_P6_kp;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S149>/S-Function'

  real32_T SFunction_P12_av;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S149>/S-Function'

  real32_T SFunction_P6_cv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S151>/S-Function'

  real32_T SFunction_P12_m3;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S151>/S-Function'

  real32_T SFunction_P6_ct;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S153>/S-Function'

  real32_T SFunction_P12_cj;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S153>/S-Function'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<S86>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<S86>/Saturation'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S86>/CLK1'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S89>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S89>/S-Function'

  real32_T CLK1_P2_i;                  // Expression: single(frequency)
                                          //  Referenced by: '<S91>/CLK1'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S463>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S463>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S463>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S463>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S463>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S459>/S-Function'

  uint32_T SFunction_P10_c;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S465>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S461>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S467>/S-Function'

  uint32_T SFunction_P10_g;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S469>/S-Function'

  uint32_T SFunction_P10_nr;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S471>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S105>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S105>/S-Function'

  uint32_T SFunction_P7_gu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S107>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S107>/S-Function'

  uint32_T SFunction_P7_l;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S109>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S109>/S-Function'

  uint32_T SFunction_P7_f4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S111>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S111>/S-Function'

  uint32_T SFunction_P7_i1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S113>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S113>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S115>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S115>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S117>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S117>/S-Function'

  uint32_T SFunction_P7_or;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S119>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S119>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S121>/S-Function'

  uint32_T SFunction_P13_pe;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S121>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S123>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S123>/S-Function'

  uint32_T SFunction_P7_no;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S125>/S-Function'

  uint32_T SFunction_P13_hw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S125>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S127>/S-Function'

  uint32_T SFunction_P13_or;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S127>/S-Function'

  uint32_T SFunction_P7_mj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S129>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S129>/S-Function'

  uint32_T SFunction_P7_gn;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S131>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S131>/S-Function'

  uint32_T SFunction_P7_ii;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S133>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S133>/S-Function'

  uint32_T SFunction_P7_ic;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S135>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S135>/S-Function'

  uint32_T SFunction_P7_nh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S137>/S-Function'

  uint32_T SFunction_P13_ot;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S137>/S-Function'

  uint32_T SFunction_P7_ac;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S139>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S139>/S-Function'

  uint32_T SFunction_P7_ov;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S141>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S141>/S-Function'

  uint32_T SFunction_P7_ma;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S143>/S-Function'

  uint32_T SFunction_P13_bm;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S143>/S-Function'

  uint32_T SFunction_P7_m5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S145>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S145>/S-Function'

  uint32_T SFunction_P7_jj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S147>/S-Function'

  uint32_T SFunction_P13_jk;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S147>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S149>/S-Function'

  uint32_T SFunction_P13_gz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S149>/S-Function'

  uint32_T SFunction_P7_i5;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S151>/S-Function'

  uint32_T SFunction_P13_kw;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S151>/S-Function'

  uint32_T SFunction_P7_oz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S153>/S-Function'

  uint32_T SFunction_P13_cc;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S153>/S-Function'

  uint32_T SFunction_P10_k0;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S463>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S265>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S265>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S265>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S265>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S265>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S265>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S267>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S269>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S271>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S396>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S396>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S396>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S396>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S396>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S396>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S398>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S398>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S398>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S398>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S398>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S398>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S400>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S400>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S400>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S400>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S400>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S400>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S402>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S402>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S402>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S402>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S402>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S402>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S414>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S414>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S414>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S414>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S414>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S414>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S416>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S416>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S416>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S416>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S416>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S416>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S418>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S418>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S418>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S418>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S418>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S418>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S420>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S420>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S420>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S420>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S420>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S420>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S426>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S426>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S426>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S426>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S426>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S426>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S428>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S428>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S428>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S428>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S428>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S428>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S430>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S430>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S430>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S430>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S430>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S430>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S432>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S432>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S432>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S432>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S432>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S432>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S438>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S438>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S438>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S438>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S438>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S438>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S440>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S440>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S440>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S440>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S440>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S440>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S442>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S442>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S442>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S442>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S442>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S442>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S444>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S444>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S444>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S444>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S444>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S444>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S457>/PWM'

  int16_T SFunction_P2_n;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S459>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S465>/S-Function'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S78>/ADC'

  int16_T SFunction_P2_k;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S461>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S467>/S-Function'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P1_ad;                   // Expression: int16(channel)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P4_it;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P9_n4;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P6_p0;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P4_b2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P6_m;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P9_nd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S76>/ADC'

  int16_T SFunction_P2_p;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S469>/S-Function'

  int16_T SFunction_P2_iq;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S471>/S-Function'

  int16_T DAC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S93>/DAC'

  int16_T DAC_P2;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S93>/DAC'

  int16_T DAC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S95>/DAC'

  int16_T DAC_P2_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S95>/DAC'

  int16_T DAC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S97>/DAC'

  int16_T DAC_P2_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S97>/DAC'

  int16_T DAC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S99>/DAC'

  int16_T DAC_P2_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S99>/DAC'

  int16_T DAC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S101>/DAC'

  int16_T DAC_P2_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S101>/DAC'

  int16_T DAC_P1_nv;                   // Expression: int16(channel)
                                          //  Referenced by: '<S103>/DAC'

  int16_T DAC_P2_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S103>/DAC'

  int16_T ADC_P1_fz;                   // Expression: int16(channel)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P9_n0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S70>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S105>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S105>/S-Function'

  int16_T SFunction_P2_oz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S107>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S107>/S-Function'

  int16_T SFunction_P2_k2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S109>/S-Function'

  int16_T SFunction_P3_l1;             // Expression: int16(0)
                                          //  Referenced by: '<S109>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S111>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S111>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S113>/S-Function'

  int16_T SFunction_P3_lb;             // Expression: int16(0)
                                          //  Referenced by: '<S113>/S-Function'

  int16_T SFunction_P2_h;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S115>/S-Function'

  int16_T SFunction_P3_kr;             // Expression: int16(0)
                                          //  Referenced by: '<S115>/S-Function'

  int16_T SFunction_P2_kp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S117>/S-Function'

  int16_T SFunction_P3_ma;             // Expression: int16(0)
                                          //  Referenced by: '<S117>/S-Function'

  int16_T SFunction_P2_mw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S119>/S-Function'

  int16_T SFunction_P3_fu;             // Expression: int16(0)
                                          //  Referenced by: '<S119>/S-Function'

  int16_T SFunction_P2_m0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S121>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S121>/S-Function'

  int16_T SFunction_P2_bf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S123>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S123>/S-Function'

  int16_T SFunction_P2_hd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S125>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S125>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S127>/S-Function'

  int16_T SFunction_P3_hz;             // Expression: int16(0)
                                          //  Referenced by: '<S127>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S129>/S-Function'

  int16_T SFunction_P3_ka;             // Expression: int16(0)
                                          //  Referenced by: '<S129>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S131>/S-Function'

  int16_T SFunction_P3_h4;             // Expression: int16(0)
                                          //  Referenced by: '<S131>/S-Function'

  int16_T SFunction_P2_k2u;            // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S133>/S-Function'

  int16_T SFunction_P3_n2;             // Expression: int16(0)
                                          //  Referenced by: '<S133>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S135>/S-Function'

  int16_T SFunction_P3_m5;             // Expression: int16(0)
                                          //  Referenced by: '<S135>/S-Function'

  int16_T SFunction_P2_li;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S137>/S-Function'

  int16_T SFunction_P3_j;              // Expression: int16(0)
                                          //  Referenced by: '<S137>/S-Function'

  int16_T SFunction_P2_no;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S139>/S-Function'

  int16_T SFunction_P3_cx;             // Expression: int16(0)
                                          //  Referenced by: '<S139>/S-Function'

  int16_T SFunction_P2_o3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S141>/S-Function'

  int16_T SFunction_P3_bt;             // Expression: int16(0)
                                          //  Referenced by: '<S141>/S-Function'

  int16_T SFunction_P2_ei;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S143>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S143>/S-Function'

  int16_T SFunction_P2_j4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S145>/S-Function'

  int16_T SFunction_P3_gv;             // Expression: int16(0)
                                          //  Referenced by: '<S145>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S147>/S-Function'

  int16_T SFunction_P3_hi;             // Expression: int16(0)
                                          //  Referenced by: '<S147>/S-Function'

  int16_T SFunction_P2_ax;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S149>/S-Function'

  int16_T SFunction_P3_jm;             // Expression: int16(0)
                                          //  Referenced by: '<S149>/S-Function'

  int16_T SFunction_P2_n2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S151>/S-Function'

  int16_T SFunction_P3_ap;             // Expression: int16(0)
                                          //  Referenced by: '<S151>/S-Function'

  int16_T SFunction_P2_l5;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S153>/S-Function'

  int16_T SFunction_P3_hc;             // Expression: int16(0)
                                          //  Referenced by: '<S153>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S86>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S86>/CLK1'

  int16_T clk_id_Value_o;              // Computed Parameter: clk_id_Value_o
                                          //  Referenced by: '<S91>/clk_id'

  int16_T CLK1_P1_c;                   // Expression: int16(id)
                                          //  Referenced by: '<S91>/CLK1'

  int16_T SFunction_P2_m0o;            // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S463>/S-Function'

  uint16_T SFunction_P1[5];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S459>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S459>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S459>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S459>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S459>/S-Function'

  uint16_T SFunction_P1_f[5];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S465>/S-Function'

  uint16_T SFunction_P9_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S465>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S465>/S-Function'

  uint16_T SFunction_P14_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S465>/S-Function'

  uint16_T SFunction_P15_b;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S465>/S-Function'

  uint16_T SFunction_P1_p[10];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S461>/S-Function'

  uint16_T SFunction_P9_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S461>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S461>/S-Function'

  uint16_T SFunction_P14_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S461>/S-Function'

  uint16_T SFunction_P15_p;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S461>/S-Function'

  uint16_T SFunction_P1_n[8];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S467>/S-Function'

  uint16_T SFunction_P9_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S467>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S467>/S-Function'

  uint16_T SFunction_P14_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S467>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S467>/S-Function'

  uint16_T SFunction_P1_a[9];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S469>/S-Function'

  uint16_T SFunction_P9_c5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S469>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S469>/S-Function'

  uint16_T SFunction_P14_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S469>/S-Function'

  uint16_T SFunction_P15_bw;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S469>/S-Function'

  uint16_T SFunction_P1_h[8];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S471>/S-Function'

  uint16_T SFunction_P9_cs;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S471>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S471>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S471>/S-Function'

  uint16_T SFunction_P15_o3;           // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S471>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P14_ev[5];        // Computed Parameter: SFunction_P14_ev
                                          //  Referenced by: '<S105>/S-Function'

  uint16_T SFunction_P1_h2[6];         // Computed Parameter: SFunction_P1_h2
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P5_pp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P11_bb;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S107>/S-Function'

  uint16_T SFunction_P1_o[6];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P14_ne[5];        // Computed Parameter: SFunction_P14_ne
                                          //  Referenced by: '<S109>/S-Function'

  uint16_T SFunction_P1_f2[3];         // Computed Parameter: SFunction_P1_f2
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S111>/S-Function'

  uint16_T SFunction_P1_oj[3];         // Computed Parameter: SFunction_P1_oj
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P8_do;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P14_n5[5];        // Computed Parameter: SFunction_P14_n5
                                          //  Referenced by: '<S113>/S-Function'

  uint16_T SFunction_P1_j[4];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P11_mj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P14_hb[5];        // Computed Parameter: SFunction_P14_hb
                                          //  Referenced by: '<S115>/S-Function'

  uint16_T SFunction_P1_jz[5];         // Computed Parameter: SFunction_P1_jz
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P5_gk;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P11_mw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P14_bd[5];        // Computed Parameter: SFunction_P14_bd
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P1_jb[4];         // Computed Parameter: SFunction_P1_jb
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P5_iv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P8_mb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P14_ku[5];        // Computed Parameter: SFunction_P14_ku
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P1_b[4];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P5_fc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P11_lz;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P1_fs[5];         // Computed Parameter: SFunction_P1_fs
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P8_la;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P1_pk[4];         // Computed Parameter: SFunction_P1_pk
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P5_ez;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P14_ef[5];        // Computed Parameter: SFunction_P14_ef
                                          //  Referenced by: '<S125>/S-Function'

  uint16_T SFunction_P1_e[5];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P5_g2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P11_iq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P14_bl[5];        // Computed Parameter: SFunction_P14_bl
                                          //  Referenced by: '<S127>/S-Function'

  uint16_T SFunction_P1_jy[3];         // Computed Parameter: SFunction_P1_jy
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P5_cn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P8_pe;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P11_j5;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S129>/S-Function'

  uint16_T SFunction_P1_d[4];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P5_m1;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P8_g1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S131>/S-Function'

  uint16_T SFunction_P1_da[9];         // Computed Parameter: SFunction_P1_da
                                          //  Referenced by: '<S133>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S133>/S-Function'

  uint16_T SFunction_P8_e0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S133>/S-Function'

  uint16_T SFunction_P11_mh;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S133>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S133>/S-Function'

  uint16_T SFunction_P1_g[9];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S135>/S-Function'

  uint16_T SFunction_P5_iq;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S135>/S-Function'

  uint16_T SFunction_P8_lu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S135>/S-Function'

  uint16_T SFunction_P11_jo;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S135>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S135>/S-Function'

  uint16_T SFunction_P1_nn[6];         // Computed Parameter: SFunction_P1_nn
                                          //  Referenced by: '<S137>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S137>/S-Function'

  uint16_T SFunction_P8_jt;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S137>/S-Function'

  uint16_T SFunction_P11_mg;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S137>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S137>/S-Function'

  uint16_T SFunction_P1_c[6];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S139>/S-Function'

  uint16_T SFunction_P5_ar;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S139>/S-Function'

  uint16_T SFunction_P8_l2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S139>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S139>/S-Function'

  uint16_T SFunction_P14_mj[5];        // Computed Parameter: SFunction_P14_mj
                                          //  Referenced by: '<S139>/S-Function'

  uint16_T SFunction_P1_jbs[5];        // Computed Parameter: SFunction_P1_jbs
                                          //  Referenced by: '<S141>/S-Function'

  uint16_T SFunction_P5_jd;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S141>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S141>/S-Function'

  uint16_T SFunction_P11_hj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S141>/S-Function'

  uint16_T SFunction_P14_jh[5];        // Computed Parameter: SFunction_P14_jh
                                          //  Referenced by: '<S141>/S-Function'

  uint16_T SFunction_P1_cf[3];         // Computed Parameter: SFunction_P1_cf
                                          //  Referenced by: '<S143>/S-Function'

  uint16_T SFunction_P5_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S143>/S-Function'

  uint16_T SFunction_P8_gk;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S143>/S-Function'

  uint16_T SFunction_P11_id;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S143>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S143>/S-Function'

  uint16_T SFunction_P1_hj[3];         // Computed Parameter: SFunction_P1_hj
                                          //  Referenced by: '<S145>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S145>/S-Function'

  uint16_T SFunction_P8_js;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S145>/S-Function'

  uint16_T SFunction_P11_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S145>/S-Function'

  uint16_T SFunction_P14_ey[5];        // Computed Parameter: SFunction_P14_ey
                                          //  Referenced by: '<S145>/S-Function'

  uint16_T SFunction_P1_ow[3];         // Computed Parameter: SFunction_P1_ow
                                          //  Referenced by: '<S147>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S147>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S147>/S-Function'

  uint16_T SFunction_P11_fr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S147>/S-Function'

  uint16_T SFunction_P14_do[5];        // Computed Parameter: SFunction_P14_do
                                          //  Referenced by: '<S147>/S-Function'

  uint16_T SFunction_P1_nq[3];         // Computed Parameter: SFunction_P1_nq
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P5_ml;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P11_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S149>/S-Function'

  uint16_T SFunction_P1_hs[2];         // Computed Parameter: SFunction_P1_hs
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P5_gp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P8_eb;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P11_bt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P14_iz[5];        // Computed Parameter: SFunction_P14_iz
                                          //  Referenced by: '<S151>/S-Function'

  uint16_T SFunction_P1_k[2];          // Computed Parameter: SFunction_P1_k
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P5_dr;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P11_as;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P14_mt[5];        // Computed Parameter: SFunction_P14_mt
                                          //  Referenced by: '<S153>/S-Function'

  uint16_T SFunction_P1_fd;            // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S89>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S89>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S89>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S463>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S463>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S463>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S463>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S463>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S265>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S265>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S265>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S267>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S267>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S267>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S269>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S269>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S269>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S271>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S271>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S271>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S396>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S396>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S396>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S398>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S398>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S398>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S400>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S400>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S400>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S402>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S402>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S402>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S414>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S414>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S414>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S416>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S416>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S416>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S418>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S418>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S418>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S420>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S420>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S420>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S426>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S426>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S426>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S428>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S428>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S428>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S430>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S430>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S430>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S432>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S432>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S432>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S438>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S438>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S438>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S440>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S440>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S440>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S442>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S442>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S442>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S444>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S444>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S444>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S451>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S451>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S451>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S453>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S453>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S453>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S455>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S455>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S455>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T SFunction_P8_it;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S459>/S-Function'

  boolean_T SFunction_P12_py;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S459>/S-Function'

  boolean_T SFunction_P13_oa;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S459>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S459>/S-Function'

  boolean_T SFunction_P8_lh;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S465>/S-Function'

  boolean_T SFunction_P12_nl;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S465>/S-Function'

  boolean_T SFunction_P13_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S465>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S465>/S-Function'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T SFunction_P8_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S461>/S-Function'

  boolean_T SFunction_P12_m32;         // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S461>/S-Function'

  boolean_T SFunction_P13_pi;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S461>/S-Function'

  boolean_T SFunction_P16_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S461>/S-Function'

  boolean_T SFunction_P8_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S467>/S-Function'

  boolean_T SFunction_P12_ad;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S467>/S-Function'

  boolean_T SFunction_P13_f3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S467>/S-Function'

  boolean_T SFunction_P16_k1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S467>/S-Function'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P7_g;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P5_gk;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T SFunction_P8_ne;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S469>/S-Function'

  boolean_T SFunction_P12_aug;         // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S469>/S-Function'

  boolean_T SFunction_P13_hq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S469>/S-Function'

  boolean_T SFunction_P16_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S469>/S-Function'

  boolean_T SFunction_P8_h0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S471>/S-Function'

  boolean_T SFunction_P12_e;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S471>/S-Function'

  boolean_T SFunction_P13_hz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S471>/S-Function'

  boolean_T SFunction_P16_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S471>/S-Function'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T SFunction_P4_o0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P15_ax;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S105>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P10_ni;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S107>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P9_p2;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P10_cj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S109>/S-Function'

  boolean_T SFunction_P4_n;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S111>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S111>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S111>/S-Function'

  boolean_T SFunction_P15_cb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S111>/S-Function'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S113>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S113>/S-Function'

  boolean_T SFunction_P10_ik;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S113>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S113>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S115>/S-Function'

  boolean_T SFunction_P9_o;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S115>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S115>/S-Function'

  boolean_T SFunction_P15_pc;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S115>/S-Function'

  boolean_T SFunction_P4_hb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P9_m;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P10_gz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P15_pcd;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P4_jt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P9_ce;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P10_ib;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P4_j3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P9_pr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P10_l;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P15_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P4_bc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P9_ax;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P10_gq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P15_gb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S125>/S-Function'

  boolean_T SFunction_P9_g;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S125>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S125>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S125>/S-Function'

  boolean_T SFunction_P4_le;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S127>/S-Function'

  boolean_T SFunction_P9_mi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S127>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S127>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S127>/S-Function'

  boolean_T SFunction_P4_nt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S129>/S-Function'

  boolean_T SFunction_P9_mb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S129>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S129>/S-Function'

  boolean_T SFunction_P15_cr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S129>/S-Function'

  boolean_T SFunction_P4_i4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S131>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S131>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S131>/S-Function'

  boolean_T SFunction_P15_oe;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S131>/S-Function'

  boolean_T SFunction_P4_m3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S133>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S133>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S133>/S-Function'

  boolean_T SFunction_P15_gu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S133>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S135>/S-Function'

  boolean_T SFunction_P9_ar;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S135>/S-Function'

  boolean_T SFunction_P10_kp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S135>/S-Function'

  boolean_T SFunction_P15_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S135>/S-Function'

  boolean_T SFunction_P4_bf;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S137>/S-Function'

  boolean_T SFunction_P9_g5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S137>/S-Function'

  boolean_T SFunction_P10_by;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S137>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S137>/S-Function'

  boolean_T SFunction_P4_m4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S139>/S-Function'

  boolean_T SFunction_P9_g0;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S139>/S-Function'

  boolean_T SFunction_P10_gd;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S139>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S139>/S-Function'

  boolean_T SFunction_P4_mo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S141>/S-Function'

  boolean_T SFunction_P9_ot;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S141>/S-Function'

  boolean_T SFunction_P10_gn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S141>/S-Function'

  boolean_T SFunction_P15_ef;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S141>/S-Function'

  boolean_T SFunction_P4_jy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S143>/S-Function'

  boolean_T SFunction_P9_cg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S143>/S-Function'

  boolean_T SFunction_P10_im;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S143>/S-Function'

  boolean_T SFunction_P15_ei;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S143>/S-Function'

  boolean_T SFunction_P4_gr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S145>/S-Function'

  boolean_T SFunction_P9_oy;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S145>/S-Function'

  boolean_T SFunction_P10_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S145>/S-Function'

  boolean_T SFunction_P15_bp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S145>/S-Function'

  boolean_T SFunction_P4_bo;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S147>/S-Function'

  boolean_T SFunction_P9_ir;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S147>/S-Function'

  boolean_T SFunction_P10_hh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S147>/S-Function'

  boolean_T SFunction_P15_pr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S147>/S-Function'

  boolean_T SFunction_P4_h5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S149>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S149>/S-Function'

  boolean_T SFunction_P10_gy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S149>/S-Function'

  boolean_T SFunction_P15_lb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S149>/S-Function'

  boolean_T SFunction_P4_ge;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S151>/S-Function'

  boolean_T SFunction_P9_f3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S151>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S151>/S-Function'

  boolean_T SFunction_P15_it;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S151>/S-Function'

  boolean_T SFunction_P4_hs;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T SFunction_P9_gd;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T SFunction_P10_bx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T SFunction_P15_jg;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S153>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S86>/CLK1'

  boolean_T CLK1_P3_d;                 // Expression: boolean(var_freq)
                                          //  Referenced by: '<S91>/CLK1'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S463>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S463>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S463>/S-Function'

  boolean_T SFunction_P16_fp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S463>/S-Function'

};

// Real-time Model Data Structure
struct tag_RTM_imperix_foc_ctrl_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_imperix_foc_ctrl_T imperix_foc_ctrl_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_imperix_foc_ctrl_T imperix_foc_ctrl_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_imperix_foc_ctrl_T imperix_foc_ctrl_DW;

// Zero-crossing (trigger) state
extern PrevZCX_imperix_foc_ctrl_T imperix_foc_ctrl_PrevZCX;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void imperix_foc_ctrl_initialize(void);
  extern void imperix_foc_ctrl_step(void);
  extern void imperix_foc_ctrl_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_imperix_foc_ctrl_T *const imperix_foc_ctrl_M;

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
//  Block '<S272>/Gain3' : Unused code path elimination
//  Block '<S276>/Fcn' : Unused code path elimination
//  Block '<S276>/Fcn1' : Unused code path elimination
//  Block '<S277>/Fcn' : Unused code path elimination
//  Block '<S277>/Fcn1' : Unused code path elimination
//  Block '<S273>/Switch' : Unused code path elimination
//  Block '<S52>/Gain1' : Unused code path elimination
//  Block '<S11>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S260>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S261>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S262>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S263>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S391>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S392>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S393>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S394>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S409>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S410>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S411>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S412>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S421>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S422>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S423>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S424>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S433>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S434>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S435>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S436>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S446>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S447>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S448>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S449>/Data Type Conversion3' : Eliminate redundant data type conversion


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
//  '<Root>' : 'imperix_foc_ctrl'
//  '<S1>'   : 'imperix_foc_ctrl/Closed_loop_control'
//  '<S2>'   : 'imperix_foc_ctrl/Plant_Model'
//  '<S3>'   : 'imperix_foc_ctrl/Closed_loop_control/ADC2'
//  '<S4>'   : 'imperix_foc_ctrl/Closed_loop_control/ADC22'
//  '<S5>'   : 'imperix_foc_ctrl/Closed_loop_control/ADC23'
//  '<S6>'   : 'imperix_foc_ctrl/Closed_loop_control/ADC24'
//  '<S7>'   : 'imperix_foc_ctrl/Closed_loop_control/ADC25'
//  '<S8>'   : 'imperix_foc_ctrl/Closed_loop_control/ADC26'
//  '<S9>'   : 'imperix_foc_ctrl/Closed_loop_control/ADC27'
//  '<S10>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC3'
//  '<S11>'  : 'imperix_foc_ctrl/Closed_loop_control/CLK1'
//  '<S12>'  : 'imperix_foc_ctrl/Closed_loop_control/Cluster Voltage Mapping'
//  '<S13>'  : 'imperix_foc_ctrl/Closed_loop_control/Configuration'
//  '<S14>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC10'
//  '<S15>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC11'
//  '<S16>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC6'
//  '<S17>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC7'
//  '<S18>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC8'
//  '<S19>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC9'
//  '<S20>'  : 'imperix_foc_ctrl/Closed_loop_control/IM references'
//  '<S21>'  : 'imperix_foc_ctrl/Closed_loop_control/Kalman Filter'
//  '<S22>'  : 'imperix_foc_ctrl/Closed_loop_control/Modulation index'
//  '<S23>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe1'
//  '<S24>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe13'
//  '<S25>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe14'
//  '<S26>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe18'
//  '<S27>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe2'
//  '<S28>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe23'
//  '<S29>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe24'
//  '<S30>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe25'
//  '<S31>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe26'
//  '<S32>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe27'
//  '<S33>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe28'
//  '<S34>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe29'
//  '<S35>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe3'
//  '<S36>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe30'
//  '<S37>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe33'
//  '<S38>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe34'
//  '<S39>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe35'
//  '<S40>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe36'
//  '<S41>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe37'
//  '<S42>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe4'
//  '<S43>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe5'
//  '<S44>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe6'
//  '<S45>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe7'
//  '<S46>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe8'
//  '<S47>'  : 'imperix_foc_ctrl/Closed_loop_control/Probe9'
//  '<S48>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem'
//  '<S49>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1'
//  '<S50>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem10'
//  '<S51>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem11'
//  '<S52>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19'
//  '<S53>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2'
//  '<S54>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem22'
//  '<S55>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem26'
//  '<S56>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3'
//  '<S57>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4'
//  '<S58>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5'
//  '<S59>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem6'
//  '<S60>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem8'
//  '<S61>'  : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9'
//  '<S62>'  : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S63>'  : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter11'
//  '<S64>'  : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S65>'  : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S66>'  : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter5'
//  '<S67>'  : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter6'
//  '<S68>'  : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter8'
//  '<S69>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC2/sub'
//  '<S70>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC2/sub/generation'
//  '<S71>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC22/sub'
//  '<S72>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC22/sub/generation'
//  '<S73>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC23/sub'
//  '<S74>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC23/sub/generation'
//  '<S75>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC24/sub'
//  '<S76>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC24/sub/generation'
//  '<S77>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC25/sub'
//  '<S78>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC25/sub/generation'
//  '<S79>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC26/sub'
//  '<S80>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC26/sub/generation'
//  '<S81>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC27/sub'
//  '<S82>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC27/sub/generation'
//  '<S83>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC3/sub'
//  '<S84>'  : 'imperix_foc_ctrl/Closed_loop_control/ADC3/sub/generation'
//  '<S85>'  : 'imperix_foc_ctrl/Closed_loop_control/CLK1/sub'
//  '<S86>'  : 'imperix_foc_ctrl/Closed_loop_control/CLK1/sub/generation'
//  '<S87>'  : 'imperix_foc_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S88>'  : 'imperix_foc_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S89>'  : 'imperix_foc_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S90>'  : 'imperix_foc_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S91>'  : 'imperix_foc_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S92>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC10/sub'
//  '<S93>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC10/sub/generation'
//  '<S94>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC11/sub'
//  '<S95>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC11/sub/generation'
//  '<S96>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC6/sub'
//  '<S97>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC6/sub/generation'
//  '<S98>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC7/sub'
//  '<S99>'  : 'imperix_foc_ctrl/Closed_loop_control/DAC7/sub/generation'
//  '<S100>' : 'imperix_foc_ctrl/Closed_loop_control/DAC8/sub'
//  '<S101>' : 'imperix_foc_ctrl/Closed_loop_control/DAC8/sub/generation'
//  '<S102>' : 'imperix_foc_ctrl/Closed_loop_control/DAC9/sub'
//  '<S103>' : 'imperix_foc_ctrl/Closed_loop_control/DAC9/sub/generation'
//  '<S104>' : 'imperix_foc_ctrl/Closed_loop_control/Probe1/sub'
//  '<S105>' : 'imperix_foc_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S106>' : 'imperix_foc_ctrl/Closed_loop_control/Probe13/sub'
//  '<S107>' : 'imperix_foc_ctrl/Closed_loop_control/Probe13/sub/generation'
//  '<S108>' : 'imperix_foc_ctrl/Closed_loop_control/Probe14/sub'
//  '<S109>' : 'imperix_foc_ctrl/Closed_loop_control/Probe14/sub/generation'
//  '<S110>' : 'imperix_foc_ctrl/Closed_loop_control/Probe18/sub'
//  '<S111>' : 'imperix_foc_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S112>' : 'imperix_foc_ctrl/Closed_loop_control/Probe2/sub'
//  '<S113>' : 'imperix_foc_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S114>' : 'imperix_foc_ctrl/Closed_loop_control/Probe23/sub'
//  '<S115>' : 'imperix_foc_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S116>' : 'imperix_foc_ctrl/Closed_loop_control/Probe24/sub'
//  '<S117>' : 'imperix_foc_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S118>' : 'imperix_foc_ctrl/Closed_loop_control/Probe25/sub'
//  '<S119>' : 'imperix_foc_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S120>' : 'imperix_foc_ctrl/Closed_loop_control/Probe26/sub'
//  '<S121>' : 'imperix_foc_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S122>' : 'imperix_foc_ctrl/Closed_loop_control/Probe27/sub'
//  '<S123>' : 'imperix_foc_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S124>' : 'imperix_foc_ctrl/Closed_loop_control/Probe28/sub'
//  '<S125>' : 'imperix_foc_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S126>' : 'imperix_foc_ctrl/Closed_loop_control/Probe29/sub'
//  '<S127>' : 'imperix_foc_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S128>' : 'imperix_foc_ctrl/Closed_loop_control/Probe3/sub'
//  '<S129>' : 'imperix_foc_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S130>' : 'imperix_foc_ctrl/Closed_loop_control/Probe30/sub'
//  '<S131>' : 'imperix_foc_ctrl/Closed_loop_control/Probe30/sub/generation'
//  '<S132>' : 'imperix_foc_ctrl/Closed_loop_control/Probe33/sub'
//  '<S133>' : 'imperix_foc_ctrl/Closed_loop_control/Probe33/sub/generation'
//  '<S134>' : 'imperix_foc_ctrl/Closed_loop_control/Probe34/sub'
//  '<S135>' : 'imperix_foc_ctrl/Closed_loop_control/Probe34/sub/generation'
//  '<S136>' : 'imperix_foc_ctrl/Closed_loop_control/Probe35/sub'
//  '<S137>' : 'imperix_foc_ctrl/Closed_loop_control/Probe35/sub/generation'
//  '<S138>' : 'imperix_foc_ctrl/Closed_loop_control/Probe36/sub'
//  '<S139>' : 'imperix_foc_ctrl/Closed_loop_control/Probe36/sub/generation'
//  '<S140>' : 'imperix_foc_ctrl/Closed_loop_control/Probe37/sub'
//  '<S141>' : 'imperix_foc_ctrl/Closed_loop_control/Probe37/sub/generation'
//  '<S142>' : 'imperix_foc_ctrl/Closed_loop_control/Probe4/sub'
//  '<S143>' : 'imperix_foc_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S144>' : 'imperix_foc_ctrl/Closed_loop_control/Probe5/sub'
//  '<S145>' : 'imperix_foc_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S146>' : 'imperix_foc_ctrl/Closed_loop_control/Probe6/sub'
//  '<S147>' : 'imperix_foc_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S148>' : 'imperix_foc_ctrl/Closed_loop_control/Probe7/sub'
//  '<S149>' : 'imperix_foc_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S150>' : 'imperix_foc_ctrl/Closed_loop_control/Probe8/sub'
//  '<S151>' : 'imperix_foc_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S152>' : 'imperix_foc_ctrl/Closed_loop_control/Probe9/sub'
//  '<S153>' : 'imperix_foc_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S154>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI'
//  '<S155>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI'
//  '<S156>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup'
//  '<S157>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain'
//  '<S158>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative'
//  '<S159>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter'
//  '<S160>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs'
//  '<S161>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain'
//  '<S162>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain'
//  '<S163>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk'
//  '<S164>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator'
//  '<S165>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs'
//  '<S166>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy'
//  '<S167>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain'
//  '<S168>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy'
//  '<S169>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain'
//  '<S170>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal'
//  '<S171>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation'
//  '<S172>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk'
//  '<S173>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum'
//  '<S174>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk'
//  '<S175>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode'
//  '<S176>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum'
//  '<S177>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral'
//  '<S178>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain'
//  '<S179>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal'
//  '<S180>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal'
//  '<S181>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal'
//  '<S182>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup/Back Calculation'
//  '<S183>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain/Disabled'
//  '<S184>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative/Disabled'
//  '<S185>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter/Disabled'
//  '<S186>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs/Disabled'
//  '<S187>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain/Internal Parameters'
//  '<S188>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain/Passthrough'
//  '<S189>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S190>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator/Discrete'
//  '<S191>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs/Internal IC'
//  '<S192>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S193>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain/Disabled'
//  '<S194>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy/Disabled'
//  '<S195>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S196>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal/External Reset'
//  '<S197>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation/Enabled'
//  '<S198>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk/Disabled'
//  '<S199>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum/Sum_PI'
//  '<S200>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk/Disabled'
//  '<S201>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode/Disabled'
//  '<S202>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S203>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S204>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S205>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal/Forward_Path'
//  '<S206>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal/Internal PreInt'
//  '<S207>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal/Forward_Path'
//  '<S208>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup'
//  '<S209>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain'
//  '<S210>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative'
//  '<S211>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter'
//  '<S212>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs'
//  '<S213>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain'
//  '<S214>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain'
//  '<S215>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk'
//  '<S216>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator'
//  '<S217>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs'
//  '<S218>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy'
//  '<S219>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain'
//  '<S220>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy'
//  '<S221>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain'
//  '<S222>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal'
//  '<S223>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation'
//  '<S224>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk'
//  '<S225>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum'
//  '<S226>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk'
//  '<S227>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode'
//  '<S228>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum'
//  '<S229>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral'
//  '<S230>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain'
//  '<S231>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal'
//  '<S232>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal'
//  '<S233>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal'
//  '<S234>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup/Back Calculation'
//  '<S235>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain/Disabled'
//  '<S236>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative/Disabled'
//  '<S237>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter/Disabled'
//  '<S238>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs/Disabled'
//  '<S239>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain/Internal Parameters'
//  '<S240>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain/Passthrough'
//  '<S241>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S242>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator/Discrete'
//  '<S243>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs/Internal IC'
//  '<S244>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S245>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain/Disabled'
//  '<S246>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy/Disabled'
//  '<S247>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S248>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal/External Reset'
//  '<S249>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation/Enabled'
//  '<S250>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk/Disabled'
//  '<S251>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum/Sum_PI'
//  '<S252>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk/Disabled'
//  '<S253>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode/Disabled'
//  '<S254>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S255>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S256>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S257>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal/Forward_Path'
//  '<S258>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal/Internal PreInt'
//  '<S259>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal/Forward_Path'
//  '<S260>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S261>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S262>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S263>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S264>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S265>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S266>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S267>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S268>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S269>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S270>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S271>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S272>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem10/Alpha-Beta-Zero to abc'
//  '<S273>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero'
//  '<S274>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S275>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S276>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S277>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S278>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem11/Sample and Hold'
//  '<S279>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/Alpha-Beta-Zero to abc'
//  '<S280>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S281>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S282>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S283>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S284>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S285>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S286>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S287>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S288>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S289>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S290>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S291>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S292>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S293>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S294>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S295>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S296>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S297>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S298>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S299>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S300>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S301>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S302>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S303>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S304>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S305>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S306>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S307>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S308>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S309>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S310>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S311>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S312>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S313>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S314>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S315>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S316>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S317>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S318>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S319>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S320>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S321>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S322>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S323>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/External Reset'
//  '<S324>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S325>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S326>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S327>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S328>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S329>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S330>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S331>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S332>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S333>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S334>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S335>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S336>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S337>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S338>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S339>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S340>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S341>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S342>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S343>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S344>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S345>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S346>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S347>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S348>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S349>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S350>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S351>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S352>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S353>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S354>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S355>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S356>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S357>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S358>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S359>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S360>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S361>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S362>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S363>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S364>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S365>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S366>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S367>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S368>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S369>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S370>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S371>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S372>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S373>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S374>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S375>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/External Reset'
//  '<S376>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S377>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S378>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S379>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S380>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S381>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S382>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S383>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S384>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S385>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S386>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S387>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S388>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S389>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S390>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S391>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S392>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S393>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S394>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S395>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S396>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S397>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S398>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S399>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S400>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S401>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S402>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S403>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S404>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S405>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S406>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S407>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S408>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S409>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S410>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S411>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S412>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S413>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S414>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S415>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S416>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S417>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S418>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S419>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S420>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S421>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S422>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S423>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S424>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S425>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S426>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S427>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S428>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S429>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S430>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S431>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S432>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S433>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S434>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S435>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S436>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S437>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S438>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S439>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S440>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S441>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S442>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S443>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S444>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S445>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem8/Sample and Hold'
//  '<S446>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S447>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S448>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S449>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S450>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S451>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S452>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S453>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S454>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S455>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S456>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S457>' : 'imperix_foc_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S458>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S459>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S460>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter11/sub'
//  '<S461>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter11/sub/generation'
//  '<S462>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S463>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S464>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S465>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'
//  '<S466>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter5/sub'
//  '<S467>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter5/sub/generation'
//  '<S468>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter6/sub'
//  '<S469>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter6/sub/generation'
//  '<S470>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter8/sub'
//  '<S471>' : 'imperix_foc_ctrl/Closed_loop_control/Tunable parameter8/sub/generation'

#endif                                 // imperix_foc_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
