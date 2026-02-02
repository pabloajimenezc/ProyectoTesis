//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_ctrl_private.h
//
// Code generated for Simulink model 'imperix_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.83
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Feb  2 18:35:10 2026
//
#ifndef imperix_ctrl_private_h_
#define imperix_ctrl_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "imperix_ctrl.h"
#include "imperix_ctrl_types.h"

int Can_Write(unsigned int mailbox_id, void* data, int size);
int Eth_Write(unsigned int mailbox_id, void* data, int size);

#include "allIncludes.h"

tUserSafe SimulinkInterrupt(void);
void ConfigureReadTriggerDelayInNs(int);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern int32_T div_s32_floor(int32_T numerator, int32_T denominator);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);
extern void imperix__MovingAverage_Init(DW_MovingAverage_imperix_ctrl_T *localDW);
extern void imperix_MovingAverage_Start(DW_MovingAverage_imperix_ctrl_T *localDW);
extern void imperix_ctrl_MovingAverage(const real_T rtu_0[6],
  B_MovingAverage_imperix_ctrl_T *localB, DW_MovingAverage_imperix_ctrl_T
  *localDW);
extern void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_e, P_Subsystempi2delay_imperix_c_T *localP);
extern void imperix_c_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq,
  real_T rtu_dq_k, real_T rtu_wt, real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_e);
extern void imperix_ctr_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_b, P_Subsystem1_imperix_ctrl_T *localP);
extern void imperix_ctrl_Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_b);
extern void imperix__MovingAverage_Term(DW_MovingAverage_imperix_ctrl_T *localDW);

#endif                                 // imperix_ctrl_private_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
