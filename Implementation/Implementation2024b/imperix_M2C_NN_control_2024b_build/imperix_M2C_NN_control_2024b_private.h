//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_M2C_NN_control_2024b_private.h
//
// Code generated for Simulink model 'imperix_M2C_NN_control_2024b'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.8
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Oct 14 16:13:52 2025
//
#ifndef imperix_M2C_NN_control_2024b_private_h_
#define imperix_M2C_NN_control_2024b_private_h_
#include "rtwtypes.h"
#include "imperix_M2C_NN_control_2024b.h"
#include "imperix_M2C_NN_control_2024b_types.h"

int Can_Write(unsigned int mailbox_id, void* data, int size);
int Eth_Write(unsigned int mailbox_id, void* data, int size);

#include "allIncludes.h"

tUserSafe SimulinkInterrupt(void);
void ConfigureReadTriggerDelayInNs(int);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void microKernel11572246788790903127(int32_T K, const real32_T *A,
  int32_T LDA, const real32_T *B, real32_T *C);
extern void microKernel8492573986212425386(int32_T K, const real32_T *A, int32_T
  LDA, const real32_T *B, real32_T *C);
extern void macroKernel3084562926610886582(int32_T M, int32_T K, int32_T N,
  const real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C,
  int32_T LDC);
extern void matrixMultiply3084562926610886582(int32_T M, int32_T K, int32_T N,
  int32_T blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A,
  const real32_T *B, real32_T *C);
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

#endif                               // imperix_M2C_NN_control_2024b_private_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
