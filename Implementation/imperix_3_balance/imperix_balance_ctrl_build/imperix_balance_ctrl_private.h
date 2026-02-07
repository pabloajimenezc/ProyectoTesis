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
// Model version                  : 19.123
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Fri Feb  6 16:32:39 2026
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

#endif                                 // imperix_balance_ctrl_private_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
