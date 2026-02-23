//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_balance_ctrl_private.h
//
// Code generated for Simulink model 'imperix_balance_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.134
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Feb 23 19:32:48 2026
//
#ifndef imperix_balance_ctrl_private_h_
#define imperix_balance_ctrl_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "imperix_balance_ctrl.h"
#include "imperix_balance_ctrl_types.h"

int Can_Write(unsigned int mailbox_id, void* data, int size);
int Eth_Write(unsigned int mailbox_id, void* data, int size);

#include "allIncludes.h"

tUserSafe SimulinkInterrupt(void);
void ConfigureReadTriggerDelayInNs(int);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern void microKernel4214587099176165584(int32_T K, const real32_T *A, int32_T
  LDA, const real32_T *B, real32_T *C);
extern void microKernel8856970523144151557(int32_T K, const real32_T *A, int32_T
  LDA, const real32_T *B, real32_T *C);
extern void macroKernel1193919421899457179(int32_T M, int32_T K, int32_T N,
  const real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C,
  int32_T LDC);
extern void matrixMultiply1193919421899457179(int32_T M, int32_T K, int32_T N,
  int32_T blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A,
  const real32_T *B, real32_T *C);
extern int32_T div_s32_floor(int32_T numerator, int32_T denominator);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);
extern void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_g, P_Subsystempi2delay_imperix_b_T *localP);
extern void imperix_b_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq,
  real_T rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_g);
extern void imperix_bal_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_n, P_Subsystem1_imperix_balance__T *localP);
extern void imperix_balance__Subsystem1(uint8_T rtu_Enable, real_T rtu_dq,
  real_T rtu_dq_g, real_T rtu_wt, real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_n);
extern void imperix__MovingAverage_Init(DW_MovingAverage_imperix_bala_T *localDW);
extern void imperix_MovingAverage_Start(DW_MovingAverage_imperix_bala_T *localDW);
extern void imperix_balan_MovingAverage(real_T rtu_0,
  B_MovingAverage_imperix_balan_T *localB, DW_MovingAverage_imperix_bala_T
  *localDW);
extern void imperix__MovingAverage_Term(DW_MovingAverage_imperix_bala_T *localDW);

#endif                                 // imperix_balance_ctrl_private_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
