//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_control.h
//
// Code generated for Simulink model 'imperix_control'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.14
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Dec 15 16:19:02 2025
//
#ifndef imperix_control_h_
#define imperix_control_h_
#include "rtwtypes.h"
#include "imperix_control_types.h"

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
struct B_imperix_control_T {
  real_T TmpRTBAtSum7Inport1;          // '<S1>/Constant5'
  real_T TmpRTBAtSum5Inport2;
  real_T TmpRTBAtICOutport1;           // '<S48>/IC'
  real_T TmpRTBAtSwitchInport1[3];     // '<S26>/Vector Concatenate4'
  real_T TmpRTBAtSwitchInport3[3];     // '<S26>/Vector Concatenate5'
  real_T Fcn;                          // '<S481>/Fcn'
  real_T Fcn1;                         // '<S481>/Fcn1'
  real_T Fcn_p;                        // '<S480>/Fcn'
  real_T Fcn1_h;                       // '<S480>/Fcn1'
  real_T Fcn_b;                        // '<S415>/Fcn'
  real_T Fcn1_o;                       // '<S415>/Fcn1'
  real_T Fcn_k;                        // '<S414>/Fcn'
  real_T Fcn1_l;                       // '<S414>/Fcn1'
  real_T Fcn_c;                        // '<S303>/Fcn'
  real_T Fcn1_f;                       // '<S303>/Fcn1'
  real_T Fcn_h;                        // '<S302>/Fcn'
  real_T Fcn1_a;                       // '<S302>/Fcn1'
  real32_T ADC;                        // '<S84>/ADC'
  real32_T ADC_c;                      // '<S86>/ADC'
  real32_T ADC_o;                      // '<S74>/ADC'
  real32_T ADC_g;                      // '<S62>/ADC'
  real32_T ADC_p;                      // '<S76>/ADC'
  real32_T ADC_i;                      // '<S78>/ADC'
  real32_T DataTypeConversion3[6];     // '<S1>/Data Type Conversion3'
  real32_T ADC_b;                      // '<S70>/ADC'
  real32_T ADC_n;                      // '<S88>/ADC'
  real32_T ADC_cr;                     // '<S64>/ADC'
  real32_T ADC_ge;                     // '<S72>/ADC'
  real32_T ADC_p2;                     // '<S66>/ADC'
  real32_T ADC_h;                      // '<S68>/ADC'
  real32_T DataTypeConversion4[6];     // '<S1>/Data Type Conversion4'
  real32_T ADC_bz;                     // '<S80>/ADC'
  real32_T DataTypeConversion5;        // '<S1>/Data Type Conversion5'
  real32_T SFunction;                  // '<S543>/S-Function'
  real32_T SFunction_k;                // '<S547>/S-Function'
  real32_T SFunction_kx;               // '<S545>/S-Function'
  real32_T DataTypeConversion1;        // '<S28>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S28>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S28>/Data Type Conversion3'
  real32_T DataTypeConversion1_n;      // '<S286>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S286>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S286>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S287>/Data Type Conversion1'
  real32_T DataTypeConversion2_e;      // '<S287>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S287>/Data Type Conversion3'
  real32_T DataTypeConversion1_nb;     // '<S288>/Data Type Conversion1'
  real32_T DataTypeConversion2_h;      // '<S288>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S288>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S289>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S289>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S289>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S482>/Data Type Conversion1'
  real32_T DataTypeConversion2_ka;     // '<S482>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S482>/Data Type Conversion3'
  real32_T DataTypeConversion1_ii;     // '<S483>/Data Type Conversion1'
  real32_T DataTypeConversion2_hr;     // '<S483>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S483>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S484>/Data Type Conversion1'
  real32_T DataTypeConversion2_m;      // '<S484>/Data Type Conversion2'
  real32_T DataTypeConversion3_na;     // '<S484>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S485>/Data Type Conversion1'
  real32_T DataTypeConversion2_ht;     // '<S485>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S485>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S494>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S494>/Data Type Conversion2'
  real32_T DataTypeConversion3_aq;     // '<S494>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S495>/Data Type Conversion1'
  real32_T DataTypeConversion2_kf;     // '<S495>/Data Type Conversion2'
  real32_T DataTypeConversion3_pq;     // '<S495>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S496>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S496>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S496>/Data Type Conversion3'
  real32_T DataTypeConversion1_mx;     // '<S497>/Data Type Conversion1'
  real32_T DataTypeConversion2_kr;     // '<S497>/Data Type Conversion2'
  real32_T DataTypeConversion3_nh;     // '<S497>/Data Type Conversion3'
  real32_T DataTypeConversion1_eq;     // '<S506>/Data Type Conversion1'
  real32_T DataTypeConversion2_kfv;    // '<S506>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S506>/Data Type Conversion3'
  real32_T DataTypeConversion1_gn;     // '<S507>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S507>/Data Type Conversion2'
  real32_T DataTypeConversion3_e3;     // '<S507>/Data Type Conversion3'
  real32_T DataTypeConversion1_gj;     // '<S508>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S508>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S508>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S509>/Data Type Conversion1'
  real32_T DataTypeConversion2_d1;     // '<S509>/Data Type Conversion2'
  real32_T DataTypeConversion3_f;      // '<S509>/Data Type Conversion3'
  real32_T DataTypeConversion1_hk;     // '<S518>/Data Type Conversion1'
  real32_T DataTypeConversion2_dy;     // '<S518>/Data Type Conversion2'
  real32_T DataTypeConversion3_a1;     // '<S518>/Data Type Conversion3'
  real32_T DataTypeConversion1_gf;     // '<S519>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S519>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S519>/Data Type Conversion3'
  real32_T DataTypeConversion1_cz;     // '<S520>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S520>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S520>/Data Type Conversion3'
  real32_T DataTypeConversion1_le;     // '<S521>/Data Type Conversion1'
  real32_T DataTypeConversion2_lo;     // '<S521>/Data Type Conversion2'
  real32_T DataTypeConversion3_o4;     // '<S521>/Data Type Conversion3'
  real32_T DataTypeConversion1_iz;     // '<S530>/Data Type Conversion1'
  real32_T DataTypeConversion2_mh;     // '<S530>/Data Type Conversion2'
  real32_T DataTypeConversion3_ax;     // '<S530>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S531>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S531>/Data Type Conversion2'
  real32_T DataTypeConversion3_p3;     // '<S531>/Data Type Conversion3'
  real32_T DataTypeConversion1_kz;     // '<S532>/Data Type Conversion1'
  real32_T DataTypeConversion2_m4;     // '<S532>/Data Type Conversion2'
  real32_T DataTypeConversion3_c;      // '<S532>/Data Type Conversion3'
  real32_T DataTypeConversion1_h3;     // '<S533>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S533>/Data Type Conversion2'
  real32_T DataTypeConversion3_bc;     // '<S533>/Data Type Conversion3'
  real32_T ADC_j;                      // '<S82>/ADC'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_control_T {
  mpcActiveSetOptions_imperix_c_T options_z;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_c_T options_o;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_c_T options;// '<S1>/LICCs control'
  mpcActiveSetOptions_imperix_c_T SolverOpts;// '<S26>/Saturation'
  real_T SFunction_DSTATE;             // '<S209>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S211>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S213>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S215>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S217>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S219>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S221>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S223>/S-Function'
  real_T SFunction_DSTATE_nb;          // '<S225>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S227>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S229>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S231>/S-Function'
  real_T SFunction_DSTATE_lc;          // '<S233>/S-Function'
  real_T SFunction_DSTATE_n2;          // '<S543>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S547>/S-Function'
  real_T SFunction_DSTATE_pb;          // '<S545>/S-Function'
  real_T UnitDelay1_DSTATE;            // '<S24>/Unit Delay1'
  real_T Integrator_DSTATE;            // '<S188>/Integrator'
  real_T Integrator_DSTATE_h;          // '<S458>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S268>/Integrator'
  real_T Integrator_DSTATE_hf;         // '<S128>/Integrator'
  real_T Integrator_DSTATE_b;          // '<S342>/Integrator'
  real_T Integrator_DSTATE_k;          // '<S394>/Integrator'
  real_T UnitDelay1_DSTATE_a[2];       // '<S148>/Unit Delay1'
  real_T SFunction_DSTATE_m;           // '<S91>/S-Function'
  real_T TmpRTBAtSum7Inport1_Buffer0;  // synthesized block
  real_T TmpRTBAtSum5Inport2_Buffer0;  // synthesized block
  real_T TmpRTBAtICOutport1_Buffer0;   // synthesized block
  real_T TmpRTBAtSwitchInport1_Buffer0[3];// synthesized block
  real_T TmpRTBAtSwitchInport3_Buffer0[3];// synthesized block
  real_T TmpRTBAtInputformatInport2_Buff;// synthesized block
  real_T TmpRTBAtInputformatInport3_Buff[2];// synthesized block
  real_T TmpRTBAtInputformatInport4_Buff[2];// synthesized block
  real_T TmpRTBAtInputformatInport5_Buff;// synthesized block
  real_T TmpRTBAtGainOutport1_Buffer[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport2_Bu[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport3_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport4_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport5_Bu;// synthesized block
  real_T TmpRTBAtKalmanFilterInport1_Buf[2];// synthesized block
  real_T TmpRTBAtKalmanFilterInport2_Buf;// synthesized block
  real_T TmpRTBAtKalmanFilterInport3_Buf[2];// synthesized block
  real_T Ac[24];                       // '<S26>/Saturation'
  real_T Ix[4];                        // '<S26>/Saturation'
  real_T Tol;                          // '<S26>/Saturation'
  real_T is_max;                       // '<S26>/Saturation'
  real_T Ad[8];                        // '<S1>/LICCs control'
  real_T Bd[16];                       // '<S1>/LICCs control'
  real_T H[16];                        // '<S1>/LICCs control'
  real_T lambda;                       // '<S1>/LICCs control'
  real_T Aineq[96];                    // '<S1>/LICCs control'
  real_T is_max2;                      // '<S1>/LICCs control'
  real_T Vc_ref2;                      // '<S1>/LICCs control'
  real_T pinvT[30];                    // '<S1>/LICCs control'
  real_T u_prev[2];                    // '<S1>/LICCs control'
  real_T xt_est_apriori[6];            // '<S1>/Kalman Filter'
  real_T SIGt_apriori[36];             // '<S1>/Kalman Filter'
  real_T Q[36];                        // '<S1>/Kalman Filter'
  real_T R[9];                         // '<S1>/Kalman Filter'
  real_T Bd_m[12];                     // '<S1>/Kalman Filter'
  real_T C[18];                        // '<S1>/Kalman Filter'
  real_T Inx[36];                      // '<S1>/Kalman Filter'
  real_T F_max;                        // '<S1>/IM references'
  real_T w_max;                        // '<S1>/IM references'
  real_T F_prev;                       // '<S1>/IM references'
  real_T w_prev;                       // '<S1>/IM references'
  real_T dF;                           // '<S1>/IM references'
  real_T dw;                           // '<S1>/IM references'
  real_T Ts;                           // '<S1>/Energy balance'
  real_T Tab2abc[6];                   // '<S1>/Energy balance'
  real_T Tabc2ab[6];                   // '<S1>/Energy balance'
  real_T A[30];                        // '<S1>/Energy balance'
  real_T pinvA[30];                    // '<S1>/Energy balance'
  real_T K[324];                       // '<S1>/Energy balance'
  real_T MI[324];                      // '<S1>/Energy balance'
  real_T NN[108];                      // '<S1>/Energy balance'
  real_T ONE[54];                      // '<S1>/Energy balance'
  real_T Nl;                           // '<S1>/Energy balance'
  real_T is_max_h;                     // '<S1>/Energy balance'
  real_T is_max2_o;                    // '<S1>/Energy balance'
  real_T vo_max2;                      // '<S1>/Energy balance'
  real_T Ec_ref2;                      // '<S1>/Energy balance'
  real_T Hu_z[36];                     // '<S1>/Energy balance'
  real_T Aineq_z[216];                 // '<S1>/Energy balance'
  real_T lambda_z;                     // '<S1>/Energy balance'
  real_T Hu_o[9];                      // '<S1>/Energy balance'
  real_T Aineq_o[18];                  // '<S1>/Energy balance'
  real_T lambda_o;                     // '<S1>/Energy balance'
  real_T Ec_dev;                       // '<S1>/Energy balance'
  boolean_T IC_FirstOutputTime;        // '<S48>/IC'
  boolean_T is_max_not_empty;          // '<S26>/White noise'
  boolean_T Ac_not_empty;              // '<S26>/Saturation'
  boolean_T Ec_ref_not_empty;          // '<S26>/Input format'
  boolean_T Ad_not_empty;              // '<S1>/LICCs control'
  boolean_T xt_est_apriori_not_empty;  // '<S1>/Kalman Filter'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  boolean_T Ts_not_empty;              // '<S1>/Energy balance'
};

// Parameters for system: '<S299>/Subsystem - pi//2 delay'
struct P_Subsystempi2delay_imperix_c_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S302>/alpha_beta'

};

// Parameters for system: '<S299>/Subsystem1'
struct P_Subsystem1_imperix_control_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S303>/alpha_beta'

};

// Parameters (default storage)
struct P_imperix_control_T_ {
  struct_kYK8klzU7k6CF2sPPFadY CEMPC;  // Variable: CEMPC
                                          //  Referenced by: '<S1>/Energy balance'

  struct_Jn3yK8idWqC5lwHij8OsQE CCMPC; // Variable: CCMPC
                                          //  Referenced by:
                                          //    '<S1>/LICCs control'
                                          //    '<S17>/Gain'
                                          //    '<S148>/Gain1'
                                          //    '<S148>/Gain2'

  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S1>/LICCs control'
                                          //    '<S1>/Constant5'
                                          //    '<S24>/Unit Delay1'
                                          //    '<S26>/Input format'
                                          //    '<S26>/Saturation'
                                          //    '<S26>/White noise'
                                          //    '<S26>/Gain7'
                                          //    '<S46>/vx'
                                          //    '<S49>/Constant1'
                                          //    '<S50>/Gain'
                                          //    '<S56>/Gain1'
                                          //    '<S56>/Gain3'
                                          //    '<S56>/Gain4'

  struct_8pcJrWnT2NIOYJW9vpRYLD KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_aK5aQeabUeTOrz39VMjTKC IM;    // Variable: IM
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S1>/Kalman Filter'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain4'
                                          //    '<S47>/Gain'

  struct_eLXpdkXVH71IKiDfJkdaiC RFT;   // Variable: RFT
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S26>/Input format'
                                          //    '<S26>/Gain5'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S120>/Kb'
                                          //    '<S125>/Integral Gain'
                                          //    '<S133>/Proportional Gain'
                                          //    '<S135>/Saturation'
                                          //    '<S260>/Kb'
                                          //    '<S265>/Integral Gain'
                                          //    '<S273>/Proportional Gain'
                                          //    '<S275>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S334>/Kb'
                                          //    '<S339>/Integral Gain'
                                          //    '<S347>/Proportional Gain'
                                          //    '<S349>/Saturation'
                                          //    '<S386>/Kb'
                                          //    '<S391>/Integral Gain'
                                          //    '<S399>/Proportional Gain'
                                          //    '<S401>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S455>/Integral Gain'
                                          //    '<S463>/Proportional Gain'
                                          //    '<S465>/Saturation'
                                          //    '<S450>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEB;   // Variable: TEB
                                          //  Referenced by:
                                          //    '<S24>/Gain1'
                                          //    '<S24>/Gain2'
                                          //    '<S185>/Integral Gain'
                                          //    '<S193>/Proportional Gain'
                                          //    '<S195>/Saturation'
                                          //    '<S180>/DeadZone'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by:
                                          //    '<S26>/Input format'
                                          //    '<S26>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S26>/Gain4'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S476>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S307>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_k;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_k
                                  //  Referenced by: '<S299>/Constant'

  real_T dq0toAlphaBetaZero1_Alignment;
                                // Mask Parameter: dq0toAlphaBetaZero1_Alignment
                                   //  Referenced by: '<S416>/Constant'

  real_T PIDController_InitialConditionF;
                              // Mask Parameter: PIDController_InitialConditionF
                                 //  Referenced by: '<S188>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S458>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S268>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S128>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S342>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S394>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S478>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S479>/Constant'

  real_T CompareToConstant_const_h; // Mask Parameter: CompareToConstant_const_h
                                       //  Referenced by: '<S412>/Constant'

  real_T CompareToConstant1_const_f;
                                   // Mask Parameter: CompareToConstant1_const_f
                                      //  Referenced by: '<S413>/Constant'

  real_T CompareToConstant_const_m; // Mask Parameter: CompareToConstant_const_m
                                       //  Referenced by: '<S300>/Constant'

  real_T CompareToConstant1_const_p;
                                   // Mask Parameter: CompareToConstant1_const_p
                                      //  Referenced by: '<S301>/Constant'

  real_T CompareToConstant_const_d; // Mask Parameter: CompareToConstant_const_d
                                       //  Referenced by: '<S417>/Constant'

  real_T CompareToConstant1_const_l;
                                   // Mask Parameter: CompareToConstant1_const_l
                                      //  Referenced by: '<S418>/Constant'

  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S419>/alpha_beta'

  real_T alpha_beta_Y0_p[2];           // Expression: [0,0]
                                          //  Referenced by: '<S420>/alpha_beta'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S480>/dq'

  real_T dq_Y0_e[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S481>/dq'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S178>/Constant1'

  real_T Constant1_Value_i;            // Expression: 0
                                          //  Referenced by: '<S448>/Constant1'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S84>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S86>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S74>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S62>/ADC'

  real_T ADC_P8_pe;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S76>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S78>/ADC'

  real_T ADC_P8_i;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S70>/ADC'

  real_T ADC_P8_g4;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S88>/ADC'

  real_T ADC_P8_d;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S64>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S72>/ADC'

  real_T ADC_P8_o;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S66>/ADC'

  real_T ADC_P8_i3;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S68>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S80>/ADC'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S543>/S-Function'

  real_T SFunction_P17_d;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S547>/S-Function'

  real_T AddConstant_Bias;             // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant'

  real_T SFunction_P17_e;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S545>/S-Function'

  real_T TmpRTBAtSum7Inport1_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S188>/Integrator'

  real_T Integrator_gainval_m;       // Computed Parameter: Integrator_gainval_m
                                        //  Referenced by: '<S458>/Integrator'

  real_T Integrator_gainval_k;       // Computed Parameter: Integrator_gainval_k
                                        //  Referenced by: '<S268>/Integrator'

  real_T TmpRTBAtSum5Inport2_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval_o;       // Computed Parameter: Integrator_gainval_o
                                        //  Referenced by: '<S128>/Integrator'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S51>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S477>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S477>/Gain1'

  real_T TmpRTBAtICOutport1_InitialCondi;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval_c;       // Computed Parameter: Integrator_gainval_c
                                        //  Referenced by: '<S342>/Integrator'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S394>/Integrator'

  real_T Gain1_Gain_p;                 // Expression: 2
                                          //  Referenced by: '<S47>/Gain1'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S148>/Unit Delay1'

  real_T TmpRTBAtSwitchInport1_InitialCo;// Expression: 0
                                            //  Referenced by:

  real_T TmpRTBAtSwitchInport3_InitialCo;// Expression: 0
                                            //  Referenced by:

  real_T Switch_Threshold;             // Expression: 40*10
                                          //  Referenced by: '<S26>/Switch'

  real_T Gain3_Gain_j[2];              // Expression: [1; -1]
                                          //  Referenced by: '<S26>/Gain3'

  real_T Gain3_Gain_o[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S304>/Gain3'

  real_T Gain2_Gain_k[30];             // Expression: M2C.A'
                                          //  Referenced by: '<S46>/Gain2'

  real_T Constant4_Value;              // Expression: 1
                                          //  Referenced by: '<S1>/Constant4'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S178>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S28>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S286>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S287>/phase'

  real_T phase_Value_m;                // Expression: PHASE
                                          //  Referenced by: '<S288>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S289>/phase'

  real_T Gain3_Gain_d[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S298>/Gain3'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S45>/Gain'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S45>/Gain8'

  real_T Clamping_zero_Value_e;        // Expression: 0
                                          //  Referenced by: '<S448>/Clamping_zero'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S482>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S483>/phase'

  real_T phase_Value_a4;               // Expression: PHASE
                                          //  Referenced by: '<S484>/phase'

  real_T phase_Value_n4;               // Expression: PHASE
                                          //  Referenced by: '<S485>/phase'

  real_T Gain1_Gain_p0;                // Expression: -1
                                          //  Referenced by: '<S53>/Gain1'

  real_T phase_Value_c0;               // Expression: PHASE
                                          //  Referenced by: '<S494>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S495>/phase'

  real_T phase_Value_md;               // Expression: PHASE
                                          //  Referenced by: '<S496>/phase'

  real_T phase_Value_ab;               // Expression: PHASE
                                          //  Referenced by: '<S497>/phase'

  real_T Gain3_Gain_l;                 // Expression: -1
                                          //  Referenced by: '<S54>/Gain3'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S506>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S507>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S508>/phase'

  real_T phase_Value_nf;               // Expression: PHASE
                                          //  Referenced by: '<S509>/phase'

  real_T Gain3_Gain_k;                 // Expression: -1
                                          //  Referenced by: '<S55>/Gain3'

  real_T phase_Value_b;                // Expression: PHASE
                                          //  Referenced by: '<S518>/phase'

  real_T phase_Value_jt;               // Expression: PHASE
                                          //  Referenced by: '<S519>/phase'

  real_T phase_Value_o0;               // Expression: PHASE
                                          //  Referenced by: '<S520>/phase'

  real_T phase_Value_jo;               // Expression: PHASE
                                          //  Referenced by: '<S521>/phase'

  real_T phase_Value_jb;               // Expression: PHASE
                                          //  Referenced by: '<S530>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S531>/phase'

  real_T phase_Value_lk;               // Expression: PHASE
                                          //  Referenced by: '<S532>/phase'

  real_T phase_Value_nl;               // Expression: PHASE
                                          //  Referenced by: '<S533>/phase'

  real_T ADC_P8_gx;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S82>/ADC'

  real_T IC_Value;                     // Expression: 2/3*pi*0
                                          //  Referenced by: '<S48>/IC'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S207>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S207>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S207>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S291>/PWM'

  real32_T PWM_P3_j;                   // Expression: single(duty)
                                          //  Referenced by: '<S291>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S291>/PWM'

  real32_T PWM_P2_d;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S293>/PWM'

  real32_T PWM_P3_f;                   // Expression: single(duty)
                                          //  Referenced by: '<S293>/PWM'

  real32_T PWM_P4_m;                   // Expression: single(phase)
                                          //  Referenced by: '<S293>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S295>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S295>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S295>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S297>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S297>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S297>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S487>/PWM'

  real32_T PWM_P3_a;                   // Expression: single(duty)
                                          //  Referenced by: '<S487>/PWM'

  real32_T PWM_P4_c;                   // Expression: single(phase)
                                          //  Referenced by: '<S487>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S489>/PWM'

  real32_T PWM_P3_gb;                  // Expression: single(duty)
                                          //  Referenced by: '<S489>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S489>/PWM'

  real32_T PWM_P2_k4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S491>/PWM'

  real32_T PWM_P3_ab;                  // Expression: single(duty)
                                          //  Referenced by: '<S491>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S491>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S493>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S493>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S493>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S499>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S499>/PWM'

  real32_T PWM_P4_hb;                  // Expression: single(phase)
                                          //  Referenced by: '<S499>/PWM'

  real32_T PWM_P2_d1;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S501>/PWM'

  real32_T PWM_P3_a2;                  // Expression: single(duty)
                                          //  Referenced by: '<S501>/PWM'

  real32_T PWM_P4_hg;                  // Expression: single(phase)
                                          //  Referenced by: '<S501>/PWM'

  real32_T PWM_P2_j5;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S503>/PWM'

  real32_T PWM_P3_mv;                  // Expression: single(duty)
                                          //  Referenced by: '<S503>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S503>/PWM'

  real32_T PWM_P2_n5;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S505>/PWM'

  real32_T PWM_P3_pj;                  // Expression: single(duty)
                                          //  Referenced by: '<S505>/PWM'

  real32_T PWM_P4_gu;                  // Expression: single(phase)
                                          //  Referenced by: '<S505>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S511>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S511>/PWM'

  real32_T PWM_P4_ce;                  // Expression: single(phase)
                                          //  Referenced by: '<S511>/PWM'

  real32_T PWM_P2_c;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S513>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S513>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S513>/PWM'

  real32_T PWM_P2_cb;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S515>/PWM'

  real32_T PWM_P3_ou;                  // Expression: single(duty)
                                          //  Referenced by: '<S515>/PWM'

  real32_T PWM_P4_jx;                  // Expression: single(phase)
                                          //  Referenced by: '<S515>/PWM'

  real32_T PWM_P2_d2;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S517>/PWM'

  real32_T PWM_P3_iw;                  // Expression: single(duty)
                                          //  Referenced by: '<S517>/PWM'

  real32_T PWM_P4_ag;                  // Expression: single(phase)
                                          //  Referenced by: '<S517>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S523>/PWM'

  real32_T PWM_P3_of;                  // Expression: single(duty)
                                          //  Referenced by: '<S523>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S523>/PWM'

  real32_T PWM_P2_cp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S525>/PWM'

  real32_T PWM_P3_gr;                  // Expression: single(duty)
                                          //  Referenced by: '<S525>/PWM'

  real32_T PWM_P4_am;                  // Expression: single(phase)
                                          //  Referenced by: '<S525>/PWM'

  real32_T PWM_P2_av;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S527>/PWM'

  real32_T PWM_P3_jo;                  // Expression: single(duty)
                                          //  Referenced by: '<S527>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S527>/PWM'

  real32_T PWM_P2_en;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S529>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S529>/PWM'

  real32_T PWM_P4_cw;                  // Expression: single(phase)
                                          //  Referenced by: '<S529>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S535>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S535>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S535>/PWM'

  real32_T PWM_P2_bl;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S537>/PWM'

  real32_T PWM_P3_o3;                  // Expression: single(duty)
                                          //  Referenced by: '<S537>/PWM'

  real32_T PWM_P4_p;                   // Expression: single(phase)
                                          //  Referenced by: '<S537>/PWM'

  real32_T PWM_P2_bx;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S539>/PWM'

  real32_T PWM_P3_gw;                  // Expression: single(duty)
                                          //  Referenced by: '<S539>/PWM'

  real32_T PWM_P4_lf;                  // Expression: single(phase)
                                          //  Referenced by: '<S539>/PWM'

  real32_T PWM_P2_kn;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S541>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S541>/PWM'

  real32_T PWM_P4_n1;                  // Expression: single(phase)
                                          //  Referenced by: '<S541>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P2_a;                   // Expression: single(gain)
                                          //  Referenced by: '<S86>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S86>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S74>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S74>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S62>/ADC'

  real32_T ADC_P3_b;                   // Expression: single(offset)
                                          //  Referenced by: '<S62>/ADC'

  real32_T ADC_P2_d;                   // Expression: single(gain)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P3_g;                   // Expression: single(offset)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P2_j;                   // Expression: single(gain)
                                          //  Referenced by: '<S78>/ADC'

  real32_T ADC_P3_d;                   // Expression: single(offset)
                                          //  Referenced by: '<S78>/ADC'

  real32_T SFunction_P6;               // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S209>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S211>/S-Function'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P3_i;                   // Expression: single(offset)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P3_h;                   // Expression: single(offset)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P2_bh;                  // Expression: single(gain)
                                          //  Referenced by: '<S64>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S64>/ADC'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P3_k;                   // Expression: single(offset)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P2_az;                  // Expression: single(gain)
                                          //  Referenced by: '<S66>/ADC'

  real32_T ADC_P3_kh;                  // Expression: single(offset)
                                          //  Referenced by: '<S66>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P3_ez;                  // Expression: single(offset)
                                          //  Referenced by: '<S68>/ADC'

  real32_T SFunction_P6_o;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S213>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T ADC_P2_ia;                  // Expression: single(gain)
                                          //  Referenced by: '<S80>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S80>/ADC'

  real32_T SFunction_P6_oq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P6_kw;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P12_oz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P12_e2;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P6_gr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P12_gw;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P12_ew;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P12_fl;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P6_f0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S543>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S543>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S543>/S-Function'

  real32_T SFunction_P6_ka;            // Expression: single(0)
                                          //  Referenced by: '<S543>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S543>/S-Function'

  real32_T SFunction_P3_i;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S547>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S547>/S-Function'

  real32_T SFunction_P5_i;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S547>/S-Function'

  real32_T SFunction_P6_dd;            // Expression: single(0)
                                          //  Referenced by: '<S547>/S-Function'

  real32_T SFunction_P7_e;             // Expression: single(0)
                                          //  Referenced by: '<S547>/S-Function'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S545>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S545>/S-Function'

  real32_T SFunction_P5_o;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S545>/S-Function'

  real32_T SFunction_P6_ep;            // Expression: single(0)
                                          //  Referenced by: '<S545>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S545>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S91>/S-Function'

  real32_T SFunction_P3_f;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S91>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S93>/CLK1'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P3_dy;                  // Expression: single(offset)
                                          //  Referenced by: '<S82>/ADC'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S209>/S-Function'

  uint32_T SFunction_P7_eh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S211>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S213>/S-Function'

  uint32_T SFunction_P7_m;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P7_bx;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P7_np;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P7_nu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P13_i2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S543>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S547>/S-Function'

  uint32_T SFunction_P10_o;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S545>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S207>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S207>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S207>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S207>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S207>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S207>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S291>/PWM'

  int16_T PWM_P1_c;                    // Expression: int16(lane)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P7_e;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P9_pf;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S293>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P7_ei;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S295>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P8_n;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S297>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P5_pl;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P6_le;                   // Expression: int16(rate)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S489>/PWM'

  int16_T PWM_P5_ji;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S489>/PWM'

  int16_T PWM_P6_aj;                   // Expression: int16(rate)
                                          //  Referenced by: '<S489>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S489>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S489>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S489>/PWM'

  int16_T PWM_P1_id;                   // Expression: int16(lane)
                                          //  Referenced by: '<S491>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S491>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S491>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S491>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S491>/PWM'

  int16_T PWM_P9_ig;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S491>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P8_b;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P1_cd;                   // Expression: int16(lane)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P7_h4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P9_jr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P1_f;                    // Expression: int16(lane)
                                          //  Referenced by: '<S501>/PWM'

  int16_T PWM_P5_cb;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S501>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S501>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S501>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S501>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S501>/PWM'

  int16_T PWM_P1_m;                    // Expression: int16(lane)
                                          //  Referenced by: '<S503>/PWM'

  int16_T PWM_P5_ps;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S503>/PWM'

  int16_T PWM_P6_pu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S503>/PWM'

  int16_T PWM_P7_pn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S503>/PWM'

  int16_T PWM_P8_fy;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S503>/PWM'

  int16_T PWM_P9_ej;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S503>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P5_iu;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P6_c;                    // Expression: int16(rate)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P7_po;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P1_jt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P5_m;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P6_k;                    // Expression: int16(rate)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P8_bw;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S513>/PWM'

  int16_T PWM_P5_cr;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S513>/PWM'

  int16_T PWM_P6_lg;                   // Expression: int16(rate)
                                          //  Referenced by: '<S513>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S513>/PWM'

  int16_T PWM_P8_nv;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S513>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S513>/PWM'

  int16_T PWM_P1_p;                    // Expression: int16(lane)
                                          //  Referenced by: '<S515>/PWM'

  int16_T PWM_P5_cy;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S515>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S515>/PWM'

  int16_T PWM_P7_ea;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S515>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S515>/PWM'

  int16_T PWM_P9_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S515>/PWM'

  int16_T PWM_P1_hl;                   // Expression: int16(lane)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P5_it;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P6_o;                    // Expression: int16(rate)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P7_hm;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P8_cs;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P9_ci;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P1_jf;                   // Expression: int16(lane)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P5_h2;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P6_ee;                   // Expression: int16(rate)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P7_j;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P8_hc;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P9_cy;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P1_a0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S525>/PWM'

  int16_T PWM_P5_n;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S525>/PWM'

  int16_T PWM_P6_ev;                   // Expression: int16(rate)
                                          //  Referenced by: '<S525>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S525>/PWM'

  int16_T PWM_P8_ct;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S525>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S525>/PWM'

  int16_T PWM_P1_d;                    // Expression: int16(lane)
                                          //  Referenced by: '<S527>/PWM'

  int16_T PWM_P5_b;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S527>/PWM'

  int16_T PWM_P6_kg;                   // Expression: int16(rate)
                                          //  Referenced by: '<S527>/PWM'

  int16_T PWM_P7_fk;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S527>/PWM'

  int16_T PWM_P8_df;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S527>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S527>/PWM'

  int16_T PWM_P1_fr;                   // Expression: int16(lane)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P7_o3;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P8_i;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P9_mg;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P1_ij;                   // Expression: int16(lane)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P5_jis;                  // Expression: int16(carrier)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P7_g0;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P8_cu;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P9_ds;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P1_a1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S537>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S537>/PWM'

  int16_T PWM_P6_hx;                   // Expression: int16(rate)
                                          //  Referenced by: '<S537>/PWM'

  int16_T PWM_P7_fp;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S537>/PWM'

  int16_T PWM_P8_k4;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S537>/PWM'

  int16_T PWM_P9_lu;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S537>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S539>/PWM'

  int16_T PWM_P5_cc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S539>/PWM'

  int16_T PWM_P6_dh;                   // Expression: int16(rate)
                                          //  Referenced by: '<S539>/PWM'

  int16_T PWM_P7_mk;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S539>/PWM'

  int16_T PWM_P8_la;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S539>/PWM'

  int16_T PWM_P9_ck;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S539>/PWM'

  int16_T PWM_P1_kw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P6_bx;                   // Expression: int16(rate)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P7_a0;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P9_bh;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S541>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P6_g;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P9_a;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P9_k;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P9_g;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S78>/ADC'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P3_f0;             // Expression: int16(0)
                                          //  Referenced by: '<S209>/S-Function'

  int16_T SFunction_P2_h;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S211>/S-Function'

  int16_T ADC_P1_ee;                   // Expression: int16(channel)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P9_ou;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P1_b;                    // Expression: int16(channel)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P4_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P9_oh;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P1_iy;                   // Expression: int16(channel)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P1_pr;                   // Expression: int16(channel)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P6_j;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P9_ac;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P4_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P6_kc;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S68>/ADC'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S213>/S-Function'

  int16_T SFunction_P2_go;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P3_n;              // Expression: int16(0)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S80>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P3_e5;             // Expression: int16(0)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P3_nd;             // Expression: int16(0)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P3_er;             // Expression: int16(0)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P3_ic;             // Expression: int16(0)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P2_c4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P2_g3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P3_m;              // Expression: int16(0)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P2_ch;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P3_ns;             // Expression: int16(0)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P2_mh;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S543>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S547>/S-Function'

  int16_T SFunction_P2_mc;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S545>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S93>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S93>/CLK1'

  int16_T ADC_P1_fz;                   // Expression: int16(channel)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P4_d5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P6_lk;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P9_dd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S82>/ADC'

  uint16_T SFunction_P1[3];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P14[5];           // Computed Parameter: SFunction_P14
                                          //  Referenced by: '<S209>/S-Function'

  uint16_T SFunction_P1_m[3];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P5_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S211>/S-Function'

  uint16_T SFunction_P1_b[3];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S213>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P5_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P14_e[5];         // Computed Parameter: SFunction_P14_e
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P1_n[2];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P1_g[3];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P5_is;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P14_ef[5];        // Computed Parameter: SFunction_P14_ef
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P1_c[3];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P1_a[3];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P5_jx;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P8_a;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P14_cs[5];        // Computed Parameter: SFunction_P14_cs
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P1_nx[3];         // Computed Parameter: SFunction_P1_nx
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P5_go;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P8_hu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P5_dh;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P8_mg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P1_cv[3];         // Computed Parameter: SFunction_P1_cv
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P11_gp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P14_fg[5];        // Computed Parameter: SFunction_P14_fg
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P1_ce[3];         // Computed Parameter: SFunction_P1_ce
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P14_k[5];         // Computed Parameter: SFunction_P14_k
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P1_cu[3];         // Computed Parameter: SFunction_P1_cu
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P5_he;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P8_d1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P11_cu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P14_cu[5];        // Computed Parameter: SFunction_P14_cu
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P1_i[5];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S543>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S543>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S543>/S-Function'

  uint16_T SFunction_P14_hf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S543>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S543>/S-Function'

  uint16_T SFunction_P1_f[5];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S547>/S-Function'

  uint16_T SFunction_P9_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S547>/S-Function'

  uint16_T SFunction_P11_k5;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S547>/S-Function'

  uint16_T SFunction_P14_o;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S547>/S-Function'

  uint16_T SFunction_P15_e;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S547>/S-Function'

  uint16_T SFunction_P1_p[10];         // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S545>/S-Function'

  uint16_T SFunction_P9_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S545>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S545>/S-Function'

  uint16_T SFunction_P14_pw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S545>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S545>/S-Function'

  uint16_T SFunction_P1_o;             // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P4_b3;          // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S91>/S-Function'

  uint16_T SFunction_P5_ip;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S91>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S207>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S207>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S207>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S291>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S291>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S291>/PWM'

  boolean_T PWM_P10_o0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S293>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S293>/PWM'

  boolean_T PWM_P12_d;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S293>/PWM'

  boolean_T PWM_P10_e;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S295>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S295>/PWM'

  boolean_T PWM_P12_a;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S295>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S297>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S297>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S297>/PWM'

  boolean_T PWM_P10_ex;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S487>/PWM'

  boolean_T PWM_P11_bp;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S487>/PWM'

  boolean_T PWM_P12_h0;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S487>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S489>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S489>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S489>/PWM'

  boolean_T PWM_P10_mg;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S491>/PWM'

  boolean_T PWM_P11_o;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S491>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S491>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S493>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S493>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S493>/PWM'

  boolean_T PWM_P10_or;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S499>/PWM'

  boolean_T PWM_P11_og;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S499>/PWM'

  boolean_T PWM_P12_n3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S499>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S501>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S501>/PWM'

  boolean_T PWM_P12_b;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S501>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S503>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S503>/PWM'

  boolean_T PWM_P12_bh;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S503>/PWM'

  boolean_T PWM_P10_c5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S505>/PWM'

  boolean_T PWM_P11_mw;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S505>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S505>/PWM'

  boolean_T PWM_P10_oa;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S511>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S511>/PWM'

  boolean_T PWM_P12_ae;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S511>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S513>/PWM'

  boolean_T PWM_P11_ev;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S513>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S513>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S515>/PWM'

  boolean_T PWM_P11_dc;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S515>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S515>/PWM'

  boolean_T PWM_P10_nk;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S517>/PWM'

  boolean_T PWM_P11_a;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S517>/PWM'

  boolean_T PWM_P12_gi;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S517>/PWM'

  boolean_T PWM_P10_c0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S523>/PWM'

  boolean_T PWM_P11_o5;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S523>/PWM'

  boolean_T PWM_P12_bb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S523>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S525>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S525>/PWM'

  boolean_T PWM_P12_fh;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S525>/PWM'

  boolean_T PWM_P10_d;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S527>/PWM'

  boolean_T PWM_P11_j0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S527>/PWM'

  boolean_T PWM_P12_lq;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S527>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S529>/PWM'

  boolean_T PWM_P11_js;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S529>/PWM'

  boolean_T PWM_P12_he;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S529>/PWM'

  boolean_T PWM_P10_cq;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S535>/PWM'

  boolean_T PWM_P11_dq;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S535>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S535>/PWM'

  boolean_T PWM_P10_a0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S537>/PWM'

  boolean_T PWM_P11_j0m;               // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S537>/PWM'

  boolean_T PWM_P12_fs;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S537>/PWM'

  boolean_T PWM_P10_du;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S539>/PWM'

  boolean_T PWM_P11_o0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S539>/PWM'

  boolean_T PWM_P12_d4;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S539>/PWM'

  boolean_T PWM_P10_a4;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S541>/PWM'

  boolean_T PWM_P11_jk;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S541>/PWM'

  boolean_T PWM_P12_lx;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S541>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T ADC_P5_df;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S62>/ADC'

  boolean_T ADC_P7_a;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S62>/ADC'

  boolean_T ADC_P5_db;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T SFunction_P4_ba;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S209>/S-Function'

  boolean_T SFunction_P4_o;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P9_ka;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T SFunction_P15_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S211>/S-Function'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P7_am;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S64>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S64>/ADC'

  boolean_T ADC_P5_c;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P7_li;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S66>/ADC'

  boolean_T ADC_P7_o;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S66>/ADC'

  boolean_T ADC_P5_mj;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P7_ii;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P9_j;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P15_eb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S213>/S-Function'

  boolean_T SFunction_P4_e;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P9_h;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P10_k;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P15_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T ADC_P5_mo;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T ADC_P7_ak;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P10_aj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P15_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P4_oa;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P9_en;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P15_k3;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P4_dz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P9_l;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P10_ao;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P4_oi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P10_az;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P9_n5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P15_gu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P9_ek;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P10_oy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P15_pt;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P4_bd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P9_nt;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P4_b4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P9_ei;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P15_mn;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P8_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S543>/S-Function'

  boolean_T SFunction_P12_pl;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S543>/S-Function'

  boolean_T SFunction_P13_gn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S543>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S543>/S-Function'

  boolean_T SFunction_P8_pk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S547>/S-Function'

  boolean_T SFunction_P12_k;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S547>/S-Function'

  boolean_T SFunction_P13_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S547>/S-Function'

  boolean_T SFunction_P16_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S547>/S-Function'

  boolean_T SFunction_P8_my;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S545>/S-Function'

  boolean_T SFunction_P12_g3;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S545>/S-Function'

  boolean_T SFunction_P13_hr;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S545>/S-Function'

  boolean_T SFunction_P16_a;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S545>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S93>/CLK1'

  boolean_T ADC_P5_pj;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S82>/ADC'

  int8_T Constant_Value;               // Computed Parameter: Constant_Value
                                          //  Referenced by: '<S178>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S178>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S178>/Constant3'

  int8_T Constant4_Value_j;            // Computed Parameter: Constant4_Value_j
                                          //  Referenced by: '<S178>/Constant4'

  int8_T Constant_Value_i;             // Computed Parameter: Constant_Value_i
                                          //  Referenced by: '<S448>/Constant'

  int8_T Constant2_Value_p;            // Computed Parameter: Constant2_Value_p
                                          //  Referenced by: '<S448>/Constant2'

  int8_T Constant3_Value_g;            // Computed Parameter: Constant3_Value_g
                                          //  Referenced by: '<S448>/Constant3'

  int8_T Constant4_Value_c;            // Computed Parameter: Constant4_Value_c
                                          //  Referenced by: '<S448>/Constant4'

  P_Subsystem1_imperix_control_T Subsystem1_f;// '<S307>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay_d;// '<S307>/Subsystem - pi//2 delay' 
  P_Subsystem1_imperix_control_T Subsystem1;// '<S299>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay;// '<S299>/Subsystem - pi//2 delay' 
};

// Real-time Model Data Structure
struct tag_RTM_imperix_control_T {
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

  extern P_imperix_control_T imperix_control_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_imperix_control_T imperix_control_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_imperix_control_T imperix_control_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void imperix_control_initialize(void);
  extern void imperix_control_step0(void);// Sample time: [0.000166667s, 0.0s]
  extern void imperix_control_step1(void);// Sample time: [0.00166667s, 0.0s]
  extern void imperix_control_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_imperix_control_T *const imperix_control_M;

#ifdef __cplusplus

}

#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Constant2' : Unused code path elimination
//  Block '<S1>/Data Type Conversion9' : Unused code path elimination
//  Block '<S45>/Gain6' : Unused code path elimination
//  Block '<S45>/Gain7' : Unused code path elimination
//  Block '<S45>/Sum4' : Unused code path elimination
//  Block '<S46>/Gain5' : Unused code path elimination
//  Block '<S419>/Fcn' : Unused code path elimination
//  Block '<S419>/Fcn1' : Unused code path elimination
//  Block '<S420>/Fcn' : Unused code path elimination
//  Block '<S420>/Fcn1' : Unused code path elimination
//  Block '<S416>/Switch' : Unused code path elimination
//  Block '<S209>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S211>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S213>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S215>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S217>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S219>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S221>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S223>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S225>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S227>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S229>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S231>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S233>/Data Type Conversion' : Eliminate redundant data type conversion


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
//  '<Root>' : 'imperix_control'
//  '<S1>'   : 'imperix_control/Closed_loop_control'
//  '<S2>'   : 'imperix_control/Plant_Model'
//  '<S3>'   : 'imperix_control/Closed_loop_control/ADC10'
//  '<S4>'   : 'imperix_control/Closed_loop_control/ADC11'
//  '<S5>'   : 'imperix_control/Closed_loop_control/ADC12'
//  '<S6>'   : 'imperix_control/Closed_loop_control/ADC13'
//  '<S7>'   : 'imperix_control/Closed_loop_control/ADC14'
//  '<S8>'   : 'imperix_control/Closed_loop_control/ADC15'
//  '<S9>'   : 'imperix_control/Closed_loop_control/ADC16'
//  '<S10>'  : 'imperix_control/Closed_loop_control/ADC17'
//  '<S11>'  : 'imperix_control/Closed_loop_control/ADC18'
//  '<S12>'  : 'imperix_control/Closed_loop_control/ADC20'
//  '<S13>'  : 'imperix_control/Closed_loop_control/ADC4'
//  '<S14>'  : 'imperix_control/Closed_loop_control/ADC6'
//  '<S15>'  : 'imperix_control/Closed_loop_control/ADC7'
//  '<S16>'  : 'imperix_control/Closed_loop_control/ADC9'
//  '<S17>'  : 'imperix_control/Closed_loop_control/Cluster Voltage Mapping'
//  '<S18>'  : 'imperix_control/Closed_loop_control/Configuration2'
//  '<S19>'  : 'imperix_control/Closed_loop_control/Energy balance'
//  '<S20>'  : 'imperix_control/Closed_loop_control/Flux PI'
//  '<S21>'  : 'imperix_control/Closed_loop_control/IM references'
//  '<S22>'  : 'imperix_control/Closed_loop_control/Kalman Filter'
//  '<S23>'  : 'imperix_control/Closed_loop_control/LICCs control'
//  '<S24>'  : 'imperix_control/Closed_loop_control/LPF'
//  '<S25>'  : 'imperix_control/Closed_loop_control/Modulation index'
//  '<S26>'  : 'imperix_control/Closed_loop_control/NN CEC'
//  '<S27>'  : 'imperix_control/Closed_loop_control/PID Controller'
//  '<S28>'  : 'imperix_control/Closed_loop_control/PWM_CB3'
//  '<S29>'  : 'imperix_control/Closed_loop_control/Probe'
//  '<S30>'  : 'imperix_control/Closed_loop_control/Probe1'
//  '<S31>'  : 'imperix_control/Closed_loop_control/Probe10'
//  '<S32>'  : 'imperix_control/Closed_loop_control/Probe11'
//  '<S33>'  : 'imperix_control/Closed_loop_control/Probe12'
//  '<S34>'  : 'imperix_control/Closed_loop_control/Probe2'
//  '<S35>'  : 'imperix_control/Closed_loop_control/Probe3'
//  '<S36>'  : 'imperix_control/Closed_loop_control/Probe4'
//  '<S37>'  : 'imperix_control/Closed_loop_control/Probe5'
//  '<S38>'  : 'imperix_control/Closed_loop_control/Probe6'
//  '<S39>'  : 'imperix_control/Closed_loop_control/Probe7'
//  '<S40>'  : 'imperix_control/Closed_loop_control/Probe8'
//  '<S41>'  : 'imperix_control/Closed_loop_control/Probe9'
//  '<S42>'  : 'imperix_control/Closed_loop_control/Speed PI'
//  '<S43>'  : 'imperix_control/Closed_loop_control/Subsystem1'
//  '<S44>'  : 'imperix_control/Closed_loop_control/Subsystem10'
//  '<S45>'  : 'imperix_control/Closed_loop_control/Subsystem11'
//  '<S46>'  : 'imperix_control/Closed_loop_control/Subsystem12'
//  '<S47>'  : 'imperix_control/Closed_loop_control/Subsystem14'
//  '<S48>'  : 'imperix_control/Closed_loop_control/Subsystem15'
//  '<S49>'  : 'imperix_control/Closed_loop_control/Subsystem16'
//  '<S50>'  : 'imperix_control/Closed_loop_control/Subsystem17'
//  '<S51>'  : 'imperix_control/Closed_loop_control/Subsystem18'
//  '<S52>'  : 'imperix_control/Closed_loop_control/Subsystem2'
//  '<S53>'  : 'imperix_control/Closed_loop_control/Subsystem3'
//  '<S54>'  : 'imperix_control/Closed_loop_control/Subsystem4'
//  '<S55>'  : 'imperix_control/Closed_loop_control/Subsystem5'
//  '<S56>'  : 'imperix_control/Closed_loop_control/Subsystem8'
//  '<S57>'  : 'imperix_control/Closed_loop_control/Subsystem9'
//  '<S58>'  : 'imperix_control/Closed_loop_control/Tunable parameter1'
//  '<S59>'  : 'imperix_control/Closed_loop_control/Tunable parameter16'
//  '<S60>'  : 'imperix_control/Closed_loop_control/Tunable parameter2'
//  '<S61>'  : 'imperix_control/Closed_loop_control/ADC10/sub'
//  '<S62>'  : 'imperix_control/Closed_loop_control/ADC10/sub/generation'
//  '<S63>'  : 'imperix_control/Closed_loop_control/ADC11/sub'
//  '<S64>'  : 'imperix_control/Closed_loop_control/ADC11/sub/generation'
//  '<S65>'  : 'imperix_control/Closed_loop_control/ADC12/sub'
//  '<S66>'  : 'imperix_control/Closed_loop_control/ADC12/sub/generation'
//  '<S67>'  : 'imperix_control/Closed_loop_control/ADC13/sub'
//  '<S68>'  : 'imperix_control/Closed_loop_control/ADC13/sub/generation'
//  '<S69>'  : 'imperix_control/Closed_loop_control/ADC14/sub'
//  '<S70>'  : 'imperix_control/Closed_loop_control/ADC14/sub/generation'
//  '<S71>'  : 'imperix_control/Closed_loop_control/ADC15/sub'
//  '<S72>'  : 'imperix_control/Closed_loop_control/ADC15/sub/generation'
//  '<S73>'  : 'imperix_control/Closed_loop_control/ADC16/sub'
//  '<S74>'  : 'imperix_control/Closed_loop_control/ADC16/sub/generation'
//  '<S75>'  : 'imperix_control/Closed_loop_control/ADC17/sub'
//  '<S76>'  : 'imperix_control/Closed_loop_control/ADC17/sub/generation'
//  '<S77>'  : 'imperix_control/Closed_loop_control/ADC18/sub'
//  '<S78>'  : 'imperix_control/Closed_loop_control/ADC18/sub/generation'
//  '<S79>'  : 'imperix_control/Closed_loop_control/ADC20/sub'
//  '<S80>'  : 'imperix_control/Closed_loop_control/ADC20/sub/generation'
//  '<S81>'  : 'imperix_control/Closed_loop_control/ADC4/sub'
//  '<S82>'  : 'imperix_control/Closed_loop_control/ADC4/sub/generation'
//  '<S83>'  : 'imperix_control/Closed_loop_control/ADC6/sub'
//  '<S84>'  : 'imperix_control/Closed_loop_control/ADC6/sub/generation'
//  '<S85>'  : 'imperix_control/Closed_loop_control/ADC7/sub'
//  '<S86>'  : 'imperix_control/Closed_loop_control/ADC7/sub/generation'
//  '<S87>'  : 'imperix_control/Closed_loop_control/ADC9/sub'
//  '<S88>'  : 'imperix_control/Closed_loop_control/ADC9/sub/generation'
//  '<S89>'  : 'imperix_control/Closed_loop_control/Configuration2/Sampling clock'
//  '<S90>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0'
//  '<S91>'  : 'imperix_control/Closed_loop_control/Configuration2/Sampling clock/generation'
//  '<S92>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0/sub'
//  '<S93>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0/sub/generation'
//  '<S94>'  : 'imperix_control/Closed_loop_control/Flux PI/Anti-windup'
//  '<S95>'  : 'imperix_control/Closed_loop_control/Flux PI/D Gain'
//  '<S96>'  : 'imperix_control/Closed_loop_control/Flux PI/External Derivative'
//  '<S97>'  : 'imperix_control/Closed_loop_control/Flux PI/Filter'
//  '<S98>'  : 'imperix_control/Closed_loop_control/Flux PI/Filter ICs'
//  '<S99>'  : 'imperix_control/Closed_loop_control/Flux PI/I Gain'
//  '<S100>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain'
//  '<S101>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain Fdbk'
//  '<S102>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator'
//  '<S103>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator ICs'
//  '<S104>' : 'imperix_control/Closed_loop_control/Flux PI/N Copy'
//  '<S105>' : 'imperix_control/Closed_loop_control/Flux PI/N Gain'
//  '<S106>' : 'imperix_control/Closed_loop_control/Flux PI/P Copy'
//  '<S107>' : 'imperix_control/Closed_loop_control/Flux PI/Parallel P Gain'
//  '<S108>' : 'imperix_control/Closed_loop_control/Flux PI/Reset Signal'
//  '<S109>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation'
//  '<S110>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation Fdbk'
//  '<S111>' : 'imperix_control/Closed_loop_control/Flux PI/Sum'
//  '<S112>' : 'imperix_control/Closed_loop_control/Flux PI/Sum Fdbk'
//  '<S113>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode'
//  '<S114>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode Sum'
//  '<S115>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Integral'
//  '<S116>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Ngain'
//  '<S117>' : 'imperix_control/Closed_loop_control/Flux PI/postSat Signal'
//  '<S118>' : 'imperix_control/Closed_loop_control/Flux PI/preInt Signal'
//  '<S119>' : 'imperix_control/Closed_loop_control/Flux PI/preSat Signal'
//  '<S120>' : 'imperix_control/Closed_loop_control/Flux PI/Anti-windup/Back Calculation'
//  '<S121>' : 'imperix_control/Closed_loop_control/Flux PI/D Gain/Disabled'
//  '<S122>' : 'imperix_control/Closed_loop_control/Flux PI/External Derivative/Disabled'
//  '<S123>' : 'imperix_control/Closed_loop_control/Flux PI/Filter/Disabled'
//  '<S124>' : 'imperix_control/Closed_loop_control/Flux PI/Filter ICs/Disabled'
//  '<S125>' : 'imperix_control/Closed_loop_control/Flux PI/I Gain/Internal Parameters'
//  '<S126>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain/Passthrough'
//  '<S127>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S128>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator/Discrete'
//  '<S129>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator ICs/Internal IC'
//  '<S130>' : 'imperix_control/Closed_loop_control/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S131>' : 'imperix_control/Closed_loop_control/Flux PI/N Gain/Disabled'
//  '<S132>' : 'imperix_control/Closed_loop_control/Flux PI/P Copy/Disabled'
//  '<S133>' : 'imperix_control/Closed_loop_control/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S134>' : 'imperix_control/Closed_loop_control/Flux PI/Reset Signal/Disabled'
//  '<S135>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation/Enabled'
//  '<S136>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation Fdbk/Disabled'
//  '<S137>' : 'imperix_control/Closed_loop_control/Flux PI/Sum/Sum_PI'
//  '<S138>' : 'imperix_control/Closed_loop_control/Flux PI/Sum Fdbk/Disabled'
//  '<S139>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode/Disabled'
//  '<S140>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S141>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S142>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S143>' : 'imperix_control/Closed_loop_control/Flux PI/postSat Signal/Forward_Path'
//  '<S144>' : 'imperix_control/Closed_loop_control/Flux PI/preInt Signal/Internal PreInt'
//  '<S145>' : 'imperix_control/Closed_loop_control/Flux PI/preSat Signal/Forward_Path'
//  '<S146>' : 'imperix_control/Closed_loop_control/NN CEC/FFNN'
//  '<S147>' : 'imperix_control/Closed_loop_control/NN CEC/Input format'
//  '<S148>' : 'imperix_control/Closed_loop_control/NN CEC/LPF'
//  '<S149>' : 'imperix_control/Closed_loop_control/NN CEC/Saturation'
//  '<S150>' : 'imperix_control/Closed_loop_control/NN CEC/White noise'
//  '<S151>' : 'imperix_control/Closed_loop_control/NN CEC/FFNN/MLFB'
//  '<S152>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup'
//  '<S153>' : 'imperix_control/Closed_loop_control/PID Controller/D Gain'
//  '<S154>' : 'imperix_control/Closed_loop_control/PID Controller/External Derivative'
//  '<S155>' : 'imperix_control/Closed_loop_control/PID Controller/Filter'
//  '<S156>' : 'imperix_control/Closed_loop_control/PID Controller/Filter ICs'
//  '<S157>' : 'imperix_control/Closed_loop_control/PID Controller/I Gain'
//  '<S158>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain'
//  '<S159>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain Fdbk'
//  '<S160>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator'
//  '<S161>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator ICs'
//  '<S162>' : 'imperix_control/Closed_loop_control/PID Controller/N Copy'
//  '<S163>' : 'imperix_control/Closed_loop_control/PID Controller/N Gain'
//  '<S164>' : 'imperix_control/Closed_loop_control/PID Controller/P Copy'
//  '<S165>' : 'imperix_control/Closed_loop_control/PID Controller/Parallel P Gain'
//  '<S166>' : 'imperix_control/Closed_loop_control/PID Controller/Reset Signal'
//  '<S167>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation'
//  '<S168>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation Fdbk'
//  '<S169>' : 'imperix_control/Closed_loop_control/PID Controller/Sum'
//  '<S170>' : 'imperix_control/Closed_loop_control/PID Controller/Sum Fdbk'
//  '<S171>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode'
//  '<S172>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode Sum'
//  '<S173>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Integral'
//  '<S174>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Ngain'
//  '<S175>' : 'imperix_control/Closed_loop_control/PID Controller/postSat Signal'
//  '<S176>' : 'imperix_control/Closed_loop_control/PID Controller/preInt Signal'
//  '<S177>' : 'imperix_control/Closed_loop_control/PID Controller/preSat Signal'
//  '<S178>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel'
//  '<S179>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S180>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S181>' : 'imperix_control/Closed_loop_control/PID Controller/D Gain/Disabled'
//  '<S182>' : 'imperix_control/Closed_loop_control/PID Controller/External Derivative/Disabled'
//  '<S183>' : 'imperix_control/Closed_loop_control/PID Controller/Filter/Disabled'
//  '<S184>' : 'imperix_control/Closed_loop_control/PID Controller/Filter ICs/Disabled'
//  '<S185>' : 'imperix_control/Closed_loop_control/PID Controller/I Gain/Internal Parameters'
//  '<S186>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain/Passthrough'
//  '<S187>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S188>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator/Discrete'
//  '<S189>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator ICs/Internal IC'
//  '<S190>' : 'imperix_control/Closed_loop_control/PID Controller/N Copy/Disabled wSignal Specification'
//  '<S191>' : 'imperix_control/Closed_loop_control/PID Controller/N Gain/Disabled'
//  '<S192>' : 'imperix_control/Closed_loop_control/PID Controller/P Copy/Disabled'
//  '<S193>' : 'imperix_control/Closed_loop_control/PID Controller/Parallel P Gain/Internal Parameters'
//  '<S194>' : 'imperix_control/Closed_loop_control/PID Controller/Reset Signal/Disabled'
//  '<S195>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation/Enabled'
//  '<S196>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation Fdbk/Disabled'
//  '<S197>' : 'imperix_control/Closed_loop_control/PID Controller/Sum/Sum_PI'
//  '<S198>' : 'imperix_control/Closed_loop_control/PID Controller/Sum Fdbk/Disabled'
//  '<S199>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode/Disabled'
//  '<S200>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S201>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Integral/TsSignalSpecification'
//  '<S202>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S203>' : 'imperix_control/Closed_loop_control/PID Controller/postSat Signal/Forward_Path'
//  '<S204>' : 'imperix_control/Closed_loop_control/PID Controller/preInt Signal/Internal PreInt'
//  '<S205>' : 'imperix_control/Closed_loop_control/PID Controller/preSat Signal/Forward_Path'
//  '<S206>' : 'imperix_control/Closed_loop_control/PWM_CB3/sub'
//  '<S207>' : 'imperix_control/Closed_loop_control/PWM_CB3/sub/generation'
//  '<S208>' : 'imperix_control/Closed_loop_control/Probe/sub'
//  '<S209>' : 'imperix_control/Closed_loop_control/Probe/sub/generation'
//  '<S210>' : 'imperix_control/Closed_loop_control/Probe1/sub'
//  '<S211>' : 'imperix_control/Closed_loop_control/Probe1/sub/generation'
//  '<S212>' : 'imperix_control/Closed_loop_control/Probe10/sub'
//  '<S213>' : 'imperix_control/Closed_loop_control/Probe10/sub/generation'
//  '<S214>' : 'imperix_control/Closed_loop_control/Probe11/sub'
//  '<S215>' : 'imperix_control/Closed_loop_control/Probe11/sub/generation'
//  '<S216>' : 'imperix_control/Closed_loop_control/Probe12/sub'
//  '<S217>' : 'imperix_control/Closed_loop_control/Probe12/sub/generation'
//  '<S218>' : 'imperix_control/Closed_loop_control/Probe2/sub'
//  '<S219>' : 'imperix_control/Closed_loop_control/Probe2/sub/generation'
//  '<S220>' : 'imperix_control/Closed_loop_control/Probe3/sub'
//  '<S221>' : 'imperix_control/Closed_loop_control/Probe3/sub/generation'
//  '<S222>' : 'imperix_control/Closed_loop_control/Probe4/sub'
//  '<S223>' : 'imperix_control/Closed_loop_control/Probe4/sub/generation'
//  '<S224>' : 'imperix_control/Closed_loop_control/Probe5/sub'
//  '<S225>' : 'imperix_control/Closed_loop_control/Probe5/sub/generation'
//  '<S226>' : 'imperix_control/Closed_loop_control/Probe6/sub'
//  '<S227>' : 'imperix_control/Closed_loop_control/Probe6/sub/generation'
//  '<S228>' : 'imperix_control/Closed_loop_control/Probe7/sub'
//  '<S229>' : 'imperix_control/Closed_loop_control/Probe7/sub/generation'
//  '<S230>' : 'imperix_control/Closed_loop_control/Probe8/sub'
//  '<S231>' : 'imperix_control/Closed_loop_control/Probe8/sub/generation'
//  '<S232>' : 'imperix_control/Closed_loop_control/Probe9/sub'
//  '<S233>' : 'imperix_control/Closed_loop_control/Probe9/sub/generation'
//  '<S234>' : 'imperix_control/Closed_loop_control/Speed PI/Anti-windup'
//  '<S235>' : 'imperix_control/Closed_loop_control/Speed PI/D Gain'
//  '<S236>' : 'imperix_control/Closed_loop_control/Speed PI/External Derivative'
//  '<S237>' : 'imperix_control/Closed_loop_control/Speed PI/Filter'
//  '<S238>' : 'imperix_control/Closed_loop_control/Speed PI/Filter ICs'
//  '<S239>' : 'imperix_control/Closed_loop_control/Speed PI/I Gain'
//  '<S240>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain'
//  '<S241>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain Fdbk'
//  '<S242>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator'
//  '<S243>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator ICs'
//  '<S244>' : 'imperix_control/Closed_loop_control/Speed PI/N Copy'
//  '<S245>' : 'imperix_control/Closed_loop_control/Speed PI/N Gain'
//  '<S246>' : 'imperix_control/Closed_loop_control/Speed PI/P Copy'
//  '<S247>' : 'imperix_control/Closed_loop_control/Speed PI/Parallel P Gain'
//  '<S248>' : 'imperix_control/Closed_loop_control/Speed PI/Reset Signal'
//  '<S249>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation'
//  '<S250>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation Fdbk'
//  '<S251>' : 'imperix_control/Closed_loop_control/Speed PI/Sum'
//  '<S252>' : 'imperix_control/Closed_loop_control/Speed PI/Sum Fdbk'
//  '<S253>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode'
//  '<S254>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode Sum'
//  '<S255>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Integral'
//  '<S256>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Ngain'
//  '<S257>' : 'imperix_control/Closed_loop_control/Speed PI/postSat Signal'
//  '<S258>' : 'imperix_control/Closed_loop_control/Speed PI/preInt Signal'
//  '<S259>' : 'imperix_control/Closed_loop_control/Speed PI/preSat Signal'
//  '<S260>' : 'imperix_control/Closed_loop_control/Speed PI/Anti-windup/Back Calculation'
//  '<S261>' : 'imperix_control/Closed_loop_control/Speed PI/D Gain/Disabled'
//  '<S262>' : 'imperix_control/Closed_loop_control/Speed PI/External Derivative/Disabled'
//  '<S263>' : 'imperix_control/Closed_loop_control/Speed PI/Filter/Disabled'
//  '<S264>' : 'imperix_control/Closed_loop_control/Speed PI/Filter ICs/Disabled'
//  '<S265>' : 'imperix_control/Closed_loop_control/Speed PI/I Gain/Internal Parameters'
//  '<S266>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain/Passthrough'
//  '<S267>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S268>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator/Discrete'
//  '<S269>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator ICs/Internal IC'
//  '<S270>' : 'imperix_control/Closed_loop_control/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S271>' : 'imperix_control/Closed_loop_control/Speed PI/N Gain/Disabled'
//  '<S272>' : 'imperix_control/Closed_loop_control/Speed PI/P Copy/Disabled'
//  '<S273>' : 'imperix_control/Closed_loop_control/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S274>' : 'imperix_control/Closed_loop_control/Speed PI/Reset Signal/Disabled'
//  '<S275>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation/Enabled'
//  '<S276>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation Fdbk/Disabled'
//  '<S277>' : 'imperix_control/Closed_loop_control/Speed PI/Sum/Sum_PI'
//  '<S278>' : 'imperix_control/Closed_loop_control/Speed PI/Sum Fdbk/Disabled'
//  '<S279>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode/Disabled'
//  '<S280>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S281>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S282>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S283>' : 'imperix_control/Closed_loop_control/Speed PI/postSat Signal/Forward_Path'
//  '<S284>' : 'imperix_control/Closed_loop_control/Speed PI/preInt Signal/Internal PreInt'
//  '<S285>' : 'imperix_control/Closed_loop_control/Speed PI/preSat Signal/Forward_Path'
//  '<S286>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S287>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S288>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S289>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S290>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S291>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S292>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S293>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S294>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S295>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S296>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S297>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S298>' : 'imperix_control/Closed_loop_control/Subsystem10/Alpha-Beta-Zero to abc'
//  '<S299>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero'
//  '<S300>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S301>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S302>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S303>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S304>' : 'imperix_control/Closed_loop_control/Subsystem14/Alpha-Beta-Zero to abc'
//  '<S305>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d'
//  '<S306>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q '
//  '<S307>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero'
//  '<S308>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Anti-windup'
//  '<S309>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/D Gain'
//  '<S310>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/External Derivative'
//  '<S311>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter'
//  '<S312>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter ICs'
//  '<S313>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/I Gain'
//  '<S314>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain'
//  '<S315>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain Fdbk'
//  '<S316>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator'
//  '<S317>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator ICs'
//  '<S318>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Copy'
//  '<S319>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Gain'
//  '<S320>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/P Copy'
//  '<S321>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Parallel P Gain'
//  '<S322>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Reset Signal'
//  '<S323>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation'
//  '<S324>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation Fdbk'
//  '<S325>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum'
//  '<S326>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum Fdbk'
//  '<S327>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode'
//  '<S328>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode Sum'
//  '<S329>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Integral'
//  '<S330>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Ngain'
//  '<S331>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/postSat Signal'
//  '<S332>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preInt Signal'
//  '<S333>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preSat Signal'
//  '<S334>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Anti-windup/Back Calculation'
//  '<S335>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/D Gain/Disabled'
//  '<S336>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/External Derivative/Disabled'
//  '<S337>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter/Disabled'
//  '<S338>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter ICs/Disabled'
//  '<S339>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/I Gain/Internal Parameters'
//  '<S340>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain/Passthrough'
//  '<S341>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S342>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator/Discrete'
//  '<S343>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator ICs/Internal IC'
//  '<S344>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S345>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Gain/Disabled'
//  '<S346>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/P Copy/Disabled'
//  '<S347>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S348>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Reset Signal/Disabled'
//  '<S349>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation/Enabled'
//  '<S350>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation Fdbk/Disabled'
//  '<S351>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum/Sum_PI'
//  '<S352>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum Fdbk/Disabled'
//  '<S353>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode/Disabled'
//  '<S354>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S355>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S356>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S357>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/postSat Signal/Forward_Path'
//  '<S358>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preInt Signal/Internal PreInt'
//  '<S359>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preSat Signal/Forward_Path'
//  '<S360>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Anti-windup'
//  '<S361>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /D Gain'
//  '<S362>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /External Derivative'
//  '<S363>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter'
//  '<S364>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter ICs'
//  '<S365>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /I Gain'
//  '<S366>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain'
//  '<S367>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain Fdbk'
//  '<S368>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator'
//  '<S369>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator ICs'
//  '<S370>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Copy'
//  '<S371>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Gain'
//  '<S372>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /P Copy'
//  '<S373>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Parallel P Gain'
//  '<S374>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Reset Signal'
//  '<S375>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation'
//  '<S376>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation Fdbk'
//  '<S377>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum'
//  '<S378>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum Fdbk'
//  '<S379>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode'
//  '<S380>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode Sum'
//  '<S381>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Integral'
//  '<S382>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Ngain'
//  '<S383>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /postSat Signal'
//  '<S384>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preInt Signal'
//  '<S385>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preSat Signal'
//  '<S386>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Anti-windup/Back Calculation'
//  '<S387>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /D Gain/Disabled'
//  '<S388>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /External Derivative/Disabled'
//  '<S389>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter/Disabled'
//  '<S390>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter ICs/Disabled'
//  '<S391>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /I Gain/Internal Parameters'
//  '<S392>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain/Passthrough'
//  '<S393>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S394>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator/Discrete'
//  '<S395>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator ICs/Internal IC'
//  '<S396>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S397>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Gain/Disabled'
//  '<S398>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /P Copy/Disabled'
//  '<S399>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S400>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Reset Signal/Disabled'
//  '<S401>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation/Enabled'
//  '<S402>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation Fdbk/Disabled'
//  '<S403>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum/Sum_PI'
//  '<S404>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum Fdbk/Disabled'
//  '<S405>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode/Disabled'
//  '<S406>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S407>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S408>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S409>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /postSat Signal/Forward_Path'
//  '<S410>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preInt Signal/Internal PreInt'
//  '<S411>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preSat Signal/Forward_Path'
//  '<S412>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S413>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S414>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S415>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S416>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1'
//  '<S417>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Compare To Constant'
//  '<S418>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Compare To Constant1'
//  '<S419>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Subsystem - pi//2 delay'
//  '<S420>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Subsystem1'
//  '<S421>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI'
//  '<S422>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup'
//  '<S423>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/D Gain'
//  '<S424>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/External Derivative'
//  '<S425>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter'
//  '<S426>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter ICs'
//  '<S427>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/I Gain'
//  '<S428>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain'
//  '<S429>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain Fdbk'
//  '<S430>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator'
//  '<S431>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator ICs'
//  '<S432>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Copy'
//  '<S433>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Gain'
//  '<S434>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/P Copy'
//  '<S435>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Parallel P Gain'
//  '<S436>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Reset Signal'
//  '<S437>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation'
//  '<S438>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation Fdbk'
//  '<S439>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum'
//  '<S440>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum Fdbk'
//  '<S441>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode'
//  '<S442>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode Sum'
//  '<S443>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Integral'
//  '<S444>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Ngain'
//  '<S445>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/postSat Signal'
//  '<S446>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preInt Signal'
//  '<S447>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preSat Signal'
//  '<S448>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S449>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S450>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S451>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/D Gain/Disabled'
//  '<S452>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/External Derivative/Disabled'
//  '<S453>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter/Disabled'
//  '<S454>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter ICs/Disabled'
//  '<S455>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/I Gain/Internal Parameters'
//  '<S456>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain/Passthrough'
//  '<S457>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S458>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator/Discrete'
//  '<S459>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator ICs/Internal IC'
//  '<S460>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S461>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Gain/Disabled'
//  '<S462>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/P Copy/Disabled'
//  '<S463>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S464>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Reset Signal/Disabled'
//  '<S465>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation/Enabled'
//  '<S466>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation Fdbk/Disabled'
//  '<S467>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum/Sum_PI'
//  '<S468>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum Fdbk/Disabled'
//  '<S469>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode/Disabled'
//  '<S470>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S471>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S472>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S473>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/postSat Signal/Forward_Path'
//  '<S474>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preInt Signal/Internal PreInt'
//  '<S475>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preSat Signal/Forward_Path'
//  '<S476>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0'
//  '<S477>' : 'imperix_control/Closed_loop_control/Subsystem18/abc to Alpha-Beta-Zero'
//  '<S478>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S479>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S480>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S481>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S482>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S483>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S484>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S485>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S486>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S487>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S488>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S489>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S490>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S491>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S492>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S493>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S494>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S495>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S496>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S497>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S498>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S499>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S500>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S501>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S502>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S503>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S504>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S505>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S506>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S507>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S508>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S509>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S510>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S511>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S512>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S513>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S514>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S515>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S516>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S517>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S518>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S519>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S520>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S521>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S522>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S523>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S524>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S525>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S526>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S527>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S528>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S529>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S530>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S531>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S532>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S533>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S534>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S535>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S536>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S537>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S538>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S539>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S540>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S541>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S542>' : 'imperix_control/Closed_loop_control/Tunable parameter1/sub'
//  '<S543>' : 'imperix_control/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S544>' : 'imperix_control/Closed_loop_control/Tunable parameter16/sub'
//  '<S545>' : 'imperix_control/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S546>' : 'imperix_control/Closed_loop_control/Tunable parameter2/sub'
//  '<S547>' : 'imperix_control/Closed_loop_control/Tunable parameter2/sub/generation'

#endif                                 // imperix_control_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
