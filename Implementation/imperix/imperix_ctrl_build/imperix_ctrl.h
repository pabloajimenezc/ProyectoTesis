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
// Model version                  : 19.24
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Wed Jan  7 19:32:35 2026
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
  real_T TmpRTBAtSaturationInport1[3]; // '<S25>/Vector Concatenate4'
  real_T TmpRTBAtSum6Inport1;          // '<S1>/Constant'
  real_T Fcn;                          // '<S575>/Fcn'
  real_T Fcn1;                         // '<S575>/Fcn1'
  real_T Fcn_c;                        // '<S574>/Fcn'
  real_T Fcn1_e;                       // '<S574>/Fcn1'
  real_T Fcn_l;                        // '<S532>/Fcn'
  real_T Fcn1_b;                       // '<S532>/Fcn1'
  real_T Fcn_ct;                       // '<S531>/Fcn'
  real_T Fcn1_p;                       // '<S531>/Fcn1'
  real_T Fcn_b;                        // '<S458>/Fcn'
  real_T Fcn1_i;                       // '<S458>/Fcn1'
  real_T Fcn_d;                        // '<S457>/Fcn'
  real_T Fcn1_d;                       // '<S457>/Fcn1'
  real32_T ADC;                        // '<S101>/ADC'
  real32_T ADC_m;                      // '<S103>/ADC'
  real32_T ADC_c;                      // '<S93>/ADC'
  real32_T ADC_n;                      // '<S81>/ADC'
  real32_T ADC_g;                      // '<S95>/ADC'
  real32_T ADC_p;                      // '<S97>/ADC'
  real32_T DataTypeConversion;         // '<S224>/Data Type Conversion'
  real32_T DataTypeConversion_h;       // '<S226>/Data Type Conversion'
  real32_T ADC_o;                      // '<S89>/ADC'
  real32_T ADC_e;                      // '<S105>/ADC'
  real32_T ADC_l;                      // '<S83>/ADC'
  real32_T ADC_nj;                     // '<S91>/ADC'
  real32_T ADC_mz;                     // '<S85>/ADC'
  real32_T ADC_k;                      // '<S87>/ADC'
  real32_T DataTypeConversion_c;       // '<S228>/Data Type Conversion'
  real32_T DataTypeConversion_k;       // '<S230>/Data Type Conversion'
  real32_T ADC_f;                      // '<S99>/ADC'
  real32_T DataTypeConversion_a;       // '<S232>/Data Type Conversion'
  real32_T DataTypeConversion_m;       // '<S234>/Data Type Conversion'
  real32_T DataTypeConversion_hg;      // '<S236>/Data Type Conversion'
  real32_T SFunction;                  // '<S589>/S-Function'
  real32_T SFunction_p;                // '<S593>/S-Function'
  real32_T DataTypeConversion_o;       // '<S238>/Data Type Conversion'
  real32_T DataTypeConversion_cc;      // '<S240>/Data Type Conversion'
  real32_T DataTypeConversion_p;       // '<S242>/Data Type Conversion'
  real32_T DataTypeConversion_cf;      // '<S244>/Data Type Conversion'
  real32_T DataTypeConversion_e;       // '<S246>/Data Type Conversion'
  real32_T DataTypeConversion_p2;      // '<S248>/Data Type Conversion'
  real32_T DataTypeConversion_ol;      // '<S250>/Data Type Conversion'
  real32_T DataTypeConversion_k1;      // '<S252>/Data Type Conversion'
  real32_T DataTypeConversion_n;       // '<S254>/Data Type Conversion'
  real32_T DataTypeConversion_kl;      // '<S256>/Data Type Conversion'
  real32_T SFunction_i;                // '<S595>/S-Function'
  real32_T TmpRTBAtProduct1Inport2[3];
  real32_T DataTypeConversion_ay;      // '<S258>/Data Type Conversion'
  real32_T DataTypeConversion_cp;      // '<S260>/Data Type Conversion'
  real32_T DataTypeConversion_i;       // '<S262>/Data Type Conversion'
  real32_T DataTypeConversion_d;       // '<S264>/Data Type Conversion'
  real32_T DataTypeConversion_j;       // '<S266>/Data Type Conversion'
  real32_T DataTypeConversion_ct;      // '<S268>/Data Type Conversion'
  real32_T DataTypeConversion_l;       // '<S270>/Data Type Conversion'
  real32_T DataTypeConversion_lx;      // '<S272>/Data Type Conversion'
  real32_T DataTypeConversion_kf;      // '<S274>/Data Type Conversion'
  real32_T DataTypeConversion_ex;      // '<S276>/Data Type Conversion'
  real32_T DataTypeConversion_p2x;     // '<S278>/Data Type Conversion'
  real32_T DataTypeConversion_ok;      // '<S280>/Data Type Conversion'
  real32_T DataTypeConversion_jn;      // '<S282>/Data Type Conversion'
  real32_T SFunction_c;                // '<S591>/S-Function'
  real32_T SFunction_b;                // '<S597>/S-Function'
  real32_T DataTypeConversion1;        // '<S335>/Data Type Conversion1'
  real32_T DataTypeConversion2;        // '<S335>/Data Type Conversion2'
  real32_T DataTypeConversion3;        // '<S335>/Data Type Conversion3'
  real32_T DataTypeConversion1_p;      // '<S336>/Data Type Conversion1'
  real32_T DataTypeConversion2_i;      // '<S336>/Data Type Conversion2'
  real32_T DataTypeConversion3_g;      // '<S336>/Data Type Conversion3'
  real32_T DataTypeConversion1_h;      // '<S337>/Data Type Conversion1'
  real32_T DataTypeConversion2_b;      // '<S337>/Data Type Conversion2'
  real32_T DataTypeConversion3_i;      // '<S337>/Data Type Conversion3'
  real32_T DataTypeConversion1_f;      // '<S338>/Data Type Conversion1'
  real32_T DataTypeConversion2_p;      // '<S338>/Data Type Conversion2'
  real32_T DataTypeConversion3_gf;     // '<S338>/Data Type Conversion3'
  real32_T DataTypeConversion1_b;      // '<S459>/Data Type Conversion1'
  real32_T DataTypeConversion2_d;      // '<S459>/Data Type Conversion2'
  real32_T DataTypeConversion3_gp;     // '<S459>/Data Type Conversion3'
  real32_T DataTypeConversion1_e;      // '<S460>/Data Type Conversion1'
  real32_T DataTypeConversion2_o;      // '<S460>/Data Type Conversion2'
  real32_T DataTypeConversion3_gl;     // '<S460>/Data Type Conversion3'
  real32_T DataTypeConversion1_po;     // '<S461>/Data Type Conversion1'
  real32_T DataTypeConversion2_g;      // '<S461>/Data Type Conversion2'
  real32_T DataTypeConversion3_m;      // '<S461>/Data Type Conversion3'
  real32_T DataTypeConversion1_c;      // '<S462>/Data Type Conversion1'
  real32_T DataTypeConversion2_k;      // '<S462>/Data Type Conversion2'
  real32_T DataTypeConversion3_a;      // '<S462>/Data Type Conversion3'
  real32_T DataTypeConversion1_h3;     // '<S533>/Data Type Conversion1'
  real32_T DataTypeConversion2_bv;     // '<S533>/Data Type Conversion2'
  real32_T DataTypeConversion3_b;      // '<S533>/Data Type Conversion3'
  real32_T DataTypeConversion1_m;      // '<S534>/Data Type Conversion1'
  real32_T DataTypeConversion2_j;      // '<S534>/Data Type Conversion2'
  real32_T DataTypeConversion3_h;      // '<S534>/Data Type Conversion3'
  real32_T DataTypeConversion1_fz;     // '<S535>/Data Type Conversion1'
  real32_T DataTypeConversion2_a;      // '<S535>/Data Type Conversion2'
  real32_T DataTypeConversion3_e;      // '<S535>/Data Type Conversion3'
  real32_T DataTypeConversion1_i;      // '<S536>/Data Type Conversion1'
  real32_T DataTypeConversion2_f;      // '<S536>/Data Type Conversion2'
  real32_T DataTypeConversion3_k;      // '<S536>/Data Type Conversion3'
  real32_T DataTypeConversion1_a;      // '<S545>/Data Type Conversion1'
  real32_T DataTypeConversion2_dx;     // '<S545>/Data Type Conversion2'
  real32_T DataTypeConversion3_l;      // '<S545>/Data Type Conversion3'
  real32_T DataTypeConversion1_k;      // '<S546>/Data Type Conversion1'
  real32_T DataTypeConversion2_dm;     // '<S546>/Data Type Conversion2'
  real32_T DataTypeConversion3_n;      // '<S546>/Data Type Conversion3'
  real32_T DataTypeConversion1_l;      // '<S547>/Data Type Conversion1'
  real32_T DataTypeConversion2_n;      // '<S547>/Data Type Conversion2'
  real32_T DataTypeConversion3_j;      // '<S547>/Data Type Conversion3'
  real32_T DataTypeConversion1_bg;     // '<S548>/Data Type Conversion1'
  real32_T DataTypeConversion2_nx;     // '<S548>/Data Type Conversion2'
  real32_T DataTypeConversion3_bs;     // '<S548>/Data Type Conversion3'
  real32_T DataTypeConversion1_d;      // '<S557>/Data Type Conversion1'
  real32_T DataTypeConversion2_pe;     // '<S557>/Data Type Conversion2'
  real32_T DataTypeConversion3_bsx;    // '<S557>/Data Type Conversion3'
  real32_T DataTypeConversion1_o;      // '<S558>/Data Type Conversion1'
  real32_T DataTypeConversion2_n0;     // '<S558>/Data Type Conversion2'
  real32_T DataTypeConversion3_hm;     // '<S558>/Data Type Conversion3'
  real32_T DataTypeConversion1_ay;     // '<S559>/Data Type Conversion1'
  real32_T DataTypeConversion2_gl;     // '<S559>/Data Type Conversion2'
  real32_T DataTypeConversion3_ip;     // '<S559>/Data Type Conversion3'
  real32_T DataTypeConversion1_pf;     // '<S560>/Data Type Conversion1'
  real32_T DataTypeConversion2_by;     // '<S560>/Data Type Conversion2'
  real32_T DataTypeConversion3_o;      // '<S560>/Data Type Conversion3'
  real32_T DataTypeConversion1_al;     // '<S576>/Data Type Conversion1'
  real32_T DataTypeConversion2_jw;     // '<S576>/Data Type Conversion2'
  real32_T DataTypeConversion3_d;      // '<S576>/Data Type Conversion3'
  real32_T DataTypeConversion1_ig;     // '<S577>/Data Type Conversion1'
  real32_T DataTypeConversion2_ij;     // '<S577>/Data Type Conversion2'
  real32_T DataTypeConversion3_bt;     // '<S577>/Data Type Conversion3'
  real32_T DataTypeConversion1_g;      // '<S578>/Data Type Conversion1'
  real32_T DataTypeConversion2_nm;     // '<S578>/Data Type Conversion2'
  real32_T DataTypeConversion3_p;      // '<S578>/Data Type Conversion3'
  real32_T DataTypeConversion1_gw;     // '<S579>/Data Type Conversion1'
  real32_T DataTypeConversion2_a0;     // '<S579>/Data Type Conversion2'
  real32_T DataTypeConversion3_bm;     // '<S579>/Data Type Conversion3'
};

// Block states (default storage) for system '<Root>'
struct DW_imperix_ctrl_T {
  mpcActiveSetOptions_imperix_c_T options_z;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_c_T options_o;// '<S1>/Energy balance'
  mpcActiveSetOptions_imperix_c_T options;// '<S1>/LICCs control'
  mpcActiveSetOptions_imperix_c_T SolverOpts;// '<S25>/Saturation'
  real_T SFunction_DSTATE;             // '<S224>/S-Function'
  real_T SFunction_DSTATE_a;           // '<S226>/S-Function'
  real_T SFunction_DSTATE_j;           // '<S228>/S-Function'
  real_T SFunction_DSTATE_n;           // '<S230>/S-Function'
  real_T SFunction_DSTATE_f;           // '<S232>/S-Function'
  real_T SFunction_DSTATE_m;           // '<S234>/S-Function'
  real_T SFunction_DSTATE_b;           // '<S236>/S-Function'
  real_T UnitDelay1_DSTATE[2];         // '<S165>/Unit Delay1'
  real_T UnitDelay1_DSTATE_o;          // '<S23>/Unit Delay1'
  real_T Integrator_DSTATE;            // '<S205>/Integrator'
  real_T SFunction_DSTATE_fo;          // '<S589>/S-Function'
  real_T SFunction_DSTATE_am;          // '<S593>/S-Function'
  real_T UnitDelay_DSTATE[2];          // '<S60>/Unit Delay'
  real_T Integrator_DSTATE_i;          // '<S145>/Integrator'
  real_T Integrator_DSTATE_d;          // '<S317>/Integrator'
  real_T Integrator_DSTATE_j;          // '<S385>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S437>/Integrator'
  real_T SFunction_DSTATE_fv;          // '<S238>/S-Function'
  real_T SFunction_DSTATE_mc;          // '<S240>/S-Function'
  real_T SFunction_DSTATE_m5;          // '<S242>/S-Function'
  real_T SFunction_DSTATE_c;           // '<S244>/S-Function'
  real_T SFunction_DSTATE_i;           // '<S246>/S-Function'
  real_T SFunction_DSTATE_bm;          // '<S248>/S-Function'
  real_T SFunction_DSTATE_o;           // '<S250>/S-Function'
  real_T SFunction_DSTATE_jm;          // '<S252>/S-Function'
  real_T SFunction_DSTATE_p;           // '<S254>/S-Function'
  real_T Integrator_DSTATE_p;          // '<S508>/Integrator'
  real_T SFunction_DSTATE_fl;          // '<S256>/S-Function'
  real_T SFunction_DSTATE_g;           // '<S595>/S-Function'
  real_T SFunction_DSTATE_pg;          // '<S258>/S-Function'
  real_T SFunction_DSTATE_fb;          // '<S260>/S-Function'
  real_T SFunction_DSTATE_nv;          // '<S262>/S-Function'
  real_T SFunction_DSTATE_ip;          // '<S264>/S-Function'
  real_T SFunction_DSTATE_e;           // '<S266>/S-Function'
  real_T SFunction_DSTATE_m2;          // '<S268>/S-Function'
  real_T SFunction_DSTATE_d;           // '<S270>/S-Function'
  real_T SFunction_DSTATE_pq;          // '<S272>/S-Function'
  real_T SFunction_DSTATE_fg;          // '<S274>/S-Function'
  real_T SFunction_DSTATE_fc;          // '<S276>/S-Function'
  real_T SFunction_DSTATE_ai;          // '<S278>/S-Function'
  real_T SFunction_DSTATE_id;          // '<S280>/S-Function'
  real_T SFunction_DSTATE_pm;          // '<S282>/S-Function'
  real_T SFunction_DSTATE_fq;          // '<S591>/S-Function'
  real_T SFunction_DSTATE_n5;          // '<S108>/S-Function'
  real_T SFunction_DSTATE_jx;          // '<S597>/S-Function'
  real_T TmpRTBAtSaturationInport1_Buffe[3];// synthesized block
  real_T TmpRTBAtSum6Inport1_Buffer0;  // synthesized block
  real_T TmpRTBAtGainOutport1_Buffer[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport2_Bu[6];// synthesized block
  real_T TmpRTBAtEnergybalanceInport3_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport4_Bu[5];// synthesized block
  real_T TmpRTBAtEnergybalanceInport5_Bu;// synthesized block
  real_T Ac[24];                       // '<S25>/Saturation'
  real_T Ix[4];                        // '<S25>/Saturation'
  real_T Tol;                          // '<S25>/Saturation'
  real_T is_max_e;                     // '<S25>/Saturation'
  real_T A[8];                         // '<S1>/LICCs control'
  real_T B[16];                        // '<S1>/LICCs control'
  real_T H[16];                        // '<S1>/LICCs control'
  real_T Q[16];                        // '<S1>/LICCs control'
  real_T R[16];                        // '<S1>/LICCs control'
  real_T Aineq[96];                    // '<S1>/LICCs control'
  real_T pinvT[30];                    // '<S1>/LICCs control'
  real_T u_prev[2];                    // '<S1>/LICCs control'
  real_T xt_est_apriori[4];            // '<S1>/Kalman Filter'
  real_T C[8];                         // '<S1>/Kalman Filter'
  real_T Inx[4];                       // '<S1>/Kalman Filter'
  real_T F_max;                        // '<S1>/IM references'
  real_T w_max;                        // '<S1>/IM references'
  real_T F_prev;                       // '<S1>/IM references'
  real_T w_prev;                       // '<S1>/IM references'
  real_T dF;                           // '<S1>/IM references'
  real_T dw;                           // '<S1>/IM references'
  real_T Ts;                           // '<S1>/Energy balance'
  real_T Tab2abc[6];                   // '<S1>/Energy balance'
  real_T Tabc2ab[6];                   // '<S1>/Energy balance'
  real_T A_d[30];                      // '<S1>/Energy balance'
  real_T pinvA[30];                    // '<S1>/Energy balance'
  real_T K[324];                       // '<S1>/Energy balance'
  real_T MI[324];                      // '<S1>/Energy balance'
  real_T NN[108];                      // '<S1>/Energy balance'
  real_T ONE[54];                      // '<S1>/Energy balance'
  real_T Nl;                           // '<S1>/Energy balance'
  real_T is_max_p;                     // '<S1>/Energy balance'
  real_T is_max2;                      // '<S1>/Energy balance'
  real_T vo_max2;                      // '<S1>/Energy balance'
  real_T Ec_ref2;                      // '<S1>/Energy balance'
  real_T Hu_z[36];                     // '<S1>/Energy balance'
  real_T Aineq_z[216];                 // '<S1>/Energy balance'
  real_T lambda_z;                     // '<S1>/Energy balance'
  real_T Hu_o[9];                      // '<S1>/Energy balance'
  real_T Aineq_o[18];                  // '<S1>/Energy balance'
  real_T lambda_o;                     // '<S1>/Energy balance'
  real_T Ec_dev;                       // '<S1>/Energy balance'
  real32_T DiscreteTimeIntegrator_DSTATE;// '<S1>/Discrete-Time Integrator'
  real32_T TmpRTBAtProduct1Inport2_Buffer0[3];// synthesized block
  real32_T TmpRTBAtDiscreteTimeIntegratorI;// synthesized block
  boolean_T IC_FirstOutputTime;        // '<S64>/IC'
  boolean_T is_max_not_empty;          // '<S72>/MATLAB Function'
  boolean_T is_max_not_empty_n;        // '<S25>/White noise'
  boolean_T Ac_not_empty;              // '<S25>/Saturation'
  boolean_T Ec_ref_not_empty;          // '<S25>/Input format'
  boolean_T A_not_empty;               // '<S1>/LICCs control'
  boolean_T xt_est_apriori_not_empty;  // '<S1>/Kalman Filter'
  boolean_T F_max_not_empty;           // '<S1>/IM references'
  boolean_T Ts_not_empty;              // '<S1>/Energy balance'
};

// Parameters for system: '<S350>/Subsystem - pi//2 delay'
struct P_Subsystempi2delay_imperix_c_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S457>/alpha_beta'

};

// Parameters for system: '<S350>/Subsystem1'
struct P_Subsystem1_imperix_ctrl_T_ {
  real_T alpha_beta_Y0[2];             // Expression: [0,0]
                                          //  Referenced by: '<S458>/alpha_beta'

};

// Parameters (default storage)
struct P_imperix_ctrl_T_ {
  struct_1mUndb4d19cpHVlbIkwLFC KF;    // Variable: KF
                                          //  Referenced by: '<S1>/Kalman Filter'

  struct_kYK8klzU7k6CF2sPPFadY CEMPC;  // Variable: CEMPC
                                          //  Referenced by: '<S1>/Energy balance'

  struct_WbJ8avaNECGQlGMumVRlBD CCMPC; // Variable: CCMPC
                                          //  Referenced by:
                                          //    '<S1>/LICCs control'
                                          //    '<S165>/Gain1'
                                          //    '<S165>/Gain2'

  struct_04ti4QO3MEcLknQdotQIR M2C;    // Variable: M2C
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S1>/Constant'
                                          //    '<S23>/Unit Delay1'
                                          //    '<S25>/Input format'
                                          //    '<S25>/Saturation'
                                          //    '<S25>/White noise'
                                          //    '<S25>/Gain7'
                                          //    '<S59>/vx'
                                          //    '<S62>/Gain1'
                                          //    '<S62>/Gain3'
                                          //    '<S62>/Gain4'
                                          //    '<S65>/Constant1'
                                          //    '<S66>/Gain'
                                          //    '<S72>/MATLAB Function'

  struct_aK5aQeabUeTOrz39VMjTKC IM;    // Variable: IM
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S1>/Kalman Filter'
                                          //    '<S1>/Gain'
                                          //    '<S1>/Gain1'
                                          //    '<S1>/Gain3'
                                          //    '<S1>/Gain5'
                                          //    '<S60>/Gain'

  struct_eLXpdkXVH71IKiDfJkdaiC RFT;   // Variable: RFT
                                          //  Referenced by:
                                          //    '<S1>/Energy balance'
                                          //    '<S25>/Input format'
                                          //    '<S25>/Gain5'

  struct_V11yzUicWajUfCfdcXdSaC FOC;   // Variable: FOC
                                          //  Referenced by:
                                          //    '<S1>/IM references'
                                          //    '<S137>/Kb'
                                          //    '<S142>/Integral Gain'
                                          //    '<S150>/Proportional Gain'
                                          //    '<S152>/Saturation'
                                          //    '<S309>/Kb'
                                          //    '<S314>/Integral Gain'
                                          //    '<S322>/Proportional Gain'
                                          //    '<S324>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe MCC;    // Variable: MCC
                                          //  Referenced by:
                                          //    '<S377>/Kb'
                                          //    '<S382>/Integral Gain'
                                          //    '<S390>/Proportional Gain'
                                          //    '<S392>/Saturation'
                                          //    '<S429>/Kb'
                                          //    '<S434>/Integral Gain'
                                          //    '<S442>/Proportional Gain'
                                          //    '<S444>/Saturation'

  struct_lzLWDxdESgOnj63TjlRqe PCC;    // Variable: PCC
                                          //  Referenced by:
                                          //    '<S505>/Integral Gain'
                                          //    '<S513>/Proportional Gain'
                                          //    '<S515>/Saturation'
                                          //    '<S500>/DeadZone'

  struct_rdZwERmVb1rhFtGnZ52PSG TEB;   // Variable: TEB
                                          //  Referenced by:
                                          //    '<S23>/Gain1'
                                          //    '<S23>/Gain2'
                                          //    '<S202>/Integral Gain'
                                          //    '<S210>/Proportional Gain'
                                          //    '<S212>/Saturation'
                                          //    '<S197>/DeadZone'

  real_T Xmax[14];                     // Variable: Xmax
                                          //  Referenced by:
                                          //    '<S25>/Input format'
                                          //    '<S25>/Gain'

  real_T Ymax[3];                      // Variable: Ymax
                                          //  Referenced by: '<S25>/Gain4'

  real_T dq0toAlphaBetaZero_Alignment;
                                 // Mask Parameter: dq0toAlphaBetaZero_Alignment
                                    //  Referenced by: '<S571>/Constant'

  real_T AlphaBetaZerotodq0_Alignment;
                                 // Mask Parameter: AlphaBetaZerotodq0_Alignment
                                    //  Referenced by: '<S527>/Constant'

  real_T dq0toAlphaBetaZero_Alignment_l;
                               // Mask Parameter: dq0toAlphaBetaZero_Alignment_l
                                  //  Referenced by: '<S350>/Constant'

  real_T PIDController1_InitialCondition;
                              // Mask Parameter: PIDController1_InitialCondition
                                 //  Referenced by: '<S205>/Integrator'

  real_T FluxPI1_InitialConditionForInte;
                              // Mask Parameter: FluxPI1_InitialConditionForInte
                                 //  Referenced by: '<S145>/Integrator'

  real_T SpeedPI1_InitialConditionForInt;
                              // Mask Parameter: SpeedPI1_InitialConditionForInt
                                 //  Referenced by: '<S317>/Integrator'

  real_T MCCPId_InitialConditionForInteg;
                              // Mask Parameter: MCCPId_InitialConditionForInteg
                                 //  Referenced by: '<S385>/Integrator'

  real_T MCCPIq_InitialConditionForInteg;
                              // Mask Parameter: MCCPIq_InitialConditionForInteg
                                 //  Referenced by: '<S437>/Integrator'

  real_T PCCPI_InitialConditionForIntegr;
                              // Mask Parameter: PCCPI_InitialConditionForIntegr
                                 //  Referenced by: '<S508>/Integrator'

  real_T CompareToConstant_const;     // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S572>/Constant'

  real_T CompareToConstant1_const;   // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S573>/Constant'

  real_T CompareToConstant_const_o; // Mask Parameter: CompareToConstant_const_o
                                       //  Referenced by: '<S529>/Constant'

  real_T CompareToConstant1_const_o;
                                   // Mask Parameter: CompareToConstant1_const_o
                                      //  Referenced by: '<S530>/Constant'

  real_T CompareToConstant_const_l; // Mask Parameter: CompareToConstant_const_l
                                       //  Referenced by: '<S455>/Constant'

  real_T CompareToConstant1_const_l;
                                   // Mask Parameter: CompareToConstant1_const_l
                                      //  Referenced by: '<S456>/Constant'

  real_T dq_Y0[2];                     // Expression: [0,0]
                                          //  Referenced by: '<S531>/dq'

  real_T dq_Y0_f[2];                   // Expression: [0,0]
                                          //  Referenced by: '<S532>/dq'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S195>/Constant1'

  real_T Constant1_Value_d;            // Expression: 0
                                          //  Referenced by: '<S498>/Constant1'

  real_T ADC_P8;                       // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S101>/ADC'

  real_T ADC_P8_l;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S103>/ADC'

  real_T ADC_P8_m;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S93>/ADC'

  real_T ADC_P8_g;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S81>/ADC'

  real_T ADC_P8_m5;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S95>/ADC'

  real_T ADC_P8_k;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S97>/ADC'

  real_T ADC_P8_lu;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S89>/ADC'

  real_T ADC_P8_c;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S105>/ADC'

  real_T ADC_P8_o;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S83>/ADC'

  real_T ADC_P8_a;                     // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S91>/ADC'

  real_T ADC_P8_l2;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S85>/ADC'

  real_T ADC_P8_mv;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S87>/ADC'

  real_T ADC_P8_gp;                    // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S99>/ADC'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S165>/Unit Delay1'

  real_T TmpRTBAtSaturationInport1_Initi;// Expression: 0
                                            //  Referenced by:

  real_T TmpRTBAtSum6Inport1_InitialCond;// Expression: 0
                                            //  Referenced by:

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S205>/Integrator'

  real_T Gain3_Gain[2];                // Expression: [1; -1]
                                          //  Referenced by: '<S25>/Gain3'

  real_T SFunction_P17;                // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S589>/S-Function'

  real_T SFunction_P17_i;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S593>/S-Function'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S68>/Gain2'

  real_T Gain3_Gain_d[9];
  // Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
     //  Referenced by: '<S528>/Gain3'

  real_T Gain1_Gain;                   // Expression: 2/3
                                          //  Referenced by: '<S528>/Gain1'

  real_T UnitDelay_InitialCondition[2];// Expression: [0; 0]
                                          //  Referenced by: '<S60>/Unit Delay'

  real_T Integrator_gainval_a;       // Computed Parameter: Integrator_gainval_a
                                        //  Referenced by: '<S145>/Integrator'

  real_T Integrator_gainval_e;       // Computed Parameter: Integrator_gainval_e
                                        //  Referenced by: '<S317>/Integrator'

  real_T IC_Value;                     // Expression: 2/3*pi*0
                                          //  Referenced by: '<S64>/IC'

  real_T AddConstant1_Bias;            // Expression: 1e-3
                                          //  Referenced by: '<S1>/Add Constant1'

  real_T Integrator_gainval_i;       // Computed Parameter: Integrator_gainval_i
                                        //  Referenced by: '<S385>/Integrator'

  real_T Integrator_gainval_p;       // Computed Parameter: Integrator_gainval_p
                                        //  Referenced by: '<S437>/Integrator'

  real_T Gain3_Gain_p[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S347>/Gain3'

  real_T Gain2_Gain_o[30];             // Expression: M2C.A'
                                          //  Referenced by: '<S59>/Gain2'

  real_T Integrator_gainval_a3;     // Computed Parameter: Integrator_gainval_a3
                                       //  Referenced by: '<S508>/Integrator'

  real_T Constant2_Value;              // Expression: 0.5
                                          //  Referenced by: '<S1>/Constant2'

  real_T SFunction_P17_k;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S595>/S-Function'

  real_T Gain6_Gain;                   // Expression: 4
                                          //  Referenced by: '<S1>/Gain6'

  real_T Gain12_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain12'

  real_T Gain7_Gain;                   // Expression: 4
                                          //  Referenced by: '<S1>/Gain7'

  real_T Gain13_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain13'

  real_T Gain8_Gain;                   // Expression: 4
                                          //  Referenced by: '<S1>/Gain8'

  real_T Gain14_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain14'

  real_T Gain9_Gain;                   // Expression: 4
                                          //  Referenced by: '<S1>/Gain9'

  real_T Gain15_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain15'

  real_T Gain10_Gain;                  // Expression: 4
                                          //  Referenced by: '<S1>/Gain10'

  real_T Gain16_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain16'

  real_T Gain11_Gain;                  // Expression: 4
                                          //  Referenced by: '<S1>/Gain11'

  real_T Gain17_Gain;                  // Expression: 1/4
                                          //  Referenced by: '<S1>/Gain17'

  real_T SFunction_P17_b;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S591>/S-Function'

  real_T Gain1_Gain_m;                 // Expression: 2
                                          //  Referenced by: '<S60>/Gain1'

  real_T Gain3_Gain_d1;                // Expression: 0
                                          //  Referenced by: '<S16>/Gain3'

  real_T Gain5_Gain;                   // Expression: 0
                                          //  Referenced by: '<S16>/Gain5'

  real_T SFunction_P17_o;              // Expression: double(CTRLPERIOD(1))
                                          //  Referenced by: '<S597>/S-Function'

  real_T Clamping_zero_Value;          // Expression: 0
                                          //  Referenced by: '<S195>/Clamping_zero'

  real_T phase_Value;                  // Expression: PHASE
                                          //  Referenced by: '<S335>/phase'

  real_T phase_Value_o;                // Expression: PHASE
                                          //  Referenced by: '<S336>/phase'

  real_T phase_Value_l;                // Expression: PHASE
                                          //  Referenced by: '<S337>/phase'

  real_T phase_Value_oo;               // Expression: PHASE
                                          //  Referenced by: '<S338>/phase'

  real_T phase_Value_p;                // Expression: PHASE
                                          //  Referenced by: '<S459>/phase'

  real_T phase_Value_pr;               // Expression: PHASE
                                          //  Referenced by: '<S460>/phase'

  real_T phase_Value_c;                // Expression: PHASE
                                          //  Referenced by: '<S461>/phase'

  real_T phase_Value_ll;               // Expression: PHASE
                                          //  Referenced by: '<S462>/phase'

  real_T Gain3_Gain_m[9];
          // Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
             //  Referenced by: '<S570>/Gain3'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S63>/Gain'

  real_T Gain8_Gain_j;                 // Expression: -1
                                          //  Referenced by: '<S63>/Gain8'

  real_T Clamping_zero_Value_a;        // Expression: 0
                                          //  Referenced by: '<S498>/Clamping_zero'

  real_T phase_Value_n;                // Expression: PHASE
                                          //  Referenced by: '<S533>/phase'

  real_T phase_Value_k;                // Expression: PHASE
                                          //  Referenced by: '<S534>/phase'

  real_T phase_Value_py;               // Expression: PHASE
                                          //  Referenced by: '<S535>/phase'

  real_T phase_Value_ng;               // Expression: PHASE
                                          //  Referenced by: '<S536>/phase'

  real_T phase_Value_j;                // Expression: PHASE
                                          //  Referenced by: '<S545>/phase'

  real_T phase_Value_of;               // Expression: PHASE
                                          //  Referenced by: '<S546>/phase'

  real_T phase_Value_h;                // Expression: PHASE
                                          //  Referenced by: '<S547>/phase'

  real_T phase_Value_nc;               // Expression: PHASE
                                          //  Referenced by: '<S548>/phase'

  real_T phase_Value_f;                // Expression: PHASE
                                          //  Referenced by: '<S557>/phase'

  real_T phase_Value_i;                // Expression: PHASE
                                          //  Referenced by: '<S558>/phase'

  real_T phase_Value_a;                // Expression: PHASE
                                          //  Referenced by: '<S559>/phase'

  real_T phase_Value_ns;               // Expression: PHASE
                                          //  Referenced by: '<S560>/phase'

  real_T phase_Value_fa;               // Expression: PHASE
                                          //  Referenced by: '<S576>/phase'

  real_T phase_Value_hr;               // Expression: PHASE
                                          //  Referenced by: '<S577>/phase'

  real_T phase_Value_at;               // Expression: PHASE
                                          //  Referenced by: '<S578>/phase'

  real_T phase_Value_cq;               // Expression: PHASE
                                          //  Referenced by: '<S579>/phase'

  real32_T PWM_P2;                     // Expression: single(deadtime)
                                          //  Referenced by: '<S340>/PWM'

  real32_T PWM_P3;                     // Expression: single(duty)
                                          //  Referenced by: '<S340>/PWM'

  real32_T PWM_P4;                     // Expression: single(phase)
                                          //  Referenced by: '<S340>/PWM'

  real32_T PWM_P2_a;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S342>/PWM'

  real32_T PWM_P3_e;                   // Expression: single(duty)
                                          //  Referenced by: '<S342>/PWM'

  real32_T PWM_P4_h;                   // Expression: single(phase)
                                          //  Referenced by: '<S342>/PWM'

  real32_T PWM_P2_b;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S344>/PWM'

  real32_T PWM_P3_i;                   // Expression: single(duty)
                                          //  Referenced by: '<S344>/PWM'

  real32_T PWM_P4_k;                   // Expression: single(phase)
                                          //  Referenced by: '<S344>/PWM'

  real32_T PWM_P2_h;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S346>/PWM'

  real32_T PWM_P3_b;                   // Expression: single(duty)
                                          //  Referenced by: '<S346>/PWM'

  real32_T PWM_P4_k3;                  // Expression: single(phase)
                                          //  Referenced by: '<S346>/PWM'

  real32_T PWM_P2_p;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S464>/PWM'

  real32_T PWM_P3_c;                   // Expression: single(duty)
                                          //  Referenced by: '<S464>/PWM'

  real32_T PWM_P4_i;                   // Expression: single(phase)
                                          //  Referenced by: '<S464>/PWM'

  real32_T PWM_P2_m;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S466>/PWM'

  real32_T PWM_P3_g;                   // Expression: single(duty)
                                          //  Referenced by: '<S466>/PWM'

  real32_T PWM_P4_e;                   // Expression: single(phase)
                                          //  Referenced by: '<S466>/PWM'

  real32_T PWM_P2_mu;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S468>/PWM'

  real32_T PWM_P3_n;                   // Expression: single(duty)
                                          //  Referenced by: '<S468>/PWM'

  real32_T PWM_P4_l;                   // Expression: single(phase)
                                          //  Referenced by: '<S468>/PWM'

  real32_T PWM_P2_i;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S470>/PWM'

  real32_T PWM_P3_m;                   // Expression: single(duty)
                                          //  Referenced by: '<S470>/PWM'

  real32_T PWM_P4_ks;                  // Expression: single(phase)
                                          //  Referenced by: '<S470>/PWM'

  real32_T PWM_P2_k;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P3_h;                   // Expression: single(duty)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P4_n;                   // Expression: single(phase)
                                          //  Referenced by: '<S538>/PWM'

  real32_T PWM_P2_mr;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P3_l;                   // Expression: single(duty)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P4_hu;                  // Expression: single(phase)
                                          //  Referenced by: '<S540>/PWM'

  real32_T PWM_P2_m0;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S542>/PWM'

  real32_T PWM_P3_d;                   // Expression: single(duty)
                                          //  Referenced by: '<S542>/PWM'

  real32_T PWM_P4_f;                   // Expression: single(phase)
                                          //  Referenced by: '<S542>/PWM'

  real32_T PWM_P2_n;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S544>/PWM'

  real32_T PWM_P3_lk;                  // Expression: single(duty)
                                          //  Referenced by: '<S544>/PWM'

  real32_T PWM_P4_a;                   // Expression: single(phase)
                                          //  Referenced by: '<S544>/PWM'

  real32_T PWM_P2_f;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S550>/PWM'

  real32_T PWM_P3_nm;                  // Expression: single(duty)
                                          //  Referenced by: '<S550>/PWM'

  real32_T PWM_P4_ho;                  // Expression: single(phase)
                                          //  Referenced by: '<S550>/PWM'

  real32_T PWM_P2_n4;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P3_o;                   // Expression: single(duty)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P4_b;                   // Expression: single(phase)
                                          //  Referenced by: '<S552>/PWM'

  real32_T PWM_P2_j;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P3_p;                   // Expression: single(duty)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P4_j;                   // Expression: single(phase)
                                          //  Referenced by: '<S554>/PWM'

  real32_T PWM_P2_id;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P3_gz;                  // Expression: single(duty)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P4_g;                   // Expression: single(phase)
                                          //  Referenced by: '<S556>/PWM'

  real32_T PWM_P2_j3;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S562>/PWM'

  real32_T PWM_P3_oo;                  // Expression: single(duty)
                                          //  Referenced by: '<S562>/PWM'

  real32_T PWM_P4_ly;                  // Expression: single(phase)
                                          //  Referenced by: '<S562>/PWM'

  real32_T PWM_P2_hp;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S564>/PWM'

  real32_T PWM_P3_oy;                  // Expression: single(duty)
                                          //  Referenced by: '<S564>/PWM'

  real32_T PWM_P4_jr;                  // Expression: single(phase)
                                          //  Referenced by: '<S564>/PWM'

  real32_T PWM_P2_by;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S566>/PWM'

  real32_T PWM_P3_d0;                  // Expression: single(duty)
                                          //  Referenced by: '<S566>/PWM'

  real32_T PWM_P4_ev;                  // Expression: single(phase)
                                          //  Referenced by: '<S566>/PWM'

  real32_T PWM_P2_o;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P3_hq;                  // Expression: single(duty)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P4_ab;                  // Expression: single(phase)
                                          //  Referenced by: '<S568>/PWM'

  real32_T PWM_P2_pf;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S581>/PWM'

  real32_T PWM_P3_mz;                  // Expression: single(duty)
                                          //  Referenced by: '<S581>/PWM'

  real32_T PWM_P4_er;                  // Expression: single(phase)
                                          //  Referenced by: '<S581>/PWM'

  real32_T PWM_P2_e;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S583>/PWM'

  real32_T PWM_P3_on;                  // Expression: single(duty)
                                          //  Referenced by: '<S583>/PWM'

  real32_T PWM_P4_o;                   // Expression: single(phase)
                                          //  Referenced by: '<S583>/PWM'

  real32_T PWM_P2_nw;                  // Expression: single(deadtime)
                                          //  Referenced by: '<S585>/PWM'

  real32_T PWM_P3_in;                  // Expression: single(duty)
                                          //  Referenced by: '<S585>/PWM'

  real32_T PWM_P4_nl;                  // Expression: single(phase)
                                          //  Referenced by: '<S585>/PWM'

  real32_T PWM_P2_g;                   // Expression: single(deadtime)
                                          //  Referenced by: '<S587>/PWM'

  real32_T PWM_P3_k;                   // Expression: single(duty)
                                          //  Referenced by: '<S587>/PWM'

  real32_T PWM_P4_jg;                  // Expression: single(phase)
                                          //  Referenced by: '<S587>/PWM'

  real32_T ADC_P2;                     // Expression: single(gain)
                                          //  Referenced by: '<S101>/ADC'

  real32_T ADC_P3;                     // Expression: single(offset)
                                          //  Referenced by: '<S101>/ADC'

  real32_T ADC_P2_h;                   // Expression: single(gain)
                                          //  Referenced by: '<S103>/ADC'

  real32_T ADC_P3_m;                   // Expression: single(offset)
                                          //  Referenced by: '<S103>/ADC'

  real32_T ADC_P2_p;                   // Expression: single(gain)
                                          //  Referenced by: '<S93>/ADC'

  real32_T ADC_P3_p;                   // Expression: single(offset)
                                          //  Referenced by: '<S93>/ADC'

  real32_T ADC_P2_f;                   // Expression: single(gain)
                                          //  Referenced by: '<S81>/ADC'

  real32_T ADC_P3_h;                   // Expression: single(offset)
                                          //  Referenced by: '<S81>/ADC'

  real32_T ADC_P2_l;                   // Expression: single(gain)
                                          //  Referenced by: '<S95>/ADC'

  real32_T ADC_P3_o;                   // Expression: single(offset)
                                          //  Referenced by: '<S95>/ADC'

  real32_T ADC_P2_pn;                  // Expression: single(gain)
                                          //  Referenced by: '<S97>/ADC'

  real32_T ADC_P3_c;                   // Expression: single(offset)
                                          //  Referenced by: '<S97>/ADC'

  real32_T SFunction_P6;               // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P12;              // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S224>/S-Function'

  real32_T SFunction_P6_g;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T SFunction_P12_n;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S226>/S-Function'

  real32_T ADC_P2_fx;                  // Expression: single(gain)
                                          //  Referenced by: '<S89>/ADC'

  real32_T ADC_P3_oa;                  // Expression: single(offset)
                                          //  Referenced by: '<S89>/ADC'

  real32_T ADC_P2_b;                   // Expression: single(gain)
                                          //  Referenced by: '<S105>/ADC'

  real32_T ADC_P3_d;                   // Expression: single(offset)
                                          //  Referenced by: '<S105>/ADC'

  real32_T ADC_P2_i;                   // Expression: single(gain)
                                          //  Referenced by: '<S83>/ADC'

  real32_T ADC_P3_e;                   // Expression: single(offset)
                                          //  Referenced by: '<S83>/ADC'

  real32_T ADC_P2_ik;                  // Expression: single(gain)
                                          //  Referenced by: '<S91>/ADC'

  real32_T ADC_P3_i;                   // Expression: single(offset)
                                          //  Referenced by: '<S91>/ADC'

  real32_T ADC_P2_i5;                  // Expression: single(gain)
                                          //  Referenced by: '<S85>/ADC'

  real32_T ADC_P3_pf;                  // Expression: single(offset)
                                          //  Referenced by: '<S85>/ADC'

  real32_T ADC_P2_a;                   // Expression: single(gain)
                                          //  Referenced by: '<S87>/ADC'

  real32_T ADC_P3_n;                   // Expression: single(offset)
                                          //  Referenced by: '<S87>/ADC'

  real32_T SFunction_P6_l;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P12_a;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S228>/S-Function'

  real32_T SFunction_P6_gj;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T SFunction_P12_h;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S230>/S-Function'

  real32_T ADC_P2_k;                   // Expression: single(gain)
                                          //  Referenced by: '<S99>/ADC'

  real32_T ADC_P3_di;                  // Expression: single(offset)
                                          //  Referenced by: '<S99>/ADC'

  real32_T SFunction_P6_j;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P12_k;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S232>/S-Function'

  real32_T SFunction_P6_m;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P12_d;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S234>/S-Function'

  real32_T SFunction_P6_b;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P12_c;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S236>/S-Function'

  real32_T SFunction_P3;               // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S589>/S-Function'

  real32_T SFunction_P4;               // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S589>/S-Function'

  real32_T SFunction_P5;               // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S589>/S-Function'

  real32_T SFunction_P6_i;             // Expression: single(0)
                                          //  Referenced by: '<S589>/S-Function'

  real32_T SFunction_P7;               // Expression: single(0)
                                          //  Referenced by: '<S589>/S-Function'

  real32_T SFunction_P3_m;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S593>/S-Function'

  real32_T SFunction_P4_j;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S593>/S-Function'

  real32_T SFunction_P5_n;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S593>/S-Function'

  real32_T SFunction_P6_jg;            // Expression: single(0)
                                          //  Referenced by: '<S593>/S-Function'

  real32_T SFunction_P7_i;             // Expression: single(0)
                                          //  Referenced by: '<S593>/S-Function'

  real32_T SFunction_P6_bx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P12_j;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S238>/S-Function'

  real32_T SFunction_P6_ir;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P12_f;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S240>/S-Function'

  real32_T SFunction_P6_j5;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P12_ca;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S242>/S-Function'

  real32_T SFunction_P6_d;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P12_jr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S244>/S-Function'

  real32_T SFunction_P6_n;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P12_b;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S246>/S-Function'

  real32_T SFunction_P6_mx;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P12_i;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S248>/S-Function'

  real32_T SFunction_P6_b0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P12_ho;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S250>/S-Function'

  real32_T SFunction_P6_c;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P12_p;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S252>/S-Function'

  real32_T SFunction_P6_h;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S254>/S-Function'

  real32_T SFunction_P12_e;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S254>/S-Function'

  real32_T SFunction_P6_e;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S256>/S-Function'

  real32_T SFunction_P12_o;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S256>/S-Function'

  real32_T SFunction_P3_m2;            // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S595>/S-Function'

  real32_T SFunction_P4_o;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S595>/S-Function'

  real32_T SFunction_P5_i;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S595>/S-Function'

  real32_T SFunction_P6_ih;            // Expression: single(0)
                                          //  Referenced by: '<S595>/S-Function'

  real32_T SFunction_P7_d;             // Expression: single(0)
                                          //  Referenced by: '<S595>/S-Function'

  real32_T Gain4_Gain;                 // Computed Parameter: Gain4_Gain
                                          //  Referenced by: '<S1>/Gain4'

  real32_T TmpRTBAtProduct1Inport2_Initial;
                          // Computed Parameter: TmpRTBAtProduct1Inport2_Initial
                             //  Referenced by:

  real32_T SFunction_P6_dk;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S258>/S-Function'

  real32_T SFunction_P12_co;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S258>/S-Function'

  real32_T SFunction_P6_p;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S260>/S-Function'

  real32_T SFunction_P12_dx;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S260>/S-Function'

  real32_T SFunction_P6_iv;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S262>/S-Function'

  real32_T SFunction_P12_d2;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S262>/S-Function'

  real32_T SFunction_P6_ey;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S264>/S-Function'

  real32_T SFunction_P12_kr;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S264>/S-Function'

  real32_T SFunction_P6_bxg;           // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S266>/S-Function'

  real32_T SFunction_P12_l;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S266>/S-Function'

  real32_T SFunction_P6_f;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S268>/S-Function'

  real32_T SFunction_P12_fv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S268>/S-Function'

  real32_T SFunction_P6_hb;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S270>/S-Function'

  real32_T SFunction_P12_cn;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S270>/S-Function'

  real32_T SFunction_P6_ne;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S272>/S-Function'

  real32_T SFunction_P12_fa;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S272>/S-Function'

  real32_T SFunction_P6_c0;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S274>/S-Function'

  real32_T SFunction_P12_om;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S274>/S-Function'

  real32_T SFunction_P6_dm;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S276>/S-Function'

  real32_T SFunction_P12_l2;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S276>/S-Function'

  real32_T SFunction_P6_j2;            // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S278>/S-Function'

  real32_T SFunction_P12_bv;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S278>/S-Function'

  real32_T SFunction_P6_a;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S280>/S-Function'

  real32_T SFunction_P12_g;            // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S280>/S-Function'

  real32_T SFunction_P6_k;             // Expression: single(CAN_TX_FREQ)
                                          //  Referenced by: '<S282>/S-Function'

  real32_T SFunction_P12_kg;           // Expression: single(ETH_TX_FREQ)
                                          //  Referenced by: '<S282>/S-Function'

  real32_T SFunction_P3_n;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S591>/S-Function'

  real32_T SFunction_P4_h;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S591>/S-Function'

  real32_T SFunction_P5_f;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S591>/S-Function'

  real32_T SFunction_P6_ps;            // Expression: single(0)
                                          //  Referenced by: '<S591>/S-Function'

  real32_T SFunction_P7_g;             // Expression: single(0)
                                          //  Referenced by: '<S591>/S-Function'

  real32_T SFunction_P2;           // Expression: single(private_nb_oversamples)
                                      //  Referenced by: '<S108>/S-Function'

  real32_T SFunction_P3_m5;            // Expression: single(interrupt_phase)
                                          //  Referenced by: '<S108>/S-Function'

  real32_T CLK1_P2;                    // Expression: single(frequency)
                                          //  Referenced by: '<S110>/CLK1'

  real32_T SFunction_P3_d;             // Expression: single(INITIALVAL)
                                          //  Referenced by: '<S597>/S-Function'

  real32_T SFunction_P4_k;             // Expression: single(VAL_MIN)
                                          //  Referenced by: '<S597>/S-Function'

  real32_T SFunction_P5_h;             // Expression: single(VAL_MAX)
                                          //  Referenced by: '<S597>/S-Function'

  real32_T SFunction_P6_jz;            // Expression: single(0)
                                          //  Referenced by: '<S597>/S-Function'

  real32_T SFunction_P7_c;             // Expression: single(0)
                                          //  Referenced by: '<S597>/S-Function'

  real32_T Gain2_Gain_f;               // Computed Parameter: Gain2_Gain_f
                                          //  Referenced by: '<S1>/Gain2'

  real32_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S1>/Discrete-Time Integrator'

  real32_T DiscreteTimeIntegrator_IC;
                                // Computed Parameter: DiscreteTimeIntegrator_IC
                                   //  Referenced by: '<S1>/Discrete-Time Integrator'

  uint32_T SFunction_P7_dp;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P13;              // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S224>/S-Function'

  uint32_T SFunction_P7_e;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P13_b;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S226>/S-Function'

  uint32_T SFunction_P7_o;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P13_f;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S228>/S-Function'

  uint32_T SFunction_P7_dt;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P13_h;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S230>/S-Function'

  uint32_T SFunction_P7_n;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P13_g;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S232>/S-Function'

  uint32_T SFunction_P7_m;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P13_j;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S234>/S-Function'

  uint32_T SFunction_P7_k;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P13_o;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S236>/S-Function'

  uint32_T SFunction_P10;              // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S589>/S-Function'

  uint32_T SFunction_P10_l;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S593>/S-Function'

  uint32_T SFunction_P7_nf;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P13_g1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S238>/S-Function'

  uint32_T SFunction_P7_a;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P13_o5;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S240>/S-Function'

  uint32_T SFunction_P7_dc;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P13_k;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S242>/S-Function'

  uint32_T SFunction_P7_h;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P13_a;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S244>/S-Function'

  uint32_T SFunction_P7_ko;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P13_gr;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S246>/S-Function'

  uint32_T SFunction_P7_dw;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P13_c;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S248>/S-Function'

  uint32_T SFunction_P7_od;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P13_n;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S250>/S-Function'

  uint32_T SFunction_P7_ku;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P13_ar;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S252>/S-Function'

  uint32_T SFunction_P7_n4;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S254>/S-Function'

  uint32_T SFunction_P13_bv;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S254>/S-Function'

  uint32_T SFunction_P7_p;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S256>/S-Function'

  uint32_T SFunction_P13_c1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S256>/S-Function'

  uint32_T SFunction_P10_b;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S595>/S-Function'

  uint32_T SFunction_P7_b;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S258>/S-Function'

  uint32_T SFunction_P13_nf;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S258>/S-Function'

  uint32_T SFunction_P7_h3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S260>/S-Function'

  uint32_T SFunction_P13_i;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S260>/S-Function'

  uint32_T SFunction_P7_kk;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S262>/S-Function'

  uint32_T SFunction_P13_kd;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S262>/S-Function'

  uint32_T SFunction_P7_f;             // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S264>/S-Function'

  uint32_T SFunction_P13_jj;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S264>/S-Function'

  uint32_T SFunction_P7_ai;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S266>/S-Function'

  uint32_T SFunction_P13_jg;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S266>/S-Function'

  uint32_T SFunction_P7_hd;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S268>/S-Function'

  uint32_T SFunction_P13_a2;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S268>/S-Function'

  uint32_T SFunction_P7_ci;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S270>/S-Function'

  uint32_T SFunction_P13_ig;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S270>/S-Function'

  uint32_T SFunction_P7_nj;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S272>/S-Function'

  uint32_T SFunction_P13_d;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S272>/S-Function'

  uint32_T SFunction_P7_fg;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S274>/S-Function'

  uint32_T SFunction_P13_ch;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S274>/S-Function'

  uint32_T SFunction_P7_da;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S276>/S-Function'

  uint32_T SFunction_P13_p;            // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S276>/S-Function'

  uint32_T SFunction_P7_c3;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S278>/S-Function'

  uint32_T SFunction_P13_a1;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S278>/S-Function'

  uint32_T SFunction_P7_pg;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S280>/S-Function'

  uint32_T SFunction_P13_oa;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S280>/S-Function'

  uint32_T SFunction_P7_h0;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S282>/S-Function'

  uint32_T SFunction_P13_ob;           // Expression: uint32(ETH_PORT)
                                          //  Referenced by: '<S282>/S-Function'

  uint32_T SFunction_P10_k;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S591>/S-Function'

  uint32_T SFunction_P10_m;            // Expression: uint32(CAN_BAUDRATE)
                                          //  Referenced by: '<S597>/S-Function'

  int16_T PWM_P1;                      // Expression: int16(lane)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P5;                      // Expression: int16(carrier)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P6;                      // Expression: int16(rate)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P7;                      // Expression: int16(outconf)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P8;                      // Expression: int16(outmode)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P9;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S340>/PWM'

  int16_T PWM_P1_g;                    // Expression: int16(lane)
                                          //  Referenced by: '<S342>/PWM'

  int16_T PWM_P5_o;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S342>/PWM'

  int16_T PWM_P6_j;                    // Expression: int16(rate)
                                          //  Referenced by: '<S342>/PWM'

  int16_T PWM_P7_h;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S342>/PWM'

  int16_T PWM_P8_c;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S342>/PWM'

  int16_T PWM_P9_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S342>/PWM'

  int16_T PWM_P1_a;                    // Expression: int16(lane)
                                          //  Referenced by: '<S344>/PWM'

  int16_T PWM_P5_f;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S344>/PWM'

  int16_T PWM_P6_n;                    // Expression: int16(rate)
                                          //  Referenced by: '<S344>/PWM'

  int16_T PWM_P7_p;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S344>/PWM'

  int16_T PWM_P8_d;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S344>/PWM'

  int16_T PWM_P9_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S344>/PWM'

  int16_T PWM_P1_aj;                   // Expression: int16(lane)
                                          //  Referenced by: '<S346>/PWM'

  int16_T PWM_P5_g;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S346>/PWM'

  int16_T PWM_P6_e;                    // Expression: int16(rate)
                                          //  Referenced by: '<S346>/PWM'

  int16_T PWM_P7_c;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S346>/PWM'

  int16_T PWM_P8_o;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S346>/PWM'

  int16_T PWM_P9_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S346>/PWM'

  int16_T PWM_P1_ag;                   // Expression: int16(lane)
                                          //  Referenced by: '<S464>/PWM'

  int16_T PWM_P5_f3;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S464>/PWM'

  int16_T PWM_P6_em;                   // Expression: int16(rate)
                                          //  Referenced by: '<S464>/PWM'

  int16_T PWM_P7_m;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S464>/PWM'

  int16_T PWM_P8_m;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S464>/PWM'

  int16_T PWM_P9_i;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S464>/PWM'

  int16_T PWM_P1_o;                    // Expression: int16(lane)
                                          //  Referenced by: '<S466>/PWM'

  int16_T PWM_P5_d;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S466>/PWM'

  int16_T PWM_P6_a;                    // Expression: int16(rate)
                                          //  Referenced by: '<S466>/PWM'

  int16_T PWM_P7_o;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S466>/PWM'

  int16_T PWM_P8_e;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S466>/PWM'

  int16_T PWM_P9_e;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S466>/PWM'

  int16_T PWM_P1_b;                    // Expression: int16(lane)
                                          //  Referenced by: '<S468>/PWM'

  int16_T PWM_P5_oc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S468>/PWM'

  int16_T PWM_P6_f;                    // Expression: int16(rate)
                                          //  Referenced by: '<S468>/PWM'

  int16_T PWM_P7_b;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S468>/PWM'

  int16_T PWM_P8_h;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S468>/PWM'

  int16_T PWM_P9_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S468>/PWM'

  int16_T PWM_P1_bx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S470>/PWM'

  int16_T PWM_P5_e;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S470>/PWM'

  int16_T PWM_P6_l;                    // Expression: int16(rate)
                                          //  Referenced by: '<S470>/PWM'

  int16_T PWM_P7_l;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S470>/PWM'

  int16_T PWM_P8_k;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S470>/PWM'

  int16_T PWM_P9_cr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S470>/PWM'

  int16_T PWM_P1_k;                    // Expression: int16(lane)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P5_oi;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P6_b;                    // Expression: int16(rate)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P7_a;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P8_ch;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P9_b;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S538>/PWM'

  int16_T PWM_P1_gt;                   // Expression: int16(lane)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P5_et;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P6_m;                    // Expression: int16(rate)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P7_hn;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P8_j;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P9_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S540>/PWM'

  int16_T PWM_P1_b0;                   // Expression: int16(lane)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P5_de;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P6_ff;                   // Expression: int16(rate)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P7_d;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P8_hz;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P9_h;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S542>/PWM'

  int16_T PWM_P1_kx;                   // Expression: int16(lane)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P5_i;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P6_j3;                   // Expression: int16(rate)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P7_ab;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P8_ok;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P9_pe;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S544>/PWM'

  int16_T PWM_P1_l;                    // Expression: int16(lane)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P5_eo;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P6_mu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P7_pv;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P8_d5;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P9_nr;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S550>/PWM'

  int16_T PWM_P1_bu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P5_a;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P6_d;                    // Expression: int16(rate)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P7_al;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P8_g;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P9_j;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S552>/PWM'

  int16_T PWM_P1_ae;                   // Expression: int16(lane)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P5_c;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P6_jw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P7_i;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P8_l;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P9_bn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S554>/PWM'

  int16_T PWM_P1_lu;                   // Expression: int16(lane)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P5_eg;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P6_er;                   // Expression: int16(rate)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P7_f;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P8_hb;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P9_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S556>/PWM'

  int16_T PWM_P1_i;                    // Expression: int16(lane)
                                          //  Referenced by: '<S562>/PWM'

  int16_T PWM_P5_fx;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S562>/PWM'

  int16_T PWM_P6_h;                    // Expression: int16(rate)
                                          //  Referenced by: '<S562>/PWM'

  int16_T PWM_P7_k;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S562>/PWM'

  int16_T PWM_P8_ka;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S562>/PWM'

  int16_T PWM_P9_n5;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S562>/PWM'

  int16_T PWM_P1_lg;                   // Expression: int16(lane)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P5_gc;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P6_eq;                   // Expression: int16(rate)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P7_f4;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P8_f;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P9_m;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S564>/PWM'

  int16_T PWM_P1_h;                    // Expression: int16(lane)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P5_f0;                   // Expression: int16(carrier)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P6_p;                    // Expression: int16(rate)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P7_ci;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P8_me;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P9_ju;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S566>/PWM'

  int16_T PWM_P1_o1;                   // Expression: int16(lane)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P5_p;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P6_n5;                   // Expression: int16(rate)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P7_bt;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P8_or;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P9_a2;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S568>/PWM'

  int16_T PWM_P1_j;                    // Expression: int16(lane)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P5_l;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P6_dw;                   // Expression: int16(rate)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P7_pz;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P8_p;                    // Expression: int16(outmode)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P9_n5v;                  // Expression: int16(nbBbx)
                                          //  Referenced by: '<S581>/PWM'

  int16_T PWM_P1_go;                   // Expression: int16(lane)
                                          //  Referenced by: '<S583>/PWM'

  int16_T PWM_P5_h;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S583>/PWM'

  int16_T PWM_P6_ad;                   // Expression: int16(rate)
                                          //  Referenced by: '<S583>/PWM'

  int16_T PWM_P7_ig;                   // Expression: int16(outconf)
                                          //  Referenced by: '<S583>/PWM'

  int16_T PWM_P8_gr;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S583>/PWM'

  int16_T PWM_P9_ek;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S583>/PWM'

  int16_T PWM_P1_n;                    // Expression: int16(lane)
                                          //  Referenced by: '<S585>/PWM'

  int16_T PWM_P5_j;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S585>/PWM'

  int16_T PWM_P6_i;                    // Expression: int16(rate)
                                          //  Referenced by: '<S585>/PWM'

  int16_T PWM_P7_pzd;                  // Expression: int16(outconf)
                                          //  Referenced by: '<S585>/PWM'

  int16_T PWM_P8_dd;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S585>/PWM'

  int16_T PWM_P9_d;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S585>/PWM'

  int16_T PWM_P1_nw;                   // Expression: int16(lane)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P5_k;                    // Expression: int16(carrier)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P6_fu;                   // Expression: int16(rate)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P7_g;                    // Expression: int16(outconf)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P8_lj;                   // Expression: int16(outmode)
                                          //  Referenced by: '<S587>/PWM'

  int16_T PWM_P9_dn;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S587>/PWM'

  int16_T ADC_P1;                      // Expression: int16(channel)
                                          //  Referenced by: '<S101>/ADC'

  int16_T ADC_P4;                      // Expression: int16(nbBbx)
                                          //  Referenced by: '<S101>/ADC'

  int16_T ADC_P6;                      // Expression: int16(outputwidth)
                                          //  Referenced by: '<S101>/ADC'

  int16_T ADC_P9;                      // Expression: int16(averagelength)
                                          //  Referenced by: '<S101>/ADC'

  int16_T ADC_P1_j;                    // Expression: int16(channel)
                                          //  Referenced by: '<S103>/ADC'

  int16_T ADC_P4_c;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S103>/ADC'

  int16_T ADC_P6_l;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S103>/ADC'

  int16_T ADC_P9_f;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S103>/ADC'

  int16_T ADC_P1_h;                    // Expression: int16(channel)
                                          //  Referenced by: '<S93>/ADC'

  int16_T ADC_P4_cw;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S93>/ADC'

  int16_T ADC_P6_f;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S93>/ADC'

  int16_T ADC_P9_l;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S93>/ADC'

  int16_T ADC_P1_p;                    // Expression: int16(channel)
                                          //  Referenced by: '<S81>/ADC'

  int16_T ADC_P4_f;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S81>/ADC'

  int16_T ADC_P6_e;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S81>/ADC'

  int16_T ADC_P9_m;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S81>/ADC'

  int16_T ADC_P1_m;                    // Expression: int16(channel)
                                          //  Referenced by: '<S95>/ADC'

  int16_T ADC_P4_k;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S95>/ADC'

  int16_T ADC_P6_i;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S95>/ADC'

  int16_T ADC_P9_h;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S95>/ADC'

  int16_T ADC_P1_l;                    // Expression: int16(channel)
                                          //  Referenced by: '<S97>/ADC'

  int16_T ADC_P4_p;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S97>/ADC'

  int16_T ADC_P6_a;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S97>/ADC'

  int16_T ADC_P9_h5;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S97>/ADC'

  int16_T SFunction_P2_p;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P3_h;              // Expression: int16(0)
                                          //  Referenced by: '<S224>/S-Function'

  int16_T SFunction_P2_n;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T SFunction_P3_p;              // Expression: int16(0)
                                          //  Referenced by: '<S226>/S-Function'

  int16_T ADC_P1_i;                    // Expression: int16(channel)
                                          //  Referenced by: '<S89>/ADC'

  int16_T ADC_P4_a;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S89>/ADC'

  int16_T ADC_P6_k;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S89>/ADC'

  int16_T ADC_P9_d;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S89>/ADC'

  int16_T ADC_P1_d;                    // Expression: int16(channel)
                                          //  Referenced by: '<S105>/ADC'

  int16_T ADC_P4_n;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S105>/ADC'

  int16_T ADC_P6_ah;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S105>/ADC'

  int16_T ADC_P9_lj;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S105>/ADC'

  int16_T ADC_P1_pn;                   // Expression: int16(channel)
                                          //  Referenced by: '<S83>/ADC'

  int16_T ADC_P4_ah;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S83>/ADC'

  int16_T ADC_P6_am;                   // Expression: int16(outputwidth)
                                          //  Referenced by: '<S83>/ADC'

  int16_T ADC_P9_o;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S83>/ADC'

  int16_T ADC_P1_o;                    // Expression: int16(channel)
                                          //  Referenced by: '<S91>/ADC'

  int16_T ADC_P4_al;                   // Expression: int16(nbBbx)
                                          //  Referenced by: '<S91>/ADC'

  int16_T ADC_P6_b;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S91>/ADC'

  int16_T ADC_P9_j;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S91>/ADC'

  int16_T ADC_P1_k;                    // Expression: int16(channel)
                                          //  Referenced by: '<S85>/ADC'

  int16_T ADC_P4_g;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S85>/ADC'

  int16_T ADC_P6_c;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S85>/ADC'

  int16_T ADC_P9_i;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S85>/ADC'

  int16_T ADC_P1_c;                    // Expression: int16(channel)
                                          //  Referenced by: '<S87>/ADC'

  int16_T ADC_P4_l;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S87>/ADC'

  int16_T ADC_P6_p;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S87>/ADC'

  int16_T ADC_P9_p;                    // Expression: int16(averagelength)
                                          //  Referenced by: '<S87>/ADC'

  int16_T SFunction_P2_o;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P3_e;              // Expression: int16(0)
                                          //  Referenced by: '<S228>/S-Function'

  int16_T SFunction_P2_nm;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T SFunction_P3_j;              // Expression: int16(0)
                                          //  Referenced by: '<S230>/S-Function'

  int16_T ADC_P1_e;                    // Expression: int16(channel)
                                          //  Referenced by: '<S99>/ADC'

  int16_T ADC_P4_o;                    // Expression: int16(nbBbx)
                                          //  Referenced by: '<S99>/ADC'

  int16_T ADC_P6_n;                    // Expression: int16(outputwidth)
                                          //  Referenced by: '<S99>/ADC'

  int16_T ADC_P9_l0;                   // Expression: int16(averagelength)
                                          //  Referenced by: '<S99>/ADC'

  int16_T SFunction_P2_a;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P3_k;              // Expression: int16(0)
                                          //  Referenced by: '<S232>/S-Function'

  int16_T SFunction_P2_l;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P3_g;              // Expression: int16(0)
                                          //  Referenced by: '<S234>/S-Function'

  int16_T SFunction_P2_i;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P3_o;              // Expression: int16(0)
                                          //  Referenced by: '<S236>/S-Function'

  int16_T SFunction_P2_i2;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S589>/S-Function'

  int16_T SFunction_P2_ao;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S593>/S-Function'

  int16_T SFunction_P2_c;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P3_a;              // Expression: int16(0)
                                          //  Referenced by: '<S238>/S-Function'

  int16_T SFunction_P2_lw;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P3_nr;             // Expression: int16(0)
                                          //  Referenced by: '<S240>/S-Function'

  int16_T SFunction_P2_ov;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P3_dj;             // Expression: int16(0)
                                          //  Referenced by: '<S242>/S-Function'

  int16_T SFunction_P2_a1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P3_b;              // Expression: int16(0)
                                          //  Referenced by: '<S244>/S-Function'

  int16_T SFunction_P2_k;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P3_ks;             // Expression: int16(0)
                                          //  Referenced by: '<S246>/S-Function'

  int16_T SFunction_P2_m;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P3_f;              // Expression: int16(0)
                                          //  Referenced by: '<S248>/S-Function'

  int16_T SFunction_P2_ix;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P3_e5;             // Expression: int16(0)
                                          //  Referenced by: '<S250>/S-Function'

  int16_T SFunction_P2_c2;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P3_d0;             // Expression: int16(0)
                                          //  Referenced by: '<S252>/S-Function'

  int16_T SFunction_P2_g;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S254>/S-Function'

  int16_T SFunction_P3_jt;             // Expression: int16(0)
                                          //  Referenced by: '<S254>/S-Function'

  int16_T SFunction_P2_ab;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S256>/S-Function'

  int16_T SFunction_P3_fo;             // Expression: int16(0)
                                          //  Referenced by: '<S256>/S-Function'

  int16_T SFunction_P2_e;              // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S595>/S-Function'

  int16_T SFunction_P2_et;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S258>/S-Function'

  int16_T SFunction_P3_pi;             // Expression: int16(0)
                                          //  Referenced by: '<S258>/S-Function'

  int16_T SFunction_P2_n3;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S260>/S-Function'

  int16_T SFunction_P3_h0;             // Expression: int16(0)
                                          //  Referenced by: '<S260>/S-Function'

  int16_T SFunction_P2_l0;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S262>/S-Function'

  int16_T SFunction_P3_ob;             // Expression: int16(0)
                                          //  Referenced by: '<S262>/S-Function'

  int16_T SFunction_P2_oi;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S264>/S-Function'

  int16_T SFunction_P3_dg;             // Expression: int16(0)
                                          //  Referenced by: '<S264>/S-Function'

  int16_T SFunction_P2_d;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S266>/S-Function'

  int16_T SFunction_P3_dh;             // Expression: int16(0)
                                          //  Referenced by: '<S266>/S-Function'

  int16_T SFunction_P2_mz;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S268>/S-Function'

  int16_T SFunction_P3_oi;             // Expression: int16(0)
                                          //  Referenced by: '<S268>/S-Function'

  int16_T SFunction_P2_ea;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S270>/S-Function'

  int16_T SFunction_P3_c;              // Expression: int16(0)
                                          //  Referenced by: '<S270>/S-Function'

  int16_T SFunction_P2_d1;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S272>/S-Function'

  int16_T SFunction_P3_o5;             // Expression: int16(0)
                                          //  Referenced by: '<S272>/S-Function'

  int16_T SFunction_P2_lf;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S274>/S-Function'

  int16_T SFunction_P3_i;              // Expression: int16(0)
                                          //  Referenced by: '<S274>/S-Function'

  int16_T SFunction_P2_mc;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S276>/S-Function'

  int16_T SFunction_P3_ho;             // Expression: int16(0)
                                          //  Referenced by: '<S276>/S-Function'

  int16_T SFunction_P2_f;              // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S278>/S-Function'

  int16_T SFunction_P3_hl;             // Expression: int16(0)
                                          //  Referenced by: '<S278>/S-Function'

  int16_T SFunction_P2_ni;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S280>/S-Function'

  int16_T SFunction_P3_ba;             // Expression: int16(0)
                                          //  Referenced by: '<S280>/S-Function'

  int16_T SFunction_P2_ag;             // Expression: int16(DATATYPE)
                                          //  Referenced by: '<S282>/S-Function'

  int16_T SFunction_P3_nl;             // Expression: int16(0)
                                          //  Referenced by: '<S282>/S-Function'

  int16_T SFunction_P2_m0;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S591>/S-Function'

  int16_T clk_id_Value;                // Computed Parameter: clk_id_Value
                                          //  Referenced by: '<S110>/clk_id'

  int16_T CLK1_P1;                     // Expression: int16(id)
                                          //  Referenced by: '<S110>/CLK1'

  int16_T SFunction_P2_cl;             // Expression: int16(DATA_TYPE)
                                          //  Referenced by: '<S597>/S-Function'

  uint16_T SFunction_P1[3];            // Computed Parameter: SFunction_P1
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P5_p;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P8;               // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P11;              // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P14[5];           // Computed Parameter: SFunction_P14
                                          //  Referenced by: '<S224>/S-Function'

  uint16_T SFunction_P1_o[3];          // Computed Parameter: SFunction_P1_o
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P5_c;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P8_d;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P11_a;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P14_n[5];         // Computed Parameter: SFunction_P14_n
                                          //  Referenced by: '<S226>/S-Function'

  uint16_T SFunction_P1_f[3];          // Computed Parameter: SFunction_P1_f
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P5_ik;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P8_e;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P11_g;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P14_l[5];         // Computed Parameter: SFunction_P14_l
                                          //  Referenced by: '<S228>/S-Function'

  uint16_T SFunction_P1_g[3];          // Computed Parameter: SFunction_P1_g
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P5_e;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P8_dm;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P11_l;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P14_b[5];         // Computed Parameter: SFunction_P14_b
                                          //  Referenced by: '<S230>/S-Function'

  uint16_T SFunction_P1_m[2];          // Computed Parameter: SFunction_P1_m
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P5_j;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P8_g;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P11_at;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P14_a[5];         // Computed Parameter: SFunction_P14_a
                                          //  Referenced by: '<S232>/S-Function'

  uint16_T SFunction_P1_i[3];          // Computed Parameter: SFunction_P1_i
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P5_cu;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P8_j;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P11_m;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P14_k[5];         // Computed Parameter: SFunction_P14_k
                                          //  Referenced by: '<S234>/S-Function'

  uint16_T SFunction_P1_c[3];          // Computed Parameter: SFunction_P1_c
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P5_p0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P8_d5;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P11_j;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P14_b3[5];        // Computed Parameter: SFunction_P14_b3
                                          //  Referenced by: '<S236>/S-Function'

  uint16_T SFunction_P1_ia[5];         // Computed Parameter: SFunction_P1_ia
                                          //  Referenced by: '<S589>/S-Function'

  uint16_T SFunction_P9;               // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S589>/S-Function'

  uint16_T SFunction_P11_ad;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S589>/S-Function'

  uint16_T SFunction_P14_kx;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S589>/S-Function'

  uint16_T SFunction_P15;              // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S589>/S-Function'

  uint16_T SFunction_P1_fw[5];         // Computed Parameter: SFunction_P1_fw
                                          //  Referenced by: '<S593>/S-Function'

  uint16_T SFunction_P9_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S593>/S-Function'

  uint16_T SFunction_P11_k;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S593>/S-Function'

  uint16_T SFunction_P14_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S593>/S-Function'

  uint16_T SFunction_P15_f;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S593>/S-Function'

  uint16_T SFunction_P1_e[5];          // Computed Parameter: SFunction_P1_e
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P5_ff;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P8_k;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P11_ki;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P14_au[5];        // Computed Parameter: SFunction_P14_au
                                          //  Referenced by: '<S238>/S-Function'

  uint16_T SFunction_P1_e5[5];         // Computed Parameter: SFunction_P1_e5
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P5_pf;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P8_f;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P11_kq;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P14_a3[5];        // Computed Parameter: SFunction_P14_a3
                                          //  Referenced by: '<S240>/S-Function'

  uint16_T SFunction_P1_p[4];          // Computed Parameter: SFunction_P1_p
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P5_b;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P8_jr;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P11_i;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P14_n3[5];        // Computed Parameter: SFunction_P14_n3
                                          //  Referenced by: '<S242>/S-Function'

  uint16_T SFunction_P1_d[3];          // Computed Parameter: SFunction_P1_d
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P5_hk;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P8_c;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P11_p;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P14_kn[5];        // Computed Parameter: SFunction_P14_kn
                                          //  Referenced by: '<S244>/S-Function'

  uint16_T SFunction_P1_p1[4];         // Computed Parameter: SFunction_P1_p1
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P5_k;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P8_o;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P11_n;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P14_ix[5];        // Computed Parameter: SFunction_P14_ix
                                          //  Referenced by: '<S246>/S-Function'

  uint16_T SFunction_P1_l[3];          // Computed Parameter: SFunction_P1_l
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P5_kp;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P8_de;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P11_pl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P14_l4[5];        // Computed Parameter: SFunction_P14_l4
                                          //  Referenced by: '<S248>/S-Function'

  uint16_T SFunction_P1_pv[6];         // Computed Parameter: SFunction_P1_pv
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P5_m;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P8_n;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P11_k4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P14_o[5];         // Computed Parameter: SFunction_P14_o
                                          //  Referenced by: '<S250>/S-Function'

  uint16_T SFunction_P1_lq[4];         // Computed Parameter: SFunction_P1_lq
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P5_a;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P8_kk;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P11_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P14_j[5];         // Computed Parameter: SFunction_P14_j
                                          //  Referenced by: '<S252>/S-Function'

  uint16_T SFunction_P1_fh[2];         // Computed Parameter: SFunction_P1_fh
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P5_g;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P8_p;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P11_plx;          // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P14_f[5];         // Computed Parameter: SFunction_P14_f
                                          //  Referenced by: '<S254>/S-Function'

  uint16_T SFunction_P1_e0[3];         // Computed Parameter: SFunction_P1_e0
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P5_ei;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P8_i;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P11_d;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P14_fk[5];        // Computed Parameter: SFunction_P14_fk
                                          //  Referenced by: '<S256>/S-Function'

  uint16_T SFunction_P1_h[6];          // Computed Parameter: SFunction_P1_h
                                          //  Referenced by: '<S595>/S-Function'

  uint16_T SFunction_P9_d;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S595>/S-Function'

  uint16_T SFunction_P11_jd;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S595>/S-Function'

  uint16_T SFunction_P14_e;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S595>/S-Function'

  uint16_T SFunction_P15_d;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S595>/S-Function'

  uint16_T SFunction_P1_gt[2];         // Computed Parameter: SFunction_P1_gt
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P5_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P8_eo;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P11_nr;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P14_kr[5];        // Computed Parameter: SFunction_P14_kr
                                          //  Referenced by: '<S258>/S-Function'

  uint16_T SFunction_P1_hq[2];         // Computed Parameter: SFunction_P1_hq
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P5_lv;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P8_m;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P11_a4;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P14_f0[5];        // Computed Parameter: SFunction_P14_f0
                                          //  Referenced by: '<S260>/S-Function'

  uint16_T SFunction_P1_io[2];         // Computed Parameter: SFunction_P1_io
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P5_nm;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P8_l;             // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P11_pk;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P14_g[5];         // Computed Parameter: SFunction_P14_g
                                          //  Referenced by: '<S262>/S-Function'

  uint16_T SFunction_P1_a[2];          // Computed Parameter: SFunction_P1_a
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P5_j2;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P8_eov;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P11_b;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P14_oz[5];        // Computed Parameter: SFunction_P14_oz
                                          //  Referenced by: '<S264>/S-Function'

  uint16_T SFunction_P1_hx[2];         // Computed Parameter: SFunction_P1_hx
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P5_eg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P8_kh;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P11_dc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P14_gz[5];        // Computed Parameter: SFunction_P14_gz
                                          //  Referenced by: '<S266>/S-Function'

  uint16_T SFunction_P1_c5[2];         // Computed Parameter: SFunction_P1_c5
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P5_jj;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P8_p3;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P11_m0;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P14_gzb[5];       // Computed Parameter: SFunction_P14_gzb
                                          //  Referenced by: '<S268>/S-Function'

  uint16_T SFunction_P1_h0[3];         // Computed Parameter: SFunction_P1_h0
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P5_g0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P8_n5;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P11_f;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P14_nl[5];        // Computed Parameter: SFunction_P14_nl
                                          //  Referenced by: '<S270>/S-Function'

  uint16_T SFunction_P1_li[3];         // Computed Parameter: SFunction_P1_li
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P5_o;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P8_fj;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P11_ar;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P14_ez[5];        // Computed Parameter: SFunction_P14_ez
                                          //  Referenced by: '<S272>/S-Function'

  uint16_T SFunction_P1_if[3];         // Computed Parameter: SFunction_P1_if
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P5_pg;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P8_fa;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P11_p3;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P14_m[5];         // Computed Parameter: SFunction_P14_m
                                          //  Referenced by: '<S274>/S-Function'

  uint16_T SFunction_P1_o2[3];         // Computed Parameter: SFunction_P1_o2
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P5_f0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P8_o2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P11_h;            // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P14_jj[5];        // Computed Parameter: SFunction_P14_jj
                                          //  Referenced by: '<S276>/S-Function'

  uint16_T SFunction_P1_j[3];          // Computed Parameter: SFunction_P1_j
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P5_ov;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P8_n2;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P11_mc;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P14_oa[5];        // Computed Parameter: SFunction_P14_oa
                                          //  Referenced by: '<S278>/S-Function'

  uint16_T SFunction_P1_fd[3];         // Computed Parameter: SFunction_P1_fd
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P5_l0;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P8_jf;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P11_pu;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P14_nc[5];        // Computed Parameter: SFunction_P14_nc
                                          //  Referenced by: '<S280>/S-Function'

  uint16_T SFunction_P1_ll[3];         // Computed Parameter: SFunction_P1_ll
                                          //  Referenced by: '<S282>/S-Function'

  uint16_T SFunction_P5_e4;            // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S282>/S-Function'

  uint16_T SFunction_P8_fw;            // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S282>/S-Function'

  uint16_T SFunction_P11_hl;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S282>/S-Function'

  uint16_T SFunction_P14_h[5];         // Computed Parameter: SFunction_P14_h
                                          //  Referenced by: '<S282>/S-Function'

  uint16_T SFunction_P1_md[6];         // Computed Parameter: SFunction_P1_md
                                          //  Referenced by: '<S591>/S-Function'

  uint16_T SFunction_P9_l;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S591>/S-Function'

  uint16_T SFunction_P11_atz;          // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S591>/S-Function'

  uint16_T SFunction_P14_ew;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S591>/S-Function'

  uint16_T SFunction_P15_a;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S591>/S-Function'

  uint16_T SFunction_P1_fdr;           // Expression: uint16(interrupt_pstsclr)
                                          //  Referenced by: '<S108>/S-Function'

  uint16_T SFunction_P4_i;           // Expression: uint16(private_adc_delay_ns)
                                        //  Referenced by: '<S108>/S-Function'

  uint16_T SFunction_P5_ci;            // Expression: uint16(highest_device_id)
                                          //  Referenced by: '<S108>/S-Function'

  uint16_T SFunction_P1_os[6];         // Computed Parameter: SFunction_P1_os
                                          //  Referenced by: '<S597>/S-Function'

  uint16_T SFunction_P9_h;             // Expression: uint16(CAN_MB_ID)
                                          //  Referenced by: '<S597>/S-Function'

  uint16_T SFunction_P11_ka;           // Expression: uint16(CAN_ADDRESS)
                                          //  Referenced by: '<S597>/S-Function'

  uint16_T SFunction_P14_hp;           // Expression: uint16(ETH_MB_ID)
                                          //  Referenced by: '<S597>/S-Function'

  uint16_T SFunction_P15_c;            // Expression: uint16(ETH_PORT)
                                          //  Referenced by: '<S597>/S-Function'

  boolean_T PWM_P10;                   // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S340>/PWM'

  boolean_T PWM_P11;                   // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S340>/PWM'

  boolean_T PWM_P12;                   // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S340>/PWM'

  boolean_T PWM_P10_o;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S342>/PWM'

  boolean_T PWM_P11_n;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S342>/PWM'

  boolean_T PWM_P12_f;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S342>/PWM'

  boolean_T PWM_P10_n;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S344>/PWM'

  boolean_T PWM_P11_e;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S344>/PWM'

  boolean_T PWM_P12_e;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S344>/PWM'

  boolean_T PWM_P10_c;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S346>/PWM'

  boolean_T PWM_P11_c;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S346>/PWM'

  boolean_T PWM_P12_g;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S346>/PWM'

  boolean_T PWM_P10_h;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S464>/PWM'

  boolean_T PWM_P11_k;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S464>/PWM'

  boolean_T PWM_P12_j;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S464>/PWM'

  boolean_T PWM_P10_oy;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S466>/PWM'

  boolean_T PWM_P11_i;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S466>/PWM'

  boolean_T PWM_P12_c;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S466>/PWM'

  boolean_T PWM_P10_n5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S468>/PWM'

  boolean_T PWM_P11_eu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S468>/PWM'

  boolean_T PWM_P12_p;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S468>/PWM'

  boolean_T PWM_P10_l;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S470>/PWM'

  boolean_T PWM_P11_iu;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S470>/PWM'

  boolean_T PWM_P12_n;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S470>/PWM'

  boolean_T PWM_P10_a;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P11_j;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P12_l;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S538>/PWM'

  boolean_T PWM_P10_nn;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P11_p;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P12_fg;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S540>/PWM'

  boolean_T PWM_P10_af;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S542>/PWM'

  boolean_T PWM_P11_l;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S542>/PWM'

  boolean_T PWM_P12_fb;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S542>/PWM'

  boolean_T PWM_P10_lx;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S544>/PWM'

  boolean_T PWM_P11_jx;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S544>/PWM'

  boolean_T PWM_P12_f3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S544>/PWM'

  boolean_T PWM_P10_b;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S550>/PWM'

  boolean_T PWM_P11_d;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S550>/PWM'

  boolean_T PWM_P12_h;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S550>/PWM'

  boolean_T PWM_P10_lz;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P11_kj;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P12_lc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S552>/PWM'

  boolean_T PWM_P10_l5;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P11_g;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P12_ca;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S554>/PWM'

  boolean_T PWM_P10_k;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P11_h;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P12_k;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S556>/PWM'

  boolean_T PWM_P10_ke;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S562>/PWM'

  boolean_T PWM_P11_b;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S562>/PWM'

  boolean_T PWM_P12_i;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S562>/PWM'

  boolean_T PWM_P10_hj;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S564>/PWM'

  boolean_T PWM_P11_ll;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S564>/PWM'

  boolean_T PWM_P12_o;                 // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S564>/PWM'

  boolean_T PWM_P10_ca;                // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S566>/PWM'

  boolean_T PWM_P11_dt;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S566>/PWM'

  boolean_T PWM_P12_kj;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S566>/PWM'

  boolean_T PWM_P10_p;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P11_en;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P12_o3;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S568>/PWM'

  boolean_T PWM_P10_m;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S581>/PWM'

  boolean_T PWM_P11_f;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S581>/PWM'

  boolean_T PWM_P12_cw;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S581>/PWM'

  boolean_T PWM_P10_g;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S583>/PWM'

  boolean_T PWM_P11_gz;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S583>/PWM'

  boolean_T PWM_P12_op;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S583>/PWM'

  boolean_T PWM_P10_f;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S585>/PWM'

  boolean_T PWM_P11_nl;                // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S585>/PWM'

  boolean_T PWM_P12_cc;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S585>/PWM'

  boolean_T PWM_P10_i;                 // Expression: boolean(dutyrealtime)
                                          //  Referenced by: '<S587>/PWM'

  boolean_T PWM_P11_m;                 // Expression: boolean(phaserealtime)
                                          //  Referenced by: '<S587>/PWM'

  boolean_T PWM_P12_k1;                // Expression: boolean(activaterealtime)
                                          //  Referenced by: '<S587>/PWM'

  boolean_T ADC_P5;                    // Expression: boolean(usehist)
                                          //  Referenced by: '<S101>/ADC'

  boolean_T ADC_P7;                    // Expression: boolean(useaverage)
                                          //  Referenced by: '<S101>/ADC'

  boolean_T ADC_P5_a;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S103>/ADC'

  boolean_T ADC_P7_n;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S103>/ADC'

  boolean_T ADC_P5_g;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S93>/ADC'

  boolean_T ADC_P7_k;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S93>/ADC'

  boolean_T ADC_P5_e;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S81>/ADC'

  boolean_T ADC_P7_f;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S81>/ADC'

  boolean_T ADC_P5_j;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S95>/ADC'

  boolean_T ADC_P7_i;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S95>/ADC'

  boolean_T ADC_P5_ag;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S97>/ADC'

  boolean_T ADC_P7_l;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S97>/ADC'

  boolean_T SFunction_P4_m;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P9_n;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P10_n;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P15_e;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S224>/S-Function'

  boolean_T SFunction_P4_e;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P9_i;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P10_c;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T SFunction_P15_g;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S226>/S-Function'

  boolean_T ADC_P5_l;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S89>/ADC'

  boolean_T ADC_P7_d;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S89>/ADC'

  boolean_T ADC_P5_ju;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S105>/ADC'

  boolean_T ADC_P7_h;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S105>/ADC'

  boolean_T ADC_P5_m;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S83>/ADC'

  boolean_T ADC_P7_p;                  // Expression: boolean(useaverage)
                                          //  Referenced by: '<S83>/ADC'

  boolean_T ADC_P5_av;                 // Expression: boolean(usehist)
                                          //  Referenced by: '<S91>/ADC'

  boolean_T ADC_P7_fr;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S91>/ADC'

  boolean_T ADC_P5_o;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S85>/ADC'

  boolean_T ADC_P7_hi;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S85>/ADC'

  boolean_T ADC_P5_n;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S87>/ADC'

  boolean_T ADC_P7_f0;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S87>/ADC'

  boolean_T SFunction_P4_f;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P9_c;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P10_a;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P15_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S228>/S-Function'

  boolean_T SFunction_P4_l;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P9_nb;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P10_j;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T SFunction_P15_m;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S230>/S-Function'

  boolean_T ADC_P5_f;                  // Expression: boolean(usehist)
                                          //  Referenced by: '<S99>/ADC'

  boolean_T ADC_P7_fs;                 // Expression: boolean(useaverage)
                                          //  Referenced by: '<S99>/ADC'

  boolean_T SFunction_P4_fn;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P9_cs;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P10_b1;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P15_b;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S232>/S-Function'

  boolean_T SFunction_P4_d;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P9_f;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P10_d;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P15_a0;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S234>/S-Function'

  boolean_T SFunction_P4_n;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P9_b;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P10_i;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P15_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S236>/S-Function'

  boolean_T SFunction_P8_o4;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S589>/S-Function'

  boolean_T SFunction_P12_fm;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S589>/S-Function'

  boolean_T SFunction_P13_l;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S589>/S-Function'

  boolean_T SFunction_P16;             // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S589>/S-Function'

  boolean_T SFunction_P8_i3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S593>/S-Function'

  boolean_T SFunction_P12_ls;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S593>/S-Function'

  boolean_T SFunction_P13_pl;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S593>/S-Function'

  boolean_T SFunction_P16_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S593>/S-Function'

  boolean_T SFunction_P4_im;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P9_a;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P10_mc;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P15_p;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S238>/S-Function'

  boolean_T SFunction_P4_a;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P9_dg;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P10_cn;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P15_ci;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S240>/S-Function'

  boolean_T SFunction_P4_kt;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P9_g;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P10_o;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P15_i;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S242>/S-Function'

  boolean_T SFunction_P4_fy;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P9_dz;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P10_lt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P15_hv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S244>/S-Function'

  boolean_T SFunction_P4_l3;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P9_lt;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P10_dk;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P15_pe;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S246>/S-Function'

  boolean_T SFunction_P4_b;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P9_nf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P10_g;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P15_dm;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S248>/S-Function'

  boolean_T SFunction_P4_kk;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P9_e;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P10_je;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P15_cq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S250>/S-Function'

  boolean_T SFunction_P4_hz;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P9_p;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P10_ap;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P15_af;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S252>/S-Function'

  boolean_T SFunction_P4_i0;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P9_ll;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P10_ju;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P15_pd;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S254>/S-Function'

  boolean_T SFunction_P4_kr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P9_pk;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P10_af;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P15_p1;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S256>/S-Function'

  boolean_T SFunction_P8_k5;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S595>/S-Function'

  boolean_T SFunction_P12_oe;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S595>/S-Function'

  boolean_T SFunction_P13_fc;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S595>/S-Function'

  boolean_T SFunction_P16_o;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S595>/S-Function'

  boolean_T SFunction_P4_g;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P9_dm;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P10_mq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P15_pdz;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S258>/S-Function'

  boolean_T SFunction_P4_hm;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P9_gw;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P10_j2;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P15_l;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S260>/S-Function'

  boolean_T SFunction_P4_p;            // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P9_pl;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P10_kt;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P15_ha;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S262>/S-Function'

  boolean_T SFunction_P4_if;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P9_at;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P10_be;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P15_p1d;         // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S264>/S-Function'

  boolean_T SFunction_P4_hg;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P9_d3;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P10_is;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P15_f5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S266>/S-Function'

  boolean_T SFunction_P4_hx;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S268>/S-Function'

  boolean_T SFunction_P9_fi;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S268>/S-Function'

  boolean_T SFunction_P10_dl;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S268>/S-Function'

  boolean_T SFunction_P15_l4;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S268>/S-Function'

  boolean_T SFunction_P4_po;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S270>/S-Function'

  boolean_T SFunction_P9_is;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S270>/S-Function'

  boolean_T SFunction_P10_p;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S270>/S-Function'

  boolean_T SFunction_P15_aq;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S270>/S-Function'

  boolean_T SFunction_P4_e2;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S272>/S-Function'

  boolean_T SFunction_P9_px;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S272>/S-Function'

  boolean_T SFunction_P10_mm;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S272>/S-Function'

  boolean_T SFunction_P15_dv;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S272>/S-Function'

  boolean_T SFunction_P4_fc;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S274>/S-Function'

  boolean_T SFunction_P9_j;            // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S274>/S-Function'

  boolean_T SFunction_P10_ks;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S274>/S-Function'

  boolean_T SFunction_P15_g2;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S274>/S-Function'

  boolean_T SFunction_P4_hg1;          // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S276>/S-Function'

  boolean_T SFunction_P9_gf;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S276>/S-Function'

  boolean_T SFunction_P10_f;           // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S276>/S-Function'

  boolean_T SFunction_P15_l5;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S276>/S-Function'

  boolean_T SFunction_P4_gj;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S278>/S-Function'

  boolean_T SFunction_P9_p5;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S278>/S-Function'

  boolean_T SFunction_P10_nj;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S278>/S-Function'

  boolean_T SFunction_P15_po;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S278>/S-Function'

  boolean_T SFunction_P4_fv;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S280>/S-Function'

  boolean_T SFunction_P9_bu;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S280>/S-Function'

  boolean_T SFunction_P10_nk;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S280>/S-Function'

  boolean_T SFunction_P15_hr;          // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S280>/S-Function'

  boolean_T SFunction_P4_hr;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S282>/S-Function'

  boolean_T SFunction_P9_ft;           // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S282>/S-Function'

  boolean_T SFunction_P10_kw;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S282>/S-Function'

  boolean_T SFunction_P15_n;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S282>/S-Function'

  boolean_T SFunction_P8_du;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S591>/S-Function'

  boolean_T SFunction_P12_cap;         // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S591>/S-Function'

  boolean_T SFunction_P13_od;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S591>/S-Function'

  boolean_T SFunction_P16_f;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S591>/S-Function'

  boolean_T CLK1_P3;                   // Expression: boolean(var_freq)
                                          //  Referenced by: '<S110>/CLK1'

  boolean_T SFunction_P8_ky;           // Expression: boolean(CAN_ENABLED)
                                          //  Referenced by: '<S597>/S-Function'

  boolean_T SFunction_P12_hu;          // Expression: boolean(CAN_BIG_ENDIAN)
                                          //  Referenced by: '<S597>/S-Function'

  boolean_T SFunction_P13_nq;          // Expression: boolean(ETH_ENABLED)
                                          //  Referenced by: '<S597>/S-Function'

  boolean_T SFunction_P16_h;           // Expression: boolean(ETH_BIG_ENDIAN)
                                          //  Referenced by: '<S597>/S-Function'

  int8_T Constant_Value;               // Computed Parameter: Constant_Value
                                          //  Referenced by: '<S195>/Constant'

  int8_T Constant2_Value_n;            // Computed Parameter: Constant2_Value_n
                                          //  Referenced by: '<S195>/Constant2'

  int8_T Constant3_Value;              // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<S195>/Constant3'

  int8_T Constant4_Value;              // Computed Parameter: Constant4_Value
                                          //  Referenced by: '<S195>/Constant4'

  int8_T Constant_Value_h;             // Computed Parameter: Constant_Value_h
                                          //  Referenced by: '<S498>/Constant'

  int8_T Constant2_Value_a;            // Computed Parameter: Constant2_Value_a
                                          //  Referenced by: '<S498>/Constant2'

  int8_T Constant3_Value_j;            // Computed Parameter: Constant3_Value_j
                                          //  Referenced by: '<S498>/Constant3'

  int8_T Constant4_Value_a;            // Computed Parameter: Constant4_Value_a
                                          //  Referenced by: '<S498>/Constant4'

  P_Subsystem1_imperix_ctrl_T Subsystem1_o;// '<S571>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay_a;// '<S571>/Subsystem - pi//2 delay' 
  P_Subsystem1_imperix_ctrl_T Subsystem1;// '<S350>/Subsystem1'
  P_Subsystempi2delay_imperix_c_T Subsystempi2delay;// '<S350>/Subsystem - pi//2 delay' 
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
//  Block '<S16>/Gain' : Unused code path elimination
//  Block '<S16>/Gain1' : Unused code path elimination
//  Block '<S16>/Sum11' : Unused code path elimination
//  Block '<S1>/Data Type Conversion9' : Unused code path elimination
//  Block '<S25>/Abs' : Unused code path elimination
//  Block '<S25>/Max of Elements' : Unused code path elimination
//  Block '<S25>/Mean' : Unused code path elimination
//  Block '<S25>/Sum' : Unused code path elimination
//  Block '<S25>/Switch' : Unused code path elimination
//  Block '<S63>/Gain6' : Unused code path elimination
//  Block '<S63>/Gain7' : Unused code path elimination
//  Block '<S63>/Sum4' : Unused code path elimination
//  Block '<S72>/is_max' : Unused code path elimination


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
//  '<S18>'  : 'imperix_ctrl/Closed_loop_control/Energy balance'
//  '<S19>'  : 'imperix_ctrl/Closed_loop_control/Flux PI1'
//  '<S20>'  : 'imperix_ctrl/Closed_loop_control/IM references'
//  '<S21>'  : 'imperix_ctrl/Closed_loop_control/Kalman Filter'
//  '<S22>'  : 'imperix_ctrl/Closed_loop_control/LICCs control'
//  '<S23>'  : 'imperix_ctrl/Closed_loop_control/LPF'
//  '<S24>'  : 'imperix_ctrl/Closed_loop_control/Modulation index'
//  '<S25>'  : 'imperix_ctrl/Closed_loop_control/NN CEC'
//  '<S26>'  : 'imperix_ctrl/Closed_loop_control/PID Controller1'
//  '<S27>'  : 'imperix_ctrl/Closed_loop_control/Probe'
//  '<S28>'  : 'imperix_ctrl/Closed_loop_control/Probe1'
//  '<S29>'  : 'imperix_ctrl/Closed_loop_control/Probe10'
//  '<S30>'  : 'imperix_ctrl/Closed_loop_control/Probe11'
//  '<S31>'  : 'imperix_ctrl/Closed_loop_control/Probe12'
//  '<S32>'  : 'imperix_ctrl/Closed_loop_control/Probe13'
//  '<S33>'  : 'imperix_ctrl/Closed_loop_control/Probe14'
//  '<S34>'  : 'imperix_ctrl/Closed_loop_control/Probe15'
//  '<S35>'  : 'imperix_ctrl/Closed_loop_control/Probe16'
//  '<S36>'  : 'imperix_ctrl/Closed_loop_control/Probe17'
//  '<S37>'  : 'imperix_ctrl/Closed_loop_control/Probe18'
//  '<S38>'  : 'imperix_ctrl/Closed_loop_control/Probe19'
//  '<S39>'  : 'imperix_ctrl/Closed_loop_control/Probe2'
//  '<S40>'  : 'imperix_ctrl/Closed_loop_control/Probe20'
//  '<S41>'  : 'imperix_ctrl/Closed_loop_control/Probe21'
//  '<S42>'  : 'imperix_ctrl/Closed_loop_control/Probe22'
//  '<S43>'  : 'imperix_ctrl/Closed_loop_control/Probe23'
//  '<S44>'  : 'imperix_ctrl/Closed_loop_control/Probe24'
//  '<S45>'  : 'imperix_ctrl/Closed_loop_control/Probe25'
//  '<S46>'  : 'imperix_ctrl/Closed_loop_control/Probe26'
//  '<S47>'  : 'imperix_ctrl/Closed_loop_control/Probe27'
//  '<S48>'  : 'imperix_ctrl/Closed_loop_control/Probe28'
//  '<S49>'  : 'imperix_ctrl/Closed_loop_control/Probe29'
//  '<S50>'  : 'imperix_ctrl/Closed_loop_control/Probe3'
//  '<S51>'  : 'imperix_ctrl/Closed_loop_control/Probe4'
//  '<S52>'  : 'imperix_ctrl/Closed_loop_control/Probe5'
//  '<S53>'  : 'imperix_ctrl/Closed_loop_control/Probe6'
//  '<S54>'  : 'imperix_ctrl/Closed_loop_control/Probe7'
//  '<S55>'  : 'imperix_ctrl/Closed_loop_control/Probe8'
//  '<S56>'  : 'imperix_ctrl/Closed_loop_control/Probe9'
//  '<S57>'  : 'imperix_ctrl/Closed_loop_control/Speed PI1'
//  '<S58>'  : 'imperix_ctrl/Closed_loop_control/Subsystem1'
//  '<S59>'  : 'imperix_ctrl/Closed_loop_control/Subsystem13'
//  '<S60>'  : 'imperix_ctrl/Closed_loop_control/Subsystem19'
//  '<S61>'  : 'imperix_ctrl/Closed_loop_control/Subsystem2'
//  '<S62>'  : 'imperix_ctrl/Closed_loop_control/Subsystem20'
//  '<S63>'  : 'imperix_ctrl/Closed_loop_control/Subsystem21'
//  '<S64>'  : 'imperix_ctrl/Closed_loop_control/Subsystem22'
//  '<S65>'  : 'imperix_ctrl/Closed_loop_control/Subsystem23'
//  '<S66>'  : 'imperix_ctrl/Closed_loop_control/Subsystem24'
//  '<S67>'  : 'imperix_ctrl/Closed_loop_control/Subsystem25'
//  '<S68>'  : 'imperix_ctrl/Closed_loop_control/Subsystem26'
//  '<S69>'  : 'imperix_ctrl/Closed_loop_control/Subsystem3'
//  '<S70>'  : 'imperix_ctrl/Closed_loop_control/Subsystem4'
//  '<S71>'  : 'imperix_ctrl/Closed_loop_control/Subsystem5'
//  '<S72>'  : 'imperix_ctrl/Closed_loop_control/Subsystem6'
//  '<S73>'  : 'imperix_ctrl/Closed_loop_control/Subsystem7'
//  '<S74>'  : 'imperix_ctrl/Closed_loop_control/Subsystem9'
//  '<S75>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter1'
//  '<S76>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter16'
//  '<S77>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter2'
//  '<S78>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter3'
//  '<S79>'  : 'imperix_ctrl/Closed_loop_control/Tunable parameter4'
//  '<S80>'  : 'imperix_ctrl/Closed_loop_control/ADC10/sub'
//  '<S81>'  : 'imperix_ctrl/Closed_loop_control/ADC10/sub/generation'
//  '<S82>'  : 'imperix_ctrl/Closed_loop_control/ADC11/sub'
//  '<S83>'  : 'imperix_ctrl/Closed_loop_control/ADC11/sub/generation'
//  '<S84>'  : 'imperix_ctrl/Closed_loop_control/ADC12/sub'
//  '<S85>'  : 'imperix_ctrl/Closed_loop_control/ADC12/sub/generation'
//  '<S86>'  : 'imperix_ctrl/Closed_loop_control/ADC13/sub'
//  '<S87>'  : 'imperix_ctrl/Closed_loop_control/ADC13/sub/generation'
//  '<S88>'  : 'imperix_ctrl/Closed_loop_control/ADC14/sub'
//  '<S89>'  : 'imperix_ctrl/Closed_loop_control/ADC14/sub/generation'
//  '<S90>'  : 'imperix_ctrl/Closed_loop_control/ADC15/sub'
//  '<S91>'  : 'imperix_ctrl/Closed_loop_control/ADC15/sub/generation'
//  '<S92>'  : 'imperix_ctrl/Closed_loop_control/ADC16/sub'
//  '<S93>'  : 'imperix_ctrl/Closed_loop_control/ADC16/sub/generation'
//  '<S94>'  : 'imperix_ctrl/Closed_loop_control/ADC17/sub'
//  '<S95>'  : 'imperix_ctrl/Closed_loop_control/ADC17/sub/generation'
//  '<S96>'  : 'imperix_ctrl/Closed_loop_control/ADC18/sub'
//  '<S97>'  : 'imperix_ctrl/Closed_loop_control/ADC18/sub/generation'
//  '<S98>'  : 'imperix_ctrl/Closed_loop_control/ADC20/sub'
//  '<S99>'  : 'imperix_ctrl/Closed_loop_control/ADC20/sub/generation'
//  '<S100>' : 'imperix_ctrl/Closed_loop_control/ADC6/sub'
//  '<S101>' : 'imperix_ctrl/Closed_loop_control/ADC6/sub/generation'
//  '<S102>' : 'imperix_ctrl/Closed_loop_control/ADC7/sub'
//  '<S103>' : 'imperix_ctrl/Closed_loop_control/ADC7/sub/generation'
//  '<S104>' : 'imperix_ctrl/Closed_loop_control/ADC9/sub'
//  '<S105>' : 'imperix_ctrl/Closed_loop_control/ADC9/sub/generation'
//  '<S106>' : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock'
//  '<S107>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0'
//  '<S108>' : 'imperix_ctrl/Closed_loop_control/Configuration/Sampling clock/generation'
//  '<S109>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub'
//  '<S110>' : 'imperix_ctrl/Closed_loop_control/Configuration/clk0/sub/generation'
//  '<S111>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Anti-windup'
//  '<S112>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/D Gain'
//  '<S113>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/External Derivative'
//  '<S114>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Filter'
//  '<S115>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Filter ICs'
//  '<S116>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/I Gain'
//  '<S117>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Ideal P Gain'
//  '<S118>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Ideal P Gain Fdbk'
//  '<S119>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Integrator'
//  '<S120>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Integrator ICs'
//  '<S121>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/N Copy'
//  '<S122>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/N Gain'
//  '<S123>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/P Copy'
//  '<S124>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Parallel P Gain'
//  '<S125>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Reset Signal'
//  '<S126>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Saturation'
//  '<S127>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Saturation Fdbk'
//  '<S128>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Sum'
//  '<S129>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Sum Fdbk'
//  '<S130>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Tracking Mode'
//  '<S131>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Tracking Mode Sum'
//  '<S132>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Tsamp - Integral'
//  '<S133>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Tsamp - Ngain'
//  '<S134>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/postSat Signal'
//  '<S135>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/preInt Signal'
//  '<S136>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/preSat Signal'
//  '<S137>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Anti-windup/Back Calculation'
//  '<S138>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/D Gain/Disabled'
//  '<S139>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/External Derivative/Disabled'
//  '<S140>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Filter/Disabled'
//  '<S141>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Filter ICs/Disabled'
//  '<S142>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/I Gain/Internal Parameters'
//  '<S143>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Ideal P Gain/Passthrough'
//  '<S144>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Ideal P Gain Fdbk/Disabled'
//  '<S145>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Integrator/Discrete'
//  '<S146>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Integrator ICs/Internal IC'
//  '<S147>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/N Copy/Disabled wSignal Specification'
//  '<S148>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/N Gain/Disabled'
//  '<S149>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/P Copy/Disabled'
//  '<S150>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Parallel P Gain/Internal Parameters'
//  '<S151>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Reset Signal/Disabled'
//  '<S152>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Saturation/Enabled'
//  '<S153>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Saturation Fdbk/Disabled'
//  '<S154>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Sum/Sum_PI'
//  '<S155>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Sum Fdbk/Disabled'
//  '<S156>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Tracking Mode/Disabled'
//  '<S157>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Tracking Mode Sum/Passthrough'
//  '<S158>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Tsamp - Integral/TsSignalSpecification'
//  '<S159>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/Tsamp - Ngain/Passthrough'
//  '<S160>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/postSat Signal/Forward_Path'
//  '<S161>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/preInt Signal/Internal PreInt'
//  '<S162>' : 'imperix_ctrl/Closed_loop_control/Flux PI1/preSat Signal/Forward_Path'
//  '<S163>' : 'imperix_ctrl/Closed_loop_control/NN CEC/FFNN'
//  '<S164>' : 'imperix_ctrl/Closed_loop_control/NN CEC/Input format'
//  '<S165>' : 'imperix_ctrl/Closed_loop_control/NN CEC/LPF'
//  '<S166>' : 'imperix_ctrl/Closed_loop_control/NN CEC/Saturation'
//  '<S167>' : 'imperix_ctrl/Closed_loop_control/NN CEC/White noise'
//  '<S168>' : 'imperix_ctrl/Closed_loop_control/NN CEC/FFNN/MLFB'
//  '<S169>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup'
//  '<S170>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain'
//  '<S171>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative'
//  '<S172>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter'
//  '<S173>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs'
//  '<S174>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain'
//  '<S175>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain'
//  '<S176>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk'
//  '<S177>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator'
//  '<S178>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs'
//  '<S179>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy'
//  '<S180>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain'
//  '<S181>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy'
//  '<S182>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain'
//  '<S183>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal'
//  '<S184>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation'
//  '<S185>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk'
//  '<S186>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum'
//  '<S187>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk'
//  '<S188>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode'
//  '<S189>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum'
//  '<S190>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral'
//  '<S191>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain'
//  '<S192>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal'
//  '<S193>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal'
//  '<S194>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal'
//  '<S195>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel'
//  '<S196>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S197>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S198>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/D Gain/Disabled'
//  '<S199>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/External Derivative/Disabled'
//  '<S200>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter/Disabled'
//  '<S201>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Filter ICs/Disabled'
//  '<S202>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/I Gain/Internal Parameters'
//  '<S203>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain/Passthrough'
//  '<S204>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S205>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator/Discrete'
//  '<S206>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Integrator ICs/Internal IC'
//  '<S207>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S208>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/N Gain/Disabled'
//  '<S209>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/P Copy/Disabled'
//  '<S210>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S211>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Reset Signal/Disabled'
//  '<S212>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation/Enabled'
//  '<S213>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Saturation Fdbk/Disabled'
//  '<S214>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum/Sum_PI'
//  '<S215>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Sum Fdbk/Disabled'
//  '<S216>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode/Disabled'
//  '<S217>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S218>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S219>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S220>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/postSat Signal/Forward_Path'
//  '<S221>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preInt Signal/Internal PreInt'
//  '<S222>' : 'imperix_ctrl/Closed_loop_control/PID Controller1/preSat Signal/Forward_Path'
//  '<S223>' : 'imperix_ctrl/Closed_loop_control/Probe/sub'
//  '<S224>' : 'imperix_ctrl/Closed_loop_control/Probe/sub/generation'
//  '<S225>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub'
//  '<S226>' : 'imperix_ctrl/Closed_loop_control/Probe1/sub/generation'
//  '<S227>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub'
//  '<S228>' : 'imperix_ctrl/Closed_loop_control/Probe10/sub/generation'
//  '<S229>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub'
//  '<S230>' : 'imperix_ctrl/Closed_loop_control/Probe11/sub/generation'
//  '<S231>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub'
//  '<S232>' : 'imperix_ctrl/Closed_loop_control/Probe12/sub/generation'
//  '<S233>' : 'imperix_ctrl/Closed_loop_control/Probe13/sub'
//  '<S234>' : 'imperix_ctrl/Closed_loop_control/Probe13/sub/generation'
//  '<S235>' : 'imperix_ctrl/Closed_loop_control/Probe14/sub'
//  '<S236>' : 'imperix_ctrl/Closed_loop_control/Probe14/sub/generation'
//  '<S237>' : 'imperix_ctrl/Closed_loop_control/Probe15/sub'
//  '<S238>' : 'imperix_ctrl/Closed_loop_control/Probe15/sub/generation'
//  '<S239>' : 'imperix_ctrl/Closed_loop_control/Probe16/sub'
//  '<S240>' : 'imperix_ctrl/Closed_loop_control/Probe16/sub/generation'
//  '<S241>' : 'imperix_ctrl/Closed_loop_control/Probe17/sub'
//  '<S242>' : 'imperix_ctrl/Closed_loop_control/Probe17/sub/generation'
//  '<S243>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub'
//  '<S244>' : 'imperix_ctrl/Closed_loop_control/Probe18/sub/generation'
//  '<S245>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub'
//  '<S246>' : 'imperix_ctrl/Closed_loop_control/Probe19/sub/generation'
//  '<S247>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub'
//  '<S248>' : 'imperix_ctrl/Closed_loop_control/Probe2/sub/generation'
//  '<S249>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub'
//  '<S250>' : 'imperix_ctrl/Closed_loop_control/Probe20/sub/generation'
//  '<S251>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub'
//  '<S252>' : 'imperix_ctrl/Closed_loop_control/Probe21/sub/generation'
//  '<S253>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub'
//  '<S254>' : 'imperix_ctrl/Closed_loop_control/Probe22/sub/generation'
//  '<S255>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub'
//  '<S256>' : 'imperix_ctrl/Closed_loop_control/Probe23/sub/generation'
//  '<S257>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub'
//  '<S258>' : 'imperix_ctrl/Closed_loop_control/Probe24/sub/generation'
//  '<S259>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub'
//  '<S260>' : 'imperix_ctrl/Closed_loop_control/Probe25/sub/generation'
//  '<S261>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub'
//  '<S262>' : 'imperix_ctrl/Closed_loop_control/Probe26/sub/generation'
//  '<S263>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub'
//  '<S264>' : 'imperix_ctrl/Closed_loop_control/Probe27/sub/generation'
//  '<S265>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub'
//  '<S266>' : 'imperix_ctrl/Closed_loop_control/Probe28/sub/generation'
//  '<S267>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub'
//  '<S268>' : 'imperix_ctrl/Closed_loop_control/Probe29/sub/generation'
//  '<S269>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub'
//  '<S270>' : 'imperix_ctrl/Closed_loop_control/Probe3/sub/generation'
//  '<S271>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub'
//  '<S272>' : 'imperix_ctrl/Closed_loop_control/Probe4/sub/generation'
//  '<S273>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub'
//  '<S274>' : 'imperix_ctrl/Closed_loop_control/Probe5/sub/generation'
//  '<S275>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub'
//  '<S276>' : 'imperix_ctrl/Closed_loop_control/Probe6/sub/generation'
//  '<S277>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub'
//  '<S278>' : 'imperix_ctrl/Closed_loop_control/Probe7/sub/generation'
//  '<S279>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub'
//  '<S280>' : 'imperix_ctrl/Closed_loop_control/Probe8/sub/generation'
//  '<S281>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub'
//  '<S282>' : 'imperix_ctrl/Closed_loop_control/Probe9/sub/generation'
//  '<S283>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Anti-windup'
//  '<S284>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/D Gain'
//  '<S285>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/External Derivative'
//  '<S286>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Filter'
//  '<S287>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Filter ICs'
//  '<S288>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/I Gain'
//  '<S289>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Ideal P Gain'
//  '<S290>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Ideal P Gain Fdbk'
//  '<S291>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Integrator'
//  '<S292>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Integrator ICs'
//  '<S293>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/N Copy'
//  '<S294>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/N Gain'
//  '<S295>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/P Copy'
//  '<S296>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Parallel P Gain'
//  '<S297>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Reset Signal'
//  '<S298>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Saturation'
//  '<S299>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Saturation Fdbk'
//  '<S300>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Sum'
//  '<S301>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Sum Fdbk'
//  '<S302>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Tracking Mode'
//  '<S303>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Tracking Mode Sum'
//  '<S304>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Tsamp - Integral'
//  '<S305>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Tsamp - Ngain'
//  '<S306>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/postSat Signal'
//  '<S307>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/preInt Signal'
//  '<S308>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/preSat Signal'
//  '<S309>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Anti-windup/Back Calculation'
//  '<S310>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/D Gain/Disabled'
//  '<S311>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/External Derivative/Disabled'
//  '<S312>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Filter/Disabled'
//  '<S313>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Filter ICs/Disabled'
//  '<S314>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/I Gain/Internal Parameters'
//  '<S315>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Ideal P Gain/Passthrough'
//  '<S316>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Ideal P Gain Fdbk/Disabled'
//  '<S317>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Integrator/Discrete'
//  '<S318>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Integrator ICs/Internal IC'
//  '<S319>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/N Copy/Disabled wSignal Specification'
//  '<S320>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/N Gain/Disabled'
//  '<S321>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/P Copy/Disabled'
//  '<S322>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Parallel P Gain/Internal Parameters'
//  '<S323>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Reset Signal/Disabled'
//  '<S324>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Saturation/Enabled'
//  '<S325>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Saturation Fdbk/Disabled'
//  '<S326>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Sum/Sum_PI'
//  '<S327>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Sum Fdbk/Disabled'
//  '<S328>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Tracking Mode/Disabled'
//  '<S329>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Tracking Mode Sum/Passthrough'
//  '<S330>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Tsamp - Integral/TsSignalSpecification'
//  '<S331>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/Tsamp - Ngain/Passthrough'
//  '<S332>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/postSat Signal/Forward_Path'
//  '<S333>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/preInt Signal/Internal PreInt'
//  '<S334>' : 'imperix_ctrl/Closed_loop_control/Speed PI1/preSat Signal/Forward_Path'
//  '<S335>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB'
//  '<S336>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1'
//  '<S337>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2'
//  '<S338>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3'
//  '<S339>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub'
//  '<S340>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB/sub/generation'
//  '<S341>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub'
//  '<S342>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB1/sub/generation'
//  '<S343>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub'
//  '<S344>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB2/sub/generation'
//  '<S345>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub'
//  '<S346>' : 'imperix_ctrl/Closed_loop_control/Subsystem1/PWM_CB3/sub/generation'
//  '<S347>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/Alpha-Beta-Zero to abc'
//  '<S348>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d'
//  '<S349>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q '
//  '<S350>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero'
//  '<S351>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup'
//  '<S352>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain'
//  '<S353>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative'
//  '<S354>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter'
//  '<S355>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs'
//  '<S356>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain'
//  '<S357>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain'
//  '<S358>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk'
//  '<S359>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator'
//  '<S360>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs'
//  '<S361>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy'
//  '<S362>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain'
//  '<S363>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy'
//  '<S364>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain'
//  '<S365>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal'
//  '<S366>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation'
//  '<S367>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk'
//  '<S368>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum'
//  '<S369>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk'
//  '<S370>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode'
//  '<S371>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum'
//  '<S372>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral'
//  '<S373>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain'
//  '<S374>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal'
//  '<S375>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal'
//  '<S376>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal'
//  '<S377>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Anti-windup/Back Calculation'
//  '<S378>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/D Gain/Disabled'
//  '<S379>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/External Derivative/Disabled'
//  '<S380>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter/Disabled'
//  '<S381>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Filter ICs/Disabled'
//  '<S382>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/I Gain/Internal Parameters'
//  '<S383>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain/Passthrough'
//  '<S384>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Ideal P Gain Fdbk/Disabled'
//  '<S385>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator/Discrete'
//  '<S386>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Integrator ICs/Internal IC'
//  '<S387>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Copy/Disabled wSignal Specification'
//  '<S388>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/N Gain/Disabled'
//  '<S389>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/P Copy/Disabled'
//  '<S390>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Parallel P Gain/Internal Parameters'
//  '<S391>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Reset Signal/Disabled'
//  '<S392>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation/Enabled'
//  '<S393>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Saturation Fdbk/Disabled'
//  '<S394>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum/Sum_PI'
//  '<S395>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Sum Fdbk/Disabled'
//  '<S396>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode/Disabled'
//  '<S397>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tracking Mode Sum/Passthrough'
//  '<S398>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Integral/TsSignalSpecification'
//  '<S399>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/Tsamp - Ngain/Passthrough'
//  '<S400>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/postSat Signal/Forward_Path'
//  '<S401>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preInt Signal/Internal PreInt'
//  '<S402>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI d/preSat Signal/Forward_Path'
//  '<S403>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup'
//  '<S404>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain'
//  '<S405>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative'
//  '<S406>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter'
//  '<S407>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs'
//  '<S408>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain'
//  '<S409>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain'
//  '<S410>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk'
//  '<S411>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator'
//  '<S412>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs'
//  '<S413>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy'
//  '<S414>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain'
//  '<S415>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy'
//  '<S416>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain'
//  '<S417>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal'
//  '<S418>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation'
//  '<S419>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk'
//  '<S420>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum'
//  '<S421>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk'
//  '<S422>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode'
//  '<S423>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum'
//  '<S424>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral'
//  '<S425>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain'
//  '<S426>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal'
//  '<S427>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal'
//  '<S428>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal'
//  '<S429>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Anti-windup/Back Calculation'
//  '<S430>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /D Gain/Disabled'
//  '<S431>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /External Derivative/Disabled'
//  '<S432>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter/Disabled'
//  '<S433>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Filter ICs/Disabled'
//  '<S434>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /I Gain/Internal Parameters'
//  '<S435>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain/Passthrough'
//  '<S436>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Ideal P Gain Fdbk/Disabled'
//  '<S437>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator/Discrete'
//  '<S438>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Integrator ICs/Internal IC'
//  '<S439>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Copy/Disabled wSignal Specification'
//  '<S440>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /N Gain/Disabled'
//  '<S441>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /P Copy/Disabled'
//  '<S442>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Parallel P Gain/Internal Parameters'
//  '<S443>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Reset Signal/Disabled'
//  '<S444>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation/Enabled'
//  '<S445>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Saturation Fdbk/Disabled'
//  '<S446>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum/Sum_PI'
//  '<S447>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Sum Fdbk/Disabled'
//  '<S448>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode/Disabled'
//  '<S449>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tracking Mode Sum/Passthrough'
//  '<S450>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Integral/TsSignalSpecification'
//  '<S451>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /Tsamp - Ngain/Passthrough'
//  '<S452>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /postSat Signal/Forward_Path'
//  '<S453>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preInt Signal/Internal PreInt'
//  '<S454>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/MCC PI q /preSat Signal/Forward_Path'
//  '<S455>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S456>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S457>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S458>' : 'imperix_ctrl/Closed_loop_control/Subsystem19/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S459>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB'
//  '<S460>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1'
//  '<S461>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2'
//  '<S462>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3'
//  '<S463>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub'
//  '<S464>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB/sub/generation'
//  '<S465>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub'
//  '<S466>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB1/sub/generation'
//  '<S467>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub'
//  '<S468>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB2/sub/generation'
//  '<S469>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub'
//  '<S470>' : 'imperix_ctrl/Closed_loop_control/Subsystem2/PWM_CB3/sub/generation'
//  '<S471>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI'
//  '<S472>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup'
//  '<S473>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain'
//  '<S474>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative'
//  '<S475>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter'
//  '<S476>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs'
//  '<S477>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain'
//  '<S478>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain'
//  '<S479>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk'
//  '<S480>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator'
//  '<S481>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs'
//  '<S482>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy'
//  '<S483>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain'
//  '<S484>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy'
//  '<S485>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain'
//  '<S486>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal'
//  '<S487>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation'
//  '<S488>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk'
//  '<S489>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum'
//  '<S490>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk'
//  '<S491>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode'
//  '<S492>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum'
//  '<S493>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral'
//  '<S494>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain'
//  '<S495>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal'
//  '<S496>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal'
//  '<S497>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal'
//  '<S498>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel'
//  '<S499>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S500>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S501>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/D Gain/Disabled'
//  '<S502>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/External Derivative/Disabled'
//  '<S503>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter/Disabled'
//  '<S504>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Filter ICs/Disabled'
//  '<S505>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/I Gain/Internal Parameters'
//  '<S506>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain/Passthrough'
//  '<S507>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Ideal P Gain Fdbk/Disabled'
//  '<S508>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator/Discrete'
//  '<S509>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Integrator ICs/Internal IC'
//  '<S510>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Copy/Disabled wSignal Specification'
//  '<S511>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/N Gain/Disabled'
//  '<S512>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/P Copy/Disabled'
//  '<S513>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Parallel P Gain/Internal Parameters'
//  '<S514>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Reset Signal/Disabled'
//  '<S515>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation/Enabled'
//  '<S516>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Saturation Fdbk/Disabled'
//  '<S517>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum/Sum_PI'
//  '<S518>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Sum Fdbk/Disabled'
//  '<S519>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode/Disabled'
//  '<S520>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tracking Mode Sum/Passthrough'
//  '<S521>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Integral/TsSignalSpecification'
//  '<S522>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/Tsamp - Ngain/Passthrough'
//  '<S523>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/postSat Signal/Forward_Path'
//  '<S524>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preInt Signal/Internal PreInt'
//  '<S525>' : 'imperix_ctrl/Closed_loop_control/Subsystem23/PCC PI/preSat Signal/Forward_Path'
//  '<S526>' : 'imperix_ctrl/Closed_loop_control/Subsystem25/MATLAB Function'
//  '<S527>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0'
//  '<S528>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/abc to Alpha-Beta-Zero'
//  '<S529>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant'
//  '<S530>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Compare To Constant1'
//  '<S531>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
//  '<S532>' : 'imperix_ctrl/Closed_loop_control/Subsystem26/Alpha-Beta-Zero to dq0/Subsystem1'
//  '<S533>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB'
//  '<S534>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1'
//  '<S535>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2'
//  '<S536>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3'
//  '<S537>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub'
//  '<S538>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB/sub/generation'
//  '<S539>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub'
//  '<S540>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB1/sub/generation'
//  '<S541>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub'
//  '<S542>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB2/sub/generation'
//  '<S543>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub'
//  '<S544>' : 'imperix_ctrl/Closed_loop_control/Subsystem3/PWM_CB3/sub/generation'
//  '<S545>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB'
//  '<S546>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1'
//  '<S547>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2'
//  '<S548>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3'
//  '<S549>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub'
//  '<S550>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB/sub/generation'
//  '<S551>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub'
//  '<S552>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB1/sub/generation'
//  '<S553>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub'
//  '<S554>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB2/sub/generation'
//  '<S555>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub'
//  '<S556>' : 'imperix_ctrl/Closed_loop_control/Subsystem4/PWM_CB3/sub/generation'
//  '<S557>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB'
//  '<S558>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1'
//  '<S559>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2'
//  '<S560>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3'
//  '<S561>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub'
//  '<S562>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB/sub/generation'
//  '<S563>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub'
//  '<S564>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB1/sub/generation'
//  '<S565>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub'
//  '<S566>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB2/sub/generation'
//  '<S567>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub'
//  '<S568>' : 'imperix_ctrl/Closed_loop_control/Subsystem5/PWM_CB3/sub/generation'
//  '<S569>' : 'imperix_ctrl/Closed_loop_control/Subsystem6/MATLAB Function'
//  '<S570>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/Alpha-Beta-Zero to abc'
//  '<S571>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero'
//  '<S572>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant'
//  '<S573>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Compare To Constant1'
//  '<S574>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
//  '<S575>' : 'imperix_ctrl/Closed_loop_control/Subsystem7/dq0 to Alpha-Beta-Zero/Subsystem1'
//  '<S576>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB'
//  '<S577>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1'
//  '<S578>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2'
//  '<S579>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3'
//  '<S580>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub'
//  '<S581>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB/sub/generation'
//  '<S582>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub'
//  '<S583>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB1/sub/generation'
//  '<S584>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub'
//  '<S585>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB2/sub/generation'
//  '<S586>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub'
//  '<S587>' : 'imperix_ctrl/Closed_loop_control/Subsystem9/PWM_CB3/sub/generation'
//  '<S588>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub'
//  '<S589>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter1/sub/generation'
//  '<S590>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub'
//  '<S591>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter16/sub/generation'
//  '<S592>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub'
//  '<S593>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter2/sub/generation'
//  '<S594>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3/sub'
//  '<S595>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter3/sub/generation'
//  '<S596>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter4/sub'
//  '<S597>' : 'imperix_ctrl/Closed_loop_control/Tunable parameter4/sub/generation'

#endif                                 // imperix_ctrl_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
