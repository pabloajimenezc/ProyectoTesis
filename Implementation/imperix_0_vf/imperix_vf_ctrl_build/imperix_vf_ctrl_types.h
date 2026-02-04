//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_vf_ctrl_types.h
//
// Code generated for Simulink model 'imperix_vf_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.98
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 13:19:50 2026
//
#ifndef imperix_vf_ctrl_types_h_
#define imperix_vf_ctrl_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_04ti4QO3MEcLknQdotQIR_
#define DEFINED_TYPEDEF_FOR_struct_04ti4QO3MEcLknQdotQIR_

struct struct_04ti4QO3MEcLknQdotQIR
{
  real_T ax[12];
  real_T ay[18];
  real_T p;
  real_T q;
  real_T A[30];
  real_T m;
  real_T pinvA[30];
  real_T N[12];
  real_T n;
  real_T pinvN[12];
  real_T Rb;
  real_T Lb;
  real_T Csm;
  real_T Nsm;
  real_T C;
  real_T As[36];
  real_T Bs[36];
  real_T Vdc;
  real_T Ax_max;
  real_T Ay_max;
  real_T ix_max;
  real_T iy_max;
  real_T is_max;
  real_T Vc_ref;
  real_T vo_max;
  real_T Ec_ref;
  real_T vc_ref;
  real_T vc_dev;
  real_T vc_m_dev;
  real_T Ec_dev;
};

#endif

// Parameters (default storage)
typedef struct P_imperix_vf_ctrl_T_ P_imperix_vf_ctrl_T;

// Forward declaration for rtModel
typedef struct tag_RTM_imperix_vf_ctrl_T RT_MODEL_imperix_vf_ctrl_T;

#endif                                 // imperix_vf_ctrl_types_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
