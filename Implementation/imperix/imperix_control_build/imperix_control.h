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
// Model version                  : 19.33
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Dec 18 17:11:36 2025
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
  real_T TmpRTBAtSaturationInport1[3]; // '<S26>/Vector Concatenate4'
  real_T TmpRTBAtSum7Inport1;          // '<S1>/Constant5'
  real_T TmpRTBAtSum5Inport2;
  real_T TmpRTBAtICOutport1;           // '<S54>/IC'
  real_T Fcn;                          // '<S499>/Fcn'
  real_T Fcn1;                         // '<S499>/Fcn1'
  real_T Fcn_p;                        // '<S498>/Fcn'
  real_T Fcn1_h;                       // '<S498>/Fcn1'
  real_T Fcn_b;                        // '<S433>/Fcn'
  real_T Fcn1_o;                       // '<S433>/Fcn1'
  real_T Fcn_k;                        // '<S432>/Fcn'
  real_T Fcn1_l;                       // '<S432>/Fcn1'
  real_T Fcn_c;                        // '<S321>/Fcn'
  real_T Fcn1_f;                       // '<S321>/Fcn1'
  real_T Fcn_h;                        // '<S320>/Fcn'
  real_T Fcn1_a;                       // '<S320>/Fcn1'
  real32_T ADC;                        // '<S90>/ADC'
  real32_T ADC_c;                      // '<S92>/ADC'
  real32_T ADC_o;                      // '<S80>/ADC'
  real32_T ADC_g;                      // '<S68>/ADC'
  real32_T ADC_p;                      // '<S82>/ADC'
  real32_T ADC_i;                      // '<S84>/ADC'
  real32_T DataTypeConversion3[6];     // '<S1>/Data Type Conversion3'
  real32_T ADC_b;                      // '<S76>/ADC'
  real32_T ADC_n;                      // '<S94>/ADC'
  real32_T ADC_cr;                     // '<S70>/ADC'
  real32_T ADC_ge;                     // '<S78>/ADC'
  real32_T ADC_p2;                     // '<S72>/ADC'
  real32_T ADC_h;                      // '<S74>/ADC'
  real32_T DataTypeConversion4[6];     // '<S1>/Data Type Conversion4'
  real32_T ADC_bz;                     // '<S86>/ADC'
  real32_T DataTypeConversion5;        // '<S1>/Data Type Conversion5'
  real32_T DataTypeConversion6[2];     // '<S1>/Data Type Conversion6'
  real32_T SFunction;                  // '<S561>/S-Function'
  real32_T SFunction_k;                // '<S565>/S-Function'
  real32_T DataTypeConversion7[2];     // '<S1>/Data Type Conversion7'
  real32_T DataTypeConversion8;        // '<S1>/Data Type Conversion8'
  real32_T SFunction_kx;               // '<S563>/S-Function'
  real32_T DataTypeConversion1;        // '<S28>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S28>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S28>/Data Type Conversion3'
  real32_T DataTypeConversion1_n;      // '<S304>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S304>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S304>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S305>/Data Type Conversion1'
  real32_T DataTypeConversion2_e;      // '<S305>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S305>/Data Type Conversion3'
  real32_T DataTypeConversion1_nb;     // '<S306>/Data Type Conversion1'
  real32_T DataTypeConversion2_h;      // '<S306>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S306>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S307>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S307>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S307>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S500>/Data Type Conversion1'
  real32_T DataTypeConversion2_ka;     // '<S500>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S500>/Data Type Conversion3'
  real32_T DataTypeConversion1_ii;     // '<S501>/Data Type Conversion1'
  real32_T DataTypeConversion2_hr;     // '<S501>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S501>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S502>/Data Type Conversion1'
  real32_T DataTypeConversion2_m;      // '<S502>/Data Type Conversion2'
  real32_T DataTypeConversion3_na;     // '<S502>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S503>/Data Type Conversion1'
  real32_T DataTypeConversion2_ht;     // '<S503>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S503>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S512>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S512>/Data Type Conversion2'
  real32_T DataTypeConversion3_aq;     // '<S512>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S513>/Data Type Conversion1'
  real32_T DataTypeConversion2_kf;     // '<S513>/Data Type Conversion2'
  real32_T DataTypeConversion3_pq;     // '<S513>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S514>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S514>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S514>/Data Type Conversion3'
  real32_T DataTypeConversion1_mx;     // '<S515>/Data Type Conversion1'
  real32_T DataTypeConversion2_kr;     // '<S515>/Data Type Conversion2'
  real32_T DataTypeConversion3_nh;     // '<S515>/Data Type Conversion3'
  real32_T DataTypeConversion1_eq;     // '<S524>/Data Type Conversion1'
  real32_T DataTypeConversion2_kfv;    // '<S524>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S524>/Data Type Conversion3'
  real32_T DataTypeConversion1_gn;     // '<S525>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S525>/Data Type Conversion2'
  real32_T DataTypeConversion3_e3;     // '<S525>/Data Type Conversion3'
  real32_T DataTypeConversion1_gj;     // '<S526>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S526>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S526>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S527>/Data Type Conversion1'
  real32_T DataTypeConversion2_d1;     // '<S527>/Data Type Conversion2'
  real32_T DataTypeConversion3_f;      // '<S527>/Data Type Conversion3'
  real32_T DataTypeConversion1_hk;     // '<S536>/Data Type Conversion1'
  real32_T DataTypeConversion2_dy;     // '<S536>/Data Type Conversion2'
  real32_T DataTypeConversion3_a1;     // '<S536>/Data Type Conversion3'
  real32_T DataTypeConversion1_gf;     // '<S537>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S537>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S537>/Data Type Conversion3'
  real32_T DataTypeConversion1_cz;     // '<S538>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S538>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S538>/Data Type Conversion3'
  real32_T DataTypeConversion1_le;     // '<S539>/Data Type Conversion1'
  real32_T DataTypeConversion2_lo;     // '<S539>/Data Type Conversion2'
  real32_T DataTypeConversion3_o4;     // '<S539>/Data Type Conversion3'
  real32_T DataTypeConversion1_iz;     // '<S548>/Data Type Conversion1'
  real32_T DataTypeConversion2_mh;     // '<S548>/Data Type Conversion2'
  real32_T DataTypeConversion3_ax;     // '<S548>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S549>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S549>/Data Type Conversion2'
  real32_T DataTypeConversion3_p3;     // '<S549>/Data Type Conversion3'
  real32_T DataTypeConversion1_kz;     // '<S550>/Data Type Conversion1'
  real32_T DataTypeConversion2_m4;     // '<S550>/Data Type Conversion2'
  real32_T DataTypeConversion3_c;      // '<S550>/Data Type Conversion3'
  real32_T DataTypeConversion1_h3;     // '<S551>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S551>/Data Type Conversion2'
  real32_T DataTypeConversion3_bc;     // '<S551>/Data Type Conversion3'
  real32_T ADC_j;                      // '<S88>/ADC'
  real32_T DataTypeConversion10;       // '<S1>/Data Type Conversion10'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_control_T {
  mpcActiveSetOptions_imperix_c_T options_z;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_c_T options_o;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_c_T options;// '<S1>/LICCs control'
  mpcActiveSetOptions_imperix_c_T SolverOpts;// '<S26>/Saturation'
  real_T SFunction_DSTATE;             // '<S215>/S-Function'
  real_T SFunction_DSTATE_h;           // '<S217>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S219>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S221>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S223>/S-Function'
  real_T SFunction_DSTATE_pu;          // '<S225>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S227>/S-Function'
  real_T UnitDelay1_DSTATE[2];         // '<S154>/Unit Delay1'
  real_T UnitDelay1_DSTATE_k;          // '<S24>/Unit Delay1'
  real_T Integrator_DSTATE;            // '<S194>/Integrator'
  real_T SFunction_DSTATE_n;           // '<S561>/S-Function'
  real_T SFunction_DSTATE_et;          // '<S565>/S-Function'
  real_T Integrator_DSTATE_h;          // '<S134>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S286>/Integrator'
  real_T Integrator_DSTATE_b;          // '<S360>/Integrator'
  real_T Integrator_DSTATE_k;          // '<S412>/Integrator'
  real_T SFunction_DSTATE_pg;          // '<S229>/S-Function'
  real_T SFunction_DSTATE_ed;          // '<S231>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S233>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S237>/S-Function'
  real_T SFunction_DSTATE_ny;          // '<S239>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S241>/S-Function'
  real_T SFunction_DSTATE_nb;          // '<S243>/S-Function'
  real_T SFunction_DSTATE_l;           // '<S245>/S-Function'
  real_T SFunction_DSTATE_k;           // '<S247>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S249>/S-Function'
  real_T SFunction_DSTATE_lc;          // '<S251>/S-Function'
  real_T SFunction_DSTATE_pb;          // '<S563>/S-Function'
  real_T Integrator_DSTATE_hg;         // '<S476>/Integrator'
  real_T SFunction_DSTATE_m;           // '<S97>/S-Function'
  real_T UnitDelay_DSTATE[2];          // '<S1>/Unit Delay'
  real_T SFunction_DSTATE_fs;          // '<S235>/S-Function'
  real_T TmpRTBAtSaturationInport1_Buffe[3];// synthesized block
  real_T TmpRTBAtSum7Inport1_Buffer0;  // synthesized block
  real_T TmpRTBAtSum5Inport2_Buffer0;  // synthesized block
  real_T TmpRTBAtICOutport1_Buffer0;   // synthesized block
  real_T TmpRTBAtGainOutport1_Buffer[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport2_Bu[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport3_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport4_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport5_Bu;// synthesized block
  real_T TmpRTBAtKalmanFilterInport1_Buf[2];// synthesized block
  real_T TmpRTBAtKalmanFilterInport2_Buf;// synthesized block
  real_T TmpRTBAtUnitDelayInport1_Buffer[2];// synthesized block
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
  boolean_T IC_FirstOutputTime;        // '<S54>/IC'
  boolean_T is_max_not_empty;          // '<S26>/White noise'
  boolean_T Ac_not_empty;              // '<S26>/Saturation'
  boolean_T Ec_ref_not_empty;          // '<S26>/Input format'
  boolean_T Ad_not_empty;              // '<S1>/LICCs control'
  boolean_T xt_est_apriori_not_empty;  // '<S1>/Kalman Filter'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  boolean_T Ts_not_empty;              // '<S1>/Energy balance'
};

// Parameters for system: '<S317>/Subsystem - pi//2 delay'
struct P_Subsystempi2delay_imperix_c_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S320>/alpha_beta'

};

// Parameters for system: '<S317>/Subsystem1'
struct P_Subsystem1_imperix_control_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S321>/alpha_beta'

};

// Parameters (default storage)
struct P_imperix_control_T_ {
  struct_kYK8klzU7k6CF2sPPFadY CEMPC;  // Variable: CEMPC
                                          //  Referenced by: '<S1>/Energy balance'

  struct_Jn3yK8idWqC5lwHij8OsQE CCMPC; // Variable: CCMPC
                                          //  Referenced by:
                                          //    '<S1>/LICCs control'
                                          //    '<S17>/Gain'
                                          //    '<S154>/Gain1'
                                          //    '<S154>/Gain2'

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
                                          //    '<S52>/vx'
                                          //    '<S55>/Constant1'
                                          //    '<S56>/Gain'
                                          //    '<S62>/Gain1'
                                          //    '<S62>/Gain3'
                                          //    '<S62>/Gain4'

  struct_8pcJrWnT2NIOYJW9vpRYLD KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_aK5aQeabUeTOrz39VMjTKC IM;    // Variable: IM
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S1>/Kalman Filter'
                                          //    '<S1>/Gain'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain4'
                                          //    '<S53>/Gain'

  struct_eLXpdkXVH71IKiDfJkdaiC RFT;   // Variable: RFT
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S26>/Input format'
                                          //    '<S26>/Gain5'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S126>/Kb'
                                          //    '<S131>/Integral Gain'
                                          //    '<S139>/Proportional Gain'
                                          //    '<S141>/Saturation'
                                          //    '<S278>/Kb'
                                          //    '<S283>/Integral Gain'
                                          //    '<S291>/Proportional Gain'
                                          //    '<S293>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S352>/Kb'
                                          //    '<S357>/Integral Gain'
                                          //    '<S365>/Proportional Gain'
                                          //    '<S367>/Saturation'
                                          //    '<S404>/Kb'
                                          //    '<S409>/Integral Gain'
                                          //    '<S417>/Proportional Gain'
                                          //    '<S419>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S473>/Integral Gain'
                                          //    '<S481>/Proportional Gain'
                                          //    '<S483>/Saturation'
                                          //    '<S468>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEB;   // Variable: TEB
                                          //  Referenced by:
                                          //    '<S24>/Gain1'
                                          //    '<S24>/Gain2'
                                          //    '<S191>/Integral Gain'
                                          //    '<S199>/Proportional Gain'
                                          //    '<S201>/Saturation'
                                          //    '<S186>/DeadZone'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by:
                                          //    '<S26>/Input format'
                                          //    '<S26>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S26>/Gain4'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S317>/Constant'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S494>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_g;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_g
                                  //  Referenced by: '<S325>/Constant'

  real_T dq0toAlphaBetaZero1_Alignment;
                                // Mask Parameter: dq0toAlphaBetaZero1_Alignment
                                   //  Referenced by: '<S434>/Constant'

  real_T PIDController_InitialConditionF;
                              // Mask Parameter: PIDController_InitialConditionF
                                 //  Referenced by: '<S194>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S134>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S286>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S360>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S412>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S476>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S318>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S319>/Constant'

  real_T CompareToConstant_const_l; // Mask Parameter: CompareToConstant_const_l
                                       //  Referenced by: '<S496>/Constant'

  real_T CompareToConstant1_const_k;
                                   // Mask Parameter: CompareToConstant1_const_k
                                      //  Referenced by: '<S497>/Constant'

  real_T CompareToConstant_const_h; // Mask Parameter: CompareToConstant_const_h
                                       //  Referenced by: '<S430>/Constant'

  real_T CompareToConstant1_const_f;
                                   // Mask Parameter: CompareToConstant1_const_f
                                      //  Referenced by: '<S431>/Constant'

  real_T CompareToConstant_const_d; // Mask Parameter: CompareToConstant_const_d
                                       //  Referenced by: '<S435>/Constant'

  real_T CompareToConstant1_const_l;
                                   // Mask Parameter: CompareToConstant1_const_l
                                      //  Referenced by: '<S436>/Constant'

  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S437>/alpha_beta'

  real_T alpha_beta_Y0_p[2];           // Expression: [0,0]
                                          //  Referenced by: '<S438>/alpha_beta'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S498>/dq'

  real_T dq_Y0_e[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S499>/dq'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S184>/Constant1'

  real_T Constant1_Value_i;            // Expression: 0
                                          //  Referenced by: '<S466>/Constant1'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S90>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S92>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S80>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S68>/ADC'

  real_T ADC_P8_pe;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S82>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S84>/ADC'

  real_T ADC_P8_i;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S76>/ADC'

  real_T ADC_P8_g4;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S94>/ADC'

  real_T ADC_P8_d;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S70>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S78>/ADC'

  real_T ADC_P8_o;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S72>/ADC'

  real_T ADC_P8_i3;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S74>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S86>/ADC'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S154>/Unit Delay1'

  real_T TmpRTBAtSaturationInport1_Initi;// Expression: 0
                                            //  Referenced by:

  real_T TmpRTBAtSum7Inport1_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S194>/Integrator'

  real_T Gain3_Gain[2];                // Expression: [1; -1]
                                          //  Referenced by: '<S26>/Gain3'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S561>/S-Function'

  real_T SFunction_P17_d;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S565>/S-Function'

  real_T TmpRTBAtSum5Inport2_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval_o;       // Computed Parameter: Integrator_gainval_o
                                        //  Referenced by: '<S134>/Integrator'

  real_T Integrator_gainval_k;       // Computed Parameter: Integrator_gainval_k
                                        //  Referenced by: '<S286>/Integrator'

  real_T TmpRTBAtICOutport1_InitialCondi;// Expression: 0
                                            //  Referenced by:

  real_T AddConstant_Bias;             // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S57>/Gain2'

  real_T Gain3_Gain_b[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S495>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S495>/Gain1'

  real_T Integrator_gainval_c;       // Computed Parameter: Integrator_gainval_c
                                        //  Referenced by: '<S360>/Integrator'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S412>/Integrator'

  real_T Gain3_Gain_o[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S322>/Gain3'

  real_T Gain2_Gain_k[30];             // Expression: M2C.A'
                                          //  Referenced by: '<S52>/Gain2'

  real_T SFunction_P17_e;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S563>/S-Function'

  real_T Integrator_gainval_m;       // Computed Parameter: Integrator_gainval_m
                                        //  Referenced by: '<S476>/Integrator'

  real_T Gain1_Gain_p;                 // Expression: 2
                                          //  Referenced by: '<S53>/Gain1'

  real_T Constant4_Value;              // Expression: 1
                                          //  Referenced by: '<S1>/Constant4'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S184>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S28>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S304>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S305>/phase'

  real_T phase_Value_m;                // Expression: PHASE
                                          //  Referenced by: '<S306>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S307>/phase'

  real_T Gain3_Gain_d[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S316>/Gain3'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S51>/Gain'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S51>/Gain8'

  real_T Clamping_zero_Value_e;        // Expression: 0
                                          //  Referenced by: '<S466>/Clamping_zero'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S500>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S501>/phase'

  real_T phase_Value_a4;               // Expression: PHASE
                                          //  Referenced by: '<S502>/phase'

  real_T phase_Value_n4;               // Expression: PHASE
                                          //  Referenced by: '<S503>/phase'

  real_T phase_Value_c0;               // Expression: PHASE
                                          //  Referenced by: '<S512>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S513>/phase'

  real_T phase_Value_md;               // Expression: PHASE
                                          //  Referenced by: '<S514>/phase'

  real_T phase_Value_ab;               // Expression: PHASE
                                          //  Referenced by: '<S515>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S524>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S525>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S526>/phase'

  real_T phase_Value_nf;               // Expression: PHASE
                                          //  Referenced by: '<S527>/phase'

  real_T phase_Value_b;                // Expression: PHASE
                                          //  Referenced by: '<S536>/phase'

  real_T phase_Value_jt;               // Expression: PHASE
                                          //  Referenced by: '<S537>/phase'

  real_T phase_Value_o0;               // Expression: PHASE
                                          //  Referenced by: '<S538>/phase'

  real_T phase_Value_jo;               // Expression: PHASE
                                          //  Referenced by: '<S539>/phase'

  real_T phase_Value_jb;               // Expression: PHASE
                                          //  Referenced by: '<S548>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S549>/phase'

  real_T phase_Value_lk;               // Expression: PHASE
                                          //  Referenced by: '<S550>/phase'

  real_T phase_Value_nl;               // Expression: PHASE
                                          //  Referenced by: '<S551>/phase'

  real_T ADC_P8_gx;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S88>/ADC'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                          //  Referenced by: '<S1>/Unit Delay'

  real_T IC_Value;                     // Expression: 2/3*pi*0
                                          //  Referenced by: '<S54>/IC'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S213>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S213>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S213>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S309>/PWM'

  real32_T PWM_P3_j;                   // Expression: single(duty)
                                          //  Referenced by: '<S309>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S309>/PWM'

  real32_T PWM_P2_d;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S311>/PWM'

  real32_T PWM_P3_f;                   // Expression: single(duty)
                                          //  Referenced by: '<S311>/PWM'

  real32_T PWM_P4_m;                   // Expression: single(phase)
                                          //  Referenced by: '<S311>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S313>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S313>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S313>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S315>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S505>/PWM'

  real32_T PWM_P3_a;                   // Expression: single(duty)
                                          //  Referenced by: '<S505>/PWM'

  real32_T PWM_P4_c;                   // Expression: single(phase)
                                          //  Referenced by: '<S505>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S507>/PWM'

  real32_T PWM_P3_gb;                  // Expression: single(duty)
                                          //  Referenced by: '<S507>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S507>/PWM'

  real32_T PWM_P2_k4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S509>/PWM'

  real32_T PWM_P3_ab;                  // Expression: single(duty)
                                          //  Referenced by: '<S509>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S509>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S511>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S511>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S511>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S517>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S517>/PWM'

  real32_T PWM_P4_hb;                  // Expression: single(phase)
                                          //  Referenced by: '<S517>/PWM'

  real32_T PWM_P2_d1;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S519>/PWM'

  real32_T PWM_P3_a2;                  // Expression: single(duty)
                                          //  Referenced by: '<S519>/PWM'

  real32_T PWM_P4_hg;                  // Expression: single(phase)
                                          //  Referenced by: '<S519>/PWM'

  real32_T PWM_P2_j5;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S521>/PWM'

  real32_T PWM_P3_mv;                  // Expression: single(duty)
                                          //  Referenced by: '<S521>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S521>/PWM'

  real32_T PWM_P2_n5;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S523>/PWM'

  real32_T PWM_P3_pj;                  // Expression: single(duty)
                                          //  Referenced by: '<S523>/PWM'

  real32_T PWM_P4_gu;                  // Expression: single(phase)
                                          //  Referenced by: '<S523>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S529>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S529>/PWM'

  real32_T PWM_P4_ce;                  // Expression: single(phase)
                                          //  Referenced by: '<S529>/PWM'

  real32_T PWM_P2_c;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S531>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S531>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S531>/PWM'

  real32_T PWM_P2_cb;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S533>/PWM'

  real32_T PWM_P3_ou;                  // Expression: single(duty)
                                          //  Referenced by: '<S533>/PWM'

  real32_T PWM_P4_jx;                  // Expression: single(phase)
                                          //  Referenced by: '<S533>/PWM'

  real32_T PWM_P2_d2;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S535>/PWM'

  real32_T PWM_P3_iw;                  // Expression: single(duty)
                                          //  Referenced by: '<S535>/PWM'

  real32_T PWM_P4_ag;                  // Expression: single(phase)
                                          //  Referenced by: '<S535>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S541>/PWM'

  real32_T PWM_P3_of;                  // Expression: single(duty)
                                          //  Referenced by: '<S541>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S541>/PWM'

  real32_T PWM_P2_cp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S543>/PWM'

  real32_T PWM_P3_gr;                  // Expression: single(duty)
                                          //  Referenced by: '<S543>/PWM'

  real32_T PWM_P4_am;                  // Expression: single(phase)
                                          //  Referenced by: '<S543>/PWM'

  real32_T PWM_P2_av;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S545>/PWM'

  real32_T PWM_P3_jo;                  // Expression: single(duty)
                                          //  Referenced by: '<S545>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S545>/PWM'

  real32_T PWM_P2_en;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S547>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S547>/PWM'

  real32_T PWM_P4_cw;                  // Expression: single(phase)
                                          //  Referenced by: '<S547>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S553>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S553>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S553>/PWM'

  real32_T PWM_P2_bl;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S555>/PWM'

  real32_T PWM_P3_o3;                  // Expression: single(duty)
                                          //  Referenced by: '<S555>/PWM'

  real32_T PWM_P4_p;                   // Expression: single(phase)
                                          //  Referenced by: '<S555>/PWM'

  real32_T PWM_P2_bx;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S557>/PWM'

  real32_T PWM_P3_gw;                  // Expression: single(duty)
                                          //  Referenced by: '<S557>/PWM'

  real32_T PWM_P4_lf;                  // Expression: single(phase)
                                          //  Referenced by: '<S557>/PWM'

  real32_T PWM_P2_kn;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S559>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S559>/PWM'

  real32_T PWM_P4_n1;                  // Expression: single(phase)
                                          //  Referenced by: '<S559>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S90>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S90>/ADC'

  real32_T ADC_P2_a;                   // Expression: single(gain)
                                          //  Referenced by: '<S92>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S92>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S80>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S80>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P3_b;                   // Expression: single(offset)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P2_d;                   // Expression: single(gain)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P3_g;                   // Expression: single(offset)
                                          //  Referenced by: '<S82>/ADC'

  real32_T ADC_P2_j;                   // Expression: single(gain)
                                          //  Referenced by: '<S84>/ADC'

  real32_T ADC_P3_d;                   // Expression: single(offset)
                                          //  Referenced by: '<S84>/ADC'

  real32_T SFunction_P6;               // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S215>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S217>/S-Function'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P3_i;                   // Expression: single(offset)
                                          //  Referenced by: '<S76>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S94>/ADC'

  real32_T ADC_P3_h;                   // Expression: single(offset)
                                          //  Referenced by: '<S94>/ADC'

  real32_T ADC_P2_bh;                  // Expression: single(gain)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S78>/ADC'

  real32_T ADC_P3_k;                   // Expression: single(offset)
                                          //  Referenced by: '<S78>/ADC'

  real32_T ADC_P2_az;                  // Expression: single(gain)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P3_kh;                  // Expression: single(offset)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S74>/ADC'

  real32_T ADC_P3_ez;                  // Expression: single(offset)
                                          //  Referenced by: '<S74>/ADC'

  real32_T SFunction_P6_o;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S219>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S221>/S-Function'

  real32_T ADC_P2_ia;                  // Expression: single(gain)
                                          //  Referenced by: '<S86>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S86>/ADC'

  real32_T SFunction_P6_oq;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S223>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S225>/S-Function'

  real32_T SFunction_P6_f0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S227>/S-Function'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S561>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S561>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S561>/S-Function'

  real32_T SFunction_P6_ka;            // Expression: single(0)
                                          //  Referenced by: '<S561>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S561>/S-Function'

  real32_T SFunction_P3_i;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S565>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S565>/S-Function'

  real32_T SFunction_P5_i;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S565>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(0)
                                          //  Referenced by: '<S565>/S-Function'

  real32_T SFunction_P7_e;             // Expression: single(0)
                                          //  Referenced by: '<S565>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P12_m;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S229>/S-Function'

  real32_T SFunction_P6_ow;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S231>/S-Function'

  real32_T SFunction_P6_ck;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P12_id;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S233>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S237>/S-Function'

  real32_T SFunction_P6_kw;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P12_oz;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S239>/S-Function'

  real32_T SFunction_P6_ct;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P12_e2;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S241>/S-Function'

  real32_T SFunction_P6_gr;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S243>/S-Function'

  real32_T SFunction_P6_ea;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P12_gw;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S245>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P12_ew;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S247>/S-Function'

  real32_T SFunction_P6_dk;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P12_fl;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S249>/S-Function'

  real32_T SFunction_P6_f0v;           // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S251>/S-Function'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S563>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S563>/S-Function'

  real32_T SFunction_P5_o;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S563>/S-Function'

  real32_T SFunction_P6_ep;            // Expression: single(0)
                                          //  Referenced by: '<S563>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S563>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S97>/S-Function'

  real32_T SFunction_P3_f;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S97>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S99>/CLK1'

  real32_T ADC_P2_e;                   // Expression: single(gain)
                                          //  Referenced by: '<S88>/ADC'

  real32_T ADC_P3_dy;                  // Expression: single(offset)
                                          //  Referenced by: '<S88>/ADC'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P7_d;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S215>/S-Function'

  uint32_T SFunction_P7_eh;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S217>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P13_l;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S219>/S-Function'

  uint32_T SFunction_P7_m;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S221>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S223>/S-Function'

  uint32_T SFunction_P7_bu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S225>/S-Function'

  uint32_T SFunction_P7_dq;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S227>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S561>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S565>/S-Function'

  uint32_T SFunction_P7_mb;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S229>/S-Function'

  uint32_T SFunction_P7_i;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P13_li;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S231>/S-Function'

  uint32_T SFunction_P7_p;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P13_f2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S233>/S-Function'

  uint32_T SFunction_P7_bx;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P13_m;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S237>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S239>/S-Function'

  uint32_T SFunction_P7_np;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S241>/S-Function'

  uint32_T SFunction_P7_nu;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P13_i2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S243>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P13_ki;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S245>/S-Function'

  uint32_T SFunction_P7_j;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P13_ot;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S247>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P13_pv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S249>/S-Function'

  uint32_T SFunction_P7_c;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S251>/S-Function'

  uint32_T SFunction_P10_o;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S563>/S-Function'

  uint32_T SFunction_P7_ei;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S235>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S213>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S213>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S213>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S213>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S213>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S213>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S309>/PWM'

  int16_T PWM_P1_c;                    // Expression: int16(lane)
                                          //  Referenced by: '<S311>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S311>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S311>/PWM'

  int16_T PWM_P7_e;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S311>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S311>/PWM'

  int16_T PWM_P9_pf;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S311>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P7_ei;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S313>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P8_n;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S315>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P5_pl;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P6_le;                   // Expression: int16(rate)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S505>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S507>/PWM'

  int16_T PWM_P5_ji;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S507>/PWM'

  int16_T PWM_P6_aj;                   // Expression: int16(rate)
                                          //  Referenced by: '<S507>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S507>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S507>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S507>/PWM'

  int16_T PWM_P1_id;                   // Expression: int16(lane)
                                          //  Referenced by: '<S509>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S509>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S509>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S509>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S509>/PWM'

  int16_T PWM_P9_ig;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S509>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P8_b;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S511>/PWM'

  int16_T PWM_P1_cd;                   // Expression: int16(lane)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P7_h4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P9_jr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S517>/PWM'

  int16_T PWM_P1_f;                    // Expression: int16(lane)
                                          //  Referenced by: '<S519>/PWM'

  int16_T PWM_P5_cb;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S519>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S519>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S519>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S519>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S519>/PWM'

  int16_T PWM_P1_m;                    // Expression: int16(lane)
                                          //  Referenced by: '<S521>/PWM'

  int16_T PWM_P5_ps;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S521>/PWM'

  int16_T PWM_P6_pu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S521>/PWM'

  int16_T PWM_P7_pn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S521>/PWM'

  int16_T PWM_P8_fy;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S521>/PWM'

  int16_T PWM_P9_ej;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S521>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P5_iu;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P6_c;                    // Expression: int16(rate)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P7_po;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S523>/PWM'

  int16_T PWM_P1_jt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P5_m;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P6_k;                    // Expression: int16(rate)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P8_bw;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S529>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S531>/PWM'

  int16_T PWM_P5_cr;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S531>/PWM'

  int16_T PWM_P6_lg;                   // Expression: int16(rate)
                                          //  Referenced by: '<S531>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S531>/PWM'

  int16_T PWM_P8_nv;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S531>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S531>/PWM'

  int16_T PWM_P1_p;                    // Expression: int16(lane)
                                          //  Referenced by: '<S533>/PWM'

  int16_T PWM_P5_cy;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S533>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S533>/PWM'

  int16_T PWM_P7_ea;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S533>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S533>/PWM'

  int16_T PWM_P9_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S533>/PWM'

  int16_T PWM_P1_hl;                   // Expression: int16(lane)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P5_it;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P6_o;                    // Expression: int16(rate)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P7_hm;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P8_cs;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P9_ci;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S535>/PWM'

  int16_T PWM_P1_jf;                   // Expression: int16(lane)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P5_h2;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P6_ee;                   // Expression: int16(rate)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P7_j;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P8_hc;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P9_cy;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S541>/PWM'

  int16_T PWM_P1_a0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S543>/PWM'

  int16_T PWM_P5_n;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S543>/PWM'

  int16_T PWM_P6_ev;                   // Expression: int16(rate)
                                          //  Referenced by: '<S543>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S543>/PWM'

  int16_T PWM_P8_ct;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S543>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S543>/PWM'

  int16_T PWM_P1_d;                    // Expression: int16(lane)
                                          //  Referenced by: '<S545>/PWM'

  int16_T PWM_P5_b;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S545>/PWM'

  int16_T PWM_P6_kg;                   // Expression: int16(rate)
                                          //  Referenced by: '<S545>/PWM'

  int16_T PWM_P7_fk;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S545>/PWM'

  int16_T PWM_P8_df;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S545>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S545>/PWM'

  int16_T PWM_P1_fr;                   // Expression: int16(lane)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P7_o3;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P8_i;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P9_mg;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S547>/PWM'

  int16_T PWM_P1_ij;                   // Expression: int16(lane)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P5_jis;                  // Expression: int16(carrier)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P7_g0;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P8_cu;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P9_ds;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S553>/PWM'

  int16_T PWM_P1_a1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P6_hx;                   // Expression: int16(rate)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P7_fp;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P8_k4;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P9_lu;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S555>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P5_cc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P6_dh;                   // Expression: int16(rate)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P7_mk;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P8_la;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P9_ck;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S557>/PWM'

  int16_T PWM_P1_kw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P6_bx;                   // Expression: int16(rate)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P7_a0;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S559>/PWM'

  int16_T PWM_P9_bh;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S559>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S90>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S92>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P6_g;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P9_a;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S80>/ADC'

  int16_T ADC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P4_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P9_k;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P9_g;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S82>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S84>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S84>/ADC'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P3_f0;             // Expression: int16(0)
                                          //  Referenced by: '<S215>/S-Function'

  int16_T SFunction_P2_h;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S217>/S-Function'

  int16_T ADC_P1_ee;                   // Expression: int16(channel)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P9_ou;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S76>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S94>/ADC'

  int16_T ADC_P1_b;                    // Expression: int16(channel)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P4_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P9_oh;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P1_iy;                   // Expression: int16(channel)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S78>/ADC'

  int16_T ADC_P1_pr;                   // Expression: int16(channel)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P6_j;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P9_ac;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P4_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P6_kc;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S74>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S74>/ADC'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S219>/S-Function'

  int16_T SFunction_P2_go;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T SFunction_P3_n;              // Expression: int16(0)
                                          //  Referenced by: '<S221>/S-Function'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S86>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S86>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P3_e5;             // Expression: int16(0)
                                          //  Referenced by: '<S223>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S225>/S-Function'

  int16_T SFunction_P2_j;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S227>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S561>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S565>/S-Function'

  int16_T SFunction_P2_oc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P3_oc;             // Expression: int16(0)
                                          //  Referenced by: '<S229>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S231>/S-Function'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P3_j;              // Expression: int16(0)
                                          //  Referenced by: '<S233>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P3_nd;             // Expression: int16(0)
                                          //  Referenced by: '<S237>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P3_er;             // Expression: int16(0)
                                          //  Referenced by: '<S239>/S-Function'

  int16_T SFunction_P2_fb;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S241>/S-Function'

  int16_T SFunction_P2_lx;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P3_ic;             // Expression: int16(0)
                                          //  Referenced by: '<S243>/S-Function'

  int16_T SFunction_P2_c4;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P3_pi;             // Expression: int16(0)
                                          //  Referenced by: '<S245>/S-Function'

  int16_T SFunction_P2_g3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P3_m;              // Expression: int16(0)
                                          //  Referenced by: '<S247>/S-Function'

  int16_T SFunction_P2_ch;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P3_ns;             // Expression: int16(0)
                                          //  Referenced by: '<S249>/S-Function'

  int16_T SFunction_P2_mh;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P3_d;              // Expression: int16(0)
                                          //  Referenced by: '<S251>/S-Function'

  int16_T SFunction_P2_mc;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S563>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S99>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S99>/CLK1'

  int16_T ADC_P1_fz;                   // Expression: int16(channel)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P4_d5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P6_lk;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S88>/ADC'

  int16_T ADC_P9_dd;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S88>/ADC'

  int16_T SFunction_P2_aw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S235>/S-Function'

  int16_T SFunction_P3_f0d;            // Expression: int16(0)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P1[3];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P14[5];           // Computed Parameter: SFunction_P14
                                          //  Referenced by: '<S215>/S-Function'

  uint16_T SFunction_P1_m[3];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P5_n;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P8_h;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P14_c[5];         // Computed Parameter: SFunction_P14_c
                                          //  Referenced by: '<S217>/S-Function'

  uint16_T SFunction_P1_b[3];          // Computed Parameter: SFunction_P1_b
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P5_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P8_b;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S219>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P5_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P14_e[5];         // Computed Parameter: SFunction_P14_e
                                          //  Referenced by: '<S221>/S-Function'

  uint16_T SFunction_P1_n[2];          // Computed Parameter: SFunction_P1_n
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S223>/S-Function'

  uint16_T SFunction_P1_c[3];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P5_oe;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P11_mt;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S225>/S-Function'

  uint16_T SFunction_P1_k[3];          // Computed Parameter: SFunction_P1_k
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P11_mv;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P14_ff[5];        // Computed Parameter: SFunction_P14_ff
                                          //  Referenced by: '<S227>/S-Function'

  uint16_T SFunction_P1_i[5];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S561>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S561>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S561>/S-Function'

  uint16_T SFunction_P14_hf;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S561>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S561>/S-Function'

  uint16_T SFunction_P1_f[5];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S565>/S-Function'

  uint16_T SFunction_P9_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S565>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S565>/S-Function'

  uint16_T SFunction_P14_o;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S565>/S-Function'

  uint16_T SFunction_P15_e;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S565>/S-Function'

  uint16_T SFunction_P1_a[5];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P5_o0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P11_b0;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S229>/S-Function'

  uint16_T SFunction_P1_g[5];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P5_it;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P14_b5[5];        // Computed Parameter: SFunction_P14_b5
                                          //  Referenced by: '<S231>/S-Function'

  uint16_T SFunction_P1_gh[4];         // Computed Parameter: SFunction_P1_gh
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P5_nh;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P8_br;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P11_o;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P14_bg[5];        // Computed Parameter: SFunction_P14_bg
                                          //  Referenced by: '<S233>/S-Function'

  uint16_T SFunction_P1_gl[3];         // Computed Parameter: SFunction_P1_gl
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P5_is;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P14_ef[5];        // Computed Parameter: SFunction_P14_ef
                                          //  Referenced by: '<S237>/S-Function'

  uint16_T SFunction_P1_cj[3];         // Computed Parameter: SFunction_P1_cj
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P8_eh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S239>/S-Function'

  uint16_T SFunction_P1_av[3];         // Computed Parameter: SFunction_P1_av
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P5_jx;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P8_a;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P11_ko;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P14_cs[5];        // Computed Parameter: SFunction_P14_cs
                                          //  Referenced by: '<S241>/S-Function'

  uint16_T SFunction_P1_nx[3];         // Computed Parameter: SFunction_P1_nx
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P5_go;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P8_hu;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P14_p[5];         // Computed Parameter: SFunction_P14_p
                                          //  Referenced by: '<S243>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P5_dh;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P8_mg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P11_c;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P14_d[5];         // Computed Parameter: SFunction_P14_d
                                          //  Referenced by: '<S245>/S-Function'

  uint16_T SFunction_P1_cv[3];         // Computed Parameter: SFunction_P1_cv
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P8_dg;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P11_gp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P14_fg[5];        // Computed Parameter: SFunction_P14_fg
                                          //  Referenced by: '<S247>/S-Function'

  uint16_T SFunction_P1_ce[3];         // Computed Parameter: SFunction_P1_ce
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P14_k[5];         // Computed Parameter: SFunction_P14_k
                                          //  Referenced by: '<S249>/S-Function'

  uint16_T SFunction_P1_cu[3];         // Computed Parameter: SFunction_P1_cu
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P5_he;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P8_d1;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P11_cu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P14_cu[5];        // Computed Parameter: SFunction_P14_cu
                                          //  Referenced by: '<S251>/S-Function'

  uint16_T SFunction_P1_p[6];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S563>/S-Function'

  uint16_T SFunction_P9_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S563>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S563>/S-Function'

  uint16_T SFunction_P14_pw;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S563>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S563>/S-Function'

  uint16_T SFunction_P1_o;             // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P4_b3;          // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P5_ip;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S97>/S-Function'

  uint16_T SFunction_P1_lu[3];         // Computed Parameter: SFunction_P1_lu
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S235>/S-Function'

  uint16_T SFunction_P14_hg[5];        // Computed Parameter: SFunction_P14_hg
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S213>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S213>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S213>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S309>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S309>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S309>/PWM'

  boolean_T PWM_P10_o0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S311>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S311>/PWM'

  boolean_T PWM_P12_d;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S311>/PWM'

  boolean_T PWM_P10_e;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S313>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S313>/PWM'

  boolean_T PWM_P12_a;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S313>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S315>/PWM'

  boolean_T PWM_P10_ex;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S505>/PWM'

  boolean_T PWM_P11_bp;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S505>/PWM'

  boolean_T PWM_P12_h0;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S505>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S507>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S507>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S507>/PWM'

  boolean_T PWM_P10_mg;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S509>/PWM'

  boolean_T PWM_P11_o;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S509>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S509>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S511>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S511>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S511>/PWM'

  boolean_T PWM_P10_or;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S517>/PWM'

  boolean_T PWM_P11_og;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S517>/PWM'

  boolean_T PWM_P12_n3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S517>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S519>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S519>/PWM'

  boolean_T PWM_P12_b;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S519>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S521>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S521>/PWM'

  boolean_T PWM_P12_bh;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S521>/PWM'

  boolean_T PWM_P10_c5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S523>/PWM'

  boolean_T PWM_P11_mw;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S523>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S523>/PWM'

  boolean_T PWM_P10_oa;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S529>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S529>/PWM'

  boolean_T PWM_P12_ae;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S529>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S531>/PWM'

  boolean_T PWM_P11_ev;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S531>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S531>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S533>/PWM'

  boolean_T PWM_P11_dc;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S533>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S533>/PWM'

  boolean_T PWM_P10_nk;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S535>/PWM'

  boolean_T PWM_P11_a;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S535>/PWM'

  boolean_T PWM_P12_gi;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S535>/PWM'

  boolean_T PWM_P10_c0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S541>/PWM'

  boolean_T PWM_P11_o5;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S541>/PWM'

  boolean_T PWM_P12_bb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S541>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S543>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S543>/PWM'

  boolean_T PWM_P12_fh;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S543>/PWM'

  boolean_T PWM_P10_d;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S545>/PWM'

  boolean_T PWM_P11_j0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S545>/PWM'

  boolean_T PWM_P12_lq;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S545>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S547>/PWM'

  boolean_T PWM_P11_js;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S547>/PWM'

  boolean_T PWM_P12_he;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S547>/PWM'

  boolean_T PWM_P10_cq;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S553>/PWM'

  boolean_T PWM_P11_dq;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S553>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S553>/PWM'

  boolean_T PWM_P10_a0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S555>/PWM'

  boolean_T PWM_P11_j0m;               // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S555>/PWM'

  boolean_T PWM_P12_fs;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S555>/PWM'

  boolean_T PWM_P10_du;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S557>/PWM'

  boolean_T PWM_P11_o0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S557>/PWM'

  boolean_T PWM_P12_d4;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S557>/PWM'

  boolean_T PWM_P10_a4;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S559>/PWM'

  boolean_T PWM_P11_jk;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S559>/PWM'

  boolean_T PWM_P12_lx;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S559>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S90>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S90>/ADC'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S92>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S92>/ADC'

  boolean_T ADC_P5_df;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S80>/ADC'

  boolean_T ADC_P5_p;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P7_a;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P5_db;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S82>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S84>/ADC'

  boolean_T SFunction_P4_ba;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P15_d;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S215>/S-Function'

  boolean_T SFunction_P4_o;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P9_ka;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T SFunction_P15_k;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S217>/S-Function'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P7_am;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S76>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S94>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S94>/ADC'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P5_c;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T ADC_P7_li;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S78>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P7_o;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P5_mj;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T ADC_P7_ii;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S74>/ADC'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P9_j;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P15_eb;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S219>/S-Function'

  boolean_T SFunction_P4_e;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P9_h;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P10_k;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T SFunction_P15_j;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S221>/S-Function'

  boolean_T ADC_P5_mo;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T ADC_P7_ak;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S86>/ADC'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P10_aj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P15_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S223>/S-Function'

  boolean_T SFunction_P4_ec;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P9_ji;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P10_l;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S225>/S-Function'

  boolean_T SFunction_P4_h;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P9_kd;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P10_ca;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S227>/S-Function'

  boolean_T SFunction_P8_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S561>/S-Function'

  boolean_T SFunction_P12_pl;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S561>/S-Function'

  boolean_T SFunction_P13_gn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S561>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S561>/S-Function'

  boolean_T SFunction_P8_pk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S565>/S-Function'

  boolean_T SFunction_P12_kc;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S565>/S-Function'

  boolean_T SFunction_P13_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S565>/S-Function'

  boolean_T SFunction_P16_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S565>/S-Function'

  boolean_T SFunction_P4_i;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P9_h1;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P10_m;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P15_nm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S229>/S-Function'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P10_b;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P15_km;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S231>/S-Function'

  boolean_T SFunction_P4_j;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S233>/S-Function'

  boolean_T SFunction_P4_oa;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P9_en;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P15_k3;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S237>/S-Function'

  boolean_T SFunction_P4_dz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P9_l;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P10_ao;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S239>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P9_ie;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P10_mt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S241>/S-Function'

  boolean_T SFunction_P4_oi;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P10_az;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P15_nz;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S243>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P9_n5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P10_bo;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P15_gu;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S245>/S-Function'

  boolean_T SFunction_P4_mr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P9_ek;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P10_oy;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P15_pt;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S247>/S-Function'

  boolean_T SFunction_P4_bd;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P9_nt;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P10_iz;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P15_mf;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S249>/S-Function'

  boolean_T SFunction_P4_b4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P9_ei;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P15_mn;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S251>/S-Function'

  boolean_T SFunction_P8_my;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S563>/S-Function'

  boolean_T SFunction_P12_g3;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S563>/S-Function'

  boolean_T SFunction_P13_hr;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S563>/S-Function'

  boolean_T SFunction_P16_a;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S563>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S99>/CLK1'

  boolean_T ADC_P5_pj;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S88>/ADC'

  boolean_T SFunction_P4_ab;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P10_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S235>/S-Function'

  boolean_T SFunction_P15_jd;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S235>/S-Function'

  int8_T Constant_Value;               // Computed Parameter: Constant_Value
                                          //  Referenced by: '<S184>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S184>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S184>/Constant3'

  int8_T Constant4_Value_j;            // Computed Parameter: Constant4_Value_j
                                          //  Referenced by: '<S184>/Constant4'

  int8_T Constant_Value_i;             // Computed Parameter: Constant_Value_i
                                          //  Referenced by: '<S466>/Constant'

  int8_T Constant2_Value_p;            // Computed Parameter: Constant2_Value_p
                                          //  Referenced by: '<S466>/Constant2'

  int8_T Constant3_Value_g;            // Computed Parameter: Constant3_Value_g
                                          //  Referenced by: '<S466>/Constant3'

  int8_T Constant4_Value_c;            // Computed Parameter: Constant4_Value_c
                                          //  Referenced by: '<S466>/Constant4'

  P_Subsystem1_imperix_control_T Subsystem1_f;// '<S325>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay_d;// '<S325>/Subsystem - pi//2 delay' 
  P_Subsystem1_imperix_control_T Subsystem1;// '<S317>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay;// '<S317>/Subsystem - pi//2 delay' 
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
//  Block '<S1>/Constant1' : Unused code path elimination
//  Block '<S1>/Constant2' : Unused code path elimination
//  Block '<S1>/Data Type Conversion9' : Unused code path elimination
//  Block '<S26>/Abs' : Unused code path elimination
//  Block '<S26>/Max of Elements' : Unused code path elimination
//  Block '<S26>/Mean' : Unused code path elimination
//  Block '<S26>/Sum' : Unused code path elimination
//  Block '<S26>/Switch' : Unused code path elimination
//  Block '<S51>/Gain6' : Unused code path elimination
//  Block '<S51>/Gain7' : Unused code path elimination
//  Block '<S51>/Sum4' : Unused code path elimination
//  Block '<S52>/Gain5' : Unused code path elimination
//  Block '<S437>/Fcn' : Unused code path elimination
//  Block '<S437>/Fcn1' : Unused code path elimination
//  Block '<S438>/Fcn' : Unused code path elimination
//  Block '<S438>/Fcn1' : Unused code path elimination
//  Block '<S434>/Switch' : Unused code path elimination
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
//  Block '<S235>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S237>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S239>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S241>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S243>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S245>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S247>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S249>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S251>/Data Type Conversion' : Eliminate redundant data type conversion


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
//  '<S34>'  : 'imperix_control/Closed_loop_control/Probe13'
//  '<S35>'  : 'imperix_control/Closed_loop_control/Probe14'
//  '<S36>'  : 'imperix_control/Closed_loop_control/Probe15'
//  '<S37>'  : 'imperix_control/Closed_loop_control/Probe16'
//  '<S38>'  : 'imperix_control/Closed_loop_control/Probe17'
//  '<S39>'  : 'imperix_control/Closed_loop_control/Probe18'
//  '<S40>'  : 'imperix_control/Closed_loop_control/Probe2'
//  '<S41>'  : 'imperix_control/Closed_loop_control/Probe3'
//  '<S42>'  : 'imperix_control/Closed_loop_control/Probe4'
//  '<S43>'  : 'imperix_control/Closed_loop_control/Probe5'
//  '<S44>'  : 'imperix_control/Closed_loop_control/Probe6'
//  '<S45>'  : 'imperix_control/Closed_loop_control/Probe7'
//  '<S46>'  : 'imperix_control/Closed_loop_control/Probe8'
//  '<S47>'  : 'imperix_control/Closed_loop_control/Probe9'
//  '<S48>'  : 'imperix_control/Closed_loop_control/Speed PI'
//  '<S49>'  : 'imperix_control/Closed_loop_control/Subsystem1'
//  '<S50>'  : 'imperix_control/Closed_loop_control/Subsystem10'
//  '<S51>'  : 'imperix_control/Closed_loop_control/Subsystem11'
//  '<S52>'  : 'imperix_control/Closed_loop_control/Subsystem12'
//  '<S53>'  : 'imperix_control/Closed_loop_control/Subsystem14'
//  '<S54>'  : 'imperix_control/Closed_loop_control/Subsystem15'
//  '<S55>'  : 'imperix_control/Closed_loop_control/Subsystem16'
//  '<S56>'  : 'imperix_control/Closed_loop_control/Subsystem17'
//  '<S57>'  : 'imperix_control/Closed_loop_control/Subsystem18'
//  '<S58>'  : 'imperix_control/Closed_loop_control/Subsystem2'
//  '<S59>'  : 'imperix_control/Closed_loop_control/Subsystem3'
//  '<S60>'  : 'imperix_control/Closed_loop_control/Subsystem4'
//  '<S61>'  : 'imperix_control/Closed_loop_control/Subsystem5'
//  '<S62>'  : 'imperix_control/Closed_loop_control/Subsystem8'
//  '<S63>'  : 'imperix_control/Closed_loop_control/Subsystem9'
//  '<S64>'  : 'imperix_control/Closed_loop_control/Tunable parameter1'
//  '<S65>'  : 'imperix_control/Closed_loop_control/Tunable parameter16'
//  '<S66>'  : 'imperix_control/Closed_loop_control/Tunable parameter2'
//  '<S67>'  : 'imperix_control/Closed_loop_control/ADC10/sub'
//  '<S68>'  : 'imperix_control/Closed_loop_control/ADC10/sub/generation'
//  '<S69>'  : 'imperix_control/Closed_loop_control/ADC11/sub'
//  '<S70>'  : 'imperix_control/Closed_loop_control/ADC11/sub/generation'
//  '<S71>'  : 'imperix_control/Closed_loop_control/ADC12/sub'
//  '<S72>'  : 'imperix_control/Closed_loop_control/ADC12/sub/generation'
//  '<S73>'  : 'imperix_control/Closed_loop_control/ADC13/sub'
//  '<S74>'  : 'imperix_control/Closed_loop_control/ADC13/sub/generation'
//  '<S75>'  : 'imperix_control/Closed_loop_control/ADC14/sub'
//  '<S76>'  : 'imperix_control/Closed_loop_control/ADC14/sub/generation'
//  '<S77>'  : 'imperix_control/Closed_loop_control/ADC15/sub'
//  '<S78>'  : 'imperix_control/Closed_loop_control/ADC15/sub/generation'
//  '<S79>'  : 'imperix_control/Closed_loop_control/ADC16/sub'
//  '<S80>'  : 'imperix_control/Closed_loop_control/ADC16/sub/generation'
//  '<S81>'  : 'imperix_control/Closed_loop_control/ADC17/sub'
//  '<S82>'  : 'imperix_control/Closed_loop_control/ADC17/sub/generation'
//  '<S83>'  : 'imperix_control/Closed_loop_control/ADC18/sub'
//  '<S84>'  : 'imperix_control/Closed_loop_control/ADC18/sub/generation'
//  '<S85>'  : 'imperix_control/Closed_loop_control/ADC20/sub'
//  '<S86>'  : 'imperix_control/Closed_loop_control/ADC20/sub/generation'
//  '<S87>'  : 'imperix_control/Closed_loop_control/ADC4/sub'
//  '<S88>'  : 'imperix_control/Closed_loop_control/ADC4/sub/generation'
//  '<S89>'  : 'imperix_control/Closed_loop_control/ADC6/sub'
//  '<S90>'  : 'imperix_control/Closed_loop_control/ADC6/sub/generation'
//  '<S91>'  : 'imperix_control/Closed_loop_control/ADC7/sub'
//  '<S92>'  : 'imperix_control/Closed_loop_control/ADC7/sub/generation'
//  '<S93>'  : 'imperix_control/Closed_loop_control/ADC9/sub'
//  '<S94>'  : 'imperix_control/Closed_loop_control/ADC9/sub/generation'
//  '<S95>'  : 'imperix_control/Closed_loop_control/Configuration2/Sampling clock'
//  '<S96>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0'
//  '<S97>'  : 'imperix_control/Closed_loop_control/Configuration2/Sampling clock/generation'
//  '<S98>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0/sub'
//  '<S99>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0/sub/generation'
//  '<S100>' : 'imperix_control/Closed_loop_control/Flux PI/Anti-windup'
//  '<S101>' : 'imperix_control/Closed_loop_control/Flux PI/D Gain'
//  '<S102>' : 'imperix_control/Closed_loop_control/Flux PI/External Derivative'
//  '<S103>' : 'imperix_control/Closed_loop_control/Flux PI/Filter'
//  '<S104>' : 'imperix_control/Closed_loop_control/Flux PI/Filter ICs'
//  '<S105>' : 'imperix_control/Closed_loop_control/Flux PI/I Gain'
//  '<S106>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain'
//  '<S107>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain Fdbk'
//  '<S108>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator'
//  '<S109>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator ICs'
//  '<S110>' : 'imperix_control/Closed_loop_control/Flux PI/N Copy'
//  '<S111>' : 'imperix_control/Closed_loop_control/Flux PI/N Gain'
//  '<S112>' : 'imperix_control/Closed_loop_control/Flux PI/P Copy'
//  '<S113>' : 'imperix_control/Closed_loop_control/Flux PI/Parallel P Gain'
//  '<S114>' : 'imperix_control/Closed_loop_control/Flux PI/Reset Signal'
//  '<S115>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation'
//  '<S116>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation Fdbk'
//  '<S117>' : 'imperix_control/Closed_loop_control/Flux PI/Sum'
//  '<S118>' : 'imperix_control/Closed_loop_control/Flux PI/Sum Fdbk'
//  '<S119>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode'
//  '<S120>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode Sum'
//  '<S121>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Integral'
//  '<S122>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Ngain'
//  '<S123>' : 'imperix_control/Closed_loop_control/Flux PI/postSat Signal'
//  '<S124>' : 'imperix_control/Closed_loop_control/Flux PI/preInt Signal'
//  '<S125>' : 'imperix_control/Closed_loop_control/Flux PI/preSat Signal'
//  '<S126>' : 'imperix_control/Closed_loop_control/Flux PI/Anti-windup/Back Calculation'
//  '<S127>' : 'imperix_control/Closed_loop_control/Flux PI/D Gain/Disabled'
//  '<S128>' : 'imperix_control/Closed_loop_control/Flux PI/External Derivative/Disabled'
//  '<S129>' : 'imperix_control/Closed_loop_control/Flux PI/Filter/Disabled'
//  '<S130>' : 'imperix_control/Closed_loop_control/Flux PI/Filter ICs/Disabled'
//  '<S131>' : 'imperix_control/Closed_loop_control/Flux PI/I Gain/Internal Parameters'
//  '<S132>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain/Passthrough'
//  '<S133>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S134>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator/Discrete'
//  '<S135>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator ICs/Internal IC'
//  '<S136>' : 'imperix_control/Closed_loop_control/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S137>' : 'imperix_control/Closed_loop_control/Flux PI/N Gain/Disabled'
//  '<S138>' : 'imperix_control/Closed_loop_control/Flux PI/P Copy/Disabled'
//  '<S139>' : 'imperix_control/Closed_loop_control/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S140>' : 'imperix_control/Closed_loop_control/Flux PI/Reset Signal/Disabled'
//  '<S141>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation/Enabled'
//  '<S142>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation Fdbk/Disabled'
//  '<S143>' : 'imperix_control/Closed_loop_control/Flux PI/Sum/Sum_PI'
//  '<S144>' : 'imperix_control/Closed_loop_control/Flux PI/Sum Fdbk/Disabled'
//  '<S145>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode/Disabled'
//  '<S146>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S147>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S148>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S149>' : 'imperix_control/Closed_loop_control/Flux PI/postSat Signal/Forward_Path'
//  '<S150>' : 'imperix_control/Closed_loop_control/Flux PI/preInt Signal/Internal PreInt'
//  '<S151>' : 'imperix_control/Closed_loop_control/Flux PI/preSat Signal/Forward_Path'
//  '<S152>' : 'imperix_control/Closed_loop_control/NN CEC/FFNN'
//  '<S153>' : 'imperix_control/Closed_loop_control/NN CEC/Input format'
//  '<S154>' : 'imperix_control/Closed_loop_control/NN CEC/LPF'
//  '<S155>' : 'imperix_control/Closed_loop_control/NN CEC/Saturation'
//  '<S156>' : 'imperix_control/Closed_loop_control/NN CEC/White noise'
//  '<S157>' : 'imperix_control/Closed_loop_control/NN CEC/FFNN/MLFB'
//  '<S158>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup'
//  '<S159>' : 'imperix_control/Closed_loop_control/PID Controller/D Gain'
//  '<S160>' : 'imperix_control/Closed_loop_control/PID Controller/External Derivative'
//  '<S161>' : 'imperix_control/Closed_loop_control/PID Controller/Filter'
//  '<S162>' : 'imperix_control/Closed_loop_control/PID Controller/Filter ICs'
//  '<S163>' : 'imperix_control/Closed_loop_control/PID Controller/I Gain'
//  '<S164>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain'
//  '<S165>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain Fdbk'
//  '<S166>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator'
//  '<S167>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator ICs'
//  '<S168>' : 'imperix_control/Closed_loop_control/PID Controller/N Copy'
//  '<S169>' : 'imperix_control/Closed_loop_control/PID Controller/N Gain'
//  '<S170>' : 'imperix_control/Closed_loop_control/PID Controller/P Copy'
//  '<S171>' : 'imperix_control/Closed_loop_control/PID Controller/Parallel P Gain'
//  '<S172>' : 'imperix_control/Closed_loop_control/PID Controller/Reset Signal'
//  '<S173>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation'
//  '<S174>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation Fdbk'
//  '<S175>' : 'imperix_control/Closed_loop_control/PID Controller/Sum'
//  '<S176>' : 'imperix_control/Closed_loop_control/PID Controller/Sum Fdbk'
//  '<S177>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode'
//  '<S178>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode Sum'
//  '<S179>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Integral'
//  '<S180>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Ngain'
//  '<S181>' : 'imperix_control/Closed_loop_control/PID Controller/postSat Signal'
//  '<S182>' : 'imperix_control/Closed_loop_control/PID Controller/preInt Signal'
//  '<S183>' : 'imperix_control/Closed_loop_control/PID Controller/preSat Signal'
//  '<S184>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel'
//  '<S185>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S186>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S187>' : 'imperix_control/Closed_loop_control/PID Controller/D Gain/Disabled'
//  '<S188>' : 'imperix_control/Closed_loop_control/PID Controller/External Derivative/Disabled'
//  '<S189>' : 'imperix_control/Closed_loop_control/PID Controller/Filter/Disabled'
//  '<S190>' : 'imperix_control/Closed_loop_control/PID Controller/Filter ICs/Disabled'
//  '<S191>' : 'imperix_control/Closed_loop_control/PID Controller/I Gain/Internal Parameters'
//  '<S192>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain/Passthrough'
//  '<S193>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S194>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator/Discrete'
//  '<S195>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator ICs/Internal IC'
//  '<S196>' : 'imperix_control/Closed_loop_control/PID Controller/N Copy/Disabled wSignal Specification'
//  '<S197>' : 'imperix_control/Closed_loop_control/PID Controller/N Gain/Disabled'
//  '<S198>' : 'imperix_control/Closed_loop_control/PID Controller/P Copy/Disabled'
//  '<S199>' : 'imperix_control/Closed_loop_control/PID Controller/Parallel P Gain/Internal Parameters'
//  '<S200>' : 'imperix_control/Closed_loop_control/PID Controller/Reset Signal/Disabled'
//  '<S201>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation/Enabled'
//  '<S202>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation Fdbk/Disabled'
//  '<S203>' : 'imperix_control/Closed_loop_control/PID Controller/Sum/Sum_PI'
//  '<S204>' : 'imperix_control/Closed_loop_control/PID Controller/Sum Fdbk/Disabled'
//  '<S205>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode/Disabled'
//  '<S206>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S207>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Integral/TsSignalSpecification'
//  '<S208>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S209>' : 'imperix_control/Closed_loop_control/PID Controller/postSat Signal/Forward_Path'
//  '<S210>' : 'imperix_control/Closed_loop_control/PID Controller/preInt Signal/Internal PreInt'
//  '<S211>' : 'imperix_control/Closed_loop_control/PID Controller/preSat Signal/Forward_Path'
//  '<S212>' : 'imperix_control/Closed_loop_control/PWM_CB3/sub'
//  '<S213>' : 'imperix_control/Closed_loop_control/PWM_CB3/sub/generation'
//  '<S214>' : 'imperix_control/Closed_loop_control/Probe/sub'
//  '<S215>' : 'imperix_control/Closed_loop_control/Probe/sub/generation'
//  '<S216>' : 'imperix_control/Closed_loop_control/Probe1/sub'
//  '<S217>' : 'imperix_control/Closed_loop_control/Probe1/sub/generation'
//  '<S218>' : 'imperix_control/Closed_loop_control/Probe10/sub'
//  '<S219>' : 'imperix_control/Closed_loop_control/Probe10/sub/generation'
//  '<S220>' : 'imperix_control/Closed_loop_control/Probe11/sub'
//  '<S221>' : 'imperix_control/Closed_loop_control/Probe11/sub/generation'
//  '<S222>' : 'imperix_control/Closed_loop_control/Probe12/sub'
//  '<S223>' : 'imperix_control/Closed_loop_control/Probe12/sub/generation'
//  '<S224>' : 'imperix_control/Closed_loop_control/Probe13/sub'
//  '<S225>' : 'imperix_control/Closed_loop_control/Probe13/sub/generation'
//  '<S226>' : 'imperix_control/Closed_loop_control/Probe14/sub'
//  '<S227>' : 'imperix_control/Closed_loop_control/Probe14/sub/generation'
//  '<S228>' : 'imperix_control/Closed_loop_control/Probe15/sub'
//  '<S229>' : 'imperix_control/Closed_loop_control/Probe15/sub/generation'
//  '<S230>' : 'imperix_control/Closed_loop_control/Probe16/sub'
//  '<S231>' : 'imperix_control/Closed_loop_control/Probe16/sub/generation'
//  '<S232>' : 'imperix_control/Closed_loop_control/Probe17/sub'
//  '<S233>' : 'imperix_control/Closed_loop_control/Probe17/sub/generation'
//  '<S234>' : 'imperix_control/Closed_loop_control/Probe18/sub'
//  '<S235>' : 'imperix_control/Closed_loop_control/Probe18/sub/generation'
//  '<S236>' : 'imperix_control/Closed_loop_control/Probe2/sub'
//  '<S237>' : 'imperix_control/Closed_loop_control/Probe2/sub/generation'
//  '<S238>' : 'imperix_control/Closed_loop_control/Probe3/sub'
//  '<S239>' : 'imperix_control/Closed_loop_control/Probe3/sub/generation'
//  '<S240>' : 'imperix_control/Closed_loop_control/Probe4/sub'
//  '<S241>' : 'imperix_control/Closed_loop_control/Probe4/sub/generation'
//  '<S242>' : 'imperix_control/Closed_loop_control/Probe5/sub'
//  '<S243>' : 'imperix_control/Closed_loop_control/Probe5/sub/generation'
//  '<S244>' : 'imperix_control/Closed_loop_control/Probe6/sub'
//  '<S245>' : 'imperix_control/Closed_loop_control/Probe6/sub/generation'
//  '<S246>' : 'imperix_control/Closed_loop_control/Probe7/sub'
//  '<S247>' : 'imperix_control/Closed_loop_control/Probe7/sub/generation'
//  '<S248>' : 'imperix_control/Closed_loop_control/Probe8/sub'
//  '<S249>' : 'imperix_control/Closed_loop_control/Probe8/sub/generation'
//  '<S250>' : 'imperix_control/Closed_loop_control/Probe9/sub'
//  '<S251>' : 'imperix_control/Closed_loop_control/Probe9/sub/generation'
//  '<S252>' : 'imperix_control/Closed_loop_control/Speed PI/Anti-windup'
//  '<S253>' : 'imperix_control/Closed_loop_control/Speed PI/D Gain'
//  '<S254>' : 'imperix_control/Closed_loop_control/Speed PI/External Derivative'
//  '<S255>' : 'imperix_control/Closed_loop_control/Speed PI/Filter'
//  '<S256>' : 'imperix_control/Closed_loop_control/Speed PI/Filter ICs'
//  '<S257>' : 'imperix_control/Closed_loop_control/Speed PI/I Gain'
//  '<S258>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain'
//  '<S259>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain Fdbk'
//  '<S260>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator'
//  '<S261>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator ICs'
//  '<S262>' : 'imperix_control/Closed_loop_control/Speed PI/N Copy'
//  '<S263>' : 'imperix_control/Closed_loop_control/Speed PI/N Gain'
//  '<S264>' : 'imperix_control/Closed_loop_control/Speed PI/P Copy'
//  '<S265>' : 'imperix_control/Closed_loop_control/Speed PI/Parallel P Gain'
//  '<S266>' : 'imperix_control/Closed_loop_control/Speed PI/Reset Signal'
//  '<S267>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation'
//  '<S268>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation Fdbk'
//  '<S269>' : 'imperix_control/Closed_loop_control/Speed PI/Sum'
//  '<S270>' : 'imperix_control/Closed_loop_control/Speed PI/Sum Fdbk'
//  '<S271>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode'
//  '<S272>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode Sum'
//  '<S273>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Integral'
//  '<S274>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Ngain'
//  '<S275>' : 'imperix_control/Closed_loop_control/Speed PI/postSat Signal'
//  '<S276>' : 'imperix_control/Closed_loop_control/Speed PI/preInt Signal'
//  '<S277>' : 'imperix_control/Closed_loop_control/Speed PI/preSat Signal'
//  '<S278>' : 'imperix_control/Closed_loop_control/Speed PI/Anti-windup/Back Calculation'
//  '<S279>' : 'imperix_control/Closed_loop_control/Speed PI/D Gain/Disabled'
//  '<S280>' : 'imperix_control/Closed_loop_control/Speed PI/External Derivative/Disabled'
//  '<S281>' : 'imperix_control/Closed_loop_control/Speed PI/Filter/Disabled'
//  '<S282>' : 'imperix_control/Closed_loop_control/Speed PI/Filter ICs/Disabled'
//  '<S283>' : 'imperix_control/Closed_loop_control/Speed PI/I Gain/Internal Parameters'
//  '<S284>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain/Passthrough'
//  '<S285>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S286>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator/Discrete'
//  '<S287>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator ICs/Internal IC'
//  '<S288>' : 'imperix_control/Closed_loop_control/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S289>' : 'imperix_control/Closed_loop_control/Speed PI/N Gain/Disabled'
//  '<S290>' : 'imperix_control/Closed_loop_control/Speed PI/P Copy/Disabled'
//  '<S291>' : 'imperix_control/Closed_loop_control/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S292>' : 'imperix_control/Closed_loop_control/Speed PI/Reset Signal/Disabled'
//  '<S293>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation/Enabled'
//  '<S294>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation Fdbk/Disabled'
//  '<S295>' : 'imperix_control/Closed_loop_control/Speed PI/Sum/Sum_PI'
//  '<S296>' : 'imperix_control/Closed_loop_control/Speed PI/Sum Fdbk/Disabled'
//  '<S297>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode/Disabled'
//  '<S298>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S299>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S300>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S301>' : 'imperix_control/Closed_loop_control/Speed PI/postSat Signal/Forward_Path'
//  '<S302>' : 'imperix_control/Closed_loop_control/Speed PI/preInt Signal/Internal PreInt'
//  '<S303>' : 'imperix_control/Closed_loop_control/Speed PI/preSat Signal/Forward_Path'
//  '<S304>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S305>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S306>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S307>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S308>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S309>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S310>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S311>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S312>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S313>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S314>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S315>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S316>' : 'imperix_control/Closed_loop_control/Subsystem10/Alpha-Beta-Zero to abc'
//  '<S317>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero'
//  '<S318>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S319>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S320>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S321>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S322>' : 'imperix_control/Closed_loop_control/Subsystem14/Alpha-Beta-Zero to abc'
//  '<S323>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d'
//  '<S324>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q '
//  '<S325>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero'
//  '<S326>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Anti-windup'
//  '<S327>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/D Gain'
//  '<S328>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/External Derivative'
//  '<S329>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter'
//  '<S330>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter ICs'
//  '<S331>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/I Gain'
//  '<S332>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain'
//  '<S333>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain Fdbk'
//  '<S334>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator'
//  '<S335>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator ICs'
//  '<S336>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Copy'
//  '<S337>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Gain'
//  '<S338>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/P Copy'
//  '<S339>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Parallel P Gain'
//  '<S340>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Reset Signal'
//  '<S341>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation'
//  '<S342>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation Fdbk'
//  '<S343>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum'
//  '<S344>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum Fdbk'
//  '<S345>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode'
//  '<S346>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode Sum'
//  '<S347>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Integral'
//  '<S348>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Ngain'
//  '<S349>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/postSat Signal'
//  '<S350>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preInt Signal'
//  '<S351>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preSat Signal'
//  '<S352>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Anti-windup/Back Calculation'
//  '<S353>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/D Gain/Disabled'
//  '<S354>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/External Derivative/Disabled'
//  '<S355>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter/Disabled'
//  '<S356>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter ICs/Disabled'
//  '<S357>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/I Gain/Internal Parameters'
//  '<S358>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain/Passthrough'
//  '<S359>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S360>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator/Discrete'
//  '<S361>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator ICs/Internal IC'
//  '<S362>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S363>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Gain/Disabled'
//  '<S364>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/P Copy/Disabled'
//  '<S365>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S366>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Reset Signal/Disabled'
//  '<S367>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation/Enabled'
//  '<S368>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation Fdbk/Disabled'
//  '<S369>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum/Sum_PI'
//  '<S370>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum Fdbk/Disabled'
//  '<S371>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode/Disabled'
//  '<S372>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S373>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S374>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S375>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/postSat Signal/Forward_Path'
//  '<S376>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preInt Signal/Internal PreInt'
//  '<S377>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preSat Signal/Forward_Path'
//  '<S378>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Anti-windup'
//  '<S379>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /D Gain'
//  '<S380>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /External Derivative'
//  '<S381>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter'
//  '<S382>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter ICs'
//  '<S383>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /I Gain'
//  '<S384>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain'
//  '<S385>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain Fdbk'
//  '<S386>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator'
//  '<S387>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator ICs'
//  '<S388>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Copy'
//  '<S389>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Gain'
//  '<S390>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /P Copy'
//  '<S391>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Parallel P Gain'
//  '<S392>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Reset Signal'
//  '<S393>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation'
//  '<S394>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation Fdbk'
//  '<S395>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum'
//  '<S396>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum Fdbk'
//  '<S397>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode'
//  '<S398>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode Sum'
//  '<S399>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Integral'
//  '<S400>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Ngain'
//  '<S401>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /postSat Signal'
//  '<S402>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preInt Signal'
//  '<S403>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preSat Signal'
//  '<S404>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Anti-windup/Back Calculation'
//  '<S405>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /D Gain/Disabled'
//  '<S406>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /External Derivative/Disabled'
//  '<S407>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter/Disabled'
//  '<S408>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter ICs/Disabled'
//  '<S409>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /I Gain/Internal Parameters'
//  '<S410>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain/Passthrough'
//  '<S411>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S412>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator/Discrete'
//  '<S413>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator ICs/Internal IC'
//  '<S414>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S415>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Gain/Disabled'
//  '<S416>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /P Copy/Disabled'
//  '<S417>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S418>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Reset Signal/Disabled'
//  '<S419>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation/Enabled'
//  '<S420>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation Fdbk/Disabled'
//  '<S421>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum/Sum_PI'
//  '<S422>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum Fdbk/Disabled'
//  '<S423>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode/Disabled'
//  '<S424>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S425>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S426>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S427>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /postSat Signal/Forward_Path'
//  '<S428>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preInt Signal/Internal PreInt'
//  '<S429>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preSat Signal/Forward_Path'
//  '<S430>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S431>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S432>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S433>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S434>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1'
//  '<S435>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Compare To Constant'
//  '<S436>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Compare To Constant1'
//  '<S437>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Subsystem - pi//2 delay'
//  '<S438>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Subsystem1'
//  '<S439>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI'
//  '<S440>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup'
//  '<S441>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/D Gain'
//  '<S442>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/External Derivative'
//  '<S443>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter'
//  '<S444>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter ICs'
//  '<S445>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/I Gain'
//  '<S446>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain'
//  '<S447>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain Fdbk'
//  '<S448>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator'
//  '<S449>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator ICs'
//  '<S450>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Copy'
//  '<S451>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Gain'
//  '<S452>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/P Copy'
//  '<S453>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Parallel P Gain'
//  '<S454>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Reset Signal'
//  '<S455>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation'
//  '<S456>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation Fdbk'
//  '<S457>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum'
//  '<S458>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum Fdbk'
//  '<S459>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode'
//  '<S460>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode Sum'
//  '<S461>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Integral'
//  '<S462>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Ngain'
//  '<S463>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/postSat Signal'
//  '<S464>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preInt Signal'
//  '<S465>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preSat Signal'
//  '<S466>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S467>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S468>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S469>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/D Gain/Disabled'
//  '<S470>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/External Derivative/Disabled'
//  '<S471>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter/Disabled'
//  '<S472>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter ICs/Disabled'
//  '<S473>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/I Gain/Internal Parameters'
//  '<S474>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain/Passthrough'
//  '<S475>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S476>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator/Discrete'
//  '<S477>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator ICs/Internal IC'
//  '<S478>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S479>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Gain/Disabled'
//  '<S480>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/P Copy/Disabled'
//  '<S481>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S482>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Reset Signal/Disabled'
//  '<S483>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation/Enabled'
//  '<S484>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation Fdbk/Disabled'
//  '<S485>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum/Sum_PI'
//  '<S486>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum Fdbk/Disabled'
//  '<S487>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode/Disabled'
//  '<S488>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S489>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S490>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S491>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/postSat Signal/Forward_Path'
//  '<S492>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preInt Signal/Internal PreInt'
//  '<S493>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preSat Signal/Forward_Path'
//  '<S494>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0'
//  '<S495>' : 'imperix_control/Closed_loop_control/Subsystem18/abc to Alpha-Beta-Zero'
//  '<S496>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S497>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S498>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S499>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S500>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S501>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S502>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S503>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S504>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S505>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S506>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S507>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S508>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S509>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S510>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S511>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S512>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S513>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S514>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S515>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S516>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S517>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S518>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S519>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S520>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S521>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S522>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S523>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S524>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S525>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S526>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S527>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S528>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S529>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S530>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S531>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S532>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S533>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S534>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S535>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S536>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S537>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S538>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S539>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S540>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S541>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S542>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S543>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S544>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S545>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S546>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S547>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S548>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S549>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S550>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S551>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S552>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S553>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S554>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S555>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S556>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S557>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S558>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S559>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S560>' : 'imperix_control/Closed_loop_control/Tunable parameter1/sub'
//  '<S561>' : 'imperix_control/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S562>' : 'imperix_control/Closed_loop_control/Tunable parameter16/sub'
//  '<S563>' : 'imperix_control/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S564>' : 'imperix_control/Closed_loop_control/Tunable parameter2/sub'
//  '<S565>' : 'imperix_control/Closed_loop_control/Tunable parameter2/sub/generation'

#endif                                 // imperix_control_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
