//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_M2C_NN_control_2024b_types.h
//
// Code generated for Simulink model 'imperix_M2C_NN_control_2024b'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.18
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Dec 11 16:53:45 2025
//
#ifndef imperix_M2C_NN_control_2024b_types_h_
#define imperix_M2C_NN_control_2024b_types_h_
#include "rtwtypes.h"
#ifndef struct_cell_wrap_imperix_M2C_NN_cont_T
#define struct_cell_wrap_imperix_M2C_NN_cont_T

struct cell_wrap_imperix_M2C_NN_cont_T
{
  uint32_T f1[8];
};

#endif                                // struct_cell_wrap_imperix_M2C_NN_cont_T

#ifndef struct_dsp_simulink_MovingRMS_imperi_T
#define struct_dsp_simulink_MovingRMS_imperi_T

struct dsp_simulink_MovingRMS_imperi_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_imperix_M2C_NN_cont_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[39];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                                // struct_dsp_simulink_MovingRMS_imperi_T

// Parameters (default storage)
typedef struct P_imperix_M2C_NN_control_2024_T_ P_imperix_M2C_NN_control_2024_T;

// Forward declaration for rtModel
typedef struct tag_RTM_imperix_M2C_NN_contro_T RT_MODEL_imperix_M2C_NN_contr_T;

#endif                                 // imperix_M2C_NN_control_2024b_types_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
