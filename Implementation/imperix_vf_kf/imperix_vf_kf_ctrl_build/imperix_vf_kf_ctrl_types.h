//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_vf_kf_ctrl_types.h
//
// Code generated for Simulink model 'imperix_vf_kf_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.101
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 17:07:16 2026
//
#ifndef imperix_vf_kf_ctrl_types_h_
#define imperix_vf_kf_ctrl_types_h_
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

#ifndef DEFINED_TYPEDEF_FOR_struct_aK5aQeabUeTOrz39VMjTKC_
#define DEFINED_TYPEDEF_FOR_struct_aK5aQeabUeTOrz39VMjTKC_

struct struct_aK5aQeabUeTOrz39VMjTKC
{
  real_T VLLN;
  real_T PN;
  real_T FPn;
  real_T SN;
  real_T fN;
  real_T f_max;
  real_T wN;
  real_T w_max;
  real_T IN;
  real_T TN;
  real_T FrN;
  real_T np;
  real_T J;
  real_T Rs;
  real_T Rr;
  real_T Los;
  real_T Lor;
  real_T Lm;
  real_T Ls;
  real_T Lr;
  real_T kr;
  real_T ks;
  real_T tau_r;
  real_T o;
  real_T Ro;
  real_T Lo;
  real_T tau_o;
  real_T kT;
  real_T isdN;
  real_T isqN;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_1mUndb4d19cpHVlbIkwLFC_
#define DEFINED_TYPEDEF_FOR_struct_1mUndb4d19cpHVlbIkwLFC_

struct struct_1mUndb4d19cpHVlbIkwLFC
{
  real_T Ts;
  real_T nx;
  real_T nu;
  real_T ny;
  real_T qi;
  real_T qF;
  real_T r;
  real_T Q[16];
  real_T R[4];
  real_T x1_mu[4];
  real_T A[16];
  real_T B[8];
  real_T C[8];
  real_T we_steps;
  real_T gain_schedule[1600];
  real_T we_list[200];
};

#endif

#ifndef struct_cell_wrap_imperix_vf_kf_ctrl_T
#define struct_cell_wrap_imperix_vf_kf_ctrl_T

struct cell_wrap_imperix_vf_kf_ctrl_T
{
  uint32_T f1[8];
};

#endif                                 // struct_cell_wrap_imperix_vf_kf_ctrl_T

#ifndef struct_dsp_simulink_MovingAverage_im_T
#define struct_dsp_simulink_MovingAverage_im_T

struct dsp_simulink_MovingAverage_im_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_imperix_vf_kf_ctrl_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[99];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                                // struct_dsp_simulink_MovingAverage_im_T

// Parameters (default storage)
typedef struct P_imperix_vf_kf_ctrl_T_ P_imperix_vf_kf_ctrl_T;

// Forward declaration for rtModel
typedef struct tag_RTM_imperix_vf_kf_ctrl_T RT_MODEL_imperix_vf_kf_ctrl_T;

#endif                                 // imperix_vf_kf_ctrl_types_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
