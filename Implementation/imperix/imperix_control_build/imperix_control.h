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
// Model version                  : 19.6
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Fri Dec 12 16:36:29 2025
//
#ifndef imperix_control_h_
#define imperix_control_h_
#include "rtwtypes.h"
#include "coder_posix_time.h"
#include "imperix_control_types.h"
#include "coder_array.h"

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
  real_T TmpRTBAtICOutport1;           // '<S34>/IC'
  real_T TmpRTBAtSwitchInport1[3];     // '<S25>/Vector Concatenate4'
  real_T TmpRTBAtSwitchInport3[3];     // '<S25>/Vector Concatenate5'
  real_T Fcn;                          // '<S439>/Fcn'
  real_T Fcn1;                         // '<S439>/Fcn1'
  real_T Fcn_p;                        // '<S438>/Fcn'
  real_T Fcn1_h;                       // '<S438>/Fcn1'
  real_T Fcn_b;                        // '<S373>/Fcn'
  real_T Fcn1_o;                       // '<S373>/Fcn1'
  real_T Fcn_k;                        // '<S372>/Fcn'
  real_T Fcn1_l;                       // '<S372>/Fcn1'
  real_T Fcn_c;                        // '<S261>/Fcn'
  real_T Fcn1_f;                       // '<S261>/Fcn1'
  real_T Fcn_h;                        // '<S260>/Fcn'
  real_T Fcn1_a;                       // '<S260>/Fcn1'
  real32_T ADC;                        // '<S48>/ADC'
  real32_T ADC_c;                      // '<S50>/ADC'
  real32_T ADC_p;                      // '<S52>/ADC'
  real32_T ADC_h;                      // '<S54>/ADC'
  real32_T ADC_b;                      // '<S56>/ADC'
  real32_T ADC_g;                      // '<S58>/ADC'
  real32_T ADC_o;                      // '<S60>/ADC'
  real32_T ADC_ps;                     // '<S62>/ADC'
  real32_T ADC_i;                      // '<S64>/ADC'
  real32_T ADC_bz;                     // '<S66>/ADC'
  real32_T ADC_od;                     // '<S68>/ADC'
  real32_T ADC_cy;                     // '<S70>/ADC'
  real32_T ADC_n;                      // '<S72>/ADC'
  real32_T SFunction;                  // '<S501>/S-Function'
  real32_T SFunction_k;                // '<S505>/S-Function'
  real32_T SFunction_kx;               // '<S503>/S-Function'
  real32_T DataTypeConversion1_c;      // '<S27>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S27>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S27>/Data Type Conversion3'
  real32_T DataTypeConversion1_n;      // '<S244>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S244>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S244>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S245>/Data Type Conversion1'
  real32_T DataTypeConversion2_e;      // '<S245>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S245>/Data Type Conversion3'
  real32_T DataTypeConversion1_nb;     // '<S246>/Data Type Conversion1'
  real32_T DataTypeConversion2_h;      // '<S246>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S246>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S247>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S247>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S247>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S440>/Data Type Conversion1'
  real32_T DataTypeConversion2_ka;     // '<S440>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S440>/Data Type Conversion3'
  real32_T DataTypeConversion1_ii;     // '<S441>/Data Type Conversion1'
  real32_T DataTypeConversion2_hr;     // '<S441>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S441>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S442>/Data Type Conversion1'
  real32_T DataTypeConversion2_m;      // '<S442>/Data Type Conversion2'
  real32_T DataTypeConversion3_na;     // '<S442>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S443>/Data Type Conversion1'
  real32_T DataTypeConversion2_ht;     // '<S443>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S443>/Data Type Conversion3'
  real32_T DataTypeConversion1_cb;     // '<S452>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S452>/Data Type Conversion2'
  real32_T DataTypeConversion3_aq;     // '<S452>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S453>/Data Type Conversion1'
  real32_T DataTypeConversion2_kf;     // '<S453>/Data Type Conversion2'
  real32_T DataTypeConversion3_pq;     // '<S453>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S454>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S454>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S454>/Data Type Conversion3'
  real32_T DataTypeConversion1_mx;     // '<S455>/Data Type Conversion1'
  real32_T DataTypeConversion2_kr;     // '<S455>/Data Type Conversion2'
  real32_T DataTypeConversion3_nh;     // '<S455>/Data Type Conversion3'
  real32_T DataTypeConversion1_eq;     // '<S464>/Data Type Conversion1'
  real32_T DataTypeConversion2_kfv;    // '<S464>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S464>/Data Type Conversion3'
  real32_T DataTypeConversion1_gn;     // '<S465>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S465>/Data Type Conversion2'
  real32_T DataTypeConversion3_e3;     // '<S465>/Data Type Conversion3'
  real32_T DataTypeConversion1_gj;     // '<S466>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S466>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S466>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S467>/Data Type Conversion1'
  real32_T DataTypeConversion2_d1;     // '<S467>/Data Type Conversion2'
  real32_T DataTypeConversion3_f;      // '<S467>/Data Type Conversion3'
  real32_T DataTypeConversion1_hk;     // '<S476>/Data Type Conversion1'
  real32_T DataTypeConversion2_dy;     // '<S476>/Data Type Conversion2'
  real32_T DataTypeConversion3_a1;     // '<S476>/Data Type Conversion3'
  real32_T DataTypeConversion1_gf;     // '<S477>/Data Type Conversion1'
  real32_T DataTypeConversion2_l;      // '<S477>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S477>/Data Type Conversion3'
  real32_T DataTypeConversion1_cz;     // '<S478>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S478>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S478>/Data Type Conversion3'
  real32_T DataTypeConversion1_le;     // '<S479>/Data Type Conversion1'
  real32_T DataTypeConversion2_lo;     // '<S479>/Data Type Conversion2'
  real32_T DataTypeConversion3_o4;     // '<S479>/Data Type Conversion3'
  real32_T DataTypeConversion1_iz;     // '<S488>/Data Type Conversion1'
  real32_T DataTypeConversion2_mh;     // '<S488>/Data Type Conversion2'
  real32_T DataTypeConversion3_ax;     // '<S488>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S489>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S489>/Data Type Conversion2'
  real32_T DataTypeConversion3_p3;     // '<S489>/Data Type Conversion3'
  real32_T DataTypeConversion1_kz;     // '<S490>/Data Type Conversion1'
  real32_T DataTypeConversion2_m4;     // '<S490>/Data Type Conversion2'
  real32_T DataTypeConversion3_c;      // '<S490>/Data Type Conversion3'
  real32_T DataTypeConversion1_h3;     // '<S491>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S491>/Data Type Conversion2'
  real32_T DataTypeConversion3_bc;     // '<S491>/Data Type Conversion3'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_control_T {
  real_T SFunction_DSTATE;             // '<S501>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S505>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S503>/S-Function'
  real_T UnitDelay1_DSTATE;            // '<S23>/Unit Delay1'
  real_T Integrator_DSTATE;            // '<S172>/Integrator'
  real_T Integrator_DSTATE_h;          // '<S416>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S226>/Integrator'
  real_T Integrator_DSTATE_hf;         // '<S112>/Integrator'
  real_T Integrator_DSTATE_b;          // '<S300>/Integrator'
  real_T Integrator_DSTATE_k;          // '<S352>/Integrator'
  real_T UnitDelay1_DSTATE_a[2];       // '<S132>/Unit Delay1'
  real_T SFunction_DSTATE_m;           // '<S75>/S-Function'
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
  real_T Ac[24];                       // '<S25>/Saturation'
  real_T Ix[4];                        // '<S25>/Saturation'
  real_T is_max;                       // '<S25>/Saturation'
  real_T freq;                         // '<S25>/Saturation'
  real_T Ad[8];                        // '<S1>/LICCs control'
  real_T Bd[16];                       // '<S1>/LICCs control'
  real_T H[16];                        // '<S1>/LICCs control'
  real_T lambda;                       // '<S1>/LICCs control'
  real_T Aineq[96];                    // '<S1>/LICCs control'
  real_T is_max2;                      // '<S1>/LICCs control'
  real_T Vc_ref2;                      // '<S1>/LICCs control'
  real_T pinvT[30];                    // '<S1>/LICCs control'
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
  real_T n;                            // '<S1>/Energy balance'
  real_T Np;                           // '<S1>/Energy balance'
  real_T K[324];                       // '<S1>/Energy balance'
  real_T MI[324];                      // '<S1>/Energy balance'
  real_T NN[108];                      // '<S1>/Energy balance'
  real_T ONE[54];                      // '<S1>/Energy balance'
  real_T Nl;                           // '<S1>/Energy balance'
  real_T is_max_p;                     // '<S1>/Energy balance'
  real_T is_max2_b;                    // '<S1>/Energy balance'
  real_T vo_max2;                      // '<S1>/Energy balance'
  real_T Ec_ref2;                      // '<S1>/Energy balance'
  real_T Hu_z[36];                     // '<S1>/Energy balance'
  real_T Aineq_z[216];                 // '<S1>/Energy balance'
  real_T lambda_z;                     // '<S1>/Energy balance'
  real_T Hu_o[9];                      // '<S1>/Energy balance'
  real_T Aineq_o[18];                  // '<S1>/Energy balance'
  real_T lambda_o;                     // '<S1>/Energy balance'
  real_T Ec_dev;                       // '<S1>/Energy balance'
  coder::array<real_T,1> u_prev;       // '<S1>/LICCs control'
  boolean_T IC_FirstOutputTime;        // '<S34>/IC'
  boolean_T is_max_not_empty;          // '<S25>/White noise'
  boolean_T Ac_not_empty;              // '<S25>/Saturation'
  boolean_T freq_not_empty;            // '<S25>/Saturation'
  boolean_T savedTime_not_empty;       // '<S25>/Saturation'
  boolean_T Ec_ref_not_empty;          // '<S25>/Input format'
  boolean_T nu_not_empty;              // '<S1>/LICCs control'
  boolean_T iA[24];                    // '<S1>/LICCs control'
  boolean_T xt_est_apriori_not_empty;  // '<S1>/Kalman Filter'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  boolean_T p_not_empty;               // '<S1>/Energy balance'
};

// Parameters for system: '<S257>/Subsystem - pi//2 delay'
struct P_Subsystempi2delay_imperix_c_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S260>/alpha_beta'

};

// Parameters for system: '<S257>/Subsystem1'
struct P_Subsystem1_imperix_control_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S261>/alpha_beta'

};

// Parameters (default storage)
struct P_imperix_control_T_ {
  struct_kYK8klzU7k6CF2sPPFadY CEMPC;  // Variable: CEMPC
                                          //  Referenced by: '<S1>/Energy balance'

  struct_Jn3yK8idWqC5lwHij8OsQE CCMPC; // Variable: CCMPC
                                          //  Referenced by:
                                          //    '<S1>/LICCs control'
                                          //    '<S16>/Gain'
                                          //    '<S132>/Gain1'
                                          //    '<S132>/Gain2'

  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S1>/LICCs control'
                                          //    '<S1>/Constant5'
                                          //    '<S23>/Unit Delay1'
                                          //    '<S25>/Input format'
                                          //    '<S25>/Saturation'
                                          //    '<S25>/White noise'
                                          //    '<S25>/Gain7'
                                          //    '<S32>/vx'
                                          //    '<S35>/Constant1'
                                          //    '<S36>/Gain'
                                          //    '<S42>/Gain1'
                                          //    '<S42>/Gain3'
                                          //    '<S42>/Gain4'

  struct_8pcJrWnT2NIOYJW9vpRYLD KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_aK5aQeabUeTOrz39VMjTKC IM;    // Variable: IM
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S1>/Kalman Filter'
                                          //    '<S1>/Gain2'
                                          //    '<S1>/Gain4'
                                          //    '<S33>/Gain'

  struct_eLXpdkXVH71IKiDfJkdaiC RFT;   // Variable: RFT
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S25>/Input format'
                                          //    '<S25>/Gain5'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S104>/Kb'
                                          //    '<S109>/Integral Gain'
                                          //    '<S117>/Proportional Gain'
                                          //    '<S119>/Saturation'
                                          //    '<S218>/Kb'
                                          //    '<S223>/Integral Gain'
                                          //    '<S231>/Proportional Gain'
                                          //    '<S233>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S292>/Kb'
                                          //    '<S297>/Integral Gain'
                                          //    '<S305>/Proportional Gain'
                                          //    '<S307>/Saturation'
                                          //    '<S344>/Kb'
                                          //    '<S349>/Integral Gain'
                                          //    '<S357>/Proportional Gain'
                                          //    '<S359>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S413>/Integral Gain'
                                          //    '<S421>/Proportional Gain'
                                          //    '<S423>/Saturation'
                                          //    '<S408>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEB;   // Variable: TEB
                                          //  Referenced by:
                                          //    '<S23>/Gain1'
                                          //    '<S23>/Gain2'
                                          //    '<S169>/Integral Gain'
                                          //    '<S177>/Proportional Gain'
                                          //    '<S179>/Saturation'
                                          //    '<S164>/DeadZone'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by:
                                          //    '<S25>/Input format'
                                          //    '<S25>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S25>/Gain4'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S434>/Constant'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S265>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_k;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_k
                                  //  Referenced by: '<S257>/Constant'

  real_T dq0toAlphaBetaZero1_Alignment;
                                // Mask Parameter: dq0toAlphaBetaZero1_Alignment
                                   //  Referenced by: '<S374>/Constant'

  real_T PIDController_InitialConditionF;
                              // Mask Parameter: PIDController_InitialConditionF
                                 //  Referenced by: '<S172>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S416>/Integrator'

  real_T SpeedPI_InitialConditionForInte;
                              // Mask Parameter: SpeedPI_InitialConditionForInte
                                 //  Referenced by: '<S226>/Integrator'

  real_T FluxPI_InitialConditionForInteg;
                              // Mask Parameter: FluxPI_InitialConditionForInteg
                                 //  Referenced by: '<S112>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S300>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S352>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S436>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S437>/Constant'

  real_T CompareToConstant_const_h; // Mask Parameter: CompareToConstant_const_h
                                       //  Referenced by: '<S370>/Constant'

  real_T CompareToConstant1_const_f;
                                   // Mask Parameter: CompareToConstant1_const_f
                                      //  Referenced by: '<S371>/Constant'

  real_T CompareToConstant_const_m; // Mask Parameter: CompareToConstant_const_m
                                       //  Referenced by: '<S258>/Constant'

  real_T CompareToConstant1_const_p;
                                   // Mask Parameter: CompareToConstant1_const_p
                                      //  Referenced by: '<S259>/Constant'

  real_T CompareToConstant_const_d; // Mask Parameter: CompareToConstant_const_d
                                       //  Referenced by: '<S375>/Constant'

  real_T CompareToConstant1_const_l;
                                   // Mask Parameter: CompareToConstant1_const_l
                                      //  Referenced by: '<S376>/Constant'

  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S377>/alpha_beta'

  real_T alpha_beta_Y0_p[2];           // Expression: [0,0]
                                          //  Referenced by: '<S378>/alpha_beta'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S438>/dq'

  real_T dq_Y0_e[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S439>/dq'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S162>/Constant1'

  real_T Constant1_Value_i;            // Expression: 0
                                          //  Referenced by: '<S406>/Constant1'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S48>/ADC'

  real_T ADC_P8_d;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S50>/ADC'

  real_T ADC_P8_o;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S52>/ADC'

  real_T ADC_P8_i;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S54>/ADC'

  real_T ADC_P8_ib;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S56>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S58>/ADC'

  real_T ADC_P8_p;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S60>/ADC'

  real_T ADC_P8_pe;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S62>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S64>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S66>/ADC'

  real_T ADC_P8_ot;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S68>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S70>/ADC'

  real_T ADC_P8_g4;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S72>/ADC'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S501>/S-Function'

  real_T SFunction_P17_d;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S505>/S-Function'

  real_T AddConstant_Bias;             // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant'

  real_T SFunction_P17_e;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S503>/S-Function'

  real_T TmpRTBAtSum7Inport1_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S172>/Integrator'

  real_T Integrator_gainval_m;       // Computed Parameter: Integrator_gainval_m
                                        //  Referenced by: '<S416>/Integrator'

  real_T Integrator_gainval_k;       // Computed Parameter: Integrator_gainval_k
                                        //  Referenced by: '<S226>/Integrator'

  real_T TmpRTBAtSum5Inport2_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval_o;       // Computed Parameter: Integrator_gainval_o
                                        //  Referenced by: '<S112>/Integrator'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S37>/Gain2'

  real_T Gain3_Gain[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S435>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S435>/Gain1'

  real_T TmpRTBAtICOutport1_InitialCondi;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval_c;       // Computed Parameter: Integrator_gainval_c
                                        //  Referenced by: '<S300>/Integrator'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S352>/Integrator'

  real_T Gain1_Gain_p;                 // Expression: 2
                                          //  Referenced by: '<S33>/Gain1'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S132>/Unit Delay1'

  real_T TmpRTBAtSwitchInport1_InitialCo;// Expression: 0
                                            //  Referenced by:

  real_T TmpRTBAtSwitchInport3_InitialCo;// Expression: 0
                                            //  Referenced by:

  real_T Switch_Threshold;             // Expression: 40*10
                                          //  Referenced by: '<S25>/Switch'

  real_T Gain3_Gain_j[2];              // Expression: [1; -1]
                                          //  Referenced by: '<S25>/Gain3'

  real_T Gain3_Gain_o[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S262>/Gain3'

  real_T Gain2_Gain_k[30];             // Expression: M2C.A'
                                          //  Referenced by: '<S32>/Gain2'

  real_T Constant3_Value[6];           // Expression: zeros(6, 1)
                                          //  Referenced by: '<S1>/Constant3'

  real_T Constant4_Value;              // Expression: 1
                                          //  Referenced by: '<S1>/Constant4'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S162>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S27>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S244>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S245>/phase'

  real_T phase_Value_m;                // Expression: PHASE
                                          //  Referenced by: '<S246>/phase'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S247>/phase'

  real_T Gain3_Gain_d[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S256>/Gain3'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S31>/Gain'

  real_T Gain8_Gain;                   // Expression: -1
                                          //  Referenced by: '<S31>/Gain8'

  real_T Clamping_zero_Value_e;        // Expression: 0
                                          //  Referenced by: '<S406>/Clamping_zero'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S440>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S441>/phase'

  real_T phase_Value_a4;               // Expression: PHASE
                                          //  Referenced by: '<S442>/phase'

  real_T phase_Value_n4;               // Expression: PHASE
                                          //  Referenced by: '<S443>/phase'

  real_T Gain1_Gain_p0;                // Expression: -1
                                          //  Referenced by: '<S39>/Gain1'

  real_T phase_Value_c0;               // Expression: PHASE
                                          //  Referenced by: '<S452>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S453>/phase'

  real_T phase_Value_md;               // Expression: PHASE
                                          //  Referenced by: '<S454>/phase'

  real_T phase_Value_ab;               // Expression: PHASE
                                          //  Referenced by: '<S455>/phase'

  real_T Gain3_Gain_l;                 // Expression: -1
                                          //  Referenced by: '<S40>/Gain3'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S464>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S465>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S466>/phase'

  real_T phase_Value_nf;               // Expression: PHASE
                                          //  Referenced by: '<S467>/phase'

  real_T Gain3_Gain_k;                 // Expression: -1
                                          //  Referenced by: '<S41>/Gain3'

  real_T phase_Value_b;                // Expression: PHASE
                                          //  Referenced by: '<S476>/phase'

  real_T phase_Value_jt;               // Expression: PHASE
                                          //  Referenced by: '<S477>/phase'

  real_T phase_Value_o0;               // Expression: PHASE
                                          //  Referenced by: '<S478>/phase'

  real_T phase_Value_jo;               // Expression: PHASE
                                          //  Referenced by: '<S479>/phase'

  real_T phase_Value_jb;               // Expression: PHASE
                                          //  Referenced by: '<S488>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S489>/phase'

  real_T phase_Value_lk;               // Expression: PHASE
                                          //  Referenced by: '<S490>/phase'

  real_T phase_Value_nl;               // Expression: PHASE
                                          //  Referenced by: '<S491>/phase'

  real_T IC_Value;                     // Expression: 2/3*pi*0.5
                                          //  Referenced by: '<S34>/IC'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S191>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S191>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S191>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S249>/PWM'

  real32_T PWM_P3_j;                   // Expression: single(duty)
                                          //  Referenced by: '<S249>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S249>/PWM'

  real32_T PWM_P2_d;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S251>/PWM'

  real32_T PWM_P3_f;                   // Expression: single(duty)
                                          //  Referenced by: '<S251>/PWM'

  real32_T PWM_P4_m;                   // Expression: single(phase)
                                          //  Referenced by: '<S251>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S253>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S253>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S253>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S255>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S255>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S255>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S445>/PWM'

  real32_T PWM_P3_a;                   // Expression: single(duty)
                                          //  Referenced by: '<S445>/PWM'

  real32_T PWM_P4_c;                   // Expression: single(phase)
                                          //  Referenced by: '<S445>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S447>/PWM'

  real32_T PWM_P3_gb;                  // Expression: single(duty)
                                          //  Referenced by: '<S447>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S447>/PWM'

  real32_T PWM_P2_k4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S449>/PWM'

  real32_T PWM_P3_ab;                  // Expression: single(duty)
                                          //  Referenced by: '<S449>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S449>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S451>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S451>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S451>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S457>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S457>/PWM'

  real32_T PWM_P4_hb;                  // Expression: single(phase)
                                          //  Referenced by: '<S457>/PWM'

  real32_T PWM_P2_d1;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S459>/PWM'

  real32_T PWM_P3_a2;                  // Expression: single(duty)
                                          //  Referenced by: '<S459>/PWM'

  real32_T PWM_P4_hg;                  // Expression: single(phase)
                                          //  Referenced by: '<S459>/PWM'

  real32_T PWM_P2_j5;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S461>/PWM'

  real32_T PWM_P3_mv;                  // Expression: single(duty)
                                          //  Referenced by: '<S461>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S461>/PWM'

  real32_T PWM_P2_n5;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S463>/PWM'

  real32_T PWM_P3_pj;                  // Expression: single(duty)
                                          //  Referenced by: '<S463>/PWM'

  real32_T PWM_P4_gu;                  // Expression: single(phase)
                                          //  Referenced by: '<S463>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S469>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S469>/PWM'

  real32_T PWM_P4_ce;                  // Expression: single(phase)
                                          //  Referenced by: '<S469>/PWM'

  real32_T PWM_P2_c;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S471>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S471>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S471>/PWM'

  real32_T PWM_P2_cb;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S473>/PWM'

  real32_T PWM_P3_ou;                  // Expression: single(duty)
                                          //  Referenced by: '<S473>/PWM'

  real32_T PWM_P4_jx;                  // Expression: single(phase)
                                          //  Referenced by: '<S473>/PWM'

  real32_T PWM_P2_d2;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S475>/PWM'

  real32_T PWM_P3_iw;                  // Expression: single(duty)
                                          //  Referenced by: '<S475>/PWM'

  real32_T PWM_P4_ag;                  // Expression: single(phase)
                                          //  Referenced by: '<S475>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S481>/PWM'

  real32_T PWM_P3_of;                  // Expression: single(duty)
                                          //  Referenced by: '<S481>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S481>/PWM'

  real32_T PWM_P2_cp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S483>/PWM'

  real32_T PWM_P3_gr;                  // Expression: single(duty)
                                          //  Referenced by: '<S483>/PWM'

  real32_T PWM_P4_am;                  // Expression: single(phase)
                                          //  Referenced by: '<S483>/PWM'

  real32_T PWM_P2_av;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S485>/PWM'

  real32_T PWM_P3_jo;                  // Expression: single(duty)
                                          //  Referenced by: '<S485>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S485>/PWM'

  real32_T PWM_P2_en;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S487>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S487>/PWM'

  real32_T PWM_P4_cw;                  // Expression: single(phase)
                                          //  Referenced by: '<S487>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S493>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S493>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S493>/PWM'

  real32_T PWM_P2_bl;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S495>/PWM'

  real32_T PWM_P3_o3;                  // Expression: single(duty)
                                          //  Referenced by: '<S495>/PWM'

  real32_T PWM_P4_p;                   // Expression: single(phase)
                                          //  Referenced by: '<S495>/PWM'

  real32_T PWM_P2_bx;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S497>/PWM'

  real32_T PWM_P3_gw;                  // Expression: single(duty)
                                          //  Referenced by: '<S497>/PWM'

  real32_T PWM_P4_lf;                  // Expression: single(phase)
                                          //  Referenced by: '<S497>/PWM'

  real32_T PWM_P2_kn;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S499>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S499>/PWM'

  real32_T PWM_P4_n1;                  // Expression: single(phase)
                                          //  Referenced by: '<S499>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S48>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S48>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S50>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S50>/ADC'

  real32_T ADC_P2_a;                   // Expression: single(gain)
                                          //  Referenced by: '<S52>/ADC'

  real32_T ADC_P3_k;                   // Expression: single(offset)
                                          //  Referenced by: '<S52>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S54>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S54>/ADC'

  real32_T ADC_P2_ba;                  // Expression: single(gain)
                                          //  Referenced by: '<S56>/ADC'

  real32_T ADC_P3_i;                   // Expression: single(offset)
                                          //  Referenced by: '<S56>/ADC'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S58>/ADC'

  real32_T ADC_P3_ki;                  // Expression: single(offset)
                                          //  Referenced by: '<S58>/ADC'

  real32_T ADC_P2_c;                   // Expression: single(gain)
                                          //  Referenced by: '<S60>/ADC'

  real32_T ADC_P3_ew;                  // Expression: single(offset)
                                          //  Referenced by: '<S60>/ADC'

  real32_T ADC_P2_d;                   // Expression: single(gain)
                                          //  Referenced by: '<S62>/ADC'

  real32_T ADC_P3_g;                   // Expression: single(offset)
                                          //  Referenced by: '<S62>/ADC'

  real32_T ADC_P2_j;                   // Expression: single(gain)
                                          //  Referenced by: '<S64>/ADC'

  real32_T ADC_P3_d;                   // Expression: single(offset)
                                          //  Referenced by: '<S64>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S66>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S66>/ADC'

  real32_T ADC_P2_g;                   // Expression: single(gain)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P3_i1;                  // Expression: single(offset)
                                          //  Referenced by: '<S68>/ADC'

  real32_T ADC_P2_ay;                  // Expression: single(gain)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P3_j;                   // Expression: single(offset)
                                          //  Referenced by: '<S70>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S72>/ADC'

  real32_T ADC_P3_h;                   // Expression: single(offset)
                                          //  Referenced by: '<S72>/ADC'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S501>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S501>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S501>/S-Function'

  real32_T SFunction_P6;               // Expression: single(0)
                                          //  Referenced by: '<S501>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S501>/S-Function'

  real32_T SFunction_P3_i;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S505>/S-Function'

  real32_T SFunction_P4_c;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S505>/S-Function'

  real32_T SFunction_P5_i;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S505>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(0)
                                          //  Referenced by: '<S505>/S-Function'

  real32_T SFunction_P7_e;             // Expression: single(0)
                                          //  Referenced by: '<S505>/S-Function'

  real32_T SFunction_P3_k;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S503>/S-Function'

  real32_T SFunction_P4_b;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S503>/S-Function'

  real32_T SFunction_P5_o;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S503>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(0)
                                          //  Referenced by: '<S503>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S503>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S75>/S-Function'

  real32_T SFunction_P3_f;             // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S75>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S77>/CLK1'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S501>/S-Function'

  uint32_T SFunction_P10_n;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S505>/S-Function'

  uint32_T SFunction_P10_o;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S503>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S191>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S191>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S191>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S191>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S191>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S191>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S249>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S249>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S249>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S249>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S249>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S249>/PWM'

  int16_T PWM_P1_c;                    // Expression: int16(lane)
                                          //  Referenced by: '<S251>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S251>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S251>/PWM'

  int16_T PWM_P7_e;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S251>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S251>/PWM'

  int16_T PWM_P9_pf;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S251>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S253>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S253>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S253>/PWM'

  int16_T PWM_P7_ei;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S253>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S253>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S253>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S255>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S255>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S255>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S255>/PWM'

  int16_T PWM_P8_n;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S255>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S255>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S445>/PWM'

  int16_T PWM_P5_pl;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S445>/PWM'

  int16_T PWM_P6_le;                   // Expression: int16(rate)
                                          //  Referenced by: '<S445>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S445>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S445>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S445>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S447>/PWM'

  int16_T PWM_P5_ji;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S447>/PWM'

  int16_T PWM_P6_aj;                   // Expression: int16(rate)
                                          //  Referenced by: '<S447>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S447>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S447>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S447>/PWM'

  int16_T PWM_P1_id;                   // Expression: int16(lane)
                                          //  Referenced by: '<S449>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S449>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S449>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S449>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S449>/PWM'

  int16_T PWM_P9_ig;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S449>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P8_b;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S451>/PWM'

  int16_T PWM_P1_cd;                   // Expression: int16(lane)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P7_h4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P9_jr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S457>/PWM'

  int16_T PWM_P1_f;                    // Expression: int16(lane)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P5_cb;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S459>/PWM'

  int16_T PWM_P1_m;                    // Expression: int16(lane)
                                          //  Referenced by: '<S461>/PWM'

  int16_T PWM_P5_ps;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S461>/PWM'

  int16_T PWM_P6_pu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S461>/PWM'

  int16_T PWM_P7_pn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S461>/PWM'

  int16_T PWM_P8_fy;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S461>/PWM'

  int16_T PWM_P9_ej;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S461>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S463>/PWM'

  int16_T PWM_P5_iu;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S463>/PWM'

  int16_T PWM_P6_c;                    // Expression: int16(rate)
                                          //  Referenced by: '<S463>/PWM'

  int16_T PWM_P7_po;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S463>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S463>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S463>/PWM'

  int16_T PWM_P1_jt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S469>/PWM'

  int16_T PWM_P5_m;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S469>/PWM'

  int16_T PWM_P6_k;                    // Expression: int16(rate)
                                          //  Referenced by: '<S469>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S469>/PWM'

  int16_T PWM_P8_bw;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S469>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S469>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S471>/PWM'

  int16_T PWM_P5_cr;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S471>/PWM'

  int16_T PWM_P6_lg;                   // Expression: int16(rate)
                                          //  Referenced by: '<S471>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S471>/PWM'

  int16_T PWM_P8_nv;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S471>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S471>/PWM'

  int16_T PWM_P1_p;                    // Expression: int16(lane)
                                          //  Referenced by: '<S473>/PWM'

  int16_T PWM_P5_cy;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S473>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S473>/PWM'

  int16_T PWM_P7_ea;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S473>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S473>/PWM'

  int16_T PWM_P9_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S473>/PWM'

  int16_T PWM_P1_hl;                   // Expression: int16(lane)
                                          //  Referenced by: '<S475>/PWM'

  int16_T PWM_P5_it;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S475>/PWM'

  int16_T PWM_P6_o;                    // Expression: int16(rate)
                                          //  Referenced by: '<S475>/PWM'

  int16_T PWM_P7_hm;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S475>/PWM'

  int16_T PWM_P8_cs;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S475>/PWM'

  int16_T PWM_P9_ci;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S475>/PWM'

  int16_T PWM_P1_jf;                   // Expression: int16(lane)
                                          //  Referenced by: '<S481>/PWM'

  int16_T PWM_P5_h2;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S481>/PWM'

  int16_T PWM_P6_ee;                   // Expression: int16(rate)
                                          //  Referenced by: '<S481>/PWM'

  int16_T PWM_P7_j;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S481>/PWM'

  int16_T PWM_P8_hc;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S481>/PWM'

  int16_T PWM_P9_cy;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S481>/PWM'

  int16_T PWM_P1_a0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S483>/PWM'

  int16_T PWM_P5_n;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S483>/PWM'

  int16_T PWM_P6_ev;                   // Expression: int16(rate)
                                          //  Referenced by: '<S483>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S483>/PWM'

  int16_T PWM_P8_ct;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S483>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S483>/PWM'

  int16_T PWM_P1_d;                    // Expression: int16(lane)
                                          //  Referenced by: '<S485>/PWM'

  int16_T PWM_P5_b;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S485>/PWM'

  int16_T PWM_P6_kg;                   // Expression: int16(rate)
                                          //  Referenced by: '<S485>/PWM'

  int16_T PWM_P7_fk;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S485>/PWM'

  int16_T PWM_P8_df;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S485>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S485>/PWM'

  int16_T PWM_P1_fr;                   // Expression: int16(lane)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P7_o3;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P8_i;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P9_mg;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S487>/PWM'

  int16_T PWM_P1_ij;                   // Expression: int16(lane)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P5_jis;                  // Expression: int16(carrier)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P7_g0;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P8_cu;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P9_ds;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S493>/PWM'

  int16_T PWM_P1_a1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S495>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S495>/PWM'

  int16_T PWM_P6_hx;                   // Expression: int16(rate)
                                          //  Referenced by: '<S495>/PWM'

  int16_T PWM_P7_fp;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S495>/PWM'

  int16_T PWM_P8_k4;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S495>/PWM'

  int16_T PWM_P9_lu;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S495>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S497>/PWM'

  int16_T PWM_P5_cc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S497>/PWM'

  int16_T PWM_P6_dh;                   // Expression: int16(rate)
                                          //  Referenced by: '<S497>/PWM'

  int16_T PWM_P7_mk;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S497>/PWM'

  int16_T PWM_P8_la;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S497>/PWM'

  int16_T PWM_P9_ck;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S497>/PWM'

  int16_T PWM_P1_kw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P6_bx;                   // Expression: int16(rate)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P7_a0;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S499>/PWM'

  int16_T PWM_P9_bh;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S499>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S48>/ADC'

  int16_T ADC_P1_b;                    // Expression: int16(channel)
                                          //  Referenced by: '<S50>/ADC'

  int16_T ADC_P4_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S50>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S50>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S50>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S52>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S52>/ADC'

  int16_T ADC_P6_j;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S52>/ADC'

  int16_T ADC_P9_a;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S52>/ADC'

  int16_T ADC_P1_n;                    // Expression: int16(channel)
                                          //  Referenced by: '<S54>/ADC'

  int16_T ADC_P4_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S54>/ADC'

  int16_T ADC_P6_kc;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S54>/ADC'

  int16_T ADC_P9_b;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S54>/ADC'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S56>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S56>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S56>/ADC'

  int16_T ADC_P9_ou;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S56>/ADC'

  int16_T ADC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P9_n;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S58>/ADC'

  int16_T ADC_P1_g;                    // Expression: int16(channel)
                                          //  Referenced by: '<S60>/ADC'

  int16_T ADC_P4_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S60>/ADC'

  int16_T ADC_P6_g;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S60>/ADC'

  int16_T ADC_P9_aj;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S60>/ADC'

  int16_T ADC_P1_f;                    // Expression: int16(channel)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P9_g;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S62>/ADC'

  int16_T ADC_P1_a;                    // Expression: int16(channel)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S64>/ADC'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P4_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S66>/ADC'

  int16_T ADC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P4_p4;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P6_al;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P9_k;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S68>/ADC'

  int16_T ADC_P1_ep;                   // Expression: int16(channel)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P4_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P9_ol;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S70>/ADC'

  int16_T ADC_P1_ph;                   // Expression: int16(channel)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S72>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S72>/ADC'

  int16_T SFunction_P2_d;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S501>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S505>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S503>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S77>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S77>/CLK1'

  uint16_T SFunction_P1[5];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S501>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S501>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S501>/S-Function'

  uint16_T SFunction_P14;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S501>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S501>/S-Function'

  uint16_T SFunction_P1_f[5];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S505>/S-Function'

  uint16_T SFunction_P9_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S505>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S505>/S-Function'

  uint16_T SFunction_P14_o;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S505>/S-Function'

  uint16_T SFunction_P15_e;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S505>/S-Function'

  uint16_T SFunction_P1_p[9];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S503>/S-Function'

  uint16_T SFunction_P9_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S503>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S503>/S-Function'

  uint16_T SFunction_P14_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S503>/S-Function'

  uint16_T SFunction_P15_o;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S503>/S-Function'

  uint16_T SFunction_P1_o;             // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P4_b3;          // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S75>/S-Function'

  uint16_T SFunction_P5_ip;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S75>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S191>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S191>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S191>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S249>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S249>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S249>/PWM'

  boolean_T PWM_P10_o0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S251>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S251>/PWM'

  boolean_T PWM_P12_d;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S251>/PWM'

  boolean_T PWM_P10_e;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S253>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S253>/PWM'

  boolean_T PWM_P12_a;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S253>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S255>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S255>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S255>/PWM'

  boolean_T PWM_P10_ex;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S445>/PWM'

  boolean_T PWM_P11_bp;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S445>/PWM'

  boolean_T PWM_P12_h0;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S445>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S447>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S447>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S447>/PWM'

  boolean_T PWM_P10_mg;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S449>/PWM'

  boolean_T PWM_P11_o;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S449>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S449>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S451>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S451>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S451>/PWM'

  boolean_T PWM_P10_or;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T PWM_P11_og;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T PWM_P12_n3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S457>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S459>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S459>/PWM'

  boolean_T PWM_P12_b;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S459>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S461>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S461>/PWM'

  boolean_T PWM_P12_bh;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S461>/PWM'

  boolean_T PWM_P10_c5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S463>/PWM'

  boolean_T PWM_P11_mw;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S463>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S463>/PWM'

  boolean_T PWM_P10_oa;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S469>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S469>/PWM'

  boolean_T PWM_P12_ae;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S469>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S471>/PWM'

  boolean_T PWM_P11_ev;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S471>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S471>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S473>/PWM'

  boolean_T PWM_P11_dc;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S473>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S473>/PWM'

  boolean_T PWM_P10_nk;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S475>/PWM'

  boolean_T PWM_P11_a;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S475>/PWM'

  boolean_T PWM_P12_gi;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S475>/PWM'

  boolean_T PWM_P10_c0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S481>/PWM'

  boolean_T PWM_P11_o5;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S481>/PWM'

  boolean_T PWM_P12_bb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S481>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S483>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S483>/PWM'

  boolean_T PWM_P12_fh;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S483>/PWM'

  boolean_T PWM_P10_d;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S485>/PWM'

  boolean_T PWM_P11_j0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S485>/PWM'

  boolean_T PWM_P12_lq;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S485>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S487>/PWM'

  boolean_T PWM_P11_js;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S487>/PWM'

  boolean_T PWM_P12_he;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S487>/PWM'

  boolean_T PWM_P10_cq;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S493>/PWM'

  boolean_T PWM_P11_dq;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S493>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S493>/PWM'

  boolean_T PWM_P10_a0;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S495>/PWM'

  boolean_T PWM_P11_j0m;               // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S495>/PWM'

  boolean_T PWM_P12_fs;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S495>/PWM'

  boolean_T PWM_P10_du;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S497>/PWM'

  boolean_T PWM_P11_o0;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S497>/PWM'

  boolean_T PWM_P12_d4;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S497>/PWM'

  boolean_T PWM_P10_a4;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S499>/PWM'

  boolean_T PWM_P11_jk;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S499>/PWM'

  boolean_T PWM_P12_lx;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S499>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S48>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S48>/ADC'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S50>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S50>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S52>/ADC'

  boolean_T ADC_P7_o;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S52>/ADC'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S54>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S54>/ADC'

  boolean_T ADC_P5_ms;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S56>/ADC'

  boolean_T ADC_P7_a;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S56>/ADC'

  boolean_T ADC_P5_c;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S58>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S58>/ADC'

  boolean_T ADC_P5_d;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S60>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S60>/ADC'

  boolean_T ADC_P5_db;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S62>/ADC'

  boolean_T ADC_P7_lq;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S62>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S64>/ADC'

  boolean_T ADC_P7_i1;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S64>/ADC'

  boolean_T ADC_P5_mo;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S66>/ADC'

  boolean_T ADC_P7_ak;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S66>/ADC'

  boolean_T ADC_P5_k;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P7_lz;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S68>/ADC'

  boolean_T ADC_P5_d2;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P7_m;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S70>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S72>/ADC'

  boolean_T SFunction_P8;              // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S501>/S-Function'

  boolean_T SFunction_P12;             // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S501>/S-Function'

  boolean_T SFunction_P13;             // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S501>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S501>/S-Function'

  boolean_T SFunction_P8_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S505>/S-Function'

  boolean_T SFunction_P12_k;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S505>/S-Function'

  boolean_T SFunction_P13_e;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S505>/S-Function'

  boolean_T SFunction_P16_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S505>/S-Function'

  boolean_T SFunction_P8_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S503>/S-Function'

  boolean_T SFunction_P12_g;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S503>/S-Function'

  boolean_T SFunction_P13_h;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S503>/S-Function'

  boolean_T SFunction_P16_a;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S503>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S77>/CLK1'

  int8_T Constant_Value;               // Computed Parameter: Constant_Value
                                          //  Referenced by: '<S162>/Constant'

  int8_T Constant2_Value;              // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<S162>/Constant2'

  int8_T Constant3_Value_i;            // Computed Parameter: Constant3_Value_i
                                          //  Referenced by: '<S162>/Constant3'

  int8_T Constant4_Value_j;            // Computed Parameter: Constant4_Value_j
                                          //  Referenced by: '<S162>/Constant4'

  int8_T Constant_Value_i;             // Computed Parameter: Constant_Value_i
                                          //  Referenced by: '<S406>/Constant'

  int8_T Constant2_Value_p;            // Computed Parameter: Constant2_Value_p
                                          //  Referenced by: '<S406>/Constant2'

  int8_T Constant3_Value_g;            // Computed Parameter: Constant3_Value_g
                                          //  Referenced by: '<S406>/Constant3'

  int8_T Constant4_Value_c;            // Computed Parameter: Constant4_Value_c
                                          //  Referenced by: '<S406>/Constant4'

  P_Subsystem1_imperix_control_T Subsystem1_f;// '<S265>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay_d;// '<S265>/Subsystem - pi//2 delay' 
  P_Subsystem1_imperix_control_T Subsystem1;// '<S257>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay;// '<S257>/Subsystem - pi//2 delay' 
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
//  Block '<S1>/Data Type Conversion49' : Unused code path elimination
//  Block '<S1>/Data Type Conversion9' : Unused code path elimination
//  Block '<S31>/Gain6' : Unused code path elimination
//  Block '<S31>/Gain7' : Unused code path elimination
//  Block '<S31>/Sum4' : Unused code path elimination
//  Block '<S32>/Gain5' : Unused code path elimination
//  Block '<S377>/Fcn' : Unused code path elimination
//  Block '<S377>/Fcn1' : Unused code path elimination
//  Block '<S378>/Fcn' : Unused code path elimination
//  Block '<S378>/Fcn1' : Unused code path elimination
//  Block '<S374>/Switch' : Unused code path elimination


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
//  '<S13>'  : 'imperix_control/Closed_loop_control/ADC6'
//  '<S14>'  : 'imperix_control/Closed_loop_control/ADC7'
//  '<S15>'  : 'imperix_control/Closed_loop_control/ADC9'
//  '<S16>'  : 'imperix_control/Closed_loop_control/Cluster Voltage Mapping'
//  '<S17>'  : 'imperix_control/Closed_loop_control/Configuration2'
//  '<S18>'  : 'imperix_control/Closed_loop_control/Energy balance'
//  '<S19>'  : 'imperix_control/Closed_loop_control/Flux PI'
//  '<S20>'  : 'imperix_control/Closed_loop_control/IM references'
//  '<S21>'  : 'imperix_control/Closed_loop_control/Kalman Filter'
//  '<S22>'  : 'imperix_control/Closed_loop_control/LICCs control'
//  '<S23>'  : 'imperix_control/Closed_loop_control/LPF'
//  '<S24>'  : 'imperix_control/Closed_loop_control/Modulation index'
//  '<S25>'  : 'imperix_control/Closed_loop_control/NN CEC'
//  '<S26>'  : 'imperix_control/Closed_loop_control/PID Controller'
//  '<S27>'  : 'imperix_control/Closed_loop_control/PWM_CB3'
//  '<S28>'  : 'imperix_control/Closed_loop_control/Speed PI'
//  '<S29>'  : 'imperix_control/Closed_loop_control/Subsystem1'
//  '<S30>'  : 'imperix_control/Closed_loop_control/Subsystem10'
//  '<S31>'  : 'imperix_control/Closed_loop_control/Subsystem11'
//  '<S32>'  : 'imperix_control/Closed_loop_control/Subsystem12'
//  '<S33>'  : 'imperix_control/Closed_loop_control/Subsystem14'
//  '<S34>'  : 'imperix_control/Closed_loop_control/Subsystem15'
//  '<S35>'  : 'imperix_control/Closed_loop_control/Subsystem16'
//  '<S36>'  : 'imperix_control/Closed_loop_control/Subsystem17'
//  '<S37>'  : 'imperix_control/Closed_loop_control/Subsystem18'
//  '<S38>'  : 'imperix_control/Closed_loop_control/Subsystem2'
//  '<S39>'  : 'imperix_control/Closed_loop_control/Subsystem3'
//  '<S40>'  : 'imperix_control/Closed_loop_control/Subsystem4'
//  '<S41>'  : 'imperix_control/Closed_loop_control/Subsystem5'
//  '<S42>'  : 'imperix_control/Closed_loop_control/Subsystem8'
//  '<S43>'  : 'imperix_control/Closed_loop_control/Subsystem9'
//  '<S44>'  : 'imperix_control/Closed_loop_control/Tunable parameter1'
//  '<S45>'  : 'imperix_control/Closed_loop_control/Tunable parameter16'
//  '<S46>'  : 'imperix_control/Closed_loop_control/Tunable parameter2'
//  '<S47>'  : 'imperix_control/Closed_loop_control/ADC10/sub'
//  '<S48>'  : 'imperix_control/Closed_loop_control/ADC10/sub/generation'
//  '<S49>'  : 'imperix_control/Closed_loop_control/ADC11/sub'
//  '<S50>'  : 'imperix_control/Closed_loop_control/ADC11/sub/generation'
//  '<S51>'  : 'imperix_control/Closed_loop_control/ADC12/sub'
//  '<S52>'  : 'imperix_control/Closed_loop_control/ADC12/sub/generation'
//  '<S53>'  : 'imperix_control/Closed_loop_control/ADC13/sub'
//  '<S54>'  : 'imperix_control/Closed_loop_control/ADC13/sub/generation'
//  '<S55>'  : 'imperix_control/Closed_loop_control/ADC14/sub'
//  '<S56>'  : 'imperix_control/Closed_loop_control/ADC14/sub/generation'
//  '<S57>'  : 'imperix_control/Closed_loop_control/ADC15/sub'
//  '<S58>'  : 'imperix_control/Closed_loop_control/ADC15/sub/generation'
//  '<S59>'  : 'imperix_control/Closed_loop_control/ADC16/sub'
//  '<S60>'  : 'imperix_control/Closed_loop_control/ADC16/sub/generation'
//  '<S61>'  : 'imperix_control/Closed_loop_control/ADC17/sub'
//  '<S62>'  : 'imperix_control/Closed_loop_control/ADC17/sub/generation'
//  '<S63>'  : 'imperix_control/Closed_loop_control/ADC18/sub'
//  '<S64>'  : 'imperix_control/Closed_loop_control/ADC18/sub/generation'
//  '<S65>'  : 'imperix_control/Closed_loop_control/ADC20/sub'
//  '<S66>'  : 'imperix_control/Closed_loop_control/ADC20/sub/generation'
//  '<S67>'  : 'imperix_control/Closed_loop_control/ADC6/sub'
//  '<S68>'  : 'imperix_control/Closed_loop_control/ADC6/sub/generation'
//  '<S69>'  : 'imperix_control/Closed_loop_control/ADC7/sub'
//  '<S70>'  : 'imperix_control/Closed_loop_control/ADC7/sub/generation'
//  '<S71>'  : 'imperix_control/Closed_loop_control/ADC9/sub'
//  '<S72>'  : 'imperix_control/Closed_loop_control/ADC9/sub/generation'
//  '<S73>'  : 'imperix_control/Closed_loop_control/Configuration2/Sampling clock'
//  '<S74>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0'
//  '<S75>'  : 'imperix_control/Closed_loop_control/Configuration2/Sampling clock/generation'
//  '<S76>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0/sub'
//  '<S77>'  : 'imperix_control/Closed_loop_control/Configuration2/clk0/sub/generation'
//  '<S78>'  : 'imperix_control/Closed_loop_control/Flux PI/Anti-windup'
//  '<S79>'  : 'imperix_control/Closed_loop_control/Flux PI/D Gain'
//  '<S80>'  : 'imperix_control/Closed_loop_control/Flux PI/External Derivative'
//  '<S81>'  : 'imperix_control/Closed_loop_control/Flux PI/Filter'
//  '<S82>'  : 'imperix_control/Closed_loop_control/Flux PI/Filter ICs'
//  '<S83>'  : 'imperix_control/Closed_loop_control/Flux PI/I Gain'
//  '<S84>'  : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain'
//  '<S85>'  : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain Fdbk'
//  '<S86>'  : 'imperix_control/Closed_loop_control/Flux PI/Integrator'
//  '<S87>'  : 'imperix_control/Closed_loop_control/Flux PI/Integrator ICs'
//  '<S88>'  : 'imperix_control/Closed_loop_control/Flux PI/N Copy'
//  '<S89>'  : 'imperix_control/Closed_loop_control/Flux PI/N Gain'
//  '<S90>'  : 'imperix_control/Closed_loop_control/Flux PI/P Copy'
//  '<S91>'  : 'imperix_control/Closed_loop_control/Flux PI/Parallel P Gain'
//  '<S92>'  : 'imperix_control/Closed_loop_control/Flux PI/Reset Signal'
//  '<S93>'  : 'imperix_control/Closed_loop_control/Flux PI/Saturation'
//  '<S94>'  : 'imperix_control/Closed_loop_control/Flux PI/Saturation Fdbk'
//  '<S95>'  : 'imperix_control/Closed_loop_control/Flux PI/Sum'
//  '<S96>'  : 'imperix_control/Closed_loop_control/Flux PI/Sum Fdbk'
//  '<S97>'  : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode'
//  '<S98>'  : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode Sum'
//  '<S99>'  : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Integral'
//  '<S100>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Ngain'
//  '<S101>' : 'imperix_control/Closed_loop_control/Flux PI/postSat Signal'
//  '<S102>' : 'imperix_control/Closed_loop_control/Flux PI/preInt Signal'
//  '<S103>' : 'imperix_control/Closed_loop_control/Flux PI/preSat Signal'
//  '<S104>' : 'imperix_control/Closed_loop_control/Flux PI/Anti-windup/Back Calculation'
//  '<S105>' : 'imperix_control/Closed_loop_control/Flux PI/D Gain/Disabled'
//  '<S106>' : 'imperix_control/Closed_loop_control/Flux PI/External Derivative/Disabled'
//  '<S107>' : 'imperix_control/Closed_loop_control/Flux PI/Filter/Disabled'
//  '<S108>' : 'imperix_control/Closed_loop_control/Flux PI/Filter ICs/Disabled'
//  '<S109>' : 'imperix_control/Closed_loop_control/Flux PI/I Gain/Internal Parameters'
//  '<S110>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain/Passthrough'
//  '<S111>' : 'imperix_control/Closed_loop_control/Flux PI/Ideal P Gain Fdbk/Disabled'
//  '<S112>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator/Discrete'
//  '<S113>' : 'imperix_control/Closed_loop_control/Flux PI/Integrator ICs/Internal IC'
//  '<S114>' : 'imperix_control/Closed_loop_control/Flux PI/N Copy/Disabled wSignal Specification'
//  '<S115>' : 'imperix_control/Closed_loop_control/Flux PI/N Gain/Disabled'
//  '<S116>' : 'imperix_control/Closed_loop_control/Flux PI/P Copy/Disabled'
//  '<S117>' : 'imperix_control/Closed_loop_control/Flux PI/Parallel P Gain/Internal Parameters'
//  '<S118>' : 'imperix_control/Closed_loop_control/Flux PI/Reset Signal/Disabled'
//  '<S119>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation/Enabled'
//  '<S120>' : 'imperix_control/Closed_loop_control/Flux PI/Saturation Fdbk/Disabled'
//  '<S121>' : 'imperix_control/Closed_loop_control/Flux PI/Sum/Sum_PI'
//  '<S122>' : 'imperix_control/Closed_loop_control/Flux PI/Sum Fdbk/Disabled'
//  '<S123>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode/Disabled'
//  '<S124>' : 'imperix_control/Closed_loop_control/Flux PI/Tracking Mode Sum/Passthrough'
//  '<S125>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Integral/TsSignalSpecification'
//  '<S126>' : 'imperix_control/Closed_loop_control/Flux PI/Tsamp - Ngain/Passthrough'
//  '<S127>' : 'imperix_control/Closed_loop_control/Flux PI/postSat Signal/Forward_Path'
//  '<S128>' : 'imperix_control/Closed_loop_control/Flux PI/preInt Signal/Internal PreInt'
//  '<S129>' : 'imperix_control/Closed_loop_control/Flux PI/preSat Signal/Forward_Path'
//  '<S130>' : 'imperix_control/Closed_loop_control/NN CEC/FFNN'
//  '<S131>' : 'imperix_control/Closed_loop_control/NN CEC/Input format'
//  '<S132>' : 'imperix_control/Closed_loop_control/NN CEC/LPF'
//  '<S133>' : 'imperix_control/Closed_loop_control/NN CEC/Saturation'
//  '<S134>' : 'imperix_control/Closed_loop_control/NN CEC/White noise'
//  '<S135>' : 'imperix_control/Closed_loop_control/NN CEC/FFNN/MLFB'
//  '<S136>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup'
//  '<S137>' : 'imperix_control/Closed_loop_control/PID Controller/D Gain'
//  '<S138>' : 'imperix_control/Closed_loop_control/PID Controller/External Derivative'
//  '<S139>' : 'imperix_control/Closed_loop_control/PID Controller/Filter'
//  '<S140>' : 'imperix_control/Closed_loop_control/PID Controller/Filter ICs'
//  '<S141>' : 'imperix_control/Closed_loop_control/PID Controller/I Gain'
//  '<S142>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain'
//  '<S143>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain Fdbk'
//  '<S144>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator'
//  '<S145>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator ICs'
//  '<S146>' : 'imperix_control/Closed_loop_control/PID Controller/N Copy'
//  '<S147>' : 'imperix_control/Closed_loop_control/PID Controller/N Gain'
//  '<S148>' : 'imperix_control/Closed_loop_control/PID Controller/P Copy'
//  '<S149>' : 'imperix_control/Closed_loop_control/PID Controller/Parallel P Gain'
//  '<S150>' : 'imperix_control/Closed_loop_control/PID Controller/Reset Signal'
//  '<S151>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation'
//  '<S152>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation Fdbk'
//  '<S153>' : 'imperix_control/Closed_loop_control/PID Controller/Sum'
//  '<S154>' : 'imperix_control/Closed_loop_control/PID Controller/Sum Fdbk'
//  '<S155>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode'
//  '<S156>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode Sum'
//  '<S157>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Integral'
//  '<S158>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Ngain'
//  '<S159>' : 'imperix_control/Closed_loop_control/PID Controller/postSat Signal'
//  '<S160>' : 'imperix_control/Closed_loop_control/PID Controller/preInt Signal'
//  '<S161>' : 'imperix_control/Closed_loop_control/PID Controller/preSat Signal'
//  '<S162>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel'
//  '<S163>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S164>' : 'imperix_control/Closed_loop_control/PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S165>' : 'imperix_control/Closed_loop_control/PID Controller/D Gain/Disabled'
//  '<S166>' : 'imperix_control/Closed_loop_control/PID Controller/External Derivative/Disabled'
//  '<S167>' : 'imperix_control/Closed_loop_control/PID Controller/Filter/Disabled'
//  '<S168>' : 'imperix_control/Closed_loop_control/PID Controller/Filter ICs/Disabled'
//  '<S169>' : 'imperix_control/Closed_loop_control/PID Controller/I Gain/Internal Parameters'
//  '<S170>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain/Passthrough'
//  '<S171>' : 'imperix_control/Closed_loop_control/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S172>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator/Discrete'
//  '<S173>' : 'imperix_control/Closed_loop_control/PID Controller/Integrator ICs/Internal IC'
//  '<S174>' : 'imperix_control/Closed_loop_control/PID Controller/N Copy/Disabled wSignal Specification'
//  '<S175>' : 'imperix_control/Closed_loop_control/PID Controller/N Gain/Disabled'
//  '<S176>' : 'imperix_control/Closed_loop_control/PID Controller/P Copy/Disabled'
//  '<S177>' : 'imperix_control/Closed_loop_control/PID Controller/Parallel P Gain/Internal Parameters'
//  '<S178>' : 'imperix_control/Closed_loop_control/PID Controller/Reset Signal/Disabled'
//  '<S179>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation/Enabled'
//  '<S180>' : 'imperix_control/Closed_loop_control/PID Controller/Saturation Fdbk/Disabled'
//  '<S181>' : 'imperix_control/Closed_loop_control/PID Controller/Sum/Sum_PI'
//  '<S182>' : 'imperix_control/Closed_loop_control/PID Controller/Sum Fdbk/Disabled'
//  '<S183>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode/Disabled'
//  '<S184>' : 'imperix_control/Closed_loop_control/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S185>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Integral/TsSignalSpecification'
//  '<S186>' : 'imperix_control/Closed_loop_control/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S187>' : 'imperix_control/Closed_loop_control/PID Controller/postSat Signal/Forward_Path'
//  '<S188>' : 'imperix_control/Closed_loop_control/PID Controller/preInt Signal/Internal PreInt'
//  '<S189>' : 'imperix_control/Closed_loop_control/PID Controller/preSat Signal/Forward_Path'
//  '<S190>' : 'imperix_control/Closed_loop_control/PWM_CB3/sub'
//  '<S191>' : 'imperix_control/Closed_loop_control/PWM_CB3/sub/generation'
//  '<S192>' : 'imperix_control/Closed_loop_control/Speed PI/Anti-windup'
//  '<S193>' : 'imperix_control/Closed_loop_control/Speed PI/D Gain'
//  '<S194>' : 'imperix_control/Closed_loop_control/Speed PI/External Derivative'
//  '<S195>' : 'imperix_control/Closed_loop_control/Speed PI/Filter'
//  '<S196>' : 'imperix_control/Closed_loop_control/Speed PI/Filter ICs'
//  '<S197>' : 'imperix_control/Closed_loop_control/Speed PI/I Gain'
//  '<S198>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain'
//  '<S199>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain Fdbk'
//  '<S200>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator'
//  '<S201>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator ICs'
//  '<S202>' : 'imperix_control/Closed_loop_control/Speed PI/N Copy'
//  '<S203>' : 'imperix_control/Closed_loop_control/Speed PI/N Gain'
//  '<S204>' : 'imperix_control/Closed_loop_control/Speed PI/P Copy'
//  '<S205>' : 'imperix_control/Closed_loop_control/Speed PI/Parallel P Gain'
//  '<S206>' : 'imperix_control/Closed_loop_control/Speed PI/Reset Signal'
//  '<S207>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation'
//  '<S208>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation Fdbk'
//  '<S209>' : 'imperix_control/Closed_loop_control/Speed PI/Sum'
//  '<S210>' : 'imperix_control/Closed_loop_control/Speed PI/Sum Fdbk'
//  '<S211>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode'
//  '<S212>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode Sum'
//  '<S213>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Integral'
//  '<S214>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Ngain'
//  '<S215>' : 'imperix_control/Closed_loop_control/Speed PI/postSat Signal'
//  '<S216>' : 'imperix_control/Closed_loop_control/Speed PI/preInt Signal'
//  '<S217>' : 'imperix_control/Closed_loop_control/Speed PI/preSat Signal'
//  '<S218>' : 'imperix_control/Closed_loop_control/Speed PI/Anti-windup/Back Calculation'
//  '<S219>' : 'imperix_control/Closed_loop_control/Speed PI/D Gain/Disabled'
//  '<S220>' : 'imperix_control/Closed_loop_control/Speed PI/External Derivative/Disabled'
//  '<S221>' : 'imperix_control/Closed_loop_control/Speed PI/Filter/Disabled'
//  '<S222>' : 'imperix_control/Closed_loop_control/Speed PI/Filter ICs/Disabled'
//  '<S223>' : 'imperix_control/Closed_loop_control/Speed PI/I Gain/Internal Parameters'
//  '<S224>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain/Passthrough'
//  '<S225>' : 'imperix_control/Closed_loop_control/Speed PI/Ideal P Gain Fdbk/Disabled'
//  '<S226>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator/Discrete'
//  '<S227>' : 'imperix_control/Closed_loop_control/Speed PI/Integrator ICs/Internal IC'
//  '<S228>' : 'imperix_control/Closed_loop_control/Speed PI/N Copy/Disabled wSignal Specification'
//  '<S229>' : 'imperix_control/Closed_loop_control/Speed PI/N Gain/Disabled'
//  '<S230>' : 'imperix_control/Closed_loop_control/Speed PI/P Copy/Disabled'
//  '<S231>' : 'imperix_control/Closed_loop_control/Speed PI/Parallel P Gain/Internal Parameters'
//  '<S232>' : 'imperix_control/Closed_loop_control/Speed PI/Reset Signal/Disabled'
//  '<S233>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation/Enabled'
//  '<S234>' : 'imperix_control/Closed_loop_control/Speed PI/Saturation Fdbk/Disabled'
//  '<S235>' : 'imperix_control/Closed_loop_control/Speed PI/Sum/Sum_PI'
//  '<S236>' : 'imperix_control/Closed_loop_control/Speed PI/Sum Fdbk/Disabled'
//  '<S237>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode/Disabled'
//  '<S238>' : 'imperix_control/Closed_loop_control/Speed PI/Tracking Mode Sum/Passthrough'
//  '<S239>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Integral/TsSignalSpecification'
//  '<S240>' : 'imperix_control/Closed_loop_control/Speed PI/Tsamp - Ngain/Passthrough'
//  '<S241>' : 'imperix_control/Closed_loop_control/Speed PI/postSat Signal/Forward_Path'
//  '<S242>' : 'imperix_control/Closed_loop_control/Speed PI/preInt Signal/Internal PreInt'
//  '<S243>' : 'imperix_control/Closed_loop_control/Speed PI/preSat Signal/Forward_Path'
//  '<S244>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S245>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S246>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S247>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S248>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S249>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S250>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S251>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S252>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S253>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S254>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S255>' : 'imperix_control/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S256>' : 'imperix_control/Closed_loop_control/Subsystem10/Alpha-Beta-Zero to abc'
//  '<S257>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero'
//  '<S258>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S259>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S260>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S261>' : 'imperix_control/Closed_loop_control/Subsystem10/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S262>' : 'imperix_control/Closed_loop_control/Subsystem14/Alpha-Beta-Zero to abc'
//  '<S263>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d'
//  '<S264>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q '
//  '<S265>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero'
//  '<S266>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Anti-windup'
//  '<S267>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/D Gain'
//  '<S268>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/External Derivative'
//  '<S269>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter'
//  '<S270>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter ICs'
//  '<S271>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/I Gain'
//  '<S272>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain'
//  '<S273>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain Fdbk'
//  '<S274>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator'
//  '<S275>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator ICs'
//  '<S276>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Copy'
//  '<S277>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Gain'
//  '<S278>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/P Copy'
//  '<S279>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Parallel P Gain'
//  '<S280>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Reset Signal'
//  '<S281>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation'
//  '<S282>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation Fdbk'
//  '<S283>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum'
//  '<S284>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum Fdbk'
//  '<S285>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode'
//  '<S286>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode Sum'
//  '<S287>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Integral'
//  '<S288>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Ngain'
//  '<S289>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/postSat Signal'
//  '<S290>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preInt Signal'
//  '<S291>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preSat Signal'
//  '<S292>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Anti-windup/Back Calculation'
//  '<S293>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/D Gain/Disabled'
//  '<S294>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/External Derivative/Disabled'
//  '<S295>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter/Disabled'
//  '<S296>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Filter ICs/Disabled'
//  '<S297>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/I Gain/Internal Parameters'
//  '<S298>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain/Passthrough'
//  '<S299>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S300>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator/Discrete'
//  '<S301>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Integrator ICs/Internal IC'
//  '<S302>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S303>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/N Gain/Disabled'
//  '<S304>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/P Copy/Disabled'
//  '<S305>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S306>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Reset Signal/Disabled'
//  '<S307>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation/Enabled'
//  '<S308>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Saturation Fdbk/Disabled'
//  '<S309>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum/Sum_PI'
//  '<S310>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Sum Fdbk/Disabled'
//  '<S311>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode/Disabled'
//  '<S312>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S313>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S314>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S315>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/postSat Signal/Forward_Path'
//  '<S316>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preInt Signal/Internal PreInt'
//  '<S317>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI d/preSat Signal/Forward_Path'
//  '<S318>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Anti-windup'
//  '<S319>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /D Gain'
//  '<S320>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /External Derivative'
//  '<S321>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter'
//  '<S322>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter ICs'
//  '<S323>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /I Gain'
//  '<S324>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain'
//  '<S325>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain Fdbk'
//  '<S326>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator'
//  '<S327>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator ICs'
//  '<S328>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Copy'
//  '<S329>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Gain'
//  '<S330>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /P Copy'
//  '<S331>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Parallel P Gain'
//  '<S332>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Reset Signal'
//  '<S333>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation'
//  '<S334>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation Fdbk'
//  '<S335>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum'
//  '<S336>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum Fdbk'
//  '<S337>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode'
//  '<S338>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode Sum'
//  '<S339>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Integral'
//  '<S340>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Ngain'
//  '<S341>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /postSat Signal'
//  '<S342>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preInt Signal'
//  '<S343>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preSat Signal'
//  '<S344>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Anti-windup/Back Calculation'
//  '<S345>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /D Gain/Disabled'
//  '<S346>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /External Derivative/Disabled'
//  '<S347>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter/Disabled'
//  '<S348>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Filter ICs/Disabled'
//  '<S349>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /I Gain/Internal Parameters'
//  '<S350>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain/Passthrough'
//  '<S351>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S352>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator/Discrete'
//  '<S353>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Integrator ICs/Internal IC'
//  '<S354>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S355>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /N Gain/Disabled'
//  '<S356>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /P Copy/Disabled'
//  '<S357>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S358>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Reset Signal/Disabled'
//  '<S359>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation/Enabled'
//  '<S360>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Saturation Fdbk/Disabled'
//  '<S361>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum/Sum_PI'
//  '<S362>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Sum Fdbk/Disabled'
//  '<S363>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode/Disabled'
//  '<S364>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S365>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S366>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S367>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /postSat Signal/Forward_Path'
//  '<S368>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preInt Signal/Internal PreInt'
//  '<S369>' : 'imperix_control/Closed_loop_control/Subsystem14/MCC PI q /preSat Signal/Forward_Path'
//  '<S370>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S371>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S372>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S373>' : 'imperix_control/Closed_loop_control/Subsystem14/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S374>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1'
//  '<S375>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Compare To Constant'
//  '<S376>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Compare To Constant1'
//  '<S377>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Subsystem - pi//2 delay'
//  '<S378>' : 'imperix_control/Closed_loop_control/Subsystem15/dq0 to Alpha-Beta-Zero1/Subsystem1'
//  '<S379>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI'
//  '<S380>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup'
//  '<S381>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/D Gain'
//  '<S382>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/External Derivative'
//  '<S383>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter'
//  '<S384>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter ICs'
//  '<S385>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/I Gain'
//  '<S386>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain'
//  '<S387>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain Fdbk'
//  '<S388>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator'
//  '<S389>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator ICs'
//  '<S390>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Copy'
//  '<S391>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Gain'
//  '<S392>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/P Copy'
//  '<S393>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Parallel P Gain'
//  '<S394>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Reset Signal'
//  '<S395>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation'
//  '<S396>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation Fdbk'
//  '<S397>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum'
//  '<S398>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum Fdbk'
//  '<S399>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode'
//  '<S400>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode Sum'
//  '<S401>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Integral'
//  '<S402>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Ngain'
//  '<S403>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/postSat Signal'
//  '<S404>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preInt Signal'
//  '<S405>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preSat Signal'
//  '<S406>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S407>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S408>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S409>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/D Gain/Disabled'
//  '<S410>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/External Derivative/Disabled'
//  '<S411>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter/Disabled'
//  '<S412>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Filter ICs/Disabled'
//  '<S413>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/I Gain/Internal Parameters'
//  '<S414>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain/Passthrough'
//  '<S415>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S416>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator/Discrete'
//  '<S417>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Integrator ICs/Internal IC'
//  '<S418>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S419>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/N Gain/Disabled'
//  '<S420>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/P Copy/Disabled'
//  '<S421>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S422>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Reset Signal/Disabled'
//  '<S423>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation/Enabled'
//  '<S424>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Saturation Fdbk/Disabled'
//  '<S425>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum/Sum_PI'
//  '<S426>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Sum Fdbk/Disabled'
//  '<S427>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode/Disabled'
//  '<S428>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S429>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S430>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S431>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/postSat Signal/Forward_Path'
//  '<S432>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preInt Signal/Internal PreInt'
//  '<S433>' : 'imperix_control/Closed_loop_control/Subsystem16/PCC PI/preSat Signal/Forward_Path'
//  '<S434>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0'
//  '<S435>' : 'imperix_control/Closed_loop_control/Subsystem18/abc to Alpha-Beta-Zero'
//  '<S436>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S437>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S438>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S439>' : 'imperix_control/Closed_loop_control/Subsystem18/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S440>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S441>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S442>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S443>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S444>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S445>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S446>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S447>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S448>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S449>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S450>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S451>' : 'imperix_control/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S452>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S453>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S454>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S455>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S456>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S457>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S458>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S459>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S460>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S461>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S462>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S463>' : 'imperix_control/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S464>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S465>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S466>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S467>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S468>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S469>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S470>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S471>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S472>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S473>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S474>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S475>' : 'imperix_control/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S476>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S477>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S478>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S479>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S480>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S481>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S482>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S483>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S484>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S485>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S486>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S487>' : 'imperix_control/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S488>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S489>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S490>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S491>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S492>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S493>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S494>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S495>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S496>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S497>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S498>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S499>' : 'imperix_control/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S500>' : 'imperix_control/Closed_loop_control/Tunable parameter1/sub'
//  '<S501>' : 'imperix_control/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S502>' : 'imperix_control/Closed_loop_control/Tunable parameter16/sub'
//  '<S503>' : 'imperix_control/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S504>' : 'imperix_control/Closed_loop_control/Tunable parameter2/sub'
//  '<S505>' : 'imperix_control/Closed_loop_control/Tunable parameter2/sub/generation'

#endif                                 // imperix_control_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
