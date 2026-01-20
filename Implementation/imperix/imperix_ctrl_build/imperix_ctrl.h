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
// Model version                  : 19.67
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Jan 20 15:15:51 2026
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

// Block signals for system '<S61>/Moving Average'
struct B_MovingAverage_imperix_ctrl_T {
  real_T MovingAverage[6];             // '<S61>/Moving Average'
};

// Block states (default storage) for system '<S61>/Moving Average'
struct DW_MovingAverage_imperix_ctrl_T {
  dsp_simulink_MovingAverage_im_T obj; // '<S61>/Moving Average'
  boolean_T objisempty;                // '<S61>/Moving Average'
};

// Block signals (default storage)
struct B_imperix_ctrl_T {
  real_T TmpRTBAtSum6Inport1;          // '<S1>/Constant'
  real_T In;                           // '<S600>/In'
  real_T Fcn;                          // '<S557>/Fcn'
  real_T Fcn1;                         // '<S557>/Fcn1'
  real_T Fcn_c;                        // '<S556>/Fcn'
  real_T Fcn1_p;                       // '<S556>/Fcn1'
  real_T Fcn_b;                        // '<S484>/Fcn'
  real_T Fcn1_i;                       // '<S484>/Fcn1'
  real_T Fcn_d;                        // '<S483>/Fcn'
  real_T Fcn1_d;                       // '<S483>/Fcn1'
  real_T In_h[6];                      // '<S372>/In'
  real_T In_c[6];                      // '<S371>/In'
  real32_T ADC;                        // '<S106>/ADC'
  real32_T ADC_m;                      // '<S108>/ADC'
  real32_T ADC_c;                      // '<S98>/ADC'
  real32_T ADC_n;                      // '<S86>/ADC'
  real32_T ADC_g;                      // '<S100>/ADC'
  real32_T ADC_p;                      // '<S102>/ADC'
  real32_T SFunction;                  // '<S616>/S-Function'
  real32_T DataTypeConversion;         // '<S184>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S186>/Data Type Conversion'
  real32_T ADC_o;                      // '<S94>/ADC'
  real32_T ADC_e;                      // '<S110>/ADC'
  real32_T ADC_l;                      // '<S88>/ADC'
  real32_T ADC_nj;                     // '<S96>/ADC'
  real32_T ADC_mz;                     // '<S90>/ADC'
  real32_T ADC_k;                      // '<S92>/ADC'
  real32_T DataTypeConversion_c;       // '<S188>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S190>/Data Type Conversion'
  real32_T ADC_f;                      // '<S104>/ADC'
  real32_T DataTypeConversion_a;       // '<S192>/Data Type Conversion'
  real32_T SFunction_e;                // '<S622>/S-Function'
  real32_T SFunction_o;                // '<S626>/S-Function'
  real32_T DataTypeConversion_cf;      // '<S194>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S196>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S198>/Data Type Conversion'
  real32_T DataTypeConversion_o;       // '<S200>/Data Type Conversion'
  real32_T DataTypeConversion_k1;      // '<S202>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S204>/Data Type Conversion'
  real32_T SFunction_i;                // '<S614>/S-Function'
  real32_T SFunction_p;                // '<S620>/S-Function'
  real32_T SFunction_h;                // '<S624>/S-Function'
  real32_T DataTypeConversion_i;       // '<S206>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S208>/Data Type Conversion'
  real32_T DataTypeConversion_hg;      // '<S210>/Data Type Conversion'
  real32_T DataTypeConversion_as;      // '<S212>/Data Type Conversion'
  real32_T DataTypeConversion_f;       // '<S214>/Data Type Conversion'
  real32_T DataTypeConversion_il;      // '<S216>/Data Type Conversion'
  real32_T DataTypeConversion_ep;      // '<S218>/Data Type Conversion'
  real32_T DataTypeConversion_ly;      // '<S220>/Data Type Conversion'
  real32_T DataTypeConversion_hm;      // '<S222>/Data Type Conversion'
  real32_T DataTypeConversion_fv;      // '<S224>/Data Type Conversion'
  real32_T DataTypeConversion_nx;      // '<S226>/Data Type Conversion'
  real32_T DataTypeConversion_b;       // '<S228>/Data Type Conversion'
  real32_T DataTypeConversion_of;      // '<S230>/Data Type Conversion'
  real32_T DataTypeConversion_ch;      // '<S232>/Data Type Conversion'
  real32_T DataTypeConversion_cz;      // '<S234>/Data Type Conversion'
  real32_T DataTypeConversion_ci;      // '<S236>/Data Type Conversion'
  real32_T DataTypeConversion_k2;      // '<S238>/Data Type Conversion'
  real32_T ADC_h;                      // '<S84>/ADC'
  real32_T DataTypeConversion_nc;      // '<S240>/Data Type Conversion'
  real32_T DataTypeConversion_lx;      // '<S242>/Data Type Conversion'
  real32_T DataTypeConversion_kf;      // '<S244>/Data Type Conversion'
  real32_T DataTypeConversion_ex;      // '<S246>/Data Type Conversion'
  real32_T DataTypeConversion_p2;      // '<S248>/Data Type Conversion'
  real32_T DataTypeConversion_ok;      // '<S250>/Data Type Conversion'
  real32_T DataTypeConversion_j;       // '<S252>/Data Type Conversion'
  real32_T SFunction_c;                // '<S618>/S-Function'
  real32_T SFunction_a;                // '<S123>/S-Function'
  real32_T Gain1[3];                   // '<S115>/Gain1'
  real32_T SFunction_em;               // '<S121>/S-Function'
  real32_T DataTypeConversion1_l;      // '<S359>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S359>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S359>/Data Type Conversion3'
  real32_T DataTypeConversion1_p;      // '<S360>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S360>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S360>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S361>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S361>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S361>/Data Type Conversion3'
  real32_T DataTypeConversion1_f;      // '<S362>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S362>/Data Type Conversion2'
  real32_T DataTypeConversion3_gf;     // '<S362>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S485>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S485>/Data Type Conversion2'
  real32_T DataTypeConversion3_gp;     // '<S485>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S486>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S486>/Data Type Conversion2'
  real32_T DataTypeConversion3_gl;     // '<S486>/Data Type Conversion3'
  real32_T DataTypeConversion1_po;     // '<S487>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S487>/Data Type Conversion2'
  real32_T DataTypeConversion3_m;      // '<S487>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S488>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S488>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S488>/Data Type Conversion3'
  real32_T DataTypeConversion1_h3;     // '<S558>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S558>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S558>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S559>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S559>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S559>/Data Type Conversion3'
  real32_T DataTypeConversion1_fz;     // '<S560>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S560>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S560>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S561>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S561>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S561>/Data Type Conversion3'
  real32_T DataTypeConversion1_a;      // '<S570>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S570>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S570>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S571>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S571>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S571>/Data Type Conversion3'
  real32_T DataTypeConversion1_l4;     // '<S572>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S572>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S572>/Data Type Conversion3'
  real32_T DataTypeConversion1_bg;     // '<S573>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S573>/Data Type Conversion2'
  real32_T DataTypeConversion3_bs;     // '<S573>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S582>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S582>/Data Type Conversion2'
  real32_T DataTypeConversion3_bsx;    // '<S582>/Data Type Conversion3'
  real32_T DataTypeConversion1_o;      // '<S583>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S583>/Data Type Conversion2'
  real32_T DataTypeConversion3_hm;     // '<S583>/Data Type Conversion3'
  real32_T DataTypeConversion1_ay;     // '<S584>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S584>/Data Type Conversion2'
  real32_T DataTypeConversion3_ip;     // '<S584>/Data Type Conversion3'
  real32_T DataTypeConversion1_pf;     // '<S585>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S585>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S585>/Data Type Conversion3'
  real32_T DataTypeConversion1_al;     // '<S601>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S601>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S601>/Data Type Conversion3'
  real32_T DataTypeConversion1_ig;     // '<S602>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S602>/Data Type Conversion2'
  real32_T DataTypeConversion3_bt;     // '<S602>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S603>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S603>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S603>/Data Type Conversion3'
  real32_T DataTypeConversion1_gw;     // '<S604>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S604>/Data Type Conversion2'
  real32_T DataTypeConversion3_bm;     // '<S604>/Data Type Conversion3'
  B_MovingAverage_imperix_ctrl_T MovingAverage_p;// '<S61>/Moving Average'
  B_MovingAverage_imperix_ctrl_T MovingAverage;// '<S61>/Moving Average'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_ctrl_T {
  dsp_simulink_MovingAverage_im_T obj; // '<S74>/Moving Average'
  real_T SFunction_DSTATE;             // '<S616>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S184>/S-Function'
  real_T SFunction_DSTATE_aa;          // '<S186>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S188>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S190>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S192>/S-Function'
  real_T UnitDelay_DSTATE[2];          // '<S63>/Unit Delay'
  real_T SFunction_DSTATE_b;           // '<S622>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S626>/S-Function'
  real_T SFunction_DSTATE_cj;          // '<S194>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S196>/S-Function'
  real_T SFunction_DSTATE_bm;          // '<S198>/S-Function'
  real_T UnitDelay1_DSTATE;            // '<S21>/Unit Delay1'
  real_T SFunction_DSTATE_o;           // '<S200>/S-Function'
  real_T Integrator_DSTATE;            // '<S165>/Integrator'
  real_T SFunction_DSTATE_jm;          // '<S202>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S204>/S-Function'
  real_T SFunction_DSTATE_fo;          // '<S614>/S-Function'
  real_T SFunction_DSTATE_am;          // '<S620>/S-Function'
  real_T SFunction_DSTATE_iz;          // '<S624>/S-Function'
  real_T Integrator_DSTATE_d;          // '<S341>/Integrator'
  real_T Integrator_DSTATE_i;          // '<S289>/Integrator'
  real_T Integrator_DSTATE_j;          // '<S411>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S463>/Integrator'
  real_T SFunction_DSTATE_f5;          // '<S206>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S208>/S-Function'
  real_T SFunction_DSTATE_nw;          // '<S210>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S212>/S-Function'
  real_T SFunction_DSTATE_o5;          // '<S214>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S216>/S-Function'
  real_T SFunction_DSTATE_p0;          // '<S218>/S-Function'
  real_T SFunction_DSTATE_dq;          // '<S220>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S222>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S224>/S-Function'
  real_T SFunction_DSTATE_pb;          // '<S226>/S-Function'
  real_T SFunction_DSTATE_dh;          // '<S228>/S-Function'
  real_T SFunction_DSTATE_gh;          // '<S230>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S232>/S-Function'
  real_T SFunction_DSTATE_fx;          // '<S234>/S-Function'
  real_T SFunction_DSTATE_lk;          // '<S236>/S-Function'
  real_T SFunction_DSTATE_fm;          // '<S238>/S-Function'
  real_T SFunction_DSTATE_na;          // '<S240>/S-Function'
  real_T SFunction_DSTATE_pq;          // '<S242>/S-Function'
  real_T SFunction_DSTATE_fg;          // '<S244>/S-Function'
  real_T SFunction_DSTATE_fc;          // '<S246>/S-Function'
  real_T SFunction_DSTATE_ai;          // '<S248>/S-Function'
  real_T SFunction_DSTATE_id;          // '<S250>/S-Function'
  real_T SFunction_DSTATE_pm;          // '<S252>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S618>/S-Function'
  real_T SFunction_DSTATE_ij;          // '<S123>/S-Function'
  real_T SFunction_DSTATE_em;          // '<S117>/S-Function'
  real_T SFunction_DSTATE_kl;          // '<S119>/S-Function'
  real_T SFunction_DSTATE_bx;          // '<S121>/S-Function'
  real_T Integrator_DSTATE_p;          // '<S534>/Integrator'
  real_T SFunction_DSTATE_n5;          // '<S126>/S-Function'
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
  real32_T DiscreteTimeIntegrator1_DSTATE;// '<S17>/Discrete-Time Integrator1'
  int8_T Integrator_PrevResetState;    // '<S341>/Integrator'
  int8_T Integrator_PrevResetState_b;  // '<S289>/Integrator'
  int8_T Integrator_PrevResetState_n;  // '<S411>/Integrator'
  int8_T Integrator_PrevResetState_i;  // '<S463>/Integrator'
  boolean_T xt_est_apriori_not_empty;  // '<S1>/Kalman Filter'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  DW_MovingAverage_imperix_ctrl_T MovingAverage_p;// '<S61>/Moving Average'
  DW_MovingAverage_imperix_ctrl_T MovingAverage;// '<S61>/Moving Average'
};

// Zero-crossing (trigger) state
struct PrevZCX_imperix_ctrl_T {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S74>/Sample and Hold'
  ZCSigState SampleandHold_Trig_ZCE_i; // '<S62>/Sample and Hold'
  ZCSigState SampleandHold_Trig_ZCE_f; // '<S61>/Sample and Hold'
};

// Parameters (default storage)
struct P_imperix_ctrl_T_ {
  struct_1mUndb4d19cpHVlbIkwLFC KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Constant'
                                          //    '<S1>/Gain'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain4'
                                          //    '<S21>/Unit Delay1'
                                          //    '<S65>/Gain1'
                                          //    '<S67>/Constant1'

  struct_IJte2L6GJt53g0zOe1fDuD IM;    // Variable: IM
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
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain5'
                                          //    '<S63>/Gain'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S281>/Kb'
                                          //    '<S286>/Integral Gain'
                                          //    '<S294>/Proportional Gain'
                                          //    '<S296>/Saturation'
                                          //    '<S333>/Kb'
                                          //    '<S338>/Integral Gain'
                                          //    '<S346>/Proportional Gain'
                                          //    '<S348>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S1>/Gain16'
                                          //    '<S403>/Kb'
                                          //    '<S408>/Integral Gain'
                                          //    '<S416>/Proportional Gain'
                                          //    '<S418>/Saturation'
                                          //    '<S455>/Kb'
                                          //    '<S460>/Integral Gain'
                                          //    '<S468>/Proportional Gain'
                                          //    '<S470>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S1>/Gain6'
                                          //    '<S1>/Gain7'
                                          //    '<S531>/Integral Gain'
                                          //    '<S539>/Proportional Gain'
                                          //    '<S541>/Saturation'
                                          //    '<S526>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEB;   // Variable: TEB
                                          //  Referenced by:
                                          //    '<S21>/Gain1'
                                          //    '<S21>/Gain2'
                                          //    '<S162>/Integral Gain'
                                          //    '<S170>/Proportional Gain'
                                          //    '<S172>/Saturation'
                                          //    '<S157>/DeadZone'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S552>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S376>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_h;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_h
                                  //  Referenced by: '<S595>/Constant'

  real_T PIDController1_InitialCondition;
                              // Mask Parameter: PIDController1_InitialCondition
                                 //  Referenced by: '<S165>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S341>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S289>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S411>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S463>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S534>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S554>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S555>/Constant'

  real_T CompareToConstant_const_l; // Mask Parameter: CompareToConstant_const_l
                                       //  Referenced by: '<S481>/Constant'

  real_T CompareToConstant1_const_l;
                                   // Mask Parameter: CompareToConstant1_const_l
                                      //  Referenced by: '<S482>/Constant'

  real_T CompareToConstant_const_n; // Mask Parameter: CompareToConstant_const_n
                                       //  Referenced by: '<S596>/Constant'

  real_T CompareToConstant1_const_p;
                                   // Mask Parameter: CompareToConstant1_const_p
                                      //  Referenced by: '<S597>/Constant'

  real_T _Y0;                          // Expression: initCond
                                          //  Referenced by: '<S371>/ '

  real_T _Y0_o;                        // Expression: initCond
                                          //  Referenced by: '<S372>/ '

  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S483>/alpha_beta'

  real_T alpha_beta_Y0_n[2];           // Expression: [0,0]
                                          //  Referenced by: '<S484>/alpha_beta'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S556>/dq'

  real_T dq_Y0_f[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S557>/dq'

  real_T alpha_beta_Y0_e[2];           // Expression: [0,0]
                                          //  Referenced by: '<S598>/alpha_beta'

  real_T alpha_beta_Y0_o[2];           // Expression: [0,0]
                                          //  Referenced by: '<S599>/alpha_beta'

  real_T _Y0_i;                        // Expression: initCond
                                          //  Referenced by: '<S600>/ '

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S155>/Constant1'

  real_T Constant1_Value_d;            // Expression: 0
                                          //  Referenced by: '<S524>/Constant1'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S106>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S108>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S98>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S86>/ADC'

  real_T ADC_P8_m5;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S100>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S102>/ADC'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S616>/S-Function'

  real_T ADC_P8_lu;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S94>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S110>/ADC'

  real_T ADC_P8_o;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S88>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S96>/ADC'

  real_T ADC_P8_l2;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S90>/ADC'

  real_T ADC_P8_mv;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S92>/ADC'

  real_T ADC_P8_gp;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S104>/ADC'

  real_T Gain8_Gain;                   // Expression: 1/(50*pi)
                                          //  Referenced by: '<S1>/Gain8'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S69>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S553>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S553>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S63>/Unit Delay'

  real_T SFunction_P17_p;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S622>/S-Function'

  real_T SFunction_P17_h;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S626>/S-Function'

  real_T TmpRTBAtSum6Inport1_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S165>/Integrator'

  real_T SFunction_P17_n;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S614>/S-Function'

  real_T SFunction_P17_i;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S620>/S-Function'

  real_T SFunction_P17_f;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S624>/S-Function'

  real_T Integrator_gainval_e;       // Computed Parameter: Integrator_gainval_e
                                        //  Referenced by: '<S341>/Integrator'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T Integrator_gainval_a;       // Computed Parameter: Integrator_gainval_a
                                        //  Referenced by: '<S289>/Integrator'

  real_T Integrator_gainval_i;       // Computed Parameter: Integrator_gainval_i
                                        //  Referenced by: '<S411>/Integrator'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S463>/Integrator'

  real_T Gain9_Gain;                   // Expression: 1/(50*pi)
                                          //  Referenced by: '<S1>/Gain9'

  real_T Gain20_Gain;                  // Expression: 1/(100*pi)
                                          //  Referenced by: '<S1>/Gain20'

  real_T Gain21_Gain;                  // Expression: 180/pi
                                          //  Referenced by: '<S1>/Gain21'

  real_T ADC_P8_gc;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S84>/ADC'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S618>/S-Function'

  real_T SFunction_P17_nc;             // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S123>/S-Function'

  real_T Constant3_Value;              // Expression: 260
                                          //  Referenced by: '<S17>/Constant3'

  real_T SFunction_P17_o;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S121>/S-Function'

  real_T Constant_Value[2];            // Expression: [0; 0]
                                          //  Referenced by: '<S17>/Constant'

  real_T Integrator_gainval_a3;     // Computed Parameter: Integrator_gainval_a3
                                       //  Referenced by: '<S534>/Integrator'

  real_T Gain1_Gain_m;                 // Expression: 2
                                          //  Referenced by: '<S63>/Gain1'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S155>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S359>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S360>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S361>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S362>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S485>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S486>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S487>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S488>/phase'

  real_T Clamping_zero_Value_a;        // Expression: 0
                                          //  Referenced by: '<S524>/Clamping_zero'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S558>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S559>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S560>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S561>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S570>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S571>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S572>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S573>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S582>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S583>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S584>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S585>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S601>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S602>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S603>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S604>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S364>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S364>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S364>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S366>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S366>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S366>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S368>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S368>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S368>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S370>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S370>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S370>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S490>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S490>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S490>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S492>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S492>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S492>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S494>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S494>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S494>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S496>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S496>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S496>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S563>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S563>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S563>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S565>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S565>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S565>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S567>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S567>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S567>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S569>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S569>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S569>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S575>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S575>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S575>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S577>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S577>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S577>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S579>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S579>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S579>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S581>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S581>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S581>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S587>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S587>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S587>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S589>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S589>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S589>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S591>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S591>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S591>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S593>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S593>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S593>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S606>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S606>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S606>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S608>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S608>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S608>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S610>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S610>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S610>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S612>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S612>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S612>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S106>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S106>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S108>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S98>/ADC'

  real32_T ADC_P3_p;                   // Expression: single(offset)
                                          //  Referenced by: '<S98>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S86>/ADC'

  real32_T ADC_P3_h;                   // Expression: single(offset)
                                          //  Referenced by: '<S86>/ADC'

  real32_T ADC_P2_l;                   // Expression: single(gain)
                                          //  Referenced by: '<S100>/ADC'

  real32_T ADC_P3_o;                   // Expression: single(offset)
                                          //  Referenced by: '<S100>/ADC'

  real32_T ADC_P2_pn;                  // Expression: single(gain)
                                          //  Referenced by: '<S102>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S102>/ADC'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S616>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S616>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S616>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S616>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S616>/S-Function'

  real32_T SFunction_P6_l;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S184>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S186>/S-Function'

  real32_T ADC_P2_fx;                  // Expression: single(gain)
                                          //  Referenced by: '<S94>/ADC'

  real32_T ADC_P3_oa;                  // Expression: single(offset)
                                          //  Referenced by: '<S94>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S110>/ADC'

  real32_T ADC_P3_d;                   // Expression: single(offset)
                                          //  Referenced by: '<S110>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P2_ik;                  // Expression: single(gain)
                                          //  Referenced by: '<S96>/ADC'

  real32_T ADC_P3_i;                   // Expression: single(offset)
                                          //  Referenced by: '<S96>/ADC'

  real32_T ADC_P2_i5;                  // Expression: single(gain)
                                          //  Referenced by: '<S90>/ADC'

  real32_T ADC_P3_pf;                  // Expression: single(offset)
                                          //  Referenced by: '<S90>/ADC'

  real32_T ADC_P2_a;                   // Expression: single(gain)
                                          //  Referenced by: '<S92>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S92>/ADC'

  real32_T SFunction_P6_l1;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S188>/S-Function'

  real32_T SFunction_P6_gj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S190>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S190>/S-Function'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S104>/ADC'

  real32_T ADC_P3_di;                  // Expression: single(offset)
                                          //  Referenced by: '<S104>/ADC'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S192>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S192>/S-Function'

  real32_T SFunction_P3_l;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S622>/S-Function'

  real32_T SFunction_P4_f;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S622>/S-Function'

  real32_T SFunction_P5_l;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S622>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(0)
                                          //  Referenced by: '<S622>/S-Function'

  real32_T SFunction_P7_l;             // Expression: single(0)
                                          //  Referenced by: '<S622>/S-Function'

  real32_T SFunction_P3_d;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S626>/S-Function'

  real32_T SFunction_P4_m;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S626>/S-Function'

  real32_T SFunction_P5_p;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S626>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(0)
                                          //  Referenced by: '<S626>/S-Function'

  real32_T SFunction_P7_n;             // Expression: single(0)
                                          //  Referenced by: '<S626>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S194>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S194>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S196>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S196>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S198>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S198>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S200>/S-Function'

  real32_T SFunction_P12_ho;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S200>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S202>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S202>/S-Function'

  real32_T SFunction_P6_hs;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S204>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S204>/S-Function'

  real32_T SFunction_P3_o;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S614>/S-Function'

  real32_T SFunction_P4_d;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S614>/S-Function'

  real32_T SFunction_P5_pl;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S614>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(0)
                                          //  Referenced by: '<S614>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S614>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S620>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S620>/S-Function'

  real32_T SFunction_P5_n;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S620>/S-Function'

  real32_T SFunction_P6_jg;            // Expression: single(0)
                                          //  Referenced by: '<S620>/S-Function'

  real32_T SFunction_P7_il;            // Expression: single(0)
                                          //  Referenced by: '<S620>/S-Function'

  real32_T SFunction_P3_h;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S624>/S-Function'

  real32_T SFunction_P4_n;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S624>/S-Function'

  real32_T SFunction_P5_m;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S624>/S-Function'

  real32_T SFunction_P6_o;             // Expression: single(0)
                                          //  Referenced by: '<S624>/S-Function'

  real32_T SFunction_P7_k;             // Expression: single(0)
                                          //  Referenced by: '<S624>/S-Function'

  real32_T SFunction_P6_n2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S206>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S206>/S-Function'

  real32_T SFunction_P6_c3;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S208>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S208>/S-Function'

  real32_T SFunction_P6_ii;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S210>/S-Function'

  real32_T SFunction_P12_eo;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S210>/S-Function'

  real32_T SFunction_P6_iy;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S212>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S212>/S-Function'

  real32_T SFunction_P6_mc;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S214>/S-Function'

  real32_T SFunction_P12_gf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S214>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S216>/S-Function'

  real32_T SFunction_P12_nf;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S216>/S-Function'

  real32_T SFunction_P6_jl;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S218>/S-Function'

  real32_T SFunction_P12_jl;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S218>/S-Function'

  real32_T SFunction_P6_hb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S220>/S-Function'

  real32_T SFunction_P12_cn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S220>/S-Function'

  real32_T SFunction_P6_bm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S222>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S222>/S-Function'

  real32_T SFunction_P6_jq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P12_oz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P12_ow;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P6_pf;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P6_ls;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P12_bn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P6_ie;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P12_hk;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P6_pk;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P12_nl;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P6_jle;           // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P12_ky;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P6_dp;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P12_ih;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T ADC_P2_g;                   // Expression: single(gain)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P3_ht;                  // Expression: single(offset)
                                          //  Referenced by: '<S84>/ADC'

  real32_T SFunction_P6_fd;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P12_af;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P6_ne;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P12_fa;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P6_c0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P12_om;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P6_dm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P6_j2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P12_bv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P12_gw;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P6_kj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P12_kg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S618>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S618>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S618>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S618>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S618>/S-Function'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T SFunction_P4_e;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T SFunction_P5_mu;            // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T SFunction_P6_oc;            // Expression: single(0)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T SFunction_P7_p;             // Expression: single(0)
                                          //  Referenced by: '<S123>/S-Function'

  real32_T Gain23_Gain;                // Computed Parameter: Gain23_Gain
                                          //  Referenced by: '<S17>/Gain23'

  real32_T Bias1_Bias;                 // Computed Parameter: Bias1_Bias
                                          //  Referenced by: '<S17>/Bias1'

  real32_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S17>/Discrete-Time Integrator1'

  real32_T DiscreteTimeIntegrator1_IC;
                               // Computed Parameter: DiscreteTimeIntegrator1_IC
                                  //  Referenced by: '<S17>/Discrete-Time Integrator1'

  real32_T Gain3_Gain_p[9];            // Computed Parameter: Gain3_Gain_p
                                          //  Referenced by: '<S115>/Gain3'

  real32_T Gain1_Gain_k;               // Computed Parameter: Gain1_Gain_k
                                          //  Referenced by: '<S115>/Gain1'

  real32_T SFunction_P6_it;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S117>/S-Function'

  real32_T SFunction_P12_gh;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S117>/S-Function'

  real32_T SFunction_P6_le;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S119>/S-Function'

  real32_T SFunction_P12_bq;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S119>/S-Function'

  real32_T SFunction_P3_j;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T SFunction_P4_nn;            // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T SFunction_P5_e;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T SFunction_P6_cq;            // Expression: single(0)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T SFunction_P7_iw;            // Expression: single(0)
                                          //  Referenced by: '<S121>/S-Function'

  real32_T Gain22_Gain;                // Computed Parameter: Gain22_Gain
                                          //  Referenced by: '<S17>/Gain22'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S126>/S-Function'

  real32_T SFunction_P3_m5;            // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S126>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S128>/CLK1'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S616>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S184>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S184>/S-Function'

  uint32_T SFunction_P7_e;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S186>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S188>/S-Function'

  uint32_T SFunction_P7_dt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S190>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S190>/S-Function'

  uint32_T SFunction_P7_na;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S192>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S192>/S-Function'

  uint32_T SFunction_P10_b;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S622>/S-Function'

  uint32_T SFunction_P10_br;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S626>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S194>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S194>/S-Function'

  uint32_T SFunction_P7_ko;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S196>/S-Function'

  uint32_T SFunction_P13_gr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S196>/S-Function'

  uint32_T SFunction_P7_dw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S198>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S198>/S-Function'

  uint32_T SFunction_P7_od;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S200>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S200>/S-Function'

  uint32_T SFunction_P7_ku;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S202>/S-Function'

  uint32_T SFunction_P13_ar;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S202>/S-Function'

  uint32_T SFunction_P7_n4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S204>/S-Function'

  uint32_T SFunction_P13_bv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S204>/S-Function'

  uint32_T SFunction_P10_a;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S614>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S620>/S-Function'

  uint32_T SFunction_P10_e;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S624>/S-Function'

  uint32_T SFunction_P7_oc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S206>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S206>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S208>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S208>/S-Function'

  uint32_T SFunction_P7_dz;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S210>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S210>/S-Function'

  uint32_T SFunction_P7_hw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S212>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S212>/S-Function'

  uint32_T SFunction_P7_ag;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S214>/S-Function'

  uint32_T SFunction_P13_fo;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S214>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S216>/S-Function'

  uint32_T SFunction_P13_cr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S216>/S-Function'

  uint32_T SFunction_P7_pf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S218>/S-Function'

  uint32_T SFunction_P13_i2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S218>/S-Function'

  uint32_T SFunction_P7_ci;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S220>/S-Function'

  uint32_T SFunction_P13_ig;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S220>/S-Function'

  uint32_T SFunction_P7_ev;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S222>/S-Function'

  uint32_T SFunction_P13_e;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S222>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P13_nc;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P7_k3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P13_fh;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P7_ju;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P13_lp;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P7_jf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P13_la;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P7_gb;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P13_kn;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P7_op;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P13_db;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P7_bk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P13_ey;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P7_p1;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P13_ia;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P7_nj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P13_dz;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P13_ch;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P7_da;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P7_c3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P13_a1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P7_pg;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P13_oa;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P7_h0;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P13_ob;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S618>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S123>/S-Function'

  uint32_T SFunction_P7_m;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S117>/S-Function'

  uint32_T SFunction_P13_gn;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S117>/S-Function'

  uint32_T SFunction_P7_mm;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S119>/S-Function'

  uint32_T SFunction_P13_fj;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S119>/S-Function'

  uint32_T SFunction_P10_er;           // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S121>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S364>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S364>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S364>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S364>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S364>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S364>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S366>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S366>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S366>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S366>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S366>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S366>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S368>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S368>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S368>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S368>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S368>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S368>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S370>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S370>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S370>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S370>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S370>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S370>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S490>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S490>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S490>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S490>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S490>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S490>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S492>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S492>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S492>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S492>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S492>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S492>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S494>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S494>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S494>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S494>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S494>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S494>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S496>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S496>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S496>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S496>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S496>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S496>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S563>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S563>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S563>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S563>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S563>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S563>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S565>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S565>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S565>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S565>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S565>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S565>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S567>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S567>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S567>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S567>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S567>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S567>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S569>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S569>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S569>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S569>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S569>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S569>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S575>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S575>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S575>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S575>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S575>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S575>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S577>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S577>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S577>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S577>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S577>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S577>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S579>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S579>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S579>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S579>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S579>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S579>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S589>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S589>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S589>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S589>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S589>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S589>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S591>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S591>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S591>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S591>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S591>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S591>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S593>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S606>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S606>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S606>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S606>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S606>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S606>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S608>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S608>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S608>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S608>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S608>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S608>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S610>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S610>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S610>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S610>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S610>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S610>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S612>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S612>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S612>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S612>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S612>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S612>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S106>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P4_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S108>/ADC'

  int16_T ADC_P1_h;                    // Expression: int16(channel)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P4_cw;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S98>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S100>/ADC'

  int16_T ADC_P1_l;                    // Expression: int16(channel)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S102>/ADC'

  int16_T ADC_P9_h5;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S102>/ADC'

  int16_T SFunction_P2_b;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S616>/S-Function'

  int16_T SFunction_P2_p;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S184>/S-Function'

  int16_T SFunction_P3_hu;             // Expression: int16(0)
                                          //  Referenced by: '<S184>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S186>/S-Function'

  int16_T ADC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P1_d;                    // Expression: int16(channel)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P4_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P6_ah;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P9_lj;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S110>/ADC'

  int16_T ADC_P1_pn;                   // Expression: int16(channel)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P4_ah;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P6_am;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S96>/ADC'

  int16_T ADC_P4_al;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S96>/ADC'

  int16_T ADC_P6_b;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S96>/ADC'

  int16_T ADC_P9_j;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S96>/ADC'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P9_i;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S92>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S188>/S-Function'

  int16_T SFunction_P2_nm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S190>/S-Function'

  int16_T SFunction_P3_jc;             // Expression: int16(0)
                                          //  Referenced by: '<S190>/S-Function'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S104>/ADC'

  int16_T ADC_P9_l0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S104>/ADC'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S192>/S-Function'

  int16_T SFunction_P3_kp;             // Expression: int16(0)
                                          //  Referenced by: '<S192>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S622>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S626>/S-Function'

  int16_T SFunction_P2_a1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S194>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S194>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S196>/S-Function'

  int16_T SFunction_P3_ks;             // Expression: int16(0)
                                          //  Referenced by: '<S196>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S198>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S198>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S200>/S-Function'

  int16_T SFunction_P3_e5;             // Expression: int16(0)
                                          //  Referenced by: '<S200>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S202>/S-Function'

  int16_T SFunction_P3_d0;             // Expression: int16(0)
                                          //  Referenced by: '<S202>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S204>/S-Function'

  int16_T SFunction_P3_jt;             // Expression: int16(0)
                                          //  Referenced by: '<S204>/S-Function'

  int16_T SFunction_P2_i2;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S614>/S-Function'

  int16_T SFunction_P2_ao;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S620>/S-Function'

  int16_T SFunction_P2_nt;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S624>/S-Function'

  int16_T SFunction_P2_go;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S206>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S206>/S-Function'

  int16_T SFunction_P2_fp;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S208>/S-Function'

  int16_T SFunction_P3_kv;             // Expression: int16(0)
                                          //  Referenced by: '<S208>/S-Function'

  int16_T SFunction_P2_k3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S210>/S-Function'

  int16_T SFunction_P3_fc;             // Expression: int16(0)
                                          //  Referenced by: '<S210>/S-Function'

  int16_T SFunction_P2_lq;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S212>/S-Function'

  int16_T SFunction_P3_fq;             // Expression: int16(0)
                                          //  Referenced by: '<S212>/S-Function'

  int16_T SFunction_P2_bg;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S214>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S214>/S-Function'

  int16_T SFunction_P2_mq;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S216>/S-Function'

  int16_T SFunction_P3_nu;             // Expression: int16(0)
                                          //  Referenced by: '<S216>/S-Function'

  int16_T SFunction_P2_cm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S218>/S-Function'

  int16_T SFunction_P3_ig;             // Expression: int16(0)
                                          //  Referenced by: '<S218>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S220>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S220>/S-Function'

  int16_T SFunction_P2_oi;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S222>/S-Function'

  int16_T SFunction_P3_kk;             // Expression: int16(0)
                                          //  Referenced by: '<S222>/S-Function'

  int16_T SFunction_P2_a3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P3_f1;             // Expression: int16(0)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P2_c0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P3_gb;             // Expression: int16(0)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P2_m3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P2_bi;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P3_lv;             // Expression: int16(0)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P2_gr;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P3_h4;             // Expression: int16(0)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P2_ke;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P3_el;             // Expression: int16(0)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P2_kb;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P3_n0;             // Expression: int16(0)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P3_bv;             // Expression: int16(0)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T ADC_P1_es;                   // Expression: int16(channel)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P4_ll;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P6_fg;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P9_pv;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S84>/ADC'

  int16_T SFunction_P2_of;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P3_o2;             // Expression: int16(0)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P2_d1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P3_o5;             // Expression: int16(0)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P3_ih;             // Expression: int16(0)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P2_mc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P3_ho;             // Expression: int16(0)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P2_fe;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P3_hl;             // Expression: int16(0)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P2_ni;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P3_ba;             // Expression: int16(0)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P2_ag;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P3_nl;             // Expression: int16(0)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P2_m0;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S618>/S-Function'

  int16_T SFunction_P2_bn;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S123>/S-Function'

  int16_T SFunction_P2_kd;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S117>/S-Function'

  int16_T SFunction_P3_bt;             // Expression: int16(0)
                                          //  Referenced by: '<S117>/S-Function'

  int16_T SFunction_P2_p1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S119>/S-Function'

  int16_T SFunction_P3_l0;             // Expression: int16(0)
                                          //  Referenced by: '<S119>/S-Function'

  int16_T SFunction_P2_h;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S121>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S128>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S128>/CLK1'

  uint16_T SFunction_P1[10];           // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S616>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S616>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S616>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S616>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S616>/S-Function'

  uint16_T SFunction_P1_e[3];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P5_pc;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P14_e[5];         // Computed Parameter: SFunction_P14_e
                                          //  Referenced by: '<S184>/S-Function'

  uint16_T SFunction_P1_o[3];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S186>/S-Function'

  uint16_T SFunction_P1_f[3];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P5_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S188>/S-Function'

  uint16_T SFunction_P1_g[3];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P5_eb;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P8_dm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S190>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S192>/S-Function'

  uint16_T SFunction_P1_j[9];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S622>/S-Function'

  uint16_T SFunction_P9_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S622>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S622>/S-Function'

  uint16_T SFunction_P14_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S622>/S-Function'

  uint16_T SFunction_P15_g;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S622>/S-Function'

  uint16_T SFunction_P1_b[8];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S626>/S-Function'

  uint16_T SFunction_P9_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S626>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S626>/S-Function'

  uint16_T SFunction_P14_j0;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S626>/S-Function'

  uint16_T SFunction_P15_p;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S626>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P14_k[5];         // Computed Parameter: SFunction_P14_k
                                          //  Referenced by: '<S194>/S-Function'

  uint16_T SFunction_P1_p[4];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P14_i[5];         // Computed Parameter: SFunction_P14_i
                                          //  Referenced by: '<S196>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P5_kp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P8_de;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P11_pl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P14_l4[5];        // Computed Parameter: SFunction_P14_l4
                                          //  Referenced by: '<S198>/S-Function'

  uint16_T SFunction_P1_pv[6];         // Computed Parameter: SFunction_P1_pv
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P5_m5;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S200>/S-Function'

  uint16_T SFunction_P1_lq[4];         // Computed Parameter: SFunction_P1_lq
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P14_jp[5];        // Computed Parameter: SFunction_P14_jp
                                          //  Referenced by: '<S202>/S-Function'

  uint16_T SFunction_P1_fh[2];         // Computed Parameter: SFunction_P1_fh
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P11_plx;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S204>/S-Function'

  uint16_T SFunction_P1_i[5];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S614>/S-Function'

  uint16_T SFunction_P9_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S614>/S-Function'

  uint16_T SFunction_P11_ad;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S614>/S-Function'

  uint16_T SFunction_P14_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S614>/S-Function'

  uint16_T SFunction_P15_j;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S614>/S-Function'

  uint16_T SFunction_P1_fw[5];         // Computed Parameter: SFunction_P1_fw
                                          //  Referenced by: '<S620>/S-Function'

  uint16_T SFunction_P9_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S620>/S-Function'

  uint16_T SFunction_P11_kg;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S620>/S-Function'

  uint16_T SFunction_P14_ie;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S620>/S-Function'

  uint16_T SFunction_P15_f;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S620>/S-Function'

  uint16_T SFunction_P1_bf[8];         // Computed Parameter: SFunction_P1_bf
                                          //  Referenced by: '<S624>/S-Function'

  uint16_T SFunction_P9_i;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S624>/S-Function'

  uint16_T SFunction_P11_bg;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S624>/S-Function'

  uint16_T SFunction_P14_ec;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S624>/S-Function'

  uint16_T SFunction_P15_k;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S624>/S-Function'

  uint16_T SFunction_P1_pw[4];         // Computed Parameter: SFunction_P1_pw
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P11_kr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P14_l44[5];       // Computed Parameter: SFunction_P14_l44
                                          //  Referenced by: '<S206>/S-Function'

  uint16_T SFunction_P1_mb[5];         // Computed Parameter: SFunction_P1_mb
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P5_ku;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P8_pj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S208>/S-Function'

  uint16_T SFunction_P1_ex[4];         // Computed Parameter: SFunction_P1_ex
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P5_gl;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P8_nd;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P11_ab;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S210>/S-Function'

  uint16_T SFunction_P1_a[4];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P5_ll;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P8_gu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P11_it;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P14_f2[5];        // Computed Parameter: SFunction_P14_f2
                                          //  Referenced by: '<S212>/S-Function'

  uint16_T SFunction_P1_eq[5];         // Computed Parameter: SFunction_P1_eq
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P5_ky;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P11_ly;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P14_im[5];        // Computed Parameter: SFunction_P14_im
                                          //  Referenced by: '<S214>/S-Function'

  uint16_T SFunction_P1_mq[4];         // Computed Parameter: SFunction_P1_mq
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P5_oj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P8_kv;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P14_an[5];        // Computed Parameter: SFunction_P14_an
                                          //  Referenced by: '<S216>/S-Function'

  uint16_T SFunction_P1_dd[5];         // Computed Parameter: SFunction_P1_dd
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P5_mo;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S218>/S-Function'

  uint16_T SFunction_P1_h[3];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P5_g0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P8_n5;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P11_fu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P14_nl[5];        // Computed Parameter: SFunction_P14_nl
                                          //  Referenced by: '<S220>/S-Function'

  uint16_T SFunction_P1_bi[4];         // Computed Parameter: SFunction_P1_bi
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P5_jm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P8_p1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P11_lj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P14_nj[5];        // Computed Parameter: SFunction_P14_nj
                                          //  Referenced by: '<S222>/S-Function'

  uint16_T SFunction_P1_ii[6];         // Computed Parameter: SFunction_P1_ii
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P8_da;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P11_pw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P1_h1[6];         // Computed Parameter: SFunction_P1_h1
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P5_h2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P8_c0;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P11_in;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P14_l0[5];        // Computed Parameter: SFunction_P14_l0
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P1_on[9];         // Computed Parameter: SFunction_P1_on
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P5_gn;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P8_eq;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P11_gj;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P14_gn[5];        // Computed Parameter: SFunction_P14_gn
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P1_l3[9];         // Computed Parameter: SFunction_P1_l3
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P5_az;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P11_d2;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P1_j4[6];         // Computed Parameter: SFunction_P1_j4
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P5_ng;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P8_fu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P11_dd;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P14_ih[5];        // Computed Parameter: SFunction_P14_ih
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P1_fx[6];         // Computed Parameter: SFunction_P1_fx
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P5_oh;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P8_oj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P11_gn;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P14_oo[5];        // Computed Parameter: SFunction_P14_oo
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P1_f5[2];         // Computed Parameter: SFunction_P1_f5
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P5_hb;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P11_ib;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P14_gr[5];        // Computed Parameter: SFunction_P14_gr
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P1_ms[2];         // Computed Parameter: SFunction_P1_ms
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P5_h0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P8_nk;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P11_gh;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P14_eu[5];        // Computed Parameter: SFunction_P14_eu
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P1_i2[2];         // Computed Parameter: SFunction_P1_i2
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P5_nv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P8_fz;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P11_dz;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P14_hx[5];        // Computed Parameter: SFunction_P14_hx
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P1_li[3];         // Computed Parameter: SFunction_P1_li
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P5_o4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P8_fj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P11_ar;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P14_ez[5];        // Computed Parameter: SFunction_P14_ez
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P1_if[3];         // Computed Parameter: SFunction_P1_if
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P8_fa;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P11_p3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P14_m3[5];        // Computed Parameter: SFunction_P14_m3
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P1_o2[3];         // Computed Parameter: SFunction_P1_o2
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P5_f0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P8_o2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P14_jj[5];        // Computed Parameter: SFunction_P14_jj
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P1_jg[3];         // Computed Parameter: SFunction_P1_jg
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P5_ov;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P8_n2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P11_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P14_oa[5];        // Computed Parameter: SFunction_P14_oa
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P1_fd[3];         // Computed Parameter: SFunction_P1_fd
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P5_l0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P8_jf;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P11_pu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P14_nc[5];        // Computed Parameter: SFunction_P14_nc
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P1_ll[3];         // Computed Parameter: SFunction_P1_ll
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P5_e4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P8_fw;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P11_hl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P14_hc[5];        // Computed Parameter: SFunction_P14_hc
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P1_md[9];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S618>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S618>/S-Function'

  uint16_T SFunction_P11_atz;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S618>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S618>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S618>/S-Function'

  uint16_T SFunction_P1_i3[5];         // Computed Parameter: SFunction_P1_i3
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P9_f;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P11_gh3;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P14_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P15_l;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S123>/S-Function'

  uint16_T SFunction_P1_la[5];         // Computed Parameter: SFunction_P1_la
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P5_ij;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P8_oj3;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P11_fo;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P14_m3o[5];       // Computed Parameter: SFunction_P14_m3o
                                          //  Referenced by: '<S117>/S-Function'

  uint16_T SFunction_P1_n[5];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P5_jg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P8_pw;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P11_ns;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P14_a5[5];        // Computed Parameter: SFunction_P14_a5
                                          //  Referenced by: '<S119>/S-Function'

  uint16_T SFunction_P1_ne[5];         // Computed Parameter: SFunction_P1_ne
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P9_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P14_ft;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P15_e;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S121>/S-Function'

  uint16_T SFunction_P1_fdr;           // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S126>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S126>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S126>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S364>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S364>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S364>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S366>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S366>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S366>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S368>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S368>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S368>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S370>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S370>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S370>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S490>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S490>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S490>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S492>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S492>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S492>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S494>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S494>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S494>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S496>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S496>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S496>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S563>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S563>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S563>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S565>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S565>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S565>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S567>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S567>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S567>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S569>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S569>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S569>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S575>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S575>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S575>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S577>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S577>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S577>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S579>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S579>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S579>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S581>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S581>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S581>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S587>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S587>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S587>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S589>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S589>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S589>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S591>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S591>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S591>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S593>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S593>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S593>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S606>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S606>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S606>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S608>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S608>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S608>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S610>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S610>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S610>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S612>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S612>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S612>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S106>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S106>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S108>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S98>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S98>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S100>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S100>/ADC'

  boolean_T ADC_P5_ag;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S102>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S102>/ADC'

  boolean_T SFunction_P8_pd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S616>/S-Function'

  boolean_T SFunction_P12_ol;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S616>/S-Function'

  boolean_T SFunction_P13_k0;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S616>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S616>/S-Function'

  boolean_T SFunction_P4_mz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P9_np;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P10_ns;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P15_e3;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S184>/S-Function'

  boolean_T SFunction_P4_ef;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P9_ie;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T SFunction_P15_gx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S186>/S-Function'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S94>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S94>/ADC'

  boolean_T ADC_P5_ju;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S110>/ADC'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P5_av;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S96>/ADC'

  boolean_T ADC_P7_fr;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S96>/ADC'

  boolean_T ADC_P5_o;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S90>/ADC'

  boolean_T ADC_P7_hi;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S90>/ADC'

  boolean_T ADC_P5_n;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S92>/ADC'

  boolean_T ADC_P7_f0;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S92>/ADC'

  boolean_T SFunction_P4_fx;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P10_ah;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S188>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P9_nb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S190>/S-Function'

  boolean_T ADC_P5_f;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S104>/ADC'

  boolean_T ADC_P7_fs;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S104>/ADC'

  boolean_T SFunction_P4_fn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P9_cs;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P10_b1;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S192>/S-Function'

  boolean_T SFunction_P8_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S622>/S-Function'

  boolean_T SFunction_P12_di;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S622>/S-Function'

  boolean_T SFunction_P13_a4;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S622>/S-Function'

  boolean_T SFunction_P16_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S622>/S-Function'

  boolean_T SFunction_P8_dw;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S626>/S-Function'

  boolean_T SFunction_P12_dd;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S626>/S-Function'

  boolean_T SFunction_P13_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S626>/S-Function'

  boolean_T SFunction_P16_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S626>/S-Function'

  boolean_T SFunction_P4_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P9_dz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P10_lt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P15_hv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S194>/S-Function'

  boolean_T SFunction_P4_l3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P9_lt;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P15_pe;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S196>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P9_nf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S198>/S-Function'

  boolean_T SFunction_P4_k;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P10_je;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P15_c;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S200>/S-Function'

  boolean_T SFunction_P4_hz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P10_ap;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P15_af;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S202>/S-Function'

  boolean_T SFunction_P4_i0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P9_ll;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P10_ju;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P15_pd;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S204>/S-Function'

  boolean_T SFunction_P8_o4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S614>/S-Function'

  boolean_T SFunction_P12_fm;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S614>/S-Function'

  boolean_T SFunction_P13_ls;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S614>/S-Function'

  boolean_T SFunction_P16_lv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S614>/S-Function'

  boolean_T SFunction_P8_i;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S620>/S-Function'

  boolean_T SFunction_P12_ls;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S620>/S-Function'

  boolean_T SFunction_P13_pl;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S620>/S-Function'

  boolean_T SFunction_P16_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S620>/S-Function'

  boolean_T SFunction_P8_lk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S624>/S-Function'

  boolean_T SFunction_P12_lk;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S624>/S-Function'

  boolean_T SFunction_P13_nn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S624>/S-Function'

  boolean_T SFunction_P16_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S624>/S-Function'

  boolean_T SFunction_P4_hj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P9_k;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P10_js;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P15_a5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S206>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P10_kx;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P15_mb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S208>/S-Function'

  boolean_T SFunction_P4_c;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P9_be;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P10_lh;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S210>/S-Function'

  boolean_T SFunction_P4_ms;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P9_ek;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P15_gw;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S212>/S-Function'

  boolean_T SFunction_P4_bv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P9_ei;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P10_k3;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P15_px;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S214>/S-Function'

  boolean_T SFunction_P4_fs;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P9_pn;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P10_ak;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P15_f1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S216>/S-Function'

  boolean_T SFunction_P4_lz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P9_lr;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P10_dq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S218>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P9_is;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P10_pp;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P15_aq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S220>/S-Function'

  boolean_T SFunction_P4_o;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P9_mh;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P10_nw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P15_bi;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S222>/S-Function'

  boolean_T SFunction_P4_lm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P9_mg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P10_bm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P15_pq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P4_f5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P9_dx;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P10_ee;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P15_kk;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P4_ju;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P9_ko;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P10_kz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P15_cq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P4_ls;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P9_pg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P10_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P15_bh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P4_nv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P9_or;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P10_lr;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P15_b4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P4_gb;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P9_j5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P15_dp;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P4_kf;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P9_cc;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P10_eo;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P15_eh;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P4_ol;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P10_gt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P15_ar;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T ADC_P5_gg;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P7_b;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T SFunction_P4_dl;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P9_aj;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P10_ar;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P15_dx;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P4_e2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P9_px;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P4_fc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P9_j4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P10_ks;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P15_g2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P4_hg;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P9_g;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P15_l5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P4_gj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P9_p5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P10_nj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P15_po;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P4_fv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P9_bu;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P10_nk;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P15_hr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P4_hr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P9_ft;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P10_kw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P15_ne;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S618>/S-Function'

  boolean_T SFunction_P12_ca;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S618>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S618>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S618>/S-Function'

  boolean_T SFunction_P8_cy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P12_ly;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P13_du;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P16_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S123>/S-Function'

  boolean_T SFunction_P4_gl;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P9_ic;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P10_bu;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P15_mr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S117>/S-Function'

  boolean_T SFunction_P4_fd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P9_f4;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P10_lg;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P15_at;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S119>/S-Function'

  boolean_T SFunction_P8_hi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P12_cz;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P13_kg;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T SFunction_P16_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S121>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S128>/CLK1'

  int8_T Constant_Value_e;             // Computed Parameter: Constant_Value_e
                                          //  Referenced by: '<S155>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S155>/Constant2'

  int8_T Constant3_Value_h;            // Computed Parameter: Constant3_Value_h
                                          //  Referenced by: '<S155>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S155>/Constant4'

  int8_T Constant_Value_h;             // Computed Parameter: Constant_Value_h
                                          //  Referenced by: '<S524>/Constant'

  int8_T Constant2_Value_a;            // Computed Parameter: Constant2_Value_a
                                          //  Referenced by: '<S524>/Constant2'

  int8_T Constant3_Value_j;            // Computed Parameter: Constant3_Value_j
                                          //  Referenced by: '<S524>/Constant3'

  int8_T Constant4_Value_a;            // Computed Parameter: Constant4_Value_a
                                          //  Referenced by: '<S524>/Constant4'

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
//  Block '<S17>/Constant1' : Unused code path elimination
//  Block '<S17>/Gain' : Unused code path elimination
//  Block '<S17>/Sum11' : Unused code path elimination
//  Block '<S373>/Gain3' : Unused code path elimination
//  Block '<S65>/Gain3' : Unused code path elimination
//  Block '<S65>/Gain4' : Unused code path elimination
//  Block '<S65>/Sum3' : Unused code path elimination
//  Block '<S68>/Gain' : Unused code path elimination
//  Block '<S68>/Square' : Unused code path elimination
//  Block '<S594>/Gain3' : Unused code path elimination
//  Block '<S598>/Fcn' : Unused code path elimination
//  Block '<S598>/Fcn1' : Unused code path elimination
//  Block '<S599>/Fcn' : Unused code path elimination
//  Block '<S599>/Fcn1' : Unused code path elimination
//  Block '<S595>/Switch' : Unused code path elimination
//  Block '<S117>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S119>/Data Type Conversion' : Eliminate redundant data type conversion


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
//  '<S3>'   : 'imperix_ctrl/Closed_loop_control/ADC1'
//  '<S4>'   : 'imperix_ctrl/Closed_loop_control/ADC10'
//  '<S5>'   : 'imperix_ctrl/Closed_loop_control/ADC11'
//  '<S6>'   : 'imperix_ctrl/Closed_loop_control/ADC12'
//  '<S7>'   : 'imperix_ctrl/Closed_loop_control/ADC13'
//  '<S8>'   : 'imperix_ctrl/Closed_loop_control/ADC14'
//  '<S9>'   : 'imperix_ctrl/Closed_loop_control/ADC15'
//  '<S10>'  : 'imperix_ctrl/Closed_loop_control/ADC16'
//  '<S11>'  : 'imperix_ctrl/Closed_loop_control/ADC17'
//  '<S12>'  : 'imperix_ctrl/Closed_loop_control/ADC18'
//  '<S13>'  : 'imperix_ctrl/Closed_loop_control/ADC20'
//  '<S14>'  : 'imperix_ctrl/Closed_loop_control/ADC6'
//  '<S15>'  : 'imperix_ctrl/Closed_loop_control/ADC7'
//  '<S16>'  : 'imperix_ctrl/Closed_loop_control/ADC9'
//  '<S17>'  : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping'
//  '<S18>'  : 'imperix_ctrl/Closed_loop_control/Configuration'
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
//  '<S44>'  : 'imperix_ctrl/Closed_loop_control/Probe31'
//  '<S45>'  : 'imperix_ctrl/Closed_loop_control/Probe32'
//  '<S46>'  : 'imperix_ctrl/Closed_loop_control/Probe33'
//  '<S47>'  : 'imperix_ctrl/Closed_loop_control/Probe34'
//  '<S48>'  : 'imperix_ctrl/Closed_loop_control/Probe35'
//  '<S49>'  : 'imperix_ctrl/Closed_loop_control/Probe36'
//  '<S50>'  : 'imperix_ctrl/Closed_loop_control/Probe37'
//  '<S51>'  : 'imperix_ctrl/Closed_loop_control/Probe38'
//  '<S52>'  : 'imperix_ctrl/Closed_loop_control/Probe39'
//  '<S53>'  : 'imperix_ctrl/Closed_loop_control/Probe4'
//  '<S54>'  : 'imperix_ctrl/Closed_loop_control/Probe5'
//  '<S55>'  : 'imperix_ctrl/Closed_loop_control/Probe6'
//  '<S56>'  : 'imperix_ctrl/Closed_loop_control/Probe7'
//  '<S57>'  : 'imperix_ctrl/Closed_loop_control/Probe8'
//  '<S58>'  : 'imperix_ctrl/Closed_loop_control/Probe9'
//  '<S59>'  : 'imperix_ctrl/Closed_loop_control/Subsystem'
//  '<S60>'  : 'imperix_ctrl/Closed_loop_control/Subsystem1'
//  '<S61>'  : 'imperix_ctrl/Closed_loop_control/Subsystem10'
//  '<S62>'  : 'imperix_ctrl/Closed_loop_control/Subsystem11'
//  '<S63>'  : 'imperix_ctrl/Closed_loop_control/Subsystem19'
//  '<S64>'  : 'imperix_ctrl/Closed_loop_control/Subsystem2'
//  '<S65>'  : 'imperix_ctrl/Closed_loop_control/Subsystem20'
//  '<S66>'  : 'imperix_ctrl/Closed_loop_control/Subsystem22'
//  '<S67>'  : 'imperix_ctrl/Closed_loop_control/Subsystem23'
//  '<S68>'  : 'imperix_ctrl/Closed_loop_control/Subsystem24'
//  '<S69>'  : 'imperix_ctrl/Closed_loop_control/Subsystem26'
//  '<S70>'  : 'imperix_ctrl/Closed_loop_control/Subsystem3'
//  '<S71>'  : 'imperix_ctrl/Closed_loop_control/Subsystem4'
//  '<S72>'  : 'imperix_ctrl/Closed_loop_control/Subsystem5'
//  '<S73>'  : 'imperix_ctrl/Closed_loop_control/Subsystem7'
//  '<S74>'  : 'imperix_ctrl/Closed_loop_control/Subsystem8'
//  '<S75>'  : 'imperix_ctrl/Closed_loop_control/Subsystem9'
//  '<S76>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S77>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter11'
//  '<S78>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S79>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S80>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter3'
//  '<S81>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter5'
//  '<S82>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter6'
//  '<S83>'  : 'imperix_ctrl/Closed_loop_control/ADC1/sub'
//  '<S84>'  : 'imperix_ctrl/Closed_loop_control/ADC1/sub/generation'
//  '<S85>'  : 'imperix_ctrl/Closed_loop_control/ADC10/sub'
//  '<S86>'  : 'imperix_ctrl/Closed_loop_control/ADC10/sub/generation'
//  '<S87>'  : 'imperix_ctrl/Closed_loop_control/ADC11/sub'
//  '<S88>'  : 'imperix_ctrl/Closed_loop_control/ADC11/sub/generation'
//  '<S89>'  : 'imperix_ctrl/Closed_loop_control/ADC12/sub'
//  '<S90>'  : 'imperix_ctrl/Closed_loop_control/ADC12/sub/generation'
//  '<S91>'  : 'imperix_ctrl/Closed_loop_control/ADC13/sub'
//  '<S92>'  : 'imperix_ctrl/Closed_loop_control/ADC13/sub/generation'
//  '<S93>'  : 'imperix_ctrl/Closed_loop_control/ADC14/sub'
//  '<S94>'  : 'imperix_ctrl/Closed_loop_control/ADC14/sub/generation'
//  '<S95>'  : 'imperix_ctrl/Closed_loop_control/ADC15/sub'
//  '<S96>'  : 'imperix_ctrl/Closed_loop_control/ADC15/sub/generation'
//  '<S97>'  : 'imperix_ctrl/Closed_loop_control/ADC16/sub'
//  '<S98>'  : 'imperix_ctrl/Closed_loop_control/ADC16/sub/generation'
//  '<S99>'  : 'imperix_ctrl/Closed_loop_control/ADC17/sub'
//  '<S100>' : 'imperix_ctrl/Closed_loop_control/ADC17/sub/generation'
//  '<S101>' : 'imperix_ctrl/Closed_loop_control/ADC18/sub'
//  '<S102>' : 'imperix_ctrl/Closed_loop_control/ADC18/sub/generation'
//  '<S103>' : 'imperix_ctrl/Closed_loop_control/ADC20/sub'
//  '<S104>' : 'imperix_ctrl/Closed_loop_control/ADC20/sub/generation'
//  '<S105>' : 'imperix_ctrl/Closed_loop_control/ADC6/sub'
//  '<S106>' : 'imperix_ctrl/Closed_loop_control/ADC6/sub/generation'
//  '<S107>' : 'imperix_ctrl/Closed_loop_control/ADC7/sub'
//  '<S108>' : 'imperix_ctrl/Closed_loop_control/ADC7/sub/generation'
//  '<S109>' : 'imperix_ctrl/Closed_loop_control/ADC9/sub'
//  '<S110>' : 'imperix_ctrl/Closed_loop_control/ADC9/sub/generation'
//  '<S111>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe'
//  '<S112>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe1'
//  '<S113>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter11'
//  '<S114>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter12'
//  '<S115>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/abc to Alpha-Beta-Zero'
//  '<S116>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe/sub'
//  '<S117>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe/sub/generation'
//  '<S118>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe1/sub'
//  '<S119>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Probe1/sub/generation'
//  '<S120>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter11/sub'
//  '<S121>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter11/sub/generation'
//  '<S122>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter12/sub'
//  '<S123>' : 'imperix_ctrl/Closed_loop_control/Cluster Voltage Mapping/Tunable parameter12/sub/generation'
//  '<S124>' : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S125>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S126>' : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S127>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S128>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S129>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup'
//  '<S130>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain'
//  '<S131>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative'
//  '<S132>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter'
//  '<S133>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs'
//  '<S134>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain'
//  '<S135>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain'
//  '<S136>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk'
//  '<S137>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator'
//  '<S138>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs'
//  '<S139>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy'
//  '<S140>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain'
//  '<S141>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy'
//  '<S142>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain'
//  '<S143>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal'
//  '<S144>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation'
//  '<S145>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk'
//  '<S146>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum'
//  '<S147>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk'
//  '<S148>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode'
//  '<S149>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum'
//  '<S150>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral'
//  '<S151>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain'
//  '<S152>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal'
//  '<S153>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal'
//  '<S154>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal'
//  '<S155>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel'
//  '<S156>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S157>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S158>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain/Disabled'
//  '<S159>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative/Disabled'
//  '<S160>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter/Disabled'
//  '<S161>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs/Disabled'
//  '<S162>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain/Internal Parameters'
//  '<S163>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain/Passthrough'
//  '<S164>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S165>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator/Discrete'
//  '<S166>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs/Internal IC'
//  '<S167>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S168>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain/Disabled'
//  '<S169>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy/Disabled'
//  '<S170>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S171>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal/Disabled'
//  '<S172>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation/Enabled'
//  '<S173>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk/Disabled'
//  '<S174>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum/Sum_PI'
//  '<S175>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk/Disabled'
//  '<S176>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode/Disabled'
//  '<S177>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S178>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S179>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S180>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal/Forward_Path'
//  '<S181>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal/Internal PreInt'
//  '<S182>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal/Forward_Path'
//  '<S183>' : 'imperix_ctrl/Closed_loop_control/Probe/sub'
//  '<S184>' : 'imperix_ctrl/Closed_loop_control/Probe/sub/generation'
//  '<S185>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub'
//  '<S186>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S187>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub'
//  '<S188>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub/generation'
//  '<S189>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub'
//  '<S190>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub/generation'
//  '<S191>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub'
//  '<S192>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S193>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub'
//  '<S194>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S195>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub'
//  '<S196>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub/generation'
//  '<S197>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub'
//  '<S198>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S199>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub'
//  '<S200>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub/generation'
//  '<S201>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub'
//  '<S202>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub/generation'
//  '<S203>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub'
//  '<S204>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub/generation'
//  '<S205>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub'
//  '<S206>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S207>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub'
//  '<S208>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S209>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub'
//  '<S210>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S211>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub'
//  '<S212>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S213>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub'
//  '<S214>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S215>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub'
//  '<S216>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S217>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub'
//  '<S218>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S219>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub'
//  '<S220>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S221>' : 'imperix_ctrl/Closed_loop_control/Probe30/sub'
//  '<S222>' : 'imperix_ctrl/Closed_loop_control/Probe30/sub/generation'
//  '<S223>' : 'imperix_ctrl/Closed_loop_control/Probe31/sub'
//  '<S224>' : 'imperix_ctrl/Closed_loop_control/Probe31/sub/generation'
//  '<S225>' : 'imperix_ctrl/Closed_loop_control/Probe32/sub'
//  '<S226>' : 'imperix_ctrl/Closed_loop_control/Probe32/sub/generation'
//  '<S227>' : 'imperix_ctrl/Closed_loop_control/Probe33/sub'
//  '<S228>' : 'imperix_ctrl/Closed_loop_control/Probe33/sub/generation'
//  '<S229>' : 'imperix_ctrl/Closed_loop_control/Probe34/sub'
//  '<S230>' : 'imperix_ctrl/Closed_loop_control/Probe34/sub/generation'
//  '<S231>' : 'imperix_ctrl/Closed_loop_control/Probe35/sub'
//  '<S232>' : 'imperix_ctrl/Closed_loop_control/Probe35/sub/generation'
//  '<S233>' : 'imperix_ctrl/Closed_loop_control/Probe36/sub'
//  '<S234>' : 'imperix_ctrl/Closed_loop_control/Probe36/sub/generation'
//  '<S235>' : 'imperix_ctrl/Closed_loop_control/Probe37/sub'
//  '<S236>' : 'imperix_ctrl/Closed_loop_control/Probe37/sub/generation'
//  '<S237>' : 'imperix_ctrl/Closed_loop_control/Probe38/sub'
//  '<S238>' : 'imperix_ctrl/Closed_loop_control/Probe38/sub/generation'
//  '<S239>' : 'imperix_ctrl/Closed_loop_control/Probe39/sub'
//  '<S240>' : 'imperix_ctrl/Closed_loop_control/Probe39/sub/generation'
//  '<S241>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub'
//  '<S242>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S243>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub'
//  '<S244>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S245>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub'
//  '<S246>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S247>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub'
//  '<S248>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S249>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub'
//  '<S250>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S251>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub'
//  '<S252>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S253>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI'
//  '<S254>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI'
//  '<S255>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup'
//  '<S256>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain'
//  '<S257>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative'
//  '<S258>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter'
//  '<S259>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs'
//  '<S260>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain'
//  '<S261>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain'
//  '<S262>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk'
//  '<S263>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator'
//  '<S264>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs'
//  '<S265>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy'
//  '<S266>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain'
//  '<S267>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy'
//  '<S268>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain'
//  '<S269>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal'
//  '<S270>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation'
//  '<S271>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk'
//  '<S272>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum'
//  '<S273>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk'
//  '<S274>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode'
//  '<S275>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum'
//  '<S276>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral'
//  '<S277>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain'
//  '<S278>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal'
//  '<S279>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal'
//  '<S280>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal'
//  '<S281>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Anti-windup/Back Calculation'
//  '<S282>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/D Gain/Disabled'
//  '<S283>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/External Derivative/Disabled'
//  '<S284>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter/Disabled'
//  '<S285>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Filter ICs/Disabled'
//  '<S286>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/I Gain/Internal Parameters'
//  '<S287>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain/Passthrough'
//  '<S288>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S289>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator/Discrete'
//  '<S290>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Integrator ICs/Internal IC'
//  '<S291>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S292>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/N Gain/Disabled'
//  '<S293>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/P Copy/Disabled'
//  '<S294>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S295>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Reset Signal/External Reset'
//  '<S296>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation/Enabled'
//  '<S297>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Saturation Fdbk/Disabled'
//  '<S298>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum/Sum_PI'
//  '<S299>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Sum Fdbk/Disabled'
//  '<S300>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode/Disabled'
//  '<S301>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S302>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S303>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S304>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/postSat Signal/Forward_Path'
//  '<S305>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preInt Signal/Internal PreInt'
//  '<S306>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Flux PI/preSat Signal/Forward_Path'
//  '<S307>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup'
//  '<S308>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain'
//  '<S309>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative'
//  '<S310>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter'
//  '<S311>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs'
//  '<S312>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain'
//  '<S313>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain'
//  '<S314>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk'
//  '<S315>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator'
//  '<S316>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs'
//  '<S317>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy'
//  '<S318>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain'
//  '<S319>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy'
//  '<S320>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain'
//  '<S321>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal'
//  '<S322>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation'
//  '<S323>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk'
//  '<S324>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum'
//  '<S325>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk'
//  '<S326>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode'
//  '<S327>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum'
//  '<S328>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral'
//  '<S329>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain'
//  '<S330>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal'
//  '<S331>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal'
//  '<S332>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal'
//  '<S333>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Anti-windup/Back Calculation'
//  '<S334>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/D Gain/Disabled'
//  '<S335>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/External Derivative/Disabled'
//  '<S336>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter/Disabled'
//  '<S337>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Filter ICs/Disabled'
//  '<S338>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/I Gain/Internal Parameters'
//  '<S339>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain/Passthrough'
//  '<S340>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S341>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator/Discrete'
//  '<S342>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Integrator ICs/Internal IC'
//  '<S343>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S344>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/N Gain/Disabled'
//  '<S345>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/P Copy/Disabled'
//  '<S346>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S347>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Reset Signal/External Reset'
//  '<S348>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation/Enabled'
//  '<S349>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Saturation Fdbk/Disabled'
//  '<S350>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum/Sum_PI'
//  '<S351>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Sum Fdbk/Disabled'
//  '<S352>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode/Disabled'
//  '<S353>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S354>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S355>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S356>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/postSat Signal/Forward_Path'
//  '<S357>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preInt Signal/Internal PreInt'
//  '<S358>' : 'imperix_ctrl/Closed_loop_control/Subsystem/Speed PI/preSat Signal/Forward_Path'
//  '<S359>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S360>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S361>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S362>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S363>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S364>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S365>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S366>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S367>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S368>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S369>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S370>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S371>' : 'imperix_ctrl/Closed_loop_control/Subsystem10/Sample and Hold'
//  '<S372>' : 'imperix_ctrl/Closed_loop_control/Subsystem11/Sample and Hold'
//  '<S373>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/Alpha-Beta-Zero to abc'
//  '<S374>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S375>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S376>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S377>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S378>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S379>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S380>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S381>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S382>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S383>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S384>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S385>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S386>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S387>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S388>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S389>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S390>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S391>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S392>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S393>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S394>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S395>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S396>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S397>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S398>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S399>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S400>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S401>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S402>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S403>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S404>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S405>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S406>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S407>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S408>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S409>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S410>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S411>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S412>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S413>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S414>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S415>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S416>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S417>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/External Reset'
//  '<S418>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S419>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S420>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S421>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S422>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S423>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S424>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S425>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S426>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S427>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S428>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S429>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S430>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S431>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S432>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S433>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S434>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S435>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S436>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S437>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S438>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S439>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S440>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S441>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S442>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S443>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S444>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S445>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S446>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S447>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S448>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S449>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S450>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S451>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S452>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S453>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S454>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S455>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S456>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S457>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S458>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S459>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S460>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S461>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S462>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S463>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S464>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S465>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S466>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S467>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S468>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S469>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/External Reset'
//  '<S470>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S471>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S472>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S473>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S474>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S475>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S476>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S477>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S478>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S479>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S480>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S481>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S482>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S483>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S484>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S485>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S486>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S487>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S488>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S489>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S490>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S491>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S492>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S493>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S494>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S495>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S496>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S497>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI'
//  '<S498>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup'
//  '<S499>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain'
//  '<S500>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative'
//  '<S501>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter'
//  '<S502>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs'
//  '<S503>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain'
//  '<S504>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain'
//  '<S505>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk'
//  '<S506>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator'
//  '<S507>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs'
//  '<S508>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy'
//  '<S509>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain'
//  '<S510>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy'
//  '<S511>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain'
//  '<S512>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal'
//  '<S513>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation'
//  '<S514>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk'
//  '<S515>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum'
//  '<S516>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk'
//  '<S517>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode'
//  '<S518>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum'
//  '<S519>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral'
//  '<S520>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain'
//  '<S521>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal'
//  '<S522>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal'
//  '<S523>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal'
//  '<S524>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S525>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S526>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S527>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain/Disabled'
//  '<S528>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative/Disabled'
//  '<S529>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter/Disabled'
//  '<S530>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs/Disabled'
//  '<S531>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain/Internal Parameters'
//  '<S532>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain/Passthrough'
//  '<S533>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S534>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator/Discrete'
//  '<S535>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs/Internal IC'
//  '<S536>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S537>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain/Disabled'
//  '<S538>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy/Disabled'
//  '<S539>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S540>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal/Disabled'
//  '<S541>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation/Enabled'
//  '<S542>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk/Disabled'
//  '<S543>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum/Sum_PI'
//  '<S544>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk/Disabled'
//  '<S545>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode/Disabled'
//  '<S546>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S547>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S548>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S549>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal/Forward_Path'
//  '<S550>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal/Internal PreInt'
//  '<S551>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal/Forward_Path'
//  '<S552>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S553>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S554>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S555>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S556>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S557>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S558>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S559>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S560>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S561>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S562>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S563>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S564>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S565>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S566>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S567>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S568>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S569>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S570>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S571>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S572>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S573>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S574>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S575>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S576>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S577>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S578>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S579>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S580>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S581>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S582>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S583>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S584>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S585>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S586>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S587>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S588>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S589>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S590>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S591>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S592>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S593>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S594>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/Alpha-Beta-Zero to abc'
//  '<S595>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero'
//  '<S596>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S597>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S598>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S599>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S600>' : 'imperix_ctrl/Closed_loop_control/Subsystem8/Sample and Hold'
//  '<S601>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S602>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S603>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S604>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S605>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S606>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S607>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S608>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S609>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S610>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S611>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S612>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S613>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S614>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S615>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter11/sub'
//  '<S616>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter11/sub/generation'
//  '<S617>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S618>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S619>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S620>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'
//  '<S621>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3/sub'
//  '<S622>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S623>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter5/sub'
//  '<S624>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter5/sub/generation'
//  '<S625>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter6/sub'
//  '<S626>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter6/sub/generation'

#endif                                 // imperix_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
