//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_control_private.h
//
// Code generated for Simulink model 'imperix_control'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.14
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Dec 15 16:19:02 2025
//
#ifndef imperix_control_private_h_
#define imperix_control_private_h_
#include "rtwtypes.h"
#include "imperix_control.h"
#include "imperix_control_types.h"

int Can_Write(unsigned int mailbox_id, void* data, int size);
int Eth_Write(unsigned int mailbox_id, void* data, int size);

#include "allIncludes.h"

tUserSafe SimulinkInterrupt(void);
void ConfigureReadTriggerDelayInNs(int);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern void microKernel5135854460348519526(int32_T K, const real32_T *A, int32_T
  LDA, const real32_T *B, real32_T *C);
extern void microKernel5725261749167964963(int32_T K, const real32_T *A, int32_T
  LDA, const real32_T *B, real32_T *C);
extern void macroKernel15460595535440184007(int32_T M, int32_T K, int32_T N,
  const real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C,
  int32_T LDC);
extern void matrixMultiply15460595535440184007(int32_T M, int32_T K, int32_T N,
  int32_T blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A,
  const real32_T *B, real32_T *C);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);
extern int32_T div_s32_floor(int32_T numerator, int32_T denominator);
extern void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_j, P_Subsystempi2delay_imperix_c_T *localP);
extern void imperix_c_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq,
  real_T rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_j);
extern void imperix_con_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_k, P_Subsystem1_imperix_control_T *localP);
extern void imperix_control_Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_k);

#endif                                 // imperix_control_private_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
