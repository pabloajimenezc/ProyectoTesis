//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_ctrl_types.h
//
// Code generated for Simulink model 'imperix_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.45
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Fri Jan  9 15:45:39 2026
//
#ifndef imperix_ctrl_types_h_
#define imperix_ctrl_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_rdZwERmVb1rhFtGnZ52PSG_
#define DEFINED_TYPEDEF_FOR_struct_rdZwERmVb1rhFtGnZ52PSG_

struct struct_rdZwERmVb1rhFtGnZ52PSG
{
  real_T Ts;
  real_T k;
  real_T xi;
  real_T wn;
  real_T kp;
  real_T ki;
  real_T u_max;
  real_T tau_f;
  real_T alpha;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_V11yzUicWajUfCfdcXdSaC_
#define DEFINED_TYPEDEF_FOR_struct_V11yzUicWajUfCfdcXdSaC_

struct struct_V11yzUicWajUfCfdcXdSaC
{
  real_T Ts;
  real_T wn;
  real_T xi;
  real_T u_max;
  real_T kp_F;
  real_T ki_F;
  real_T k_w;
  real_T kp_w;
  real_T ki_w;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_lzLWDxdESgOnj63TjlRqe_
#define DEFINED_TYPEDEF_FOR_struct_lzLWDxdESgOnj63TjlRqe_

struct struct_lzLWDxdESgOnj63TjlRqe
{
  real_T Ts;
  real_T R;
  real_T L;
  real_T tau;
  real_T xi;
  real_T wn;
  real_T kp;
  real_T ki;
  real_T u_max;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_WbJ8avaNECGQlGMumVRlBD_
#define DEFINED_TYPEDEF_FOR_struct_WbJ8avaNECGQlGMumVRlBD_

struct struct_WbJ8avaNECGQlGMumVRlBD
{
  real_T T[30];
  real_T pinvT[30];
  real_T Ts;
  real_T nx;
  real_T nu;
  real_T A[8];
  real_T B[16];
  real_T AB[16];
  real_T Q[16];
  real_T lambda;
  real_T R[16];
  real_T QT[4];
  real_T H[16];
  real_T Aineq[96];
  real_T tau_f;
  real_T alpha;
};

#endif

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

#ifndef DEFINED_TYPEDEF_FOR_struct_ufhp0dPGHTdMqEr0nhHoeE_
#define DEFINED_TYPEDEF_FOR_struct_ufhp0dPGHTdMqEr0nhHoeE_

struct struct_ufhp0dPGHTdMqEr0nhHoeE
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
  real_T vF;
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

// Parameters (default storage)
typedef struct P_imperix_ctrl_T_ P_imperix_ctrl_T;

// Forward declaration for rtModel
typedef struct tag_RTM_imperix_ctrl_T RT_MODEL_imperix_ctrl_T;

#endif                                 // imperix_ctrl_types_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
