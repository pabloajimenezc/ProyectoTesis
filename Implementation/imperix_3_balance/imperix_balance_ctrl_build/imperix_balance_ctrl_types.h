//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_balance_ctrl_types.h
//
// Code generated for Simulink model 'imperix_balance_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.161
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Feb 26 19:55:06 2026
//
#ifndef imperix_balance_ctrl_types_h_
#define imperix_balance_ctrl_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_KGBPdpuUNiPn7rR2MwzhRE_
#define DEFINED_TYPEDEF_FOR_struct_KGBPdpuUNiPn7rR2MwzhRE_

struct struct_KGBPdpuUNiPn7rR2MwzhRE
{
  real_T Ax[12];
  real_T Ay[18];
  real_T p;
  real_T q;
  real_T A[30];
  real_T pinvA[30];
  real_T m;
  real_T N[12];
  real_T pinvN[12];
  real_T n;
  real_T R;
  real_T L;
  real_T Csm;
  real_T Nsm;
  real_T C;
  real_T Vdc;
  real_T vx_max;
  real_T vy_max;
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
  real_T TD[2];
  real_T Tx[6];
  real_T Ty[12];
  real_T Te[12];
  real_T T[30];
  real_T pinvTx[6];
  real_T pinvTy[12];
  real_T pinvTe[12];
  real_T pinvT[30];
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

#ifndef DEFINED_TYPEDEF_FOR_struct_O6gPH0RO1xYJuf7clpdGt_
#define DEFINED_TYPEDEF_FOR_struct_O6gPH0RO1xYJuf7clpdGt_

struct struct_O6gPH0RO1xYJuf7clpdGt
{
  real_T Ts;
  real_T Re;
  real_T Le;
  real_T tau_e;
  real_T xi;
  real_T wn;
  real_T kp;
  real_T ki;
  real_T u_max;
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

#ifndef DEFINED_TYPEDEF_FOR_struct_vMmolkBO3MQ2WCj8YrPzlG_
#define DEFINED_TYPEDEF_FOR_struct_vMmolkBO3MQ2WCj8YrPzlG_

struct struct_vMmolkBO3MQ2WCj8YrPzlG
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
  real_T Sb;
  real_T wb;
  real_T Tb;
  real_T H;
  real_T Zb;
  real_T Lb;
  real_T rs;
  real_T rr;
  real_T los;
  real_T lor;
  real_T lm;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_YUQGZT1wNQqHOlVxPRDLvF_
#define DEFINED_TYPEDEF_FOR_struct_YUQGZT1wNQqHOlVxPRDLvF_

struct struct_YUQGZT1wNQqHOlVxPRDLvF
{
  real_T Ts;
  real_T Nl;
  real_T Np;
  real_T ONE[24];
  real_T NN[48];
  real_T MI[144];
  real_T K[144];
  real_T Hu_z[16];
  real_T Aineq_z[96];
  real_T Hu_o[4];
  real_T Aineq_o[8];
  real_T lambda_z;
  real_T lambda_o;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eLXpdkXVH71IKiDfJkdaiC_
#define DEFINED_TYPEDEF_FOR_struct_eLXpdkXVH71IKiDfJkdaiC_

struct struct_eLXpdkXVH71IKiDfJkdaiC
{
  real_T abc2ab[6];
  real_T ab2abc[6];
  real_T rot[4];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_rFOxCXlMLRQfdQMau5zCw_
#define DEFINED_TYPEDEF_FOR_struct_rFOxCXlMLRQfdQMau5zCw_

struct struct_rFOxCXlMLRQfdQMau5zCw
{
  real_T Ts;
  real_T A[8];
  real_T B[16];
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

#ifndef DEFINED_TYPEDEF_FOR_struct_Rky7CkjZg6FWKeiF92MwY_
#define DEFINED_TYPEDEF_FOR_struct_Rky7CkjZg6FWKeiF92MwY_

struct struct_Rky7CkjZg6FWKeiF92MwY
{
  real_T Re;
  real_T Le;
  real_T tau_e;
  real_T Ts;
  real_T nx;
  real_T nu;
  real_T ny;
  real_T r;
  real_T R[4];
  real_T qi;
  real_T qF;
  real_T Q[16];
  real_T x1_mu[4];
  real_T A[16];
  real_T B[8];
  real_T C[8];
  real_T we_steps;
  real_T we_list[200];
  real_T gain_schedule[1600];
};

#endif

#ifndef struct_cell_wrap_imperix_balance_ctr_T
#define struct_cell_wrap_imperix_balance_ctr_T

struct cell_wrap_imperix_balance_ctr_T
{
  uint32_T f1[8];
};

#endif                                // struct_cell_wrap_imperix_balance_ctr_T

#ifndef struct_dsp_simulink_MovingAverage_im_T
#define struct_dsp_simulink_MovingAverage_im_T

struct dsp_simulink_MovingAverage_im_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_imperix_balance_ctr_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[99];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                                // struct_dsp_simulink_MovingAverage_im_T

// Custom Type definition for MATLAB Function: '<S1>/LICCs control'
#ifndef struct_mpcActiveSetOptions_imperix_b_T
#define struct_mpcActiveSetOptions_imperix_b_T

struct mpcActiveSetOptions_imperix_b_T
{
  boolean_T IntegrityChecks;
  int32_T MaxIterations;
  real_T ConstraintTolerance;
  boolean_T UseHessianAsInput;
};

#endif                                // struct_mpcActiveSetOptions_imperix_b_T

// Parameters for system: '<S386>/Subsystem - pi//2 delay'
typedef struct P_Subsystempi2delay_imperix_b_T_ P_Subsystempi2delay_imperix_b_T;

// Parameters for system: '<S386>/Subsystem1'
typedef struct P_Subsystem1_imperix_balance__T_ P_Subsystem1_imperix_balance__T;

// Parameters (default storage)
typedef struct P_imperix_balance_ctrl_T_ P_imperix_balance_ctrl_T;

// Forward declaration for rtModel
typedef struct tag_RTM_imperix_balance_ctrl_T RT_MODEL_imperix_balance_ctrl_T;

#endif                                 // imperix_balance_ctrl_types_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
