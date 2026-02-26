//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_balance_ctrl.cpp
//
// Code generated for Simulink model 'imperix_balance_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.161
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Feb 26 19:55:06 2026
//
#include "imperix_balance_ctrl.h"
#include "rtwtypes.h"
#include "imperix_balance_ctrl_types.h"
#include "imperix_balance_ctrl_private.h"
#include <math.h>
#include <string.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "zero_crossing_types.h"
#include "rt_defines.h"

real32_T F_ref;                        // Tunable parameter
real32_T w_ref;                        // Tunable parameter
int16_T* ix_raw_adc_ptr_3_0;
real32_T reset_mean;                   // Tunable parameter
real32_T reset_PI;                     // Tunable parameter
int16_T* ix_raw_adc_ptr_7_2;
int16_T* ix_raw_adc_ptr_6_2;
int16_T* ix_raw_adc_ptr_5_2;
int16_T* ix_raw_adc_ptr_4_2;
int16_T* ix_raw_adc_ptr_3_2;
int16_T* ix_raw_adc_ptr_2_2;
real32_T reset_KF;                     // Tunable parameter
real32_T magnetize;                    // Tunable parameter
int16_T* ix_raw_adc_ptr_1_2;
int16_T* ix_raw_adc_ptr_0_2;
int16_T* ix_raw_adc_ptr_7_0;
int16_T* ix_raw_adc_ptr_6_0;
int16_T* ix_raw_adc_ptr_5_0;
int16_T* ix_raw_adc_ptr_4_0;
int16_T* ix_raw_adc_ptr_2_0;
real32_T Te;                           // Probe
real32_T Vc5;                          // Probe
real32_T Vc6;                          // Probe
real32_T ie1;                          // Probe
real32_T im_alp;                       // Probe
real32_T im_bet;                       // Probe
real32_T ie1_r;                        // Probe
real32_T vo_r;                         // Probe
real32_T ie2_r;                        // Probe
real32_T Frd;                          // Probe
real32_T ie2;                          // Probe
real32_T is1;                          // Probe
real32_T Vc_m;                         // Probe
real32_T iP_r;                         // Probe
real32_T iP;                           // Probe
real32_T vm_q;                         // Probe
real32_T Frd_r;                        // Probe
real32_T wm_r;                         // Probe
real32_T im_d;                         // Probe
real32_T imd_r;                        // Probe
real32_T im_q;                         // Probe
real32_T imq_r;                        // Probe
real32_T is2;                          // Probe
real32_T vm_d;                         // Probe
real32_T Vc_m_f;                       // Probe
real32_T Vc1;                          // Probe
real32_T im_bet_KF;                    // Probe
real32_T im_alp_KF;                    // Probe
real32_T Fr_bet;                       // Probe
real32_T Fr_alp;                       // Probe
real32_T Te_KF;                        // Probe
real32_T Vc2;                          // Probe
real32_T Vc3;                          // Probe
real32_T is3;                          // Probe
real32_T Vc4;                          // Probe
real32_T ie2_rf;                       // Probe
real32_T is4;                          // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe
real32_T wm;                           // Probe
real32_T ie1_rf;                       // Probe
real32_T freq_PWM;                     // Tunable parameter
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
real32_T D1;                           // Probe
real32_T D2;                           // Probe
real32_T D3;                           // Probe
real32_T D4;                           // Probe
real32_T D5;                           // Probe
real32_T D6;                           // Probe
real32_T VSETEN;                       // Tunable parameter
real32_T enable_FP;                    // Tunable parameter
real32_T INDM;                         // Tunable parameter
real32_T INDS;                         // Tunable parameter
real32_T INDT;                         // Tunable parameter

// Block signals (default storage)
B_imperix_balance_ctrl_T imperix_balance_ctrl_B;

// Block states (default storage)
DW_imperix_balance_ctrl_T imperix_balance_ctrl_DW;

// Previous zero-crossings (trigger) states
PrevZCX_imperix_balance_ctrl_T imperix_balance_ctrl_PrevZCX;

// Real-time model
RT_MODEL_imperix_balance_ctrl_T imperix_balance_ctrl_M_ =
  RT_MODEL_imperix_balance_ctrl_T();
RT_MODEL_imperix_balance_ctrl_T *const imperix_balance_ctrl_M =
  &imperix_balance_ctrl_M_;

// Forward declaration for local functions
static void imperix_balanc_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj);

// Forward declaration for local functions
static void imperix_balance_ctrl_trisolve_i(const real_T A[4], real_T B[4]);
static real_T imperix_balance_ctrl_norm_d(const real_T x[2]);
static real_T imperix_balance_ctrl_xnrm2_c(int32_T n, const real_T x[4], int32_T
  ix0);
static void imperix_balance_ctrl_xgemv_o(int32_T m, int32_T n, const real_T A[4],
  int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2]);
static void imperix_balance_ctrl_xgerc_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[2], real_T A[4], int32_T ia0);
static real_T imperix_balance_ct_KWIKfactor_k(const real_T Ac[24], const int32_T
  iC[12], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n);
static void imperix_balanc_DropConstraint_k(int32_T kDrop, boolean_T iA[12],
  int32_T *nA, int32_T iC[12]);
static void imperix_balance_ctrl_qpkwik_o(const real_T Linv[4], const real_T
  Hinv[4], const real_T f[2], const real_T Ac[24], const real_T b[12], boolean_T
  iA[12], int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[12],
  int32_T *status);
static void imperix_balance_ctrl_trisolve(const real_T A[16], real_T B[16]);
static real_T imperix_balance_ctrl_norm(const real_T x[4]);
static real_T imperix_balance_ctrl_maximum(const real_T x[4]);
static real_T imperix_balance_ctrl_xnrm2(int32_T n, const real_T x[16], int32_T
  ix0);
static void imperix_balance_ctrl_xgemv(int32_T m, int32_T n, const real_T A[16],
  int32_T ia0, const real_T x[16], int32_T ix0, real_T y[4]);
static void imperix_balance_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[4], real_T A[16], int32_T ia0);
static real_T imperix_balance_ctrl_KWIKfactor(const real_T Ac[96], const int32_T
  iC[24], int32_T nA, const real_T Linv[16], real_T RLinv[16], real_T D[16],
  real_T H[16], int32_T n);
static void imperix_balance__DropConstraint(int32_T kDrop, boolean_T iA[24],
  int32_T *nA, int32_T iC[24]);
static void imperix_balance_ctrl_qpkwik(const real_T Linv[16], const real_T
  Hinv[16], const real_T f[4], const real_T Ac[96], const real_T b[24],
  boolean_T iA[24], int32_T maxiter, real_T FeasTol, real_T x[4], real_T lambda
  [24], int32_T *status);
static real_T imperix_balance_ct_KWIKfactor_i(const real_T Ac[8], const int32_T
  iC[4], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n);
static void imperix_balanc_DropConstraint_d(int32_T kDrop, boolean_T iA[4],
  int32_T *nA, int32_T iC[4]);
static void imperix_balance_ctrl_qpkwik_l(const real_T Linv[4], const real_T
  Hinv[4], const real_T f[2], const real_T Ac[8], const real_T b[4], boolean_T
  iA[4], int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[4], int32_T
  *status);
static void imperix_bala_mpcActiveSetSolver(const real_T H[4], const real_T f[2],
  const real_T A[8], const real_T b[4], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[2],
  int32_T *exitflag, boolean_T iA[4]);

//
// System initialize for enable system:
//    '<S386>/Subsystem - pi//2 delay'
//    '<S450>/Subsystem - pi//2 delay'
//
void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_g, P_Subsystempi2delay_imperix_b_T *localP)
{
  // SystemInitialize for Outport: '<S389>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_g = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S386>/Subsystem - pi//2 delay'
//    '<S450>/Subsystem - pi//2 delay'
//
void imperix_b_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_g)
{
  // Outputs for Enabled SubSystem: '<S386>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S389>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S389>/Fcn' incorporates:
    //   Fcn: '<S389>/Fcn1'

    tmp = cos(rtu_wt);
    tmp_0 = sin(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 + rtu_dq_m * tmp;

    // Fcn: '<S389>/Fcn1'
    *rty_alpha_beta_g = -rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S386>/Subsystem - pi//2 delay'
}

//
// System initialize for enable system:
//    '<S386>/Subsystem1'
//    '<S450>/Subsystem1'
//
void imperix_bal_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_n, P_Subsystem1_imperix_balance__T *localP)
{
  // SystemInitialize for Outport: '<S390>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_n = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S386>/Subsystem1'
//    '<S450>/Subsystem1'
//
void imperix_balance__Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_g, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_n)
{
  // Outputs for Enabled SubSystem: '<S386>/Subsystem1' incorporates:
  //   EnablePort: '<S390>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S390>/Fcn' incorporates:
    //   Fcn: '<S390>/Fcn1'

    tmp = sin(rtu_wt);
    tmp_0 = cos(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 - rtu_dq_g * tmp;

    // Fcn: '<S390>/Fcn1'
    *rty_alpha_beta_n = rtu_dq * tmp + rtu_dq_g * tmp_0;
  }

  // End of Outputs for SubSystem: '<S386>/Subsystem1'
}

static void imperix_balanc_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S78>/Moving Average'
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->pCumSum = 0.0;
  memset(&obj->pCumSumRev[0], 0, 99U * sizeof(real_T));
  obj->pCumRevIndex = 1.0;
  obj->pModValueRev = 0.0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

// System initialize for atomic system:
void imperix__MovingAverage_Init(DW_MovingAverage_imperix_bala_T *localDW)
{
  // InitializeConditions for MATLABSystem: '<S78>/Moving Average'
  localDW->obj.pCumSum = 0.0;
  memset(&localDW->obj.pCumSumRev[0], 0, 99U * sizeof(real_T));
  localDW->obj.pCumRevIndex = 1.0;
  localDW->obj.pModValueRev = 0.0;
}

// Start for atomic system:
void imperix_MovingAverage_Start(DW_MovingAverage_imperix_bala_T *localDW)
{
  // Start for MATLABSystem: '<S78>/Moving Average'
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  imperix_balanc_SystemCore_setup(&localDW->obj);
}

// Output and update for atomic system:
void imperix_balan_MovingAverage(real_T rtu_0, B_MovingAverage_imperix_balan_T
  *localB, DW_MovingAverage_imperix_bala_T *localDW)
{
  real_T csum;
  real_T cumRevIndex;
  real_T z;

  // MATLABSystem: '<S78>/Moving Average'
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  z = 0.0;

  // MATLABSystem: '<S78>/Moving Average'
  localB->MovingAverage = 0.0;

  // MATLABSystem: '<S78>/Moving Average'
  csum = localDW->obj.pCumSum + rtu_0;
  if (localDW->obj.pModValueRev == 0.0) {
    z = localDW->obj.pCumSumRev[static_cast<int32_T>(localDW->obj.pCumRevIndex)
      - 1] + csum;
  }

  localDW->obj.pCumSumRev[static_cast<int32_T>(localDW->obj.pCumRevIndex) - 1] =
    rtu_0;
  if (localDW->obj.pCumRevIndex != 99.0) {
    cumRevIndex = localDW->obj.pCumRevIndex + 1.0;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (int32_T k = 97; k >= 0; k--) {
      localDW->obj.pCumSumRev[k] += localDW->obj.pCumSumRev[k + 1];
    }
  }

  if (localDW->obj.pModValueRev == 0.0) {
    // MATLABSystem: '<S78>/Moving Average'
    localB->MovingAverage = z / 100.0;
  }

  localDW->obj.pCumSum = csum;
  localDW->obj.pCumRevIndex = cumRevIndex;
  if (localDW->obj.pModValueRev > 0.0) {
    localDW->obj.pModValueRev--;
  } else {
    localDW->obj.pModValueRev = 0.0;
  }
}

// Termination for atomic system:
void imperix__MovingAverage_Term(DW_MovingAverage_imperix_bala_T *localDW)
{
  // Terminate for MATLABSystem: '<S78>/Moving Average'
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      localDW->obj.NumChannels = -1;
      localDW->obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S78>/Moving Average'
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt(a * a + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt(b * b + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(static_cast<real_T>(tmp), static_cast<real_T>(tmp_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance_ctrl_trisolve_i(const real_T A[4], real_T B[4])
{
  for (int32_T j = 0; j < 2; j++) {
    int32_T jBcol;
    jBcol = j << 1;
    for (int32_T b_k = 0; b_k < 2; b_k++) {
      real_T B_0;
      int32_T B_tmp;
      int32_T kAcol;
      kAcol = b_k << 1;
      B_tmp = b_k + jBcol;
      B_0 = B[B_tmp];
      if (B_0 != 0.0) {
        B[B_tmp] = B_0 / A[b_k + kAcol];
        for (int32_T i = b_k + 2; i < 3; i++) {
          B[jBcol + 1] -= A[kAcol + 1] * B[B_tmp];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static real_T imperix_balance_ctrl_norm_d(const real_T x[2])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

// Function for MATLAB Function: '<S27>/Energy balance'
static real_T imperix_balance_ctrl_xnrm2_c(int32_T n, const real_T x[4], int32_T
  ix0)
{
  real_T y;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      real_T scale;
      int32_T kend;
      scale = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (int32_T k = ix0; k < kend; k++) {
        real_T absxk;
        absxk = fabs(x[k - 1]);
        if (absxk > scale) {
          real_T t;
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          real_T t;
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance_ctrl_xgemv_o(int32_T m, int32_T n, const real_T A[4],
  int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2])
{
  if ((m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = ((n - 1) << 1) + ia0;
    for (int32_T b_iy = ia0; b_iy <= b; b_iy += 2) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = b_iy + m;
      for (ia = b_iy; ia < d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * A[ia - 1];
      }

      ia = (b_iy - ia0) >> 1;
      y[ia] += c;
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance_ctrl_xgerc_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[2], real_T A[4], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    int32_T jA;
    jA = ia0;
    for (int32_T j = 0; j < n; j++) {
      real_T temp;
      temp = y[j];
      if (temp != 0.0) {
        int32_T b;
        temp *= alpha1;
        b = m + jA;
        for (int32_T ijA = jA; ijA < b; ijA++) {
          A[ijA - 1] += A[((ix0 + ijA) - jA) - 1] * temp;
        }
      }

      jA += 2;
    }
  }
}

// Function for MATLAB Function: '<S27>/Saturation'
static real_T imperix_balance_ct_KWIKfactor_k(const real_T Ac[24], const int32_T
  iC[12], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n)
{
  real_T A[4];
  real_T Q[4];
  real_T R[4];
  real_T TL[4];
  real_T tau[2];
  real_T work[2];
  real_T RLinv_0;
  real_T RLinv_1;
  real_T Status;
  real_T xnorm;
  int32_T b_lastv;
  int32_T c_lastc;
  int32_T exitg1;
  int32_T ii;
  int32_T k_i;
  int32_T knt;
  int32_T qY;
  int32_T tmp;
  Status = 1.0;
  RLinv[0] = 0.0;
  RLinv[1] = 0.0;
  RLinv[2] = 0.0;
  RLinv[3] = 0.0;
  for (ii = 0; ii < nA; ii++) {
    k_i = iC[ii];
    xnorm = Ac[k_i - 1];
    RLinv_0 = Linv[0] * xnorm;
    RLinv_1 = Linv[1] * xnorm;
    xnorm = Ac[k_i + 11];
    k_i = ii << 1;
    RLinv[k_i] = Linv[2] * xnorm + RLinv_0;
    RLinv[k_i + 1] = Linv[3] * xnorm + RLinv_1;
  }

  A[0] = RLinv[0];
  A[1] = RLinv[1];
  A[2] = RLinv[2];
  A[3] = RLinv[3];
  tau[0] = 0.0;
  work[0] = 0.0;
  tau[1] = 0.0;
  work[1] = 0.0;
  for (k_i = 0; k_i < 2; k_i++) {
    ii = (k_i << 1) + k_i;
    if (k_i + 1 < 2) {
      RLinv_0 = A[ii];
      c_lastc = ii + 2;
      tau[0] = 0.0;
      xnorm = imperix_balance_ctrl_xnrm2_c(1, A, ii + 2);
      if (xnorm != 0.0) {
        RLinv_1 = A[ii];
        xnorm = rt_hypotd_snf(RLinv_1, xnorm);
        if (RLinv_1 >= 0.0) {
          xnorm = -xnorm;
        }

        if (fabs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          do {
            knt++;
            for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
              A[b_lastv - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            RLinv_0 *= 9.9792015476736E+291;
          } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(RLinv_0, imperix_balance_ctrl_xnrm2_c(1, A, ii +
            2));
          if (RLinv_0 >= 0.0) {
            xnorm = -xnorm;
          }

          tau[0] = (xnorm - RLinv_0) / xnorm;
          RLinv_0 = 1.0 / (RLinv_0 - xnorm);
          for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
            A[b_lastv - 1] *= RLinv_0;
          }

          for (b_lastv = 0; b_lastv < knt; b_lastv++) {
            xnorm *= 1.0020841800044864E-292;
          }

          RLinv_0 = xnorm;
        } else {
          tau[0] = (xnorm - RLinv_1) / xnorm;
          RLinv_0 = 1.0 / (RLinv_1 - xnorm);
          for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
            A[b_lastv - 1] *= RLinv_0;
          }

          RLinv_0 = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[0] != 0.0) {
        b_lastv = 2;
        c_lastc = ii + 1;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 1;
        knt = ii;
        do {
          exitg1 = 0;
          if (knt + 3 <= (ii + b_lastv) + 2) {
            if (A[knt + 2] != 0.0) {
              exitg1 = 1;
            } else {
              knt++;
            }
          } else {
            c_lastc = 0;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        b_lastv = 0;
        c_lastc = 0;
      }

      if (b_lastv > 0) {
        imperix_balance_ctrl_xgemv_o(b_lastv, c_lastc, A, ii + 3, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i(b_lastv, c_lastc, -tau[0], ii + 1, work, A,
          ii + 3);
      }

      A[ii] = RLinv_0;
    } else {
      tau[1] = 0.0;
    }
  }

  for (k_i = 0; k_i < 2; k_i++) {
    for (ii = 0; ii <= k_i; ii++) {
      b_lastv = k_i << 1;
      R[ii + b_lastv] = A[b_lastv + ii];
    }

    if (k_i <= 0) {
      R[(k_i << 1) + 1] = 0.0;
    }

    work[k_i] = 0.0;
  }

  for (k_i = 1; k_i >= 0; k_i--) {
    ii = (k_i << 1) + k_i;
    if (k_i + 1 < 2) {
      A[ii] = 1.0;
      if (tau[k_i] != 0.0) {
        b_lastv = 2;
        c_lastc = ii + 1;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 1;
        knt = ii;
        do {
          exitg1 = 0;
          if (knt + 3 <= (ii + b_lastv) + 2) {
            if (A[knt + 2] != 0.0) {
              exitg1 = 1;
            } else {
              knt++;
            }
          } else {
            c_lastc = 0;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        b_lastv = 0;
        c_lastc = 0;
      }

      if (b_lastv > 0) {
        imperix_balance_ctrl_xgemv_o(b_lastv, c_lastc, A, ii + 3, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i(b_lastv, c_lastc, -tau[k_i], ii + 1, work,
          A, ii + 3);
      }

      for (b_lastv = ii + 2; b_lastv <= ii + 2; b_lastv++) {
        A[b_lastv - 1] *= -tau[k_i];
      }
    }

    A[ii] = 1.0 - tau[k_i];
    if (k_i - 1 >= 0) {
      A[ii - 1] = 0.0;
    }
  }

  Q[0] = A[0];
  Q[1] = A[1];
  Q[2] = A[2];
  Q[3] = A[3];
  k_i = 0;
  do {
    exitg1 = 0;
    if (k_i <= nA - 1) {
      if (fabs(R[(k_i << 1) + k_i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        k_i++;
      }
    } else {
      for (k_i = 0; k_i < n; k_i++) {
        for (ii = 0; ii < n; ii++) {
          b_lastv = k_i << 1;
          c_lastc = ii << 1;
          TL[k_i + c_lastc] = Linv[b_lastv + 1] * Q[c_lastc + 1] + Linv[b_lastv]
            * Q[c_lastc];
        }
      }

      RLinv[0] = 0.0;
      RLinv[1] = 0.0;
      RLinv[2] = 0.0;
      RLinv[3] = 0.0;
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        k_i = (b_lastv - 1) << 1;
        ii = (b_lastv + k_i) - 1;
        RLinv[ii] = 1.0;
        for (c_lastc = b_lastv; c_lastc <= nA; c_lastc++) {
          tmp = (((c_lastc - 1) << 1) + b_lastv) - 1;
          RLinv[tmp] /= R[ii];
        }

        if (b_lastv > 1) {
          for (c_lastc = 0; c_lastc <= b_lastv - 2; c_lastc++) {
            for (knt = b_lastv; knt <= nA; knt++) {
              ii = (knt - 1) << 1;
              tmp = ii + c_lastc;
              RLinv[tmp] -= RLinv[(ii + b_lastv) - 1] * R[k_i + c_lastc];
            }
          }
        }
      }

      for (b_lastv = 0; b_lastv < n; b_lastv++) {
        if (b_lastv + 1 <= n) {
          if (nA > 2147483646) {
            qY = MAX_int32_T;
          } else {
            qY = nA + 1;
          }
        }

        for (c_lastc = b_lastv + 1; c_lastc <= n; c_lastc++) {
          k_i = ((c_lastc - 1) << 1) + b_lastv;
          H[k_i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) << 1;
            H[k_i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + (b_lastv << 1)) - 1] = H[k_i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          k_i = (qY << 1) + b_lastv;
          D[k_i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) << 1;
            D[k_i] += TL[ii + b_lastv] * RLinv[ii + qY];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S27>/Saturation'
static void imperix_balanc_DropConstraint_k(int32_T kDrop, boolean_T iA[12],
  int32_T *nA, int32_T iC[12])
{
  if (kDrop > 0) {
    iA[iC[kDrop - 1] - 1] = false;
    if (kDrop < *nA) {
      int32_T b;
      int32_T i;
      if (*nA < -2147483647) {
        i = MIN_int32_T;
      } else {
        i = *nA - 1;
      }

      b = i + 1;
      for (i = kDrop; i < b; i++) {
        iC[i - 1] = iC[i];
      }
    }

    iC[*nA - 1] = 0;
    if (*nA < -2147483647) {
      *nA = MIN_int32_T;
    } else {
      (*nA)--;
    }
  }
}

// Function for MATLAB Function: '<S27>/Saturation'
static void imperix_balance_ctrl_qpkwik_o(const real_T Linv[4], const real_T
  Hinv[4], const real_T f[2], const real_T Ac[24], const real_T b[12], boolean_T
  iA[12], int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[12],
  int32_T *status)
{
  real_T cTol[12];
  real_T D[4];
  real_T H[4];
  real_T Opt[4];
  real_T RLinv[4];
  real_T Rhs[4];
  real_T U[4];
  real_T r[2];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T rVal;
  real_T t;
  real_T t1;
  int32_T iC[12];
  int32_T U_tmp;
  int32_T U_tmp_0;
  int32_T b_exponent;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exponent;
  int32_T i;
  int32_T iSave;
  int32_T kDrop;
  int32_T kNext;
  int32_T nA;
  boolean_T ColdReset;
  boolean_T DualFeasible;
  boolean_T cTolComputed;
  boolean_T exitg2;
  boolean_T exitg4;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  x[0] = 0.0;
  x[1] = 0.0;
  *status = 1;
  r[0] = 0.0;
  r[1] = 0.0;
  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 12; i++) {
    lambda[i] = 0.0;
    cTol[i] = 1.0;
    iC[i] = 0;
  }

  nA = 0;
  for (i = 0; i < 12; i++) {
    if (iA[i]) {
      nA++;
      iC[nA - 1] = i + 1;
    }
  }

  guard1 = false;
  if (nA > 0) {
    Opt[0] = 0.0;
    Opt[1] = 0.0;
    Opt[2] = 0.0;
    Opt[3] = 0.0;
    Rhs[0] = f[0];
    Rhs[2] = 0.0;
    Rhs[1] = f[1];
    Rhs[3] = 0.0;
    DualFeasible = false;
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_balance_ct_KWIKfactor_k(Ac, iC, nA, Linv, RLinv, D, H,
          2);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            for (i = 0; i < 12; i++) {
              iA[i] = false;
              iC[i] = 0;
            }

            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483645) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 3;
            }

            Rhs[i - 1] = b[iC[kDrop] - 1];
            for (i = kDrop + 1; i <= nA; i++) {
              U_tmp_0 = ((kDrop << 1) + i) - 1;
              U[U_tmp_0] = 0.0;
              for (iSave = 0; iSave < nA; iSave++) {
                U_tmp = iSave << 1;
                U[U_tmp_0] += RLinv[(U_tmp + i) - 1] * RLinv[U_tmp + kDrop];
              }

              U[kDrop + ((i - 1) << 1)] = U[U_tmp_0];
            }
          }

          for (kDrop = 0; kDrop < 2; kDrop++) {
            Opt[kDrop] = H[kDrop + 2] * Rhs[1] + H[kDrop] * Rhs[0];
            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483645) {
                i = MAX_int32_T;
              } else {
                i = iSave + 3;
              }

              Opt[kDrop] += D[(iSave << 1) + kDrop] * Rhs[i - 1];
            }
          }

          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483645) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 3;
            }

            iSave = kDrop << 1;
            Opt[i - 1] = D[iSave + 1] * Rhs[1] + D[iSave] * Rhs[0];
            if (kDrop + 1 > 2147483645) {
              i = MAX_int32_T;
              U_tmp_0 = MAX_int32_T;
            } else {
              i = kDrop + 3;
              U_tmp_0 = kDrop + 3;
            }

            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483645) {
                U_tmp = MAX_int32_T;
              } else {
                U_tmp = iSave + 3;
              }

              Opt[i - 1] = U[(iSave << 1) + kDrop] * Rhs[U_tmp - 1] +
                Opt[U_tmp_0 - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (iSave = 0; iSave < nA; iSave++) {
            if (iSave + 1 > 2147483645) {
              i = MAX_int32_T;
            } else {
              i = iSave + 3;
            }

            lambda[iC[iSave] - 1] = Opt[i - 1];
            if (iSave + 1 > 2147483645) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              kNext = iSave + 3;
            }

            if ((Opt[kNext - 1] < Xnorm0) && (iSave + 1 <= nA)) {
              kDrop = iSave;
              if (iSave + 1 > 2147483645) {
                i = MAX_int32_T;
              } else {
                i = iSave + 3;
              }

              Xnorm0 = Opt[i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            x[0] = Opt[0];
            x[1] = Opt[1];
          } else {
            if (*status > 2147483646) {
              *status = MAX_int32_T;
            } else {
              (*status)++;
            }

            if (*status > 5) {
              nA = 0;
              for (i = 0; i < 12; i++) {
                iA[i] = false;
                iC[i] = 0;
              }

              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_balanc_DropConstraint_k(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&lambda[0], 0, 12U * sizeof(real_T));
          x[0] = -Hinv[0] * f[0] + -Hinv[2] * f[1];
          x[1] = -Hinv[1] * f[0] + -Hinv[3] * f[1];
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    x[0] = -Hinv[0] * f[0] + -Hinv[2] * f[1];
    x[1] = -Hinv[1] * f[0] + -Hinv[3] * f[1];
    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_balance_ctrl_norm_d(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      kNext = -1;
      for (i = 0; i < 12; i++) {
        if (!cTolComputed) {
          cVal = fabs(Ac[i] * x[0]);
          t1 = fabs(Ac[i + 12] * x[1]);
          if (cVal < t1) {
            cVal = t1;
          } else if (rtIsNaN(cVal)) {
            if (!rtIsNaN(t1)) {
              cVal = t1;
            } else {
              cVal = (rtNaN);
            }
          }

          if ((cTol[i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[i] = cVal;
          }
        }

        if (!iA[i]) {
          cVal = ((Ac[i + 12] * x[1] + Ac[i] * x[0]) - b[i]) / cTol[i];
          if (cVal < cMin) {
            cMin = cVal;
            kNext = i;
          }
        }
      }

      cTolComputed = true;
      if (kNext + 1 <= 0) {
        exitg2 = true;
      } else if (*status == maxiter) {
        *status = 0;
        exitg2 = true;
      } else {
        do {
          exitg1 = 0;
          if ((kNext + 1 > 0) && (*status <= maxiter)) {
            guard2 = false;
            guard3 = false;
            if (nA == 0) {
              t1 = Ac[kNext];
              cMin = Hinv[0] * t1;
              cVal = Hinv[1] * t1;
              t1 = Ac[kNext + 12];
              cMin += Hinv[2] * t1;
              cVal += Hinv[3] * t1;
              guard3 = true;
            } else {
              cMin = imperix_balance_ct_KWIKfactor_k(Ac, iC, nA, Linv, RLinv, D,
                H, 2);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                t1 = Ac[kNext];
                cMin = -H[0] * t1;
                cVal = -H[1] * t1;
                t1 = Ac[kNext + 12];
                cMin += -H[2] * t1;
                cVal += -H[3] * t1;
                for (i = 0; i < nA; i++) {
                  kDrop = i << 1;
                  r[i] = D[kDrop + 1] * t1 + D[kDrop] * Ac[kNext];
                }

                guard3 = true;
              }
            }

            if (guard3) {
              kDrop = 0;
              t1 = 0.0;
              DualFeasible = true;
              ColdReset = true;
              if (nA > 0) {
                i = 0;
                exitg4 = false;
                while ((!exitg4) && (i <= nA - 1)) {
                  if (r[i] >= 1.0E-12) {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    i++;
                  }
                }
              }

              if ((nA != 0) && (!ColdReset)) {
                for (i = 0; i < nA; i++) {
                  rVal = r[i];
                  if (rVal > 1.0E-12) {
                    rVal = lambda[iC[i] - 1] / rVal;
                    if ((kDrop == 0) || (rVal < rMin)) {
                      rMin = rVal;
                      kDrop = i + 1;
                    }
                  }
                }

                if (kDrop > 0) {
                  t1 = rMin;
                  DualFeasible = false;
                }
              }

              rVal = Ac[kNext + 12];
              t = rVal * cVal + cMin * Ac[kNext];
              if (t <= 0.0) {
                rVal = 0.0;
                ColdReset = true;
              } else {
                rVal = (b[kNext] - (rVal * x[1] + Ac[kNext] * x[0])) / t;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                *status = -1;
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  t = t1;
                } else if (DualFeasible) {
                  t = rVal;
                } else if (t1 < rVal) {
                  t = t1;
                } else {
                  t = rVal;
                }

                for (i = 0; i < nA; i++) {
                  iSave = iC[i];
                  lambda[iSave - 1] -= t * r[i];
                  if ((iSave <= 12) && (lambda[iSave - 1] < 0.0)) {
                    lambda[iSave - 1] = 0.0;
                  }
                }

                lambda[kNext] += t;
                frexp(1.0, &exponent);
                if (fabs(t - t1) < 2.2204460492503131E-16) {
                  imperix_balanc_DropConstraint_k(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  x[0] += t * cMin;
                  x[1] += t * cVal;
                  frexp(1.0, &b_exponent);
                  if (fabs(t - rVal) < 2.2204460492503131E-16) {
                    if (nA == 2) {
                      *status = -1;
                      exitg1 = 1;
                    } else {
                      if (nA > 2147483646) {
                        nA = MAX_int32_T;
                      } else {
                        nA++;
                      }

                      iC[nA - 1] = kNext + 1;
                      kDrop = nA - 1;
                      exitg4 = false;
                      while ((!exitg4) && (kDrop + 1 > 1)) {
                        i = iC[kDrop - 1];
                        if (iC[kDrop] > i) {
                          exitg4 = true;
                        } else {
                          iSave = iC[kDrop];
                          iC[kDrop] = i;
                          iC[kDrop - 1] = iSave;
                          kDrop--;
                        }
                      }

                      iA[kNext] = true;
                      kNext = -1;
                      guard2 = true;
                    }
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              }
            }

            if (guard2) {
              if (*status <= 2147483646) {
                (*status)++;
              }
            }
          } else {
            cMin = imperix_balance_ctrl_norm_d(x);
            if (fabs(cMin - Xnorm0) > 0.001) {
              Xnorm0 = cMin;
              for (kNext = 0; kNext < 12; kNext++) {
                cMin = fabs(b[kNext]);
                if (cMin >= 1.0) {
                  cTol[kNext] = cMin;
                } else {
                  cTol[kNext] = 1.0;
                }
              }

              cTolComputed = false;
            }

            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance_ctrl_trisolve(const real_T A[16], real_T B[16])
{
  for (int32_T j = 0; j < 4; j++) {
    int32_T jBcol;
    jBcol = j << 2;
    for (int32_T b_k = 0; b_k < 4; b_k++) {
      real_T B_0;
      int32_T B_tmp;
      int32_T kAcol;
      kAcol = b_k << 2;
      B_tmp = b_k + jBcol;
      B_0 = B[B_tmp];
      if (B_0 != 0.0) {
        B[B_tmp] = B_0 / A[b_k + kAcol];
        for (int32_T i = b_k + 2; i < 5; i++) {
          int32_T tmp;
          tmp = (i + jBcol) - 1;
          B[tmp] -= A[(i + kAcol) - 1] * B[B_tmp];
        }
      }
    }
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

// Function for MATLAB Function: '<S27>/Energy balance'
static real_T imperix_balance_ctrl_norm(const real_T x[4])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[3]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

// Function for MATLAB Function: '<S27>/Energy balance'
static real_T imperix_balance_ctrl_maximum(const real_T x[4])
{
  real_T ex;
  int32_T idx;
  int32_T k;
  if (!rtIsNaN(x[0])) {
    idx = 1;
  } else {
    boolean_T exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (!rtIsNaN(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    for (k = idx + 1; k < 5; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (ex < x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

// Function for MATLAB Function: '<S27>/Energy balance'
static real_T imperix_balance_ctrl_xnrm2(int32_T n, const real_T x[16], int32_T
  ix0)
{
  real_T y;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      real_T scale;
      int32_T kend;
      scale = 3.3121686421112381E-170;
      kend = ix0 + n;
      for (int32_T k = ix0; k < kend; k++) {
        real_T absxk;
        absxk = fabs(x[k - 1]);
        if (absxk > scale) {
          real_T t;
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          real_T t;
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance_ctrl_xgemv(int32_T m, int32_T n, const real_T A[16],
  int32_T ia0, const real_T x[16], int32_T ix0, real_T y[4])
{
  if ((m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = ((n - 1) << 2) + ia0;
    for (int32_T b_iy = ia0; b_iy <= b; b_iy += 4) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = b_iy + m;
      for (ia = b_iy; ia < d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * A[ia - 1];
      }

      ia = (b_iy - ia0) >> 2;
      y[ia] += c;
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[4], real_T A[16], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    int32_T jA;
    jA = ia0;
    for (int32_T j = 0; j < n; j++) {
      real_T temp;
      temp = y[j];
      if (temp != 0.0) {
        int32_T b;
        temp *= alpha1;
        b = m + jA;
        for (int32_T ijA = jA; ijA < b; ijA++) {
          A[ijA - 1] += A[((ix0 + ijA) - jA) - 1] * temp;
        }
      }

      jA += 4;
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static real_T imperix_balance_ctrl_KWIKfactor(const real_T Ac[96], const int32_T
  iC[24], int32_T nA, const real_T Linv[16], real_T RLinv[16], real_T D[16],
  real_T H[16], int32_T n)
{
  real_T A[16];
  real_T Q[16];
  real_T R[16];
  real_T TL[16];
  real_T tau[4];
  real_T work[4];
  real_T RLinv_0;
  real_T RLinv_1;
  real_T RLinv_2;
  real_T Status;
  real_T tmp;
  real_T xnorm;
  int32_T b_lastv;
  int32_T c_lastc;
  int32_T exitg1;
  int32_T f;
  int32_T ii;
  int32_T k_i;
  int32_T knt;
  int32_T qY;
  boolean_T exitg2;
  Status = 1.0;
  memset(&RLinv[0], 0, sizeof(real_T) << 4U);
  for (ii = 0; ii < nA; ii++) {
    b_lastv = iC[ii];
    xnorm = 0.0;
    RLinv_0 = 0.0;
    RLinv_1 = 0.0;
    RLinv_2 = 0.0;
    for (k_i = 0; k_i < 4; k_i++) {
      tmp = Ac[(24 * k_i + b_lastv) - 1];
      c_lastc = k_i << 2;
      xnorm += Linv[c_lastc] * tmp;
      RLinv_0 += Linv[c_lastc + 1] * tmp;
      RLinv_1 += Linv[c_lastc + 2] * tmp;
      RLinv_2 += Linv[c_lastc + 3] * tmp;
    }

    k_i = ii << 2;
    RLinv[k_i + 3] = RLinv_2;
    RLinv[k_i + 2] = RLinv_1;
    RLinv[k_i + 1] = RLinv_0;
    RLinv[k_i] = xnorm;
  }

  memcpy(&A[0], &RLinv[0], sizeof(real_T) << 4U);
  tau[0] = 0.0;
  work[0] = 0.0;
  tau[1] = 0.0;
  work[1] = 0.0;
  tau[2] = 0.0;
  work[2] = 0.0;
  tau[3] = 0.0;
  work[3] = 0.0;
  for (k_i = 0; k_i < 4; k_i++) {
    ii = (k_i << 2) + k_i;
    if (k_i + 1 < 4) {
      RLinv_0 = A[ii];
      b_lastv = ii + 2;
      tau[k_i] = 0.0;
      xnorm = imperix_balance_ctrl_xnrm2(3 - k_i, A, ii + 2);
      if (xnorm != 0.0) {
        RLinv_1 = A[ii];
        xnorm = rt_hypotd_snf(RLinv_1, xnorm);
        if (RLinv_1 >= 0.0) {
          xnorm = -xnorm;
        }

        if (fabs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          f = (ii - k_i) + 4;
          do {
            knt++;
            for (c_lastc = b_lastv; c_lastc <= f; c_lastc++) {
              A[c_lastc - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            RLinv_0 *= 9.9792015476736E+291;
          } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(RLinv_0, imperix_balance_ctrl_xnrm2(3 - k_i, A,
            ii + 2));
          if (RLinv_0 >= 0.0) {
            xnorm = -xnorm;
          }

          tau[k_i] = (xnorm - RLinv_0) / xnorm;
          RLinv_0 = 1.0 / (RLinv_0 - xnorm);
          for (c_lastc = b_lastv; c_lastc <= f; c_lastc++) {
            A[c_lastc - 1] *= RLinv_0;
          }

          for (b_lastv = 0; b_lastv < knt; b_lastv++) {
            xnorm *= 1.0020841800044864E-292;
          }

          RLinv_0 = xnorm;
        } else {
          tau[k_i] = (xnorm - RLinv_1) / xnorm;
          RLinv_0 = 1.0 / (RLinv_1 - xnorm);
          knt = (ii - k_i) + 4;
          for (c_lastc = b_lastv; c_lastc <= knt; c_lastc++) {
            A[c_lastc - 1] *= RLinv_0;
          }

          RLinv_0 = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[k_i] != 0.0) {
        b_lastv = 4 - k_i;
        c_lastc = (ii - k_i) + 3;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 3 - k_i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = (((c_lastc - 1) << 2) + ii) + 4;
          f = knt;
          do {
            exitg1 = 0;
            if (f + 1 <= knt + b_lastv) {
              if (A[f] != 0.0) {
                exitg1 = 1;
              } else {
                f++;
              }
            } else {
              c_lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        b_lastv = 0;
        c_lastc = 0;
      }

      if (b_lastv > 0) {
        imperix_balance_ctrl_xgemv(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_balance_ctrl_xgerc(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A,
          ii + 5);
      }

      A[ii] = RLinv_0;
    } else {
      tau[3] = 0.0;
    }
  }

  for (k_i = 0; k_i < 4; k_i++) {
    for (ii = 0; ii <= k_i; ii++) {
      b_lastv = k_i << 2;
      R[ii + b_lastv] = A[b_lastv + ii];
    }

    for (ii = k_i + 2; ii < 5; ii++) {
      R[(ii + (k_i << 2)) - 1] = 0.0;
    }

    work[k_i] = 0.0;
  }

  for (k_i = 3; k_i >= 0; k_i--) {
    ii = (k_i << 2) + k_i;
    if (k_i + 1 < 4) {
      A[ii] = 1.0;
      if (tau[k_i] != 0.0) {
        b_lastv = 4 - k_i;
        c_lastc = (ii - k_i) + 3;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 3 - k_i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = (((c_lastc - 1) << 2) + ii) + 4;
          f = knt;
          do {
            exitg1 = 0;
            if (f + 1 <= knt + b_lastv) {
              if (A[f] != 0.0) {
                exitg1 = 1;
              } else {
                f++;
              }
            } else {
              c_lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        b_lastv = 0;
        c_lastc = 0;
      }

      if (b_lastv > 0) {
        imperix_balance_ctrl_xgemv(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_balance_ctrl_xgerc(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A,
          ii + 5);
      }

      c_lastc = (ii - k_i) + 4;
      for (b_lastv = ii + 2; b_lastv <= c_lastc; b_lastv++) {
        A[b_lastv - 1] *= -tau[k_i];
      }
    }

    A[ii] = 1.0 - tau[k_i];
    for (b_lastv = 0; b_lastv < k_i; b_lastv++) {
      A[(ii - b_lastv) - 1] = 0.0;
    }
  }

  for (k_i = 0; k_i < 4; k_i++) {
    ii = k_i << 2;
    Q[ii] = A[ii];
    Q[ii + 1] = A[ii + 1];
    Q[ii + 2] = A[ii + 2];
    Q[ii + 3] = A[ii + 3];
  }

  k_i = 0;
  do {
    exitg1 = 0;
    if (k_i <= nA - 1) {
      if (fabs(R[(k_i << 2) + k_i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        k_i++;
      }
    } else {
      for (k_i = 0; k_i < n; k_i++) {
        for (ii = 0; ii < n; ii++) {
          b_lastv = k_i << 2;
          c_lastc = ii << 2;
          TL[k_i + c_lastc] = ((Linv[b_lastv + 1] * Q[c_lastc + 1] +
                                Linv[b_lastv] * Q[c_lastc]) + Linv[b_lastv + 2] *
                               Q[c_lastc + 2]) + Linv[b_lastv + 3] * Q[c_lastc +
            3];
        }
      }

      memset(&RLinv[0], 0, sizeof(real_T) << 4U);
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        k_i = (b_lastv - 1) << 2;
        ii = (b_lastv + k_i) - 1;
        RLinv[ii] = 1.0;
        for (c_lastc = b_lastv; c_lastc <= nA; c_lastc++) {
          f = (((c_lastc - 1) << 2) + b_lastv) - 1;
          RLinv[f] /= R[ii];
        }

        if (b_lastv > 1) {
          for (c_lastc = 0; c_lastc <= b_lastv - 2; c_lastc++) {
            for (knt = b_lastv; knt <= nA; knt++) {
              ii = (knt - 1) << 2;
              f = ii + c_lastc;
              RLinv[f] -= RLinv[(ii + b_lastv) - 1] * R[k_i + c_lastc];
            }
          }
        }
      }

      for (b_lastv = 0; b_lastv < n; b_lastv++) {
        if (b_lastv + 1 <= n) {
          if (nA > 2147483646) {
            qY = MAX_int32_T;
          } else {
            qY = nA + 1;
          }
        }

        for (c_lastc = b_lastv + 1; c_lastc <= n; c_lastc++) {
          k_i = ((c_lastc - 1) << 2) + b_lastv;
          H[k_i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) << 2;
            H[k_i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + (b_lastv << 2)) - 1] = H[k_i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          k_i = (qY << 2) + b_lastv;
          D[k_i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) << 2;
            D[k_i] += TL[ii + b_lastv] * RLinv[ii + qY];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance__DropConstraint(int32_T kDrop, boolean_T iA[24],
  int32_T *nA, int32_T iC[24])
{
  if (kDrop > 0) {
    iA[iC[kDrop - 1] - 1] = false;
    if (kDrop < *nA) {
      int32_T b;
      int32_T i;
      if (*nA < -2147483647) {
        i = MIN_int32_T;
      } else {
        i = *nA - 1;
      }

      b = i + 1;
      for (i = kDrop; i < b; i++) {
        iC[i - 1] = iC[i];
      }
    }

    iC[*nA - 1] = 0;
    if (*nA < -2147483647) {
      *nA = MIN_int32_T;
    } else {
      (*nA)--;
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance_ctrl_qpkwik(const real_T Linv[16], const real_T
  Hinv[16], const real_T f[4], const real_T Ac[96], const real_T b[24],
  boolean_T iA[24], int32_T maxiter, real_T FeasTol, real_T x[4], real_T lambda
  [24], int32_T *status)
{
  real_T cTol[24];
  real_T D[16];
  real_T H[16];
  real_T RLinv[16];
  real_T U[16];
  real_T Opt[8];
  real_T Rhs[8];
  real_T r[4];
  real_T varargin_1[4];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T rVal;
  real_T t;
  real_T t1;
  real_T z;
  real_T z_idx_2;
  real_T z_idx_3;
  real_T z_tmp;
  int32_T iC[24];
  int32_T U_tmp;
  int32_T U_tmp_0;
  int32_T b_exponent;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exponent;
  int32_T i;
  int32_T k;
  int32_T kDrop;
  int32_T nA;
  int32_T tmp;
  int32_T z_idx_0_tmp;
  boolean_T ColdReset;
  boolean_T DualFeasible;
  boolean_T cTolComputed;
  boolean_T exitg2;
  boolean_T exitg4;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  x[0] = 0.0;
  x[1] = 0.0;
  x[2] = 0.0;
  x[3] = 0.0;
  *status = 1;
  r[0] = 0.0;
  r[1] = 0.0;
  r[2] = 0.0;
  r[3] = 0.0;
  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 24; i++) {
    lambda[i] = 0.0;
    cTol[i] = 1.0;
    iC[i] = 0;
  }

  nA = 0;
  for (i = 0; i < 24; i++) {
    if (iA[i]) {
      nA++;
      iC[nA - 1] = i + 1;
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&Opt[0], 0, sizeof(real_T) << 3U);
    Rhs[0] = f[0];
    Rhs[4] = 0.0;
    Rhs[1] = f[1];
    Rhs[5] = 0.0;
    Rhs[2] = f[2];
    Rhs[6] = 0.0;
    Rhs[3] = f[3];
    Rhs[7] = 0.0;
    DualFeasible = false;
    tmp = static_cast<int32_T>(rt_roundd_snf(0.3 * static_cast<real_T>(nA)));
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_balance_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H,
          4);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            memset(&iC[0], 0, 24U * sizeof(int32_T));
            for (i = 0; i < 24; i++) {
              iA[i] = false;
            }

            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483643) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 5;
            }

            Rhs[i - 1] = b[iC[kDrop] - 1];
            for (i = kDrop + 1; i <= nA; i++) {
              U_tmp_0 = ((kDrop << 2) + i) - 1;
              U[U_tmp_0] = 0.0;
              for (k = 0; k < nA; k++) {
                U_tmp = k << 2;
                U[U_tmp_0] += RLinv[(U_tmp + i) - 1] * RLinv[U_tmp + kDrop];
              }

              U[kDrop + ((i - 1) << 2)] = U[U_tmp_0];
            }
          }

          for (kDrop = 0; kDrop < 4; kDrop++) {
            Opt[kDrop] = ((H[kDrop + 4] * Rhs[1] + H[kDrop] * Rhs[0]) + H[kDrop
                          + 8] * Rhs[2]) + H[kDrop + 12] * Rhs[3];
            for (k = 0; k < nA; k++) {
              if (k + 1 > 2147483643) {
                i = MAX_int32_T;
              } else {
                i = k + 5;
              }

              Opt[kDrop] += D[(k << 2) + kDrop] * Rhs[i - 1];
            }
          }

          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483643) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 5;
            }

            k = kDrop << 2;
            Opt[i - 1] = ((D[k + 1] * Rhs[1] + D[k] * Rhs[0]) + D[k + 2] * Rhs[2])
              + D[k + 3] * Rhs[3];
            if (kDrop + 1 > 2147483643) {
              i = MAX_int32_T;
              U_tmp_0 = MAX_int32_T;
            } else {
              i = kDrop + 5;
              U_tmp_0 = kDrop + 5;
            }

            for (k = 0; k < nA; k++) {
              if (k + 1 > 2147483643) {
                U_tmp = MAX_int32_T;
              } else {
                U_tmp = k + 5;
              }

              Opt[i - 1] = U[(k << 2) + kDrop] * Rhs[U_tmp - 1] + Opt[U_tmp_0 -
                1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (k = 0; k < nA; k++) {
            if (k + 1 > 2147483643) {
              i = MAX_int32_T;
            } else {
              i = k + 5;
            }

            lambda[iC[k] - 1] = Opt[i - 1];
            if (k + 1 > 2147483643) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              z_idx_0_tmp = k + 5;
            }

            if ((Opt[z_idx_0_tmp - 1] < Xnorm0) && (k + 1 <= nA)) {
              kDrop = k;
              if (k + 1 > 2147483643) {
                i = MAX_int32_T;
              } else {
                i = k + 5;
              }

              Xnorm0 = Opt[i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            x[0] = Opt[0];
            x[1] = Opt[1];
            x[2] = Opt[2];
            x[3] = Opt[3];
          } else {
            if (*status > 2147483646) {
              *status = MAX_int32_T;
            } else {
              (*status)++;
            }

            if (tmp <= 5) {
              i = 5;
            } else {
              i = tmp;
            }

            if (*status > i) {
              nA = 0;
              memset(&iC[0], 0, 24U * sizeof(int32_T));
              for (i = 0; i < 24; i++) {
                iA[i] = false;
              }

              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_balance__DropConstraint(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&lambda[0], 0, 24U * sizeof(real_T));
          Xnorm0 = f[1];
          cMin = f[0];
          cVal = f[2];
          z_idx_2 = f[3];
          for (tmp = 0; tmp < 4; tmp++) {
            x[tmp] = ((-Hinv[tmp + 4] * Xnorm0 + -Hinv[tmp] * cMin) + -Hinv[tmp
                      + 8] * cVal) + -Hinv[tmp + 12] * z_idx_2;
          }
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    Xnorm0 = f[1];
    cMin = f[0];
    cVal = f[2];
    z_idx_2 = f[3];
    for (tmp = 0; tmp < 4; tmp++) {
      x[tmp] = ((-Hinv[tmp + 4] * Xnorm0 + -Hinv[tmp] * cMin) + -Hinv[tmp + 8] *
                cVal) + -Hinv[tmp + 12] * z_idx_2;
    }

    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_balance_ctrl_norm(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      tmp = -1;
      for (i = 0; i < 24; i++) {
        if (!cTolComputed) {
          varargin_1[0] = fabs(Ac[i] * x[0]);
          varargin_1[1] = fabs(Ac[i + 24] * x[1]);
          varargin_1[2] = fabs(Ac[i + 48] * x[2]);
          varargin_1[3] = fabs(Ac[i + 72] * x[3]);
          cVal = imperix_balance_ctrl_maximum(varargin_1);
          if ((cTol[i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[i] = cVal;
          }
        }

        if (!iA[i]) {
          cVal = ((((Ac[i + 24] * x[1] + Ac[i] * x[0]) + Ac[i + 48] * x[2]) +
                   Ac[i + 72] * x[3]) - b[i]) / cTol[i];
          if (cVal < cMin) {
            cMin = cVal;
            tmp = i;
          }
        }
      }

      cTolComputed = true;
      if (tmp + 1 <= 0) {
        exitg2 = true;
      } else if (*status == maxiter) {
        *status = 0;
        exitg2 = true;
      } else {
        do {
          exitg1 = 0;
          if ((tmp + 1 > 0) && (*status <= maxiter)) {
            guard2 = false;
            guard3 = false;
            if (nA == 0) {
              cMin = 0.0;
              cVal = 0.0;
              z_idx_2 = 0.0;
              z_idx_3 = 0.0;
              for (i = 0; i < 4; i++) {
                t1 = Ac[24 * i + tmp];
                z_idx_0_tmp = i << 2;
                cMin += Hinv[z_idx_0_tmp] * t1;
                cVal += Hinv[z_idx_0_tmp + 1] * t1;
                z_idx_2 += Hinv[z_idx_0_tmp + 2] * t1;
                z_idx_3 += Hinv[z_idx_0_tmp + 3] * t1;
              }

              guard3 = true;
            } else {
              cMin = imperix_balance_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D,
                H, 4);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                for (i = 0; i < 16; i++) {
                  U[i] = -H[i];
                }

                cMin = 0.0;
                cVal = 0.0;
                z_idx_2 = 0.0;
                z_idx_3 = 0.0;
                for (i = 0; i < 4; i++) {
                  t1 = Ac[24 * i + tmp];
                  z_idx_0_tmp = i << 2;
                  cMin += U[z_idx_0_tmp] * t1;
                  cVal += U[z_idx_0_tmp + 1] * t1;
                  z_idx_2 += U[z_idx_0_tmp + 2] * t1;
                  z_idx_3 += U[z_idx_0_tmp + 3] * t1;
                }

                for (i = 0; i < nA; i++) {
                  z_idx_0_tmp = i << 2;
                  r[i] = ((D[z_idx_0_tmp + 1] * Ac[tmp + 24] + D[z_idx_0_tmp] *
                           Ac[tmp]) + D[z_idx_0_tmp + 2] * Ac[tmp + 48]) +
                    D[z_idx_0_tmp + 3] * Ac[tmp + 72];
                }

                guard3 = true;
              }
            }

            if (guard3) {
              kDrop = 0;
              t1 = 0.0;
              DualFeasible = true;
              ColdReset = true;
              if (nA > 0) {
                i = 0;
                exitg4 = false;
                while ((!exitg4) && (i <= nA - 1)) {
                  if (r[i] >= 1.0E-12) {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    i++;
                  }
                }
              }

              if ((nA != 0) && (!ColdReset)) {
                for (i = 0; i < nA; i++) {
                  rVal = r[i];
                  if (rVal > 1.0E-12) {
                    rVal = lambda[iC[i] - 1] / rVal;
                    if ((kDrop == 0) || (rVal < rMin)) {
                      rMin = rVal;
                      kDrop = i + 1;
                    }
                  }
                }

                if (kDrop > 0) {
                  t1 = rMin;
                  DualFeasible = false;
                }
              }

              rVal = Ac[tmp + 24];
              t = Ac[tmp + 48];
              z_tmp = Ac[tmp + 72];
              z = ((rVal * cVal + cMin * Ac[tmp]) + t * z_idx_2) + z_tmp *
                z_idx_3;
              if (z <= 0.0) {
                rVal = 0.0;
                ColdReset = true;
              } else {
                rVal = (b[tmp] - (((rVal * x[1] + Ac[tmp] * x[0]) + t * x[2]) +
                                  z_tmp * x[3])) / z;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                *status = -1;
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  t = t1;
                } else if (DualFeasible) {
                  t = rVal;
                } else if (t1 < rVal) {
                  t = t1;
                } else {
                  t = rVal;
                }

                for (i = 0; i < nA; i++) {
                  z_idx_0_tmp = iC[i];
                  lambda[z_idx_0_tmp - 1] -= t * r[i];
                  if ((z_idx_0_tmp <= 24) && (lambda[z_idx_0_tmp - 1] < 0.0)) {
                    lambda[z_idx_0_tmp - 1] = 0.0;
                  }
                }

                lambda[tmp] += t;
                frexp(1.0, &exponent);
                if (fabs(t - t1) < 2.2204460492503131E-16) {
                  imperix_balance__DropConstraint(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  x[0] += t * cMin;
                  x[1] += t * cVal;
                  x[2] += t * z_idx_2;
                  x[3] += t * z_idx_3;
                  frexp(1.0, &b_exponent);
                  if (fabs(t - rVal) < 2.2204460492503131E-16) {
                    if (nA == 4) {
                      *status = -1;
                      exitg1 = 1;
                    } else {
                      if (nA > 2147483646) {
                        nA = MAX_int32_T;
                      } else {
                        nA++;
                      }

                      iC[nA - 1] = tmp + 1;
                      z_idx_0_tmp = nA - 1;
                      exitg4 = false;
                      while ((!exitg4) && (z_idx_0_tmp + 1 > 1)) {
                        i = iC[z_idx_0_tmp - 1];
                        if (iC[z_idx_0_tmp] > i) {
                          exitg4 = true;
                        } else {
                          kDrop = iC[z_idx_0_tmp];
                          iC[z_idx_0_tmp] = i;
                          iC[z_idx_0_tmp - 1] = kDrop;
                          z_idx_0_tmp--;
                        }
                      }

                      iA[tmp] = true;
                      tmp = -1;
                      guard2 = true;
                    }
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              }
            }

            if (guard2) {
              if (*status <= 2147483646) {
                (*status)++;
              }
            }
          } else {
            cMin = imperix_balance_ctrl_norm(x);
            if (fabs(cMin - Xnorm0) > 0.001) {
              Xnorm0 = cMin;
              for (tmp = 0; tmp < 24; tmp++) {
                cMin = fabs(b[tmp]);
                if (cMin >= 1.0) {
                  cTol[tmp] = cMin;
                } else {
                  cTol[tmp] = 1.0;
                }
              }

              cTolComputed = false;
            }

            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static real_T imperix_balance_ct_KWIKfactor_i(const real_T Ac[8], const int32_T
  iC[4], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n)
{
  real_T A[4];
  real_T Q[4];
  real_T R[4];
  real_T TL[4];
  real_T tau[2];
  real_T work[2];
  real_T RLinv_0;
  real_T RLinv_1;
  real_T Status;
  real_T xnorm;
  int32_T b_lastv;
  int32_T c_lastc;
  int32_T exitg1;
  int32_T ii;
  int32_T k_i;
  int32_T knt;
  int32_T qY;
  int32_T tmp;
  Status = 1.0;
  RLinv[0] = 0.0;
  RLinv[1] = 0.0;
  RLinv[2] = 0.0;
  RLinv[3] = 0.0;
  for (ii = 0; ii < nA; ii++) {
    k_i = iC[ii];
    xnorm = Ac[k_i - 1];
    RLinv_0 = Linv[0] * xnorm;
    RLinv_1 = Linv[1] * xnorm;
    xnorm = Ac[k_i + 3];
    k_i = ii << 1;
    RLinv[k_i] = Linv[2] * xnorm + RLinv_0;
    RLinv[k_i + 1] = Linv[3] * xnorm + RLinv_1;
  }

  A[0] = RLinv[0];
  A[1] = RLinv[1];
  A[2] = RLinv[2];
  A[3] = RLinv[3];
  tau[0] = 0.0;
  work[0] = 0.0;
  tau[1] = 0.0;
  work[1] = 0.0;
  for (k_i = 0; k_i < 2; k_i++) {
    ii = (k_i << 1) + k_i;
    if (k_i + 1 < 2) {
      RLinv_0 = A[ii];
      c_lastc = ii + 2;
      tau[0] = 0.0;
      xnorm = imperix_balance_ctrl_xnrm2_c(1, A, ii + 2);
      if (xnorm != 0.0) {
        RLinv_1 = A[ii];
        xnorm = rt_hypotd_snf(RLinv_1, xnorm);
        if (RLinv_1 >= 0.0) {
          xnorm = -xnorm;
        }

        if (fabs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          do {
            knt++;
            for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
              A[b_lastv - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            RLinv_0 *= 9.9792015476736E+291;
          } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(RLinv_0, imperix_balance_ctrl_xnrm2_c(1, A, ii +
            2));
          if (RLinv_0 >= 0.0) {
            xnorm = -xnorm;
          }

          tau[0] = (xnorm - RLinv_0) / xnorm;
          RLinv_0 = 1.0 / (RLinv_0 - xnorm);
          for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
            A[b_lastv - 1] *= RLinv_0;
          }

          for (b_lastv = 0; b_lastv < knt; b_lastv++) {
            xnorm *= 1.0020841800044864E-292;
          }

          RLinv_0 = xnorm;
        } else {
          tau[0] = (xnorm - RLinv_1) / xnorm;
          RLinv_0 = 1.0 / (RLinv_1 - xnorm);
          for (b_lastv = c_lastc; b_lastv <= ii + 2; b_lastv++) {
            A[b_lastv - 1] *= RLinv_0;
          }

          RLinv_0 = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[0] != 0.0) {
        b_lastv = 2;
        c_lastc = ii + 1;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 1;
        knt = ii;
        do {
          exitg1 = 0;
          if (knt + 3 <= (ii + b_lastv) + 2) {
            if (A[knt + 2] != 0.0) {
              exitg1 = 1;
            } else {
              knt++;
            }
          } else {
            c_lastc = 0;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        b_lastv = 0;
        c_lastc = 0;
      }

      if (b_lastv > 0) {
        imperix_balance_ctrl_xgemv_o(b_lastv, c_lastc, A, ii + 3, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i(b_lastv, c_lastc, -tau[0], ii + 1, work, A,
          ii + 3);
      }

      A[ii] = RLinv_0;
    } else {
      tau[1] = 0.0;
    }
  }

  for (k_i = 0; k_i < 2; k_i++) {
    for (ii = 0; ii <= k_i; ii++) {
      b_lastv = k_i << 1;
      R[ii + b_lastv] = A[b_lastv + ii];
    }

    if (k_i <= 0) {
      R[(k_i << 1) + 1] = 0.0;
    }

    work[k_i] = 0.0;
  }

  for (k_i = 1; k_i >= 0; k_i--) {
    ii = (k_i << 1) + k_i;
    if (k_i + 1 < 2) {
      A[ii] = 1.0;
      if (tau[k_i] != 0.0) {
        b_lastv = 2;
        c_lastc = ii + 1;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 1;
        knt = ii;
        do {
          exitg1 = 0;
          if (knt + 3 <= (ii + b_lastv) + 2) {
            if (A[knt + 2] != 0.0) {
              exitg1 = 1;
            } else {
              knt++;
            }
          } else {
            c_lastc = 0;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        b_lastv = 0;
        c_lastc = 0;
      }

      if (b_lastv > 0) {
        imperix_balance_ctrl_xgemv_o(b_lastv, c_lastc, A, ii + 3, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i(b_lastv, c_lastc, -tau[k_i], ii + 1, work,
          A, ii + 3);
      }

      for (b_lastv = ii + 2; b_lastv <= ii + 2; b_lastv++) {
        A[b_lastv - 1] *= -tau[k_i];
      }
    }

    A[ii] = 1.0 - tau[k_i];
    if (k_i - 1 >= 0) {
      A[ii - 1] = 0.0;
    }
  }

  Q[0] = A[0];
  Q[1] = A[1];
  Q[2] = A[2];
  Q[3] = A[3];
  k_i = 0;
  do {
    exitg1 = 0;
    if (k_i <= nA - 1) {
      if (fabs(R[(k_i << 1) + k_i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        k_i++;
      }
    } else {
      for (k_i = 0; k_i < n; k_i++) {
        for (ii = 0; ii < n; ii++) {
          b_lastv = k_i << 1;
          c_lastc = ii << 1;
          TL[k_i + c_lastc] = Linv[b_lastv + 1] * Q[c_lastc + 1] + Linv[b_lastv]
            * Q[c_lastc];
        }
      }

      RLinv[0] = 0.0;
      RLinv[1] = 0.0;
      RLinv[2] = 0.0;
      RLinv[3] = 0.0;
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        k_i = (b_lastv - 1) << 1;
        ii = (b_lastv + k_i) - 1;
        RLinv[ii] = 1.0;
        for (c_lastc = b_lastv; c_lastc <= nA; c_lastc++) {
          tmp = (((c_lastc - 1) << 1) + b_lastv) - 1;
          RLinv[tmp] /= R[ii];
        }

        if (b_lastv > 1) {
          for (c_lastc = 0; c_lastc <= b_lastv - 2; c_lastc++) {
            for (knt = b_lastv; knt <= nA; knt++) {
              ii = (knt - 1) << 1;
              tmp = ii + c_lastc;
              RLinv[tmp] -= RLinv[(ii + b_lastv) - 1] * R[k_i + c_lastc];
            }
          }
        }
      }

      for (b_lastv = 0; b_lastv < n; b_lastv++) {
        if (b_lastv + 1 <= n) {
          if (nA > 2147483646) {
            qY = MAX_int32_T;
          } else {
            qY = nA + 1;
          }
        }

        for (c_lastc = b_lastv + 1; c_lastc <= n; c_lastc++) {
          k_i = ((c_lastc - 1) << 1) + b_lastv;
          H[k_i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) << 1;
            H[k_i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + (b_lastv << 1)) - 1] = H[k_i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          k_i = (qY << 1) + b_lastv;
          D[k_i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) << 1;
            D[k_i] += TL[ii + b_lastv] * RLinv[ii + qY];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balanc_DropConstraint_d(int32_T kDrop, boolean_T iA[4],
  int32_T *nA, int32_T iC[4])
{
  if (kDrop > 0) {
    iA[iC[kDrop - 1] - 1] = false;
    if (kDrop < *nA) {
      int32_T b;
      int32_T i;
      if (*nA < -2147483647) {
        i = MIN_int32_T;
      } else {
        i = *nA - 1;
      }

      b = i + 1;
      for (i = kDrop; i < b; i++) {
        iC[i - 1] = iC[i];
      }
    }

    iC[*nA - 1] = 0;
    if (*nA < -2147483647) {
      *nA = MIN_int32_T;
    } else {
      (*nA)--;
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_balance_ctrl_qpkwik_l(const real_T Linv[4], const real_T
  Hinv[4], const real_T f[2], const real_T Ac[8], const real_T b[4], boolean_T
  iA[4], int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[4], int32_T
  *status)
{
  real_T D[4];
  real_T H[4];
  real_T Opt[4];
  real_T RLinv[4];
  real_T Rhs[4];
  real_T U[4];
  real_T cTol[4];
  real_T r[2];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T rVal;
  real_T t;
  real_T t1;
  int32_T iC[4];
  int32_T U_tmp;
  int32_T U_tmp_0;
  int32_T b_exponent;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exponent;
  int32_T f_i;
  int32_T iSave;
  int32_T kDrop;
  int32_T kNext;
  int32_T nA;
  boolean_T ColdReset;
  boolean_T DualFeasible;
  boolean_T cTolComputed;
  boolean_T exitg2;
  boolean_T exitg4;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  x[0] = 0.0;
  x[1] = 0.0;
  lambda[0] = 0.0;
  lambda[1] = 0.0;
  lambda[2] = 0.0;
  lambda[3] = 0.0;
  *status = 1;
  r[0] = 0.0;
  r[1] = 0.0;
  rMin = 0.0;
  cTolComputed = false;
  cTol[0] = 1.0;
  iC[0] = 0;
  cTol[1] = 1.0;
  iC[1] = 0;
  cTol[2] = 1.0;
  iC[2] = 0;
  cTol[3] = 1.0;
  iC[3] = 0;
  nA = 0;
  if (iA[0]) {
    nA = 1;
    iC[0] = 1;
  }

  if (iA[1]) {
    nA++;
    iC[nA - 1] = 2;
  }

  if (iA[2]) {
    nA++;
    iC[nA - 1] = 3;
  }

  if (iA[3]) {
    nA++;
    iC[nA - 1] = 4;
  }

  guard1 = false;
  if (nA > 0) {
    Opt[0] = 0.0;
    Opt[1] = 0.0;
    Opt[2] = 0.0;
    Opt[3] = 0.0;
    Rhs[0] = f[0];
    Rhs[2] = 0.0;
    Rhs[1] = f[1];
    Rhs[3] = 0.0;
    DualFeasible = false;
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_balance_ct_KWIKfactor_i(Ac, iC, nA, Linv, RLinv, D, H,
          2);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            iA[0] = false;
            iC[0] = 0;
            iA[1] = false;
            iC[1] = 0;
            iA[2] = false;
            iC[2] = 0;
            iA[3] = false;
            iC[3] = 0;
            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483645) {
              f_i = MAX_int32_T;
            } else {
              f_i = kDrop + 3;
            }

            Rhs[f_i - 1] = b[iC[kDrop] - 1];
            for (f_i = kDrop + 1; f_i <= nA; f_i++) {
              U_tmp_0 = ((kDrop << 1) + f_i) - 1;
              U[U_tmp_0] = 0.0;
              for (iSave = 0; iSave < nA; iSave++) {
                U_tmp = iSave << 1;
                U[U_tmp_0] += RLinv[(U_tmp + f_i) - 1] * RLinv[U_tmp + kDrop];
              }

              U[kDrop + ((f_i - 1) << 1)] = U[U_tmp_0];
            }
          }

          for (kDrop = 0; kDrop < 2; kDrop++) {
            Opt[kDrop] = H[kDrop + 2] * Rhs[1] + H[kDrop] * Rhs[0];
            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483645) {
                f_i = MAX_int32_T;
              } else {
                f_i = iSave + 3;
              }

              Opt[kDrop] += D[(iSave << 1) + kDrop] * Rhs[f_i - 1];
            }
          }

          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483645) {
              f_i = MAX_int32_T;
            } else {
              f_i = kDrop + 3;
            }

            iSave = kDrop << 1;
            Opt[f_i - 1] = D[iSave + 1] * Rhs[1] + D[iSave] * Rhs[0];
            if (kDrop + 1 > 2147483645) {
              f_i = MAX_int32_T;
              U_tmp_0 = MAX_int32_T;
            } else {
              f_i = kDrop + 3;
              U_tmp_0 = kDrop + 3;
            }

            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483645) {
                U_tmp = MAX_int32_T;
              } else {
                U_tmp = iSave + 3;
              }

              Opt[f_i - 1] = U[(iSave << 1) + kDrop] * Rhs[U_tmp - 1] +
                Opt[U_tmp_0 - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (iSave = 0; iSave < nA; iSave++) {
            if (iSave + 1 > 2147483645) {
              f_i = MAX_int32_T;
            } else {
              f_i = iSave + 3;
            }

            lambda[iC[iSave] - 1] = Opt[f_i - 1];
            if (iSave + 1 > 2147483645) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              kNext = iSave + 3;
            }

            if ((Opt[kNext - 1] < Xnorm0) && (iSave + 1 <= nA)) {
              kDrop = iSave;
              if (iSave + 1 > 2147483645) {
                f_i = MAX_int32_T;
              } else {
                f_i = iSave + 3;
              }

              Xnorm0 = Opt[f_i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            x[0] = Opt[0];
            x[1] = Opt[1];
          } else {
            if (*status > 2147483646) {
              *status = MAX_int32_T;
            } else {
              (*status)++;
            }

            if (*status > 5) {
              nA = 0;
              iA[0] = false;
              iC[0] = 0;
              iA[1] = false;
              iC[1] = 0;
              iA[2] = false;
              iC[2] = 0;
              iA[3] = false;
              iC[3] = 0;
              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_balanc_DropConstraint_d(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          lambda[0] = 0.0;
          lambda[1] = 0.0;
          lambda[2] = 0.0;
          lambda[3] = 0.0;
          x[0] = -Hinv[0] * f[0] + -Hinv[2] * f[1];
          x[1] = -Hinv[1] * f[0] + -Hinv[3] * f[1];
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    x[0] = -Hinv[0] * f[0] + -Hinv[2] * f[1];
    x[1] = -Hinv[1] * f[0] + -Hinv[3] * f[1];
    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_balance_ctrl_norm_d(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      kNext = -1;
      for (f_i = 0; f_i < 4; f_i++) {
        if (!cTolComputed) {
          cVal = fabs(Ac[f_i] * x[0]);
          t1 = fabs(Ac[f_i + 4] * x[1]);
          if (cVal < t1) {
            cVal = t1;
          } else if (rtIsNaN(cVal)) {
            if (!rtIsNaN(t1)) {
              cVal = t1;
            } else {
              cVal = (rtNaN);
            }
          }

          if ((cTol[f_i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[f_i] = cVal;
          }
        }

        if (!iA[f_i]) {
          cVal = ((Ac[f_i + 4] * x[1] + Ac[f_i] * x[0]) - b[f_i]) / cTol[f_i];
          if (cVal < cMin) {
            cMin = cVal;
            kNext = f_i;
          }
        }
      }

      cTolComputed = true;
      if (kNext + 1 <= 0) {
        exitg2 = true;
      } else if (*status == maxiter) {
        *status = 0;
        exitg2 = true;
      } else {
        do {
          exitg1 = 0;
          if ((kNext + 1 > 0) && (*status <= maxiter)) {
            guard2 = false;
            guard3 = false;
            if (nA == 0) {
              t1 = Ac[kNext];
              cMin = Hinv[0] * t1;
              cVal = Hinv[1] * t1;
              t1 = Ac[kNext + 4];
              cMin += Hinv[2] * t1;
              cVal += Hinv[3] * t1;
              guard3 = true;
            } else {
              cMin = imperix_balance_ct_KWIKfactor_i(Ac, iC, nA, Linv, RLinv, D,
                H, 2);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                t1 = Ac[kNext];
                cMin = -H[0] * t1;
                cVal = -H[1] * t1;
                t1 = Ac[kNext + 4];
                cMin += -H[2] * t1;
                cVal += -H[3] * t1;
                for (f_i = 0; f_i < nA; f_i++) {
                  kDrop = f_i << 1;
                  r[f_i] = D[kDrop + 1] * t1 + D[kDrop] * Ac[kNext];
                }

                guard3 = true;
              }
            }

            if (guard3) {
              kDrop = 0;
              t1 = 0.0;
              DualFeasible = true;
              ColdReset = true;
              if (nA > 0) {
                f_i = 0;
                exitg4 = false;
                while ((!exitg4) && (f_i <= nA - 1)) {
                  if (r[f_i] >= 1.0E-12) {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    f_i++;
                  }
                }
              }

              if ((nA != 0) && (!ColdReset)) {
                for (f_i = 0; f_i < nA; f_i++) {
                  rVal = r[f_i];
                  if (rVal > 1.0E-12) {
                    rVal = lambda[iC[f_i] - 1] / rVal;
                    if ((kDrop == 0) || (rVal < rMin)) {
                      rMin = rVal;
                      kDrop = f_i + 1;
                    }
                  }
                }

                if (kDrop > 0) {
                  t1 = rMin;
                  DualFeasible = false;
                }
              }

              rVal = Ac[kNext + 4];
              t = rVal * cVal + cMin * Ac[kNext];
              if (t <= 0.0) {
                rVal = 0.0;
                ColdReset = true;
              } else {
                rVal = (b[kNext] - (rVal * x[1] + Ac[kNext] * x[0])) / t;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                *status = -1;
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  t = t1;
                } else if (DualFeasible) {
                  t = rVal;
                } else if (t1 < rVal) {
                  t = t1;
                } else {
                  t = rVal;
                }

                for (f_i = 0; f_i < nA; f_i++) {
                  iSave = iC[f_i];
                  lambda[iSave - 1] -= t * r[f_i];
                  if ((iSave <= 4) && (lambda[iSave - 1] < 0.0)) {
                    lambda[iSave - 1] = 0.0;
                  }
                }

                lambda[kNext] += t;
                frexp(1.0, &exponent);
                if (fabs(t - t1) < 2.2204460492503131E-16) {
                  imperix_balanc_DropConstraint_d(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  x[0] += t * cMin;
                  x[1] += t * cVal;
                  frexp(1.0, &b_exponent);
                  if (fabs(t - rVal) < 2.2204460492503131E-16) {
                    if (nA == 2) {
                      *status = -1;
                      exitg1 = 1;
                    } else {
                      if (nA > 2147483646) {
                        nA = MAX_int32_T;
                      } else {
                        nA++;
                      }

                      iC[nA - 1] = kNext + 1;
                      kDrop = nA - 1;
                      exitg4 = false;
                      while ((!exitg4) && (kDrop + 1 > 1)) {
                        f_i = iC[kDrop - 1];
                        if (iC[kDrop] > f_i) {
                          exitg4 = true;
                        } else {
                          iSave = iC[kDrop];
                          iC[kDrop] = f_i;
                          iC[kDrop - 1] = iSave;
                          kDrop--;
                        }
                      }

                      iA[kNext] = true;
                      kNext = -1;
                      guard2 = true;
                    }
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              }
            }

            if (guard2) {
              if (*status <= 2147483646) {
                (*status)++;
              }
            }
          } else {
            cMin = imperix_balance_ctrl_norm_d(x);
            if (fabs(cMin - Xnorm0) > 0.001) {
              Xnorm0 = cMin;
              cMin = fabs(b[0]);
              RLinv[0] = cMin;
              if (cMin >= 1.0) {
                cTol[0] = cMin;
              } else {
                cTol[0] = 1.0;
              }

              cMin = fabs(b[1]);
              RLinv[1] = cMin;
              if (cMin >= 1.0) {
                cTol[1] = cMin;
              } else {
                cTol[1] = 1.0;
              }

              cMin = fabs(b[2]);
              RLinv[2] = cMin;
              if (cMin >= 1.0) {
                cTol[2] = cMin;
              } else {
                cTol[2] = 1.0;
              }

              cMin = fabs(b[3]);
              RLinv[3] = cMin;
              if (cMin >= 1.0) {
                cTol[3] = cMin;
              } else {
                cTol[3] = 1.0;
              }

              cTolComputed = false;
            }

            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S27>/Energy balance'
static void imperix_bala_mpcActiveSetSolver(const real_T H[4], const real_T f[2],
  const real_T A[8], const real_T b[4], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[2],
  int32_T *exitflag, boolean_T iA[4])
{
  real_T A_0[8];
  real_T Linv[4];
  real_T Linv_0[4];
  real_T b_0[4];
  real_T b_A[4];
  real_T Linv_tmp;
  real_T ssq;
  int32_T b_k;
  int32_T c_j;
  int32_T idxAjj;
  int32_T info;
  boolean_T exitg1;
  if (options_UseHessianAsInput) {
    b_A[0] = H[0];
    b_A[1] = H[1];
    b_A[2] = H[2];
    b_A[3] = H[3];
    info = 0;
    c_j = 0;
    exitg1 = false;
    while ((!exitg1) && (c_j < 2)) {
      idxAjj = (c_j << 1) + c_j;
      ssq = 0.0;
      if (c_j >= 1) {
        for (b_k = 0; b_k < 1; b_k++) {
          ssq += b_A[1] * b_A[1];
        }
      }

      ssq = b_A[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        b_A[idxAjj] = ssq;
        if (c_j + 1 < 2) {
          ssq = 1.0 / ssq;
          for (b_k = idxAjj + 2; b_k <= idxAjj + 2; b_k++) {
            b_A[b_k - 1] *= ssq;
          }
        }

        c_j++;
      } else {
        b_A[idxAjj] = ssq;
        info = c_j + 1;
        exitg1 = true;
      }
    }

    if (info == 0) {
      b_A[2] = 0.0;
    }

    Linv[0] = 1.0;
    Linv[1] = 0.0;
    Linv[2] = 0.0;
    Linv[3] = 1.0;
    imperix_balance_ctrl_trisolve_i(b_A, Linv);
  } else {
    Linv[0] = H[0];
    Linv[1] = H[1];
    Linv[2] = H[2];
    Linv[3] = H[3];
  }

  iA[0] = false;
  iA[1] = false;
  iA[2] = false;
  iA[3] = false;
  for (info = 0; info < 2; info++) {
    c_j = info << 1;
    ssq = Linv[c_j + 1];
    Linv_tmp = Linv[c_j];
    Linv_0[c_j] = ssq * Linv[1] + Linv_tmp * Linv[0];
    Linv_0[c_j + 1] = ssq * Linv[3] + Linv_tmp * Linv[2];
  }

  for (info = 0; info < 8; info++) {
    A_0[info] = -A[info];
  }

  b_0[0] = -b[0];
  b_0[1] = -b[1];
  b_0[2] = -b[2];
  b_0[3] = -b[3];
  imperix_balance_ctrl_qpkwik_l(Linv, Linv_0, f, A_0, b_0, iA,
    options_MaxIterations, options_ConstraintTolerance, x, b_A, exitflag);
}

// Model step function for TID0
void imperix_balance_ctrl_step0(void)  // Sample time: [0.000166667s, 0.0s]
{
  real_T varargin_1[200];
  real_T tmp_1[96];
  real_T bc_1[24];
  real_T lam[24];
  real_T A[16];
  real_T M[16];
  real_T tmp[16];
  real_T bc[12];
  real_T bc_0[12];
  real_T lb[12];
  real_T M_0[8];
  real_T b_a[8];
  real_T rtb_Bias[6];
  real_T rtb_Gain1_k[6];
  real_T rtb_Gain2[6];
  real_T rtb_Gain7[6];
  real_T rtb_Gain1_a[5];
  real_T rtb_Sum13_0[5];
  real_T rtb_TmpSignalConversionAtGain2I[5];
  real_T A_0[4];
  real_T tmp_0[4];
  real_T xt_est[4];
  real_T rtb_Gain1[3];
  real_T rtb_Gain1_0[2];
  real_T rtb_Switch_j[2];
  real_T rtb_ie_sat[2];
  real_T c;
  real_T ie_idx_0;
  real_T ie_idx_1;
  real_T rtb_DeadZone;
  real_T rtb_DeadZone_o;
  real_T rtb_F;
  real_T rtb_Fr_idx_0;
  real_T rtb_Fr_idx_1;
  real_T rtb_Gain14;
  real_T rtb_Gain4_f;
  real_T rtb_Gain5;
  real_T rtb_IntegralGain_m;
  real_T rtb_Integrator_b;
  real_T rtb_Saturation;
  real_T rtb_Saturation_hi;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_o;
  real_T rtb_Sum;
  real_T rtb_Sum1;
  real_T rtb_Sum13;
  real_T rtb_Sum1_a;
  real_T rtb_Sum1_od;
  real_T rtb_Sum6;
  real_T rtb_Sum8;
  real_T rtb_Sum_b;
  real_T rtb_Sum_j;
  real_T rtb_Sum_l;
  real_T rtb_Sum_n;
  real_T rtb_Sum_o;
  real_T rtb_Switch;
  real_T rtb_Switch_f_idx_0;
  real_T rtb_Switch_f_idx_1;
  real_T rtb_Te;
  real_T rtb_TmpSignalConversionAtGain_0;
  real_T rtb_TmpSignalConversionAtGain_1;
  real_T rtb_im_idx_0;
  real_T rtb_im_idx_1;
  real_T rtb_w;
  real_T ssq;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_6;
  real_T tmp_7;
  real_T tmp_8;
  real_T tmp_9;
  real_T tmp_a;
  int32_T A_tmp;
  int32_T b_a_tmp;
  int32_T c_k;
  int32_T c_tmp;
  int32_T e;
  int32_T idxAjj;
  int32_T idx_1;
  int32_T rtb_flag;
  int8_T tmp_4;
  int8_T tmp_5;
  uint8_T rtb_Compare;
  boolean_T iA1_0[24];
  boolean_T iA1[12];
  boolean_T d_x[2];
  boolean_T tmp_b;
  boolean_T y;
  ZCEventType zcEvent;
  static const int8_T B[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  boolean_T exitg1;

  // Update the flag to indicate when data transfers from
  //   Sample time: [0.00016666666666666666s, 0.0s] to Sample time: [0.0016666666666666668s, 0.0s]  
  (imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1)++;
  if ((imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1) > 9) {
    imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1 = 0;
  }

  // S-Function (TUNABLE_PARAM): '<S688>/S-Function'
  imperix_balance_ctrl_B.SFunction = F_ref;

  // S-Function (TUNABLE_PARAM): '<S698>/S-Function'
  imperix_balance_ctrl_B.SFunction_f = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'
  //   DataTypeConversion: '<S1>/Cast To Double4'

  rtb_F = imperix_balance_ctrl_B.SFunction;
  rtb_Sum1_od = imperix_balance_ctrl_B.SFunction_f;

  // MATLAB Function 'Closed_loop_control/IM references': '<S28>:1'
  if (!imperix_balance_ctrl_DW.F_max_not_empty) {
    // '<S28>:1:10'
    // '<S28>:1:11'
    imperix_balance_ctrl_DW.F_max = imperix_balance_ctrl_P.IM.FrN;
    imperix_balance_ctrl_DW.F_max_not_empty = true;

    // '<S28>:1:12'
    imperix_balance_ctrl_DW.w_max = imperix_balance_ctrl_P.IM.w_max;

    // '<S28>:1:13'
    // '<S28>:1:16'
    imperix_balance_ctrl_DW.dF = imperix_balance_ctrl_P.FOC.Ts / (3.0 *
      imperix_balance_ctrl_P.IM.tau_r);

    // '<S28>:1:17'
    imperix_balance_ctrl_DW.dw = imperix_balance_ctrl_P.FOC.Ts;
  }

  if (fabs(imperix_balance_ctrl_B.SFunction - imperix_balance_ctrl_DW.F_prev) >
      imperix_balance_ctrl_DW.dF) {
    // '<S28>:1:21'
    // '<S28>:1:22'
    rtb_im_idx_0 = imperix_balance_ctrl_B.SFunction -
      imperix_balance_ctrl_DW.F_prev;
    if (rtIsNaN(rtb_im_idx_0)) {
      ssq = (rtNaN);
    } else if (rtb_im_idx_0 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (rtb_im_idx_0 > 0.0);
    }

    rtb_F = ssq * imperix_balance_ctrl_DW.dF + imperix_balance_ctrl_DW.F_prev;
  }

  if (fabs(imperix_balance_ctrl_B.SFunction_f - imperix_balance_ctrl_DW.w_prev) >
      imperix_balance_ctrl_DW.dw) {
    // '<S28>:1:25'
    // '<S28>:1:26'
    rtb_im_idx_0 = imperix_balance_ctrl_B.SFunction_f -
      imperix_balance_ctrl_DW.w_prev;
    if (rtIsNaN(rtb_im_idx_0)) {
      ssq = (rtNaN);
    } else if (rtb_im_idx_0 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (rtb_im_idx_0 > 0.0);
    }

    rtb_Sum1_od = ssq * imperix_balance_ctrl_DW.dw +
      imperix_balance_ctrl_DW.w_prev;
  }

  // '<S28>:1:29'
  imperix_balance_ctrl_DW.F_prev = rtb_F;

  // '<S28>:1:30'
  imperix_balance_ctrl_DW.w_prev = rtb_Sum1_od;

  // '<S28>:1:32'
  rtb_F *= imperix_balance_ctrl_DW.F_max;

  // '<S28>:1:33'
  rtb_w = imperix_balance_ctrl_DW.w_max * rtb_Sum1_od;

  // End of MATLAB Function: '<S1>/IM references'

  // S-Function (ADC): '<S120>/ADC'
  imperix_balance_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_3_0) * 0.0047937F + 0.0F;

  // DataTypeConversion: '<S1>/Cast To Double1'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC),
    &imperix_balance_ctrl_B.MovingAverage_pn,
    &imperix_balance_ctrl_DW.MovingAverage_pn);

  // S-Function (TUNABLE_PARAM): '<S692>/S-Function'
  imperix_balance_ctrl_B.SFunction_k = reset_mean;

  // Outputs for Triggered SubSystem: '<S93>/Sample and Hold' incorporates:
  //   TriggerPort: '<S674>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S674>/In'
    imperix_balance_ctrl_B.In =
      imperix_balance_ctrl_B.MovingAverage_pn.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S93>/Sample and Hold'

  // Sum: '<S93>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double1'

  rtb_Gain4_f = imperix_balance_ctrl_B.ADC - imperix_balance_ctrl_B.In;

  // Sum: '<S75>/Sum1'
  rtb_Sum1_od = rtb_w - rtb_Gain4_f;

  // S-Function (TUNABLE_PARAM): '<S704>/S-Function'
  imperix_balance_ctrl_B.SFunction_c = reset_PI;

  // DiscreteIntegrator: '<S355>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE =
      imperix_balance_ctrl_P.SpeedPI_InitialConditionForInte;
  }

  // Sum: '<S364>/Sum' incorporates:
  //   DiscreteIntegrator: '<S355>/Integrator'
  //   Gain: '<S360>/Proportional Gain'

  rtb_Sum_j = imperix_balance_ctrl_P.FOC.kp_w * rtb_Sum1_od +
    imperix_balance_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S362>/Saturation'
  if (rtb_Sum_j > imperix_balance_ctrl_P.FOC.u_max) {
    rtb_Saturation = imperix_balance_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_j < -imperix_balance_ctrl_P.FOC.u_max) {
    rtb_Saturation = -imperix_balance_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation = rtb_Sum_j;
  }

  // End of Saturate: '<S362>/Saturation'

  // Gain: '<S1>/Gain5'
  rtb_Gain5 = imperix_balance_ctrl_P.IM.np * rtb_Gain4_f;

  // Sum: '<S1>/Sum' incorporates:
  //   Bias: '<S1>/Add Constant1'
  //   Gain: '<S1>/Gain10'
  //   Product: '<S1>/Divide'

  rtb_Sum_b = rtb_Saturation / (rtb_F + imperix_balance_ctrl_P.AddConstant1_Bias)
    * (imperix_balance_ctrl_P.IM.Lm / imperix_balance_ctrl_P.IM.tau_r) +
    rtb_Gain5;

  // Gain: '<S81>/Gain'
  rtb_Integrator_b = imperix_balance_ctrl_P.MCC.Le * rtb_Sum_b;

  // S-Function (ADC): '<S122>/ADC'
  imperix_balance_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_7_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S124>/ADC'
  imperix_balance_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_6_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S114>/ADC'
  imperix_balance_ctrl_B.ADC_i = (float)(*ix_raw_adc_ptr_5_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S128>/ADC'
  imperix_balance_ctrl_B.ADC_d = (float)(*ix_raw_adc_ptr_4_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S116>/ADC'
  imperix_balance_ctrl_B.ADC_ib = (float)(*ix_raw_adc_ptr_3_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S118>/ADC'
  imperix_balance_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_2_2) * 0.00030518F +
    0.0F;

  // DataTypeConversion: '<S1>/Cast To Double'
  rtb_Gain1_k[0] = imperix_balance_ctrl_B.ADC_f;
  rtb_Gain1_k[1] = imperix_balance_ctrl_B.ADC_e;
  rtb_Gain1_k[2] = imperix_balance_ctrl_B.ADC_i;
  rtb_Gain1_k[3] = imperix_balance_ctrl_B.ADC_d;
  rtb_Gain1_k[4] = imperix_balance_ctrl_B.ADC_ib;
  rtb_Gain1_k[5] = imperix_balance_ctrl_B.ADC_p;

  // Gain: '<S91>/Gain1'
  for (rtb_flag = 0; rtb_flag < 5; rtb_flag++) {
    rtb_Gain1_a[rtb_flag] = 0.0;
  }

  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    ssq = rtb_Gain1_k[rtb_flag];
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Gain1_a[idx_1] += imperix_balance_ctrl_P.M2C.A[5 * rtb_flag + idx_1] *
        ssq;
    }
  }

  // End of Gain: '<S91>/Gain1'

  // Gain: '<S627>/Gain3' incorporates:
  //   Gain: '<S87>/Gain2'

  rtb_Switch = 0.0;
  ie_idx_0 = 0.0;
  ie_idx_1 = 0.0;
  for (rtb_flag = 0; rtb_flag < 3; rtb_flag++) {
    ssq = rtb_Gain1_a[rtb_flag + 2] * imperix_balance_ctrl_P.Gain2_Gain;
    rtb_Switch += imperix_balance_ctrl_P.Gain3_Gain[3 * rtb_flag] * ssq;
    ie_idx_0 += imperix_balance_ctrl_P.Gain3_Gain[3 * rtb_flag + 1] * ssq;
    ie_idx_1 += imperix_balance_ctrl_P.Gain3_Gain[3 * rtb_flag + 2] * ssq;
  }

  // End of Gain: '<S627>/Gain3'

  // Gain: '<S627>/Gain1'
  rtb_Gain1[0] = imperix_balance_ctrl_P.Gain1_Gain * rtb_Switch;
  rtb_Gain1[1] = imperix_balance_ctrl_P.Gain1_Gain * ie_idx_0;
  rtb_Gain1[2] = imperix_balance_ctrl_P.Gain1_Gain * ie_idx_1;

  // S-Function (TUNABLE_PARAM): '<S708>/S-Function'
  imperix_balance_ctrl_B.SFunction_fs = reset_KF;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   UnitDelay: '<S81>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S29>:1'
  // '<S29>:1:12'
  // '<S29>:1:13'
  rtb_im_idx_0 = 0.0;
  rtb_Fr_idx_0 = 0.0;
  rtb_im_idx_1 = 0.0;
  rtb_Fr_idx_1 = 0.0;

  // '<S29>:1:14'
  rtb_Te = 0.0;
  if (imperix_balance_ctrl_B.SFunction_fs != 0.0F) {
    // '<S29>:1:17'
    imperix_balance_ctrl_DW.xt_est_apriori[0] = imperix_balance_ctrl_P.KF.x1_mu
      [0];
    imperix_balance_ctrl_DW.xt_est_apriori[1] = imperix_balance_ctrl_P.KF.x1_mu
      [1];
    imperix_balance_ctrl_DW.xt_est_apriori[2] = imperix_balance_ctrl_P.KF.x1_mu
      [2];
    imperix_balance_ctrl_DW.xt_est_apriori[3] = imperix_balance_ctrl_P.KF.x1_mu
      [3];
  } else {
    // '<S29>:1:22'
    memcpy(&A[0], &imperix_balance_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

    // '<S29>:1:23'
    A[12] = imperix_balance_ctrl_P.KF.A[12] * rtb_Gain5;

    // '<S29>:1:24'
    A[9] = imperix_balance_ctrl_P.KF.A[9] * rtb_Gain5;

    // '<S29>:1:25'
    A[14] = imperix_balance_ctrl_P.KF.A[14] * rtb_Gain5;

    // '<S29>:1:26'
    A[11] = imperix_balance_ctrl_P.KF.A[11] * rtb_Gain5;

    // '<S29>:1:27'
    c = 0.5 * imperix_balance_ctrl_P.KF.Ts;
    for (rtb_flag = 0; rtb_flag < 16; rtb_flag++) {
      M[rtb_flag] = c * A[rtb_flag] + imperix_balance_ctrl_DW.Inx[rtb_flag];
    }

    // '<S29>:1:28'
    // '<S29>:1:36'
    // '<S29>:1:66'
    // '<S29>:1:54'
    for (rtb_flag = 0; rtb_flag < 200; rtb_flag++) {
      varargin_1[rtb_flag] = fabs(imperix_balance_ctrl_P.KF.we_list[rtb_flag] -
        rtb_Gain5);
    }

    if (!rtIsNaN(varargin_1[0])) {
      idx_1 = 1;
    } else {
      idx_1 = 0;
      rtb_flag = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_flag < 201)) {
        if (!rtIsNaN(varargin_1[rtb_flag - 1])) {
          idx_1 = rtb_flag;
          exitg1 = true;
        } else {
          rtb_flag++;
        }
      }
    }

    if (idx_1 == 0) {
      idxAjj = 1;
    } else {
      ssq = varargin_1[idx_1 - 1];
      idxAjj = idx_1;
      for (c_k = idx_1 + 1; c_k < 201; c_k++) {
        rtb_im_idx_0 = varargin_1[c_k - 1];
        if (ssq > rtb_im_idx_0) {
          ssq = rtb_im_idx_0;
          idxAjj = c_k;
        }
      }
    }

    // '<S29>:1:54'
    idx_1 = idxAjj - 1;

    // '<S29>:1:55'
    rtb_im_idx_0 = rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list[idxAjj - 1];
    if (rtIsNaN(rtb_im_idx_0)) {
      ssq = (rtNaN);
    } else if (rtb_im_idx_0 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (rtb_im_idx_0 > 0.0);
    }

    rtb_im_idx_0 = static_cast<real_T>(idxAjj) + ssq;

    // '<S29>:1:57'
    tmp_b = rtIsNaN(rtb_im_idx_0);
    if ((idxAjj <= rtb_im_idx_0) || tmp_b) {
      rtb_flag = idxAjj;
    } else {
      rtb_flag = static_cast<int32_T>(rtb_im_idx_0);
    }

    if (rtb_flag == 0) {
      // '<S29>:1:58'
      // '<S29>:1:59'
      idx_1 = idxAjj;

      // '<S29>:1:60'
      rtb_im_idx_0++;
    } else {
      if ((idxAjj >= rtb_im_idx_0) || tmp_b) {
        rtb_flag = idxAjj;
      } else {
        rtb_flag = static_cast<int32_T>(rtb_im_idx_0);
      }

      if (rtb_flag == 201) {
        // '<S29>:1:61'
        // '<S29>:1:62'
        idx_1 = idxAjj - 2;

        // '<S29>:1:63'
        rtb_im_idx_0--;
      }
    }

    // '<S29>:1:66'
    // '<S29>:1:67'
    // '<S29>:1:69'
    rtb_Fr_idx_0 = imperix_balance_ctrl_P.KF.we_list[1] -
      imperix_balance_ctrl_P.KF.we_list[0];

    // '<S29>:1:70'
    ssq = fabs(rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list[static_cast<int32_T>
               (rtb_im_idx_0) - 1]) / rtb_Fr_idx_0;

    // '<S29>:1:71'
    rtb_Fr_idx_0 = fabs(rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list[idx_1]) /
      rtb_Fr_idx_0;

    // '<S29>:1:73'
    // '<S29>:1:37'
    rtb_im_idx_1 = imperix_balance_ctrl_DW.xt_est_apriori[1];
    rtb_Fr_idx_1 = imperix_balance_ctrl_DW.xt_est_apriori[0];
    rtb_Te = imperix_balance_ctrl_DW.xt_est_apriori[2];
    rtb_Gain5 = imperix_balance_ctrl_DW.xt_est_apriori[3];
    for (rtb_flag = 0; rtb_flag < 2; rtb_flag++) {
      idxAjj = rtb_flag << 2;
      c_k = ((static_cast<int32_T>(rtb_im_idx_0) - 1) << 3) + idxAjj;
      b_a_tmp = (idx_1 << 3) + idxAjj;
      b_a[idxAjj] = imperix_balance_ctrl_P.KF.gain_schedule[c_k] * rtb_Fr_idx_0
        + imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp] * ssq;
      b_a[idxAjj + 1] = imperix_balance_ctrl_P.KF.gain_schedule[c_k + 1] *
        rtb_Fr_idx_0 + imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 1] *
        ssq;
      b_a[idxAjj + 2] = imperix_balance_ctrl_P.KF.gain_schedule[c_k + 2] *
        rtb_Fr_idx_0 + imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 2] *
        ssq;
      b_a[idxAjj + 3] = imperix_balance_ctrl_P.KF.gain_schedule[c_k + 3] *
        rtb_Fr_idx_0 + imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 3] *
        ssq;
      rtb_Gain1_0[rtb_flag] = rtb_Gain1[rtb_flag] -
        (((imperix_balance_ctrl_P.KF.C[rtb_flag + 2] * rtb_im_idx_1 +
           imperix_balance_ctrl_P.KF.C[rtb_flag] * rtb_Fr_idx_1) +
          imperix_balance_ctrl_P.KF.C[rtb_flag + 4] * rtb_Te) +
         imperix_balance_ctrl_P.KF.C[rtb_flag + 6] * rtb_Gain5);
    }

    // '<S29>:1:40'
    // '<S29>:1:41'
    rtb_im_idx_0 = rtb_Gain1_0[1];
    rtb_Fr_idx_0 = rtb_Gain1_0[0];
    for (rtb_flag = 0; rtb_flag < 4; rtb_flag++) {
      xt_est[rtb_flag] = (b_a[rtb_flag + 4] * rtb_im_idx_0 + b_a[rtb_flag] *
                          rtb_Fr_idx_0) +
        imperix_balance_ctrl_DW.xt_est_apriori[rtb_flag];
    }

    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      idxAjj = idx_1 << 2;
      rtb_im_idx_0 = M[idxAjj + 1];
      rtb_Fr_idx_0 = M[idxAjj];
      rtb_im_idx_1 = M[idxAjj + 2];
      rtb_Fr_idx_1 = M[idxAjj + 3];
      for (rtb_flag = 0; rtb_flag < 4; rtb_flag++) {
        c_k = idxAjj + rtb_flag;
        tmp[c_k] = (((A[rtb_flag + 4] * imperix_balance_ctrl_P.KF.Ts *
                      rtb_im_idx_0 + imperix_balance_ctrl_P.KF.Ts * A[rtb_flag] *
                      rtb_Fr_idx_0) + A[rtb_flag + 8] *
                     imperix_balance_ctrl_P.KF.Ts * rtb_im_idx_1) + A[rtb_flag +
                    12] * imperix_balance_ctrl_P.KF.Ts * rtb_Fr_idx_1) +
          imperix_balance_ctrl_DW.Inx[c_k];
      }
    }

    for (rtb_flag = 0; rtb_flag < 2; rtb_flag++) {
      rtb_im_idx_0 = 0.0;
      rtb_Fr_idx_0 = 0.0;
      rtb_im_idx_1 = 0.0;
      rtb_Fr_idx_1 = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        ssq = imperix_balance_ctrl_P.KF.B[(rtb_flag << 2) + idx_1];
        idxAjj = idx_1 << 2;
        rtb_im_idx_0 += M[idxAjj] * ssq;
        rtb_Fr_idx_0 += M[idxAjj + 1] * ssq;
        rtb_im_idx_1 += M[idxAjj + 2] * ssq;
        rtb_Fr_idx_1 += M[idxAjj + 3] * ssq;
      }

      idxAjj = rtb_flag << 2;
      b_a[idxAjj + 3] = rtb_Fr_idx_1;
      b_a[idxAjj + 2] = rtb_im_idx_1;
      b_a[idxAjj + 1] = rtb_Fr_idx_0;
      b_a[idxAjj] = rtb_im_idx_0;
    }

    for (rtb_flag = 0; rtb_flag < 8; rtb_flag++) {
      M_0[rtb_flag] = b_a[rtb_flag] * imperix_balance_ctrl_P.KF.Ts;
    }

    rtb_Switch = 0.0;
    ie_idx_0 = 0.0;
    ie_idx_1 = 0.0;
    rtb_Te = 0.0;
    for (rtb_flag = 0; rtb_flag < 4; rtb_flag++) {
      ssq = xt_est[rtb_flag];
      idx_1 = rtb_flag << 2;
      rtb_Switch += tmp[idx_1] * ssq;
      ie_idx_0 += tmp[idx_1 + 1] * ssq;
      ie_idx_1 += tmp[idx_1 + 2] * ssq;
      rtb_Te += tmp[idx_1 + 3] * ssq;
    }

    rtb_im_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    rtb_im_idx_1 = 0.0;
    rtb_Fr_idx_1 = 0.0;
    for (rtb_flag = 0; rtb_flag < 2; rtb_flag++) {
      ssq = imperix_balance_ctrl_DW.UnitDelay_DSTATE[rtb_flag];
      idxAjj = rtb_flag << 2;
      rtb_im_idx_0 += M_0[idxAjj] * ssq;
      rtb_Fr_idx_0 += M_0[idxAjj + 1] * ssq;
      rtb_im_idx_1 += M_0[idxAjj + 2] * ssq;
      rtb_Fr_idx_1 += M_0[idxAjj + 3] * ssq;
    }

    imperix_balance_ctrl_DW.xt_est_apriori[0] = rtb_Switch + rtb_im_idx_0;
    imperix_balance_ctrl_DW.xt_est_apriori[1] = ie_idx_0 + rtb_Fr_idx_0;
    imperix_balance_ctrl_DW.xt_est_apriori[2] = ie_idx_1 + rtb_im_idx_1;
    imperix_balance_ctrl_DW.xt_est_apriori[3] = rtb_Te + rtb_Fr_idx_1;

    // '<S29>:1:42'
    // '<S29>:1:45'
    // '<S29>:1:46'
    rtb_im_idx_0 = xt_est[0];
    rtb_Fr_idx_0 = xt_est[2];
    rtb_im_idx_1 = xt_est[1];
    rtb_Fr_idx_1 = xt_est[3];

    // '<S29>:1:47'
    rtb_Te = (xt_est[0] * xt_est[3] - xt_est[1] * xt_est[2]) *
      -imperix_balance_ctrl_P.IM.kT;
  }

  // End of MATLAB Function: '<S1>/Kalman Filter'

  // ComplexToMagnitudeAngle: '<S84>/Complex to Magnitude-Angle' incorporates:
  //   RealImagToComplex: '<S84>/Real-Imag to Complex'

  rtb_Gain14 = rt_hypotd_snf(rtb_Fr_idx_0, rtb_Fr_idx_1);

  // Sum: '<S75>/Sum2'
  rtb_Gain5 = rtb_F - rtb_Gain14;

  // DiscreteIntegrator: '<S303>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_h != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_k =
      imperix_balance_ctrl_P.FluxPI_InitialConditionForInteg;
  }

  // Sum: '<S312>/Sum' incorporates:
  //   DiscreteIntegrator: '<S303>/Integrator'
  //   Gain: '<S308>/Proportional Gain'

  rtb_Sum_l = imperix_balance_ctrl_P.FOC.kp_F * rtb_Gain5 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_k;

  // Saturate: '<S310>/Saturation'
  if (rtb_Sum_l > imperix_balance_ctrl_P.FOC.u_max) {
    rtb_Saturation_j = imperix_balance_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_l < -imperix_balance_ctrl_P.FOC.u_max) {
    rtb_Saturation_j = -imperix_balance_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_j = rtb_Sum_l;
  }

  // End of Saturate: '<S310>/Saturation'

  // S-Function (TUNABLE_PARAM): '<S694>/S-Function'
  imperix_balance_ctrl_B.SFunction_co = magnetize;

  // Switch: '<S84>/Switch' incorporates:
  //   ComplexToMagnitudeAngle: '<S84>/Complex to Magnitude-Angle'
  //   Constant: '<S84>/Constant'
  //   RealImagToComplex: '<S84>/Real-Imag to Complex'

  if (imperix_balance_ctrl_B.SFunction_co >
      imperix_balance_ctrl_P.Switch_Threshold) {
    rtb_Switch = imperix_balance_ctrl_P.Constant_Value;
  } else {
    rtb_Switch = rt_atan2d_snf(rtb_Fr_idx_1, rtb_Fr_idx_0);
  }

  // End of Switch: '<S84>/Switch'

  // RelationalOperator: '<S628>/Compare' incorporates:
  //   Constant: '<S626>/Constant'
  //   Constant: '<S628>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_balance_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S626>/Subsystem1' incorporates:
  //   EnablePort: '<S631>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S631>/Fcn' incorporates:
    //   Fcn: '<S631>/Fcn1'

    rtb_Sum6 = sin(rtb_Switch);
    rtb_Sum_n = cos(rtb_Switch);

    // Fcn: '<S631>/Fcn'
    imperix_balance_ctrl_B.Fcn = rtb_Gain1[0] * rtb_Sum_n + rtb_Gain1[1] *
      rtb_Sum6;

    // Fcn: '<S631>/Fcn1'
    imperix_balance_ctrl_B.Fcn1 = -rtb_Gain1[0] * rtb_Sum6 + rtb_Gain1[1] *
      rtb_Sum_n;
  }

  // End of Outputs for SubSystem: '<S626>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S626>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S630>/Enable'

  // RelationalOperator: '<S629>/Compare' incorporates:
  //   Constant: '<S626>/Constant'
  //   Constant: '<S629>/Constant'

  if (imperix_balance_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_balance_ctrl_P.CompareToConstant1_const) {
    // Fcn: '<S630>/Fcn' incorporates:
    //   Fcn: '<S630>/Fcn1'

    rtb_Sum6 = cos(rtb_Switch);
    rtb_Sum_n = sin(rtb_Switch);

    // Fcn: '<S630>/Fcn'
    imperix_balance_ctrl_B.Fcn_o = rtb_Gain1[0] * rtb_Sum_n - rtb_Gain1[1] *
      rtb_Sum6;

    // Fcn: '<S630>/Fcn1'
    imperix_balance_ctrl_B.Fcn1_l = rtb_Gain1[0] * rtb_Sum6 + rtb_Gain1[1] *
      rtb_Sum_n;
  }

  // End of RelationalOperator: '<S629>/Compare'
  // End of Outputs for SubSystem: '<S626>/Subsystem - pi//2 delay'

  // Switch: '<S626>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_f_idx_0 = imperix_balance_ctrl_B.Fcn;
    rtb_Switch_f_idx_1 = imperix_balance_ctrl_B.Fcn1;
  } else {
    rtb_Switch_f_idx_0 = imperix_balance_ctrl_B.Fcn_o;
    rtb_Switch_f_idx_1 = imperix_balance_ctrl_B.Fcn1_l;
  }

  // End of Switch: '<S626>/Switch'

  // Sum: '<S81>/Sum6'
  rtb_Sum6 = rtb_Saturation_j - rtb_Switch_f_idx_0;

  // DiscreteIntegrator: '<S485>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_p != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_h =
      imperix_balance_ctrl_P.MCCPId_InitialConditionForInteg;
  }

  // Sum: '<S494>/Sum' incorporates:
  //   DiscreteIntegrator: '<S485>/Integrator'
  //   Gain: '<S490>/Proportional Gain'

  rtb_Sum_n = imperix_balance_ctrl_P.MCC.kp * rtb_Sum6 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_h;

  // Saturate: '<S492>/Saturation'
  if (rtb_Sum_n > imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_o = imperix_balance_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_n < -imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_o = -imperix_balance_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_o = rtb_Sum_n;
  }

  // End of Saturate: '<S492>/Saturation'

  // Sum: '<S81>/Sum' incorporates:
  //   Product: '<S81>/Product3'

  rtb_Sum = rtb_Saturation_o - rtb_Integrator_b * rtb_Saturation;

  // Sum: '<S81>/Sum8'
  rtb_Sum8 = rtb_Saturation - rtb_Switch_f_idx_1;

  // DiscreteIntegrator: '<S537>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_b != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_m =
      imperix_balance_ctrl_P.MCCPIq_InitialConditionForInteg;
  }

  // Sum: '<S546>/Sum' incorporates:
  //   DiscreteIntegrator: '<S537>/Integrator'
  //   Gain: '<S542>/Proportional Gain'

  rtb_Sum_o = imperix_balance_ctrl_P.MCC.kp * rtb_Sum8 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_m;

  // Saturate: '<S544>/Saturation'
  if (rtb_Sum_o > imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_hi = imperix_balance_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_o < -imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_hi = -imperix_balance_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_hi = rtb_Sum_o;
  }

  // End of Saturate: '<S544>/Saturation'

  // Sum: '<S81>/Sum1' incorporates:
  //   Product: '<S81>/Product1'

  rtb_Sum1 = rtb_Saturation_j * rtb_Integrator_b + rtb_Saturation_hi;

  // Gain: '<S81>/Gain1'
  rtb_TmpSignalConversionAtGain_0 = imperix_balance_ctrl_P.Gain1_Gain_m *
    rtb_Sum;
  rtb_TmpSignalConversionAtGain_1 = imperix_balance_ctrl_P.Gain1_Gain_m *
    rtb_Sum1;

  // Sum: '<S79>/Sum6' incorporates:
  //   Constant: '<S1>/Vc_ref'
  //   UnitDelay: '<S392>/Unit Delay1'

  rtb_Integrator_b = imperix_balance_ctrl_P.M2C.Vc_ref -
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE;

  // Sum: '<S439>/Sum' incorporates:
  //   DiscreteIntegrator: '<S430>/Integrator'
  //   Gain: '<S435>/Proportional Gain'

  rtb_DeadZone = imperix_balance_ctrl_P.TEC.kp * rtb_Integrator_b +
    imperix_balance_ctrl_DW.Integrator_DSTATE_p;

  // Saturate: '<S437>/Saturation'
  if (rtb_DeadZone > imperix_balance_ctrl_P.TEC.u_max) {
    ssq = imperix_balance_ctrl_P.TEC.u_max;
  } else if (rtb_DeadZone < -imperix_balance_ctrl_P.TEC.u_max) {
    ssq = -imperix_balance_ctrl_P.TEC.u_max;
  } else {
    ssq = rtb_DeadZone;
  }

  // Sum: '<S79>/Sum1' incorporates:
  //   Gain: '<S79>/Gain30'
  //   Gain: '<S81>/Gain4'
  //   Product: '<S81>/Product2'
  //   Product: '<S81>/Product4'
  //   Saturate: '<S437>/Saturation'
  //   Sum: '<S81>/Sum2'

  rtb_Sum1_a = ssq - (rtb_TmpSignalConversionAtGain_0 * rtb_Saturation_j +
                      rtb_TmpSignalConversionAtGain_1 * rtb_Saturation) *
    imperix_balance_ctrl_P.Gain4_Gain * (1.0 / imperix_balance_ctrl_P.M2C.Vdc);

  // Sum: '<S85>/Sum3'
  rtb_IntegralGain_m = rtb_Sum1_a - rtb_Gain1_a[0];

  // Sum: '<S617>/Sum' incorporates:
  //   DiscreteIntegrator: '<S608>/Integrator'
  //   Gain: '<S613>/Proportional Gain'

  rtb_DeadZone_o = imperix_balance_ctrl_P.PCC.kp * rtb_IntegralGain_m +
    imperix_balance_ctrl_DW.Integrator_DSTATE_a;

  // Saturate: '<S615>/Saturation'
  if (rtb_DeadZone_o > imperix_balance_ctrl_P.PCC.u_max) {
    ssq = imperix_balance_ctrl_P.PCC.u_max;
  } else if (rtb_DeadZone_o < -imperix_balance_ctrl_P.PCC.u_max) {
    ssq = -imperix_balance_ctrl_P.PCC.u_max;
  } else {
    ssq = rtb_DeadZone_o;
  }

  // Sum: '<S85>/Sum13' incorporates:
  //   Constant: '<S85>/Constant1'
  //   Saturate: '<S615>/Saturation'

  rtb_Sum13 = 1.5 * imperix_balance_ctrl_P.M2C.Vdc - ssq;

  // RelationalOperator: '<S555>/Compare' incorporates:
  //   Constant: '<S450>/Constant'
  //   Constant: '<S555>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_balance_ctrl_P.CompareToConstant_const_d);

  // Outputs for Enabled SubSystem: '<S450>/Subsystem1'
  imperix_balance__Subsystem1(rtb_Compare, rtb_Sum, rtb_Sum1, rtb_Switch,
    &imperix_balance_ctrl_B.Fcn_ou, &imperix_balance_ctrl_B.Fcn1_f);

  // End of Outputs for SubSystem: '<S450>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S450>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S556>/Compare' incorporates:
  //   Constant: '<S450>/Constant'
  //   Constant: '<S556>/Constant'

  imperix_b_Subsystempi2delay(static_cast<uint8_T>
    (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment ==
     imperix_balance_ctrl_P.CompareToConstant1_const_j), rtb_Sum, rtb_Sum1,
    rtb_Switch, &imperix_balance_ctrl_B.Fcn_b, &imperix_balance_ctrl_B.Fcn1_i);

  // End of Outputs for SubSystem: '<S450>/Subsystem - pi//2 delay'

  // Switch: '<S450>/Switch'
  if (rtb_Compare != 0) {
    rtb_Sum = imperix_balance_ctrl_B.Fcn_ou;
    rtb_Sum1 = imperix_balance_ctrl_B.Fcn1_f;
  } else {
    rtb_Sum = imperix_balance_ctrl_B.Fcn_b;
    rtb_Sum1 = imperix_balance_ctrl_B.Fcn1_i;
  }

  // End of Switch: '<S450>/Switch'

  // RateTransition generated from: '<S27>/White noise' incorporates:
  //   RateTransition generated from: '<S27>/Energy balance'

  tmp_b = (imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1 == 1);
  if (tmp_b) {
    // RateTransition generated from: '<S27>/White noise'
    imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[0] =
      imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[0];
    imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[1] =
      imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[1];
    imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[2] =
      imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[2];
  }

  // End of RateTransition generated from: '<S27>/White noise'

  // Gain: '<S27>/Gain3'
  rtb_TmpSignalConversionAtGain2I[0] = imperix_balance_ctrl_P.Gain3_Gain_f[0] *
    rtb_Sum1_a;
  rtb_TmpSignalConversionAtGain2I[1] = imperix_balance_ctrl_P.Gain3_Gain_f[1] *
    rtb_Sum1_a;

  // RelationalOperator: '<S387>/Compare' incorporates:
  //   Constant: '<S386>/Constant'
  //   Constant: '<S387>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment_j ==
                 imperix_balance_ctrl_P.CompareToConstant_const_b);

  // Outputs for Enabled SubSystem: '<S386>/Subsystem1'
  imperix_balance__Subsystem1(rtb_Compare, rtb_Saturation_j, rtb_Saturation,
    rtb_Switch, &imperix_balance_ctrl_B.Fcn_br, &imperix_balance_ctrl_B.Fcn1_f3);

  // End of Outputs for SubSystem: '<S386>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S386>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S388>/Compare' incorporates:
  //   Constant: '<S386>/Constant'
  //   Constant: '<S388>/Constant'

  imperix_b_Subsystempi2delay(static_cast<uint8_T>
    (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment_j ==
     imperix_balance_ctrl_P.CompareToConstant1_const_o), rtb_Saturation_j,
    rtb_Saturation, rtb_Switch, &imperix_balance_ctrl_B.Fcn_m,
    &imperix_balance_ctrl_B.Fcn1_c);

  // End of Outputs for SubSystem: '<S386>/Subsystem - pi//2 delay'

  // Switch: '<S386>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_j[0] = imperix_balance_ctrl_B.Fcn_br;
    rtb_Switch_j[1] = imperix_balance_ctrl_B.Fcn1_f3;
  } else {
    rtb_Switch_j[0] = imperix_balance_ctrl_B.Fcn_m;
    rtb_Switch_j[1] = imperix_balance_ctrl_B.Fcn1_c;
  }

  // End of Switch: '<S386>/Switch'

  // Gain: '<S27>/Gain5'
  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    rtb_Gain7[rtb_flag] = -imperix_balance_ctrl_P.RFT.ab2abc[rtb_flag];
  }

  rtb_Switch = 0.0;
  ie_idx_0 = 0.0;
  ie_idx_1 = 0.0;
  for (rtb_flag = 0; rtb_flag < 2; rtb_flag++) {
    ssq = rtb_Switch_j[rtb_flag];
    rtb_Switch += rtb_Gain7[3 * rtb_flag] * ssq;
    ie_idx_0 += rtb_Gain7[3 * rtb_flag + 1] * ssq;
    ie_idx_1 += rtb_Gain7[3 * rtb_flag + 2] * ssq;
  }

  rtb_TmpSignalConversionAtGain2I[4] = ie_idx_1;
  rtb_TmpSignalConversionAtGain2I[3] = ie_idx_0;
  rtb_TmpSignalConversionAtGain2I[2] = rtb_Switch;

  // End of Gain: '<S27>/Gain5'

  // Gain: '<S27>/Gain7'
  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    rtb_Gain7[rtb_flag] = 0.0;
  }

  for (rtb_flag = 0; rtb_flag < 5; rtb_flag++) {
    ssq = rtb_TmpSignalConversionAtGain2I[rtb_flag];
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      rtb_Gain7[idx_1] += imperix_balance_ctrl_P.M2C.pinvA[6 * rtb_flag + idx_1]
        * ssq;
    }
  }

  // End of Gain: '<S27>/Gain7'

  // Gain: '<S81>/Gain3' incorporates:
  //   UnitDelay: '<S81>/Unit Delay'

  imperix_balance_ctrl_DW.UnitDelay_DSTATE[0] =
    imperix_balance_ctrl_P.Gain3_Gain_c * rtb_Sum;
  imperix_balance_ctrl_DW.UnitDelay_DSTATE[1] =
    imperix_balance_ctrl_P.Gain3_Gain_c * rtb_Sum1;

  // SignalConversion generated from: '<S80>/Gain2' incorporates:
  //   Constant: '<S80>/vx'

  c = imperix_balance_ctrl_P.M2C.Vdc / 2.0;

  // Gain: '<S81>/Gain2' incorporates:
  //   UnitDelay: '<S81>/Unit Delay'

  rtb_Switch = 0.0;
  ie_idx_0 = 0.0;
  ie_idx_1 = 0.0;
  for (rtb_flag = 0; rtb_flag < 2; rtb_flag++) {
    ssq = imperix_balance_ctrl_DW.UnitDelay_DSTATE[rtb_flag];
    rtb_Switch += imperix_balance_ctrl_P.RFT.ab2abc[3 * rtb_flag] * ssq;
    ie_idx_0 += imperix_balance_ctrl_P.RFT.ab2abc[3 * rtb_flag + 1] * ssq;
    ie_idx_1 += imperix_balance_ctrl_P.RFT.ab2abc[3 * rtb_flag + 2] * ssq;

    // SignalConversion generated from: '<S80>/Gain2' incorporates:
    //   Constant: '<S80>/vx'
    //   UnitDelay: '<S81>/Unit Delay'

    rtb_TmpSignalConversionAtGain2I[rtb_flag] = c *
      imperix_balance_ctrl_ConstP.vx_rtw_collapsed_sub_expr_yVo7x[rtb_flag];
  }

  // End of Gain: '<S81>/Gain2'

  // SignalConversion generated from: '<S80>/Gain2'
  rtb_TmpSignalConversionAtGain2I[2] = rtb_Switch;
  rtb_TmpSignalConversionAtGain2I[3] = ie_idx_0;
  rtb_TmpSignalConversionAtGain2I[4] = ie_idx_1;

  // Gain: '<S80>/Gain2'
  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    rtb_Gain2[rtb_flag] = 0.0;
  }

  for (rtb_flag = 0; rtb_flag < 5; rtb_flag++) {
    ssq = rtb_TmpSignalConversionAtGain2I[rtb_flag];
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      rtb_Gain2[idx_1] += imperix_balance_ctrl_P.Gain2_Gain_i[6 * rtb_flag +
        idx_1] * ssq;
    }
  }

  // End of Gain: '<S80>/Gain2'

  // S-Function (ADC): '<S108>/ADC'
  imperix_balance_ctrl_B.ADC_b = (float)(*ix_raw_adc_ptr_1_2) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S126>/ADC'
  imperix_balance_ctrl_B.ADC_o = (float)(*ix_raw_adc_ptr_0_2) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S130>/ADC'
  imperix_balance_ctrl_B.ADC_n = (float)(*ix_raw_adc_ptr_7_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S112>/ADC'
  imperix_balance_ctrl_B.ADC_m = (float)(*ix_raw_adc_ptr_6_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S132>/ADC'
  imperix_balance_ctrl_B.ADC_k = (float)(*ix_raw_adc_ptr_5_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S134>/ADC'
  imperix_balance_ctrl_B.ADC_fe = (float)(*ix_raw_adc_ptr_4_0) * 0.021362F +
    0.0F;

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_b),
    &imperix_balance_ctrl_B.MovingAverage_p,
    &imperix_balance_ctrl_DW.MovingAverage_p);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold' incorporates:
  //   TriggerPort: '<S668>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE_h,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S668>/In'
    imperix_balance_ctrl_B.In_nz =
      imperix_balance_ctrl_B.MovingAverage_p.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_o),
    &imperix_balance_ctrl_B.MovingAverage1,
    &imperix_balance_ctrl_DW.MovingAverage1);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold1' incorporates:
  //   TriggerPort: '<S669>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold1_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S669>/In'
    imperix_balance_ctrl_B.In_g =
      imperix_balance_ctrl_B.MovingAverage1.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold1'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_n),
    &imperix_balance_ctrl_B.MovingAverage2,
    &imperix_balance_ctrl_DW.MovingAverage2);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold2' incorporates:
  //   TriggerPort: '<S670>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold2_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S670>/In'
    imperix_balance_ctrl_B.In_m =
      imperix_balance_ctrl_B.MovingAverage2.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold2'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_m),
    &imperix_balance_ctrl_B.MovingAverage3,
    &imperix_balance_ctrl_DW.MovingAverage3);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold3' incorporates:
  //   TriggerPort: '<S671>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold3_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S671>/In'
    imperix_balance_ctrl_B.In_n =
      imperix_balance_ctrl_B.MovingAverage3.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold3'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_k),
    &imperix_balance_ctrl_B.MovingAverage4,
    &imperix_balance_ctrl_DW.MovingAverage4);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold4' incorporates:
  //   TriggerPort: '<S672>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold4_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S672>/In'
    imperix_balance_ctrl_B.In_k =
      imperix_balance_ctrl_B.MovingAverage4.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold4'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_fe),
    &imperix_balance_ctrl_B.MovingAverage5,
    &imperix_balance_ctrl_DW.MovingAverage5);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold5' incorporates:
  //   TriggerPort: '<S673>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold5_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S673>/In'
    imperix_balance_ctrl_B.In_c =
      imperix_balance_ctrl_B.MovingAverage5.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold5'

  // Bias: '<S92>/Bias' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Sum: '<S92>/Sum1'
  //   Sum: '<S92>/Sum2'
  //   Sum: '<S92>/Sum3'
  //   Sum: '<S92>/Sum4'
  //   Sum: '<S92>/Sum5'
  //   Sum: '<S92>/Sum6'

  rtb_Bias[0] = (imperix_balance_ctrl_B.ADC_b - imperix_balance_ctrl_B.In_nz) +
    imperix_balance_ctrl_P.M2C.Vc_ref;
  rtb_Bias[1] = (imperix_balance_ctrl_B.ADC_o - imperix_balance_ctrl_B.In_g) +
    imperix_balance_ctrl_P.M2C.Vc_ref;
  rtb_Bias[2] = (imperix_balance_ctrl_B.ADC_n - imperix_balance_ctrl_B.In_m) +
    imperix_balance_ctrl_P.M2C.Vc_ref;
  rtb_Bias[3] = (imperix_balance_ctrl_B.ADC_m - imperix_balance_ctrl_B.In_n) +
    imperix_balance_ctrl_P.M2C.Vc_ref;
  rtb_Bias[4] = (imperix_balance_ctrl_B.ADC_k - imperix_balance_ctrl_B.In_k) +
    imperix_balance_ctrl_P.M2C.Vc_ref;
  rtb_Bias[5] = (imperix_balance_ctrl_B.ADC_fe - imperix_balance_ctrl_B.In_c) +
    imperix_balance_ctrl_P.M2C.Vc_ref;

  // MATLAB Function: '<S27>/Saturation' incorporates:
  //   RateTransition generated from: '<S27>/White noise'

  // MATLAB Function 'Closed_loop_control/ICB/Saturation': '<S160>:1'
  // '<S160>:1:44'
  // '<S160>:1:55'
  // '<S160>:1:4'
  // '<S160>:1:5'
  if (!imperix_balance_ctrl_DW.Ac_not_empty) {
    // '<S160>:1:10'
    // '<S160>:1:11'
    for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
      ssq = imperix_balance_ctrl_P.M2C.N[rtb_flag];
      imperix_balance_ctrl_DW.Ac[rtb_flag] = ssq;
      imperix_balance_ctrl_DW.Ac[rtb_flag + 6] = -ssq;
      ssq = imperix_balance_ctrl_P.M2C.N[rtb_flag + 6];
      imperix_balance_ctrl_DW.Ac[rtb_flag + 12] = ssq;
      imperix_balance_ctrl_DW.Ac[rtb_flag + 18] = -ssq;
    }

    imperix_balance_ctrl_DW.Ac_not_empty = true;

    // '<S160>:1:13'
    // '<S160>:1:17'
    imperix_balance_ctrl_DW.is_max = imperix_balance_ctrl_P.M2C.is_max;

    // '<S160>:1:18'
    imperix_balance_ctrl_DW.SolverOpts.UseHessianAsInput = true;
    imperix_balance_ctrl_DW.SolverOpts.IntegrityChecks = true;
    imperix_balance_ctrl_DW.SolverOpts.MaxIterations = 100;
    imperix_balance_ctrl_DW.SolverOpts.ConstraintTolerance =
      imperix_balance_ctrl_DW.Tol;
  }

  // '<S160>:1:23'
  for (idx_1 = 0; idx_1 < 6; idx_1++) {
    rtb_Switch = rtb_Gain7[idx_1];
    bc[idx_1] = imperix_balance_ctrl_DW.is_max - rtb_Switch;
    bc[idx_1 + 6] = imperix_balance_ctrl_DW.is_max + rtb_Switch;
  }

  // '<S160>:1:28'
  ssq = imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[1];
  rtb_Switch = imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[0];
  for (rtb_flag = 0; rtb_flag < 12; rtb_flag++) {
    lb[rtb_flag] = (imperix_balance_ctrl_DW.Ac[rtb_flag + 12] * ssq +
                    imperix_balance_ctrl_DW.Ac[rtb_flag] * rtb_Switch) -
      bc[rtb_flag];
  }

  if (!rtIsNaN(lb[0])) {
    idx_1 = 1;
  } else {
    idx_1 = 0;
    rtb_flag = 2;
    exitg1 = false;
    while ((!exitg1) && (rtb_flag < 13)) {
      if (!rtIsNaN(lb[rtb_flag - 1])) {
        idx_1 = rtb_flag;
        exitg1 = true;
      } else {
        rtb_flag++;
      }
    }
  }

  if (idx_1 == 0) {
    ssq = lb[0];
  } else {
    ssq = lb[idx_1 - 1];
    for (rtb_flag = idx_1 + 1; rtb_flag < 13; rtb_flag++) {
      rtb_Switch = lb[rtb_flag - 1];
      if (ssq < rtb_Switch) {
        ssq = rtb_Switch;
      }
    }
  }

  if (imperix_balance_ctrl_DW.Tol < ssq) {
    // '<S160>:1:29'
    // '<S160>:1:31'
    if (imperix_balance_ctrl_DW.SolverOpts.UseHessianAsInput) {
      A_0[0] = imperix_balance_ctrl_DW.Ix[0];
      A_0[1] = imperix_balance_ctrl_DW.Ix[1];
      A_0[2] = imperix_balance_ctrl_DW.Ix[2];
      A_0[3] = imperix_balance_ctrl_DW.Ix[3];
      rtb_flag = 0;
      idx_1 = 0;
      exitg1 = false;
      while ((!exitg1) && (idx_1 < 2)) {
        idxAjj = (idx_1 << 1) + idx_1;
        ssq = 0.0;
        if (idx_1 >= 1) {
          for (c_k = 0; c_k < 1; c_k++) {
            ssq += A_0[1] * A_0[1];
          }
        }

        ssq = A_0[idxAjj] - ssq;
        if (ssq > 0.0) {
          ssq = sqrt(ssq);
          A_0[idxAjj] = ssq;
          if (idx_1 + 1 < 2) {
            c = 1.0 / ssq;
            for (c_k = idxAjj + 2; c_k <= idxAjj + 2; c_k++) {
              A_0[c_k - 1] *= c;
            }
          }

          idx_1++;
        } else {
          A_0[idxAjj] = ssq;
          rtb_flag = idx_1 + 1;
          exitg1 = true;
        }
      }

      if (rtb_flag == 0) {
        A_0[2] = 0.0;
      }

      xt_est[0] = 1.0;
      xt_est[1] = 0.0;
      xt_est[2] = 0.0;
      xt_est[3] = 1.0;
      imperix_balance_ctrl_trisolve_i(A_0, xt_est);
    } else {
      xt_est[0] = imperix_balance_ctrl_DW.Ix[0];
      xt_est[1] = imperix_balance_ctrl_DW.Ix[1];
      xt_est[2] = imperix_balance_ctrl_DW.Ix[2];
      xt_est[3] = imperix_balance_ctrl_DW.Ix[3];
    }

    for (idx_1 = 0; idx_1 < 12; idx_1++) {
      iA1[idx_1] = false;
    }

    for (rtb_flag = 0; rtb_flag < 2; rtb_flag++) {
      idx_1 = rtb_flag << 1;
      ssq = xt_est[idx_1 + 1];
      rtb_Switch = xt_est[idx_1];
      A_0[idx_1] = ssq * xt_est[1] + rtb_Switch * xt_est[0];
      A_0[idx_1 + 1] = ssq * xt_est[3] + rtb_Switch * xt_est[2];
      rtb_Gain1_0[rtb_flag] =
        -imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[rtb_flag];
    }

    for (rtb_flag = 0; rtb_flag < 24; rtb_flag++) {
      bc_1[rtb_flag] = -imperix_balance_ctrl_DW.Ac[rtb_flag];
    }

    for (rtb_flag = 0; rtb_flag < 12; rtb_flag++) {
      bc_0[rtb_flag] = -bc[rtb_flag];
    }

    imperix_balance_ctrl_qpkwik_o(xt_est, A_0, rtb_Gain1_0, bc_1, bc_0, iA1,
      imperix_balance_ctrl_DW.SolverOpts.MaxIterations,
      imperix_balance_ctrl_DW.SolverOpts.ConstraintTolerance, rtb_ie_sat, lb,
      &rtb_flag);

    // '<S160>:1:31'
    // '<S160>:1:32'
  } else {
    // '<S160>:1:34'
    rtb_ie_sat[0] = imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[0];
    rtb_ie_sat[1] = imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[1];
  }

  // '<S160>:1:44'
  rtb_Gain7[0] = rtb_Bias[0] - rtb_Gain2[0];
  rtb_Gain7[3] = -rtb_Gain2[3];
  rtb_Gain7[1] = rtb_Bias[1] - rtb_Gain2[1];
  rtb_Gain7[4] = -rtb_Gain2[4];
  rtb_Gain7[2] = rtb_Bias[2] - rtb_Gain2[2];
  rtb_Gain7[5] = -rtb_Gain2[5];
  if (!rtIsNaN(rtb_Gain7[0])) {
    rtb_flag = 1;
  } else {
    rtb_flag = 0;
    idx_1 = 2;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 7)) {
      if (!rtIsNaN(rtb_Gain7[idx_1 - 1])) {
        rtb_flag = idx_1;
        exitg1 = true;
      } else {
        idx_1++;
      }
    }
  }

  if (rtb_flag == 0) {
    ssq = rtb_Gain7[0];
  } else {
    ssq = rtb_Gain7[rtb_flag - 1];
    for (idx_1 = rtb_flag + 1; idx_1 < 7; idx_1++) {
      rtb_Switch = rtb_Gain7[idx_1 - 1];
      if (ssq > rtb_Switch) {
        ssq = rtb_Switch;
      }
    }
  }

  // '<S160>:1:45'
  rtb_Gain7[0] = -rtb_Gain2[0];
  rtb_Gain7[3] = -rtb_Bias[3] - rtb_Gain2[3];
  rtb_Gain7[1] = -rtb_Gain2[1];
  rtb_Gain7[4] = -rtb_Bias[4] - rtb_Gain2[4];
  rtb_Gain7[2] = -rtb_Gain2[2];
  rtb_Gain7[5] = -rtb_Bias[5] - rtb_Gain2[5];
  if (!rtIsNaN(-rtb_Gain2[0])) {
    rtb_flag = 1;
  } else {
    rtb_flag = 0;
    idx_1 = 2;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 7)) {
      if (!rtIsNaN(rtb_Gain7[idx_1 - 1])) {
        rtb_flag = idx_1;
        exitg1 = true;
      } else {
        idx_1++;
      }
    }
  }

  if (rtb_flag == 0) {
    ie_idx_0 = -rtb_Gain2[0];
  } else {
    ie_idx_0 = rtb_Gain7[rtb_flag - 1];
    for (idx_1 = rtb_flag + 1; idx_1 < 7; idx_1++) {
      rtb_Switch = rtb_Gain7[idx_1 - 1];
      if (ie_idx_0 < rtb_Switch) {
        ie_idx_0 = rtb_Switch;
      }
    }
  }

  // '<S160>:1:46'
  if (imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[2] > ssq - 1.0) {
    rtb_Switch = ssq - 1.0;
  } else if (rtIsNaN(imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[2])) {
    if (!rtIsNaN(ssq - 1.0)) {
      rtb_Switch = ssq - 1.0;
    } else {
      rtb_Switch = (rtNaN);
    }
  } else {
    rtb_Switch = imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[2];
  }

  if ((!(rtb_Switch >= ie_idx_0 + 1.0)) && (!rtIsNaN(ie_idx_0 + 1.0))) {
    rtb_Switch = ie_idx_0 + 1.0;
  }

  if (ssq - 1.0 < ie_idx_0 + 1.0) {
    // '<S160>:1:48'
    // '<S160>:1:49'
    rtb_Switch = 0.0;
  }

  d_x[0] = rtIsNaN(rtb_ie_sat[0]);
  d_x[1] = rtIsNaN(rtb_ie_sat[1]);
  y = true;
  rtb_flag = 0;
  exitg1 = false;
  while ((!exitg1) && (rtb_flag < 2)) {
    if (!d_x[rtb_flag]) {
      y = false;
      exitg1 = true;
    } else {
      rtb_flag++;
    }
  }

  if (y) {
    // '<S160>:1:55'
    rtb_ie_sat[0] = 0.0;
    rtb_ie_sat[1] = 0.0;
  }

  if (rtIsNaN(rtb_Switch)) {
    // '<S160>:1:58'
    // '<S160>:1:59'
    rtb_Switch = 0.0;
  }

  // Gain: '<S91>/Gain3'
  ie_idx_0 = 0.0;
  ie_idx_1 = 0.0;
  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    ssq = rtb_Gain1_k[rtb_flag];
    idx_1 = rtb_flag << 1;
    ie_idx_0 += imperix_balance_ctrl_P.M2C.Te[idx_1] * ssq;
    ie_idx_1 += imperix_balance_ctrl_P.M2C.Te[idx_1 + 1] * ssq;
  }

  // End of Gain: '<S91>/Gain3'

  // MATLAB Function: '<S1>/LICCs control' incorporates:
  //   MATLAB Function: '<S27>/Saturation'
  //   UnitDelay: '<S159>/Unit Delay1'

  // MATLAB Function 'Closed_loop_control/LICCs control': '<S30>:1'
  if (!imperix_balance_ctrl_DW.A_not_empty) {
    // '<S30>:1:5'
    // '<S30>:1:6'
    memcpy(&imperix_balance_ctrl_DW.A[0], &imperix_balance_ctrl_P.CCC.A[0],
           sizeof(real_T) << 3U);
    imperix_balance_ctrl_DW.A_not_empty = true;

    // '<S30>:1:7'
    // '<S30>:1:8'
    // '<S30>:1:9'
    // '<S30>:1:10'
    memcpy(&imperix_balance_ctrl_DW.B[0], &imperix_balance_ctrl_P.CCC.B[0],
           sizeof(real_T) << 4U);
    memcpy(&imperix_balance_ctrl_DW.H[0], &imperix_balance_ctrl_P.CCC.H[0],
           sizeof(real_T) << 4U);
    memcpy(&imperix_balance_ctrl_DW.Q[0], &imperix_balance_ctrl_P.CCC.Q[0],
           sizeof(real_T) << 4U);
    memcpy(&imperix_balance_ctrl_DW.R[0], &imperix_balance_ctrl_P.CCC.R[0],
           sizeof(real_T) << 4U);

    // '<S30>:1:11'
    memcpy(&imperix_balance_ctrl_DW.Aineq[0], &imperix_balance_ctrl_P.CCC.Aineq
           [0], 96U * sizeof(real_T));

    // '<S30>:1:12'
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      imperix_balance_ctrl_DW.pinvTx[idx_1] =
        imperix_balance_ctrl_P.M2C.pinvTx[idx_1];
    }

    // '<S30>:1:13'
    memcpy(&imperix_balance_ctrl_DW.pinvTy[0],
           &imperix_balance_ctrl_P.M2C.pinvTy[0], 12U * sizeof(real_T));

    // '<S30>:1:17'
    imperix_balance_ctrl_DW.options.UseHessianAsInput = true;
    imperix_balance_ctrl_DW.options.IntegrityChecks = true;
    imperix_balance_ctrl_DW.options.MaxIterations = 10;
    imperix_balance_ctrl_DW.options.ConstraintTolerance = 1.0E-5;
  }

  // '<S30>:1:26'
  // '<S30>:1:29'
  // '<S30>:1:30'
  // '<S30>:1:33'
  // '<S30>:1:36'
  // '<S30>:1:39'
  // '<S30>:1:42'
  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    rtb_Gain2[rtb_flag] = (imperix_balance_ctrl_DW.pinvTy[rtb_flag + 6] *
      rtb_Sum1 + imperix_balance_ctrl_DW.pinvTy[rtb_flag] * rtb_Sum) +
      (imperix_balance_ctrl_DW.pinvTx[rtb_flag] * rtb_Sum13 + rtb_Switch);
  }

  // '<S30>:1:43'
  rtb_Gain7[0] = rtb_Bias[0] - rtb_Gain2[0];
  rtb_Gain7[1] = rtb_Bias[1] - rtb_Gain2[1];
  rtb_Gain7[2] = rtb_Bias[2] - rtb_Gain2[2];
  rtb_Gain7[3] = 0.0 - rtb_Gain2[3];
  rtb_Gain7[4] = 0.0 - rtb_Gain2[4];
  rtb_Gain7[5] = 0.0 - rtb_Gain2[5];
  for (idx_1 = 0; idx_1 < 2; idx_1++) {
    idxAjj = idx_1 * 6;
    for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
      bc[idxAjj + rtb_flag] = rtb_Gain7[rtb_flag];
    }
  }

  // '<S30>:1:44'
  rtb_Gain7[0] = 0.0 - rtb_Gain2[0];
  rtb_Gain7[1] = 0.0 - rtb_Gain2[1];
  rtb_Gain7[2] = 0.0 - rtb_Gain2[2];
  rtb_Gain7[3] = -rtb_Bias[3] - rtb_Gain2[3];
  rtb_Gain7[4] = -rtb_Bias[4] - rtb_Gain2[4];
  rtb_Gain7[5] = -rtb_Bias[5] - rtb_Gain2[5];
  for (idx_1 = 0; idx_1 < 2; idx_1++) {
    idxAjj = idx_1 * 6;
    for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
      lb[idxAjj + rtb_flag] = rtb_Gain7[rtb_flag];
    }
  }

  // '<S30>:1:45'
  // '<S30>:1:49'
  if (imperix_balance_ctrl_DW.options.UseHessianAsInput) {
    memcpy(&A[0], &imperix_balance_ctrl_DW.H[0], sizeof(real_T) << 4U);
    rtb_flag = 0;
    idx_1 = 0;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 4)) {
      idxAjj = (idx_1 << 2) + idx_1;
      ssq = 0.0;
      if (idx_1 >= 1) {
        for (c_k = 0; c_k < idx_1; c_k++) {
          c = A[(c_k << 2) + idx_1];
          ssq += c * c;
        }
      }

      ssq = A[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        A[idxAjj] = ssq;
        if (idx_1 + 1 < 4) {
          if (idx_1 != 0) {
            b_a_tmp = (((idx_1 - 1) << 2) + idx_1) + 2;
            for (c_k = idx_1 + 2; c_k <= b_a_tmp; c_k += 4) {
              c_tmp = c_k - idx_1;
              c = -A[(((c_tmp - 2) >> 2) << 2) + idx_1];
              e = c_tmp + 2;
              for (c_tmp = c_k; c_tmp <= e; c_tmp++) {
                A_tmp = ((idxAjj + c_tmp) - c_k) + 1;
                A[A_tmp] += A[c_tmp - 1] * c;
              }
            }
          }

          ssq = 1.0 / ssq;
          b_a_tmp = (idxAjj - idx_1) + 4;
          for (c_k = idxAjj + 2; c_k <= b_a_tmp; c_k++) {
            A[c_k - 1] *= ssq;
          }
        }

        idx_1++;
      } else {
        A[idxAjj] = ssq;
        rtb_flag = idx_1 + 1;
        exitg1 = true;
      }
    }

    if (rtb_flag == 0) {
      rtb_flag = 5;
    }

    for (idxAjj = 2; idxAjj < rtb_flag; idxAjj++) {
      for (idx_1 = 0; idx_1 <= idxAjj - 2; idx_1++) {
        A[idx_1 + ((idxAjj - 1) << 2)] = 0.0;
      }
    }

    for (rtb_flag = 0; rtb_flag < 4; rtb_flag++) {
      idxAjj = rtb_flag << 2;
      M[idxAjj] = B[idxAjj];
      M[idxAjj + 1] = B[idxAjj + 1];
      M[idxAjj + 2] = B[idxAjj + 2];
      M[idxAjj + 3] = B[idxAjj + 3];
    }

    imperix_balance_ctrl_trisolve(A, M);
  } else {
    memcpy(&M[0], &imperix_balance_ctrl_DW.H[0], sizeof(real_T) << 4U);
  }

  for (idx_1 = 0; idx_1 < 24; idx_1++) {
    iA1_0[idx_1] = false;
  }

  rtb_Gain1_0[0] = (imperix_balance_ctrl_DW.A[0] * ie_idx_0 +
                    imperix_balance_ctrl_DW.A[4] * ie_idx_1) +
    (imperix_balance_ctrl_DW.B[0] * imperix_balance_ctrl_DW.u_prev[0] +
     imperix_balance_ctrl_DW.u_prev[1] * imperix_balance_ctrl_DW.B[4]);
  xt_est[0] = -imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0];
  xt_est[2] = -((1.0 - imperix_balance_ctrl_P.CCC.alpha) * rtb_ie_sat[0] +
                imperix_balance_ctrl_P.CCC.alpha *
                imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0]);
  rtb_Gain1_0[1] = (imperix_balance_ctrl_DW.A[1] * ie_idx_0 +
                    imperix_balance_ctrl_DW.A[5] * ie_idx_1) +
    (imperix_balance_ctrl_DW.u_prev[0] * imperix_balance_ctrl_DW.B[1] +
     imperix_balance_ctrl_DW.u_prev[1] * imperix_balance_ctrl_DW.B[5]);
  xt_est[1] = -imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1];
  xt_est[3] = -((1.0 - imperix_balance_ctrl_P.CCC.alpha) * rtb_ie_sat[1] +
                imperix_balance_ctrl_P.CCC.alpha *
                imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1]);
  ssq = 0.0;
  c = 0.0;
  tmp_9 = 0.0;
  tmp_a = 0.0;
  for (rtb_flag = 0; rtb_flag < 2; rtb_flag++) {
    tmp_2 = rtb_Gain1_0[rtb_flag];
    idx_1 = rtb_flag << 2;
    ssq += imperix_balance_ctrl_DW.A[idx_1] * tmp_2;
    c += imperix_balance_ctrl_DW.A[idx_1 + 1] * tmp_2;
    tmp_9 += imperix_balance_ctrl_DW.A[idx_1 + 2] * tmp_2;
    tmp_a += imperix_balance_ctrl_DW.A[idx_1 + 3] * tmp_2;
  }

  A_0[3] = tmp_a;
  A_0[2] = tmp_9;
  A_0[1] = c;
  A_0[0] = ssq;
  ssq = 0.0;
  c = 0.0;
  tmp_9 = 0.0;
  tmp_a = 0.0;
  for (rtb_flag = 0; rtb_flag < 4; rtb_flag++) {
    tmp_2 = 0.0;
    tmp_6 = 0.0;
    tmp_7 = 0.0;
    tmp_8 = 0.0;
    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      tmp_3 = imperix_balance_ctrl_DW.Q[(rtb_flag << 2) + idx_1];
      tmp_2 += 2.0 * imperix_balance_ctrl_DW.B[idx_1] * tmp_3;
      tmp_6 += imperix_balance_ctrl_DW.B[idx_1 + 4] * 2.0 * tmp_3;
      tmp_7 += imperix_balance_ctrl_DW.B[idx_1 + 8] * 2.0 * tmp_3;
      tmp_8 += imperix_balance_ctrl_DW.B[idx_1 + 12] * 2.0 * tmp_3;
    }

    idx_1 = rtb_flag << 2;
    tmp[idx_1 + 3] = tmp_8;
    tmp[idx_1 + 2] = tmp_7;
    tmp[idx_1 + 1] = tmp_6;
    tmp[idx_1] = tmp_2;
    tmp_0[rtb_flag] = xt_est[rtb_flag] + A_0[rtb_flag];
    tmp_2 = tmp_0[rtb_flag];
    ssq += tmp[idx_1] * tmp_2;
    c += tmp[idx_1 + 1] * tmp_2;
    tmp_9 += tmp[idx_1 + 2] * tmp_2;
    tmp_a += tmp[idx_1 + 3] * tmp_2;
  }

  xt_est[0] = 0.0;
  xt_est[1] = 0.0;
  xt_est[2] = 0.0;
  xt_est[3] = 0.0;
  for (rtb_flag = 0; rtb_flag < 4; rtb_flag++) {
    tmp_2 = imperix_balance_ctrl_DW.u_prev[rtb_flag];
    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      c_k = rtb_flag << 2;
      b_a_tmp = c_k + idx_1;
      xt_est[idx_1] += imperix_balance_ctrl_DW.R[b_a_tmp] * -2.0 * tmp_2;
      idxAjj = idx_1 << 2;
      A[b_a_tmp] = ((M[idxAjj + 1] * M[c_k + 1] + M[idxAjj] * M[c_k]) + M[idxAjj
                    + 2] * M[c_k + 2]) + M[idxAjj + 3] * M[c_k + 3];
    }
  }

  A_0[0] = ssq + xt_est[0];
  A_0[1] = c + xt_est[1];
  A_0[2] = tmp_9 + xt_est[2];
  A_0[3] = tmp_a + xt_est[3];
  for (rtb_flag = 0; rtb_flag < 96; rtb_flag++) {
    tmp_1[rtb_flag] = -imperix_balance_ctrl_DW.Aineq[rtb_flag];
  }

  for (rtb_flag = 0; rtb_flag < 12; rtb_flag++) {
    bc_1[rtb_flag] = -bc[rtb_flag];
    bc_1[rtb_flag + 12] = lb[rtb_flag];
  }

  imperix_balance_ctrl_qpkwik(M, A, A_0, tmp_1, bc_1, iA1_0,
    imperix_balance_ctrl_DW.options.MaxIterations,
    imperix_balance_ctrl_DW.options.ConstraintTolerance,
    imperix_balance_ctrl_DW.u_prev, lam, &rtb_flag);

  // SignalConversion generated from: '<S31>/Gain' incorporates:
  //   MATLAB Function: '<S1>/LICCs control'

  // '<S30>:1:51'
  // '<S30>:1:54'
  rtb_Sum13_0[0] = rtb_Sum13;
  rtb_Sum13_0[1] = rtb_Sum;
  rtb_Sum13_0[3] = imperix_balance_ctrl_DW.u_prev[0];
  rtb_Sum13_0[2] = rtb_Sum1;
  rtb_Sum13_0[4] = imperix_balance_ctrl_DW.u_prev[1];

  // Sum: '<S31>/Sum11' incorporates:
  //   Gain: '<S31>/Gain'
  //   MATLAB Function: '<S27>/Saturation'

  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    ssq = 0.0;
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      ssq += imperix_balance_ctrl_P.M2C.pinvT[6 * idx_1 + rtb_flag] *
        rtb_Sum13_0[idx_1];
    }

    rtb_Gain2[rtb_flag] = ssq + rtb_Switch;
  }

  // End of Sum: '<S31>/Sum11'

  // MATLAB Function: '<S31>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation Index/Modulation index': '<S162>:1' 
  // '<S162>:1:4'
  rtb_Gain2[3] = -rtb_Gain2[3];
  rtb_Gain2[4] = -rtb_Gain2[4];
  rtb_Gain2[5] = -rtb_Gain2[5];

  // '<S162>:1:10'
  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    rtb_Sum13 = rtb_Gain2[rtb_flag] / rtb_Bias[rtb_flag];
    if (!(rtb_Sum13 >= 0.0)) {
      rtb_Sum13 = 0.0;
    }

    if (!(rtb_Sum13 <= 1.0)) {
      rtb_Sum13 = 1.0;
    }

    rtb_Gain2[rtb_flag] = rtb_Sum13;

    // Gain: '<S1>/Gain' incorporates:
    //   Gain: '<S1>/Gain21'

    rtb_Gain7[rtb_flag] = imperix_balance_ctrl_P.Gain_Gain * rtb_Sum13;
  }

  // End of MATLAB Function: '<S31>/Modulation index'

  // DataTypeConversion: '<S143>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1 = static_cast<real32_T>(rtb_Gain7[4]);

  // S-Function (DAC): '<S143>/DAC'
  Dac_SetVoltage(1, imperix_balance_ctrl_B.DataTypeConversion1, 0);

  // DataTypeConversion: '<S145>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>
    (rtb_Gain7[5]);

  // S-Function (DAC): '<S145>/DAC'
  Dac_SetVoltage(2, imperix_balance_ctrl_B.DataTypeConversion1_l, 0);

  // DataTypeConversion: '<S151>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_la = static_cast<real32_T>
    (rtb_Gain7[0]);

  // S-Function (DAC): '<S151>/DAC'
  Dac_SetVoltage(0, imperix_balance_ctrl_B.DataTypeConversion1_la, 1);

  // DataTypeConversion: '<S153>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>
    (rtb_Gain7[1]);

  // S-Function (DAC): '<S153>/DAC'
  Dac_SetVoltage(1, imperix_balance_ctrl_B.DataTypeConversion1_p, 1);

  // DataTypeConversion: '<S155>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>
    (rtb_Gain7[2]);

  // S-Function (DAC): '<S155>/DAC'
  Dac_SetVoltage(2, imperix_balance_ctrl_B.DataTypeConversion1_a, 1);

  // DataTypeConversion: '<S157>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>
    (rtb_Gain7[3]);

  // S-Function (DAC): '<S157>/DAC'
  Dac_SetVoltage(3, imperix_balance_ctrl_B.DataTypeConversion1_e, 1);

  // S-Function (ADC): '<S110>/ADC'
  imperix_balance_ctrl_B.ADC_g = (float)(*ix_raw_adc_ptr_2_0) * 6.1035E-5F +
    0.0F;

  // DataTypeConversion: '<S1>/Cast To Double3'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_g),
    &imperix_balance_ctrl_B.MovingAverage,
    &imperix_balance_ctrl_DW.MovingAverage);

  // Outputs for Triggered SubSystem: '<S78>/Sample and Hold' incorporates:
  //   TriggerPort: '<S391>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE_hy,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S391>/In'
    imperix_balance_ctrl_B.In_ge =
      imperix_balance_ctrl_B.MovingAverage.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S78>/Sample and Hold'

  // DataTypeConversion: '<S186>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double3'
  //   Gain: '<S1>/Gain11'
  //   Sum: '<S78>/Sum1'

  imperix_balance_ctrl_B.DataTypeConversion = static_cast<real32_T>
    (imperix_balance_ctrl_P.IM.Tb / imperix_balance_ctrl_P.IM.TN *
     (imperix_balance_ctrl_B.ADC_g - imperix_balance_ctrl_B.In_ge));

  // S-Function (PROBE): '<S186>/S-Function'
  Te = imperix_balance_ctrl_B.DataTypeConversion;

  // Gain: '<S1>/Gain21'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.Vc_ref;
  for (idx_1 = 0; idx_1 < 6; idx_1++) {
    rtb_Gain7[idx_1] = ssq * rtb_Bias[idx_1];
  }

  // End of Gain: '<S1>/Gain21'

  // DataTypeConversion: '<S188>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_o = static_cast<real32_T>(rtb_Gain7
    [4]);

  // S-Function (PROBE): '<S188>/S-Function'
  Vc5 = imperix_balance_ctrl_B.DataTypeConversion_o;

  // DataTypeConversion: '<S190>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_k = static_cast<real32_T>(rtb_Gain7
    [5]);

  // S-Function (PROBE): '<S190>/S-Function'
  Vc6 = imperix_balance_ctrl_B.DataTypeConversion_k;

  // Gain: '<S1>/Gain25'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S192>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain25'

  imperix_balance_ctrl_B.DataTypeConversion_kx = static_cast<real32_T>(ssq *
    ie_idx_0);

  // S-Function (PROBE): '<S192>/S-Function'
  ie1 = imperix_balance_ctrl_B.DataTypeConversion_kx;

  // Gain: '<S1>/Gain9'
  c = 1.0 / (1.4142135623730951 * imperix_balance_ctrl_P.IM.IN);

  // DataTypeConversion: '<S194>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_balance_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(c *
    rtb_Gain1[0]);

  // S-Function (PROBE): '<S194>/S-Function'
  im_alp = imperix_balance_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S196>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_balance_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(c *
    rtb_Gain1[1]);

  // S-Function (PROBE): '<S196>/S-Function'
  im_bet = imperix_balance_ctrl_B.DataTypeConversion_i;

  // Gain: '<S1>/Gain24'
  c = 1.0 / imperix_balance_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S198>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain24'

  imperix_balance_ctrl_B.DataTypeConversion_m = static_cast<real32_T>(c *
    rtb_ie_sat[0]);

  // S-Function (PROBE): '<S198>/S-Function'
  ie1_r = imperix_balance_ctrl_B.DataTypeConversion_m;

  // DataTypeConversion: '<S200>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain26'
  //   MATLAB Function: '<S27>/Saturation'

  imperix_balance_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.vo_max * rtb_Switch);

  // S-Function (PROBE): '<S200>/S-Function'
  vo_r = imperix_balance_ctrl_B.DataTypeConversion_p;

  // DataTypeConversion: '<S202>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain24'

  imperix_balance_ctrl_B.DataTypeConversion_iu = static_cast<real32_T>(c *
    rtb_ie_sat[1]);

  // S-Function (PROBE): '<S202>/S-Function'
  ie2_r = imperix_balance_ctrl_B.DataTypeConversion_iu;

  // DataTypeConversion: '<S204>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'

  imperix_balance_ctrl_B.DataTypeConversion_pe = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.FrN * rtb_Gain14);

  // S-Function (PROBE): '<S204>/S-Function'
  Frd = imperix_balance_ctrl_B.DataTypeConversion_pe;

  // DataTypeConversion: '<S206>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain25'

  imperix_balance_ctrl_B.DataTypeConversion_d = static_cast<real32_T>(ssq *
    ie_idx_1);

  // S-Function (PROBE): '<S206>/S-Function'
  ie2 = imperix_balance_ctrl_B.DataTypeConversion_d;

  // Gain: '<S1>/Gain1'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.is_max;
  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    rtb_Gain1_k[rtb_flag] *= ssq;
  }

  // End of Gain: '<S1>/Gain1'

  // DataTypeConversion: '<S208>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_id = static_cast<real32_T>
    (rtb_Gain1_k[0]);

  // S-Function (PROBE): '<S208>/S-Function'
  is1 = imperix_balance_ctrl_B.DataTypeConversion_id;

  // S-Function (sdspstatfcns): '<S86>/Mean'
  rtb_Gain14 = rtb_Bias[0];
  for (rtb_flag = 4; rtb_flag >= 0; rtb_flag--) {
    rtb_Gain14 += rtb_Bias[5 - rtb_flag];
  }

  rtb_Gain14 /= 6.0;

  // End of S-Function (sdspstatfcns): '<S86>/Mean'

  // DataTypeConversion: '<S210>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain22'

  imperix_balance_ctrl_B.DataTypeConversion_g = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.Vc_ref * rtb_Gain14);

  // S-Function (PROBE): '<S210>/S-Function'
  Vc_m = imperix_balance_ctrl_B.DataTypeConversion_g;

  // DataTypeConversion: '<S212>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain20'

  imperix_balance_ctrl_B.DataTypeConversion_gb = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.PCC.u_max * rtb_Sum1_a);

  // S-Function (PROBE): '<S212>/S-Function'
  iP_r = imperix_balance_ctrl_B.DataTypeConversion_gb;

  // DataTypeConversion: '<S214>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_balance_ctrl_B.DataTypeConversion_h = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.PCC.u_max * rtb_Gain1_a[0]);

  // S-Function (PROBE): '<S214>/S-Function'
  iP = imperix_balance_ctrl_B.DataTypeConversion_h;

  // Gain: '<S1>/Gain16'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.vy_max;

  // DataTypeConversion: '<S216>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_balance_ctrl_B.DataTypeConversion_m1 = static_cast<real32_T>(ssq *
    rtb_TmpSignalConversionAtGain_1);

  // S-Function (PROBE): '<S216>/S-Function'
  vm_q = imperix_balance_ctrl_B.DataTypeConversion_m1;

  // DataTypeConversion: '<S218>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'

  imperix_balance_ctrl_B.DataTypeConversion_dr = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.FrN * rtb_F);

  // S-Function (PROBE): '<S218>/S-Function'
  Frd_r = imperix_balance_ctrl_B.DataTypeConversion_dr;

  // DataTypeConversion: '<S220>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain7'

  imperix_balance_ctrl_B.DataTypeConversion_pw = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.wN * rtb_w);

  // S-Function (PROBE): '<S220>/S-Function'
  wm_r = imperix_balance_ctrl_B.DataTypeConversion_pw;

  // DataTypeConversion: '<S222>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'

  imperix_balance_ctrl_B.DataTypeConversion_mx = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isdN * rtb_Switch_f_idx_0);

  // S-Function (PROBE): '<S222>/S-Function'
  im_d = imperix_balance_ctrl_B.DataTypeConversion_mx;

  // DataTypeConversion: '<S224>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'

  imperix_balance_ctrl_B.DataTypeConversion_l = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isdN * rtb_Saturation_j);

  // S-Function (PROBE): '<S224>/S-Function'
  imd_r = imperix_balance_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S226>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain2'

  imperix_balance_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isqN * rtb_Switch_f_idx_1);

  // S-Function (PROBE): '<S226>/S-Function'
  im_q = imperix_balance_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S228>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain3'

  imperix_balance_ctrl_B.DataTypeConversion_d4 = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isqN * rtb_Saturation);

  // S-Function (PROBE): '<S228>/S-Function'
  imq_r = imperix_balance_ctrl_B.DataTypeConversion_d4;

  // DataTypeConversion: '<S230>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_pw0 = static_cast<real32_T>
    (rtb_Gain1_k[1]);

  // S-Function (PROBE): '<S230>/S-Function'
  is2 = imperix_balance_ctrl_B.DataTypeConversion_pw0;

  // DataTypeConversion: '<S232>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_balance_ctrl_B.DataTypeConversion_ez = static_cast<real32_T>(ssq *
    rtb_TmpSignalConversionAtGain_0);

  // S-Function (PROBE): '<S232>/S-Function'
  vm_d = imperix_balance_ctrl_B.DataTypeConversion_ez;

  // DataTypeConversion: '<S234>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain27'
  //   UnitDelay: '<S392>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_n = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.Vc_ref *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE);

  // S-Function (PROBE): '<S234>/S-Function'
  Vc_m_f = imperix_balance_ctrl_B.DataTypeConversion_n;

  // DataTypeConversion: '<S236>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_lu = static_cast<real32_T>
    (rtb_Gain7[0]);

  // S-Function (PROBE): '<S236>/S-Function'
  Vc1 = imperix_balance_ctrl_B.DataTypeConversion_lu;

  // Gain: '<S1>/Gain18'
  ssq = 1.0 / (imperix_balance_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S238>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_balance_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(ssq *
    rtb_im_idx_1);

  // S-Function (PROBE): '<S238>/S-Function'
  im_bet_KF = imperix_balance_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S240>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_balance_ctrl_B.DataTypeConversion_ir = static_cast<real32_T>(ssq *
    rtb_im_idx_0);

  // S-Function (PROBE): '<S240>/S-Function'
  im_alp_KF = imperix_balance_ctrl_B.DataTypeConversion_ir;

  // Gain: '<S1>/Gain19'
  ssq = 1.0 / imperix_balance_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S242>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_balance_ctrl_B.DataTypeConversion_d5 = static_cast<real32_T>(ssq *
    rtb_Fr_idx_1);

  // S-Function (PROBE): '<S242>/S-Function'
  Fr_bet = imperix_balance_ctrl_B.DataTypeConversion_d5;

  // DataTypeConversion: '<S244>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_balance_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(ssq *
    rtb_Fr_idx_0);

  // S-Function (PROBE): '<S244>/S-Function'
  Fr_alp = imperix_balance_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S246>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain23'

  imperix_balance_ctrl_B.DataTypeConversion_fy = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.TN * rtb_Te);

  // S-Function (PROBE): '<S246>/S-Function'
  Te_KF = imperix_balance_ctrl_B.DataTypeConversion_fy;

  // DataTypeConversion: '<S248>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_l5 = static_cast<real32_T>
    (rtb_Gain7[1]);

  // S-Function (PROBE): '<S248>/S-Function'
  Vc2 = imperix_balance_ctrl_B.DataTypeConversion_l5;

  // DataTypeConversion: '<S250>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_iw = static_cast<real32_T>
    (rtb_Gain7[2]);

  // S-Function (PROBE): '<S250>/S-Function'
  Vc3 = imperix_balance_ctrl_B.DataTypeConversion_iw;

  // DataTypeConversion: '<S252>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fo = static_cast<real32_T>
    (rtb_Gain1_k[2]);

  // S-Function (PROBE): '<S252>/S-Function'
  is3 = imperix_balance_ctrl_B.DataTypeConversion_fo;

  // DataTypeConversion: '<S254>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_a = static_cast<real32_T>(rtb_Gain7
    [3]);

  // S-Function (PROBE): '<S254>/S-Function'
  Vc4 = imperix_balance_ctrl_B.DataTypeConversion_a;

  // Gain: '<S1>/Gain28'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S256>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain28'
  //   UnitDelay: '<S159>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_l4 = static_cast<real32_T>(ssq *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1]);

  // S-Function (PROBE): '<S256>/S-Function'
  ie2_rf = imperix_balance_ctrl_B.DataTypeConversion_l4;

  // DataTypeConversion: '<S258>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fs = static_cast<real32_T>
    (rtb_Gain1_k[3]);

  // S-Function (PROBE): '<S258>/S-Function'
  is4 = imperix_balance_ctrl_B.DataTypeConversion_fs;

  // DataTypeConversion: '<S260>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ba = static_cast<real32_T>
    (rtb_Gain1_k[4]);

  // S-Function (PROBE): '<S260>/S-Function'
  is5 = imperix_balance_ctrl_B.DataTypeConversion_ba;

  // DataTypeConversion: '<S262>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fz = static_cast<real32_T>
    (rtb_Gain1_k[5]);

  // S-Function (PROBE): '<S262>/S-Function'
  is6 = imperix_balance_ctrl_B.DataTypeConversion_fz;

  // DataTypeConversion: '<S264>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain4'

  imperix_balance_ctrl_B.DataTypeConversion_bg = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.wN * rtb_Gain4_f);

  // S-Function (PROBE): '<S264>/S-Function'
  wm = imperix_balance_ctrl_B.DataTypeConversion_bg;

  // DataTypeConversion: '<S266>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain28'
  //   UnitDelay: '<S159>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_fn = static_cast<real32_T>(ssq *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0]);

  // S-Function (PROBE): '<S266>/S-Function'
  ie1_rf = imperix_balance_ctrl_B.DataTypeConversion_fn;

  // S-Function (TUNABLE_PARAM): '<S700>/S-Function'
  imperix_balance_ctrl_B.SFunction_e = freq_PWM;

  // Saturate: '<S136>/Saturation'
  if (imperix_balance_ctrl_B.SFunction_e >
      imperix_balance_ctrl_P.Saturation_UpperSat) {
    // Saturate: '<S136>/Saturation'
    imperix_balance_ctrl_B.Saturation =
      imperix_balance_ctrl_P.Saturation_UpperSat;
  } else if (imperix_balance_ctrl_B.SFunction_e <
             imperix_balance_ctrl_P.Saturation_LowerSat) {
    // Saturate: '<S136>/Saturation'
    imperix_balance_ctrl_B.Saturation =
      imperix_balance_ctrl_P.Saturation_LowerSat;
  } else {
    // Saturate: '<S136>/Saturation'
    imperix_balance_ctrl_B.Saturation = imperix_balance_ctrl_B.SFunction_e;
  }

  // End of Saturate: '<S136>/Saturation'

  // S-Function (CLK): '<S136>/CLK1'
  Clock_SetFrequency((tClock) 1, imperix_balance_ctrl_B.Saturation);

  // Sum: '<S159>/Sum' incorporates:
  //   Gain: '<S159>/Gain1'
  //   Gain: '<S159>/Gain2'
  //   UnitDelay: '<S159>/Unit Delay1'

  imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0] = (1.0 -
    imperix_balance_ctrl_P.CCC.alpha) * rtb_ie_sat[0] +
    imperix_balance_ctrl_P.CCC.alpha *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0];
  imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1] = (1.0 -
    imperix_balance_ctrl_P.CCC.alpha) * rtb_ie_sat[1] +
    imperix_balance_ctrl_P.CCC.alpha *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1];

  // RateTransition generated from: '<S27>/Energy balance' incorporates:
  //   Gain: '<S83>/Gain'
  //   Gain: '<S83>/Gain8'

  if (tmp_b) {
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[idx_1] =
        rtb_Bias[idx_1];
    }

    // RateTransition generated from: '<S27>/Energy balance'
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[idx_1] =
        rtb_TmpSignalConversionAtGain2I[idx_1];
    }

    // End of RateTransition generated from: '<S27>/Energy balance'

    // SignalConversion generated from: '<S385>/Gain3'
    rtb_Gain1[0] = rtb_Switch_j[0];
    rtb_Gain1[1] = rtb_Switch_j[1];
    rtb_Gain1[2] = 0.0;

    // Gain: '<S385>/Gain3'
    rtb_Switch = 0.0;
    ie_idx_0 = 0.0;
    ie_idx_1 = 0.0;
    for (rtb_flag = 0; rtb_flag < 3; rtb_flag++) {
      ssq = rtb_Gain1[rtb_flag];
      rtb_Switch += imperix_balance_ctrl_P.Gain3_Gain_g[3 * rtb_flag] * ssq;
      ie_idx_0 += imperix_balance_ctrl_P.Gain3_Gain_g[3 * rtb_flag + 1] * ssq;
      ie_idx_1 += imperix_balance_ctrl_P.Gain3_Gain_g[3 * rtb_flag + 2] * ssq;
    }

    // End of Gain: '<S385>/Gain3'
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[0] = rtb_Sum1_a;
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[1] =
      imperix_balance_ctrl_P.Gain8_Gain * rtb_Sum1_a;
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[2] =
      imperix_balance_ctrl_P.Gain_Gain_h * rtb_Switch;
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[3] =
      imperix_balance_ctrl_P.Gain_Gain_h * ie_idx_0;
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[4] =
      imperix_balance_ctrl_P.Gain_Gain_h * ie_idx_1;

    // RateTransition generated from: '<S27>/Energy balance' incorporates:
    //   Gain: '<S83>/Gain'
    //   Gain: '<S83>/Gain8'

    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport5_Bu = rtb_Sum_b;
  }

  // Gain: '<S86>/Gain' incorporates:
  //   Math: '<S86>/Square'

  ssq = imperix_balance_ctrl_P.M2C.C * 0.5;
  for (rtb_flag = 0; rtb_flag < 6; rtb_flag++) {
    // Math: '<S86>/Square'
    rtb_F = rtb_Bias[rtb_flag];
    rtb_Bias[rtb_flag] = rtb_F * rtb_F * ssq;
  }

  // End of Gain: '<S86>/Gain'

  // RateTransition generated from: '<S27>/Zero-Order Hold1'
  if (imperix_balance_ctrl_DW.TmpRTBAtZeroOrderHold1Inport1_s == 0) {
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      imperix_balance_ctrl_DW.TmpRTBAtZeroOrderHold1Inport1_B[idx_1] =
        rtb_Bias[idx_1];
    }
  }

  // End of RateTransition generated from: '<S27>/Zero-Order Hold1'

  // DataTypeConversion: '<S170>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ao = static_cast<real32_T>
    (rtb_Gain2[0]);

  // S-Function (PROBE): '<S170>/S-Function'
  D1 = imperix_balance_ctrl_B.DataTypeConversion_ao;

  // DataTypeConversion: '<S172>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ay = static_cast<real32_T>
    (rtb_Gain2[1]);

  // S-Function (PROBE): '<S172>/S-Function'
  D2 = imperix_balance_ctrl_B.DataTypeConversion_ay;

  // DataTypeConversion: '<S174>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_hd = static_cast<real32_T>
    (rtb_Gain2[2]);

  // S-Function (PROBE): '<S174>/S-Function'
  D3 = imperix_balance_ctrl_B.DataTypeConversion_hd;

  // DataTypeConversion: '<S176>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_gh = static_cast<real32_T>
    (rtb_Gain2[3]);

  // S-Function (PROBE): '<S176>/S-Function'
  D4 = imperix_balance_ctrl_B.DataTypeConversion_gh;

  // DataTypeConversion: '<S178>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ns = static_cast<real32_T>
    (rtb_Gain2[4]);

  // S-Function (PROBE): '<S178>/S-Function'
  D5 = imperix_balance_ctrl_B.DataTypeConversion_ns;

  // DataTypeConversion: '<S180>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ep = static_cast<real32_T>
    (rtb_Gain2[5]);

  // S-Function (PROBE): '<S180>/S-Function'
  D6 = imperix_balance_ctrl_B.DataTypeConversion_ep;

  // DataTypeConversion: '<S32>/Data Type Conversion2' incorporates:
  //   Constant: '<S32>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value);

  // S-Function (TUNABLE_PARAM): '<S690>/S-Function'
  imperix_balance_ctrl_B.SFunction_g = VSETEN;

  // S-Function (TUNABLE_PARAM): '<S696>/S-Function'
  imperix_balance_ctrl_B.SFunction_c4 = enable_FP;

  // Outputs for Atomic SubSystem: '<S181>/generation'
  // S-Function (CB_PWM): '<S182>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_balance_ctrl_B.SFunction_g, 2);

  // End of Outputs for SubSystem: '<S181>/generation'

  // DataTypeConversion: '<S33>/Data Type Conversion2' incorporates:
  //   Constant: '<S33>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_b);

  // S-Function (TUNABLE_PARAM): '<S702>/S-Function'
  imperix_balance_ctrl_B.SFunction_j = INDM;

  // Outputs for Atomic SubSystem: '<S183>/generation'
  // S-Function (CB_PWM): '<S184>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_balance_ctrl_B.SFunction_j, 2);

  // End of Outputs for SubSystem: '<S183>/generation'

  // DataTypeConversion: '<S373>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S172>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_le = static_cast<real32_T>
    (rtb_Gain2[1]);

  // DataTypeConversion: '<S373>/Data Type Conversion2' incorporates:
  //   Constant: '<S373>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_l = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_j);

  // Outputs for Atomic SubSystem: '<S377>/generation'
  // S-Function (CB_PWM): '<S378>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2,
                     imperix_balance_ctrl_B.DataTypeConversion1_le, 1);

  // End of Outputs for SubSystem: '<S377>/generation'

  // DataTypeConversion: '<S374>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S172>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_pv = static_cast<real32_T>
    (rtb_Gain2[1]);

  // DataTypeConversion: '<S374>/Data Type Conversion2' incorporates:
  //   Constant: '<S374>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_o);

  // Outputs for Atomic SubSystem: '<S379>/generation'
  // S-Function (CB_PWM): '<S380>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6,
                     imperix_balance_ctrl_B.DataTypeConversion1_pv, 1);

  // End of Outputs for SubSystem: '<S379>/generation'

  // DataTypeConversion: '<S375>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S172>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_Gain2[1]);

  // DataTypeConversion: '<S375>/Data Type Conversion2' incorporates:
  //   Constant: '<S375>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_l);

  // Outputs for Atomic SubSystem: '<S381>/generation'
  // S-Function (CB_PWM): '<S382>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3,
                     imperix_balance_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S381>/generation'

  // DataTypeConversion: '<S376>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S172>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_Gain2[1]);

  // DataTypeConversion: '<S376>/Data Type Conversion2' incorporates:
  //   Constant: '<S376>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_oo);

  // Outputs for Atomic SubSystem: '<S383>/generation'
  // S-Function (CB_PWM): '<S384>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7,
                     imperix_balance_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S383>/generation'

  // Sum: '<S392>/Sum' incorporates:
  //   Gain: '<S392>/Gain1'
  //   Gain: '<S392>/Gain2'
  //   UnitDelay: '<S392>/Unit Delay1'

  imperix_balance_ctrl_DW.UnitDelay1_DSTATE = (1.0 -
    imperix_balance_ctrl_P.TEC.alpha) * rtb_Gain14 +
    imperix_balance_ctrl_P.TEC.alpha * imperix_balance_ctrl_DW.UnitDelay1_DSTATE;

  // DeadZone: '<S422>/DeadZone'
  if (rtb_DeadZone > imperix_balance_ctrl_P.TEC.u_max) {
    rtb_DeadZone -= imperix_balance_ctrl_P.TEC.u_max;
  } else if (rtb_DeadZone >= -imperix_balance_ctrl_P.TEC.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_balance_ctrl_P.TEC.u_max;
  }

  // End of DeadZone: '<S422>/DeadZone'

  // Gain: '<S427>/Integral Gain'
  rtb_Integrator_b *= imperix_balance_ctrl_P.TEC.ki;

  // DataTypeConversion: '<S559>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S174>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_Gain2[2]);

  // DataTypeConversion: '<S559>/Data Type Conversion2' incorporates:
  //   Constant: '<S559>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_p);

  // Outputs for Atomic SubSystem: '<S563>/generation'
  // S-Function (CB_PWM): '<S564>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_balance_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S563>/generation'

  // DataTypeConversion: '<S560>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S174>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_eo = static_cast<real32_T>
    (rtb_Gain2[2]);

  // DataTypeConversion: '<S560>/Data Type Conversion2' incorporates:
  //   Constant: '<S560>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_pr);

  // Outputs for Atomic SubSystem: '<S565>/generation'
  // S-Function (CB_PWM): '<S566>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4,
                     imperix_balance_ctrl_B.DataTypeConversion1_eo, 0);

  // End of Outputs for SubSystem: '<S565>/generation'

  // DataTypeConversion: '<S561>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S174>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (rtb_Gain2[2]);

  // DataTypeConversion: '<S561>/Data Type Conversion2' incorporates:
  //   Constant: '<S561>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_c);

  // Outputs for Atomic SubSystem: '<S567>/generation'
  // S-Function (CB_PWM): '<S568>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1,
                     imperix_balance_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S567>/generation'

  // DataTypeConversion: '<S562>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S174>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_Gain2[2]);

  // DataTypeConversion: '<S562>/Data Type Conversion2' incorporates:
  //   Constant: '<S562>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ll);

  // Outputs for Atomic SubSystem: '<S569>/generation'
  // S-Function (CB_PWM): '<S570>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5,
                     imperix_balance_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S569>/generation'

  // DeadZone: '<S600>/DeadZone'
  if (rtb_DeadZone_o > imperix_balance_ctrl_P.PCC.u_max) {
    rtb_DeadZone_o -= imperix_balance_ctrl_P.PCC.u_max;
  } else if (rtb_DeadZone_o >= -imperix_balance_ctrl_P.PCC.u_max) {
    rtb_DeadZone_o = 0.0;
  } else {
    rtb_DeadZone_o -= -imperix_balance_ctrl_P.PCC.u_max;
  }

  // End of DeadZone: '<S600>/DeadZone'

  // Gain: '<S605>/Integral Gain'
  rtb_IntegralGain_m *= imperix_balance_ctrl_P.PCC.ki;

  // DataTypeConversion: '<S632>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S176>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_Gain2[3]);

  // DataTypeConversion: '<S632>/Data Type Conversion2' incorporates:
  //   Constant: '<S632>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_n);

  // Outputs for Atomic SubSystem: '<S636>/generation'
  // S-Function (CB_PWM): '<S637>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2,
                     imperix_balance_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S636>/generation'

  // DataTypeConversion: '<S633>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S176>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_Gain2[3]);

  // DataTypeConversion: '<S633>/Data Type Conversion2' incorporates:
  //   Constant: '<S633>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_jk = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_k);

  // Outputs for Atomic SubSystem: '<S638>/generation'
  // S-Function (CB_PWM): '<S639>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6,
                     imperix_balance_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S638>/generation'

  // DataTypeConversion: '<S634>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S176>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (rtb_Gain2[3]);

  // DataTypeConversion: '<S634>/Data Type Conversion2' incorporates:
  //   Constant: '<S634>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_py);

  // Outputs for Atomic SubSystem: '<S640>/generation'
  // S-Function (CB_PWM): '<S641>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3,
                     imperix_balance_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S640>/generation'

  // DataTypeConversion: '<S635>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S176>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_Gain2[3]);

  // DataTypeConversion: '<S635>/Data Type Conversion2' incorporates:
  //   Constant: '<S635>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ng);

  // Outputs for Atomic SubSystem: '<S642>/generation'
  // S-Function (CB_PWM): '<S643>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7,
                     imperix_balance_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S642>/generation'

  // DataTypeConversion: '<S644>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S178>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (rtb_Gain2[4]);

  // DataTypeConversion: '<S644>/Data Type Conversion2' incorporates:
  //   Constant: '<S644>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ji);

  // Outputs for Atomic SubSystem: '<S648>/generation'
  // S-Function (CB_PWM): '<S649>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8,
                     imperix_balance_ctrl_B.DataTypeConversion1_al, 0);

  // End of Outputs for SubSystem: '<S648>/generation'

  // DataTypeConversion: '<S645>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S178>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_Gain2[4]);

  // DataTypeConversion: '<S645>/Data Type Conversion2' incorporates:
  //   Constant: '<S645>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_of);

  // Outputs for Atomic SubSystem: '<S650>/generation'
  // S-Function (CB_PWM): '<S651>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12,
                     imperix_balance_ctrl_B.DataTypeConversion1_k, 0);

  // End of Outputs for SubSystem: '<S650>/generation'

  // DataTypeConversion: '<S646>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S178>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (rtb_Gain2[4]);

  // DataTypeConversion: '<S646>/Data Type Conversion2' incorporates:
  //   Constant: '<S646>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_h);

  // Outputs for Atomic SubSystem: '<S652>/generation'
  // S-Function (CB_PWM): '<S653>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9,
                     imperix_balance_ctrl_B.DataTypeConversion1_l4, 0);

  // End of Outputs for SubSystem: '<S652>/generation'

  // DataTypeConversion: '<S647>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S178>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (rtb_Gain2[4]);

  // DataTypeConversion: '<S647>/Data Type Conversion2' incorporates:
  //   Constant: '<S647>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_nc);

  // Outputs for Atomic SubSystem: '<S654>/generation'
  // S-Function (CB_PWM): '<S655>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13,
                     imperix_balance_ctrl_B.DataTypeConversion1_bg, 0);

  // End of Outputs for SubSystem: '<S654>/generation'

  // DataTypeConversion: '<S656>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S180>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_Gain2[5]);

  // DataTypeConversion: '<S656>/Data Type Conversion2' incorporates:
  //   Constant: '<S656>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_f);

  // Outputs for Atomic SubSystem: '<S660>/generation'
  // S-Function (CB_PWM): '<S661>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10,
                     imperix_balance_ctrl_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S660>/generation'

  // DataTypeConversion: '<S657>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S180>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (rtb_Gain2[5]);

  // DataTypeConversion: '<S657>/Data Type Conversion2' incorporates:
  //   Constant: '<S657>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_i);

  // Outputs for Atomic SubSystem: '<S662>/generation'
  // S-Function (CB_PWM): '<S663>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14,
                     imperix_balance_ctrl_B.DataTypeConversion1_o, 0);

  // End of Outputs for SubSystem: '<S662>/generation'

  // DataTypeConversion: '<S658>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S180>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (rtb_Gain2[5]);

  // DataTypeConversion: '<S658>/Data Type Conversion2' incorporates:
  //   Constant: '<S658>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_a);

  // Outputs for Atomic SubSystem: '<S664>/generation'
  // S-Function (CB_PWM): '<S665>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11,
                     imperix_balance_ctrl_B.DataTypeConversion1_ay, 0);

  // End of Outputs for SubSystem: '<S664>/generation'

  // DataTypeConversion: '<S659>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S180>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (rtb_Gain2[5]);

  // DataTypeConversion: '<S659>/Data Type Conversion2' incorporates:
  //   Constant: '<S659>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ns);

  // Outputs for Atomic SubSystem: '<S666>/generation'
  // S-Function (CB_PWM): '<S667>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15,
                     imperix_balance_ctrl_B.DataTypeConversion1_pf, 0);

  // End of Outputs for SubSystem: '<S666>/generation'

  // DataTypeConversion: '<S675>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S170>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_als = static_cast<real32_T>
    (rtb_Gain2[0]);

  // DataTypeConversion: '<S675>/Data Type Conversion2' incorporates:
  //   Constant: '<S675>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_fa);

  // Outputs for Atomic SubSystem: '<S679>/generation'
  // S-Function (CB_PWM): '<S680>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_balance_ctrl_B.DataTypeConversion1_als, 1);

  // End of Outputs for SubSystem: '<S679>/generation'

  // DataTypeConversion: '<S676>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S170>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (rtb_Gain2[0]);

  // DataTypeConversion: '<S676>/Data Type Conversion2' incorporates:
  //   Constant: '<S676>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_hr);

  // Outputs for Atomic SubSystem: '<S681>/generation'
  // S-Function (CB_PWM): '<S682>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4,
                     imperix_balance_ctrl_B.DataTypeConversion1_ig, 1);

  // End of Outputs for SubSystem: '<S681>/generation'

  // DataTypeConversion: '<S677>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S170>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_Gain2[0]);

  // DataTypeConversion: '<S677>/Data Type Conversion2' incorporates:
  //   Constant: '<S677>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_at);

  // Outputs for Atomic SubSystem: '<S683>/generation'
  // S-Function (CB_PWM): '<S684>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1,
                     imperix_balance_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S683>/generation'

  // DataTypeConversion: '<S678>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S170>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (rtb_Gain2[0]);

  // DataTypeConversion: '<S678>/Data Type Conversion2' incorporates:
  //   Constant: '<S678>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_cq);

  // Outputs for Atomic SubSystem: '<S685>/generation'
  // S-Function (CB_PWM): '<S686>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5,
                     imperix_balance_ctrl_B.DataTypeConversion1_gw, 1);

  // End of Outputs for SubSystem: '<S685>/generation'

  // S-Function (TUNABLE_PARAM): '<S710>/S-Function'
  imperix_balance_ctrl_B.SFunction_fd = INDS;

  // Gain: '<S1>/Gain8'
  imperix_balance_ctrl_B.Gain8 = imperix_balance_ctrl_P.Gain8_Gain_f *
    imperix_balance_ctrl_B.SFunction_fd;

  // S-Function (DAC): '<S147>/DAC'
  Dac_SetVoltage(3, imperix_balance_ctrl_B.Gain8, 0);

  // S-Function (TUNABLE_PARAM): '<S706>/S-Function'
  imperix_balance_ctrl_B.SFunction_o = INDT;

  // Gain: '<S1>/Gain6'
  imperix_balance_ctrl_B.Gain6 = imperix_balance_ctrl_P.Gain6_Gain *
    imperix_balance_ctrl_B.SFunction_o;

  // S-Function (DAC): '<S149>/DAC'
  Dac_SetVoltage(0, imperix_balance_ctrl_B.Gain6, 0);

  // Update for DiscreteIntegrator: '<S355>/Integrator' incorporates:
  //   Gain: '<S347>/Kb'
  //   Gain: '<S352>/Integral Gain'
  //   Sum: '<S347>/SumI2'
  //   Sum: '<S347>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE += (2.0 *
      imperix_balance_ctrl_P.FOC.kp_w * (rtb_Saturation - rtb_Sum_j) +
      imperix_balance_ctrl_P.FOC.ki_w * rtb_Sum1_od) *
      imperix_balance_ctrl_P.Integrator_gainval;
  }

  if (imperix_balance_ctrl_B.SFunction_c > 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState = 1;
  } else if (imperix_balance_ctrl_B.SFunction_c < 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState = -1;
  } else if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState = 0;
  } else {
    imperix_balance_ctrl_DW.Integrator_PrevResetState = 2;
  }

  // End of Update for DiscreteIntegrator: '<S355>/Integrator'

  // Update for DiscreteIntegrator: '<S303>/Integrator' incorporates:
  //   Gain: '<S295>/Kb'
  //   Gain: '<S300>/Integral Gain'
  //   Sum: '<S295>/SumI2'
  //   Sum: '<S295>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_k += (2.0 *
      imperix_balance_ctrl_P.FOC.kp_F * (rtb_Saturation_j - rtb_Sum_l) +
      imperix_balance_ctrl_P.FOC.ki_F * rtb_Gain5) *
      imperix_balance_ctrl_P.Integrator_gainval_g;
  }

  if (imperix_balance_ctrl_B.SFunction_c > 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_h = 1;
  } else if (imperix_balance_ctrl_B.SFunction_c < 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_h = -1;
  } else if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_h = 0;
  } else {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_h = 2;
  }

  // End of Update for DiscreteIntegrator: '<S303>/Integrator'

  // Update for DiscreteIntegrator: '<S485>/Integrator' incorporates:
  //   Gain: '<S477>/Kb'
  //   Gain: '<S482>/Integral Gain'
  //   Sum: '<S477>/SumI2'
  //   Sum: '<S477>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_h += ((rtb_Saturation_o -
      rtb_Sum_n) * imperix_balance_ctrl_P.MCC.kp + imperix_balance_ctrl_P.MCC.ki
      * rtb_Sum6) * imperix_balance_ctrl_P.Integrator_gainval_h;
  }

  if (imperix_balance_ctrl_B.SFunction_c > 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_p = 1;
  } else if (imperix_balance_ctrl_B.SFunction_c < 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_p = -1;
  } else if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_p = 0;
  } else {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_p = 2;
  }

  // End of Update for DiscreteIntegrator: '<S485>/Integrator'

  // Update for DiscreteIntegrator: '<S537>/Integrator' incorporates:
  //   Gain: '<S529>/Kb'
  //   Gain: '<S534>/Integral Gain'
  //   Sum: '<S529>/SumI2'
  //   Sum: '<S529>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_m += ((rtb_Saturation_hi -
      rtb_Sum_o) * imperix_balance_ctrl_P.MCC.kp + imperix_balance_ctrl_P.MCC.ki
      * rtb_Sum8) * imperix_balance_ctrl_P.Integrator_gainval_b;
  }

  if (imperix_balance_ctrl_B.SFunction_c > 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_b = 1;
  } else if (imperix_balance_ctrl_B.SFunction_c < 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_b = -1;
  } else if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_b = 0;
  } else {
    imperix_balance_ctrl_DW.Integrator_PrevResetState_b = 2;
  }

  // End of Update for DiscreteIntegrator: '<S537>/Integrator'

  // Switch: '<S420>/Switch1' incorporates:
  //   Constant: '<S420>/Clamping_zero'
  //   Constant: '<S420>/Constant'
  //   Constant: '<S420>/Constant2'
  //   RelationalOperator: '<S420>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_balance_ctrl_P.Clamping_zero_Value) {
    tmp_4 = imperix_balance_ctrl_P.Constant_Value_g;
  } else {
    tmp_4 = imperix_balance_ctrl_P.Constant2_Value;
  }

  // Switch: '<S420>/Switch2' incorporates:
  //   Constant: '<S420>/Clamping_zero'
  //   Constant: '<S420>/Constant3'
  //   Constant: '<S420>/Constant4'
  //   RelationalOperator: '<S420>/fix for DT propagation issue1'

  if (rtb_Integrator_b > imperix_balance_ctrl_P.Clamping_zero_Value) {
    tmp_5 = imperix_balance_ctrl_P.Constant3_Value;
  } else {
    tmp_5 = imperix_balance_ctrl_P.Constant4_Value;
  }

  // Switch: '<S420>/Switch' incorporates:
  //   Constant: '<S420>/Clamping_zero'
  //   Constant: '<S420>/Constant1'
  //   Logic: '<S420>/AND3'
  //   RelationalOperator: '<S420>/Equal1'
  //   RelationalOperator: '<S420>/Relational Operator'
  //   Switch: '<S420>/Switch1'
  //   Switch: '<S420>/Switch2'

  if ((imperix_balance_ctrl_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_4 ==
       tmp_5)) {
    rtb_Integrator_b = imperix_balance_ctrl_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S430>/Integrator' incorporates:
  //   Switch: '<S420>/Switch'

  imperix_balance_ctrl_DW.Integrator_DSTATE_p +=
    imperix_balance_ctrl_P.Integrator_gainval_n * rtb_Integrator_b;

  // Switch: '<S598>/Switch1' incorporates:
  //   Constant: '<S598>/Clamping_zero'
  //   Constant: '<S598>/Constant'
  //   Constant: '<S598>/Constant2'
  //   RelationalOperator: '<S598>/fix for DT propagation issue'

  if (rtb_DeadZone_o > imperix_balance_ctrl_P.Clamping_zero_Value_p) {
    tmp_4 = imperix_balance_ctrl_P.Constant_Value_gx;
  } else {
    tmp_4 = imperix_balance_ctrl_P.Constant2_Value_c;
  }

  // Switch: '<S598>/Switch2' incorporates:
  //   Constant: '<S598>/Clamping_zero'
  //   Constant: '<S598>/Constant3'
  //   Constant: '<S598>/Constant4'
  //   RelationalOperator: '<S598>/fix for DT propagation issue1'

  if (rtb_IntegralGain_m > imperix_balance_ctrl_P.Clamping_zero_Value_p) {
    tmp_5 = imperix_balance_ctrl_P.Constant3_Value_f;
  } else {
    tmp_5 = imperix_balance_ctrl_P.Constant4_Value_a;
  }

  // Switch: '<S598>/Switch' incorporates:
  //   Constant: '<S598>/Clamping_zero'
  //   Constant: '<S598>/Constant1'
  //   Logic: '<S598>/AND3'
  //   RelationalOperator: '<S598>/Equal1'
  //   RelationalOperator: '<S598>/Relational Operator'
  //   Switch: '<S598>/Switch1'
  //   Switch: '<S598>/Switch2'

  if ((imperix_balance_ctrl_P.Clamping_zero_Value_p != rtb_DeadZone_o) && (tmp_4
       == tmp_5)) {
    rtb_IntegralGain_m = imperix_balance_ctrl_P.Constant1_Value_e;
  }

  // Update for DiscreteIntegrator: '<S608>/Integrator' incorporates:
  //   Switch: '<S598>/Switch'

  imperix_balance_ctrl_DW.Integrator_DSTATE_a +=
    imperix_balance_ctrl_P.Integrator_gainval_b1 * rtb_IntegralGain_m;
}

// Model step function for TID1
void imperix_balance_ctrl_step1(void)  // Sample time: [0.00166667s, 0.0s]
{
  real_T E[144];
  real_T E_tmp[144];
  real_T c_b[144];
  real_T tmp_1[96];
  real_T B[48];
  real_T Linv_tmp[48];
  real_T b_B[24];
  real_T tmp[24];
  real_T tmp_2[24];
  real_T A[16];
  real_T Linv[16];
  real_T IB[12];
  real_T VB[12];
  real_T VB_tmp[12];
  real_T VB_tmp_1[12];
  real_T tmp_0[10];
  real_T C_0[8];
  real_T rtb_TmpRTBAtEnergybalanceInport[6];
  real_T tmp_3[6];
  real_T tmp_4[6];
  real_T Linv_tmp_0[4];
  real_T VB_tmp_0[4];
  real_T ie_ref_temp[4];
  real_T rtb_u[3];
  real_T C[2];
  real_T angles[2];
  real_T tmp_5[2];
  real_T VB_tmp_2;
  real_T VB_tmp_3;
  real_T b_b;
  real_T b_c;
  real_T ssq;
  int32_T Tabc2ab_tmp;
  int32_T c_k;
  int32_T d;
  int32_T e;
  int32_T i;
  int32_T ia;
  int32_T iac;
  int32_T ibcol;
  int32_T idxAjj;
  int32_T l;
  boolean_T iA1[24];
  boolean_T iA_o[4];
  boolean_T p;
  static const int8_T c_B[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  boolean_T exitg1;

  // RateTransition generated from: '<S27>/Energy balance'
  i = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Ac * 6;
  for (ibcol = 0; ibcol < 6; ibcol++) {
    rtb_TmpRTBAtEnergybalanceInport[ibcol] =
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Bu[ibcol + i];
  }

  // End of RateTransition generated from: '<S27>/Energy balance'

  // MATLAB Function: '<S27>/Energy balance' incorporates:
  //   RateTransition generated from: '<S27>/Energy balance'
  //
  // MATLAB Function 'Closed_loop_control/ICB/Energy balance': '<S158>:1'
  if (!imperix_balance_ctrl_DW.Ts_not_empty) {
    // '<S158>:1:5'
    // '<S158>:1:8'
    imperix_balance_ctrl_DW.Ts_not_empty = true;

    // '<S158>:1:9'
    // '<S158>:1:10'
    for (i = 0; i < 6; i++) {
      imperix_balance_ctrl_DW.Tab2abc[i] = imperix_balance_ctrl_P.RFT.ab2abc[i];
      imperix_balance_ctrl_DW.Tabc2ab[i] = imperix_balance_ctrl_P.RFT.abc2ab[i];
    }

    // '<S158>:1:11'
    // '<S158>:1:12'
    memcpy(&imperix_balance_ctrl_DW.A_b[0], &imperix_balance_ctrl_P.M2C.A[0],
           30U * sizeof(real_T));
    memcpy(&imperix_balance_ctrl_DW.pinvA[0], &imperix_balance_ctrl_P.M2C.pinvA
           [0], 30U * sizeof(real_T));

    // '<S158>:1:13'
    imperix_balance_ctrl_DW.Ts = imperix_balance_ctrl_P.IEC.Ts;

    // '<S158>:1:17'
    // '<S158>:1:18'
    memcpy(&imperix_balance_ctrl_DW.K[0], &imperix_balance_ctrl_P.IEC.K[0], 144U
           * sizeof(real_T));
    memcpy(&imperix_balance_ctrl_DW.MI[0], &imperix_balance_ctrl_P.IEC.MI[0],
           144U * sizeof(real_T));

    // '<S158>:1:19'
    memcpy(&imperix_balance_ctrl_DW.NN[0], &imperix_balance_ctrl_P.IEC.NN[0],
           48U * sizeof(real_T));

    // '<S158>:1:20'
    memcpy(&imperix_balance_ctrl_DW.ONE[0], &imperix_balance_ctrl_P.IEC.ONE[0],
           24U * sizeof(real_T));

    // '<S158>:1:21'
    imperix_balance_ctrl_DW.Nl = imperix_balance_ctrl_P.IEC.Nl;

    // '<S158>:1:22'
    imperix_balance_ctrl_DW.is_max_j = imperix_balance_ctrl_P.M2C.is_max;

    // '<S158>:1:23'
    imperix_balance_ctrl_DW.is_max2 = imperix_balance_ctrl_DW.is_max_j *
      imperix_balance_ctrl_DW.is_max_j;

    // '<S158>:1:24'
    // '<S158>:1:25'
    memcpy(&imperix_balance_ctrl_DW.Hu_z[0], &imperix_balance_ctrl_P.IEC.Hu_z[0],
           sizeof(real_T) << 4U);

    // '<S158>:1:26'
    memcpy(&imperix_balance_ctrl_DW.Aineq_z[0],
           &imperix_balance_ctrl_P.IEC.Aineq_z[0], 96U * sizeof(real_T));

    // '<S158>:1:27'
    imperix_balance_ctrl_DW.lambda_z = imperix_balance_ctrl_P.IEC.lambda_z;

    // '<S158>:1:28'
    imperix_balance_ctrl_DW.Hu_o[0] = imperix_balance_ctrl_P.IEC.Hu_o[0];
    imperix_balance_ctrl_DW.Hu_o[1] = imperix_balance_ctrl_P.IEC.Hu_o[1];
    imperix_balance_ctrl_DW.Hu_o[2] = imperix_balance_ctrl_P.IEC.Hu_o[2];
    imperix_balance_ctrl_DW.Hu_o[3] = imperix_balance_ctrl_P.IEC.Hu_o[3];

    // '<S158>:1:29'
    memcpy(&imperix_balance_ctrl_DW.Aineq_o[0],
           &imperix_balance_ctrl_P.IEC.Aineq_o[0], sizeof(real_T) << 3U);

    // '<S158>:1:30'
    imperix_balance_ctrl_DW.lambda_o = imperix_balance_ctrl_P.IEC.lambda_o;

    // '<S158>:1:31'
    imperix_balance_ctrl_DW.DEc_max2 = imperix_balance_ctrl_P.M2C.Ec_ref *
      imperix_balance_ctrl_P.M2C.Ec_ref * (imperix_balance_ctrl_P.M2C.Ec_dev *
      imperix_balance_ctrl_P.M2C.Ec_dev);

    // '<S158>:1:36'
    imperix_balance_ctrl_DW.options_z.UseHessianAsInput = true;
    imperix_balance_ctrl_DW.options_z.IntegrityChecks = true;
    imperix_balance_ctrl_DW.options_z.MaxIterations = 20;
    imperix_balance_ctrl_DW.options_z.ConstraintTolerance = 0.0001;

    // '<S158>:1:39'
    imperix_balance_ctrl_DW.options_o.UseHessianAsInput = true;
    imperix_balance_ctrl_DW.options_o.IntegrityChecks = true;
    imperix_balance_ctrl_DW.options_o.MaxIterations = 10;
    imperix_balance_ctrl_DW.options_o.ConstraintTolerance = 0.0001;
  }

  // '<S158>:1:55'
  // '<S158>:1:56'
  // '<S158>:1:60'
  b_b = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport5_Bu *
    imperix_balance_ctrl_DW.Ts;

  // '<S158>:1:61'
  // '<S158>:1:62'
  // '<S158>:1:63'
  // '<S158>:1:66'
  // '<S158>:1:67'
  // '<S158>:1:70'
  // '<S158>:1:71'
  // '<S158>:1:74'
  b_c = cos(b_b);
  ssq = sin(b_b);
  C_0[0] = b_c;
  C_0[1] = -ssq;
  C_0[2] = ssq;
  C_0[3] = b_c;
  ssq = 2.0 * b_b;
  b_c = cos(ssq);
  ssq = sin(ssq);
  C_0[4] = b_c;
  C_0[5] = -ssq;
  C_0[6] = ssq;
  C_0[7] = b_c;
  for (i = 0; i < 3; i++) {
    Tabc2ab_tmp = i << 1;
    ssq = imperix_balance_ctrl_DW.Tabc2ab[Tabc2ab_tmp + 1];
    b_c = imperix_balance_ctrl_DW.Tabc2ab[Tabc2ab_tmp];
    for (ibcol = 0; ibcol < 4; ibcol++) {
      idxAjj = ibcol << 1;
      VB_tmp[ibcol + (i << 2)] = C_0[idxAjj + 1] * ssq + C_0[idxAjj] * b_c;
    }
  }

  b_c = 0.0;
  b_b = 0.0;
  VB_tmp_2 = 0.0;
  VB_tmp_3 = 0.0;
  for (i = 0; i < 3; i++) {
    ssq = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[i + 2];
    idxAjj = i << 2;
    b_c += VB_tmp[idxAjj] * ssq;
    b_b += VB_tmp[idxAjj + 1] * ssq;
    VB_tmp_2 += VB_tmp[idxAjj + 2] * ssq;
    VB_tmp_3 += VB_tmp[idxAjj + 3] * ssq;
  }

  VB_tmp_0[3] = VB_tmp_3;
  VB_tmp_0[2] = VB_tmp_2;
  VB_tmp_0[1] = b_b;
  VB_tmp_0[0] = b_c;
  for (i = 0; i < 2; i++) {
    ibcol = i << 1;
    Linv_tmp_0[ibcol] = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu
      [0];
    Linv_tmp_0[ibcol + 1] =
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[1];
    ssq = 0.0;
    b_c = 0.0;
    b_b = 0.0;
    for (c_k = 0; c_k < 2; c_k++) {
      Tabc2ab_tmp = ibcol + c_k;
      VB_tmp_2 = VB_tmp_0[Tabc2ab_tmp];
      ssq += imperix_balance_ctrl_DW.Tab2abc[3 * c_k] * VB_tmp_2;
      b_c += imperix_balance_ctrl_DW.Tab2abc[3 * c_k + 1] * VB_tmp_2;
      b_b += imperix_balance_ctrl_DW.Tab2abc[3 * c_k + 2] * VB_tmp_2;
      tmp_0[c_k + 5 * i] = Linv_tmp_0[Tabc2ab_tmp];
    }

    tmp_0[5 * i + 2] = ssq;
    tmp_0[5 * i + 3] = b_c;
    tmp_0[5 * i + 4] = b_b;
    for (ibcol = 0; ibcol < 6; ibcol++) {
      ssq = 0.0;
      for (c_k = 0; c_k < 5; c_k++) {
        ssq += imperix_balance_ctrl_DW.A_b[5 * ibcol + c_k] * tmp_0[5 * i + c_k];
      }

      VB[ibcol + 6 * i] = ssq;
    }
  }

  // '<S158>:1:75'
  b_c = 0.0;
  b_b = 0.0;
  VB_tmp_2 = 0.0;
  VB_tmp_3 = 0.0;
  for (i = 0; i < 3; i++) {
    ssq = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[i + 2];
    idxAjj = i << 2;
    b_c += VB_tmp[idxAjj] * ssq;
    b_b += VB_tmp[idxAjj + 1] * ssq;
    VB_tmp_2 += VB_tmp[idxAjj + 2] * ssq;
    VB_tmp_3 += VB_tmp[idxAjj + 3] * ssq;
  }

  VB_tmp_0[3] = VB_tmp_3;
  VB_tmp_0[2] = VB_tmp_2;
  VB_tmp_0[1] = b_b;
  VB_tmp_0[0] = b_c;
  for (i = 0; i < 2; i++) {
    ibcol = i << 1;
    Linv_tmp_0[ibcol] = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu
      [0];
    Linv_tmp_0[ibcol + 1] =
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[1];
    ssq = 0.0;
    b_c = 0.0;
    b_b = 0.0;
    for (c_k = 0; c_k < 2; c_k++) {
      Tabc2ab_tmp = ibcol + c_k;
      VB_tmp_2 = VB_tmp_0[Tabc2ab_tmp];
      ssq += imperix_balance_ctrl_DW.Tab2abc[3 * c_k] * VB_tmp_2;
      b_c += imperix_balance_ctrl_DW.Tab2abc[3 * c_k + 1] * VB_tmp_2;
      b_b += imperix_balance_ctrl_DW.Tab2abc[3 * c_k + 2] * VB_tmp_2;
      tmp_0[c_k + 5 * i] = Linv_tmp_0[Tabc2ab_tmp];
    }

    tmp_0[5 * i + 2] = ssq;
    tmp_0[5 * i + 3] = b_c;
    tmp_0[5 * i + 4] = b_b;
  }

  for (i = 0; i < 6; i++) {
    IB[i] = 0.0;
    IB[i + 6] = 0.0;
  }

  // '<S158>:1:112'
  for (i = 0; i < 2; i++) {
    for (ibcol = 0; ibcol < 5; ibcol++) {
      ssq = tmp_0[5 * i + ibcol];
      for (c_k = 0; c_k < 6; c_k++) {
        Tabc2ab_tmp = 6 * i + c_k;
        IB[Tabc2ab_tmp] += imperix_balance_ctrl_DW.pinvA[6 * ibcol + c_k] * ssq;
      }
    }

    angles[i] = 0.0;
  }

  // '<S158>:1:113'
  ie_ref_temp[0] = 0.0;
  ie_ref_temp[1] = 0.0;
  Tabc2ab_tmp = static_cast<int32_T>(imperix_balance_ctrl_DW.Nl);

  // '<S158>:1:119'
  if (static_cast<int32_T>(imperix_balance_ctrl_DW.Nl) - 1 >= 0) {
    tmp_3[0] = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[0];
    tmp_3[1] = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[1];
    tmp_3[2] = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[2];
    tmp_3[3] = 0.0;
    tmp_3[4] = 0.0;
    tmp_3[5] = 0.0;
    tmp_4[0] = 0.0;
    tmp_4[1] = 0.0;
    tmp_4[2] = 0.0;
    tmp_4[3] = -imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[3];
    tmp_4[4] = -imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[4];
    tmp_4[5] = -imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[5];
    for (i = 0; i < 144; i++) {
      E_tmp[i] = imperix_balance_ctrl_DW.Ts * imperix_balance_ctrl_DW.K[i];
    }

    for (i = 0; i < 96; i++) {
      tmp_1[i] = -imperix_balance_ctrl_DW.Aineq_z[i];
    }

    for (i = 0; i < 12; i++) {
      ssq = IB[i];
      tmp_2[i] = -(imperix_balance_ctrl_DW.is_max_j - ssq);
      tmp_2[i + 12] = -imperix_balance_ctrl_DW.is_max_j - ssq;
    }
  }

  for (l = 0; l < Tabc2ab_tmp; l++) {
    // '<S158>:1:123'
    ssq = angles[1];
    b_c = angles[0];
    for (i = 0; i < 12; i++) {
      VB_tmp[i] = (imperix_balance_ctrl_DW.ONE[i + 12] * ssq +
                   imperix_balance_ctrl_DW.ONE[i] * b_c) + VB[i];
    }

    // '<S158>:1:126'
    memset(&c_b[0], 0, 144U * sizeof(real_T));
    for (i = 0; i < 12; i++) {
      c_b[i + 12 * i] = VB_tmp[i];
    }

    for (i = 0; i < 12; i++) {
      memset(&E[i * 12], 0, 12U * sizeof(real_T));
      for (ibcol = 0; ibcol < 12; ibcol++) {
        ssq = c_b[12 * i + ibcol];
        for (c_k = 0; c_k < 12; c_k++) {
          idxAjj = 12 * i + c_k;
          E[idxAjj] += E_tmp[12 * ibcol + c_k] * ssq;
        }
      }
    }

    // '<S158>:1:127'
    for (i = 0; i < 4; i++) {
      memset(&B[i * 12], 0, 12U * sizeof(real_T));
      for (ibcol = 0; ibcol < 12; ibcol++) {
        ssq = imperix_balance_ctrl_DW.NN[12 * i + ibcol];
        for (c_k = 0; c_k < 12; c_k++) {
          idxAjj = 12 * i + c_k;
          B[idxAjj] += E[12 * ibcol + c_k] * ssq;
        }
      }
    }

    // '<S158>:1:128'
    // '<S158>:1:131'
    // '<S158>:1:132'
    for (i = 0; i < 2; i++) {
      ibcol = i * 6;
      for (c_k = 0; c_k < 6; c_k++) {
        VB_tmp[ibcol + c_k] = rtb_TmpRTBAtEnergybalanceInport[c_k];
      }
    }

    // '<S158>:1:135'
    // '<S158>:1:138'
    for (i = 0; i < 12; i++) {
      b_c = 0.0;
      b_b = 0.0;
      VB_tmp_2 = 0.0;
      VB_tmp_3 = 0.0;
      for (ibcol = 0; ibcol < 12; ibcol++) {
        ssq = imperix_balance_ctrl_DW.MI[12 * i + ibcol];
        b_c += 2.0 * B[ibcol] * ssq;
        b_b += B[ibcol + 12] * 2.0 * ssq;
        VB_tmp_2 += B[ibcol + 24] * 2.0 * ssq;
        VB_tmp_3 += B[ibcol + 36] * 2.0 * ssq;
      }

      ibcol = i << 2;
      Linv_tmp[ibcol + 3] = VB_tmp_3;
      Linv_tmp[ibcol + 2] = VB_tmp_2;
      Linv_tmp[ibcol + 1] = b_b;
      Linv_tmp[ibcol] = b_c;
    }

    for (i = 0; i < 4; i++) {
      for (ibcol = 0; ibcol < 4; ibcol++) {
        ssq = 0.0;
        for (c_k = 0; c_k < 12; c_k++) {
          ssq += Linv_tmp[(c_k << 2) + i] * B[12 * ibcol + c_k];
        }

        c_k = (ibcol << 2) + i;
        Linv[c_k] = imperix_balance_ctrl_DW.Hu_z[c_k] *
          imperix_balance_ctrl_DW.lambda_z + ssq /
          imperix_balance_ctrl_DW.DEc_max2;
      }
    }

    // '<S158>:1:139'
    // '<S158>:1:142'
    // '<S158>:1:143'
    // '<S158>:1:144'
    // '<S158>:1:148'
    if (imperix_balance_ctrl_DW.options_z.UseHessianAsInput) {
      ibcol = 0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 4)) {
        idxAjj = (i << 2) + i;
        ssq = 0.0;
        if (i >= 1) {
          for (c_k = 0; c_k < i; c_k++) {
            b_c = Linv[(c_k << 2) + i];
            ssq += b_c * b_c;
          }
        }

        ssq = Linv[idxAjj] - ssq;
        if (ssq > 0.0) {
          ssq = sqrt(ssq);
          Linv[idxAjj] = ssq;
          if (i + 1 < 4) {
            if (i != 0) {
              d = (((i - 1) << 2) + i) + 2;
              for (iac = i + 2; iac <= d; iac += 4) {
                c_k = iac - i;
                b_c = -Linv[(((c_k - 2) >> 2) << 2) + i];
                e = c_k + 2;
                for (ia = iac; ia <= e; ia++) {
                  c_k = ((idxAjj + ia) - iac) + 1;
                  Linv[c_k] += Linv[ia - 1] * b_c;
                }
              }
            }

            ssq = 1.0 / ssq;
            c_k = (idxAjj - i) + 4;
            for (d = idxAjj + 2; d <= c_k; d++) {
              Linv[d - 1] *= ssq;
            }
          }

          i++;
        } else {
          Linv[idxAjj] = ssq;
          ibcol = i + 1;
          exitg1 = true;
        }
      }

      memcpy(&A[0], &Linv[0], sizeof(real_T) << 4U);
      if (ibcol == 0) {
        ibcol = 5;
      }

      for (c_k = 2; c_k < ibcol; c_k++) {
        for (i = 0; i <= c_k - 2; i++) {
          A[i + ((c_k - 1) << 2)] = 0.0;
        }
      }

      for (i = 0; i < 4; i++) {
        c_k = i << 2;
        Linv[c_k] = c_B[c_k];
        Linv[c_k + 1] = c_B[c_k + 1];
        Linv[c_k + 2] = c_B[c_k + 2];
        Linv[c_k + 3] = c_B[c_k + 3];
      }

      imperix_balance_ctrl_trisolve(A, Linv);
    }

    for (i = 0; i < 24; i++) {
      iA1[i] = false;
    }

    for (i = 0; i < 12; i++) {
      ssq = 0.0;
      for (ibcol = 0; ibcol < 12; ibcol++) {
        ssq += E[12 * ibcol + i] * IB[ibcol];
      }

      VB_tmp_1[i] = VB_tmp[i] + ssq;
    }

    for (i = 0; i < 4; i++) {
      ssq = 0.0;
      for (ibcol = 0; ibcol < 12; ibcol++) {
        ssq += imperix_balance_ctrl_DW.NN[12 * i + ibcol] * 2.0 * IB[ibcol];
      }

      for (ibcol = 0; ibcol < 4; ibcol++) {
        c_k = ibcol << 2;
        idxAjj = i << 2;
        A[ibcol + idxAjj] = ((Linv[c_k + 1] * Linv[idxAjj + 1] + Linv[c_k] *
                              Linv[idxAjj]) + Linv[c_k + 2] * Linv[idxAjj + 2])
          + Linv[c_k + 3] * Linv[idxAjj + 3];
      }

      b_c = 0.0;
      for (ibcol = 0; ibcol < 12; ibcol++) {
        b_c += Linv_tmp[(ibcol << 2) + i] * VB_tmp_1[ibcol];
      }

      Linv_tmp_0[i] = ssq / imperix_balance_ctrl_DW.is_max2 *
        imperix_balance_ctrl_DW.lambda_z + b_c /
        imperix_balance_ctrl_DW.DEc_max2;
    }

    imperix_balance_ctrl_qpkwik(Linv, A, Linv_tmp_0, tmp_1, tmp_2, iA1,
      imperix_balance_ctrl_DW.options_z.MaxIterations,
      imperix_balance_ctrl_DW.options_z.ConstraintTolerance, ie_ref_temp, b_B,
      &i);

    // '<S158>:1:148'
    // '<S158>:1:153'
    ssq = ie_ref_temp[1];
    b_c = ie_ref_temp[0];
    b_b = ie_ref_temp[2];
    VB_tmp_2 = ie_ref_temp[3];
    for (i = 0; i < 12; i++) {
      VB_tmp[i] = (((imperix_balance_ctrl_DW.NN[i + 12] * ssq +
                     imperix_balance_ctrl_DW.NN[i] * b_c) +
                    imperix_balance_ctrl_DW.NN[i + 24] * b_b) +
                   imperix_balance_ctrl_DW.NN[i + 36] * VB_tmp_2) + IB[i];
    }

    // '<S158>:1:156'
    memset(&c_b[0], 0, 144U * sizeof(real_T));
    for (ibcol = 0; ibcol < 12; ibcol++) {
      c_b[ibcol + 12 * ibcol] = VB_tmp[ibcol];
      memset(&E[ibcol * 12], 0, 12U * sizeof(real_T));
    }

    for (i = 0; i < 12; i++) {
      for (ibcol = 0; ibcol < 12; ibcol++) {
        ssq = c_b[12 * i + ibcol];
        for (c_k = 0; c_k < 12; c_k++) {
          idxAjj = 12 * i + c_k;
          E[idxAjj] += E_tmp[12 * ibcol + c_k] * ssq;
        }
      }
    }

    // '<S158>:1:157'
    // '<S158>:1:158'
    // '<S158>:1:161'
    // '<S158>:1:162'
    // '<S158>:1:165'
    // '<S158>:1:169'
    for (c_k = 0; c_k < 2; c_k++) {
      memset(&b_B[c_k * 12], 0, 12U * sizeof(real_T));
      for (i = 0; i < 12; i++) {
        ssq = imperix_balance_ctrl_DW.ONE[12 * c_k + i];
        for (ibcol = 0; ibcol < 12; ibcol++) {
          idxAjj = 12 * c_k + ibcol;
          b_B[idxAjj] += E[12 * i + ibcol] * ssq;
        }
      }

      i = c_k * 6;
      for (ibcol = 0; ibcol < 6; ibcol++) {
        idxAjj = i + ibcol;
        VB_tmp[idxAjj] = rtb_TmpRTBAtEnergybalanceInport[ibcol];
        VB_tmp_1[idxAjj] = tmp_3[ibcol] - VB[idxAjj];
      }

      angles[c_k] = VB_tmp_1[6 * c_k];
      for (i = 0; i < 5; i++) {
        b_b = VB_tmp_1[(6 * c_k + i) + 1];
        if (rtIsNaN(b_b)) {
          p = false;
        } else {
          ssq = angles[c_k];
          if (rtIsNaN(ssq)) {
            p = true;
          } else {
            p = (ssq > b_b);
          }
        }

        if (p) {
          angles[c_k] = b_b;
        }
      }
    }

    // '<S158>:1:170'
    for (ibcol = 0; ibcol < 2; ibcol++) {
      for (i = 0; i < 6; i++) {
        c_k = 6 * ibcol + i;
        VB_tmp_1[c_k] = tmp_4[i] - VB[c_k];
      }

      C[ibcol] = VB_tmp_1[6 * ibcol];
      for (i = 0; i < 5; i++) {
        b_b = VB_tmp_1[(6 * ibcol + i) + 1];
        if (rtIsNaN(b_b)) {
          p = false;
        } else {
          b_c = C[ibcol];
          if (rtIsNaN(b_c)) {
            p = true;
          } else {
            p = (b_c < b_b);
          }
        }

        if (p) {
          C[ibcol] = b_b;
        }
      }
    }

    // '<S158>:1:171'
    // '<S158>:1:175'
    for (i = 0; i < 12; i++) {
      ssq = 0.0;
      b_c = 0.0;
      b_b = 0.0;
      for (ibcol = 0; ibcol < 12; ibcol++) {
        VB_tmp_2 = imperix_balance_ctrl_DW.MI[12 * i + ibcol];
        b_c += 2.0 * b_B[ibcol] * VB_tmp_2;
        b_b += b_B[ibcol + 12] * 2.0 * VB_tmp_2;
        ssq += E[12 * ibcol + i] * VB[ibcol];
      }

      ibcol = i << 1;
      tmp[ibcol + 1] = b_b;
      tmp[ibcol] = b_c;
      VB_tmp_1[i] = VB_tmp[i] + ssq;
    }

    for (i = 0; i < 2; i++) {
      for (ibcol = 0; ibcol < 2; ibcol++) {
        ssq = 0.0;
        for (c_k = 0; c_k < 12; c_k++) {
          ssq += tmp[(c_k << 1) + i] * b_B[12 * ibcol + c_k];
        }

        c_k = (ibcol << 1) + i;
        Linv_tmp_0[c_k] = imperix_balance_ctrl_DW.Hu_o[c_k] *
          imperix_balance_ctrl_DW.lambda_o + ssq /
          imperix_balance_ctrl_DW.DEc_max2;
      }

      ssq = 0.0;
      for (ibcol = 0; ibcol < 12; ibcol++) {
        ssq += tmp[(ibcol << 1) + i] * VB_tmp_1[ibcol];
      }

      tmp_5[i] = ssq / imperix_balance_ctrl_DW.DEc_max2;
      VB_tmp_0[i] = angles[i];
      VB_tmp_0[i + 2] = -C[i];
    }

    imperix_bala_mpcActiveSetSolver(Linv_tmp_0, tmp_5,
      imperix_balance_ctrl_DW.Aineq_o, VB_tmp_0,
      imperix_balance_ctrl_DW.options_o.MaxIterations,
      imperix_balance_ctrl_DW.options_o.ConstraintTolerance,
      imperix_balance_ctrl_DW.options_o.UseHessianAsInput, angles, &i, iA_o);

    // '<S158>:1:175'
  }

  // MATLAB Function: '<S27>/White noise' incorporates:
  //   MATLAB Function: '<S27>/Energy balance'

  // '<S158>:1:179'
  // '<S158>:1:180'
  // MATLAB Function 'Closed_loop_control/ICB/White noise': '<S161>:1'
  // '<S161>:1:6'
  rtb_u[0] = ie_ref_temp[0];
  rtb_u[1] = ie_ref_temp[1];
  rtb_u[2] = angles[0];

  // RateTransition generated from: '<S27>/White noise'
  imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[0] = rtb_u[0];
  imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[1] = rtb_u[1];
  imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[2] = rtb_u[2];
}

// Model step function for TID2
void imperix_balance_ctrl_step2(void)
                                    // Sample time: [0.00166667s, 0.000833333s]
{
  real_T rtb_TmpRTBAtZeroOrderHold1Inpor[6];

  // RateTransition generated from: '<S27>/Zero-Order Hold1'
  imperix_balance_ctrl_DW.TmpRTBAtZeroOrderHold1Inport1_s = 1;
  for (int32_T i = 0; i < 6; i++) {
    rtb_TmpRTBAtZeroOrderHold1Inpor[i] =
      imperix_balance_ctrl_DW.TmpRTBAtZeroOrderHold1Inport1_B[i];
  }

  imperix_balance_ctrl_DW.TmpRTBAtZeroOrderHold1Inport1_s = 0;

  // End of RateTransition generated from: '<S27>/Zero-Order Hold1'

  // RateTransition generated from: '<S27>/Energy balance'
  for (int32_T i = 0; i < 6; i++) {
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Bu[i +
      (imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Ac == 0) * 6] =
      rtb_TmpRTBAtZeroOrderHold1Inpor[i];
  }

  imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Ac = static_cast<int8_T>
    (imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Ac == 0);

  // End of RateTransition generated from: '<S27>/Energy balance'
}

// Model initialize function
void imperix_balance_ctrl_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // Set task counter limit used by the static main program
  (imperix_balance_ctrl_M)->Timing.TaskCounters.cLimit[0] = 1;
  (imperix_balance_ctrl_M)->Timing.TaskCounters.cLimit[1] = 10;
  (imperix_balance_ctrl_M)->Timing.TaskCounters.cLimit[2] = 10;

  // initialize sample time offsets
  imperix_balance_ctrl_M->Timing.TaskCounters.TID[2] = 5;
                                    // Sample time: [0.00166667s, 0.000833333s]

  {
    int32_T i;

    // Start for S-Function (TUNABLE_PARAM): '<S688>/S-Function'
    F_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S698>/S-Function'
    w_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

    // Start for S-Function (ADC): '<S120>/ADC'
    Adc_ConfigureInput(3, 0.0047937F, 0.0F, 0);
    Adc_EnableSynchronousAveraging(3, 0);
    Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage_pn);

    // Start for S-Function (TUNABLE_PARAM): '<S692>/S-Function'
    reset_mean = 0.0F;                 // Tunable parameter initialization
    ConfigureTunable(&reset_mean, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S704>/S-Function'
    reset_PI = 1.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_PI, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (ADC): '<S122>/ADC'
    Adc_ConfigureInput(7, 0.00030518F, 0.0F, 2);
    Adc_EnableSynchronousAveraging(7, 2);
    Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

    // Start for S-Function (ADC): '<S124>/ADC'
    Adc_ConfigureInput(6, 0.00030518F, 0.0F, 2);
    Adc_EnableSynchronousAveraging(6, 2);
    Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

    // Start for S-Function (ADC): '<S114>/ADC'
    Adc_ConfigureInput(5, 0.00030518F, 0.0F, 2);
    Adc_EnableSynchronousAveraging(5, 2);
    Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

    // Start for S-Function (ADC): '<S128>/ADC'
    Adc_ConfigureInput(4, 0.00030518F, 0.0F, 2);
    Adc_EnableSynchronousAveraging(4, 2);
    Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

    // Start for S-Function (ADC): '<S116>/ADC'
    Adc_ConfigureInput(3, 0.00030518F, 0.0F, 2);
    Adc_EnableSynchronousAveraging(3, 2);
    Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

    // Start for S-Function (ADC): '<S118>/ADC'
    Adc_ConfigureInput(2, 0.00030518F, 0.0F, 2);
    Adc_EnableSynchronousAveraging(2, 2);
    Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);

    // Start for S-Function (TUNABLE_PARAM): '<S708>/S-Function'
    reset_KF = 1.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S694>/S-Function'
    magnetize = 1.0F;                  // Tunable parameter initialization
    ConfigureTunable(&magnetize, 0, 0, 0.0F, 1.0F);

    // Start for RateTransition generated from: '<S27>/White noise'
    imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[0] =
      imperix_balance_ctrl_P.TmpRTBAtWhitenoiseOutport1_Init;
    imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[1] =
      imperix_balance_ctrl_P.TmpRTBAtWhitenoiseOutport1_Init;
    imperix_balance_ctrl_B.TmpRTBAtWhitenoiseOutport1[2] =
      imperix_balance_ctrl_P.TmpRTBAtWhitenoiseOutport1_Init;

    // Start for S-Function (ADC): '<S108>/ADC'
    Adc_ConfigureInput(1, 0.021362F, 0.0F, 2);
    Adc_EnableSynchronousAveraging(1, 2);
    Adc_GetPointer(1, 2, &ix_raw_adc_ptr_1_2);

    // Start for S-Function (ADC): '<S126>/ADC'
    Adc_ConfigureInput(0, 0.021362F, 0.0F, 2);
    Adc_EnableSynchronousAveraging(0, 2);
    Adc_GetPointer(0, 2, &ix_raw_adc_ptr_0_2);

    // Start for S-Function (ADC): '<S130>/ADC'
    Adc_ConfigureInput(7, 0.021362F, 0.0F, 0);
    Adc_EnableSynchronousAveraging(7, 0);
    Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

    // Start for S-Function (ADC): '<S112>/ADC'
    Adc_ConfigureInput(6, 0.021362F, 0.0F, 0);
    Adc_EnableSynchronousAveraging(6, 0);
    Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

    // Start for S-Function (ADC): '<S132>/ADC'
    Adc_ConfigureInput(5, 0.021362F, 0.0F, 0);
    Adc_EnableSynchronousAveraging(5, 0);
    Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

    // Start for S-Function (ADC): '<S134>/ADC'
    Adc_ConfigureInput(4, 0.021362F, 0.0F, 0);
    Adc_EnableSynchronousAveraging(4, 0);
    Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage_p);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage1);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage2);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage3);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage4);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage5);

    // Start for S-Function (ADC): '<S110>/ADC'
    Adc_ConfigureInput(2, 6.1035E-5F, 0.0F, 0);
    Adc_EnableSynchronousAveraging(2, 0);
    Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage);

    // Start for S-Function (PROBE): '<S186>/S-Function'
    ConfigureProbe(&Te, 0);

    // Start for S-Function (PROBE): '<S188>/S-Function'
    ConfigureProbe(&Vc5, 0);

    // Start for S-Function (PROBE): '<S190>/S-Function'
    ConfigureProbe(&Vc6, 0);

    // Start for S-Function (PROBE): '<S192>/S-Function'
    ConfigureProbe(&ie1, 0);

    // Start for S-Function (PROBE): '<S194>/S-Function'
    ConfigureProbe(&im_alp, 0);

    // Start for S-Function (PROBE): '<S196>/S-Function'
    ConfigureProbe(&im_bet, 0);

    // Start for S-Function (PROBE): '<S198>/S-Function'
    ConfigureProbe(&ie1_r, 0);

    // Start for S-Function (PROBE): '<S200>/S-Function'
    ConfigureProbe(&vo_r, 0);

    // Start for S-Function (PROBE): '<S202>/S-Function'
    ConfigureProbe(&ie2_r, 0);

    // Start for S-Function (PROBE): '<S204>/S-Function'
    ConfigureProbe(&Frd, 0);

    // Start for S-Function (PROBE): '<S206>/S-Function'
    ConfigureProbe(&ie2, 0);

    // Start for S-Function (PROBE): '<S208>/S-Function'
    ConfigureProbe(&is1, 0);

    // Start for S-Function (PROBE): '<S210>/S-Function'
    ConfigureProbe(&Vc_m, 0);

    // Start for S-Function (PROBE): '<S212>/S-Function'
    ConfigureProbe(&iP_r, 0);

    // Start for S-Function (PROBE): '<S214>/S-Function'
    ConfigureProbe(&iP, 0);

    // Start for S-Function (PROBE): '<S216>/S-Function'
    ConfigureProbe(&vm_q, 0);

    // Start for S-Function (PROBE): '<S218>/S-Function'
    ConfigureProbe(&Frd_r, 0);

    // Start for S-Function (PROBE): '<S220>/S-Function'
    ConfigureProbe(&wm_r, 0);

    // Start for S-Function (PROBE): '<S222>/S-Function'
    ConfigureProbe(&im_d, 0);

    // Start for S-Function (PROBE): '<S224>/S-Function'
    ConfigureProbe(&imd_r, 0);

    // Start for S-Function (PROBE): '<S226>/S-Function'
    ConfigureProbe(&im_q, 0);

    // Start for S-Function (PROBE): '<S228>/S-Function'
    ConfigureProbe(&imq_r, 0);

    // Start for S-Function (PROBE): '<S230>/S-Function'
    ConfigureProbe(&is2, 0);

    // Start for S-Function (PROBE): '<S232>/S-Function'
    ConfigureProbe(&vm_d, 0);

    // Start for S-Function (PROBE): '<S234>/S-Function'
    ConfigureProbe(&Vc_m_f, 0);

    // Start for S-Function (PROBE): '<S236>/S-Function'
    ConfigureProbe(&Vc1, 0);

    // Start for S-Function (PROBE): '<S238>/S-Function'
    ConfigureProbe(&im_bet_KF, 0);

    // Start for S-Function (PROBE): '<S240>/S-Function'
    ConfigureProbe(&im_alp_KF, 0);

    // Start for S-Function (PROBE): '<S242>/S-Function'
    ConfigureProbe(&Fr_bet, 0);

    // Start for S-Function (PROBE): '<S244>/S-Function'
    ConfigureProbe(&Fr_alp, 0);

    // Start for S-Function (PROBE): '<S246>/S-Function'
    ConfigureProbe(&Te_KF, 0);

    // Start for S-Function (PROBE): '<S248>/S-Function'
    ConfigureProbe(&Vc2, 0);

    // Start for S-Function (PROBE): '<S250>/S-Function'
    ConfigureProbe(&Vc3, 0);

    // Start for S-Function (PROBE): '<S252>/S-Function'
    ConfigureProbe(&is3, 0);

    // Start for S-Function (PROBE): '<S254>/S-Function'
    ConfigureProbe(&Vc4, 0);

    // Start for S-Function (PROBE): '<S256>/S-Function'
    ConfigureProbe(&ie2_rf, 0);

    // Start for S-Function (PROBE): '<S258>/S-Function'
    ConfigureProbe(&is4, 0);

    // Start for S-Function (PROBE): '<S260>/S-Function'
    ConfigureProbe(&is5, 0);

    // Start for S-Function (PROBE): '<S262>/S-Function'
    ConfigureProbe(&is6, 0);

    // Start for S-Function (PROBE): '<S264>/S-Function'
    ConfigureProbe(&wm, 0);

    // Start for S-Function (PROBE): '<S266>/S-Function'
    ConfigureProbe(&ie1_rf, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S700>/S-Function'
    freq_PWM = 1500.0F;                // Tunable parameter initialization
    ConfigureTunable(&freq_PWM, 0, 0, 0.0F, 12000.0F);

    // Start for S-Function (CLK): '<S136>/CLK1'
    Clock_SetFrequency((tClock) 1, 1500.0F);
    Clock_ConfigureAsRealTimeTunable((tClock) 1);

    // Start for S-Function (IRQ): '<S139>/S-Function' incorporates:
    //   Constant: '<S141>/clk_id'

    ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
      imperix_balance_ctrl_P.clk_id_Value_o, 0.5F, 0U);
    ConfigureReadTriggerDelayInNs(2000U);
    Adc_SetUserOversampling(16.0F);

    // Start for S-Function (CLK): '<S141>/CLK1'
    Clock_SetFrequency((tClock) 0, 6000.0F);

    // Start for S-Function (PROBE): '<S170>/S-Function'
    ConfigureProbe(&D1, 0);

    // Start for S-Function (PROBE): '<S172>/S-Function'
    ConfigureProbe(&D2, 0);

    // Start for S-Function (PROBE): '<S174>/S-Function'
    ConfigureProbe(&D3, 0);

    // Start for S-Function (PROBE): '<S176>/S-Function'
    ConfigureProbe(&D4, 0);

    // Start for S-Function (PROBE): '<S178>/S-Function'
    ConfigureProbe(&D5, 0);

    // Start for S-Function (PROBE): '<S180>/S-Function'
    ConfigureProbe(&D6, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S690>/S-Function'
    VSETEN = 1.0F;                     // Tunable parameter initialization
    ConfigureTunable(&VSETEN, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S696>/S-Function'
    enable_FP = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

    // Start for Atomic SubSystem: '<S181>/generation'
    // Start for S-Function (CB_PWM): '<S182>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 2);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 2);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 2);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 2);
    CbPwm_SetPhase((tPwmOutput) 0, 0.0F, 2);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 2);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 2);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 2);
    CbPwm_Activate((tPwmOutput) 0, 2);

    // End of Start for SubSystem: '<S181>/generation'

    // Start for S-Function (TUNABLE_PARAM): '<S702>/S-Function'
    INDM = 0.0F;                       // Tunable parameter initialization
    ConfigureTunable(&INDM, 0, 0, 0.0F, 1.0F);

    // Start for Atomic SubSystem: '<S183>/generation'
    // Start for S-Function (CB_PWM): '<S184>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 2);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 2);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 2);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 2);
    CbPwm_SetPhase((tPwmOutput) 4, 0.0F, 2);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 2);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 2);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 2);
    CbPwm_Activate((tPwmOutput) 4, 2);

    // End of Start for SubSystem: '<S183>/generation'

    // Start for Atomic SubSystem: '<S377>/generation'
    // Start for S-Function (CB_PWM): '<S378>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
    CbPwm_Activate((tPwmOutput) 2, 1);

    // End of Start for SubSystem: '<S377>/generation'

    // Start for Atomic SubSystem: '<S379>/generation'
    // Start for S-Function (CB_PWM): '<S380>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
    CbPwm_Activate((tPwmOutput) 6, 1);

    // End of Start for SubSystem: '<S379>/generation'

    // Start for Atomic SubSystem: '<S381>/generation'
    // Start for S-Function (CB_PWM): '<S382>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
    CbPwm_Activate((tPwmOutput) 3, 1);

    // End of Start for SubSystem: '<S381>/generation'

    // Start for Atomic SubSystem: '<S383>/generation'
    // Start for S-Function (CB_PWM): '<S384>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
    CbPwm_Activate((tPwmOutput) 7, 1);

    // End of Start for SubSystem: '<S383>/generation'

    // Start for Atomic SubSystem: '<S563>/generation'
    // Start for S-Function (CB_PWM): '<S564>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
    CbPwm_Activate((tPwmOutput) 0, 0);

    // End of Start for SubSystem: '<S563>/generation'

    // Start for Atomic SubSystem: '<S565>/generation'
    // Start for S-Function (CB_PWM): '<S566>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
    CbPwm_Activate((tPwmOutput) 4, 0);

    // End of Start for SubSystem: '<S565>/generation'

    // Start for Atomic SubSystem: '<S567>/generation'
    // Start for S-Function (CB_PWM): '<S568>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
    CbPwm_Activate((tPwmOutput) 1, 0);

    // End of Start for SubSystem: '<S567>/generation'

    // Start for Atomic SubSystem: '<S569>/generation'
    // Start for S-Function (CB_PWM): '<S570>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
    CbPwm_Activate((tPwmOutput) 5, 0);

    // End of Start for SubSystem: '<S569>/generation'

    // Start for Atomic SubSystem: '<S636>/generation'
    // Start for S-Function (CB_PWM): '<S637>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
    CbPwm_Activate((tPwmOutput) 2, 0);

    // End of Start for SubSystem: '<S636>/generation'

    // Start for Atomic SubSystem: '<S638>/generation'
    // Start for S-Function (CB_PWM): '<S639>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
    CbPwm_Activate((tPwmOutput) 6, 0);

    // End of Start for SubSystem: '<S638>/generation'

    // Start for Atomic SubSystem: '<S640>/generation'
    // Start for S-Function (CB_PWM): '<S641>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
    CbPwm_Activate((tPwmOutput) 3, 0);

    // End of Start for SubSystem: '<S640>/generation'

    // Start for Atomic SubSystem: '<S642>/generation'
    // Start for S-Function (CB_PWM): '<S643>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
    CbPwm_Activate((tPwmOutput) 7, 0);

    // End of Start for SubSystem: '<S642>/generation'

    // Start for Atomic SubSystem: '<S648>/generation'
    // Start for S-Function (CB_PWM): '<S649>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 8, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
    CbPwm_Activate((tPwmOutput) 8, 0);

    // End of Start for SubSystem: '<S648>/generation'

    // Start for Atomic SubSystem: '<S650>/generation'
    // Start for S-Function (CB_PWM): '<S651>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 12, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 12, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
    CbPwm_Activate((tPwmOutput) 12, 0);

    // End of Start for SubSystem: '<S650>/generation'

    // Start for Atomic SubSystem: '<S652>/generation'
    // Start for S-Function (CB_PWM): '<S653>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 9, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 9, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
    CbPwm_Activate((tPwmOutput) 9, 0);

    // End of Start for SubSystem: '<S652>/generation'

    // Start for Atomic SubSystem: '<S654>/generation'
    // Start for S-Function (CB_PWM): '<S655>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 13, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 13, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
    CbPwm_Activate((tPwmOutput) 13, 0);

    // End of Start for SubSystem: '<S654>/generation'

    // Start for Atomic SubSystem: '<S660>/generation'
    // Start for S-Function (CB_PWM): '<S661>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 10, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 10, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
    CbPwm_Activate((tPwmOutput) 10, 0);

    // End of Start for SubSystem: '<S660>/generation'

    // Start for Atomic SubSystem: '<S662>/generation'
    // Start for S-Function (CB_PWM): '<S663>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 14, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 14, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
    CbPwm_Activate((tPwmOutput) 14, 0);

    // End of Start for SubSystem: '<S662>/generation'

    // Start for Atomic SubSystem: '<S664>/generation'
    // Start for S-Function (CB_PWM): '<S665>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 11, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 11, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
    CbPwm_Activate((tPwmOutput) 11, 0);

    // End of Start for SubSystem: '<S664>/generation'

    // Start for Atomic SubSystem: '<S666>/generation'
    // Start for S-Function (CB_PWM): '<S667>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 15, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
    CbPwm_Activate((tPwmOutput) 15, 0);

    // End of Start for SubSystem: '<S666>/generation'

    // Start for Atomic SubSystem: '<S679>/generation'
    // Start for S-Function (CB_PWM): '<S680>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
    CbPwm_Activate((tPwmOutput) 0, 1);

    // End of Start for SubSystem: '<S679>/generation'

    // Start for Atomic SubSystem: '<S681>/generation'
    // Start for S-Function (CB_PWM): '<S682>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
    CbPwm_Activate((tPwmOutput) 4, 1);

    // End of Start for SubSystem: '<S681>/generation'

    // Start for Atomic SubSystem: '<S683>/generation'
    // Start for S-Function (CB_PWM): '<S684>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
    CbPwm_Activate((tPwmOutput) 1, 1);

    // End of Start for SubSystem: '<S683>/generation'

    // Start for Atomic SubSystem: '<S685>/generation'
    // Start for S-Function (CB_PWM): '<S686>/PWM' incorporates:
    //   Constant: '<S136>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock)
                         imperix_balance_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
    CbPwm_Activate((tPwmOutput) 5, 1);

    // End of Start for SubSystem: '<S685>/generation'

    // Start for S-Function (TUNABLE_PARAM): '<S710>/S-Function'
    INDS = 0.0F;                       // Tunable parameter initialization
    ConfigureTunable(&INDS, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S706>/S-Function'
    INDT = 0.0F;                       // Tunable parameter initialization
    ConfigureTunable(&INDT, 0, 0, 0.0F, 1.0F);
    imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE_hy = UNINITIALIZED_ZCSIG;
    imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE_h = UNINITIALIZED_ZCSIG;
    imperix_balance_ctrl_PrevZCX.SampleandHold1_Trig_ZCE = UNINITIALIZED_ZCSIG;
    imperix_balance_ctrl_PrevZCX.SampleandHold2_Trig_ZCE = UNINITIALIZED_ZCSIG;
    imperix_balance_ctrl_PrevZCX.SampleandHold3_Trig_ZCE = UNINITIALIZED_ZCSIG;
    imperix_balance_ctrl_PrevZCX.SampleandHold4_Trig_ZCE = UNINITIALIZED_ZCSIG;
    imperix_balance_ctrl_PrevZCX.SampleandHold5_Trig_ZCE = UNINITIALIZED_ZCSIG;
    imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE = UNINITIALIZED_ZCSIG;

    // InitializeConditions for DiscreteIntegrator: '<S355>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE =
      imperix_balance_ctrl_P.SpeedPI_InitialConditionForInte;

    // InitializeConditions for UnitDelay: '<S81>/Unit Delay'
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[0] =
      imperix_balance_ctrl_P.UnitDelay_InitialCondition[0];
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[1] =
      imperix_balance_ctrl_P.UnitDelay_InitialCondition[1];

    // InitializeConditions for DiscreteIntegrator: '<S303>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_k =
      imperix_balance_ctrl_P.FluxPI_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S485>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_h =
      imperix_balance_ctrl_P.MCCPId_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S537>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_m =
      imperix_balance_ctrl_P.MCCPIq_InitialConditionForInteg;

    // InitializeConditions for UnitDelay: '<S392>/Unit Delay1'
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE =
      imperix_balance_ctrl_P.M2C.Vc_ref;

    // InitializeConditions for DiscreteIntegrator: '<S430>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_p =
      imperix_balance_ctrl_P.PIDController1_InitialCondition;

    // InitializeConditions for DiscreteIntegrator: '<S608>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_a =
      imperix_balance_ctrl_P.PCCPI_InitialConditionForIntegr;

    // InitializeConditions for RateTransition generated from: '<S27>/White noise' 
    imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[0] =
      imperix_balance_ctrl_P.TmpRTBAtWhitenoiseOutport1_Init;
    imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[1] =
      imperix_balance_ctrl_P.TmpRTBAtWhitenoiseOutport1_Init;
    imperix_balance_ctrl_DW.TmpRTBAtWhitenoiseOutport1_Buff[2] =
      imperix_balance_ctrl_P.TmpRTBAtWhitenoiseOutport1_Init;

    // InitializeConditions for UnitDelay: '<S159>/Unit Delay1'
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0] =
      imperix_balance_ctrl_P.UnitDelay1_InitialCondition;
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1] =
      imperix_balance_ctrl_P.UnitDelay1_InitialCondition;

    // InitializeConditions for RateTransition generated from: '<S27>/Energy balance' 
    for (i = 0; i < 6; i++) {
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Bu[i] =
        imperix_balance_ctrl_P.TmpRTBAtEnergybalanceInport1_In;
    }

    // End of InitializeConditions for RateTransition generated from: '<S27>/Energy balance' 

    // SystemInitialize for MATLAB Function: '<S27>/Saturation'
    imperix_balance_ctrl_DW.Ix[1] = 0.0;
    imperix_balance_ctrl_DW.Ix[2] = 0.0;
    imperix_balance_ctrl_DW.Ix[0] = 1.0;
    imperix_balance_ctrl_DW.Ix[3] = 1.0;
    imperix_balance_ctrl_DW.Tol = 0.001;

    // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
    memset(&imperix_balance_ctrl_DW.Inx[0], 0, sizeof(real_T) << 4U);
    imperix_balance_ctrl_DW.Inx[0] = 1.0;
    imperix_balance_ctrl_DW.Inx[5] = 1.0;
    imperix_balance_ctrl_DW.Inx[10] = 1.0;
    imperix_balance_ctrl_DW.Inx[15] = 1.0;

    // SystemInitialize for Enabled SubSystem: '<S386>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_balance_ctrl_B.Fcn_m,
      &imperix_balance_ctrl_B.Fcn1_c, &imperix_balance_ctrl_P.Subsystempi2delay);

    // End of SystemInitialize for SubSystem: '<S386>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S386>/Subsystem1'
    imperix_bal_Subsystem1_Init(&imperix_balance_ctrl_B.Fcn_br,
      &imperix_balance_ctrl_B.Fcn1_f3, &imperix_balance_ctrl_P.Subsystem1);

    // End of SystemInitialize for SubSystem: '<S386>/Subsystem1'

    // SystemInitialize for Triggered SubSystem: '<S78>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S391>/In' incorporates:
    //   Outport: '<S391>/ '

    imperix_balance_ctrl_B.In_ge = imperix_balance_ctrl_P._Y0;

    // End of SystemInitialize for SubSystem: '<S78>/Sample and Hold'

    // SystemInitialize for Enabled SubSystem: '<S450>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_balance_ctrl_B.Fcn_b,
      &imperix_balance_ctrl_B.Fcn1_i,
      &imperix_balance_ctrl_P.Subsystempi2delay_p);

    // End of SystemInitialize for SubSystem: '<S450>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S450>/Subsystem1'
    imperix_bal_Subsystem1_Init(&imperix_balance_ctrl_B.Fcn_ou,
      &imperix_balance_ctrl_B.Fcn1_f, &imperix_balance_ctrl_P.Subsystem1_e);

    // End of SystemInitialize for SubSystem: '<S450>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S626>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S630>/Fcn' incorporates:
    //   Outport: '<S630>/dq'

    imperix_balance_ctrl_B.Fcn_o = imperix_balance_ctrl_P.dq_Y0[0];

    // SystemInitialize for Fcn: '<S630>/Fcn1' incorporates:
    //   Outport: '<S630>/dq'

    imperix_balance_ctrl_B.Fcn1_l = imperix_balance_ctrl_P.dq_Y0[1];

    // End of SystemInitialize for SubSystem: '<S626>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S626>/Subsystem1'
    // SystemInitialize for Fcn: '<S631>/Fcn' incorporates:
    //   Outport: '<S631>/dq'

    imperix_balance_ctrl_B.Fcn = imperix_balance_ctrl_P.dq_Y0_c[0];

    // SystemInitialize for Fcn: '<S631>/Fcn1' incorporates:
    //   Outport: '<S631>/dq'

    imperix_balance_ctrl_B.Fcn1 = imperix_balance_ctrl_P.dq_Y0_c[1];

    // End of SystemInitialize for SubSystem: '<S626>/Subsystem1'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S668>/In' incorporates:
    //   Outport: '<S668>/ '

    imperix_balance_ctrl_B.In_nz = imperix_balance_ctrl_P._Y0_e;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold1'
    // SystemInitialize for SignalConversion generated from: '<S669>/In' incorporates:
    //   Outport: '<S669>/ '

    imperix_balance_ctrl_B.In_g = imperix_balance_ctrl_P._Y0_m;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold2'
    // SystemInitialize for SignalConversion generated from: '<S670>/In' incorporates:
    //   Outport: '<S670>/ '

    imperix_balance_ctrl_B.In_m = imperix_balance_ctrl_P._Y0_eo;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold2'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold3'
    // SystemInitialize for SignalConversion generated from: '<S671>/In' incorporates:
    //   Outport: '<S671>/ '

    imperix_balance_ctrl_B.In_n = imperix_balance_ctrl_P._Y0_mx;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold3'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold4'
    // SystemInitialize for SignalConversion generated from: '<S672>/In' incorporates:
    //   Outport: '<S672>/ '

    imperix_balance_ctrl_B.In_k = imperix_balance_ctrl_P._Y0_h;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold4'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold5'
    // SystemInitialize for SignalConversion generated from: '<S673>/In' incorporates:
    //   Outport: '<S673>/ '

    imperix_balance_ctrl_B.In_c = imperix_balance_ctrl_P._Y0_o;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold5'

    // SystemInitialize for Triggered SubSystem: '<S93>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S674>/In' incorporates:
    //   Outport: '<S674>/ '

    imperix_balance_ctrl_B.In = imperix_balance_ctrl_P._Y0_b;

    // End of SystemInitialize for SubSystem: '<S93>/Sample and Hold'
    imperix__MovingAverage_Init(&imperix_balance_ctrl_DW.MovingAverage_pn);
    imperix__MovingAverage_Init(&imperix_balance_ctrl_DW.MovingAverage_p);
    imperix__MovingAverage_Init(&imperix_balance_ctrl_DW.MovingAverage1);
    imperix__MovingAverage_Init(&imperix_balance_ctrl_DW.MovingAverage2);
    imperix__MovingAverage_Init(&imperix_balance_ctrl_DW.MovingAverage3);
    imperix__MovingAverage_Init(&imperix_balance_ctrl_DW.MovingAverage4);
    imperix__MovingAverage_Init(&imperix_balance_ctrl_DW.MovingAverage5);
    imperix__MovingAverage_Init(&imperix_balance_ctrl_DW.MovingAverage);
  }
}

// Model terminate function
void imperix_balance_ctrl_terminate(void)
{
  imperix__MovingAverage_Term(&imperix_balance_ctrl_DW.MovingAverage_pn);
  imperix__MovingAverage_Term(&imperix_balance_ctrl_DW.MovingAverage_p);
  imperix__MovingAverage_Term(&imperix_balance_ctrl_DW.MovingAverage1);
  imperix__MovingAverage_Term(&imperix_balance_ctrl_DW.MovingAverage2);
  imperix__MovingAverage_Term(&imperix_balance_ctrl_DW.MovingAverage3);
  imperix__MovingAverage_Term(&imperix_balance_ctrl_DW.MovingAverage4);
  imperix__MovingAverage_Term(&imperix_balance_ctrl_DW.MovingAverage5);
  imperix__MovingAverage_Term(&imperix_balance_ctrl_DW.MovingAverage);
}

boolean_T RT_MODEL_imperix_balance_ctrl_T::StepTask(int32_T idx) const
{
  return (Timing.TaskCounters.TID[(idx)] == 0);
}

uint8_T &RT_MODEL_imperix_balance_ctrl_T::CounterLimit(int32_T idx)
{
  return (Timing.TaskCounters.cLimit[(idx)]);
}

const char_T* RT_MODEL_imperix_balance_ctrl_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_imperix_balance_ctrl_T::setErrorStatus(const char_T* const
  volatile aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

uint8_T &RT_MODEL_imperix_balance_ctrl_T::TaskCounter(int32_T idx)
{
  return (Timing.TaskCounters.TID[(idx)]);
}

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
