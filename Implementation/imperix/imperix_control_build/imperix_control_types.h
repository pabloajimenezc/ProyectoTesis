//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_control_types.h
//
// Code generated for Simulink model 'imperix_control'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.31
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Wed Dec 17 15:44:39 2025
//
#ifndef imperix_control_types_h_
#define imperix_control_types_h_
#include "rtwtypes.h"
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

#ifndef DEFINED_TYPEDEF_FOR_struct_Jn3yK8idWqC5lwHij8OsQE_
#define DEFINED_TYPEDEF_FOR_struct_Jn3yK8idWqC5lwHij8OsQE_

struct struct_Jn3yK8idWqC5lwHij8OsQE
{
  real_T T[30];
  real_T pinvT[30];
  real_T Ts;
  real_T nx;
  real_T nu;
  real_T As[4];
  real_T Bs[4];
  real_T ABd[16];
  real_T Ad[8];
  real_T Bd[16];
  real_T Hx[16];
  real_T Hu[16];
  real_T lambda;
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

#ifndef DEFINED_TYPEDEF_FOR_struct_kYK8klzU7k6CF2sPPFadY_
#define DEFINED_TYPEDEF_FOR_struct_kYK8klzU7k6CF2sPPFadY_

struct struct_kYK8klzU7k6CF2sPPFadY
{
  real_T Ts;
  real_T Nl;
  real_T Np;
  real_T ONE[54];
  real_T NN[108];
  real_T MI[324];
  real_T K[324];
  real_T Hu_z[36];
  real_T Aineq_z[216];
  real_T Hu_o[9];
  real_T Aineq_o[18];
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

#ifndef DEFINED_TYPEDEF_FOR_struct_8pcJrWnT2NIOYJW9vpRYLD_
#define DEFINED_TYPEDEF_FOR_struct_8pcJrWnT2NIOYJW9vpRYLD_

struct struct_8pcJrWnT2NIOYJW9vpRYLD
{
  real_T Ts;
  real_T nx;
  real_T nu;
  real_T ny;
  real_T qi;
  real_T qF;
  real_T qw;
  real_T qT;
  real_T r;
  real_T Q[36];
  real_T R[9];
  real_T x1_mu[6];
  real_T SIG1[36];
  real_T Ad[36];
  real_T Adt[36];
  real_T Bd[12];
  real_T C[18];
};

#endif

// Custom Type definition for MATLAB Function: '<S26>/Saturation'
#ifndef struct_mpcActiveSetOptions_imperix_c_T
#define struct_mpcActiveSetOptions_imperix_c_T

struct mpcActiveSetOptions_imperix_c_T
{
  boolean_T IntegrityChecks;
  int32_T MaxIterations;
  real_T ConstraintTolerance;
  boolean_T UseHessianAsInput;
};

#endif                                // struct_mpcActiveSetOptions_imperix_c_T

// Parameters for system: '<S314>/Subsystem - pi//2 delay'
typedef struct P_Subsystempi2delay_imperix_c_T_ P_Subsystempi2delay_imperix_c_T;

// Parameters for system: '<S314>/Subsystem1'
typedef struct P_Subsystem1_imperix_control_T_ P_Subsystem1_imperix_control_T;

// Parameters (default storage)
typedef struct P_imperix_control_T_ P_imperix_control_T;

// Forward declaration for rtModel
typedef struct tag_RTM_imperix_control_T RT_MODEL_imperix_control_T;

#endif                                 // imperix_control_types_h_

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
