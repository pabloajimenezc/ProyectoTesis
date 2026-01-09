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
// Model version                  : 19.45
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Fri Jan  9 15:45:39 2026
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

// Block signals (default storage)
struct B_imperix_ctrl_T {
  real_T TmpRTBAtSum6Inport1;          // '<S1>/Constant'
  real_T Fcn;                          // '<S520>/Fcn'
  real_T Fcn1;                         // '<S520>/Fcn1'
  real_T Fcn_c;                        // '<S519>/Fcn'
  real_T Fcn1_p;                       // '<S519>/Fcn1'
  real_T Fcn_b;                        // '<S447>/Fcn'
  real_T Fcn1_i;                       // '<S447>/Fcn1'
  real_T Fcn_d;                        // '<S446>/Fcn'
  real_T Fcn1_d;                       // '<S446>/Fcn1'
  real32_T ADC;                        // '<S94>/ADC'
  real32_T ADC_m;                      // '<S96>/ADC'
  real32_T ADC_c;                      // '<S86>/ADC'
  real32_T ADC_n;                      // '<S74>/ADC'
  real32_T ADC_g;                      // '<S88>/ADC'
  real32_T ADC_p;                      // '<S90>/ADC'
  real32_T DataTypeConversion;         // '<S159>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S161>/Data Type Conversion'
  real32_T ADC_o;                      // '<S82>/ADC'
  real32_T ADC_e;                      // '<S98>/ADC'
  real32_T ADC_l;                      // '<S76>/ADC'
  real32_T ADC_nj;                     // '<S84>/ADC'
  real32_T ADC_mz;                     // '<S78>/ADC'
  real32_T ADC_k;                      // '<S80>/ADC'
  real32_T DataTypeConversion_c;       // '<S163>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S165>/Data Type Conversion'
  real32_T ADC_f;                      // '<S92>/ADC'
  real32_T DataTypeConversion_a;       // '<S167>/Data Type Conversion'
  real32_T SFunction;                  // '<S582>/S-Function'
  real32_T SFunction_d;                // '<S584>/S-Function'
  real32_T DataTypeConversion_cf;      // '<S169>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S171>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S173>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S175>/Data Type Conversion'
  real32_T DataTypeConversion_k1;      // '<S177>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S179>/Data Type Conversion'
  real32_T SFunction_i;                // '<S576>/S-Function'
  real32_T SFunction_p;                // '<S580>/S-Function'
  real32_T SFunction_h;                // '<S586>/S-Function'
  real32_T DataTypeConversion_i;       // '<S181>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S183>/Data Type Conversion'
  real32_T DataTypeConversion_hg;      // '<S185>/Data Type Conversion'
  real32_T DataTypeConversion_as;      // '<S187>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S189>/Data Type Conversion'
  real32_T DataTypeConversion_il;      // '<S191>/Data Type Conversion'
  real32_T DataTypeConversion_ep;      // '<S193>/Data Type Conversion'
  real32_T DataTypeConversion_ly;      // '<S195>/Data Type Conversion'
  real32_T DataTypeConversion_hm;      // '<S197>/Data Type Conversion'
  real32_T DataTypeConversion_fv;      // '<S199>/Data Type Conversion'
  real32_T DataTypeConversion_nx;      // '<S201>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S203>/Data Type Conversion'
  real32_T DataTypeConversion_of;      // '<S205>/Data Type Conversion'
  real32_T DataTypeConversion_lx;      // '<S207>/Data Type Conversion'
  real32_T DataTypeConversion_kf;      // '<S209>/Data Type Conversion'
  real32_T DataTypeConversion_ex;      // '<S211>/Data Type Conversion'
  real32_T DataTypeConversion_p2;      // '<S213>/Data Type Conversion'
  real32_T DataTypeConversion_ok;      // '<S215>/Data Type Conversion'
  real32_T DataTypeConversion_j;       // '<S217>/Data Type Conversion'
  real32_T SFunction_c;                // '<S578>/S-Function'
  real32_T DataTypeConversion1;        // '<S324>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S324>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S324>/Data Type Conversion3'
  real32_T DataTypeConversion1_p;      // '<S325>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S325>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S325>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S326>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S326>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S326>/Data Type Conversion3'
  real32_T DataTypeConversion1_f;      // '<S327>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S327>/Data Type Conversion2'
  real32_T DataTypeConversion3_gf;     // '<S327>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S448>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S448>/Data Type Conversion2'
  real32_T DataTypeConversion3_gp;     // '<S448>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S449>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S449>/Data Type Conversion2'
  real32_T DataTypeConversion3_gl;     // '<S449>/Data Type Conversion3'
  real32_T DataTypeConversion1_po;     // '<S450>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S450>/Data Type Conversion2'
  real32_T DataTypeConversion3_m;      // '<S450>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S451>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S451>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S451>/Data Type Conversion3'
  real32_T DataTypeConversion1_h3;     // '<S521>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S521>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S521>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S522>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S522>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S522>/Data Type Conversion3'
  real32_T DataTypeConversion1_fz;     // '<S523>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S523>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S523>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S524>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S524>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S524>/Data Type Conversion3'
  real32_T DataTypeConversion1_a;      // '<S533>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S533>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S533>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S534>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S534>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S534>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S535>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S535>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S535>/Data Type Conversion3'
  real32_T DataTypeConversion1_bg;     // '<S536>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S536>/Data Type Conversion2'
  real32_T DataTypeConversion3_bs;     // '<S536>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S545>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S545>/Data Type Conversion2'
  real32_T DataTypeConversion3_bsx;    // '<S545>/Data Type Conversion3'
  real32_T DataTypeConversion1_o;      // '<S546>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S546>/Data Type Conversion2'
  real32_T DataTypeConversion3_hm;     // '<S546>/Data Type Conversion3'
  real32_T DataTypeConversion1_ay;     // '<S547>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S547>/Data Type Conversion2'
  real32_T DataTypeConversion3_ip;     // '<S547>/Data Type Conversion3'
  real32_T DataTypeConversion1_pf;     // '<S548>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S548>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S548>/Data Type Conversion3'
  real32_T DataTypeConversion1_al;     // '<S563>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S563>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S563>/Data Type Conversion3'
  real32_T DataTypeConversion1_ig;     // '<S564>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S564>/Data Type Conversion2'
  real32_T DataTypeConversion3_bt;     // '<S564>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S565>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S565>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S565>/Data Type Conversion3'
  real32_T DataTypeConversion1_gw;     // '<S566>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S566>/Data Type Conversion2'
  real32_T DataTypeConversion3_bm;     // '<S566>/Data Type Conversion3'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_ctrl_T {
  real_T SFunction_DSTATE;             // '<S159>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S161>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S163>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S165>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S167>/S-Function'
  real_T UnitDelay_DSTATE[2];          // '<S55>/Unit Delay'
  real_T SFunction_DSTATE_b;           // '<S582>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S584>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S169>/S-Function'
  real_T SFunction_DSTATE_ih;          // '<S171>/S-Function'
  real_T SFunction_DSTATE_bm;          // '<S173>/S-Function'
  real_T UnitDelay1_DSTATE;            // '<S20>/Unit Delay1'
  real_T SFunction_DSTATE_o;           // '<S175>/S-Function'
  real_T Integrator_DSTATE;            // '<S140>/Integrator'
  real_T SFunction_DSTATE_jm;          // '<S177>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S179>/S-Function'
  real_T SFunction_DSTATE_fo;          // '<S576>/S-Function'
  real_T SFunction_DSTATE_am;          // '<S580>/S-Function'
  real_T Integrator_DSTATE_d;          // '<S306>/Integrator'
  real_T Integrator_DSTATE_i;          // '<S254>/Integrator'
  real_T SFunction_DSTATE_iz;          // '<S586>/S-Function'
  real_T Integrator_DSTATE_j;          // '<S374>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S426>/Integrator'
  real_T SFunction_DSTATE_f5;          // '<S181>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S183>/S-Function'
  real_T SFunction_DSTATE_nw;          // '<S185>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S187>/S-Function'
  real_T SFunction_DSTATE_o5;          // '<S189>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S191>/S-Function'
  real_T SFunction_DSTATE_p0;          // '<S193>/S-Function'
  real_T SFunction_DSTATE_dq;          // '<S195>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S197>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S199>/S-Function'
  real_T SFunction_DSTATE_pb;          // '<S201>/S-Function'
  real_T SFunction_DSTATE_dh;          // '<S203>/S-Function'
  real_T SFunction_DSTATE_gh;          // '<S205>/S-Function'
  real_T SFunction_DSTATE_pq;          // '<S207>/S-Function'
  real_T SFunction_DSTATE_fg;          // '<S209>/S-Function'
  real_T SFunction_DSTATE_fc;          // '<S211>/S-Function'
  real_T SFunction_DSTATE_ai;          // '<S213>/S-Function'
  real_T SFunction_DSTATE_id;          // '<S215>/S-Function'
  real_T SFunction_DSTATE_pm;          // '<S217>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S578>/S-Function'
  real_T Integrator_DSTATE_p;          // '<S497>/Integrator'
  real_T SFunction_DSTATE_n5;          // '<S101>/S-Function'
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
  int8_T Integrator_PrevResetState;    // '<S374>/Integrator'
  int8_T Integrator_PrevResetState_i;  // '<S426>/Integrator'
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
                                          //    '<S20>/Unit Delay1'
                                          //    '<S57>/Gain1'
                                          //    '<S59>/Constant1'

  struct_ufhp0dPGHTdMqEr0nhHoeE IM;    // Variable: IM
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
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain5'
                                          //    '<S1>/Gain8'
                                          //    '<S1>/Gain9'
                                          //    '<S53>/isdN'
                                          //    '<S55>/Gain'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S246>/Kb'
                                          //    '<S251>/Integral Gain'
                                          //    '<S259>/Proportional Gain'
                                          //    '<S261>/Saturation'
                                          //    '<S298>/Kb'
                                          //    '<S303>/Integral Gain'
                                          //    '<S311>/Proportional Gain'
                                          //    '<S313>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S1>/Gain16'
                                          //    '<S366>/Kb'
                                          //    '<S371>/Integral Gain'
                                          //    '<S379>/Proportional Gain'
                                          //    '<S381>/Saturation'
                                          //    '<S418>/Kb'
                                          //    '<S423>/Integral Gain'
                                          //    '<S431>/Proportional Gain'
                                          //    '<S433>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S1>/Gain6'
                                          //    '<S1>/Gain7'
                                          //    '<S494>/Integral Gain'
                                          //    '<S502>/Proportional Gain'
                                          //    '<S504>/Saturation'
                                          //    '<S489>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEB;   // Variable: TEB
                                          //  Referenced by:
                                          //    '<S20>/Gain1'
                                          //    '<S20>/Gain2'
                                          //    '<S137>/Integral Gain'
                                          //    '<S145>/Proportional Gain'
                                          //    '<S147>/Saturation'
                                          //    '<S132>/DeadZone'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S515>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S339>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_h;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_h
                                  //  Referenced by: '<S558>/Constant'

  real_T PIDController1_InitialCondition;
                              // Mask Parameter: PIDController1_InitialCondition
                                 //  Referenced by: '<S140>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S306>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S254>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S374>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S426>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S497>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S517>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S518>/Constant'

  real_T CompareToConstant_const_l; // Mask Parameter: CompareToConstant_const_l
                                       //  Referenced by: '<S444>/Constant'

  real_T CompareToConstant1_const_l;
                                   // Mask Parameter: CompareToConstant1_const_l
                                      //  Referenced by: '<S445>/Constant'

  real_T CompareToConstant_const_n; // Mask Parameter: CompareToConstant_const_n
                                       //  Referenced by: '<S559>/Constant'

  real_T CompareToConstant1_const_p;
                                   // Mask Parameter: CompareToConstant1_const_p
                                      //  Referenced by: '<S560>/Constant'

  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S446>/alpha_beta'

  real_T alpha_beta_Y0_n[2];           // Expression: [0,0]
                                          //  Referenced by: '<S447>/alpha_beta'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S519>/dq'

  real_T dq_Y0_f[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S520>/dq'

  real_T alpha_beta_Y0_e[2];           // Expression: [0,0]
                                          //  Referenced by: '<S561>/alpha_beta'

  real_T alpha_beta_Y0_o[2];           // Expression: [0,0]
                                          //  Referenced by: '<S562>/alpha_beta'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S130>/Constant1'

  real_T Constant1_Value_d;            // Expression: 0
                                          //  Referenced by: '<S487>/Constant1'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S94>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S96>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S86>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S74>/ADC'

  real_T ADC_P8_m5;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S88>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S90>/ADC'

  real_T ADC_P8_lu;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S82>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S98>/ADC'

  real_T ADC_P8_o;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S76>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S84>/ADC'

  real_T ADC_P8_l2;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S78>/ADC'

  real_T ADC_P8_mv;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S80>/ADC'

  real_T ADC_P8_gp;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S92>/ADC'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S61>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S516>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S516>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S55>/Unit Delay'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S582>/S-Function'

  real_T SFunction_P17_l;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S584>/S-Function'

  real_T TmpRTBAtSum6Inport1_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S140>/Integrator'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S53>/Constant'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S576>/S-Function'

  real_T SFunction_P17_i;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S580>/S-Function'

  real_T Integrator_gainval_e;       // Computed Parameter: Integrator_gainval_e
                                        //  Referenced by: '<S306>/Integrator'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T Integrator_gainval_a;       // Computed Parameter: Integrator_gainval_a
                                        //  Referenced by: '<S254>/Integrator'

  real_T SFunction_P17_f;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S586>/S-Function'

  real_T Integrator_gainval_i;       // Computed Parameter: Integrator_gainval_i
                                        //  Referenced by: '<S374>/Integrator'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S426>/Integrator'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S578>/S-Function'

  real_T Constant_Value_f[2];          // Expression: [0; 0]
                                          //  Referenced by: '<S16>/Constant'

  real_T Constant1_Value_n;            // Expression: 0
                                          //  Referenced by: '<S16>/Constant1'

  real_T Integrator_gainval_a3;     // Computed Parameter: Integrator_gainval_a3
                                       //  Referenced by: '<S497>/Integrator'

  real_T Gain1_Gain_m;                 // Expression: 2
                                          //  Referenced by: '<S55>/Gain1'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S130>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S324>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S325>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S326>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S327>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S448>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S449>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S450>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S451>/phase'

  real_T Clamping_zero_Value_a;        // Expression: 0
                                          //  Referenced by: '<S487>/Clamping_zero'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S521>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S522>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S523>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S524>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S533>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S534>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S535>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S536>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S545>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S546>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S547>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S548>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S563>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S564>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S565>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S566>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S329>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S329>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S329>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S331>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S331>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S331>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S333>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S333>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S333>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S335>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S335>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S335>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S453>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S453>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S453>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S455>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S455>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S455>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S457>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S457>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S457>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S459>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S459>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S459>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S526>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S528>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S528>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S528>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S530>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S530>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S530>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S532>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S532>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S532>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S542>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S542>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S542>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S544>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S544>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S544>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S550>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S550>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S550>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S570>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S570>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S570>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S572>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S572>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S572>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S574>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S574>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S574>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S94>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S94>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S96>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S96>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S86>/ADC'

  real32_T ADC_P3_p;                   // Expression: single(offset)
                                          //  Referenced by: '<S86>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S74>/ADC'

  real32_T ADC_P3_h;                   // Expression: single(offset)
                                          //  Referenced by: '<S74>/ADC'

  real32_T ADC_P2_l;                   // Expression: single(gain)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P3_o;                   // Expression: single(offset)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P2_pn;                  // Expression: single(gain)
                                          //  Referenced by: '<S90>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S90>/ADC'

  real32_T SFunction_P6;               // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S159>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S161>/S-Function'

  real32_T ADC_P2_fx;                  // Expression: single(gain)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P3_oa;                  // Expression: single(offset)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S98>/ADC'

  real32_T ADC_P3_d;                   // Expression: single(offset)
                                          //  Referenced by: '<S98>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P2_ik;                  // Expression: single(gain)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P3_i;                   // Expression: single(offset)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P2_i5;                  // Expression: single(gain)
                                          //  Referenced by: '<S78>/ADC'

  real32_T ADC_P3_pf;                  // Expression: single(offset)
                                          //  Referenced by: '<S78>/ADC'

  real32_T ADC_P2_a;                   // Expression: single(gain)
                                          //  Referenced by: '<S80>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S80>/ADC'

  real32_T Bias1_Bias[6];              // Computed Parameter: Bias1_Bias
                                          //  Referenced by: '<S1>/Bias1'

  real32_T SFunction_P6_l;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S163>/S-Function'

  real32_T SFunction_P6_gj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S165>/S-Function'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S92>/ADC'

  real32_T ADC_P3_di;                  // Expression: single(offset)
                                          //  Referenced by: '<S92>/ADC'

  real32_T Bias_Bias;                  // Computed Parameter: Bias_Bias
                                          //  Referenced by: '<S1>/Bias'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S167>/S-Function'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S582>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S582>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S582>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(0)
                                          //  Referenced by: '<S582>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S582>/S-Function'

  real32_T SFunction_P3_a;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S584>/S-Function'

  real32_T SFunction_P4_a;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S584>/S-Function'

  real32_T SFunction_P5_k;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S584>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(0)
                                          //  Referenced by: '<S584>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S584>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S169>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S169>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S171>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S171>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S173>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S173>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S175>/S-Function'

  real32_T SFunction_P12_ho;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S175>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S177>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S177>/S-Function'

  real32_T SFunction_P6_hs;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S179>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S179>/S-Function'

  real32_T SFunction_P3_o;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S576>/S-Function'

  real32_T SFunction_P4_d;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S576>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S576>/S-Function'

  real32_T SFunction_P6_is;            // Expression: single(0)
                                          //  Referenced by: '<S576>/S-Function'

  real32_T SFunction_P7_iq;            // Expression: single(0)
                                          //  Referenced by: '<S576>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S580>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S580>/S-Function'

  real32_T SFunction_P5_n;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S580>/S-Function'

  real32_T SFunction_P6_jg;            // Expression: single(0)
                                          //  Referenced by: '<S580>/S-Function'

  real32_T SFunction_P7_il;            // Expression: single(0)
                                          //  Referenced by: '<S580>/S-Function'

  real32_T SFunction_P3_h;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S586>/S-Function'

  real32_T SFunction_P4_n;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S586>/S-Function'

  real32_T SFunction_P5_m;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S586>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(0)
                                          //  Referenced by: '<S586>/S-Function'

  real32_T SFunction_P7_k;             // Expression: single(0)
                                          //  Referenced by: '<S586>/S-Function'

  real32_T SFunction_P6_n2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S181>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S181>/S-Function'

  real32_T SFunction_P6_c3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S183>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S183>/S-Function'

  real32_T SFunction_P6_ii;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S185>/S-Function'

  real32_T SFunction_P12_eo;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S185>/S-Function'

  real32_T SFunction_P6_iy;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S187>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S187>/S-Function'

  real32_T SFunction_P6_mc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S189>/S-Function'

  real32_T SFunction_P12_gf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S189>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S191>/S-Function'

  real32_T SFunction_P12_nf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S191>/S-Function'

  real32_T SFunction_P6_jl;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S193>/S-Function'

  real32_T SFunction_P12_jl;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S193>/S-Function'

  real32_T SFunction_P6_hb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S195>/S-Function'

  real32_T SFunction_P12_cn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S195>/S-Function'

  real32_T SFunction_P6_bm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S197>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S197>/S-Function'

  real32_T SFunction_P6_jq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S199>/S-Function'

  real32_T SFunction_P12_oz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S199>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S201>/S-Function'

  real32_T SFunction_P12_ow;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S201>/S-Function'

  real32_T SFunction_P6_pf;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S203>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S203>/S-Function'

  real32_T SFunction_P6_ls;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S205>/S-Function'

  real32_T SFunction_P12_bn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S205>/S-Function'

  real32_T SFunction_P6_ne;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P12_fa;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S207>/S-Function'

  real32_T SFunction_P6_c0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P12_om;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P6_dm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P6_j2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P12_bv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P12_gw;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P6_kj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P12_kg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S578>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S578>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S578>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S578>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S578>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S101>/S-Function'

  real32_T SFunction_P3_m5;            // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S101>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S103>/CLK1'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S159>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S159>/S-Function'

  uint32_T SFunction_P7_e;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S161>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S161>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S163>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S163>/S-Function'

  uint32_T SFunction_P7_dt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S165>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S165>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S167>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S167>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S582>/S-Function'

  uint32_T SFunction_P10_a;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S584>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S169>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S169>/S-Function'

  uint32_T SFunction_P7_ko;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S171>/S-Function'

  uint32_T SFunction_P13_gr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S171>/S-Function'

  uint32_T SFunction_P7_dw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S173>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S173>/S-Function'

  uint32_T SFunction_P7_od;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S175>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S175>/S-Function'

  uint32_T SFunction_P7_ku;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S177>/S-Function'

  uint32_T SFunction_P13_ar;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S177>/S-Function'

  uint32_T SFunction_P7_n4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S179>/S-Function'

  uint32_T SFunction_P13_bv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S179>/S-Function'

  uint32_T SFunction_P10_ap;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S576>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S580>/S-Function'

  uint32_T SFunction_P10_e;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S586>/S-Function'

  uint32_T SFunction_P7_oc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S181>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S181>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S183>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S183>/S-Function'

  uint32_T SFunction_P7_dz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S185>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S185>/S-Function'

  uint32_T SFunction_P7_hw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S187>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S187>/S-Function'

  uint32_T SFunction_P7_ag;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S189>/S-Function'

  uint32_T SFunction_P13_fo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S189>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S191>/S-Function'

  uint32_T SFunction_P13_cr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S191>/S-Function'

  uint32_T SFunction_P7_p;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S193>/S-Function'

  uint32_T SFunction_P13_i2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S193>/S-Function'

  uint32_T SFunction_P7_ci;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S195>/S-Function'

  uint32_T SFunction_P13_ig;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S195>/S-Function'

  uint32_T SFunction_P7_ev;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S197>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S197>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S199>/S-Function'

  uint32_T SFunction_P13_nc;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S199>/S-Function'

  uint32_T SFunction_P7_k3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S201>/S-Function'

  uint32_T SFunction_P13_fh;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S201>/S-Function'

  uint32_T SFunction_P7_ju;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S203>/S-Function'

  uint32_T SFunction_P13_lp;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S203>/S-Function'

  uint32_T SFunction_P7_jf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S205>/S-Function'

  uint32_T SFunction_P13_la;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S205>/S-Function'

  uint32_T SFunction_P7_nj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P13_dz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S207>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P13_ch;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P7_da;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P7_c3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P13_a1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P7_pg;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P7_h0;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P13_ob;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S578>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S329>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S329>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S329>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S329>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S329>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S329>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S331>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S333>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S335>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S453>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S455>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S526>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S528>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S530>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S530>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S530>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S530>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S530>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S530>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S532>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S532>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S532>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S532>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S532>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S532>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S570>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S572>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S572>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S572>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S572>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S572>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S572>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S574>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S574>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S574>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S574>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S574>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S574>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S96>/ADC'

  int16_T ADC_P4_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S96>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S96>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S96>/ADC'

  int16_T ADC_P1_h;                    // Expression: int16(channel)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P4_cw;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P1_l;                    // Expression: int16(channel)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P9_h5;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S90>/ADC'

  int16_T SFunction_P2_p;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S159>/S-Function'

  int16_T SFunction_P3_hu;             // Expression: int16(0)
                                          //  Referenced by: '<S159>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S161>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S161>/S-Function'

  int16_T ADC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P1_d;                    // Expression: int16(channel)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P4_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P6_ah;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P9_lj;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P1_pn;                   // Expression: int16(channel)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P4_ah;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P6_am;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P4_al;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P6_b;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P9_j;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P9_i;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S80>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S163>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S163>/S-Function'

  int16_T SFunction_P2_nm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S165>/S-Function'

  int16_T SFunction_P3_j;              // Expression: int16(0)
                                          //  Referenced by: '<S165>/S-Function'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P9_l0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S92>/ADC'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S167>/S-Function'

  int16_T SFunction_P3_k;              // Expression: int16(0)
                                          //  Referenced by: '<S167>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S582>/S-Function'

  int16_T SFunction_P2_os;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S584>/S-Function'

  int16_T SFunction_P2_a1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S169>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S169>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S171>/S-Function'

  int16_T SFunction_P3_ks;             // Expression: int16(0)
                                          //  Referenced by: '<S171>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S173>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S173>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S175>/S-Function'

  int16_T SFunction_P3_e5;             // Expression: int16(0)
                                          //  Referenced by: '<S175>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S177>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S177>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S179>/S-Function'

  int16_T SFunction_P3_jt;             // Expression: int16(0)
                                          //  Referenced by: '<S179>/S-Function'

  int16_T SFunction_P2_i2;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S576>/S-Function'

  int16_T SFunction_P2_ao;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S580>/S-Function'

  int16_T SFunction_P2_nt;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S586>/S-Function'

  int16_T SFunction_P2_go;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S181>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S181>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S183>/S-Function'

  int16_T SFunction_P3_kv;             // Expression: int16(0)
                                          //  Referenced by: '<S183>/S-Function'

  int16_T SFunction_P2_k3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S185>/S-Function'

  int16_T SFunction_P3_fc;             // Expression: int16(0)
                                          //  Referenced by: '<S185>/S-Function'

  int16_T SFunction_P2_lq;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S187>/S-Function'

  int16_T SFunction_P3_fq;             // Expression: int16(0)
                                          //  Referenced by: '<S187>/S-Function'

  int16_T SFunction_P2_b;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S189>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S189>/S-Function'

  int16_T SFunction_P2_mq;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S191>/S-Function'

  int16_T SFunction_P3_nu;             // Expression: int16(0)
                                          //  Referenced by: '<S191>/S-Function'

  int16_T SFunction_P2_cm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S193>/S-Function'

  int16_T SFunction_P3_ig;             // Expression: int16(0)
                                          //  Referenced by: '<S193>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S195>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S195>/S-Function'

  int16_T SFunction_P2_oi;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S197>/S-Function'

  int16_T SFunction_P3_kk;             // Expression: int16(0)
                                          //  Referenced by: '<S197>/S-Function'

  int16_T SFunction_P2_a3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S199>/S-Function'

  int16_T SFunction_P3_f1;             // Expression: int16(0)
                                          //  Referenced by: '<S199>/S-Function'

  int16_T SFunction_P2_c0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S201>/S-Function'

  int16_T SFunction_P3_gb;             // Expression: int16(0)
                                          //  Referenced by: '<S201>/S-Function'

  int16_T SFunction_P2_m3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S203>/S-Function'

  int16_T SFunction_P3_ah;             // Expression: int16(0)
                                          //  Referenced by: '<S203>/S-Function'

  int16_T SFunction_P2_bi;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S205>/S-Function'

  int16_T SFunction_P3_l;              // Expression: int16(0)
                                          //  Referenced by: '<S205>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T SFunction_P3_o5;             // Expression: int16(0)
                                          //  Referenced by: '<S207>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P3_ih;             // Expression: int16(0)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P2_mc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T SFunction_P3_ho;             // Expression: int16(0)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T SFunction_P2_fe;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P3_hl;             // Expression: int16(0)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P2_ni;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P3_ba;             // Expression: int16(0)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P2_ag;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P3_nl;             // Expression: int16(0)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P2_m0;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S578>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S103>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S103>/CLK1'

  uint16_T SFunction_P1[3];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P5_pc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P14[5];           // Computed Parameter: SFunction_P14
                                          //  Referenced by: '<S159>/S-Function'

  uint16_T SFunction_P1_o[3];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S161>/S-Function'

  uint16_T SFunction_P1_f[3];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S163>/S-Function'

  uint16_T SFunction_P1_g[3];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P8_dm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S165>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S167>/S-Function'

  uint16_T SFunction_P1_j[9];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S582>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S582>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S582>/S-Function'

  uint16_T SFunction_P14_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S582>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S582>/S-Function'

  uint16_T SFunction_P1_i[9];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S584>/S-Function'

  uint16_T SFunction_P9_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S584>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S584>/S-Function'

  uint16_T SFunction_P14_lj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S584>/S-Function'

  uint16_T SFunction_P15_i;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S584>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P14_k[5];         // Computed Parameter: SFunction_P14_k
                                          //  Referenced by: '<S169>/S-Function'

  uint16_T SFunction_P1_p[4];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P5_kz;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S171>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P5_kp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P8_de;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P11_pl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P14_l4[5];        // Computed Parameter: SFunction_P14_l4
                                          //  Referenced by: '<S173>/S-Function'

  uint16_T SFunction_P1_pv[6];         // Computed Parameter: SFunction_P1_pv
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P5_m5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S175>/S-Function'

  uint16_T SFunction_P1_lq[4];         // Computed Parameter: SFunction_P1_lq
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P14_jp[5];        // Computed Parameter: SFunction_P14_jp
                                          //  Referenced by: '<S177>/S-Function'

  uint16_T SFunction_P1_fh[2];         // Computed Parameter: SFunction_P1_fh
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P11_plx;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S179>/S-Function'

  uint16_T SFunction_P1_ia[5];         // Computed Parameter: SFunction_P1_ia
                                          //  Referenced by: '<S576>/S-Function'

  uint16_T SFunction_P9_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S576>/S-Function'

  uint16_T SFunction_P11_ad;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S576>/S-Function'

  uint16_T SFunction_P14_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S576>/S-Function'

  uint16_T SFunction_P15_j;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S576>/S-Function'

  uint16_T SFunction_P1_fw[5];         // Computed Parameter: SFunction_P1_fw
                                          //  Referenced by: '<S580>/S-Function'

  uint16_T SFunction_P9_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S580>/S-Function'

  uint16_T SFunction_P11_kg;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S580>/S-Function'

  uint16_T SFunction_P14_ie;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S580>/S-Function'

  uint16_T SFunction_P15_f;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S580>/S-Function'

  uint16_T SFunction_P1_b[8];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S586>/S-Function'

  uint16_T SFunction_P9_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S586>/S-Function'

  uint16_T SFunction_P11_bg;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S586>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S586>/S-Function'

  uint16_T SFunction_P15_k;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S586>/S-Function'

  uint16_T SFunction_P1_pw[4];         // Computed Parameter: SFunction_P1_pw
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P11_kr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P14_l44[5];       // Computed Parameter: SFunction_P14_l44
                                          //  Referenced by: '<S181>/S-Function'

  uint16_T SFunction_P1_mb[5];         // Computed Parameter: SFunction_P1_mb
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P5_ku;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P8_pj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S183>/S-Function'

  uint16_T SFunction_P1_e[4];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P5_gl;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P8_nd;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P11_ab;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S185>/S-Function'

  uint16_T SFunction_P1_a[4];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P8_gu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P14_f2[5];        // Computed Parameter: SFunction_P14_f2
                                          //  Referenced by: '<S187>/S-Function'

  uint16_T SFunction_P1_eq[5];         // Computed Parameter: SFunction_P1_eq
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P5_ky;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P11_ly;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P14_im[5];        // Computed Parameter: SFunction_P14_im
                                          //  Referenced by: '<S189>/S-Function'

  uint16_T SFunction_P1_mq[4];         // Computed Parameter: SFunction_P1_mq
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P5_oj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P8_kv;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P14_an[5];        // Computed Parameter: SFunction_P14_an
                                          //  Referenced by: '<S191>/S-Function'

  uint16_T SFunction_P1_dd[5];         // Computed Parameter: SFunction_P1_dd
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P5_mo;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S193>/S-Function'

  uint16_T SFunction_P1_h[3];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P5_g0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P8_n5;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P11_fu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P14_nl[5];        // Computed Parameter: SFunction_P14_nl
                                          //  Referenced by: '<S195>/S-Function'

  uint16_T SFunction_P1_bi[4];         // Computed Parameter: SFunction_P1_bi
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P5_jm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P8_p1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P11_lj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P14_nj[5];        // Computed Parameter: SFunction_P14_nj
                                          //  Referenced by: '<S197>/S-Function'

  uint16_T SFunction_P1_ii[6];         // Computed Parameter: SFunction_P1_ii
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P8_da;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P11_pw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S199>/S-Function'

  uint16_T SFunction_P1_h1[6];         // Computed Parameter: SFunction_P1_h1
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P5_h2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P8_c0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P11_in;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P14_l0[5];        // Computed Parameter: SFunction_P14_l0
                                          //  Referenced by: '<S201>/S-Function'

  uint16_T SFunction_P1_on[9];         // Computed Parameter: SFunction_P1_on
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P5_gn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P8_eq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P11_gj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P14_gn[5];        // Computed Parameter: SFunction_P14_gn
                                          //  Referenced by: '<S203>/S-Function'

  uint16_T SFunction_P1_l3[9];         // Computed Parameter: SFunction_P1_l3
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P5_az;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P11_d2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S205>/S-Function'

  uint16_T SFunction_P1_li[3];         // Computed Parameter: SFunction_P1_li
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P5_o4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P8_fj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P11_ar;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P14_ez[5];        // Computed Parameter: SFunction_P14_ez
                                          //  Referenced by: '<S207>/S-Function'

  uint16_T SFunction_P1_if[3];         // Computed Parameter: SFunction_P1_if
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P8_fa;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P11_p3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P14_m3[5];        // Computed Parameter: SFunction_P14_m3
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P1_o2[3];         // Computed Parameter: SFunction_P1_o2
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P5_f0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P8_o2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P14_jj[5];        // Computed Parameter: SFunction_P14_jj
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P1_jg[3];         // Computed Parameter: SFunction_P1_jg
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P5_ov;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P8_n2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P11_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P14_oa[5];        // Computed Parameter: SFunction_P14_oa
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P1_fd[3];         // Computed Parameter: SFunction_P1_fd
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P5_l0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P8_jf;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P11_pu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P14_nc[5];        // Computed Parameter: SFunction_P14_nc
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P1_ll[3];         // Computed Parameter: SFunction_P1_ll
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P5_e4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P8_fw;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P11_hl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P14_hc[5];        // Computed Parameter: SFunction_P14_hc
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S578>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S578>/S-Function'

  uint16_T SFunction_P11_atz;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S578>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S578>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S578>/S-Function'

  uint16_T SFunction_P1_fdr;           // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S101>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S101>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S329>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S329>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S329>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S331>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S331>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S331>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S333>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S333>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S333>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S335>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S335>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S335>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S453>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S453>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S453>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S455>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S455>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S455>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S459>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S459>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S459>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S526>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S528>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S528>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S528>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S530>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S530>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S530>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S532>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S532>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S532>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S542>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S542>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S542>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S544>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S544>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S544>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S550>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S550>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S550>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S570>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S570>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S570>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S572>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S572>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S572>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S574>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S574>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S574>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S94>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S94>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S96>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S96>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P5_ag;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S90>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S90>/ADC'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P10_n;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S159>/S-Function'

  boolean_T SFunction_P4_e;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P9_ie;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S161>/S-Function'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P5_ju;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S98>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S98>/ADC'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P5_av;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P7_fr;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P5_o;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T ADC_P7_hi;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T ADC_P5_n;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T ADC_P7_f0;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P10_ah;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S163>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P9_nb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S165>/S-Function'

  boolean_T ADC_P5_f;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S92>/ADC'

  boolean_T ADC_P7_fs;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S92>/ADC'

  boolean_T SFunction_P4_fn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P9_cs;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S167>/S-Function'

  boolean_T SFunction_P8_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S582>/S-Function'

  boolean_T SFunction_P12_di;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S582>/S-Function'

  boolean_T SFunction_P13_a4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S582>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S582>/S-Function'

  boolean_T SFunction_P8_c1;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S584>/S-Function'

  boolean_T SFunction_P12_p3;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S584>/S-Function'

  boolean_T SFunction_P13_nh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S584>/S-Function'

  boolean_T SFunction_P16_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S584>/S-Function'

  boolean_T SFunction_P4_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S169>/S-Function'

  boolean_T SFunction_P9_d;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S169>/S-Function'

  boolean_T SFunction_P10_lt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S169>/S-Function'

  boolean_T SFunction_P15_hv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S169>/S-Function'

  boolean_T SFunction_P4_l3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S171>/S-Function'

  boolean_T SFunction_P9_lt;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S171>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S171>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S171>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S173>/S-Function'

  boolean_T SFunction_P9_nf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S173>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S173>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S173>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S175>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S175>/S-Function'

  boolean_T SFunction_P10_je;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S175>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S175>/S-Function'

  boolean_T SFunction_P4_hz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S177>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S177>/S-Function'

  boolean_T SFunction_P10_aps;         // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S177>/S-Function'

  boolean_T SFunction_P15_af;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S177>/S-Function'

  boolean_T SFunction_P4_i0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S179>/S-Function'

  boolean_T SFunction_P9_ll;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S179>/S-Function'

  boolean_T SFunction_P10_ju;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S179>/S-Function'

  boolean_T SFunction_P15_pd;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S179>/S-Function'

  boolean_T SFunction_P8_o4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S576>/S-Function'

  boolean_T SFunction_P12_fm;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S576>/S-Function'

  boolean_T SFunction_P13_ls;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S576>/S-Function'

  boolean_T SFunction_P16_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S576>/S-Function'

  boolean_T SFunction_P8_i;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S580>/S-Function'

  boolean_T SFunction_P12_ls;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S580>/S-Function'

  boolean_T SFunction_P13_pl;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S580>/S-Function'

  boolean_T SFunction_P16_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S580>/S-Function'

  boolean_T SFunction_P8_lk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S586>/S-Function'

  boolean_T SFunction_P12_lk;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S586>/S-Function'

  boolean_T SFunction_P13_nn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S586>/S-Function'

  boolean_T SFunction_P16_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S586>/S-Function'

  boolean_T SFunction_P4_hj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S181>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S181>/S-Function'

  boolean_T SFunction_P10_js;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S181>/S-Function'

  boolean_T SFunction_P15_a5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S181>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S183>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S183>/S-Function'

  boolean_T SFunction_P10_kx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S183>/S-Function'

  boolean_T SFunction_P15_mb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S183>/S-Function'

  boolean_T SFunction_P4_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S185>/S-Function'

  boolean_T SFunction_P9_be;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S185>/S-Function'

  boolean_T SFunction_P10_lh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S185>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S185>/S-Function'

  boolean_T SFunction_P4_ms;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S187>/S-Function'

  boolean_T SFunction_P9_ek;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S187>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S187>/S-Function'

  boolean_T SFunction_P15_gw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S187>/S-Function'

  boolean_T SFunction_P4_bv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S189>/S-Function'

  boolean_T SFunction_P9_ei;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S189>/S-Function'

  boolean_T SFunction_P10_k3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S189>/S-Function'

  boolean_T SFunction_P15_px;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S189>/S-Function'

  boolean_T SFunction_P4_fs;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S191>/S-Function'

  boolean_T SFunction_P9_pn;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S191>/S-Function'

  boolean_T SFunction_P10_ak;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S191>/S-Function'

  boolean_T SFunction_P15_f1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S191>/S-Function'

  boolean_T SFunction_P4_lz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S193>/S-Function'

  boolean_T SFunction_P9_lr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S193>/S-Function'

  boolean_T SFunction_P10_dq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S193>/S-Function'

  boolean_T SFunction_P15_ir;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S193>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S195>/S-Function'

  boolean_T SFunction_P9_is;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S195>/S-Function'

  boolean_T SFunction_P10_pp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S195>/S-Function'

  boolean_T SFunction_P15_aq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S195>/S-Function'

  boolean_T SFunction_P4_o;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S197>/S-Function'

  boolean_T SFunction_P9_mh;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S197>/S-Function'

  boolean_T SFunction_P10_nw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S197>/S-Function'

  boolean_T SFunction_P15_bi;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S197>/S-Function'

  boolean_T SFunction_P4_lm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S199>/S-Function'

  boolean_T SFunction_P9_mg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S199>/S-Function'

  boolean_T SFunction_P10_bm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S199>/S-Function'

  boolean_T SFunction_P15_pq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S199>/S-Function'

  boolean_T SFunction_P4_f5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S201>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S201>/S-Function'

  boolean_T SFunction_P10_ee;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S201>/S-Function'

  boolean_T SFunction_P15_kk;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S201>/S-Function'

  boolean_T SFunction_P4_ju;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P9_ko;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P10_kz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P15_cq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S203>/S-Function'

  boolean_T SFunction_P4_ls;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P9_pg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P15_bh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S205>/S-Function'

  boolean_T SFunction_P4_e2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P9_px;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S207>/S-Function'

  boolean_T SFunction_P4_fc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P9_j4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P10_ks;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P15_g2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P4_hg;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P9_g;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P4_gj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P9_p5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P10_nj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P15_po;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P4_fv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P9_bu;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P10_nk;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P15_hr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P4_hr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P10_kw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P15_ne;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S578>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S578>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S578>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S578>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S103>/CLK1'

  int8_T Constant_Value_e;             // Computed Parameter: Constant_Value_e
                                          //  Referenced by: '<S130>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S130>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S130>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S130>/Constant4'

  int8_T Constant_Value_h;             // Computed Parameter: Constant_Value_h
                                          //  Referenced by: '<S487>/Constant'

  int8_T Constant2_Value_a;            // Computed Parameter: Constant2_Value_a
                                          //  Referenced by: '<S487>/Constant2'

  int8_T Constant3_Value_j;            // Computed Parameter: Constant3_Value_j
                                          //  Referenced by: '<S487>/Constant3'

  int8_T Constant4_Value_a;            // Computed Parameter: Constant4_Value_a
                                          //  Referenced by: '<S487>/Constant4'

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
//  Block '<S336>/Gain3' : Unused code path elimination
//  Block '<S57>/Gain3' : Unused code path elimination
//  Block '<S57>/Gain4' : Unused code path elimination
//  Block '<S57>/Sum3' : Unused code path elimination
//  Block '<S60>/Gain' : Unused code path elimination
//  Block '<S60>/Square' : Unused code path elimination
//  Block '<S557>/Gain3' : Unused code path elimination
//  Block '<S561>/Fcn' : Unused code path elimination
//  Block '<S561>/Fcn1' : Unused code path elimination
//  Block '<S562>/Fcn' : Unused code path elimination
//  Block '<S562>/Fcn1' : Unused code path elimination
//  Block '<S558>/Switch' : Unused code path elimination


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
//  '<S18>'  : 'imperix_ctrl/Closed_loop_control/IM references'
//  '<S19>'  : 'imperix_ctrl/Closed_loop_control/Kalman Filter'
//  '<S20>'  : 'imperix_ctrl/Closed_loop_control/LPF'
//  '<S21>'  : 'imperix_ctrl/Closed_loop_control/Modulation index'
//  '<S22>'  : 'imperix_ctrl/Closed_loop_control/PID Controller1'
//  '<S23>'  : 'imperix_ctrl/Closed_loop_control/Probe'
//  '<S24>'  : 'imperix_ctrl/Closed_loop_control/Probe1'
//  '<S25>'  : 'imperix_ctrl/Closed_loop_control/Probe10'
//  '<S26>'  : 'imperix_ctrl/Closed_loop_control/Probe11'
//  '<S27>'  : 'imperix_ctrl/Closed_loop_control/Probe12'
//  '<S28>'  : 'imperix_ctrl/Closed_loop_control/Probe18'
//  '<S29>'  : 'imperix_ctrl/Closed_loop_control/Probe19'
//  '<S30>'  : 'imperix_ctrl/Closed_loop_control/Probe2'
//  '<S31>'  : 'imperix_ctrl/Closed_loop_control/Probe20'
//  '<S32>'  : 'imperix_ctrl/Closed_loop_control/Probe21'
//  '<S33>'  : 'imperix_ctrl/Closed_loop_control/Probe22'
//  '<S34>'  : 'imperix_ctrl/Closed_loop_control/Probe23'
//  '<S35>'  : 'imperix_ctrl/Closed_loop_control/Probe24'
//  '<S36>'  : 'imperix_ctrl/Closed_loop_control/Probe25'
//  '<S37>'  : 'imperix_ctrl/Closed_loop_control/Probe26'
//  '<S38>'  : 'imperix_ctrl/Closed_loop_control/Probe27'
//  '<S39>'  : 'imperix_ctrl/Closed_loop_control/Probe28'
//  '<S40>'  : 'imperix_ctrl/Closed_loop_control/Probe29'
//  '<S41>'  : 'imperix_ctrl/Closed_loop_control/Probe3'
//  '<S42>'  : 'imperix_ctrl/Closed_loop_control/Probe30'
//  '<S43>'  : 'imperix_ctrl/Closed_loop_control/Probe31'
//  '<S44>'  : 'imperix_ctrl/Closed_loop_control/Probe32'
//  '<S45>'  : 'imperix_ctrl/Closed_loop_control/Probe33'
//  '<S46>'  : 'imperix_ctrl/Closed_loop_control/Probe34'
//  '<S47>'  : 'imperix_ctrl/Closed_loop_control/Probe4'
//  '<S48>'  : 'imperix_ctrl/Closed_loop_control/Probe5'
//  '<S49>'  : 'imperix_ctrl/Closed_loop_control/Probe6'
//  '<S50>'  : 'imperix_ctrl/Closed_loop_control/Probe7'
//  '<S51>'  : 'imperix_ctrl/Closed_loop_control/Probe8'
//  '<S52>'  : 'imperix_ctrl/Closed_loop_control/Probe9'
//  '<S53>'  : 'imperix_ctrl/Closed_loop_control/Subsystem'
//  '<S54>'  : 'imperix_ctrl/Closed_loop_control/Subsystem1'
//  '<S55>'  : 'imperix_ctrl/Closed_loop_control/Subsystem19'
//  '<S56>'  : 'imperix_ctrl/Closed_loop_control/Subsystem2'
//  '<S57>'  : 'imperix_ctrl/Closed_loop_control/Subsystem20'
//  '<S58>'  : 'imperix_ctrl/Closed_loop_control/Subsystem22'
//  '<S59>'  : 'imperix_ctrl/Closed_loop_control/Subsystem23'
//  '<S60>'  : 'imperix_ctrl/Closed_loop_control/Subsystem24'
//  '<S61>'  : 'imperix_ctrl/Closed_loop_control/Subsystem26'
//  '<S62>'  : 'imperix_ctrl/Closed_loop_control/Subsystem3'
//  '<S63>'  : 'imperix_ctrl/Closed_loop_control/Subsystem4'
//  '<S64>'  : 'imperix_ctrl/Closed_loop_control/Subsystem5'
//  '<S65>'  : 'imperix_ctrl/Closed_loop_control/Subsystem7'
//  '<S66>'  : 'imperix_ctrl/Closed_loop_control/Subsystem9'
//  '<S67>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S68>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S69>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S70>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter3'
//  '<S71>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter4'
//  '<S72>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter5'
//  '<S73>'  : 'imperix_ctrl/Closed_loop_control/ADC10/sub'
//  '<S74>'  : 'imperix_ctrl/Closed_loop_control/ADC10/sub/generation'
//  '<S75>'  : 'imperix_ctrl/Closed_loop_control/ADC11/sub'
//  '<S76>'  : 'imperix_ctrl/Closed_loop_control/ADC11/sub/generation'
//  '<S77>'  : 'imperix_ctrl/Closed_loop_control/ADC12/sub'
//  '<S78>'  : 'imperix_ctrl/Closed_loop_control/ADC12/sub/generation'
//  '<S79>'  : 'imperix_ctrl/Closed_loop_control/ADC13/sub'
//  '<S80>'  : 'imperix_ctrl/Closed_loop_control/ADC13/sub/generation'
//  '<S81>'  : 'imperix_ctrl/Closed_loop_control/ADC14/sub'
//  '<S82>'  : 'imperix_ctrl/Closed_loop_control/ADC14/sub/generation'
//  '<S83>'  : 'imperix_ctrl/Closed_loop_control/ADC15/sub'
//  '<S84>'  : 'imperix_ctrl/Closed_loop_control/ADC15/sub/generation'
//  '<S85>'  : 'imperix_ctrl/Closed_loop_control/ADC16/sub'
//  '<S86>'  : 'imperix_ctrl/Closed_loop_control/ADC16/sub/generation'
//  '<S87>'  : 'imperix_ctrl/Closed_loop_control/ADC17/sub'
//  '<S88>'  : 'imperix_ctrl/Closed_loop_control/ADC17/sub/generation'
//  '<S89>'  : 'imperix_ctrl/Closed_loop_control/ADC18/sub'
//  '<S90>'  : 'imperix_ctrl/Closed_loop_control/ADC18/sub/generation'
//  '<S91>'  : 'imperix_ctrl/Closed_loop_control/ADC20/sub'
//  '<S92>'  : 'imperix_ctrl/Closed_loop_control/ADC20/sub/generation'
//  '<S93>'  : 'imperix_ctrl/Closed_loop_control/ADC6/sub'
//  '<S94>'  : 'imperix_ctrl/Closed_loop_control/ADC6/sub/generation'
//  '<S95>'  : 'imperix_ctrl/Closed_loop_control/ADC7/sub'
//  '<S96>'  : 'imperix_ctrl/Closed_loop_control/ADC7/sub/generation'
//  '<S97>'  : 'imperix_ctrl/Closed_loop_control/ADC9/sub'
//  '<S98>'  : 'imperix_ctrl/Closed_loop_control/ADC9/sub/generation'
//  '<S99>'  : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S100>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S101>' : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S102>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S103>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S104>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup'
//  '<S105>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain'
//  '<S106>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative'
//  '<S107>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter'
//  '<S108>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs'
//  '<S109>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain'
//  '<S110>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain'
//  '<S111>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk'
//  '<S112>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator'
//  '<S113>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs'
//  '<S114>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy'
//  '<S115>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain'
//  '<S116>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy'
//  '<S117>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain'
//  '<S118>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal'
//  '<S119>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation'
//  '<S120>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk'
//  '<S121>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum'
//  '<S122>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk'
//  '<S123>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode'
//  '<S124>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum'
//  '<S125>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral'
//  '<S126>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain'
//  '<S127>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal'
//  '<S128>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal'
//  '<S129>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal'
//  '<S130>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel'
//  '<S131>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S132>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S133>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain/Disabled'
//  '<S134>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative/Disabled'
//  '<S135>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter/Disabled'
//  '<S136>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs/Disabled'
//  '<S137>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain/Internal Parameters'
//  '<S138>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain/Passthrough'
//  '<S139>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S140>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator/Discrete'
//  '<S141>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs/Internal IC'
//  '<S142>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S143>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain/Disabled'
//  '<S144>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy/Disabled'
//  '<S145>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S146>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal/Disabled'
//  '<S147>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation/Enabled'
//  '<S148>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk/Disabled'
//  '<S149>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum/Sum_PI'
//  '<S150>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk/Disabled'
//  '<S151>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode/Disabled'
//  '<S152>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S153>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S154>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S155>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal/Forward_Path'
//  '<S156>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal/Internal PreInt'
//  '<S157>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal/Forward_Path'
//  '<S158>' : 'imperix_ctrl/Closed_loop_control/Probe/sub'
//  '<S159>' : 'imperix_ctrl/Closed_loop_control/Probe/sub/generation'
//  '<S160>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub'
//  '<S161>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S162>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub'
//  '<S163>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub/generation'
//  '<S164>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub'
//  '<S165>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub/generation'
//  '<S166>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub'
//  '<S167>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S168>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub'
//  '<S169>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S170>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub'
//  '<S171>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub/generation'
//  '<S172>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub'
//  '<S173>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S174>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub'
//  '<S175>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub/generation'
//  '<S176>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub'
//  '<S177>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub/generation'
//  '<S178>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub'
//  '<S179>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub/generation'
//  '<S180>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub'
//  '<S181>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S182>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub'
//  '<S183>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S184>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub'
//  '<S185>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S186>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub'
//  '<S187>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S188>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub'
//  '<S189>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S190>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub'
//  '<S191>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S192>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub'
//  '<S193>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S194>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub'
//  '<S195>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S196>' : 'imperix_ctrl/Closed_loop_control/Probe30/sub'
//  '<S197>' : 'imperix_ctrl/Closed_loop_control/Probe30/sub/generation'
//  '<S198>' : 'imperix_ctrl/Closed_loop_control/Probe31/sub'
//  '<S199>' : 'imperix_ctrl/Closed_loop_control/Probe31/sub/generation'
//  '<S200>' : 'imperix_ctrl/Closed_loop_control/Probe32/sub'
//  '<S201>' : 'imperix_ctrl/Closed_loop_control/Probe32/sub/generation'
//  '<S202>' : 'imperix_ctrl/Closed_loop_control/Probe33/sub'
//  '<S203>' : 'imperix_ctrl/Closed_loop_control/Probe33/sub/generation'
//  '<S204>' : 'imperix_ctrl/Closed_loop_control/Probe34/sub'
//  '<S205>' : 'imperix_ctrl/Closed_loop_control/Probe34/sub/generation'
//  '<S206>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub'
//  '<S207>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S208>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub'
//  '<S209>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S210>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub'
//  '<S211>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S212>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub'
//  '<S213>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S214>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub'
//  '<S215>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S216>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub'
//  '<S217>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S218>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI'
//  '<S219>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI'
//  '<S220>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup'
//  '<S221>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain'
//  '<S222>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative'
//  '<S223>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter'
//  '<S224>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs'
//  '<S225>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain'
//  '<S226>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain'
//  '<S227>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk'
//  '<S228>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator'
//  '<S229>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs'
//  '<S230>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy'
//  '<S231>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain'
//  '<S232>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy'
//  '<S233>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain'
//  '<S234>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal'
//  '<S235>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation'
//  '<S236>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk'
//  '<S237>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum'
//  '<S238>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk'
//  '<S239>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode'
//  '<S240>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum'
//  '<S241>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral'
//  '<S242>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain'
//  '<S243>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal'
//  '<S244>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal'
//  '<S245>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal'
//  '<S246>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup/Back Calculation'
//  '<S247>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain/Disabled'
//  '<S248>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative/Disabled'
//  '<S249>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter/Disabled'
//  '<S250>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs/Disabled'
//  '<S251>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain/Internal Parameters'
//  '<S252>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain/Passthrough'
//  '<S253>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S254>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator/Discrete'
//  '<S255>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs/Internal IC'
//  '<S256>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S257>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain/Disabled'
//  '<S258>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy/Disabled'
//  '<S259>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S260>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal/Disabled'
//  '<S261>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation/Enabled'
//  '<S262>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk/Disabled'
//  '<S263>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum/Sum_PI'
//  '<S264>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk/Disabled'
//  '<S265>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode/Disabled'
//  '<S266>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S267>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S268>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S269>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal/Forward_Path'
//  '<S270>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal/Internal PreInt'
//  '<S271>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal/Forward_Path'
//  '<S272>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup'
//  '<S273>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain'
//  '<S274>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative'
//  '<S275>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter'
//  '<S276>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs'
//  '<S277>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain'
//  '<S278>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain'
//  '<S279>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk'
//  '<S280>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator'
//  '<S281>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs'
//  '<S282>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy'
//  '<S283>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain'
//  '<S284>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy'
//  '<S285>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain'
//  '<S286>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal'
//  '<S287>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation'
//  '<S288>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk'
//  '<S289>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum'
//  '<S290>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk'
//  '<S291>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode'
//  '<S292>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum'
//  '<S293>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral'
//  '<S294>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain'
//  '<S295>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal'
//  '<S296>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal'
//  '<S297>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal'
//  '<S298>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup/Back Calculation'
//  '<S299>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain/Disabled'
//  '<S300>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative/Disabled'
//  '<S301>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter/Disabled'
//  '<S302>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs/Disabled'
//  '<S303>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain/Internal Parameters'
//  '<S304>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain/Passthrough'
//  '<S305>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S306>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator/Discrete'
//  '<S307>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs/Internal IC'
//  '<S308>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S309>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain/Disabled'
//  '<S310>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy/Disabled'
//  '<S311>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S312>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal/Disabled'
//  '<S313>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation/Enabled'
//  '<S314>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk/Disabled'
//  '<S315>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum/Sum_PI'
//  '<S316>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk/Disabled'
//  '<S317>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode/Disabled'
//  '<S318>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S319>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S320>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S321>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal/Forward_Path'
//  '<S322>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal/Internal PreInt'
//  '<S323>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal/Forward_Path'
//  '<S324>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S325>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S326>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S327>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S328>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S329>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S330>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S331>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S332>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S333>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S334>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S335>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S336>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/Alpha-Beta-Zero to abc'
//  '<S337>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S338>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S339>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S340>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S341>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S342>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S343>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S344>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S345>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S346>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S347>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S348>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S349>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S350>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S351>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S352>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S353>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S354>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S355>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S356>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S357>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S358>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S359>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S360>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S361>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S362>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S363>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S364>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S365>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S366>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S367>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S368>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S369>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S370>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S371>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S372>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S373>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S374>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S375>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S376>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S377>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S378>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S379>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S380>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/External Reset'
//  '<S381>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S382>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S383>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S384>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S385>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S386>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S387>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S388>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S389>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S390>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S391>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S392>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S393>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S394>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S395>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S396>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S397>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S398>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S399>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S400>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S401>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S402>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S403>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S404>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S405>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S406>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S407>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S408>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S409>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S410>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S411>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S412>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S413>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S414>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S415>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S416>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S417>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S418>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S419>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S420>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S421>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S422>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S423>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S424>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S425>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S426>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S427>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S428>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S429>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S430>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S431>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S432>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/External Reset'
//  '<S433>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S434>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S435>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S436>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S437>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S438>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S439>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S440>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S441>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S442>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S443>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S444>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S445>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S446>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S447>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S448>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S449>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S450>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S451>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S452>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S453>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S454>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S455>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S456>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S457>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S458>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S459>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S460>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI'
//  '<S461>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup'
//  '<S462>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain'
//  '<S463>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative'
//  '<S464>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter'
//  '<S465>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs'
//  '<S466>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain'
//  '<S467>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain'
//  '<S468>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk'
//  '<S469>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator'
//  '<S470>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs'
//  '<S471>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy'
//  '<S472>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain'
//  '<S473>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy'
//  '<S474>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain'
//  '<S475>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal'
//  '<S476>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation'
//  '<S477>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk'
//  '<S478>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum'
//  '<S479>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk'
//  '<S480>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode'
//  '<S481>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum'
//  '<S482>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral'
//  '<S483>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain'
//  '<S484>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal'
//  '<S485>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal'
//  '<S486>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal'
//  '<S487>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S488>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S489>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S490>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain/Disabled'
//  '<S491>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative/Disabled'
//  '<S492>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter/Disabled'
//  '<S493>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs/Disabled'
//  '<S494>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain/Internal Parameters'
//  '<S495>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain/Passthrough'
//  '<S496>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S497>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator/Discrete'
//  '<S498>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs/Internal IC'
//  '<S499>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S500>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain/Disabled'
//  '<S501>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy/Disabled'
//  '<S502>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S503>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal/Disabled'
//  '<S504>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation/Enabled'
//  '<S505>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk/Disabled'
//  '<S506>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum/Sum_PI'
//  '<S507>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk/Disabled'
//  '<S508>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode/Disabled'
//  '<S509>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S510>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S511>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S512>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal/Forward_Path'
//  '<S513>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal/Internal PreInt'
//  '<S514>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal/Forward_Path'
//  '<S515>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S516>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S517>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S518>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S519>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S520>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S521>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S522>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S523>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S524>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S525>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S526>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S527>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S528>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S529>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S530>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S531>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S532>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S533>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S534>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S535>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S536>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S537>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S538>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S539>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S540>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S541>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S542>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S543>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S544>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S545>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S546>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S547>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S548>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S549>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S550>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S551>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S552>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S553>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S554>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S555>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S556>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S557>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/Alpha-Beta-Zero to abc'
//  '<S558>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero'
//  '<S559>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S560>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S561>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S562>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S563>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S564>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S565>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S566>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S567>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S568>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S569>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S570>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S571>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S572>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S573>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S574>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S575>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S576>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S577>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S578>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S579>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S580>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'
//  '<S581>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3/sub'
//  '<S582>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S583>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter4/sub'
//  '<S584>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter4/sub/generation'
//  '<S585>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter5/sub'
//  '<S586>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter5/sub/generation'

#endif                                 // imperix_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
