//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_M2C_NN_control_private.h
//
// Code generated for Simulink model 'imperix_M2C_NN_control'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 18.8
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Tue Jun 17 03:03:24 2025
//
#ifndef imperix_M2C_NN_control_private_h_
#define imperix_M2C_NN_control_private_h_
#include "rtwtypes.h"
#include "imperix_M2C_NN_control.h"
#include "imperix_M2C_NN_control_types.h"

int Can_Write(unsigned int mailbox_id, void* data, int size);
int Eth_Write(unsigned int mailbox_id, void* data, int size);

#include "allIncludes.h"

tUserSafe SimulinkInterrupt(void);
void ConfigureReadTriggerDelayInNs(int);
extern void microKernel12(int32_T K, const real32_T *A, int32_T LDA, const
  real32_T *B, real32_T *C);
extern void microKernel11(int32_T K, const real32_T *A, int32_T LDA, const
  real32_T *B, real32_T *C);
extern void macroKernel1(int32_T M, int32_T K, int32_T N, const real32_T *A,
  int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C, int32_T LDC);
extern void matrixMultiply1(int32_T M, int32_T K, int32_T N, int32_T blockSizeM,
  int32_T blockSizeK, int32_T blockSizeN, const real32_T *A, const real32_T *B,
  real32_T *C);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern int32_T div_s32_floor(int32_T numerator, int32_T denominator);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);
extern void imperix_M2C_MovingRMS1_Init(DW_MovingRMS1_imperix_M2C_NN__T *localDW);
extern void imperix_M2_MovingRMS1_Start(DW_MovingRMS1_imperix_M2C_NN__T *localDW);
extern void imperix_M2C_NN_c_MovingRMS1(const real_T rtu_0[6],
  B_MovingRMS1_imperix_M2C_NN_c_T *localB, DW_MovingRMS1_imperix_M2C_NN__T
  *localDW);
extern void imperix_M2C_MovingRMS1_Term(DW_MovingRMS1_imperix_M2C_NN__T *localDW);

#endif                                 // imperix_M2C_NN_control_private_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
