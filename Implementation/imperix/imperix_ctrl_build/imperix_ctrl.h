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
// Model version                  : 19.36
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Jan  8 18:39:14 2026
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

#include "rtGetInf.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

// Block signals (default storage)
struct B_imperix_ctrl_T {
  real_T TmpRTBAtSum6Inport1;          // '<S1>/Constant'
  real_T Fcn;                          // '<S504>/Fcn'
  real_T Fcn1;                         // '<S504>/Fcn1'
  real_T Fcn_c;                        // '<S503>/Fcn'
  real_T Fcn1_p;                       // '<S503>/Fcn1'
  real_T Fcn_b;                        // '<S431>/Fcn'
  real_T Fcn1_i;                       // '<S431>/Fcn1'
  real_T Fcn_d;                        // '<S430>/Fcn'
  real_T Fcn1_d;                       // '<S430>/Fcn1'
  real32_T ADC;                        // '<S88>/ADC'
  real32_T ADC_m;                      // '<S90>/ADC'
  real32_T ADC_c;                      // '<S80>/ADC'
  real32_T ADC_n;                      // '<S68>/ADC'
  real32_T ADC_g;                      // '<S82>/ADC'
  real32_T ADC_p;                      // '<S84>/ADC'
  real32_T DataTypeConversion;         // '<S205>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S207>/Data Type Conversion'
  real32_T ADC_o;                      // '<S76>/ADC'
  real32_T ADC_e;                      // '<S92>/ADC'
  real32_T ADC_l;                      // '<S70>/ADC'
  real32_T ADC_nj;                     // '<S78>/ADC'
  real32_T ADC_mz;                     // '<S72>/ADC'
  real32_T ADC_k;                      // '<S74>/ADC'
  real32_T DataTypeConversion_c;       // '<S209>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S211>/Data Type Conversion'
  real32_T ADC_f;                      // '<S86>/ADC'
  real32_T DataTypeConversion_a;       // '<S213>/Data Type Conversion'
  real32_T DataTypeConversion_cf;      // '<S215>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S217>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S219>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S221>/Data Type Conversion'
  real32_T DataTypeConversion_k1;      // '<S223>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S225>/Data Type Conversion'
  real32_T SFunction;                  // '<S560>/S-Function'
  real32_T SFunction_p;                // '<S564>/S-Function'
  real32_T DataTypeConversion_i;       // '<S227>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S229>/Data Type Conversion'
  real32_T DataTypeConversion_hg;      // '<S231>/Data Type Conversion'
  real32_T DataTypeConversion_as;      // '<S233>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S235>/Data Type Conversion'
  real32_T DataTypeConversion_il;      // '<S237>/Data Type Conversion'
  real32_T DataTypeConversion_ep;      // '<S239>/Data Type Conversion'
  real32_T DataTypeConversion_ly;      // '<S241>/Data Type Conversion'
  real32_T DataTypeConversion_hm;      // '<S243>/Data Type Conversion'
  real32_T DataTypeConversion_lx;      // '<S245>/Data Type Conversion'
  real32_T DataTypeConversion_kf;      // '<S247>/Data Type Conversion'
  real32_T DataTypeConversion_ex;      // '<S249>/Data Type Conversion'
  real32_T DataTypeConversion_p2;      // '<S251>/Data Type Conversion'
  real32_T DataTypeConversion_ok;      // '<S253>/Data Type Conversion'
  real32_T DataTypeConversion_j;       // '<S255>/Data Type Conversion'
  real32_T SFunction_c;                // '<S562>/S-Function'
  real32_T DataTypeConversion1;        // '<S308>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S308>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S308>/Data Type Conversion3'
  real32_T DataTypeConversion1_p;      // '<S309>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S309>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S309>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S310>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S310>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S310>/Data Type Conversion3'
  real32_T DataTypeConversion1_f;      // '<S311>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S311>/Data Type Conversion2'
  real32_T DataTypeConversion3_gf;     // '<S311>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S432>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S432>/Data Type Conversion2'
  real32_T DataTypeConversion3_gp;     // '<S432>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S433>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S433>/Data Type Conversion2'
  real32_T DataTypeConversion3_gl;     // '<S433>/Data Type Conversion3'
  real32_T DataTypeConversion1_po;     // '<S434>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S434>/Data Type Conversion2'
  real32_T DataTypeConversion3_m;      // '<S434>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S435>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S435>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S435>/Data Type Conversion3'
  real32_T DataTypeConversion1_h3;     // '<S505>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S505>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S505>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S506>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S506>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S506>/Data Type Conversion3'
  real32_T DataTypeConversion1_fz;     // '<S507>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S507>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S507>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S508>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S508>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S508>/Data Type Conversion3'
  real32_T DataTypeConversion1_a;      // '<S517>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S517>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S517>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S518>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S518>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S518>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S519>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S519>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S519>/Data Type Conversion3'
  real32_T DataTypeConversion1_bg;     // '<S520>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S520>/Data Type Conversion2'
  real32_T DataTypeConversion3_bs;     // '<S520>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S529>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S529>/Data Type Conversion2'
  real32_T DataTypeConversion3_bsx;    // '<S529>/Data Type Conversion3'
  real32_T DataTypeConversion1_o;      // '<S530>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S530>/Data Type Conversion2'
  real32_T DataTypeConversion3_hm;     // '<S530>/Data Type Conversion3'
  real32_T DataTypeConversion1_ay;     // '<S531>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S531>/Data Type Conversion2'
  real32_T DataTypeConversion3_ip;     // '<S531>/Data Type Conversion3'
  real32_T DataTypeConversion1_pf;     // '<S532>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S532>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S532>/Data Type Conversion3'
  real32_T DataTypeConversion1_al;     // '<S547>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S547>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S547>/Data Type Conversion3'
  real32_T DataTypeConversion1_ig;     // '<S548>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S548>/Data Type Conversion2'
  real32_T DataTypeConversion3_bt;     // '<S548>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S549>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S549>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S549>/Data Type Conversion3'
  real32_T DataTypeConversion1_gw;     // '<S550>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S550>/Data Type Conversion2'
  real32_T DataTypeConversion3_bm;     // '<S550>/Data Type Conversion3'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_ctrl_T {
  real_T SFunction_DSTATE;             // '<S205>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S207>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S209>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S211>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S213>/S-Function'
  real_T UnitDelay_DSTATE[2];          // '<S52>/Unit Delay'
  real_T SFunction_DSTATE_c;           // '<S215>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S217>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S219>/S-Function'
  real_T UnitDelay1_DSTATE;            // '<S21>/Unit Delay1'
  real_T SFunction_DSTATE_o;           // '<S221>/S-Function'
  real_T Integrator_DSTATE;            // '<S186>/Integrator'
  real_T SFunction_DSTATE_jm;          // '<S223>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S225>/S-Function'
  real_T SFunction_DSTATE_fo;          // '<S560>/S-Function'
  real_T SFunction_DSTATE_am;          // '<S564>/S-Function'
  real_T Integrator_DSTATE_d;          // '<S290>/Integrator'
  real_T Integrator_DSTATE_i;          // '<S132>/Integrator'
  real_T Integrator_DSTATE_j;          // '<S358>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S410>/Integrator'
  real_T SFunction_DSTATE_f5;          // '<S227>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S229>/S-Function'
  real_T SFunction_DSTATE_nw;          // '<S231>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S233>/S-Function'
  real_T SFunction_DSTATE_o5;          // '<S235>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S237>/S-Function'
  real_T SFunction_DSTATE_p0;          // '<S239>/S-Function'
  real_T SFunction_DSTATE_dq;          // '<S241>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S243>/S-Function'
  real_T SFunction_DSTATE_pq;          // '<S245>/S-Function'
  real_T SFunction_DSTATE_fg;          // '<S247>/S-Function'
  real_T SFunction_DSTATE_fc;          // '<S249>/S-Function'
  real_T SFunction_DSTATE_ai;          // '<S251>/S-Function'
  real_T SFunction_DSTATE_id;          // '<S253>/S-Function'
  real_T SFunction_DSTATE_pm;          // '<S255>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S562>/S-Function'
  real_T Integrator_DSTATE_p;          // '<S481>/Integrator'
  real_T SFunction_DSTATE_n5;          // '<S95>/S-Function'
  real_T TmpRTBAtSum6Inport1_Buffer0;  // synthesized block
  real_T xt_est_apriori[4];            // '<S1>/Kalman Filter'
  real_T C[8];                         // '<S1>/Kalman Filter'
  real_T Inx[4];                       // '<S1>/Kalman Filter'
  real_T F_max;                        // '<S1>/IM references'
  real_T w_max;                        // '<S1>/IM references'
  real_T F_prev;                       // '<S1>/IM references'
  real_T w_prev;                       // '<S1>/IM references'
  real_T dF;                           // '<S1>/IM references'
  real_T dw;                           // '<S1>/IM references'
  boolean_T xt_est_apriori_not_empty;  // '<S1>/Kalman Filter'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
};

// Parameters (default storage)
struct P_imperix_ctrl_T_ {
  struct_1mUndb4d19cpHVlbIkwLFC KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_WbJ8avaNECGQlGMumVRlBD CCMPC; // Variable: CCMPC
                                          //  Referenced by: '<S16>/Gain'

  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Constant'
                                          //    '<S1>/Gain'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain4'
                                          //    '<S21>/Unit Delay1'
                                          //    '<S54>/Gain1'
                                          //    '<S56>/Constant1'

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
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain5'
                                          //    '<S1>/Gain8'
                                          //    '<S1>/Gain9'
                                          //    '<S52>/Gain'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S124>/Kb'
                                          //    '<S129>/Integral Gain'
                                          //    '<S137>/Proportional Gain'
                                          //    '<S139>/Saturation'
                                          //    '<S282>/Kb'
                                          //    '<S287>/Integral Gain'
                                          //    '<S295>/Proportional Gain'
                                          //    '<S297>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S1>/Gain16'
                                          //    '<S350>/Kb'
                                          //    '<S355>/Integral Gain'
                                          //    '<S363>/Proportional Gain'
                                          //    '<S365>/Saturation'
                                          //    '<S402>/Kb'
                                          //    '<S407>/Integral Gain'
                                          //    '<S415>/Proportional Gain'
                                          //    '<S417>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S1>/Gain6'
                                          //    '<S1>/Gain7'
                                          //    '<S478>/Integral Gain'
                                          //    '<S486>/Proportional Gain'
                                          //    '<S488>/Saturation'
                                          //    '<S473>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEB;   // Variable: TEB
                                          //  Referenced by:
                                          //    '<S21>/Gain1'
                                          //    '<S21>/Gain2'
                                          //    '<S183>/Integral Gain'
                                          //    '<S191>/Proportional Gain'
                                          //    '<S193>/Saturation'
                                          //    '<S178>/DeadZone'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S499>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S323>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_h;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_h
                                  //  Referenced by: '<S542>/Constant'

  real_T PIDController1_InitialCondition;
                              // Mask Parameter: PIDController1_InitialCondition
                                 //  Referenced by: '<S186>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S290>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S132>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S358>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S410>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S481>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S501>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S502>/Constant'

  real_T CompareToConstant_const_l; // Mask Parameter: CompareToConstant_const_l
                                       //  Referenced by: '<S428>/Constant'

  real_T CompareToConstant1_const_l;
                                   // Mask Parameter: CompareToConstant1_const_l
                                      //  Referenced by: '<S429>/Constant'

  real_T CompareToConstant_const_n; // Mask Parameter: CompareToConstant_const_n
                                       //  Referenced by: '<S543>/Constant'

  real_T CompareToConstant1_const_p;
                                   // Mask Parameter: CompareToConstant1_const_p
                                      //  Referenced by: '<S544>/Constant'

  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S430>/alpha_beta'

  real_T alpha_beta_Y0_n[2];           // Expression: [0,0]
                                          //  Referenced by: '<S431>/alpha_beta'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S503>/dq'

  real_T dq_Y0_f[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S504>/dq'

  real_T alpha_beta_Y0_e[2];           // Expression: [0,0]
                                          //  Referenced by: '<S545>/alpha_beta'

  real_T alpha_beta_Y0_o[2];           // Expression: [0,0]
                                          //  Referenced by: '<S546>/alpha_beta'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S176>/Constant1'

  real_T Constant1_Value_d;            // Expression: 0
                                          //  Referenced by: '<S471>/Constant1'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S88>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S90>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S80>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S68>/ADC'

  real_T ADC_P8_m5;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S82>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S84>/ADC'

  real_T ADC_P8_lu;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S76>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S92>/ADC'

  real_T ADC_P8_o;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S70>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S78>/ADC'

  real_T ADC_P8_l2;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S72>/ADC'

  real_T ADC_P8_mv;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S74>/ADC'

  real_T ADC_P8_gp;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S86>/ADC'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S58>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S500>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S500>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S52>/Unit Delay'

  real_T TmpRTBAtSum6Inport1_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S186>/Integrator'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S560>/S-Function'

  real_T SFunction_P17_i;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S564>/S-Function'

  real_T Integrator_gainval_e;       // Computed Parameter: Integrator_gainval_e
                                        //  Referenced by: '<S290>/Integrator'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T Integrator_gainval_a;       // Computed Parameter: Integrator_gainval_a
                                        //  Referenced by: '<S132>/Integrator'

  real_T Integrator_gainval_i;       // Computed Parameter: Integrator_gainval_i
                                        //  Referenced by: '<S358>/Integrator'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S410>/Integrator'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S562>/S-Function'

  real_T Constant_Value[2];            // Expression: [0; 0]
                                          //  Referenced by: '<S16>/Constant'

  real_T Constant1_Value_n;            // Expression: 0
                                          //  Referenced by: '<S16>/Constant1'

  real_T Integrator_gainval_a3;     // Computed Parameter: Integrator_gainval_a3
                                       //  Referenced by: '<S481>/Integrator'

  real_T Gain1_Gain_m;                 // Expression: 2
                                          //  Referenced by: '<S52>/Gain1'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S176>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S308>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S309>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S310>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S311>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S432>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S433>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S434>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S435>/phase'

  real_T Clamping_zero_Value_a;        // Expression: 0
                                          //  Referenced by: '<S471>/Clamping_zero'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S505>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S506>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S507>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S508>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S517>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S518>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S519>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S520>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S529>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S530>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S531>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S532>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S547>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S548>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S549>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S550>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S313>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S313>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S313>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S317>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S317>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S317>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S319>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S319>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S319>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S437>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S437>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S437>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S439>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S439>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S439>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S441>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S441>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S441>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S443>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S443>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S443>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S510>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S510>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S510>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S512>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S512>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S512>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S514>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S514>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S514>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S516>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S516>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S516>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S522>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S522>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S522>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S524>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S524>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S524>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S528>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S528>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S528>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S534>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S534>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S534>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S536>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S536>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S536>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S558>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S558>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S558>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S90>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S90>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S80>/ADC'

  real32_T ADC_P3_p;                   // Expression: single(offset)
                                          //  Referenced by: '<S80>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P3_h;                   // Expression: single(offset)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P2_l;                   // Expression: single(gain)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P3_o;                   // Expression: single(offset)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P2_pn;                  // Expression: single(gain)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S84>/ADC'

  real32_T SFunction_P6;               // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S205>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S205>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T ADC_P2_fx;                  // Expression: single(gain)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P3_oa;                  // Expression: single(offset)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S92>/ADC'

  real32_T ADC_P3_d;                   // Expression: single(offset)
                                          //  Referenced by: '<S92>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P2_ik;                  // Expression: single(gain)
                                          //  Referenced by: '<S78>/ADC'

  real32_T ADC_P3_i;                   // Expression: single(offset)
                                          //  Referenced by: '<S78>/ADC'

  real32_T ADC_P2_i5;                  // Expression: single(gain)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P3_pf;                  // Expression: single(offset)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P2_a;                   // Expression: single(gain)
                                          //  Referenced by: '<S74>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S74>/ADC'

  real32_T Bias1_Bias[6];              // Computed Parameter: Bias1_Bias
                                          //  Referenced by: '<S1>/Bias1'

  real32_T SFunction_P6_l;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P6_gj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S86>/ADC'

  real32_T ADC_P3_di;                  // Expression: single(offset)
                                          //  Referenced by: '<S86>/ADC'

  real32_T Bias_Bias;                  // Computed Parameter: Bias_Bias
                                          //  Referenced by: '<S1>/Bias'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P12_ho;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S560>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S560>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S560>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(0)
                                          //  Referenced by: '<S560>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S560>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S564>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S564>/S-Function'

  real32_T SFunction_P5_n;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S564>/S-Function'

  real32_T SFunction_P6_jg;            // Expression: single(0)
                                          //  Referenced by: '<S564>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S564>/S-Function'

  real32_T SFunction_P6_n2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P6_c3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P6_ii;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P12_eo;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P6_iy;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P6_mc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P12_gf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P12_nf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P6_jl;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P12_jl;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P6_hb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P12_cn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P6_bm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P6_ne;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P12_fa;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P6_c0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P12_om;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P6_dm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P6_j2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P12_bv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P12_gw;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S253>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P12_kg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S255>/S-Function'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S562>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S562>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S562>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S562>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S562>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S95>/S-Function'

  real32_T SFunction_P3_m5;            // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S95>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S97>/CLK1'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S205>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S205>/S-Function'

  uint32_T SFunction_P7_e;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P7_dt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P7_k;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P13_gr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P7_dw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P7_od;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P7_ku;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P13_ar;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P7_n4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P13_bv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S560>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S564>/S-Function'

  uint32_T SFunction_P7_oc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P7_dz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P7_hw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P7_ag;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P13_fo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P13_cr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P7_p;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P13_i2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P7_ci;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P13_ig;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P7_ev;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P7_nj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P13_dz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P13_ch;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P7_da;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P7_c3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P13_a1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P7_pg;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S253>/S-Function'

  uint32_T SFunction_P7_h0;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P13_ob;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S255>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S562>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S317>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S319>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S437>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S437>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S437>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S437>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S437>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S437>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S439>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S439>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S439>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S439>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S439>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S439>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S441>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S441>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S441>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S441>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S441>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S441>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S443>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S443>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S443>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S443>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S443>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S443>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S510>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S510>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S510>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S510>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S510>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S510>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S512>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S512>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S512>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S512>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S512>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S512>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S514>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S514>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S514>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S514>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S514>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S514>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S516>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S516>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S516>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S516>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S516>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S516>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S522>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S524>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S534>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S534>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S534>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S534>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S534>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S534>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S536>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S536>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S536>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S536>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S536>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S536>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S558>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S558>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S558>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S558>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S558>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S558>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P4_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P1_h;                    // Expression: int16(channel)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P4_cw;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P1_l;                    // Expression: int16(channel)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P9_h5;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S84>/ADC'

  int16_T SFunction_P2_p;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S205>/S-Function'

  int16_T SFunction_P3_h;              // Expression: int16(0)
                                          //  Referenced by: '<S205>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T ADC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P1_d;                    // Expression: int16(channel)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P4_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P6_ah;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P9_lj;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P1_pn;                   // Expression: int16(channel)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P4_ah;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P6_am;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P4_al;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P6_b;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P9_j;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P9_i;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S74>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P2_nm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T SFunction_P3_j;              // Expression: int16(0)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P9_l0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S86>/ADC'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P3_k;              // Expression: int16(0)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P2_a1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P3_ks;             // Expression: int16(0)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P3_e5;             // Expression: int16(0)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P3_jt;             // Expression: int16(0)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P2_i2;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S560>/S-Function'

  int16_T SFunction_P2_ao;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S564>/S-Function'

  int16_T SFunction_P2_go;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P3_kv;             // Expression: int16(0)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P2_k3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P3_fc;             // Expression: int16(0)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P3_fq;             // Expression: int16(0)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P2_mq;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P3_nu;             // Expression: int16(0)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P2_cm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P3_ig;             // Expression: int16(0)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P2_oi;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P3_kk;             // Expression: int16(0)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P3_ih;             // Expression: int16(0)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P2_mc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P3_ho;             // Expression: int16(0)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P2_fe;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P3_hl;             // Expression: int16(0)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P2_ni;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P3_ba;             // Expression: int16(0)
                                          //  Referenced by: '<S253>/S-Function'

  int16_T SFunction_P2_ag;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P3_nl;             // Expression: int16(0)
                                          //  Referenced by: '<S255>/S-Function'

  int16_T SFunction_P2_m0;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S562>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S97>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S97>/CLK1'

  uint16_T SFunction_P1[3];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P5_p;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P14[5];           // Computed Parameter: SFunction_P14
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P1_o[3];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P1_f[3];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P1_g[3];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P8_dm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P14_k[5];         // Computed Parameter: SFunction_P14_k
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P1_p[4];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P5_kp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P8_de;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P11_pl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P14_l4[5];        // Computed Parameter: SFunction_P14_l4
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P1_pv[6];         // Computed Parameter: SFunction_P1_pv
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P1_lq[4];         // Computed Parameter: SFunction_P1_lq
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P14_j[5];         // Computed Parameter: SFunction_P14_j
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P1_fh[2];         // Computed Parameter: SFunction_P1_fh
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P11_plx;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P1_i[5];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S560>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S560>/S-Function'

  uint16_T SFunction_P11_ad;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S560>/S-Function'

  uint16_T SFunction_P14_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S560>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S560>/S-Function'

  uint16_T SFunction_P1_fw[5];         // Computed Parameter: SFunction_P1_fw
                                          //  Referenced by: '<S564>/S-Function'

  uint16_T SFunction_P9_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S564>/S-Function'

  uint16_T SFunction_P11_kg;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S564>/S-Function'

  uint16_T SFunction_P14_ie;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S564>/S-Function'

  uint16_T SFunction_P15_f;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S564>/S-Function'

  uint16_T SFunction_P1_pw[4];         // Computed Parameter: SFunction_P1_pw
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P11_kr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P14_l44[5];       // Computed Parameter: SFunction_P14_l44
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P1_mb[5];         // Computed Parameter: SFunction_P1_mb
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P5_ku;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P8_pj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P1_e[4];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P5_gl;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P8_nd;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P11_ab;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P1_a[4];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P8_gu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P14_f2[5];        // Computed Parameter: SFunction_P14_f2
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P1_eq[5];         // Computed Parameter: SFunction_P1_eq
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P5_ky;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P11_ly;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P14_im[5];        // Computed Parameter: SFunction_P14_im
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P1_mq[4];         // Computed Parameter: SFunction_P1_mq
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P5_oj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P8_kv;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P14_an[5];        // Computed Parameter: SFunction_P14_an
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P1_dd[5];         // Computed Parameter: SFunction_P1_dd
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P5_mo;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P1_h[3];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P5_g0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P8_n5;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P11_fu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P14_nl[5];        // Computed Parameter: SFunction_P14_nl
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P1_b[4];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P5_jm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P8_p1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P11_lj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P14_nj[5];        // Computed Parameter: SFunction_P14_nj
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P1_li[3];         // Computed Parameter: SFunction_P1_li
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P5_o4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P8_fj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P11_ar;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P14_e[5];         // Computed Parameter: SFunction_P14_e
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P1_if[3];         // Computed Parameter: SFunction_P1_if
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P8_fa;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P11_p3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P1_o2[3];         // Computed Parameter: SFunction_P1_o2
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P5_f0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P8_o2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P14_jj[5];        // Computed Parameter: SFunction_P14_jj
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P1_j[3];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P5_ov;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P8_n2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P11_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P14_oa[5];        // Computed Parameter: SFunction_P14_oa
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P1_fd[3];         // Computed Parameter: SFunction_P1_fd
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P5_l0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P8_jf;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P11_pu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P14_nc[5];        // Computed Parameter: SFunction_P14_nc
                                          //  Referenced by: '<S253>/S-Function'

  uint16_T SFunction_P1_ll[3];         // Computed Parameter: SFunction_P1_ll
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P5_e4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P8_fw;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P11_hl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S255>/S-Function'

  uint16_T SFunction_P1_md[6];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S562>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S562>/S-Function'

  uint16_T SFunction_P11_atz;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S562>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S562>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S562>/S-Function'

  uint16_T SFunction_P1_fdr;           // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S95>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S95>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S313>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S313>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S313>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S317>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S317>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S317>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S319>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S319>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S319>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S437>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S437>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S437>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S439>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S439>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S439>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S441>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S441>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S441>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S443>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S443>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S443>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S510>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S510>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S510>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S512>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S512>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S512>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S514>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S514>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S514>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S516>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S516>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S516>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S522>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S522>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S522>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S524>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S524>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S524>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S528>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S528>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S528>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S534>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S534>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S534>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S536>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S536>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S536>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S558>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S558>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S558>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S90>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S90>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P5_ag;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P10_n;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P4_e;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P5_ju;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S92>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S92>/ADC'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P5_av;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T ADC_P7_fr;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T ADC_P5_o;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P7_hi;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P5_n;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T ADC_P7_f0;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P9_nb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T ADC_P5_f;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T ADC_P7_fs;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T SFunction_P4_fn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P9_cs;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P4_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P10_lt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P15_hv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P4_l3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P9_lt;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P9_nf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P10_je;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P4_hz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P10_ap;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P15_af;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P4_i0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P9_ll;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P10_ju;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P15_pd;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P8_o4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S560>/S-Function'

  boolean_T SFunction_P12_fm;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S560>/S-Function'

  boolean_T SFunction_P13_ls;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S560>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S560>/S-Function'

  boolean_T SFunction_P8_i;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S564>/S-Function'

  boolean_T SFunction_P12_ls;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S564>/S-Function'

  boolean_T SFunction_P13_pl;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S564>/S-Function'

  boolean_T SFunction_P16_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S564>/S-Function'

  boolean_T SFunction_P4_hj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P10_js;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P15_a5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P10_kx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P15_mb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P4_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P9_be;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P10_lh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P4_ms;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P9_ek;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P15_gw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P4_bv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P9_ei;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P10_k3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P15_px;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P4_fs;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P9_pn;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P10_ak;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P15_f1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P4_lz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P9_lr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P10_dq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P9_is;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P10_pp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P15_aq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P4_o;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P9_mh;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P10_nw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P15_bi;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P4_e2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P9_px;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P4_fc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P9_j;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P10_ks;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P15_g2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P4_hg;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P9_g;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P4_gj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P9_p5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P10_nj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P15_po;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P4_fv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P9_bu;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P10_nk;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P15_hr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S253>/S-Function'

  boolean_T SFunction_P4_hr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P10_kw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P15_ne;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S255>/S-Function'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S562>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S562>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S562>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S562>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S97>/CLK1'

  int8_T Constant_Value_e;             // Computed Parameter: Constant_Value_e
                                          //  Referenced by: '<S176>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S176>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S176>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S176>/Constant4'

  int8_T Constant_Value_h;             // Computed Parameter: Constant_Value_h
                                          //  Referenced by: '<S471>/Constant'

  int8_T Constant2_Value_a;            // Computed Parameter: Constant2_Value_a
                                          //  Referenced by: '<S471>/Constant2'

  int8_T Constant3_Value_j;            // Computed Parameter: Constant3_Value_j
                                          //  Referenced by: '<S471>/Constant3'

  int8_T Constant4_Value_a;            // Computed Parameter: Constant4_Value_a
                                          //  Referenced by: '<S471>/Constant4'

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
//  Block '<S320>/Gain3' : Unused code path elimination
//  Block '<S54>/Gain3' : Unused code path elimination
//  Block '<S54>/Gain4' : Unused code path elimination
//  Block '<S54>/Sum3' : Unused code path elimination
//  Block '<S57>/Gain' : Unused code path elimination
//  Block '<S57>/Square' : Unused code path elimination
//  Block '<S541>/Gain3' : Unused code path elimination
//  Block '<S545>/Fcn' : Unused code path elimination
//  Block '<S545>/Fcn1' : Unused code path elimination
//  Block '<S546>/Fcn' : Unused code path elimination
//  Block '<S546>/Fcn1' : Unused code path elimination
//  Block '<S542>/Switch' : Unused code path elimination


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
//  '<S3>'   : 'imperix_ctrl/Closed_loop_control/ADC10'
//  '<S4>'   : 'imperix_ctrl/Closed_loop_control/ADC11'
//  '<S5>'   : 'imperix_ctrl/Closed_loop_control/ADC12'
//  '<S6>'   : 'imperix_ctrl/Closed_loop_control/ADC13'
//  '<S7>'   : 'imperix_ctrl/Closed_loop_control/ADC14'
//  '<S8>'   : 'imperix_ctrl/Closed_loop_control/ADC15'
//  '<S9>'   : 'imperix_ctrl/Closed_loop_control/ADC16'
//  '<S10>'  : 'imperix_ctrl/Closed_loop_control/ADC17'
//  '<S11>'  : 'imperix_ctrl/Closed_loop_control/ADC18'
//  '<S12>'  : 'imperix_ctrl/Closed_loop_control/ADC20'
//  '<S13>'  : 'imperix_ctrl/Closed_loop_control/ADC6'
//  '<S14>'  : 'imperix_ctrl/Closed_loop_control/ADC7'
//  '<S15>'  : 'imperix_ctrl/Closed_loop_control/ADC9'
//  '<S16>'  : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping'
//  '<S17>'  : 'imperix_ctrl/Closed_loop_control/Configuration'
//  '<S18>'  : 'imperix_ctrl/Closed_loop_control/Flux PI'
//  '<S19>'  : 'imperix_ctrl/Closed_loop_control/IM references'
//  '<S20>'  : 'imperix_ctrl/Closed_loop_control/Kalman Filter'
//  '<S21>'  : 'imperix_ctrl/Closed_loop_control/LPF'
//  '<S22>'  : 'imperix_ctrl/Closed_loop_control/Modulation index'
//  '<S23>'  : 'imperix_ctrl/Closed_loop_control/PID Controller1'
//  '<S24>'  : 'imperix_ctrl/Closed_loop_control/Probe'
//  '<S25>'  : 'imperix_ctrl/Closed_loop_control/Probe1'
//  '<S26>'  : 'imperix_ctrl/Closed_loop_control/Probe10'
//  '<S27>'  : 'imperix_ctrl/Closed_loop_control/Probe11'
//  '<S28>'  : 'imperix_ctrl/Closed_loop_control/Probe12'
//  '<S29>'  : 'imperix_ctrl/Closed_loop_control/Probe18'
//  '<S30>'  : 'imperix_ctrl/Closed_loop_control/Probe19'
//  '<S31>'  : 'imperix_ctrl/Closed_loop_control/Probe2'
//  '<S32>'  : 'imperix_ctrl/Closed_loop_control/Probe20'
//  '<S33>'  : 'imperix_ctrl/Closed_loop_control/Probe21'
//  '<S34>'  : 'imperix_ctrl/Closed_loop_control/Probe22'
//  '<S35>'  : 'imperix_ctrl/Closed_loop_control/Probe23'
//  '<S36>'  : 'imperix_ctrl/Closed_loop_control/Probe24'
//  '<S37>'  : 'imperix_ctrl/Closed_loop_control/Probe25'
//  '<S38>'  : 'imperix_ctrl/Closed_loop_control/Probe26'
//  '<S39>'  : 'imperix_ctrl/Closed_loop_control/Probe27'
//  '<S40>'  : 'imperix_ctrl/Closed_loop_control/Probe28'
//  '<S41>'  : 'imperix_ctrl/Closed_loop_control/Probe29'
//  '<S42>'  : 'imperix_ctrl/Closed_loop_control/Probe3'
//  '<S43>'  : 'imperix_ctrl/Closed_loop_control/Probe30'
//  '<S44>'  : 'imperix_ctrl/Closed_loop_control/Probe4'
//  '<S45>'  : 'imperix_ctrl/Closed_loop_control/Probe5'
//  '<S46>'  : 'imperix_ctrl/Closed_loop_control/Probe6'
//  '<S47>'  : 'imperix_ctrl/Closed_loop_control/Probe7'
//  '<S48>'  : 'imperix_ctrl/Closed_loop_control/Probe8'
//  '<S49>'  : 'imperix_ctrl/Closed_loop_control/Probe9'
//  '<S50>'  : 'imperix_ctrl/Closed_loop_control/Speed PI'
//  '<S51>'  : 'imperix_ctrl/Closed_loop_control/Subsystem1'
//  '<S52>'  : 'imperix_ctrl/Closed_loop_control/Subsystem19'
//  '<S53>'  : 'imperix_ctrl/Closed_loop_control/Subsystem2'
//  '<S54>'  : 'imperix_ctrl/Closed_loop_control/Subsystem20'
//  '<S55>'  : 'imperix_ctrl/Closed_loop_control/Subsystem22'
//  '<S56>'  : 'imperix_ctrl/Closed_loop_control/Subsystem23'
//  '<S57>'  : 'imperix_ctrl/Closed_loop_control/Subsystem24'
//  '<S58>'  : 'imperix_ctrl/Closed_loop_control/Subsystem26'
//  '<S59>'  : 'imperix_ctrl/Closed_loop_control/Subsystem3'
//  '<S60>'  : 'imperix_ctrl/Closed_loop_control/Subsystem4'
//  '<S61>'  : 'imperix_ctrl/Closed_loop_control/Subsystem5'
//  '<S62>'  : 'imperix_ctrl/Closed_loop_control/Subsystem7'
//  '<S63>'  : 'imperix_ctrl/Closed_loop_control/Subsystem9'
//  '<S64>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S65>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S66>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S67>'  : 'imperix_ctrl/Closed_loop_control/ADC10/sub'
//  '<S68>'  : 'imperix_ctrl/Closed_loop_control/ADC10/sub/generation'
//  '<S69>'  : 'imperix_ctrl/Closed_loop_control/ADC11/sub'
//  '<S70>'  : 'imperix_ctrl/Closed_loop_control/ADC11/sub/generation'
//  '<S71>'  : 'imperix_ctrl/Closed_loop_control/ADC12/sub'
//  '<S72>'  : 'imperix_ctrl/Closed_loop_control/ADC12/sub/generation'
//  '<S73>'  : 'imperix_ctrl/Closed_loop_control/ADC13/sub'
//  '<S74>'  : 'imperix_ctrl/Closed_loop_control/ADC13/sub/generation'
//  '<S75>'  : 'imperix_ctrl/Closed_loop_control/ADC14/sub'
//  '<S76>'  : 'imperix_ctrl/Closed_loop_control/ADC14/sub/generation'
//  '<S77>'  : 'imperix_ctrl/Closed_loop_control/ADC15/sub'
//  '<S78>'  : 'imperix_ctrl/Closed_loop_control/ADC15/sub/generation'
//  '<S79>'  : 'imperix_ctrl/Closed_loop_control/ADC16/sub'
//  '<S80>'  : 'imperix_ctrl/Closed_loop_control/ADC16/sub/generation'
//  '<S81>'  : 'imperix_ctrl/Closed_loop_control/ADC17/sub'
//  '<S82>'  : 'imperix_ctrl/Closed_loop_control/ADC17/sub/generation'
//  '<S83>'  : 'imperix_ctrl/Closed_loop_control/ADC18/sub'
//  '<S84>'  : 'imperix_ctrl/Closed_loop_control/ADC18/sub/generation'
//  '<S85>'  : 'imperix_ctrl/Closed_loop_control/ADC20/sub'
//  '<S86>'  : 'imperix_ctrl/Closed_loop_control/ADC20/sub/generation'
//  '<S87>'  : 'imperix_ctrl/Closed_loop_control/ADC6/sub'
//  '<S88>'  : 'imperix_ctrl/Closed_loop_control/ADC6/sub/generation'
//  '<S89>'  : 'imperix_ctrl/Closed_loop_control/ADC7/sub'
//  '<S90>'  : 'imperix_ctrl/Closed_loop_control/ADC7/sub/generation'
//  '<S91>'  : 'imperix_ctrl/Closed_loop_control/ADC9/sub'
//  '<S92>'  : 'imperix_ctrl/Closed_loop_control/ADC9/sub/generation'
//  '<S93>'  : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S94>'  : 'imperix_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S95>'  : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S96>'  : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S97>'  : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S98>'  : 'imperix_ctrl/Closed_loop_control/Flux PI/Anti-windup'
//  '<S99>'  : 'imperix_ctrl/Closed_loop_control/Flux PI/D Gain'
//  '<S100>' : 'imperix_ctrl/Closed_loop_control/Flux PI/External Derivative'
//  '<S101>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Filter'
//  '<S102>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Filter ICs'
//  '<S103>' : 'imperix_ctrl/Closed_loop_control/Flux PI/I Gain'
//  '<S104>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Ideal P Gain'
//  '<S105>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Ideal P Gain Fdbk'
//  '<S106>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Integrator'
//  '<S107>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Integrator ICs'
//  '<S108>' : 'imperix_ctrl/Closed_loop_control/Flux PI/N Copy'
//  '<S109>' : 'imperix_ctrl/Closed_loop_control/Flux PI/N Gain'
//  '<S110>' : 'imperix_ctrl/Closed_loop_control/Flux PI/P Copy'
//  '<S111>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Parallel P Gain'
//  '<S112>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Reset Signal'
//  '<S113>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Saturation'
//  '<S114>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Saturation Fdbk'
//  '<S115>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Sum'
//  '<S116>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Sum Fdbk'
//  '<S117>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Tracking Mode'
//  '<S118>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Tracking Mode Sum'
//  '<S119>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Tsamp - Integral'
//  '<S120>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Tsamp - Ngain'
//  '<S121>' : 'imperix_ctrl/Closed_loop_control/Flux PI/postSat Signal'
//  '<S122>' : 'imperix_ctrl/Closed_loop_control/Flux PI/preInt Signal'
//  '<S123>' : 'imperix_ctrl/Closed_loop_control/Flux PI/preSat Signal'
//  '<S124>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Anti-windup/Back Calculation'
//  '<S125>' : 'imperix_ctrl/Closed_loop_control/Flux PI/D Gain/Disabled'
//  '<S126>' : 'imperix_ctrl/Closed_loop_control/Flux PI/External Derivative/Disabled'
//  '<S127>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Filter/Disabled'
//  '<S128>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Filter ICs/Disabled'
//  '<S129>' : 'imperix_ctrl/Closed_loop_control/Flux PI/I Gain/Internal Parameters'
//  '<S130>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Ideal P Gain/Passthrough'
//  '<S131>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S132>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Integrator/Discrete'
//  '<S133>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Integrator ICs/Internal IC'
//  '<S134>' : 'imperix_ctrl/Closed_loop_control/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S135>' : 'imperix_ctrl/Closed_loop_control/Flux PI/N Gain/Disabled'
//  '<S136>' : 'imperix_ctrl/Closed_loop_control/Flux PI/P Copy/Disabled'
//  '<S137>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S138>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Reset Signal/Disabled'
//  '<S139>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Saturation/Enabled'
//  '<S140>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Saturation Fdbk/Disabled'
//  '<S141>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Sum/Sum_PI'
//  '<S142>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Sum Fdbk/Disabled'
//  '<S143>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Tracking Mode/Disabled'
//  '<S144>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S145>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S146>' : 'imperix_ctrl/Closed_loop_control/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S147>' : 'imperix_ctrl/Closed_loop_control/Flux PI/postSat Signal/Forward_Path'
//  '<S148>' : 'imperix_ctrl/Closed_loop_control/Flux PI/preInt Signal/Internal PreInt'
//  '<S149>' : 'imperix_ctrl/Closed_loop_control/Flux PI/preSat Signal/Forward_Path'
//  '<S150>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup'
//  '<S151>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain'
//  '<S152>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative'
//  '<S153>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter'
//  '<S154>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs'
//  '<S155>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain'
//  '<S156>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain'
//  '<S157>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk'
//  '<S158>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator'
//  '<S159>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs'
//  '<S160>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy'
//  '<S161>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain'
//  '<S162>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy'
//  '<S163>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain'
//  '<S164>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal'
//  '<S165>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation'
//  '<S166>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk'
//  '<S167>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum'
//  '<S168>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk'
//  '<S169>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode'
//  '<S170>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum'
//  '<S171>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral'
//  '<S172>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain'
//  '<S173>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal'
//  '<S174>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal'
//  '<S175>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal'
//  '<S176>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel'
//  '<S177>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S178>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S179>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain/Disabled'
//  '<S180>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative/Disabled'
//  '<S181>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter/Disabled'
//  '<S182>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs/Disabled'
//  '<S183>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain/Internal Parameters'
//  '<S184>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain/Passthrough'
//  '<S185>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S186>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator/Discrete'
//  '<S187>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs/Internal IC'
//  '<S188>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S189>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain/Disabled'
//  '<S190>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy/Disabled'
//  '<S191>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S192>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal/Disabled'
//  '<S193>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation/Enabled'
//  '<S194>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk/Disabled'
//  '<S195>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum/Sum_PI'
//  '<S196>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk/Disabled'
//  '<S197>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode/Disabled'
//  '<S198>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S199>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S200>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S201>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal/Forward_Path'
//  '<S202>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal/Internal PreInt'
//  '<S203>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal/Forward_Path'
//  '<S204>' : 'imperix_ctrl/Closed_loop_control/Probe/sub'
//  '<S205>' : 'imperix_ctrl/Closed_loop_control/Probe/sub/generation'
//  '<S206>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub'
//  '<S207>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S208>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub'
//  '<S209>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub/generation'
//  '<S210>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub'
//  '<S211>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub/generation'
//  '<S212>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub'
//  '<S213>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S214>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub'
//  '<S215>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S216>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub'
//  '<S217>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub/generation'
//  '<S218>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub'
//  '<S219>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S220>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub'
//  '<S221>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub/generation'
//  '<S222>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub'
//  '<S223>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub/generation'
//  '<S224>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub'
//  '<S225>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub/generation'
//  '<S226>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub'
//  '<S227>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S228>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub'
//  '<S229>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S230>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub'
//  '<S231>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S232>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub'
//  '<S233>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S234>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub'
//  '<S235>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S236>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub'
//  '<S237>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S238>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub'
//  '<S239>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S240>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub'
//  '<S241>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S242>' : 'imperix_ctrl/Closed_loop_control/Probe30/sub'
//  '<S243>' : 'imperix_ctrl/Closed_loop_control/Probe30/sub/generation'
//  '<S244>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub'
//  '<S245>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S246>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub'
//  '<S247>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S248>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub'
//  '<S249>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S250>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub'
//  '<S251>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S252>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub'
//  '<S253>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S254>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub'
//  '<S255>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S256>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Anti-windup'
//  '<S257>' : 'imperix_ctrl/Closed_loop_control/Speed PI/D Gain'
//  '<S258>' : 'imperix_ctrl/Closed_loop_control/Speed PI/External Derivative'
//  '<S259>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Filter'
//  '<S260>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Filter ICs'
//  '<S261>' : 'imperix_ctrl/Closed_loop_control/Speed PI/I Gain'
//  '<S262>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Ideal P Gain'
//  '<S263>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Ideal P Gain Fdbk'
//  '<S264>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Integrator'
//  '<S265>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Integrator ICs'
//  '<S266>' : 'imperix_ctrl/Closed_loop_control/Speed PI/N Copy'
//  '<S267>' : 'imperix_ctrl/Closed_loop_control/Speed PI/N Gain'
//  '<S268>' : 'imperix_ctrl/Closed_loop_control/Speed PI/P Copy'
//  '<S269>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Parallel P Gain'
//  '<S270>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Reset Signal'
//  '<S271>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Saturation'
//  '<S272>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Saturation Fdbk'
//  '<S273>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Sum'
//  '<S274>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Sum Fdbk'
//  '<S275>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Tracking Mode'
//  '<S276>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Tracking Mode Sum'
//  '<S277>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Tsamp - Integral'
//  '<S278>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Tsamp - Ngain'
//  '<S279>' : 'imperix_ctrl/Closed_loop_control/Speed PI/postSat Signal'
//  '<S280>' : 'imperix_ctrl/Closed_loop_control/Speed PI/preInt Signal'
//  '<S281>' : 'imperix_ctrl/Closed_loop_control/Speed PI/preSat Signal'
//  '<S282>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Anti-windup/Back Calculation'
//  '<S283>' : 'imperix_ctrl/Closed_loop_control/Speed PI/D Gain/Disabled'
//  '<S284>' : 'imperix_ctrl/Closed_loop_control/Speed PI/External Derivative/Disabled'
//  '<S285>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Filter/Disabled'
//  '<S286>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Filter ICs/Disabled'
//  '<S287>' : 'imperix_ctrl/Closed_loop_control/Speed PI/I Gain/Internal Parameters'
//  '<S288>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Ideal P Gain/Passthrough'
//  '<S289>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S290>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Integrator/Discrete'
//  '<S291>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Integrator ICs/Internal IC'
//  '<S292>' : 'imperix_ctrl/Closed_loop_control/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S293>' : 'imperix_ctrl/Closed_loop_control/Speed PI/N Gain/Disabled'
//  '<S294>' : 'imperix_ctrl/Closed_loop_control/Speed PI/P Copy/Disabled'
//  '<S295>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S296>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Reset Signal/Disabled'
//  '<S297>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Saturation/Enabled'
//  '<S298>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Saturation Fdbk/Disabled'
//  '<S299>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Sum/Sum_PI'
//  '<S300>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Sum Fdbk/Disabled'
//  '<S301>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Tracking Mode/Disabled'
//  '<S302>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S303>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S304>' : 'imperix_ctrl/Closed_loop_control/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S305>' : 'imperix_ctrl/Closed_loop_control/Speed PI/postSat Signal/Forward_Path'
//  '<S306>' : 'imperix_ctrl/Closed_loop_control/Speed PI/preInt Signal/Internal PreInt'
//  '<S307>' : 'imperix_ctrl/Closed_loop_control/Speed PI/preSat Signal/Forward_Path'
//  '<S308>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S309>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S310>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S311>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S312>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S313>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S314>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S315>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S316>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S317>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S318>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S319>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S320>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/Alpha-Beta-Zero to abc'
//  '<S321>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S322>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S323>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S324>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S325>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S326>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S327>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S328>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S329>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S330>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S331>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S332>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S333>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S334>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S335>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S336>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S337>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S338>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S339>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S340>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S341>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S342>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S343>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S344>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S345>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S346>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S347>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S348>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S349>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S350>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S351>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S352>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S353>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S354>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S355>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S356>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S357>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S358>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S359>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S360>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S361>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S362>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S363>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S364>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/Disabled'
//  '<S365>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S366>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S367>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S368>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S369>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S370>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S371>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S372>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S373>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S374>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S375>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S376>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S377>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S378>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S379>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S380>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S381>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S382>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S383>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S384>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S385>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S386>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S387>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S388>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S389>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S390>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S391>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S392>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S393>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S394>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S395>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S396>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S397>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S398>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S399>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S400>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S401>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S402>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S403>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S404>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S405>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S406>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S407>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S408>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S409>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S410>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S411>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S412>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S413>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S414>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S415>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S416>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/Disabled'
//  '<S417>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S418>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S419>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S420>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S421>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S422>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S423>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S424>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S425>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S426>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S427>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S428>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S429>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S430>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S431>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S432>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S433>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S434>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S435>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S436>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S437>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S438>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S439>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S440>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S441>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S442>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S443>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S444>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI'
//  '<S445>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup'
//  '<S446>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain'
//  '<S447>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative'
//  '<S448>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter'
//  '<S449>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs'
//  '<S450>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain'
//  '<S451>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain'
//  '<S452>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk'
//  '<S453>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator'
//  '<S454>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs'
//  '<S455>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy'
//  '<S456>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain'
//  '<S457>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy'
//  '<S458>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain'
//  '<S459>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal'
//  '<S460>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation'
//  '<S461>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk'
//  '<S462>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum'
//  '<S463>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk'
//  '<S464>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode'
//  '<S465>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum'
//  '<S466>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral'
//  '<S467>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain'
//  '<S468>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal'
//  '<S469>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal'
//  '<S470>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal'
//  '<S471>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S472>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S473>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S474>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain/Disabled'
//  '<S475>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative/Disabled'
//  '<S476>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter/Disabled'
//  '<S477>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs/Disabled'
//  '<S478>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain/Internal Parameters'
//  '<S479>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain/Passthrough'
//  '<S480>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S481>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator/Discrete'
//  '<S482>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs/Internal IC'
//  '<S483>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S484>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain/Disabled'
//  '<S485>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy/Disabled'
//  '<S486>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S487>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal/Disabled'
//  '<S488>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation/Enabled'
//  '<S489>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk/Disabled'
//  '<S490>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum/Sum_PI'
//  '<S491>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk/Disabled'
//  '<S492>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode/Disabled'
//  '<S493>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S494>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S495>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S496>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal/Forward_Path'
//  '<S497>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal/Internal PreInt'
//  '<S498>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal/Forward_Path'
//  '<S499>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S500>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S501>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S502>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S503>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S504>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S505>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S506>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S507>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S508>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S509>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S510>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S511>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S512>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S513>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S514>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S515>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S516>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S517>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S518>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S519>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S520>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S521>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S522>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S523>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S524>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S525>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S526>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S527>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S528>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S529>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S530>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S531>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S532>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S533>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S534>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S535>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S536>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S537>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S538>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S539>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S540>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S541>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/Alpha-Beta-Zero to abc'
//  '<S542>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero'
//  '<S543>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S544>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S545>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S546>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S547>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S548>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S549>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S550>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S551>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S552>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S553>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S554>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S555>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S556>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S557>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S558>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S559>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S560>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S561>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S562>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S563>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S564>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'

#endif                                 // imperix_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
