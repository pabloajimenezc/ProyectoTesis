//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_ctrl.cpp
//
// Code generated for Simulink model 'imperix_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.83
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Feb  2 18:35:10 2026
//
#include "imperix_ctrl.h"
#include "rtwtypes.h"
#include "imperix_ctrl_types.h"
#include "imperix_ctrl_private.h"
#include <string.h>
#include <math.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "zero_crossing_types.h"
#include "rt_defines.h"

real32_T V_mag;                        // Tunable parameter
int16_T* ix_raw_adc_ptr_1_2;
int16_T* ix_raw_adc_ptr_0_2;
int16_T* ix_raw_adc_ptr_7_0;
int16_T* ix_raw_adc_ptr_6_0;
int16_T* ix_raw_adc_ptr_5_0;
int16_T* ix_raw_adc_ptr_4_0;
int16_T* ix_raw_adc_ptr_7_2;
int16_T* ix_raw_adc_ptr_6_2;
int16_T* ix_raw_adc_ptr_5_2;
int16_T* ix_raw_adc_ptr_4_2;
int16_T* ix_raw_adc_ptr_3_2;
int16_T* ix_raw_adc_ptr_2_2;
real32_T is1;                          // Probe
real32_T is2;                          // Probe
real32_T Vc5;                          // Probe
real32_T Vc6;                          // Probe
int16_T* ix_raw_adc_ptr_3_0;
real32_T reset_mean;                   // Tunable parameter
real32_T wm;                           // Probe
real32_T ie1;                          // Probe
real32_T magnetize;                    // Tunable parameter
real32_T F_ref;                        // Tunable parameter
real32_T w_ref;                        // Tunable parameter
real32_T enable_KF;                    // Tunable parameter
real32_T reset_KF;                     // Tunable parameter
real32_T reset_PI;                     // Tunable parameter
real32_T ie1_r;                        // Probe
real32_T vo_r;                         // Probe
real32_T ie2_r;                        // Probe
real32_T ie2;                          // Probe
real32_T Frd;                          // Probe
real32_T Vc_m;                         // Probe
real32_T is3;                          // Probe
real32_T Vc_m_f;                       // Probe
real32_T iP_r;                         // Probe
real32_T iP;                           // Probe
real32_T vm_q;                         // Probe
real32_T Frd_r;                        // Probe
real32_T wm_r;                         // Probe
real32_T im_d;                         // Probe
real32_T imd_r;                        // Probe
real32_T im_q;                         // Probe
real32_T imq_r;                        // Probe
real32_T is4;                          // Probe
real32_T vm_d;                         // Probe
real32_T im_bet;                       // Probe
real32_T im_alp;                       // Probe
real32_T im_bet_KF;                    // Probe
real32_T im_alp_KF;                    // Probe
real32_T Fr_bet;                       // Probe
real32_T Fr_alp;                       // Probe
real32_T Te_KF;                        // Probe
real32_T V5;                           // Probe
int16_T* ix_raw_adc_ptr_2_0;
real32_T Te;                           // Probe
real32_T is5;                          // Probe
real32_T V6;                           // Probe
real32_T V1;                           // Probe
real32_T V2;                           // Probe
real32_T V3;                           // Probe
real32_T V4;                           // Probe
real32_T is6;                          // Probe
real32_T Vc1;                          // Probe
real32_T Vc2;                          // Probe
real32_T Vc3;                          // Probe
real32_T Vc4;                          // Probe
real32_T enable_FP;                    // Tunable parameter
real32_T v_alp;                        // Probe
real32_T v_bet;                        // Probe
real32_T f_mag;                        // Tunable parameter
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);

// Block signals (default storage)
B_imperix_ctrl_T imperix_ctrl_B;

// Block states (default storage)
DW_imperix_ctrl_T imperix_ctrl_DW;

// Previous zero-crossings (trigger) states
PrevZCX_imperix_ctrl_T imperix_ctrl_PrevZCX;

// Real-time model
RT_MODEL_imperix_ctrl_T imperix_ctrl_M_ = RT_MODEL_imperix_ctrl_T();
RT_MODEL_imperix_ctrl_T *const imperix_ctrl_M = &imperix_ctrl_M_;

// Forward declaration for local functions
static void imperix_ctrl_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj);

// Forward declaration for local functions
static void imperix_ctrl_trisolve_g(const real_T A[4], real_T B[4]);
static real_T imperix_ctrl_norm_o(const real_T x[2]);
static real_T imperix_ctrl_xnrm2_h(int32_T n, const real_T x[4], int32_T ix0);
static void imperix_ctrl_xgemv_j(int32_T m, int32_T n, const real_T A[4],
  int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2]);
static void imperix_ctrl_xgerc_az(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[2], real_T A[4], int32_T ia0);
static real_T imperix_ctrl_KWIKfactor_g(const real_T Ac[24], const int32_T iC[12],
  int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T H[4],
  int32_T n);
static void imperix_ctrl_DropConstraint_h(int32_T kDrop, boolean_T iA[12],
  int32_T *nA, int32_T iC[12]);
static void imperix_ctrl_qpkwik_d(const real_T Linv[4], const real_T Hinv[4],
  const real_T f[2], const real_T Ac[24], const real_T b[12], boolean_T iA[12],
  int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[12], int32_T
  *status);
static void imperix_ctrl_trisolve_n(const real_T A[16], real_T B[16]);
static real_T imperix_ctrl_norm_c(const real_T x[4]);
static real_T imperix_ctrl_maximum_e(const real_T x[4]);
static real_T imperix_ctrl_xnrm2_p(int32_T n, const real_T x[16], int32_T ix0);
static void imperix_ctrl_xgemv_k(int32_T m, int32_T n, const real_T A[16],
  int32_T ia0, const real_T x[16], int32_T ix0, real_T y[4]);
static void imperix_ctrl_xgerc_a(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[4], real_T A[16], int32_T ia0);
static real_T imperix_ctrl_KWIKfactor_a(const real_T Ac[96], const int32_T iC[24],
  int32_T nA, const real_T Linv[16], real_T RLinv[16], real_T D[16], real_T H[16],
  int32_T n);
static void imperix_ctrl_DropConstraint_l(int32_T kDrop, boolean_T iA[24],
  int32_T *nA, int32_T iC[24]);
static void imperix_ctrl_qpkwik_g(const real_T Linv[16], const real_T Hinv[16],
  const real_T f[4], const real_T Ac[96], const real_T b[24], boolean_T iA[24],
  int32_T maxiter, real_T FeasTol, real_T x[4], real_T lambda[24], int32_T
  *status);
static void imperix_ctrl_repmat(const real_T a[2], real_T b[6]);
static void imperix_ctrl_trisolve(const real_T A[64], real_T B[64]);
static real_T imperix_ctrl_norm(const real_T x[8]);
static real_T imperix_ctrl_maximum(const real_T x[8]);
static real_T imperix_ctrl_xnrm2(int32_T n, const real_T x[64], int32_T ix0);
static void imperix_ctrl_xgemv(int32_T m, int32_T n, const real_T A[64], int32_T
  ia0, const real_T x[64], int32_T ix0, real_T y[8]);
static void imperix_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y[8], real_T A[64], int32_T ia0);
static real_T imperix_ctrl_KWIKfactor(const real_T Ac[384], const int32_T iC[48],
  int32_T nA, const real_T Linv[64], real_T RLinv[64], real_T D[64], real_T H[64],
  int32_T n);
static void imperix_ctrl_DropConstraint(int32_T kDrop, boolean_T iA[48], int32_T
  *nA, int32_T iC[48]);
static void imperix_ctrl_qpkwik(const real_T Linv[64], const real_T Hinv[64],
  const real_T f[8], const real_T Ac[384], const real_T b[48], boolean_T iA[48],
  int32_T maxiter, real_T FeasTol, real_T x[8], real_T lambda[48], int32_T
  *status);
static void imperix_ctrl_mpcActiveSetSolver(const real_T H[64], const real_T f[8],
  const real_T A[384], const real_T b[48], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[8],
  int32_T *exitflag, boolean_T iA[48]);
static real_T imperix_ctrl_KWIKfactor_b(const real_T Ac[32], const int32_T iC[8],
  int32_T nA, const real_T Linv[16], real_T RLinv[16], real_T D[16], real_T H[16],
  int32_T n);
static void imperix_ctrl_DropConstraint_j(int32_T kDrop, boolean_T iA[8],
  int32_T *nA, int32_T iC[8]);
static void imperix_ctrl_qpkwik_j(const real_T Linv[16], const real_T Hinv[16],
  const real_T f[4], const real_T Ac[32], const real_T b[8], boolean_T iA[8],
  int32_T maxiter, real_T FeasTol, real_T x[4], real_T lambda[8], int32_T
  *status);
static void imperix_ct_mpcActiveSetSolver_k(const real_T H[16], const real_T f[4],
  const real_T A[32], const real_T b[8], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[4],
  int32_T *exitflag, boolean_T iA[8]);
static void imperix_ctrl_SystemCore_setup_m(dsp_simulink_MovingAverage_im_T *obj);
int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    // Divide by zero handler
  } else {
    uint32_T absDenominator;
    uint32_T absNumerator;
    uint32_T tempAbsQuotient;
    boolean_T quotientNeedsNegation;
    absNumerator = numerator < 0 ? ~static_cast<uint32_T>(numerator) + 1U :
      static_cast<uint32_T>(numerator);
    absDenominator = denominator < 0 ? ~static_cast<uint32_T>(denominator) + 1U :
      static_cast<uint32_T>(denominator);
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    quotient = quotientNeedsNegation ? -/*MW:OvOk*/ (static_cast<int32_T>
      (tempAbsQuotient)) : static_cast<int32_T>(tempAbsQuotient);
  }

  return quotient;
}

int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
}

static void imperix_ctrl_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S81>/Moving Average'
  obj->NumChannels = 1;
  obj->FrameLength = 6;
  obj->pCumSum = 0.0;
  memset(&obj->pCumSumRev[0], 0, 99U * sizeof(real_T));
  obj->pCumRevIndex = 1.0;
  obj->pModValueRev = 0.0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

// System initialize for atomic system:
void imperix__MovingAverage_Init(DW_MovingAverage_imperix_ctrl_T *localDW)
{
  // InitializeConditions for MATLABSystem: '<S81>/Moving Average'
  localDW->obj.pCumSum = 0.0;
  memset(&localDW->obj.pCumSumRev[0], 0, 99U * sizeof(real_T));
  localDW->obj.pCumRevIndex = 1.0;
  localDW->obj.pModValueRev = 0.0;
}

// Start for atomic system:
void imperix_MovingAverage_Start(DW_MovingAverage_imperix_ctrl_T *localDW)
{
  // Start for MATLABSystem: '<S81>/Moving Average'
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  imperix_ctrl_SystemCore_setup(&localDW->obj);
}

// Output and update for atomic system:
void imperix_ctrl_MovingAverage(const real_T rtu_0[6],
  B_MovingAverage_imperix_ctrl_T *localB, DW_MovingAverage_imperix_ctrl_T
  *localDW)
{
  real_T csum;
  real_T cumRevIndex;
  real_T modValueRev;
  real_T z;
  int32_T modIndex;

  // MATLABSystem: '<S81>/Moving Average'
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  cumRevIndex = localDW->obj.pCumRevIndex;
  csum = localDW->obj.pCumSum;
  modValueRev = localDW->obj.pModValueRev;
  modIndex = 1;
  z = 0.0;
  for (int32_T i = 0; i < 6; i++) {
    // MATLABSystem: '<S81>/Moving Average'
    localB->MovingAverage[i] = 0.0;
  }

  // MATLABSystem: '<S81>/Moving Average'
  for (int32_T i = 0; i < 6; i++) {
    real_T rtu_0_0;
    rtu_0_0 = rtu_0[i];
    csum += rtu_0_0;
    if (modValueRev == 0.0) {
      z = localDW->obj.pCumSumRev[static_cast<int32_T>(cumRevIndex) - 1] + csum;
    }

    localDW->obj.pCumSumRev[static_cast<int32_T>(cumRevIndex) - 1] = rtu_0_0;
    if (cumRevIndex != 99.0) {
      cumRevIndex++;
    } else {
      cumRevIndex = 1.0;
      csum = 0.0;
      for (int32_T k = 97; k >= 0; k--) {
        localDW->obj.pCumSumRev[k] += localDW->obj.pCumSumRev[k + 1];
      }
    }

    if (modValueRev == 0.0) {
      localB->MovingAverage[modIndex - 1] = z / 100.0;
      if (modIndex <= 2147483646) {
        modIndex++;
      }
    }

    if (modValueRev > 0.0) {
      modValueRev--;
    } else {
      modValueRev = 0.0;
    }
  }

  localDW->obj.pCumSum = csum;
  localDW->obj.pCumRevIndex = cumRevIndex;
  localDW->obj.pModValueRev = modValueRev;
}

// Termination for atomic system:
void imperix__MovingAverage_Term(DW_MovingAverage_imperix_ctrl_T *localDW)
{
  // Terminate for MATLABSystem: '<S81>/Moving Average'
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      localDW->obj.NumChannels = -1;
      localDW->obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S81>/Moving Average'
}

//
// System initialize for enable system:
//    '<S441>/Subsystem - pi//2 delay'
//    '<S662>/Subsystem - pi//2 delay'
//
void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_e, P_Subsystempi2delay_imperix_c_T *localP)
{
  // SystemInitialize for Outport: '<S548>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_e = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S441>/Subsystem - pi//2 delay'
//    '<S662>/Subsystem - pi//2 delay'
//
void imperix_c_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_k, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_e)
{
  // Outputs for Enabled SubSystem: '<S441>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S548>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S548>/Fcn' incorporates:
    //   Fcn: '<S548>/Fcn1'

    tmp = cos(rtu_wt);
    tmp_0 = sin(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 + rtu_dq_k * tmp;

    // Fcn: '<S548>/Fcn1'
    *rty_alpha_beta_e = -rtu_dq * tmp + rtu_dq_k * tmp_0;
  }

  // End of Outputs for SubSystem: '<S441>/Subsystem - pi//2 delay'
}

//
// System initialize for enable system:
//    '<S441>/Subsystem1'
//    '<S662>/Subsystem1'
//
void imperix_ctr_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_b, P_Subsystem1_imperix_ctrl_T *localP)
{
  // SystemInitialize for Outport: '<S549>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_b = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S441>/Subsystem1'
//    '<S662>/Subsystem1'
//
void imperix_ctrl_Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T rtu_dq_m,
  real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_b)
{
  // Outputs for Enabled SubSystem: '<S441>/Subsystem1' incorporates:
  //   EnablePort: '<S549>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S549>/Fcn' incorporates:
    //   Fcn: '<S549>/Fcn1'

    tmp = sin(rtu_wt);
    tmp_0 = cos(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 - rtu_dq_m * tmp;

    // Fcn: '<S549>/Fcn1'
    *rty_alpha_beta_b = rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S441>/Subsystem1'
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

// Function for MATLAB Function: '<S32>/Saturation'
static void imperix_ctrl_trisolve_g(const real_T A[4], real_T B[4])
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

// Function for MATLAB Function: '<S32>/Saturation'
static real_T imperix_ctrl_norm_o(const real_T x[2])
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

// Function for MATLAB Function: '<S32>/Saturation'
static real_T imperix_ctrl_xnrm2_h(int32_T n, const real_T x[4], int32_T ix0)
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

// Function for MATLAB Function: '<S32>/Saturation'
static void imperix_ctrl_xgemv_j(int32_T m, int32_T n, const real_T A[4],
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

// Function for MATLAB Function: '<S32>/Saturation'
static void imperix_ctrl_xgerc_az(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[2], real_T A[4], int32_T ia0)
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

// Function for MATLAB Function: '<S32>/Saturation'
static real_T imperix_ctrl_KWIKfactor_g(const real_T Ac[24], const int32_T iC[12],
  int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T H[4],
  int32_T n)
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
      xnorm = imperix_ctrl_xnrm2_h(1, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_ctrl_xnrm2_h(1, A, ii + 2));
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
        imperix_ctrl_xgemv_j(b_lastv, c_lastc, A, ii + 3, A, ii + 1, work);
        imperix_ctrl_xgerc_az(b_lastv, c_lastc, -tau[0], ii + 1, work, A, ii + 3);
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
        imperix_ctrl_xgemv_j(b_lastv, c_lastc, A, ii + 3, A, ii + 1, work);
        imperix_ctrl_xgerc_az(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
                              3);
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

// Function for MATLAB Function: '<S32>/Saturation'
static void imperix_ctrl_DropConstraint_h(int32_T kDrop, boolean_T iA[12],
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

// Function for MATLAB Function: '<S32>/Saturation'
static void imperix_ctrl_qpkwik_d(const real_T Linv[4], const real_T Hinv[4],
  const real_T f[2], const real_T Ac[24], const real_T b[12], boolean_T iA[12],
  int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[12], int32_T
  *status)
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
        Xnorm0 = imperix_ctrl_KWIKfactor_g(Ac, iC, nA, Linv, RLinv, D, H, 2);
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
              imperix_ctrl_DropConstraint_h(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_ctrl_norm_o(x);
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
              cMin = imperix_ctrl_KWIKfactor_g(Ac, iC, nA, Linv, RLinv, D, H, 2);
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
                  imperix_ctrl_DropConstraint_h(kDrop, iA, &nA, iC);
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
            cMin = imperix_ctrl_norm_o(x);
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_trisolve_n(const real_T A[16], real_T B[16])
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

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_norm_c(const real_T x[4])
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

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_maximum_e(const real_T x[4])
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

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_xnrm2_p(int32_T n, const real_T x[16], int32_T ix0)
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_xgemv_k(int32_T m, int32_T n, const real_T A[16],
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_xgerc_a(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[4], real_T A[16], int32_T ia0)
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_ctrl_KWIKfactor_a(const real_T Ac[96], const int32_T iC[24],
  int32_T nA, const real_T Linv[16], real_T RLinv[16], real_T D[16], real_T H[16],
  int32_T n)
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
      xnorm = imperix_ctrl_xnrm2_p(3 - k_i, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_ctrl_xnrm2_p(3 - k_i, A, ii + 2));
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
        imperix_ctrl_xgemv_k(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_ctrl_xgerc_a(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
                             5);
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
        imperix_ctrl_xgemv_k(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_ctrl_xgerc_a(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
                             5);
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

// Function for MATLAB Function: '<S1>/LICCs control'
static void imperix_ctrl_DropConstraint_l(int32_T kDrop, boolean_T iA[24],
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

// Function for MATLAB Function: '<S1>/LICCs control'
static void imperix_ctrl_qpkwik_g(const real_T Linv[16], const real_T Hinv[16],
  const real_T f[4], const real_T Ac[96], const real_T b[24], boolean_T iA[24],
  int32_T maxiter, real_T FeasTol, real_T x[4], real_T lambda[24], int32_T
  *status)
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
        Xnorm0 = imperix_ctrl_KWIKfactor_a(Ac, iC, nA, Linv, RLinv, D, H, 4);
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
              imperix_ctrl_DropConstraint_l(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_ctrl_norm_c(x);
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
          cVal = imperix_ctrl_maximum_e(varargin_1);
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
              cMin = imperix_ctrl_KWIKfactor_a(Ac, iC, nA, Linv, RLinv, D, H, 4);
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
                  imperix_ctrl_DropConstraint_l(kDrop, iA, &nA, iC);
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
            cMin = imperix_ctrl_norm_c(x);
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_repmat(const real_T a[2], real_T b[6])
{
  real_T a_0;
  real_T a_1;
  a_0 = a[0];
  a_1 = a[1];
  for (int32_T jtilecol = 0; jtilecol < 3; jtilecol++) {
    int32_T ibcol;
    ibcol = jtilecol << 1;
    b[ibcol] = a_0;
    b[ibcol + 1] = a_1;
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_trisolve(const real_T A[64], real_T B[64])
{
  for (int32_T j = 0; j < 8; j++) {
    int32_T jBcol;
    jBcol = j << 3;
    for (int32_T b_k = 0; b_k < 8; b_k++) {
      real_T B_0;
      int32_T B_tmp;
      int32_T kAcol;
      kAcol = b_k << 3;
      B_tmp = b_k + jBcol;
      B_0 = B[B_tmp];
      if (B_0 != 0.0) {
        B[B_tmp] = B_0 / A[b_k + kAcol];
        for (int32_T i = b_k + 2; i < 9; i++) {
          int32_T tmp;
          tmp = (i + jBcol) - 1;
          B[tmp] -= A[(i + kAcol) - 1] * B[B_tmp];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_norm(const real_T x[8])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k = 0; k < 8; k++) {
    real_T absxk;
    absxk = fabs(x[k]);
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

  return scale * sqrt(y);
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_maximum(const real_T x[8])
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
    while ((!exitg1) && (k < 9)) {
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
    for (k = idx + 1; k < 9; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (ex < x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_xnrm2(int32_T n, const real_T x[64], int32_T ix0)
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_xgemv(int32_T m, int32_T n, const real_T A[64], int32_T
  ia0, const real_T x[64], int32_T ix0, real_T y[8])
{
  if ((m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = ((n - 1) << 3) + ia0;
    for (int32_T b_iy = ia0; b_iy <= b; b_iy += 8) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = b_iy + m;
      for (ia = b_iy; ia < d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * A[ia - 1];
      }

      ia = (b_iy - ia0) >> 3;
      y[ia] += c;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y[8], real_T A[64], int32_T ia0)
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

      jA += 8;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_KWIKfactor(const real_T Ac[384], const int32_T iC[48],
  int32_T nA, const real_T Linv[64], real_T RLinv[64], real_T D[64], real_T H[64],
  int32_T n)
{
  real_T A[64];
  real_T R[64];
  real_T TL[64];
  real_T tau[8];
  real_T work[8];
  real_T A_0;
  real_T Status;
  real_T atmp;
  real_T xnorm;
  int32_T b_lastv;
  int32_T c_lastc;
  int32_T exitg1;
  int32_T f;
  int32_T i;
  int32_T ii;
  int32_T knt;
  int32_T qY;
  boolean_T exitg2;
  Status = 1.0;
  memset(&RLinv[0], 0, sizeof(real_T) << 6U);
  for (b_lastv = 0; b_lastv < nA; b_lastv++) {
    knt = iC[b_lastv];
    memset(&RLinv[b_lastv << 3], 0, sizeof(real_T) << 3U);
    for (i = 0; i < 8; i++) {
      xnorm = Ac[(48 * i + knt) - 1];
      for (ii = 0; ii < 8; ii++) {
        c_lastc = (b_lastv << 3) + ii;
        RLinv[c_lastc] += Linv[(i << 3) + ii] * xnorm;
      }
    }
  }

  memcpy(&A[0], &RLinv[0], sizeof(real_T) << 6U);
  memset(&tau[0], 0, sizeof(real_T) << 3U);
  memset(&work[0], 0, sizeof(real_T) << 3U);
  for (i = 0; i < 8; i++) {
    ii = (i << 3) + i;
    if (i + 1 < 8) {
      atmp = A[ii];
      b_lastv = ii + 2;
      tau[i] = 0.0;
      xnorm = imperix_ctrl_xnrm2(7 - i, A, ii + 2);
      if (xnorm != 0.0) {
        A_0 = A[ii];
        xnorm = rt_hypotd_snf(A_0, xnorm);
        if (A_0 >= 0.0) {
          xnorm = -xnorm;
        }

        if (fabs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          f = (ii - i) + 8;
          do {
            knt++;
            for (c_lastc = b_lastv; c_lastc <= f; c_lastc++) {
              A[c_lastc - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(atmp, imperix_ctrl_xnrm2(7 - i, A, ii + 2));
          if (atmp >= 0.0) {
            xnorm = -xnorm;
          }

          tau[i] = (xnorm - atmp) / xnorm;
          atmp = 1.0 / (atmp - xnorm);
          for (c_lastc = b_lastv; c_lastc <= f; c_lastc++) {
            A[c_lastc - 1] *= atmp;
          }

          for (b_lastv = 0; b_lastv < knt; b_lastv++) {
            xnorm *= 1.0020841800044864E-292;
          }

          atmp = xnorm;
        } else {
          tau[i] = (xnorm - A_0) / xnorm;
          atmp = 1.0 / (A_0 - xnorm);
          knt = (ii - i) + 8;
          for (c_lastc = b_lastv; c_lastc <= knt; c_lastc++) {
            A[c_lastc - 1] *= atmp;
          }

          atmp = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        b_lastv = 8 - i;
        c_lastc = (ii - i) + 7;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 7 - i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = (((c_lastc - 1) << 3) + ii) + 8;
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
        imperix_ctrl_xgemv(b_lastv, c_lastc, A, ii + 9, A, ii + 1, work);
        imperix_ctrl_xgerc(b_lastv, c_lastc, -tau[i], ii + 1, work, A, ii + 9);
      }

      A[ii] = atmp;
    } else {
      tau[7] = 0.0;
    }
  }

  for (i = 0; i < 8; i++) {
    for (ii = 0; ii <= i; ii++) {
      b_lastv = i << 3;
      R[ii + b_lastv] = A[b_lastv + ii];
    }

    for (ii = i + 2; ii < 9; ii++) {
      R[(ii + (i << 3)) - 1] = 0.0;
    }

    work[i] = 0.0;
  }

  for (i = 7; i >= 0; i--) {
    ii = (i << 3) + i;
    if (i + 1 < 8) {
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        b_lastv = 8 - i;
        c_lastc = (ii - i) + 7;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 7 - i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = (((c_lastc - 1) << 3) + ii) + 8;
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
        imperix_ctrl_xgemv(b_lastv, c_lastc, A, ii + 9, A, ii + 1, work);
        imperix_ctrl_xgerc(b_lastv, c_lastc, -tau[i], ii + 1, work, A, ii + 9);
      }

      c_lastc = (ii - i) + 8;
      for (b_lastv = ii + 2; b_lastv <= c_lastc; b_lastv++) {
        A[b_lastv - 1] *= -tau[i];
      }
    }

    A[ii] = 1.0 - tau[i];
    for (b_lastv = 0; b_lastv < i; b_lastv++) {
      A[(ii - b_lastv) - 1] = 0.0;
    }
  }

  i = 0;
  do {
    exitg1 = 0;
    if (i <= nA - 1) {
      if (fabs(R[(i << 3) + i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      for (ii = 0; ii < n; ii++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          xnorm = 0.0;
          for (i = 0; i < 8; i++) {
            xnorm += Linv[(ii << 3) + i] * A[(b_lastv << 3) + i];
          }

          TL[ii + (b_lastv << 3)] = xnorm;
        }
      }

      memset(&RLinv[0], 0, sizeof(real_T) << 6U);
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        i = (b_lastv - 1) << 3;
        ii = (b_lastv + i) - 1;
        RLinv[ii] = 1.0;
        for (knt = b_lastv; knt <= nA; knt++) {
          c_lastc = (((knt - 1) << 3) + b_lastv) - 1;
          RLinv[c_lastc] /= R[ii];
        }

        if (b_lastv > 1) {
          for (knt = 0; knt <= b_lastv - 2; knt++) {
            for (f = b_lastv; f <= nA; f++) {
              ii = (f - 1) << 3;
              c_lastc = ii + knt;
              RLinv[c_lastc] -= RLinv[(ii + b_lastv) - 1] * R[i + knt];
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
          i = ((c_lastc - 1) << 3) + b_lastv;
          H[i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) << 3;
            H[i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + (b_lastv << 3)) - 1] = H[i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          i = (qY << 3) + b_lastv;
          D[i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) << 3;
            D[i] += TL[ii + b_lastv] * RLinv[ii + qY];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_DropConstraint(int32_T kDrop, boolean_T iA[48], int32_T
  *nA, int32_T iC[48])
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_qpkwik(const real_T Linv[64], const real_T Hinv[64],
  const real_T f[8], const real_T Ac[384], const real_T b[48], boolean_T iA[48],
  int32_T maxiter, real_T FeasTol, real_T x[8], real_T lambda[48], int32_T
  *status)
{
  real_T D[64];
  real_T H[64];
  real_T RLinv[64];
  real_T U[64];
  real_T cTol[48];
  real_T Opt[16];
  real_T Rhs[16];
  real_T r[8];
  real_T z[8];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T t;
  int32_T iC[48];
  int32_T U_tmp;
  int32_T U_tmp_0;
  int32_T b_exponent;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exponent;
  int32_T f_i;
  int32_T i;
  int32_T k;
  int32_T kDrop;
  int32_T nA;
  int32_T tmp;
  boolean_T ColdReset;
  boolean_T DualFeasible;
  boolean_T cTolComputed;
  boolean_T exitg2;
  boolean_T exitg4;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  memset(&x[0], 0, sizeof(real_T) << 3U);
  memset(&lambda[0], 0, 48U * sizeof(real_T));
  *status = 1;
  memset(&r[0], 0, sizeof(real_T) << 3U);
  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 48; i++) {
    cTol[i] = 1.0;
    iC[i] = 0;
  }

  nA = 0;
  for (i = 0; i < 48; i++) {
    if (iA[i]) {
      nA++;
      iC[nA - 1] = i + 1;
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&Opt[0], 0, sizeof(real_T) << 4U);
    for (i = 0; i < 8; i++) {
      Rhs[i] = f[i];
      Rhs[i + 8] = 0.0;
    }

    DualFeasible = false;
    tmp = static_cast<int32_T>(rt_roundd_snf(0.3 * static_cast<real_T>(nA)));
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H, 8);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            memset(&iC[0], 0, 48U * sizeof(int32_T));
            for (i = 0; i < 48; i++) {
              iA[i] = false;
            }

            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483639) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 9;
            }

            Rhs[i - 1] = b[iC[kDrop] - 1];
            for (i = kDrop + 1; i <= nA; i++) {
              U_tmp_0 = ((kDrop << 3) + i) - 1;
              U[U_tmp_0] = 0.0;
              for (k = 0; k < nA; k++) {
                U_tmp = k << 3;
                U[U_tmp_0] += RLinv[(U_tmp + i) - 1] * RLinv[U_tmp + kDrop];
              }

              U[kDrop + ((i - 1) << 3)] = U[U_tmp_0];
            }
          }

          for (kDrop = 0; kDrop < 8; kDrop++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 8; i++) {
              Xnorm0 += H[(i << 3) + kDrop] * Rhs[i];
            }

            Opt[kDrop] = Xnorm0;
            for (k = 0; k < nA; k++) {
              if (k + 1 > 2147483639) {
                i = MAX_int32_T;
              } else {
                i = k + 9;
              }

              Opt[kDrop] += D[(k << 3) + kDrop] * Rhs[i - 1];
            }
          }

          for (k = 0; k < nA; k++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 8; i++) {
              Xnorm0 += D[(k << 3) + i] * Rhs[i];
            }

            if (k + 1 > 2147483639) {
              i = MAX_int32_T;
            } else {
              i = k + 9;
            }

            Opt[i - 1] = Xnorm0;
            if (k + 1 > 2147483639) {
              i = MAX_int32_T;
              kDrop = MAX_int32_T;
            } else {
              i = k + 9;
              kDrop = k + 9;
            }

            for (U_tmp_0 = 0; U_tmp_0 < nA; U_tmp_0++) {
              if (U_tmp_0 + 1 > 2147483639) {
                U_tmp = MAX_int32_T;
              } else {
                U_tmp = U_tmp_0 + 9;
              }

              Opt[i - 1] = U[(U_tmp_0 << 3) + k] * Rhs[U_tmp - 1] + Opt[kDrop -
                1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (k = 0; k < nA; k++) {
            if (k + 1 > 2147483639) {
              i = MAX_int32_T;
            } else {
              i = k + 9;
            }

            lambda[iC[k] - 1] = Opt[i - 1];
            if (k + 1 > 2147483639) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              f_i = k + 9;
            }

            if ((Opt[f_i - 1] < Xnorm0) && (k + 1 <= nA)) {
              kDrop = k;
              if (k + 1 > 2147483639) {
                i = MAX_int32_T;
              } else {
                i = k + 9;
              }

              Xnorm0 = Opt[i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            memcpy(&x[0], &Opt[0], sizeof(real_T) << 3U);
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
              memset(&iC[0], 0, 48U * sizeof(int32_T));
              for (i = 0; i < 48; i++) {
                iA[i] = false;
              }

              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_ctrl_DropConstraint(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&lambda[0], 0, 48U * sizeof(real_T));
          for (tmp = 0; tmp < 8; tmp++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 8; i++) {
              Xnorm0 += -Hinv[(i << 3) + tmp] * f[i];
            }

            x[tmp] = Xnorm0;
          }
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    for (tmp = 0; tmp < 8; tmp++) {
      Xnorm0 = 0.0;
      for (i = 0; i < 8; i++) {
        Xnorm0 += -Hinv[(i << 3) + tmp] * f[i];
      }

      x[tmp] = Xnorm0;
    }

    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_ctrl_norm(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      tmp = -1;
      for (f_i = 0; f_i < 48; f_i++) {
        if (!cTolComputed) {
          for (i = 0; i < 8; i++) {
            z[i] = fabs(Ac[48 * i + f_i] * x[i]);
          }

          cVal = imperix_ctrl_maximum(z);
          if ((cTol[f_i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[f_i] = cVal;
          }
        }

        if (!iA[f_i]) {
          cVal = 0.0;
          for (i = 0; i < 8; i++) {
            cVal += Ac[48 * i + f_i] * x[i];
          }

          cVal = (cVal - b[f_i]) / cTol[f_i];
          if (cVal < cMin) {
            cMin = cVal;
            tmp = f_i;
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
              memset(&z[0], 0, sizeof(real_T) << 3U);
              for (i = 0; i < 8; i++) {
                cMin = Ac[48 * i + tmp];
                for (kDrop = 0; kDrop < 8; kDrop++) {
                  z[kDrop] += Hinv[(i << 3) + kDrop] * cMin;
                }
              }

              guard3 = true;
            } else {
              cMin = imperix_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H, 8);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                for (i = 0; i < 64; i++) {
                  U[i] = -H[i];
                }

                memset(&z[0], 0, sizeof(real_T) << 3U);
                for (i = 0; i < 8; i++) {
                  cMin = Ac[48 * i + tmp];
                  for (kDrop = 0; kDrop < 8; kDrop++) {
                    z[kDrop] += U[(i << 3) + kDrop] * cMin;
                  }
                }

                for (f_i = 0; f_i < nA; f_i++) {
                  cVal = 0.0;
                  for (i = 0; i < 8; i++) {
                    cVal += Ac[48 * i + tmp] * D[(f_i << 3) + i];
                  }

                  r[f_i] = cVal;
                }

                guard3 = true;
              }
            }

            if (guard3) {
              kDrop = 0;
              cMin = 0.0;
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
                  cVal = r[i];
                  if (cVal > 1.0E-12) {
                    cVal = lambda[iC[i] - 1] / cVal;
                    if ((kDrop == 0) || (cVal < rMin)) {
                      rMin = cVal;
                      kDrop = i + 1;
                    }
                  }
                }

                if (kDrop > 0) {
                  cMin = rMin;
                  DualFeasible = false;
                }
              }

              t = 0.0;
              for (i = 0; i < 8; i++) {
                t += Ac[48 * i + tmp] * z[i];
              }

              if (t <= 0.0) {
                cVal = 0.0;
                ColdReset = true;
              } else {
                cVal = 0.0;
                for (i = 0; i < 8; i++) {
                  cVal += Ac[48 * i + tmp] * x[i];
                }

                cVal = (b[tmp] - cVal) / t;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                *status = -1;
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  t = cMin;
                } else if (DualFeasible) {
                  t = cVal;
                } else if (cMin < cVal) {
                  t = cMin;
                } else {
                  t = cVal;
                }

                for (i = 0; i < nA; i++) {
                  f_i = iC[i];
                  lambda[f_i - 1] -= t * r[i];
                  if ((f_i <= 48) && (lambda[f_i - 1] < 0.0)) {
                    lambda[f_i - 1] = 0.0;
                  }
                }

                lambda[tmp] += t;
                frexp(1.0, &exponent);
                if (fabs(t - cMin) < 2.2204460492503131E-16) {
                  imperix_ctrl_DropConstraint(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  for (i = 0; i < 8; i++) {
                    x[i] += t * z[i];
                  }

                  frexp(1.0, &b_exponent);
                  if (fabs(t - cVal) < 2.2204460492503131E-16) {
                    if (nA == 8) {
                      *status = -1;
                      exitg1 = 1;
                    } else {
                      if (nA > 2147483646) {
                        nA = MAX_int32_T;
                      } else {
                        nA++;
                      }

                      iC[nA - 1] = tmp + 1;
                      f_i = nA - 1;
                      exitg4 = false;
                      while ((!exitg4) && (f_i + 1 > 1)) {
                        i = iC[f_i - 1];
                        if (iC[f_i] > i) {
                          exitg4 = true;
                        } else {
                          kDrop = iC[f_i];
                          iC[f_i] = i;
                          iC[f_i - 1] = kDrop;
                          f_i--;
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
            cMin = imperix_ctrl_norm(x);
            if (fabs(cMin - Xnorm0) > 0.001) {
              Xnorm0 = cMin;
              for (i = 0; i < 48; i++) {
                cMin = fabs(b[i]);
                if (cMin >= 1.0) {
                  cTol[i] = cMin;
                } else {
                  cTol[i] = 1.0;
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_mpcActiveSetSolver(const real_T H[64], const real_T f[8],
  const real_T A[384], const real_T b[48], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[8],
  int32_T *exitflag, boolean_T iA[48])
{
  real_T A_0[384];
  real_T Linv[64];
  real_T b_A[64];
  real_T b_0[48];
  real_T lam[48];
  real_T b_c;
  real_T ssq;
  int32_T b_A_tmp;
  int32_T b_c_tmp;
  int32_T b_k;
  int32_T c_j;
  int32_T ia;
  int32_T iac;
  int32_T idxAjj;
  int32_T jmax;
  static const int8_T B[64] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  boolean_T exitg1;
  if (options_UseHessianAsInput) {
    memcpy(&b_A[0], &H[0], sizeof(real_T) << 6U);
    jmax = 0;
    c_j = 0;
    exitg1 = false;
    while ((!exitg1) && (c_j < 8)) {
      idxAjj = (c_j << 3) + c_j;
      ssq = 0.0;
      if (c_j >= 1) {
        for (b_k = 0; b_k < c_j; b_k++) {
          b_c = b_A[(b_k << 3) + c_j];
          ssq += b_c * b_c;
        }
      }

      ssq = b_A[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        b_A[idxAjj] = ssq;
        if (c_j + 1 < 8) {
          if (c_j != 0) {
            b_k = (((c_j - 1) << 3) + c_j) + 2;
            for (iac = c_j + 2; iac <= b_k; iac += 8) {
              b_c_tmp = iac - c_j;
              b_c = -b_A[(((b_c_tmp - 2) >> 3) << 3) + c_j];
              b_c_tmp += 6;
              for (ia = iac; ia <= b_c_tmp; ia++) {
                b_A_tmp = ((idxAjj + ia) - iac) + 1;
                b_A[b_A_tmp] += b_A[ia - 1] * b_c;
              }
            }
          }

          ssq = 1.0 / ssq;
          b_k = (idxAjj - c_j) + 8;
          for (iac = idxAjj + 2; iac <= b_k; iac++) {
            b_A[iac - 1] *= ssq;
          }
        }

        c_j++;
      } else {
        b_A[idxAjj] = ssq;
        jmax = c_j + 1;
        exitg1 = true;
      }
    }

    if (jmax == 0) {
      jmax = 9;
    }

    for (c_j = 2; c_j < jmax; c_j++) {
      for (idxAjj = 0; idxAjj <= c_j - 2; idxAjj++) {
        b_A[idxAjj + ((c_j - 1) << 3)] = 0.0;
      }
    }

    for (jmax = 0; jmax < 64; jmax++) {
      Linv[jmax] = B[jmax];
    }

    imperix_ctrl_trisolve(b_A, Linv);
  } else {
    memcpy(&Linv[0], &H[0], sizeof(real_T) << 6U);
  }

  for (idxAjj = 0; idxAjj < 48; idxAjj++) {
    iA[idxAjj] = false;
  }

  for (jmax = 0; jmax < 8; jmax++) {
    for (c_j = 0; c_j < 8; c_j++) {
      ssq = 0.0;
      for (idxAjj = 0; idxAjj < 8; idxAjj++) {
        ssq += Linv[(c_j << 3) + idxAjj] * Linv[(jmax << 3) + idxAjj];
      }

      b_A[c_j + (jmax << 3)] = ssq;
    }
  }

  for (jmax = 0; jmax < 384; jmax++) {
    A_0[jmax] = -A[jmax];
  }

  for (jmax = 0; jmax < 48; jmax++) {
    b_0[jmax] = -b[jmax];
  }

  imperix_ctrl_qpkwik(Linv, b_A, f, A_0, b_0, iA, options_MaxIterations,
                      options_ConstraintTolerance, x, lam, exitflag);
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_KWIKfactor_b(const real_T Ac[32], const int32_T iC[8],
  int32_T nA, const real_T Linv[16], real_T RLinv[16], real_T D[16], real_T H[16],
  int32_T n)
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
      tmp = Ac[((k_i << 3) + b_lastv) - 1];
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
      xnorm = imperix_ctrl_xnrm2_p(3 - k_i, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_ctrl_xnrm2_p(3 - k_i, A, ii + 2));
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
        imperix_ctrl_xgemv_k(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_ctrl_xgerc_a(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
                             5);
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
        imperix_ctrl_xgemv_k(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_ctrl_xgerc_a(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
                             5);
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_DropConstraint_j(int32_T kDrop, boolean_T iA[8],
  int32_T *nA, int32_T iC[8])
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_qpkwik_j(const real_T Linv[16], const real_T Hinv[16],
  const real_T f[4], const real_T Ac[32], const real_T b[8], boolean_T iA[8],
  int32_T maxiter, real_T FeasTol, real_T x[4], real_T lambda[8], int32_T
  *status)
{
  real_T D[16];
  real_T H[16];
  real_T RLinv[16];
  real_T U[16];
  real_T Opt[8];
  real_T Rhs[8];
  real_T cTol[8];
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
  int32_T iC[8];
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
  x[2] = 0.0;
  x[3] = 0.0;
  *status = 1;
  r[0] = 0.0;
  r[1] = 0.0;
  r[2] = 0.0;
  r[3] = 0.0;
  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 8; i++) {
    lambda[i] = 0.0;
    cTol[i] = 1.0;
    iC[i] = 0;
  }

  nA = 0;
  for (i = 0; i < 8; i++) {
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
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_ctrl_KWIKfactor_b(Ac, iC, nA, Linv, RLinv, D, H, 4);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            for (i = 0; i < 8; i++) {
              iA[i] = false;
              iC[i] = 0;
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
              for (iSave = 0; iSave < nA; iSave++) {
                U_tmp = iSave << 2;
                U[U_tmp_0] += RLinv[(U_tmp + i) - 1] * RLinv[U_tmp + kDrop];
              }

              U[kDrop + ((i - 1) << 2)] = U[U_tmp_0];
            }
          }

          for (kDrop = 0; kDrop < 4; kDrop++) {
            Opt[kDrop] = ((H[kDrop + 4] * Rhs[1] + H[kDrop] * Rhs[0]) + H[kDrop
                          + 8] * Rhs[2]) + H[kDrop + 12] * Rhs[3];
            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483643) {
                i = MAX_int32_T;
              } else {
                i = iSave + 5;
              }

              Opt[kDrop] += D[(iSave << 2) + kDrop] * Rhs[i - 1];
            }
          }

          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483643) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 5;
            }

            iSave = kDrop << 2;
            Opt[i - 1] = ((D[iSave + 1] * Rhs[1] + D[iSave] * Rhs[0]) + D[iSave
                          + 2] * Rhs[2]) + D[iSave + 3] * Rhs[3];
            if (kDrop + 1 > 2147483643) {
              i = MAX_int32_T;
              U_tmp_0 = MAX_int32_T;
            } else {
              i = kDrop + 5;
              U_tmp_0 = kDrop + 5;
            }

            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483643) {
                U_tmp = MAX_int32_T;
              } else {
                U_tmp = iSave + 5;
              }

              Opt[i - 1] = U[(iSave << 2) + kDrop] * Rhs[U_tmp - 1] +
                Opt[U_tmp_0 - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (iSave = 0; iSave < nA; iSave++) {
            if (iSave + 1 > 2147483643) {
              i = MAX_int32_T;
            } else {
              i = iSave + 5;
            }

            lambda[iC[iSave] - 1] = Opt[i - 1];
            if (iSave + 1 > 2147483643) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              kNext = iSave + 5;
            }

            if ((Opt[kNext - 1] < Xnorm0) && (iSave + 1 <= nA)) {
              kDrop = iSave;
              if (iSave + 1 > 2147483643) {
                i = MAX_int32_T;
              } else {
                i = iSave + 5;
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

            if (*status > 5) {
              nA = 0;
              for (i = 0; i < 8; i++) {
                iA[i] = false;
                iC[i] = 0;
              }

              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_ctrl_DropConstraint_j(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&lambda[0], 0, sizeof(real_T) << 3U);
          Xnorm0 = f[1];
          cMin = f[0];
          cVal = f[2];
          z_idx_2 = f[3];
          for (i = 0; i < 4; i++) {
            x[i] = ((-Hinv[i + 4] * Xnorm0 + -Hinv[i] * cMin) + -Hinv[i + 8] *
                    cVal) + -Hinv[i + 12] * z_idx_2;
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
    for (i = 0; i < 4; i++) {
      x[i] = ((-Hinv[i + 4] * Xnorm0 + -Hinv[i] * cMin) + -Hinv[i + 8] * cVal) +
        -Hinv[i + 12] * z_idx_2;
    }

    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_ctrl_norm_c(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      kNext = -1;
      for (i = 0; i < 8; i++) {
        if (!cTolComputed) {
          varargin_1[0] = fabs(Ac[i] * x[0]);
          varargin_1[1] = fabs(Ac[i + 8] * x[1]);
          varargin_1[2] = fabs(Ac[i + 16] * x[2]);
          varargin_1[3] = fabs(Ac[i + 24] * x[3]);
          cVal = imperix_ctrl_maximum_e(varargin_1);
          if ((cTol[i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[i] = cVal;
          }
        }

        if (!iA[i]) {
          cVal = ((((Ac[i + 8] * x[1] + Ac[i] * x[0]) + Ac[i + 16] * x[2]) +
                   Ac[i + 24] * x[3]) - b[i]) / cTol[i];
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
              cMin = 0.0;
              cVal = 0.0;
              z_idx_2 = 0.0;
              z_idx_3 = 0.0;
              for (i = 0; i < 4; i++) {
                t1 = Ac[(i << 3) + kNext];
                kDrop = i << 2;
                cMin += Hinv[kDrop] * t1;
                cVal += Hinv[kDrop + 1] * t1;
                z_idx_2 += Hinv[kDrop + 2] * t1;
                z_idx_3 += Hinv[kDrop + 3] * t1;
              }

              guard3 = true;
            } else {
              cMin = imperix_ctrl_KWIKfactor_b(Ac, iC, nA, Linv, RLinv, D, H, 4);
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
                  t1 = Ac[(i << 3) + kNext];
                  kDrop = i << 2;
                  cMin += U[kDrop] * t1;
                  cVal += U[kDrop + 1] * t1;
                  z_idx_2 += U[kDrop + 2] * t1;
                  z_idx_3 += U[kDrop + 3] * t1;
                }

                for (i = 0; i < nA; i++) {
                  kDrop = i << 2;
                  r[i] = ((D[kDrop + 1] * Ac[kNext + 8] + D[kDrop] * Ac[kNext])
                          + D[kDrop + 2] * Ac[kNext + 16]) + D[kDrop + 3] *
                    Ac[kNext + 24];
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

              rVal = Ac[kNext + 8];
              t = Ac[kNext + 16];
              z_tmp = Ac[kNext + 24];
              z = ((rVal * cVal + cMin * Ac[kNext]) + t * z_idx_2) + z_tmp *
                z_idx_3;
              if (z <= 0.0) {
                rVal = 0.0;
                ColdReset = true;
              } else {
                rVal = (b[kNext] - (((rVal * x[1] + Ac[kNext] * x[0]) + t * x[2])
                                    + z_tmp * x[3])) / z;
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
                  if ((iSave <= 8) && (lambda[iSave - 1] < 0.0)) {
                    lambda[iSave - 1] = 0.0;
                  }
                }

                lambda[kNext] += t;
                frexp(1.0, &exponent);
                if (fabs(t - t1) < 2.2204460492503131E-16) {
                  imperix_ctrl_DropConstraint_j(kDrop, iA, &nA, iC);
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
            cMin = imperix_ctrl_norm_c(x);
            if (fabs(cMin - Xnorm0) > 0.001) {
              Xnorm0 = cMin;
              for (i = 0; i < 8; i++) {
                cMin = fabs(b[i]);
                if (cMin >= 1.0) {
                  cTol[i] = cMin;
                } else {
                  cTol[i] = 1.0;
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ct_mpcActiveSetSolver_k(const real_T H[16], const real_T f[4],
  const real_T A[32], const real_T b[8], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[4],
  int32_T *exitflag, boolean_T iA[8])
{
  real_T A_0[32];
  real_T Linv[16];
  real_T b_A[16];
  real_T b_0[8];
  real_T lam[8];
  real_T b_c;
  real_T ssq;
  int32_T b_A_tmp;
  int32_T b_c_tmp;
  int32_T b_k;
  int32_T c_j;
  int32_T ia;
  int32_T iac;
  int32_T idxAjj;
  int32_T jmax;
  static const int8_T B[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  boolean_T exitg1;
  if (options_UseHessianAsInput) {
    memcpy(&b_A[0], &H[0], sizeof(real_T) << 4U);
    jmax = 0;
    c_j = 0;
    exitg1 = false;
    while ((!exitg1) && (c_j < 4)) {
      idxAjj = (c_j << 2) + c_j;
      ssq = 0.0;
      if (c_j >= 1) {
        for (b_k = 0; b_k < c_j; b_k++) {
          b_c = b_A[(b_k << 2) + c_j];
          ssq += b_c * b_c;
        }
      }

      ssq = b_A[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        b_A[idxAjj] = ssq;
        if (c_j + 1 < 4) {
          if (c_j != 0) {
            b_k = (((c_j - 1) << 2) + c_j) + 2;
            for (iac = c_j + 2; iac <= b_k; iac += 4) {
              b_c_tmp = iac - c_j;
              b_c = -b_A[(((b_c_tmp - 2) >> 2) << 2) + c_j];
              b_c_tmp += 2;
              for (ia = iac; ia <= b_c_tmp; ia++) {
                b_A_tmp = ((idxAjj + ia) - iac) + 1;
                b_A[b_A_tmp] += b_A[ia - 1] * b_c;
              }
            }
          }

          ssq = 1.0 / ssq;
          b_k = (idxAjj - c_j) + 4;
          for (iac = idxAjj + 2; iac <= b_k; iac++) {
            b_A[iac - 1] *= ssq;
          }
        }

        c_j++;
      } else {
        b_A[idxAjj] = ssq;
        jmax = c_j + 1;
        exitg1 = true;
      }
    }

    if (jmax == 0) {
      jmax = 5;
    }

    for (c_j = 2; c_j < jmax; c_j++) {
      for (idxAjj = 0; idxAjj <= c_j - 2; idxAjj++) {
        b_A[idxAjj + ((c_j - 1) << 2)] = 0.0;
      }
    }

    for (c_j = 0; c_j < 4; c_j++) {
      jmax = c_j << 2;
      Linv[jmax] = B[jmax];
      Linv[jmax + 1] = B[jmax + 1];
      Linv[jmax + 2] = B[jmax + 2];
      Linv[jmax + 3] = B[jmax + 3];
    }

    imperix_ctrl_trisolve_n(b_A, Linv);
  } else {
    memcpy(&Linv[0], &H[0], sizeof(real_T) << 4U);
  }

  for (idxAjj = 0; idxAjj < 8; idxAjj++) {
    iA[idxAjj] = false;
  }

  for (c_j = 0; c_j < 4; c_j++) {
    for (idxAjj = 0; idxAjj < 4; idxAjj++) {
      jmax = idxAjj << 2;
      b_k = c_j << 2;
      b_A[idxAjj + b_k] = ((Linv[jmax + 1] * Linv[b_k + 1] + Linv[jmax] *
                            Linv[b_k]) + Linv[jmax + 2] * Linv[b_k + 2]) +
        Linv[jmax + 3] * Linv[b_k + 3];
    }
  }

  for (c_j = 0; c_j < 32; c_j++) {
    A_0[c_j] = -A[c_j];
  }

  for (c_j = 0; c_j < 8; c_j++) {
    b_0[c_j] = -b[c_j];
  }

  imperix_ctrl_qpkwik_j(Linv, b_A, f, A_0, b_0, iA, options_MaxIterations,
                        options_ConstraintTolerance, x, lam, exitflag);
}

static void imperix_ctrl_SystemCore_setup_m(dsp_simulink_MovingAverage_im_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S98>/Moving Average'
  obj->NumChannels = 1;
  obj->FrameLength = 1;
  obj->pCumSum = 0.0;
  memset(&obj->pCumSumRev[0], 0, 99U * sizeof(real_T));
  obj->pCumRevIndex = 1.0;
  obj->pModValueRev = 0.0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

// Model step function for TID0
void imperix_ctrl_step0(void)          // Sample time: [0.000166667s, 0.0s]
{
  real_T varargin_1[200];
  real_T tmp_3[96];
  real_T bc_1[24];
  real_T lam[24];
  real_T A[16];
  real_T M[16];
  real_T tmp_0[16];
  real_T bc[12];
  real_T bc_0[12];
  real_T lb[12];
  real_T M_0[8];
  real_T b_a[8];
  real_T DataTypeConversion1[6];
  real_T DataTypeConversion2[6];
  real_T rtb_Gain[6];
  real_T rtb_Gain1_e[6];
  real_T rtb_Gain7[6];
  real_T rtb_Sum1[6];
  real_T rtb_Sum1_m[6];
  real_T rtb_VectorConcatenate2[6];
  real_T rtb_Gain1_o[5];
  real_T rtb_TmpSignalConversionAtGain2I[5];
  real_T u_ref[4];
  real_T xt_est[4];
  real_T xt_est_0[4];
  real_T rtb_Gain1_f[3];
  real_T tmp_1[3];
  real_T rtb_Switch_h[2];
  real_T rtb_ie_sat[2];
  real_T tmp_2[2];
  real_T D;
  real_T a;
  real_T c;
  real_T csum;
  real_T cumRevIndex;
  real_T idx_2;
  real_T ie_idx_0;
  real_T rtb_DeadZone;
  real_T rtb_F;
  real_T rtb_Fr_idx_0;
  real_T rtb_Fr_idx_1;
  real_T rtb_Gain3;
  real_T rtb_Gain4_idx_0;
  real_T rtb_Gain4_idx_1;
  real_T rtb_IntegralGain_n;
  real_T rtb_Integrator_fi;
  real_T rtb_Saturation;
  real_T rtb_Saturation_c;
  real_T rtb_Saturation_d5;
  real_T rtb_Saturation_i;
  real_T rtb_Saturation_n;
  real_T rtb_Sum6;
  real_T rtb_Sum8;
  real_T rtb_Sum_ak;
  real_T rtb_Sum_h;
  real_T rtb_Sum_j;
  real_T rtb_Sum_m;
  real_T rtb_Switch;
  real_T rtb_Switch1;
  real_T rtb_Switch_am;
  real_T rtb_Switch_g_idx_0;
  real_T rtb_Switch_g_idx_1;
  real_T rtb_Te;
  real_T rtb_im_idx_0;
  real_T rtb_im_idx_1;
  real_T rtb_w;
  real_T ssq;
  real_T tmp_7;
  real_T z;
  int32_T A_tmp;
  int32_T b_a_tmp;
  int32_T c_tmp;
  int32_T e;
  int32_T i;
  int32_T iindx;
  int32_T jmax;
  int32_T k;
  real32_T rtb_Product2[3];
  real32_T rtb_Bias1;
  real32_T tmp_4;
  real32_T tmp_5;
  real32_T tmp_6;
  int8_T tmp_8;
  int8_T tmp_9;
  uint8_T rtb_Compare;
  boolean_T iA1_0[24];
  boolean_T iA1[12];
  boolean_T d_x[2];
  boolean_T tmp;
  boolean_T y;
  static const int8_T B[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  boolean_T exitg1;

  // Update the flag to indicate when data transfers from
  //   Sample time: [0.00016666666666666666s, 0.0s] to Sample time: [0.0016666666666666668s, 0.0s]  
  (imperix_ctrl_M->Timing.RateInteraction.TID0_1)++;
  if ((imperix_ctrl_M->Timing.RateInteraction.TID0_1) > 9) {
    imperix_ctrl_M->Timing.RateInteraction.TID0_1 = 0;
  }

  // S-Function (TUNABLE_PARAM): '<S150>/S-Function'
  imperix_ctrl_B.SFunction = V_mag;

  // Bias: '<S18>/Bias1' incorporates:
  //   Gain: '<S18>/Gain23'

  rtb_Bias1 = imperix_ctrl_P.Gain23_Gain * imperix_ctrl_B.SFunction +
    imperix_ctrl_P.Bias1_Bias;

  // Product: '<S18>/Product2' incorporates:
  //   DiscreteIntegrator: '<S18>/Discrete-Time Integrator1'
  //   Fcn: '<S18>/Fcn3'
  //   Fcn: '<S18>/Fcn4'
  //   Fcn: '<S18>/Fcn5'

  rtb_Product2[0] = rtb_Bias1 * static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE)));
  rtb_Product2[1] = static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE - 2.09439516F))) * rtb_Bias1;
  rtb_Product2[2] = static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE + 2.09439516F))) * rtb_Bias1;

  // Sum: '<S18>/Sum1' incorporates:
  //   Constant: '<S18>/Constant3'

  rtb_VectorConcatenate2[0] = imperix_ctrl_P.Constant3_Value - rtb_Product2[0];

  // Sum: '<S18>/Sum2' incorporates:
  //   Constant: '<S18>/Constant3'
  //   Sum: '<S18>/Sum1'

  rtb_VectorConcatenate2[3] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[0];

  // Sum: '<S18>/Sum1' incorporates:
  //   Constant: '<S18>/Constant3'

  rtb_VectorConcatenate2[1] = imperix_ctrl_P.Constant3_Value - rtb_Product2[1];

  // Sum: '<S18>/Sum2' incorporates:
  //   Constant: '<S18>/Constant3'
  //   Sum: '<S18>/Sum1'

  rtb_VectorConcatenate2[4] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[1];

  // Sum: '<S18>/Sum1' incorporates:
  //   Constant: '<S18>/Constant3'

  rtb_VectorConcatenate2[2] = imperix_ctrl_P.Constant3_Value - rtb_Product2[2];

  // Sum: '<S18>/Sum2' incorporates:
  //   Constant: '<S18>/Constant3'
  //   Sum: '<S18>/Sum1'

  rtb_VectorConcatenate2[5] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[2];

  // S-Function (ADC): '<S109>/ADC'
  imperix_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_1_2) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S127>/ADC'
  imperix_ctrl_B.ADC_g = (float)(*ix_raw_adc_ptr_0_2) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S131>/ADC'
  imperix_ctrl_B.ADC_o = (float)(*ix_raw_adc_ptr_7_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S113>/ADC'
  imperix_ctrl_B.ADC_h = (float)(*ix_raw_adc_ptr_6_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S133>/ADC'
  imperix_ctrl_B.ADC_h0 = (float)(*ix_raw_adc_ptr_5_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S135>/ADC'
  imperix_ctrl_B.ADC_m = (float)(*ix_raw_adc_ptr_4_0) * 0.021362F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion1'
  DataTypeConversion1[0] = imperix_ctrl_B.ADC;
  DataTypeConversion1[1] = imperix_ctrl_B.ADC_g;
  DataTypeConversion1[2] = imperix_ctrl_B.ADC_o;
  DataTypeConversion1[3] = imperix_ctrl_B.ADC_h;
  DataTypeConversion1[4] = imperix_ctrl_B.ADC_h0;
  DataTypeConversion1[5] = imperix_ctrl_B.ADC_m;

  // MATLAB Function: '<S1>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation index': '<S31>:1'
  // '<S31>:1:4'
  rtb_VectorConcatenate2[3] = -rtb_VectorConcatenate2[3];
  rtb_VectorConcatenate2[4] = -rtb_VectorConcatenate2[4];
  rtb_VectorConcatenate2[5] = -rtb_VectorConcatenate2[5];

  // '<S31>:1:10'
  for (k = 0; k < 6; k++) {
    // Sum: '<S81>/Sum1' incorporates:
    //   SignalConversion generated from: '<S436>/In'

    rtb_Gain4_idx_0 = DataTypeConversion1[k] - imperix_ctrl_B.In_c[k];
    rtb_Sum1[k] = rtb_Gain4_idx_0;

    // MATLAB Function: '<S1>/Modulation index'
    c = rtb_VectorConcatenate2[k] / rtb_Gain4_idx_0;
    if (!(c >= 0.0)) {
      c = 0.0;
    }

    if (!(c <= 1.0)) {
      c = 1.0;
    }

    rtb_VectorConcatenate2[k] = c;

    // Gain: '<S1>/Gain24' incorporates:
    //   Sum: '<S82>/Sum1'

    rtb_Sum1_m[k] = imperix_ctrl_P.Gain24_Gain * c;
  }

  // DataTypeConversion: '<S157>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>(rtb_Sum1_m[3]);

  // S-Function (DAC): '<S157>/DAC'
  Dac_SetVoltage(3, imperix_ctrl_B.DataTypeConversion1_e, 1);

  // DataTypeConversion: '<S159>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>(rtb_Sum1_m[4]);

  // S-Function (DAC): '<S159>/DAC'
  Dac_SetVoltage(0, imperix_ctrl_B.DataTypeConversion1_m, 0);

  // DataTypeConversion: '<S161>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>(rtb_Sum1_m[5]);

  // S-Function (DAC): '<S161>/DAC'
  Dac_SetVoltage(1, imperix_ctrl_B.DataTypeConversion1_o, 0);

  // DataTypeConversion: '<S163>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_j = static_cast<real32_T>(rtb_Sum1_m[0]);

  // S-Function (DAC): '<S163>/DAC'
  Dac_SetVoltage(0, imperix_ctrl_B.DataTypeConversion1_j, 1);

  // DataTypeConversion: '<S165>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_mq = static_cast<real32_T>(rtb_Sum1_m[1]);

  // S-Function (DAC): '<S165>/DAC'
  Dac_SetVoltage(1, imperix_ctrl_B.DataTypeConversion1_mq, 1);

  // DataTypeConversion: '<S167>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>(rtb_Sum1_m[2]);

  // S-Function (DAC): '<S167>/DAC'
  Dac_SetVoltage(2, imperix_ctrl_B.DataTypeConversion1_l, 1);

  // S-Function (ADC): '<S123>/ADC'
  imperix_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_7_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S125>/ADC'
  imperix_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_6_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S115>/ADC'
  imperix_ctrl_B.ADC_i = (float)(*ix_raw_adc_ptr_5_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S129>/ADC'
  imperix_ctrl_B.ADC_d = (float)(*ix_raw_adc_ptr_4_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S117>/ADC'
  imperix_ctrl_B.ADC_ib = (float)(*ix_raw_adc_ptr_3_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S119>/ADC'
  imperix_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_2_2) * 0.00030518F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion2'
  DataTypeConversion2[0] = imperix_ctrl_B.ADC_f;
  DataTypeConversion2[1] = imperix_ctrl_B.ADC_e;
  DataTypeConversion2[2] = imperix_ctrl_B.ADC_i;
  DataTypeConversion2[3] = imperix_ctrl_B.ADC_d;
  DataTypeConversion2[4] = imperix_ctrl_B.ADC_ib;
  DataTypeConversion2[5] = imperix_ctrl_B.ADC_p;

  // Gain: '<S1>/Gain'
  c = 1.0 / imperix_ctrl_P.M2C.is_max;
  for (i = 0; i < 6; i++) {
    // Sum: '<S82>/Sum1' incorporates:
    //   SignalConversion generated from: '<S437>/In'

    csum = DataTypeConversion2[i] - imperix_ctrl_B.In_h[i];
    rtb_Sum1_m[i] = csum;

    // Gain: '<S1>/Gain' incorporates:
    //   Sum: '<S82>/Sum1'

    rtb_Gain[i] = c * csum;
  }

  // DataTypeConversion: '<S229>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion = static_cast<real32_T>(rtb_Gain[0]);

  // S-Function (PROBE): '<S229>/S-Function'
  is1 = imperix_ctrl_B.DataTypeConversion;

  // DataTypeConversion: '<S231>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_h = static_cast<real32_T>(rtb_Gain[1]);

  // S-Function (PROBE): '<S231>/S-Function'
  is2 = imperix_ctrl_B.DataTypeConversion_h;

  // Gain: '<S1>/Gain1' incorporates:
  //   Sum: '<S81>/Sum1'

  c = 1.0 / imperix_ctrl_P.M2C.Vc_ref;
  for (i = 0; i < 6; i++) {
    rtb_Gain1_e[i] = c * rtb_Sum1[i];
  }

  // End of Gain: '<S1>/Gain1'

  // DataTypeConversion: '<S233>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(rtb_Gain1_e[4]);

  // S-Function (PROBE): '<S233>/S-Function'
  Vc5 = imperix_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S235>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_k = static_cast<real32_T>(rtb_Gain1_e[5]);

  // S-Function (PROBE): '<S235>/S-Function'
  Vc6 = imperix_ctrl_B.DataTypeConversion_k;

  // S-Function (ADC): '<S121>/ADC'
  imperix_ctrl_B.ADC_gs = (float)(*ix_raw_adc_ptr_3_0) * 0.0047937F + 0.0F;

  // MATLABSystem: '<S98>/Moving Average' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  if (imperix_ctrl_DW.obj.TunablePropsChanged) {
    imperix_ctrl_DW.obj.TunablePropsChanged = false;
  }

  z = 0.0;
  c = 0.0;
  csum = imperix_ctrl_DW.obj.pCumSum + imperix_ctrl_B.ADC_gs;
  if (imperix_ctrl_DW.obj.pModValueRev == 0.0) {
    z = imperix_ctrl_DW.obj.pCumSumRev[static_cast<int32_T>
      (imperix_ctrl_DW.obj.pCumRevIndex) - 1] + csum;
  }

  imperix_ctrl_DW.obj.pCumSumRev[static_cast<int32_T>
    (imperix_ctrl_DW.obj.pCumRevIndex) - 1] = imperix_ctrl_B.ADC_gs;
  if (imperix_ctrl_DW.obj.pCumRevIndex != 99.0) {
    cumRevIndex = imperix_ctrl_DW.obj.pCumRevIndex + 1.0;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (k = 97; k >= 0; k--) {
      imperix_ctrl_DW.obj.pCumSumRev[k] += imperix_ctrl_DW.obj.pCumSumRev[k + 1];
    }
  }

  if (imperix_ctrl_DW.obj.pModValueRev == 0.0) {
    c = z / 100.0;
  }

  imperix_ctrl_DW.obj.pCumSum = csum;
  imperix_ctrl_DW.obj.pCumRevIndex = cumRevIndex;
  if (imperix_ctrl_DW.obj.pModValueRev > 0.0) {
    imperix_ctrl_DW.obj.pModValueRev--;
  } else {
    imperix_ctrl_DW.obj.pModValueRev = 0.0;
  }

  // S-Function (TUNABLE_PARAM): '<S683>/S-Function'
  imperix_ctrl_B.SFunction_d = reset_mean;

  // Outputs for Triggered SubSystem: '<S98>/Sample and Hold' incorporates:
  //   TriggerPort: '<S667>/Trigger'

  // DataTypeConversion: '<S1>/Cast To Double4'
  if ((imperix_ctrl_B.SFunction_d != 0.0F) &&
      (imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE != POS_ZCSIG)) {
    // SignalConversion generated from: '<S667>/In' incorporates:
    //   MATLABSystem: '<S98>/Moving Average'

    imperix_ctrl_B.In = c;
  }

  imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE = (imperix_ctrl_B.SFunction_d !=
    0.0F);

  // End of DataTypeConversion: '<S1>/Cast To Double4'
  // End of Outputs for SubSystem: '<S98>/Sample and Hold'

  // Sum: '<S98>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  z = imperix_ctrl_B.ADC_gs - imperix_ctrl_B.In;

  // DataTypeConversion: '<S237>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain8'

  imperix_ctrl_B.DataTypeConversion_a = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.wN * z);

  // S-Function (PROBE): '<S237>/S-Function'
  wm = imperix_ctrl_B.DataTypeConversion_a;

  // Gain: '<S86>/Gain1'
  for (i = 0; i < 5; i++) {
    rtb_Gain1_o[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    c = rtb_Sum1_m[i];
    for (k = 0; k < 5; k++) {
      rtb_Gain1_o[k] += imperix_ctrl_P.M2C.A[5 * i + k] * c;
    }

    // Gain: '<S86>/Gain3'
    rtb_Gain7[i] = 0.0;
  }

  // End of Gain: '<S86>/Gain1'

  // Gain: '<S86>/Gain3'
  for (i = 0; i < 5; i++) {
    c = rtb_Gain1_o[i];
    for (k = 0; k < 6; k++) {
      rtb_Gain7[k] += imperix_ctrl_P.M2C.pinvA[6 * i + k] * c;
    }
  }

  // Gain: '<S86>/Gain4'
  rtb_Gain4_idx_0 = 0.0;
  rtb_Gain4_idx_1 = 0.0;
  for (i = 0; i < 6; i++) {
    // Sum: '<S86>/Sum3' incorporates:
    //   Sum: '<S82>/Sum1'

    csum = rtb_Sum1_m[i] - rtb_Gain7[i];

    // Gain: '<S86>/Gain4'
    k = i << 1;
    rtb_Gain4_idx_0 += imperix_ctrl_P.M2C.pinvN[k] * csum;
    rtb_Gain4_idx_1 += imperix_ctrl_P.M2C.pinvN[k + 1] * csum;
  }

  // Gain: '<S1>/Gain21'
  c = 1.0 / imperix_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S239>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain21'

  imperix_ctrl_B.DataTypeConversion_kq = static_cast<real32_T>(c *
    rtb_Gain4_idx_0);

  // S-Function (PROBE): '<S239>/S-Function'
  ie1 = imperix_ctrl_B.DataTypeConversion_kq;

  // RateTransition generated from: '<S32>/Vector Concatenate4' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'
  //   RateTransition generated from: '<S32>/Input format'
  //   RateTransition generated from: '<S90>/Gain'

  tmp = (imperix_ctrl_M->Timing.RateInteraction.TID0_1 == 1);
  if (tmp) {
    // RateTransition generated from: '<S32>/Vector Concatenate4'
    imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[0] =
      imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[0];
    imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[1] =
      imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[1];
    imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[2] =
      imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[2];
  }

  // End of RateTransition generated from: '<S32>/Vector Concatenate4'

  // S-Function (sdspstatfcns): '<S90>/Mean' incorporates:
  //   Sum: '<S81>/Sum1'

  csum = rtb_Sum1[0];
  for (i = 4; i >= 0; i--) {
    csum += rtb_Sum1[5 - i];
  }

  csum /= 6.0;

  // End of S-Function (sdspstatfcns): '<S90>/Mean'

  // Sum: '<S30>/Sum' incorporates:
  //   Gain: '<S30>/Gain1'
  //   Gain: '<S30>/Gain2'
  //   UnitDelay: '<S30>/Unit Delay1'

  imperix_ctrl_DW.UnitDelay1_DSTATE_o = (1.0 - imperix_ctrl_P.TEB.alpha) * csum
    + imperix_ctrl_P.TEB.alpha * imperix_ctrl_DW.UnitDelay1_DSTATE_o;

  // Sum: '<S1>/Sum6' incorporates:
  //   Constant: '<S1>/Constant'
  //   UnitDelay: '<S30>/Unit Delay1'

  cumRevIndex = imperix_ctrl_P.M2C.Vc_ref - imperix_ctrl_DW.UnitDelay1_DSTATE_o;

  // Sum: '<S219>/Sum' incorporates:
  //   DiscreteIntegrator: '<S210>/Integrator'
  //   Gain: '<S215>/Proportional Gain'

  rtb_DeadZone = imperix_ctrl_P.TEB.kp * cumRevIndex +
    imperix_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S217>/Saturation'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_Saturation = imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone < -imperix_ctrl_P.TEB.u_max) {
    rtb_Saturation = -imperix_ctrl_P.TEB.u_max;
  } else {
    rtb_Saturation = rtb_DeadZone;
  }

  // End of Saturate: '<S217>/Saturation'

  // Gain: '<S32>/Gain3'
  rtb_TmpSignalConversionAtGain2I[0] = imperix_ctrl_P.Gain3_Gain[0] *
    rtb_Saturation;
  rtb_TmpSignalConversionAtGain2I[1] = imperix_ctrl_P.Gain3_Gain[1] *
    rtb_Saturation;

  // S-Function (TUNABLE_PARAM): '<S685>/S-Function'
  imperix_ctrl_B.SFunction_o = magnetize;

  // S-Function (TUNABLE_PARAM): '<S681>/S-Function'
  imperix_ctrl_B.SFunction_i = F_ref;

  // S-Function (TUNABLE_PARAM): '<S689>/S-Function'
  imperix_ctrl_B.SFunction_p = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double'
  //   DataTypeConversion: '<S1>/Cast To Double1'

  rtb_F = imperix_ctrl_B.SFunction_i;
  rtb_w = imperix_ctrl_B.SFunction_p;

  // MATLAB Function 'Closed_loop_control/IM references': '<S27>:1'
  if (!imperix_ctrl_DW.F_max_not_empty) {
    // '<S27>:1:10'
    // '<S27>:1:11'
    imperix_ctrl_DW.F_max = imperix_ctrl_P.IM.FrN;
    imperix_ctrl_DW.F_max_not_empty = true;

    // '<S27>:1:12'
    imperix_ctrl_DW.w_max = imperix_ctrl_P.IM.w_max;

    // '<S27>:1:13'
    // '<S27>:1:16'
    imperix_ctrl_DW.dF = imperix_ctrl_P.FOC.Ts / (3.0 * imperix_ctrl_P.IM.tau_r);

    // '<S27>:1:17'
    imperix_ctrl_DW.dw = imperix_ctrl_P.FOC.Ts;
  }

  if (fabs(imperix_ctrl_B.SFunction_i - imperix_ctrl_DW.F_prev) >
      imperix_ctrl_DW.dF) {
    // '<S27>:1:21'
    // '<S27>:1:22'
    idx_2 = imperix_ctrl_B.SFunction_i - imperix_ctrl_DW.F_prev;
    if (rtIsNaN(idx_2)) {
      ssq = (rtNaN);
    } else if (idx_2 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (idx_2 > 0.0);
    }

    rtb_F = ssq * imperix_ctrl_DW.dF + imperix_ctrl_DW.F_prev;
  }

  if (fabs(imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev) >
      imperix_ctrl_DW.dw) {
    // '<S27>:1:25'
    // '<S27>:1:26'
    idx_2 = imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev;
    if (rtIsNaN(idx_2)) {
      ssq = (rtNaN);
    } else if (idx_2 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (idx_2 > 0.0);
    }

    rtb_w = ssq * imperix_ctrl_DW.dw + imperix_ctrl_DW.w_prev;
  }

  // '<S27>:1:29'
  imperix_ctrl_DW.F_prev = rtb_F;

  // '<S27>:1:30'
  imperix_ctrl_DW.w_prev = rtb_w;

  // '<S27>:1:32'
  rtb_F *= imperix_ctrl_DW.F_max;

  // '<S27>:1:33'
  rtb_w *= imperix_ctrl_DW.w_max;

  // End of MATLAB Function: '<S1>/IM references'

  // Gain: '<S619>/Gain3' incorporates:
  //   Gain: '<S92>/Gain2'

  rtb_Switch_am = 0.0;
  ie_idx_0 = 0.0;
  tmp_7 = 0.0;
  for (i = 0; i < 3; i++) {
    ssq = rtb_Gain1_o[i + 2] * imperix_ctrl_P.Gain2_Gain;
    rtb_Switch_am += imperix_ctrl_P.Gain3_Gain_d[3 * i] * ssq;
    ie_idx_0 += imperix_ctrl_P.Gain3_Gain_d[3 * i + 1] * ssq;
    tmp_7 += imperix_ctrl_P.Gain3_Gain_d[3 * i + 2] * ssq;
  }

  // End of Gain: '<S619>/Gain3'

  // Gain: '<S619>/Gain1'
  rtb_Gain1_f[0] = imperix_ctrl_P.Gain1_Gain * rtb_Switch_am;
  rtb_Gain1_f[1] = imperix_ctrl_P.Gain1_Gain * ie_idx_0;
  rtb_Gain1_f[2] = imperix_ctrl_P.Gain1_Gain * tmp_7;

  // Gain: '<S1>/Gain3'
  rtb_Gain3 = imperix_ctrl_P.IM.np * z;

  // S-Function (TUNABLE_PARAM): '<S691>/S-Function'
  imperix_ctrl_B.SFunction_e = enable_KF;

  // S-Function (TUNABLE_PARAM): '<S695>/S-Function'
  imperix_ctrl_B.SFunction_or = reset_KF;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double3'
  //   DataTypeConversion: '<S1>/Cast To Double6'
  //   UnitDelay: '<S84>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S28>:1'
  // '<S28>:1:14'
  if (!imperix_ctrl_DW.xt_est_apriori_not_empty) {
    // '<S28>:1:7'
    imperix_ctrl_DW.xt_est_apriori_not_empty = true;

    // '<S28>:1:9'
    memcpy(&imperix_ctrl_DW.C[0], &imperix_ctrl_P.KF.C[0], sizeof(real_T) << 3U);

    // '<S28>:1:10'
    imperix_ctrl_DW.kT = imperix_ctrl_P.IM.kT;
  }

  // '<S28>:1:14'
  // '<S28>:1:15'
  rtb_im_idx_0 = 0.0;
  rtb_Fr_idx_0 = 0.0;
  rtb_im_idx_1 = 0.0;
  rtb_Fr_idx_1 = 0.0;

  // '<S28>:1:16'
  rtb_Te = 0.0;
  if (imperix_ctrl_B.SFunction_e != 0.0F) {
    if (imperix_ctrl_B.SFunction_or != 0.0F) {
      // '<S28>:1:22'
      // '<S28>:1:23'
      imperix_ctrl_DW.xt_est_apriori[0] = imperix_ctrl_P.KF.x1_mu[0];
      imperix_ctrl_DW.xt_est_apriori[1] = imperix_ctrl_P.KF.x1_mu[1];
      imperix_ctrl_DW.xt_est_apriori[2] = imperix_ctrl_P.KF.x1_mu[2];
      imperix_ctrl_DW.xt_est_apriori[3] = imperix_ctrl_P.KF.x1_mu[3];
    }

    // '<S28>:1:27'
    memcpy(&A[0], &imperix_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

    // '<S28>:1:28'
    A[12] = imperix_ctrl_P.KF.A[12] * rtb_Gain3;

    // '<S28>:1:29'
    A[9] = imperix_ctrl_P.KF.A[9] * rtb_Gain3;

    // '<S28>:1:30'
    A[14] = imperix_ctrl_P.KF.A[14] * rtb_Gain3;

    // '<S28>:1:31'
    A[11] = imperix_ctrl_P.KF.A[11] * rtb_Gain3;

    // '<S28>:1:32'
    a = 0.5 * imperix_ctrl_P.KF.Ts;
    for (i = 0; i < 16; i++) {
      M[i] = a * A[i] + imperix_ctrl_DW.Inx[i];
    }

    // '<S28>:1:33'
    // '<S28>:1:41'
    // '<S28>:1:71'
    // '<S28>:1:59'
    for (k = 0; k < 200; k++) {
      varargin_1[k] = fabs(imperix_ctrl_P.KF.we_list[k] - rtb_Gain3);
    }

    if (!rtIsNaN(varargin_1[0])) {
      i = 1;
    } else {
      i = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 201)) {
        if (!rtIsNaN(varargin_1[k - 1])) {
          i = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (i == 0) {
      iindx = 1;
    } else {
      ssq = varargin_1[i - 1];
      iindx = i;
      for (jmax = i + 1; jmax < 201; jmax++) {
        idx_2 = varargin_1[jmax - 1];
        if (ssq > idx_2) {
          ssq = idx_2;
          iindx = jmax;
        }
      }
    }

    // '<S28>:1:59'
    k = iindx - 1;

    // '<S28>:1:60'
    idx_2 = rtb_Gain3 - imperix_ctrl_P.KF.we_list[iindx - 1];
    if (rtIsNaN(idx_2)) {
      ssq = (rtNaN);
    } else if (idx_2 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (idx_2 > 0.0);
    }

    idx_2 = static_cast<real_T>(iindx) + ssq;

    // '<S28>:1:62'
    y = rtIsNaN(idx_2);
    if ((iindx <= idx_2) || y) {
      i = iindx;
    } else {
      i = static_cast<int32_T>(idx_2);
    }

    if (i == 0) {
      // '<S28>:1:63'
      // '<S28>:1:64'
      k = iindx;

      // '<S28>:1:65'
      idx_2++;
    } else {
      if ((iindx >= idx_2) || y) {
        i = iindx;
      } else {
        i = static_cast<int32_T>(idx_2);
      }

      if (i == 201) {
        // '<S28>:1:66'
        // '<S28>:1:67'
        k = iindx - 2;

        // '<S28>:1:68'
        idx_2--;
      }
    }

    // '<S28>:1:71'
    // '<S28>:1:72'
    // '<S28>:1:74'
    D = imperix_ctrl_P.KF.we_list[1] - imperix_ctrl_P.KF.we_list[0];

    // '<S28>:1:75'
    rtb_im_idx_0 = fabs(rtb_Gain3 - imperix_ctrl_P.KF.we_list
                        [static_cast<int32_T>(idx_2) - 1]) / D;

    // '<S28>:1:76'
    D = fabs(rtb_Gain3 - imperix_ctrl_P.KF.we_list[k]) / D;

    // '<S28>:1:78'
    // '<S28>:1:42'
    rtb_Saturation_i = imperix_ctrl_DW.xt_est_apriori[1];
    rtb_Sum_ak = imperix_ctrl_DW.xt_est_apriori[0];
    rtb_Saturation_c = imperix_ctrl_DW.xt_est_apriori[2];
    rtb_Sum6 = imperix_ctrl_DW.xt_est_apriori[3];
    for (i = 0; i < 2; i++) {
      jmax = i << 2;
      iindx = ((static_cast<int32_T>(idx_2) - 1) << 3) + jmax;
      b_a_tmp = (k << 3) + jmax;
      b_a[jmax] = imperix_ctrl_P.KF.gain_schedule[iindx] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp] * rtb_im_idx_0;
      b_a[jmax + 1] = imperix_ctrl_P.KF.gain_schedule[iindx + 1] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 1] * rtb_im_idx_0;
      b_a[jmax + 2] = imperix_ctrl_P.KF.gain_schedule[iindx + 2] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 2] * rtb_im_idx_0;
      b_a[jmax + 3] = imperix_ctrl_P.KF.gain_schedule[iindx + 3] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 3] * rtb_im_idx_0;
      rtb_ie_sat[i] = rtb_Gain1_f[i] - (((imperix_ctrl_DW.C[i + 2] *
        rtb_Saturation_i + imperix_ctrl_DW.C[i] * rtb_Sum_ak) +
        imperix_ctrl_DW.C[i + 4] * rtb_Saturation_c) + imperix_ctrl_DW.C[i + 6] *
        rtb_Sum6);
    }

    // '<S28>:1:45'
    // '<S28>:1:46'
    idx_2 = rtb_ie_sat[1];
    D = rtb_ie_sat[0];
    for (i = 0; i < 4; i++) {
      xt_est[i] = (b_a[i + 4] * idx_2 + b_a[i] * D) +
        imperix_ctrl_DW.xt_est_apriori[i];
    }

    for (k = 0; k < 4; k++) {
      jmax = k << 2;
      idx_2 = M[jmax + 1];
      D = M[jmax];
      rtb_Saturation_i = M[jmax + 2];
      rtb_Sum_ak = M[jmax + 3];
      for (i = 0; i < 4; i++) {
        iindx = jmax + i;
        tmp_0[iindx] = (((A[i + 4] * imperix_ctrl_P.KF.Ts * idx_2 +
                          imperix_ctrl_P.KF.Ts * A[i] * D) + A[i + 8] *
                         imperix_ctrl_P.KF.Ts * rtb_Saturation_i) + A[i + 12] *
                        imperix_ctrl_P.KF.Ts * rtb_Sum_ak) +
          imperix_ctrl_DW.Inx[iindx];
      }
    }

    for (i = 0; i < 2; i++) {
      idx_2 = 0.0;
      D = 0.0;
      rtb_Saturation_i = 0.0;
      rtb_Sum_ak = 0.0;
      for (k = 0; k < 4; k++) {
        ssq = imperix_ctrl_P.KF.B[(i << 2) + k];
        jmax = k << 2;
        idx_2 += M[jmax] * ssq;
        D += M[jmax + 1] * ssq;
        rtb_Saturation_i += M[jmax + 2] * ssq;
        rtb_Sum_ak += M[jmax + 3] * ssq;
      }

      jmax = i << 2;
      b_a[jmax + 3] = rtb_Sum_ak;
      b_a[jmax + 2] = rtb_Saturation_i;
      b_a[jmax + 1] = D;
      b_a[jmax] = idx_2;
    }

    for (i = 0; i < 8; i++) {
      M_0[i] = b_a[i] * imperix_ctrl_P.KF.Ts;
    }

    rtb_Switch_am = 0.0;
    ie_idx_0 = 0.0;
    tmp_7 = 0.0;
    rtb_Saturation_c = 0.0;
    for (i = 0; i < 4; i++) {
      ssq = xt_est[i];
      k = i << 2;
      rtb_Switch_am += tmp_0[k] * ssq;
      ie_idx_0 += tmp_0[k + 1] * ssq;
      tmp_7 += tmp_0[k + 2] * ssq;
      rtb_Saturation_c += tmp_0[k + 3] * ssq;
    }

    idx_2 = 0.0;
    D = 0.0;
    rtb_Saturation_i = 0.0;
    rtb_Sum_ak = 0.0;
    for (i = 0; i < 2; i++) {
      ssq = imperix_ctrl_DW.UnitDelay_DSTATE[i];
      jmax = i << 2;
      idx_2 += M_0[jmax] * ssq;
      D += M_0[jmax + 1] * ssq;
      rtb_Saturation_i += M_0[jmax + 2] * ssq;
      rtb_Sum_ak += M_0[jmax + 3] * ssq;
    }

    imperix_ctrl_DW.xt_est_apriori[0] = rtb_Switch_am + idx_2;
    imperix_ctrl_DW.xt_est_apriori[1] = ie_idx_0 + D;
    imperix_ctrl_DW.xt_est_apriori[2] = tmp_7 + rtb_Saturation_i;
    imperix_ctrl_DW.xt_est_apriori[3] = rtb_Saturation_c + rtb_Sum_ak;

    // '<S28>:1:47'
    // '<S28>:1:50'
    // '<S28>:1:51'
    rtb_im_idx_0 = xt_est[0];
    rtb_Fr_idx_0 = xt_est[2];
    rtb_im_idx_1 = xt_est[1];
    rtb_Fr_idx_1 = xt_est[3];

    // '<S28>:1:52'
    rtb_Te = (xt_est[0] * xt_est[3] - xt_est[1] * xt_est[2]) *
      -imperix_ctrl_DW.kT;
  } else {
    // '<S28>:1:18'
  }

  // End of MATLAB Function: '<S1>/Kalman Filter'

  // ComplexToMagnitudeAngle: '<S88>/Complex to Magnitude-Angle' incorporates:
  //   RealImagToComplex: '<S88>/Real-Imag to Complex'

  rtb_Integrator_fi = rt_hypotd_snf(rtb_Fr_idx_0, rtb_Fr_idx_1);

  // Sum: '<S79>/Sum2'
  idx_2 = rtb_F - rtb_Integrator_fi;

  // S-Function (TUNABLE_PARAM): '<S693>/S-Function'
  imperix_ctrl_B.SFunction_h = reset_PI;

  // DiscreteIntegrator: '<S354>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_i =
      imperix_ctrl_P.FluxPI_InitialConditionForInteg;
  }

  // Sum: '<S363>/Sum' incorporates:
  //   DiscreteIntegrator: '<S354>/Integrator'
  //   Gain: '<S359>/Proportional Gain'

  D = imperix_ctrl_P.FOC.kp_F * idx_2 + imperix_ctrl_DW.Integrator_DSTATE_i;

  // Saturate: '<S361>/Saturation'
  if (D > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_i = imperix_ctrl_P.FOC.u_max;
  } else if (D < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_i = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_i = D;
  }

  // End of Saturate: '<S361>/Saturation'

  // Switch: '<S79>/Switch' incorporates:
  //   Constant: '<S79>/isdN'
  //   DataTypeConversion: '<S1>/Cast To Double7'

  if (imperix_ctrl_B.SFunction_o != 0.0F) {
    rtb_Switch = imperix_ctrl_P.IM.isdN;
  } else {
    rtb_Switch = rtb_Saturation_i;
  }

  // End of Switch: '<S79>/Switch'

  // Sum: '<S79>/Sum1'
  z = rtb_w - z;

  // DiscreteIntegrator: '<S406>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_d != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_d =
      imperix_ctrl_P.SpeedPI_InitialConditionForInte;
  }

  // Sum: '<S415>/Sum' incorporates:
  //   DiscreteIntegrator: '<S406>/Integrator'
  //   Gain: '<S411>/Proportional Gain'

  rtb_Sum_ak = imperix_ctrl_P.FOC.kp_w * z + imperix_ctrl_DW.Integrator_DSTATE_d;

  // Saturate: '<S413>/Saturation'
  if (rtb_Sum_ak > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_c = imperix_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_ak < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_c = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_c = rtb_Sum_ak;
  }

  // End of Saturate: '<S413>/Saturation'

  // Switch: '<S79>/Switch1' incorporates:
  //   ComplexToMagnitudeAngle: '<S88>/Complex to Magnitude-Angle'
  //   Constant: '<S79>/Constant'
  //   Constant: '<S88>/Constant'
  //   DataTypeConversion: '<S1>/Cast To Double7'
  //   RealImagToComplex: '<S88>/Real-Imag to Complex'
  //   Switch: '<S88>/Switch'

  if (imperix_ctrl_B.SFunction_o != 0.0F) {
    rtb_Switch1 = imperix_ctrl_P.Constant_Value;
    rtb_Switch_am = imperix_ctrl_P.Constant_Value_h;
  } else {
    rtb_Switch1 = rtb_Saturation_c;
    rtb_Switch_am = rt_atan2d_snf(rtb_Fr_idx_1, rtb_Fr_idx_0);
  }

  // End of Switch: '<S79>/Switch1'

  // RelationalOperator: '<S663>/Compare' incorporates:
  //   Constant: '<S662>/Constant'
  //   Constant: '<S663>/Constant'

  rtb_Compare = (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S662>/Subsystem1'
  imperix_ctrl_Subsystem1(rtb_Compare, rtb_Switch, rtb_Switch1, rtb_Switch_am,
    &imperix_ctrl_B.Fcn, &imperix_ctrl_B.Fcn1);

  // End of Outputs for SubSystem: '<S662>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S662>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S664>/Compare' incorporates:
  //   Constant: '<S662>/Constant'
  //   Constant: '<S664>/Constant'

  imperix_c_Subsystempi2delay(static_cast<uint8_T>
    (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
     imperix_ctrl_P.CompareToConstant1_const), rtb_Switch, rtb_Switch1,
    rtb_Switch_am, &imperix_ctrl_B.Fcn_c, &imperix_ctrl_B.Fcn1_e);

  // End of Outputs for SubSystem: '<S662>/Subsystem - pi//2 delay'

  // Switch: '<S662>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_h[0] = imperix_ctrl_B.Fcn;
    rtb_Switch_h[1] = imperix_ctrl_B.Fcn1;
  } else {
    rtb_Switch_h[0] = imperix_ctrl_B.Fcn_c;
    rtb_Switch_h[1] = imperix_ctrl_B.Fcn1_e;
  }

  // End of Switch: '<S662>/Switch'

  // Gain: '<S32>/Gain5'
  for (i = 0; i < 6; i++) {
    rtb_Gain7[i] = -imperix_ctrl_P.RFT.ab2abc[i];
  }

  rtb_Sum6 = 0.0;
  rtb_Sum_m = 0.0;
  rtb_Saturation_n = 0.0;
  for (i = 0; i < 2; i++) {
    ssq = rtb_Switch_h[i];
    rtb_Sum6 += rtb_Gain7[3 * i] * ssq;
    rtb_Sum_m += rtb_Gain7[3 * i + 1] * ssq;
    rtb_Saturation_n += rtb_Gain7[3 * i + 2] * ssq;
  }

  rtb_TmpSignalConversionAtGain2I[4] = rtb_Saturation_n;
  rtb_TmpSignalConversionAtGain2I[3] = rtb_Sum_m;
  rtb_TmpSignalConversionAtGain2I[2] = rtb_Sum6;

  // End of Gain: '<S32>/Gain5'

  // Gain: '<S32>/Gain7'
  for (i = 0; i < 6; i++) {
    rtb_Gain7[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    ssq = rtb_TmpSignalConversionAtGain2I[i];
    for (k = 0; k < 6; k++) {
      rtb_Gain7[k] += imperix_ctrl_P.M2C.pinvA[6 * i + k] * ssq;
    }
  }

  // End of Gain: '<S32>/Gain7'

  // Sum: '<S1>/Sum' incorporates:
  //   Bias: '<S1>/Add Constant1'
  //   Gain: '<S1>/Gain5'
  //   Product: '<S1>/Divide'

  rtb_Gain3 += rtb_Switch1 / (rtb_F + imperix_ctrl_P.AddConstant1_Bias) *
    (imperix_ctrl_P.IM.Lm / imperix_ctrl_P.IM.tau_r);

  // Gain: '<S84>/Gain'
  rtb_IntegralGain_n = imperix_ctrl_P.IM.Lo * rtb_Gain3;

  // RelationalOperator: '<S620>/Compare' incorporates:
  //   Constant: '<S618>/Constant'
  //   Constant: '<S620>/Constant'

  rtb_Compare = (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const_o);

  // Outputs for Enabled SubSystem: '<S618>/Subsystem1' incorporates:
  //   EnablePort: '<S623>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S623>/Fcn' incorporates:
    //   Fcn: '<S623>/Fcn1'

    rtb_Sum6 = sin(rtb_Switch_am);
    rtb_Sum_m = cos(rtb_Switch_am);

    // Fcn: '<S623>/Fcn'
    imperix_ctrl_B.Fcn_l = rtb_Gain1_f[0] * rtb_Sum_m + rtb_Gain1_f[1] *
      rtb_Sum6;

    // Fcn: '<S623>/Fcn1'
    imperix_ctrl_B.Fcn1_b = -rtb_Gain1_f[0] * rtb_Sum6 + rtb_Gain1_f[1] *
      rtb_Sum_m;
  }

  // End of Outputs for SubSystem: '<S618>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S618>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S622>/Enable'

  // RelationalOperator: '<S621>/Compare' incorporates:
  //   Constant: '<S618>/Constant'
  //   Constant: '<S621>/Constant'

  if (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_ctrl_P.CompareToConstant1_const_o) {
    // Fcn: '<S622>/Fcn' incorporates:
    //   Fcn: '<S622>/Fcn1'

    rtb_Sum6 = cos(rtb_Switch_am);
    rtb_Sum_m = sin(rtb_Switch_am);

    // Fcn: '<S622>/Fcn'
    imperix_ctrl_B.Fcn_ct = rtb_Gain1_f[0] * rtb_Sum_m - rtb_Gain1_f[1] *
      rtb_Sum6;

    // Fcn: '<S622>/Fcn1'
    imperix_ctrl_B.Fcn1_p = rtb_Gain1_f[0] * rtb_Sum6 + rtb_Gain1_f[1] *
      rtb_Sum_m;
  }

  // End of RelationalOperator: '<S621>/Compare'
  // End of Outputs for SubSystem: '<S618>/Subsystem - pi//2 delay'

  // Switch: '<S618>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_g_idx_0 = imperix_ctrl_B.Fcn_l;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1_b;
  } else {
    rtb_Switch_g_idx_0 = imperix_ctrl_B.Fcn_ct;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1_p;
  }

  // End of Switch: '<S618>/Switch'

  // Sum: '<S84>/Sum6'
  rtb_Sum6 = rtb_Switch - rtb_Switch_g_idx_0;

  // DiscreteIntegrator: '<S476>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_n != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_j =
      imperix_ctrl_P.MCCPId_InitialConditionForInteg;
  }

  // Sum: '<S485>/Sum' incorporates:
  //   DiscreteIntegrator: '<S476>/Integrator'
  //   Gain: '<S481>/Proportional Gain'

  rtb_Sum_m = imperix_ctrl_P.MCC.kp * rtb_Sum6 +
    imperix_ctrl_DW.Integrator_DSTATE_j;

  // Saturate: '<S483>/Saturation'
  if (rtb_Sum_m > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_n = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_m < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_n = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_n = rtb_Sum_m;
  }

  // End of Saturate: '<S483>/Saturation'

  // Sum: '<S84>/Sum' incorporates:
  //   Product: '<S84>/Product1'

  rtb_Sum_j = rtb_Saturation_n - rtb_IntegralGain_n * rtb_Switch1;

  // Sum: '<S84>/Sum8'
  rtb_Sum8 = rtb_Switch1 - rtb_Switch_g_idx_1;

  // DiscreteIntegrator: '<S528>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_i != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_e =
      imperix_ctrl_P.MCCPIq_InitialConditionForInteg;
  }

  // Sum: '<S537>/Sum' incorporates:
  //   DiscreteIntegrator: '<S528>/Integrator'
  //   Gain: '<S533>/Proportional Gain'

  rtb_Sum_h = imperix_ctrl_P.MCC.kp * rtb_Sum8 +
    imperix_ctrl_DW.Integrator_DSTATE_e;

  // Saturate: '<S535>/Saturation'
  if (rtb_Sum_h > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_d5 = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_h < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_d5 = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_d5 = rtb_Sum_h;
  }

  // End of Saturate: '<S535>/Saturation'

  // Sum: '<S84>/Sum1' incorporates:
  //   Product: '<S84>/Product'

  rtb_IntegralGain_n = rtb_Switch * rtb_IntegralGain_n + rtb_Saturation_d5;

  // RelationalOperator: '<S546>/Compare' incorporates:
  //   Constant: '<S441>/Constant'
  //   Constant: '<S546>/Constant'

  rtb_Compare = (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment_l ==
                 imperix_ctrl_P.CompareToConstant_const_l);

  // Outputs for Enabled SubSystem: '<S441>/Subsystem1'
  imperix_ctrl_Subsystem1(rtb_Compare, rtb_Sum_j, rtb_IntegralGain_n,
    rtb_Switch_am, &imperix_ctrl_B.Fcn_b, &imperix_ctrl_B.Fcn1_i);

  // End of Outputs for SubSystem: '<S441>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S441>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S547>/Compare' incorporates:
  //   Constant: '<S441>/Constant'
  //   Constant: '<S547>/Constant'

  imperix_c_Subsystempi2delay(static_cast<uint8_T>
    (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment_l ==
     imperix_ctrl_P.CompareToConstant1_const_l), rtb_Sum_j, rtb_IntegralGain_n,
    rtb_Switch_am, &imperix_ctrl_B.Fcn_d, &imperix_ctrl_B.Fcn1_d);

  // End of Outputs for SubSystem: '<S441>/Subsystem - pi//2 delay'

  // Switch: '<S441>/Switch' incorporates:
  //   UnitDelay: '<S84>/Unit Delay'

  if (rtb_Compare != 0) {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_b;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_i;
  } else {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_d;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_d;
  }

  // End of Switch: '<S441>/Switch'

  // SignalConversion generated from: '<S83>/Gain2' incorporates:
  //   Constant: '<S83>/vx'

  a = imperix_ctrl_P.M2C.Vdc / 2.0;

  // SignalConversion generated from: '<S438>/Gain3' incorporates:
  //   UnitDelay: '<S84>/Unit Delay'

  tmp_1[0] = imperix_ctrl_DW.UnitDelay_DSTATE[0];
  tmp_1[1] = imperix_ctrl_DW.UnitDelay_DSTATE[1];
  tmp_1[2] = 0.0;

  // Gain: '<S438>/Gain3'
  rtb_Switch_am = 0.0;
  ie_idx_0 = 0.0;
  tmp_7 = 0.0;
  for (i = 0; i < 3; i++) {
    ssq = tmp_1[i];
    rtb_Switch_am += imperix_ctrl_P.Gain3_Gain_p[3 * i] * ssq;
    ie_idx_0 += imperix_ctrl_P.Gain3_Gain_p[3 * i + 1] * ssq;
    tmp_7 += imperix_ctrl_P.Gain3_Gain_p[3 * i + 2] * ssq;
  }

  // End of Gain: '<S438>/Gain3'

  // SignalConversion generated from: '<S83>/Gain2' incorporates:
  //   Constant: '<S83>/vx'

  rtb_TmpSignalConversionAtGain2I[0] = a;
  rtb_TmpSignalConversionAtGain2I[1] = -a;
  rtb_TmpSignalConversionAtGain2I[2] = rtb_Switch_am;
  rtb_TmpSignalConversionAtGain2I[3] = ie_idx_0;
  rtb_TmpSignalConversionAtGain2I[4] = tmp_7;

  // Gain: '<S83>/Gain2'
  for (i = 0; i < 6; i++) {
    rtb_Sum1_m[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    ssq = rtb_TmpSignalConversionAtGain2I[i];
    for (k = 0; k < 6; k++) {
      rtb_Sum1_m[k] += imperix_ctrl_P.Gain2_Gain_o[6 * i + k] * ssq;
    }
  }

  // End of Gain: '<S83>/Gain2'

  // MATLAB Function: '<S32>/Saturation' incorporates:
  //   RateTransition generated from: '<S32>/Vector Concatenate4'

  // MATLAB Function 'Closed_loop_control/NN CEC/Saturation': '<S171>:1'
  // '<S171>:1:49'
  // '<S171>:1:56'
  // '<S171>:1:4'
  // '<S171>:1:5'
  if (!imperix_ctrl_DW.Ac_not_empty) {
    // '<S171>:1:10'
    // '<S171>:1:11'
    for (i = 0; i < 6; i++) {
      ssq = imperix_ctrl_P.M2C.N[i];
      imperix_ctrl_DW.Ac[i] = ssq;
      imperix_ctrl_DW.Ac[i + 6] = -ssq;
      ssq = imperix_ctrl_P.M2C.N[i + 6];
      imperix_ctrl_DW.Ac[i + 12] = ssq;
      imperix_ctrl_DW.Ac[i + 18] = -ssq;
    }

    imperix_ctrl_DW.Ac_not_empty = true;

    // '<S171>:1:13'
    // '<S171>:1:17'
    imperix_ctrl_DW.is_max_e = imperix_ctrl_P.M2C.is_max;

    // '<S171>:1:18'
    imperix_ctrl_DW.SolverOpts.UseHessianAsInput = true;
    imperix_ctrl_DW.SolverOpts.IntegrityChecks = true;
    imperix_ctrl_DW.SolverOpts.MaxIterations = 100;
    imperix_ctrl_DW.SolverOpts.ConstraintTolerance = imperix_ctrl_DW.Tol;
  }

  // '<S171>:1:23'
  for (i = 0; i < 6; i++) {
    rtb_Switch_am = rtb_Gain7[i];
    bc[i] = imperix_ctrl_DW.is_max_e - rtb_Switch_am;
    bc[i + 6] = imperix_ctrl_DW.is_max_e + rtb_Switch_am;
  }

  // '<S171>:1:30'
  ssq = imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[1];
  rtb_Switch_am = imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[0];
  for (i = 0; i < 12; i++) {
    lb[i] = (imperix_ctrl_DW.Ac[i + 12] * ssq + imperix_ctrl_DW.Ac[i] *
             rtb_Switch_am) - bc[i];
  }

  if (!rtIsNaN(lb[0])) {
    i = 1;
  } else {
    i = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 13)) {
      if (!rtIsNaN(lb[k - 1])) {
        i = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (i == 0) {
    ssq = lb[0];
  } else {
    ssq = lb[i - 1];
    for (k = i + 1; k < 13; k++) {
      rtb_Switch_am = lb[k - 1];
      if (ssq < rtb_Switch_am) {
        ssq = rtb_Switch_am;
      }
    }
  }

  if (imperix_ctrl_DW.Tol < ssq) {
    // '<S171>:1:31'
    // '<S171>:1:33'
    if (imperix_ctrl_DW.SolverOpts.UseHessianAsInput) {
      u_ref[0] = imperix_ctrl_DW.Ix[0];
      u_ref[1] = imperix_ctrl_DW.Ix[1];
      u_ref[2] = imperix_ctrl_DW.Ix[2];
      u_ref[3] = imperix_ctrl_DW.Ix[3];
      iindx = 0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 2)) {
        k = (i << 1) + i;
        ssq = 0.0;
        if (i >= 1) {
          for (jmax = 0; jmax < 1; jmax++) {
            ssq += u_ref[1] * u_ref[1];
          }
        }

        ssq = u_ref[k] - ssq;
        if (ssq > 0.0) {
          ssq = sqrt(ssq);
          u_ref[k] = ssq;
          if (i + 1 < 2) {
            a = 1.0 / ssq;
            for (jmax = k + 2; jmax <= k + 2; jmax++) {
              u_ref[jmax - 1] *= a;
            }
          }

          i++;
        } else {
          u_ref[k] = ssq;
          iindx = i + 1;
          exitg1 = true;
        }
      }

      if (iindx == 0) {
        u_ref[2] = 0.0;
      }

      xt_est[0] = 1.0;
      xt_est[1] = 0.0;
      xt_est[2] = 0.0;
      xt_est[3] = 1.0;
      imperix_ctrl_trisolve_g(u_ref, xt_est);
    } else {
      xt_est[0] = imperix_ctrl_DW.Ix[0];
      xt_est[1] = imperix_ctrl_DW.Ix[1];
      xt_est[2] = imperix_ctrl_DW.Ix[2];
      xt_est[3] = imperix_ctrl_DW.Ix[3];
    }

    for (i = 0; i < 12; i++) {
      iA1[i] = false;
    }

    for (i = 0; i < 2; i++) {
      k = i << 1;
      ssq = xt_est[k + 1];
      rtb_Switch_am = xt_est[k];
      xt_est_0[k] = ssq * xt_est[1] + rtb_Switch_am * xt_est[0];
      xt_est_0[k + 1] = ssq * xt_est[3] + rtb_Switch_am * xt_est[2];
      tmp_2[i] = -imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[i];
    }

    for (i = 0; i < 24; i++) {
      bc_1[i] = -imperix_ctrl_DW.Ac[i];
    }

    for (i = 0; i < 12; i++) {
      bc_0[i] = -bc[i];
    }

    imperix_ctrl_qpkwik_d(xt_est, xt_est_0, tmp_2, bc_1, bc_0, iA1,
                          imperix_ctrl_DW.SolverOpts.MaxIterations,
                          imperix_ctrl_DW.SolverOpts.ConstraintTolerance,
                          rtb_ie_sat, lb, &i);

    // '<S171>:1:33'
    // '<S171>:1:34'
  } else {
    // '<S171>:1:36'
    rtb_ie_sat[0] = imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[0];
    rtb_ie_sat[1] = imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[1];
  }

  // '<S171>:1:40'
  // '<S171>:1:49'
  rtb_Gain7[0] = rtb_Sum1[0] - rtb_Sum1_m[0];
  rtb_Gain7[3] = -rtb_Sum1_m[3];
  rtb_Gain7[1] = rtb_Sum1[1] - rtb_Sum1_m[1];
  rtb_Gain7[4] = -rtb_Sum1_m[4];
  rtb_Gain7[2] = rtb_Sum1[2] - rtb_Sum1_m[2];
  rtb_Gain7[5] = -rtb_Sum1_m[5];
  if (!rtIsNaN(rtb_Gain7[0])) {
    i = 1;
  } else {
    i = 0;
    iindx = 2;
    exitg1 = false;
    while ((!exitg1) && (iindx < 7)) {
      if (!rtIsNaN(rtb_Gain7[iindx - 1])) {
        i = iindx;
        exitg1 = true;
      } else {
        iindx++;
      }
    }
  }

  if (i == 0) {
    ie_idx_0 = rtb_Gain7[0];
  } else {
    ie_idx_0 = rtb_Gain7[i - 1];
    for (iindx = i + 1; iindx < 7; iindx++) {
      rtb_Switch_am = rtb_Gain7[iindx - 1];
      if (ie_idx_0 > rtb_Switch_am) {
        ie_idx_0 = rtb_Switch_am;
      }
    }
  }

  // '<S171>:1:50'
  rtb_Gain7[0] = -rtb_Sum1_m[0];
  rtb_Gain7[3] = -rtb_Sum1[3] - rtb_Sum1_m[3];
  rtb_Gain7[1] = -rtb_Sum1_m[1];
  rtb_Gain7[4] = -rtb_Sum1[4] - rtb_Sum1_m[4];
  rtb_Gain7[2] = -rtb_Sum1_m[2];
  rtb_Gain7[5] = -rtb_Sum1[5] - rtb_Sum1_m[5];
  if (!rtIsNaN(-rtb_Sum1_m[0])) {
    i = 1;
  } else {
    i = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 7)) {
      if (!rtIsNaN(rtb_Gain7[k - 1])) {
        i = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (i == 0) {
    ssq = -rtb_Sum1_m[0];
  } else {
    ssq = rtb_Gain7[i - 1];
    for (k = i + 1; k < 7; k++) {
      rtb_Switch_am = rtb_Gain7[k - 1];
      if (ssq < rtb_Switch_am) {
        ssq = rtb_Switch_am;
      }
    }
  }

  // '<S171>:1:51'
  if (imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[2] > ie_idx_0 - 1.0) {
    a = ie_idx_0 - 1.0;
  } else if (rtIsNaN(imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[2])) {
    if (!rtIsNaN(ie_idx_0 - 1.0)) {
      a = ie_idx_0 - 1.0;
    } else {
      a = (rtNaN);
    }
  } else {
    a = imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[2];
  }

  if ((!(a >= ssq + 1.0)) && (!rtIsNaN(ssq + 1.0))) {
    a = ssq + 1.0;
  }

  d_x[0] = rtIsNaN(rtb_ie_sat[0]);
  d_x[1] = rtIsNaN(rtb_ie_sat[1]);
  y = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!d_x[i]) {
      y = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (y) {
    // '<S171>:1:56'
    rtb_ie_sat[0] = 0.0;
    rtb_ie_sat[1] = 0.0;
  }

  if (rtIsNaN(a)) {
    // '<S171>:1:59'
    // '<S171>:1:60'
    a = 0.0;
  }

  // Gain: '<S1>/Gain20'
  ssq = 1.0 / imperix_ctrl_P.M2C.is_max;

  // Sum: '<S170>/Sum' incorporates:
  //   Gain: '<S170>/Gain1'
  //   Gain: '<S170>/Gain2'
  //   UnitDelay: '<S170>/Unit Delay1'

  rtb_Switch_am = (1.0 - imperix_ctrl_P.CCMPC.alpha) * rtb_ie_sat[0] +
    imperix_ctrl_P.CCMPC.alpha * imperix_ctrl_DW.UnitDelay1_DSTATE[0];
  imperix_ctrl_DW.UnitDelay1_DSTATE[0] = rtb_Switch_am;

  // Gain: '<S1>/Gain20'
  ie_idx_0 = ssq * rtb_Switch_am;

  // Sum: '<S170>/Sum' incorporates:
  //   Gain: '<S170>/Gain1'
  //   Gain: '<S170>/Gain2'
  //   UnitDelay: '<S170>/Unit Delay1'

  rtb_Switch_am = (1.0 - imperix_ctrl_P.CCMPC.alpha) * rtb_ie_sat[1] +
    imperix_ctrl_P.CCMPC.alpha * imperix_ctrl_DW.UnitDelay1_DSTATE[1];
  imperix_ctrl_DW.UnitDelay1_DSTATE[1] = rtb_Switch_am;

  // DataTypeConversion: '<S241>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_d = static_cast<real32_T>(ie_idx_0);

  // S-Function (PROBE): '<S241>/S-Function'
  ie1_r = imperix_ctrl_B.DataTypeConversion_d;

  // DataTypeConversion: '<S243>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain22'
  //   MATLAB Function: '<S32>/Saturation'

  imperix_ctrl_B.DataTypeConversion_at = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.M2C.vo_max * a);

  // S-Function (PROBE): '<S243>/S-Function'
  vo_r = imperix_ctrl_B.DataTypeConversion_at;

  // DataTypeConversion: '<S245>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain20'

  imperix_ctrl_B.DataTypeConversion_l = static_cast<real32_T>(ssq *
    rtb_Switch_am);

  // S-Function (PROBE): '<S245>/S-Function'
  ie2_r = imperix_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S247>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain21'

  imperix_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(c *
    rtb_Gain4_idx_1);

  // S-Function (PROBE): '<S247>/S-Function'
  ie2 = imperix_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S249>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'

  imperix_ctrl_B.DataTypeConversion_cf = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.FrN * rtb_Integrator_fi);

  // S-Function (PROBE): '<S249>/S-Function'
  Frd = imperix_ctrl_B.DataTypeConversion_cf;

  // DataTypeConversion: '<S251>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain2'

  imperix_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.M2C.Vc_ref * csum);

  // S-Function (PROBE): '<S251>/S-Function'
  Vc_m = imperix_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S253>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(rtb_Gain[2]);

  // S-Function (PROBE): '<S253>/S-Function'
  is3 = imperix_ctrl_B.DataTypeConversion_p;

  // DataTypeConversion: '<S255>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain4'
  //   UnitDelay: '<S30>/Unit Delay1'

  imperix_ctrl_B.DataTypeConversion_o = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.M2C.Vc_ref * imperix_ctrl_DW.UnitDelay1_DSTATE_o);

  // S-Function (PROBE): '<S255>/S-Function'
  Vc_m_f = imperix_ctrl_B.DataTypeConversion_o;

  // DataTypeConversion: '<S257>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain7'

  imperix_ctrl_B.DataTypeConversion_k1 = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.PCC.u_max * rtb_Saturation);

  // S-Function (PROBE): '<S257>/S-Function'
  iP_r = imperix_ctrl_B.DataTypeConversion_k1;

  // DataTypeConversion: '<S259>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain6'

  imperix_ctrl_B.DataTypeConversion_n = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.PCC.u_max * rtb_Gain1_o[0]);

  // S-Function (PROBE): '<S259>/S-Function'
  iP = imperix_ctrl_B.DataTypeConversion_n;

  // Gain: '<S1>/Gain16'
  c = 1.0 / imperix_ctrl_P.MCC.u_max;

  // DataTypeConversion: '<S261>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(c *
    rtb_IntegralGain_n);

  // S-Function (PROBE): '<S261>/S-Function'
  vm_q = imperix_ctrl_B.DataTypeConversion_i;

  // DataTypeConversion: '<S263>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'

  imperix_ctrl_B.DataTypeConversion_l2 = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.FrN * rtb_F);

  // S-Function (PROBE): '<S263>/S-Function'
  Frd_r = imperix_ctrl_B.DataTypeConversion_l2;

  // DataTypeConversion: '<S265>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_ctrl_B.DataTypeConversion_hg = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.wN * rtb_w);

  // S-Function (PROBE): '<S265>/S-Function'
  wm_r = imperix_ctrl_B.DataTypeConversion_hg;

  // DataTypeConversion: '<S267>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'

  imperix_ctrl_B.DataTypeConversion_as = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isdN * rtb_Switch_g_idx_0);

  // S-Function (PROBE): '<S267>/S-Function'
  im_d = imperix_ctrl_B.DataTypeConversion_as;

  // DataTypeConversion: '<S269>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'

  imperix_ctrl_B.DataTypeConversion_fv = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isdN * rtb_Switch);

  // S-Function (PROBE): '<S269>/S-Function'
  imd_r = imperix_ctrl_B.DataTypeConversion_fv;

  // DataTypeConversion: '<S271>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain10'

  imperix_ctrl_B.DataTypeConversion_il = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isqN * rtb_Switch_g_idx_1);

  // S-Function (PROBE): '<S271>/S-Function'
  im_q = imperix_ctrl_B.DataTypeConversion_il;

  // DataTypeConversion: '<S273>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain11'

  imperix_ctrl_B.DataTypeConversion_ep = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isqN * rtb_Switch1);

  // S-Function (PROBE): '<S273>/S-Function'
  imq_r = imperix_ctrl_B.DataTypeConversion_ep;

  // DataTypeConversion: '<S275>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ly = static_cast<real32_T>(rtb_Gain[3]);

  // S-Function (PROBE): '<S275>/S-Function'
  is4 = imperix_ctrl_B.DataTypeConversion_ly;

  // DataTypeConversion: '<S277>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_ctrl_B.DataTypeConversion_hm = static_cast<real32_T>(c * rtb_Sum_j);

  // S-Function (PROBE): '<S277>/S-Function'
  vm_d = imperix_ctrl_B.DataTypeConversion_hm;

  // Gain: '<S1>/Gain17'
  c = 1.0 / (imperix_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S279>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_ctrl_B.DataTypeConversion_fvu = static_cast<real32_T>(c * rtb_Gain1_f
    [1]);

  // S-Function (PROBE): '<S279>/S-Function'
  im_bet = imperix_ctrl_B.DataTypeConversion_fvu;

  // DataTypeConversion: '<S281>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_ctrl_B.DataTypeConversion_nx = static_cast<real32_T>(c * rtb_Gain1_f[0]);

  // S-Function (PROBE): '<S281>/S-Function'
  im_alp = imperix_ctrl_B.DataTypeConversion_nx;

  // Gain: '<S1>/Gain18'
  c = 1.0 / (imperix_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S283>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(c * rtb_im_idx_1);

  // S-Function (PROBE): '<S283>/S-Function'
  im_bet_KF = imperix_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S285>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_ctrl_B.DataTypeConversion_of = static_cast<real32_T>(c * rtb_im_idx_0);

  // S-Function (PROBE): '<S285>/S-Function'
  im_alp_KF = imperix_ctrl_B.DataTypeConversion_of;

  // Gain: '<S1>/Gain19'
  c = 1.0 / imperix_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S287>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_ctrl_B.DataTypeConversion_ch = static_cast<real32_T>(c * rtb_Fr_idx_1);

  // S-Function (PROBE): '<S287>/S-Function'
  Fr_bet = imperix_ctrl_B.DataTypeConversion_ch;

  // DataTypeConversion: '<S289>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_ctrl_B.DataTypeConversion_cz = static_cast<real32_T>(c * rtb_Fr_idx_0);

  // S-Function (PROBE): '<S289>/S-Function'
  Fr_alp = imperix_ctrl_B.DataTypeConversion_cz;

  // DataTypeConversion: '<S291>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain23'

  imperix_ctrl_B.DataTypeConversion_bt = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.TN * rtb_Te);

  // S-Function (PROBE): '<S291>/S-Function'
  Te_KF = imperix_ctrl_B.DataTypeConversion_bt;

  // DataTypeConversion: '<S293>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_g = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // S-Function (PROBE): '<S293>/S-Function'
  V5 = imperix_ctrl_B.DataTypeConversion_g;

  // S-Function (ADC): '<S111>/ADC'
  imperix_ctrl_B.ADC_j = (float)(*ix_raw_adc_ptr_2_0) * 6.1035E-5F + 0.0F;

  // DataTypeConversion: '<S295>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion3'

  imperix_ctrl_B.DataTypeConversion_nc = imperix_ctrl_B.ADC_j;

  // S-Function (PROBE): '<S295>/S-Function'
  Te = imperix_ctrl_B.DataTypeConversion_nc;

  // DataTypeConversion: '<S297>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_lx = static_cast<real32_T>(rtb_Gain[4]);

  // S-Function (PROBE): '<S297>/S-Function'
  is5 = imperix_ctrl_B.DataTypeConversion_lx;

  // DataTypeConversion: '<S299>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_bk = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // S-Function (PROBE): '<S299>/S-Function'
  V6 = imperix_ctrl_B.DataTypeConversion_bk;

  // DataTypeConversion: '<S301>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_gl = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // S-Function (PROBE): '<S301>/S-Function'
  V1 = imperix_ctrl_B.DataTypeConversion_gl;

  // DataTypeConversion: '<S303>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_f2 = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // S-Function (PROBE): '<S303>/S-Function'
  V2 = imperix_ctrl_B.DataTypeConversion_f2;

  // DataTypeConversion: '<S305>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_hr = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // S-Function (PROBE): '<S305>/S-Function'
  V3 = imperix_ctrl_B.DataTypeConversion_hr;

  // DataTypeConversion: '<S307>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_gx = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // S-Function (PROBE): '<S307>/S-Function'
  V4 = imperix_ctrl_B.DataTypeConversion_gx;

  // DataTypeConversion: '<S309>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_kf = static_cast<real32_T>(rtb_Gain[5]);

  // S-Function (PROBE): '<S309>/S-Function'
  is6 = imperix_ctrl_B.DataTypeConversion_kf;

  // DataTypeConversion: '<S311>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ex = static_cast<real32_T>(rtb_Gain1_e[0]);

  // S-Function (PROBE): '<S311>/S-Function'
  Vc1 = imperix_ctrl_B.DataTypeConversion_ex;

  // DataTypeConversion: '<S313>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_p2 = static_cast<real32_T>(rtb_Gain1_e[1]);

  // S-Function (PROBE): '<S313>/S-Function'
  Vc2 = imperix_ctrl_B.DataTypeConversion_p2;

  // DataTypeConversion: '<S315>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ok = static_cast<real32_T>(rtb_Gain1_e[2]);

  // S-Function (PROBE): '<S315>/S-Function'
  Vc3 = imperix_ctrl_B.DataTypeConversion_ok;

  // DataTypeConversion: '<S317>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_j = static_cast<real32_T>(rtb_Gain1_e[3]);

  // S-Function (PROBE): '<S317>/S-Function'
  Vc4 = imperix_ctrl_B.DataTypeConversion_j;

  // Saturate: '<S137>/Saturation'
  if (imperix_ctrl_P.Saturation_UpperSat < 0.0F) {
    // Saturate: '<S137>/Saturation'
    imperix_ctrl_B.Saturation = imperix_ctrl_P.Saturation_UpperSat;
  } else if (imperix_ctrl_P.Saturation_LowerSat > 0.0F) {
    // Saturate: '<S137>/Saturation'
    imperix_ctrl_B.Saturation = imperix_ctrl_P.Saturation_LowerSat;
  } else {
    // Saturate: '<S137>/Saturation'
    imperix_ctrl_B.Saturation = 0.0F;
  }

  // End of Saturate: '<S137>/Saturation'
  // S-Function (TUNABLE_PARAM): '<S687>/S-Function'
  imperix_ctrl_B.SFunction_c = enable_FP;

  // Gain: '<S142>/Gain3'
  rtb_Bias1 = 0.0F;
  tmp_5 = 0.0F;
  tmp_6 = 0.0F;
  for (i = 0; i < 3; i++) {
    tmp_4 = rtb_Product2[i];
    rtb_Bias1 += imperix_ctrl_P.Gain3_Gain_pz[3 * i] * tmp_4;
    tmp_5 += imperix_ctrl_P.Gain3_Gain_pz[3 * i + 1] * tmp_4;
    tmp_6 += imperix_ctrl_P.Gain3_Gain_pz[3 * i + 2] * tmp_4;
  }

  // End of Gain: '<S142>/Gain3'

  // Gain: '<S142>/Gain1'
  imperix_ctrl_B.Gain1[0] = imperix_ctrl_P.Gain1_Gain_k * rtb_Bias1;
  imperix_ctrl_B.Gain1[1] = imperix_ctrl_P.Gain1_Gain_k * tmp_5;
  imperix_ctrl_B.Gain1[2] = imperix_ctrl_P.Gain1_Gain_k * tmp_6;

  // S-Function (PROBE): '<S144>/S-Function'
  v_alp = imperix_ctrl_B.Gain1[0];

  // S-Function (PROBE): '<S146>/S-Function'
  v_bet = imperix_ctrl_B.Gain1[1];

  // S-Function (TUNABLE_PARAM): '<S148>/S-Function'
  imperix_ctrl_B.SFunction_em = f_mag;

  // Sum: '<S89>/Sum3'
  rtb_IntegralGain_n = rtb_Saturation - rtb_Gain1_o[0];

  // Sum: '<S608>/Sum' incorporates:
  //   DiscreteIntegrator: '<S599>/Integrator'
  //   Gain: '<S604>/Proportional Gain'

  csum = imperix_ctrl_P.PCC.kp * rtb_IntegralGain_n +
    imperix_ctrl_DW.Integrator_DSTATE_p;

  // MATLAB Function: '<S1>/LICCs control'
  // MATLAB Function 'Closed_loop_control/LICCs control': '<S29>:1'
  // '<S29>:1:40'
  if (!imperix_ctrl_DW.A_not_empty) {
    // '<S29>:1:5'
    // '<S29>:1:6'
    memcpy(&imperix_ctrl_DW.A[0], &imperix_ctrl_P.CCMPC.A[0], sizeof(real_T) <<
           3U);
    imperix_ctrl_DW.A_not_empty = true;

    // '<S29>:1:7'
    // '<S29>:1:8'
    // '<S29>:1:9'
    // '<S29>:1:10'
    memcpy(&imperix_ctrl_DW.B[0], &imperix_ctrl_P.CCMPC.B[0], sizeof(real_T) <<
           4U);
    memcpy(&imperix_ctrl_DW.H[0], &imperix_ctrl_P.CCMPC.H[0], sizeof(real_T) <<
           4U);
    memcpy(&imperix_ctrl_DW.Q[0], &imperix_ctrl_P.CCMPC.Q[0], sizeof(real_T) <<
           4U);
    memcpy(&imperix_ctrl_DW.R[0], &imperix_ctrl_P.CCMPC.R[0], sizeof(real_T) <<
           4U);

    // '<S29>:1:11'
    memcpy(&imperix_ctrl_DW.Aineq[0], &imperix_ctrl_P.CCMPC.Aineq[0], 96U *
           sizeof(real_T));

    // '<S29>:1:12'
    memcpy(&imperix_ctrl_DW.pinvT[0], &imperix_ctrl_P.CCMPC.pinvT[0], 30U *
           sizeof(real_T));

    // '<S29>:1:16'
    imperix_ctrl_DW.options.UseHessianAsInput = true;
    imperix_ctrl_DW.options.IntegrityChecks = true;
    imperix_ctrl_DW.options.MaxIterations = 10;
    imperix_ctrl_DW.options.ConstraintTolerance = 1.0E-5;
  }

  // Saturate: '<S606>/Saturation'
  // '<S29>:1:22'
  // '<S29>:1:25'
  // '<S29>:1:28'
  // '<S29>:1:31'
  // '<S29>:1:34'
  // '<S29>:1:37'
  // '<S29>:1:40'
  if (csum > imperix_ctrl_P.PCC.u_max) {
    c = imperix_ctrl_P.PCC.u_max;
  } else if (csum < -imperix_ctrl_P.PCC.u_max) {
    c = -imperix_ctrl_P.PCC.u_max;
  } else {
    c = csum;
  }

  // MATLAB Function: '<S1>/LICCs control' incorporates:
  //   Constant: '<S89>/Constant1'
  //   Gain: '<S84>/Gain1'
  //   MATLAB Function: '<S32>/Saturation'
  //   Saturate: '<S606>/Saturation'
  //   Sum: '<S89>/Sum13'
  //   UnitDelay: '<S170>/Unit Delay1'
  //   UnitDelay: '<S84>/Unit Delay'

  rtb_Switch_am = c - 1.5 * imperix_ctrl_P.M2C.Vdc;
  xt_est[0] = imperix_ctrl_DW.UnitDelay1_DSTATE[0];
  u_ref[0] = imperix_ctrl_DW.u_prev[0];
  xt_est[1] = imperix_ctrl_DW.UnitDelay1_DSTATE[1];
  u_ref[1] = imperix_ctrl_DW.u_prev[1];
  ie_idx_0 = imperix_ctrl_P.Gain1_Gain_m * imperix_ctrl_DW.UnitDelay_DSTATE[0];
  xt_est[2] = imperix_ctrl_DW.UnitDelay1_DSTATE[0];
  u_ref[2] = imperix_ctrl_DW.u_prev[0];
  xt_est[3] = imperix_ctrl_DW.UnitDelay1_DSTATE[1];
  u_ref[3] = imperix_ctrl_DW.u_prev[1];
  tmp_7 = imperix_ctrl_P.Gain1_Gain_m * imperix_ctrl_DW.UnitDelay_DSTATE[1];
  for (i = 0; i < 6; i++) {
    rtb_Gain[i] = ((imperix_ctrl_DW.pinvT[i + 6] * ie_idx_0 +
                    imperix_ctrl_DW.pinvT[i] * rtb_Switch_am) +
                   imperix_ctrl_DW.pinvT[i + 12] * tmp_7) + a;
  }

  // '<S29>:1:41'
  rtb_Gain1_e[0] = rtb_Sum1[0] - rtb_Gain[0];
  rtb_Gain1_e[1] = rtb_Sum1[1] - rtb_Gain[1];
  rtb_Gain1_e[2] = rtb_Sum1[2] - rtb_Gain[2];
  rtb_Gain1_e[3] = 0.0 - rtb_Gain[3];
  rtb_Gain1_e[4] = 0.0 - rtb_Gain[4];
  rtb_Gain1_e[5] = 0.0 - rtb_Gain[5];
  for (i = 0; i < 2; i++) {
    k = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      bc[k + jmax] = rtb_Gain1_e[jmax];
    }
  }

  // '<S29>:1:42'
  rtb_Gain1_e[0] = 0.0 - rtb_Gain[0];
  rtb_Gain1_e[1] = 0.0 - rtb_Gain[1];
  rtb_Gain1_e[2] = 0.0 - rtb_Gain[2];
  rtb_Gain1_e[3] = -rtb_Sum1[3] - rtb_Gain[3];
  rtb_Gain1_e[4] = -rtb_Sum1[4] - rtb_Gain[4];
  rtb_Gain1_e[5] = -rtb_Sum1[5] - rtb_Gain[5];
  for (i = 0; i < 2; i++) {
    k = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      lb[k + jmax] = rtb_Gain1_e[jmax];
    }
  }

  // '<S29>:1:43'
  // '<S29>:1:48'
  if (imperix_ctrl_DW.options.UseHessianAsInput) {
    memcpy(&A[0], &imperix_ctrl_DW.H[0], sizeof(real_T) << 4U);
    jmax = 0;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 4)) {
      k = (i << 2) + i;
      ssq = 0.0;
      if (i >= 1) {
        for (iindx = 0; iindx < i; iindx++) {
          c = A[(iindx << 2) + i];
          ssq += c * c;
        }
      }

      ssq = A[k] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        A[k] = ssq;
        if (i + 1 < 4) {
          if (i != 0) {
            b_a_tmp = (((i - 1) << 2) + i) + 2;
            for (iindx = i + 2; iindx <= b_a_tmp; iindx += 4) {
              c_tmp = iindx - i;
              c = -A[(((c_tmp - 2) >> 2) << 2) + i];
              e = c_tmp + 2;
              for (c_tmp = iindx; c_tmp <= e; c_tmp++) {
                A_tmp = ((k + c_tmp) - iindx) + 1;
                A[A_tmp] += A[c_tmp - 1] * c;
              }
            }
          }

          rtb_im_idx_0 = 1.0 / ssq;
          b_a_tmp = (k - i) + 4;
          for (iindx = k + 2; iindx <= b_a_tmp; iindx++) {
            A[iindx - 1] *= rtb_im_idx_0;
          }
        }

        i++;
      } else {
        A[k] = ssq;
        jmax = i + 1;
        exitg1 = true;
      }
    }

    if (jmax == 0) {
      jmax = 5;
    }

    for (k = 2; k < jmax; k++) {
      for (i = 0; i <= k - 2; i++) {
        A[i + ((k - 1) << 2)] = 0.0;
      }
    }

    for (i = 0; i < 4; i++) {
      jmax = i << 2;
      M[jmax] = B[jmax];
      M[jmax + 1] = B[jmax + 1];
      M[jmax + 2] = B[jmax + 2];
      M[jmax + 3] = B[jmax + 3];
    }

    imperix_ctrl_trisolve_n(A, M);
  } else {
    memcpy(&M[0], &imperix_ctrl_DW.H[0], sizeof(real_T) << 4U);
  }

  for (i = 0; i < 24; i++) {
    iA1_0[i] = false;
  }

  rtb_Switch_am = (imperix_ctrl_DW.A[0] * rtb_Gain4_idx_0 + imperix_ctrl_DW.A[4]
                   * rtb_Gain4_idx_1) + (imperix_ctrl_DW.B[0] *
    imperix_ctrl_DW.u_prev[0] + imperix_ctrl_DW.u_prev[1] * imperix_ctrl_DW.B[4]);
  ie_idx_0 = (imperix_ctrl_DW.A[1] * rtb_Gain4_idx_0 + imperix_ctrl_DW.A[5] *
              rtb_Gain4_idx_1) + (imperix_ctrl_DW.u_prev[0] * imperix_ctrl_DW.B
    [1] + imperix_ctrl_DW.u_prev[1] * imperix_ctrl_DW.B[5]);
  c = 0.0;
  ssq = 0.0;
  rtb_Gain4_idx_0 = 0.0;
  rtb_Gain4_idx_1 = 0.0;
  for (i = 0; i < 4; i++) {
    rtb_F = 0.0;
    rtb_w = 0.0;
    rtb_im_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    for (k = 0; k < 4; k++) {
      rtb_im_idx_1 = imperix_ctrl_DW.Q[(i << 2) + k];
      rtb_F += 2.0 * imperix_ctrl_DW.B[k] * rtb_im_idx_1;
      rtb_w += imperix_ctrl_DW.B[k + 4] * 2.0 * rtb_im_idx_1;
      rtb_im_idx_0 += imperix_ctrl_DW.B[k + 8] * 2.0 * rtb_im_idx_1;
      rtb_Fr_idx_0 += imperix_ctrl_DW.B[k + 12] * 2.0 * rtb_im_idx_1;
    }

    k = i << 2;
    tmp_0[k + 3] = rtb_Fr_idx_0;
    tmp_0[k + 2] = rtb_im_idx_0;
    tmp_0[k + 1] = rtb_w;
    tmp_0[k] = rtb_F;
    xt_est_0[i] = (imperix_ctrl_DW.A[i + 4] * ie_idx_0 + imperix_ctrl_DW.A[i] *
                   rtb_Switch_am) - xt_est[i];
    rtb_F = xt_est_0[i];
    c += tmp_0[k] * rtb_F;
    ssq += tmp_0[k + 1] * rtb_F;
    rtb_Gain4_idx_0 += tmp_0[k + 2] * rtb_F;
    rtb_Gain4_idx_1 += tmp_0[k + 3] * rtb_F;
  }

  xt_est[0] = 0.0;
  xt_est[1] = 0.0;
  xt_est[2] = 0.0;
  xt_est[3] = 0.0;
  for (i = 0; i < 4; i++) {
    rtb_F = u_ref[i];
    for (k = 0; k < 4; k++) {
      iindx = i << 2;
      b_a_tmp = iindx + k;
      xt_est[k] += imperix_ctrl_DW.R[b_a_tmp] * -2.0 * rtb_F;
      jmax = k << 2;
      A[b_a_tmp] = ((M[jmax + 1] * M[iindx + 1] + M[jmax] * M[iindx]) + M[jmax +
                    2] * M[iindx + 2]) + M[jmax + 3] * M[iindx + 3];
    }
  }

  u_ref[0] = c + xt_est[0];
  u_ref[1] = ssq + xt_est[1];
  u_ref[2] = rtb_Gain4_idx_0 + xt_est[2];
  u_ref[3] = rtb_Gain4_idx_1 + xt_est[3];
  for (i = 0; i < 96; i++) {
    tmp_3[i] = -imperix_ctrl_DW.Aineq[i];
  }

  for (i = 0; i < 12; i++) {
    bc_1[i] = -bc[i];
    bc_1[i + 12] = lb[i];
  }

  imperix_ctrl_qpkwik_g(M, A, u_ref, tmp_3, bc_1, iA1_0,
                        imperix_ctrl_DW.options.MaxIterations,
                        imperix_ctrl_DW.options.ConstraintTolerance, xt_est, lam,
                        &i);

  // '<S29>:1:48'
  // '<S29>:1:50'
  // '<S29>:1:53'
  // '<S29>:1:56'
  imperix_ctrl_DW.u_prev[0] = xt_est[0];
  imperix_ctrl_DW.u_prev[1] = xt_est[1];

  // DeadZone: '<S202>/DeadZone'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone -= imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone >= -imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_ctrl_P.TEB.u_max;
  }

  // End of DeadZone: '<S202>/DeadZone'

  // Gain: '<S207>/Integral Gain'
  cumRevIndex *= imperix_ctrl_P.TEB.ki;

  // DataTypeConversion: '<S424>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S303>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_le = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S424>/Data Type Conversion2' incorporates:
  //   Constant: '<S424>/phase'

  imperix_ctrl_B.DataTypeConversion2_l = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value);

  // DataTypeConversion: '<S424>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3 = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S428>/generation'
  // S-Function (CB_PWM): '<S429>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_ctrl_B.DataTypeConversion1_le, 1);

  // End of Outputs for SubSystem: '<S428>/generation'

  // DataTypeConversion: '<S425>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S303>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S425>/Data Type Conversion2' incorporates:
  //   Constant: '<S425>/phase'

  imperix_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_o);

  // DataTypeConversion: '<S425>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_g = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S430>/generation'
  // S-Function (CB_PWM): '<S431>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_g > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_ctrl_B.DataTypeConversion1_p, 1);

  // End of Outputs for SubSystem: '<S430>/generation'

  // DataTypeConversion: '<S426>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S303>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S426>/Data Type Conversion2' incorporates:
  //   Constant: '<S426>/phase'

  imperix_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_l);

  // DataTypeConversion: '<S426>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_i = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S432>/generation'
  // S-Function (CB_PWM): '<S433>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_i > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S432>/generation'

  // DataTypeConversion: '<S427>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S303>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S427>/Data Type Conversion2' incorporates:
  //   Constant: '<S427>/phase'

  imperix_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_oo);

  // DataTypeConversion: '<S427>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gf = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S434>/generation'
  // S-Function (CB_PWM): '<S435>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gf > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S434>/generation'
  imperix_ctrl_MovingAverage(DataTypeConversion1, &imperix_ctrl_B.MovingAverage,
    &imperix_ctrl_DW.MovingAverage);
  imperix_ctrl_MovingAverage(DataTypeConversion2,
    &imperix_ctrl_B.MovingAverage_p, &imperix_ctrl_DW.MovingAverage_p);

  // DataTypeConversion: '<S550>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S305>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S550>/Data Type Conversion2' incorporates:
  //   Constant: '<S550>/phase'

  imperix_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_p);

  // DataTypeConversion: '<S550>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gp = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S554>/generation'
  // S-Function (CB_PWM): '<S555>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gp > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S554>/generation'

  // DataTypeConversion: '<S551>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S305>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_eo = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S551>/Data Type Conversion2' incorporates:
  //   Constant: '<S551>/phase'

  imperix_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_pr);

  // DataTypeConversion: '<S551>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gl = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S556>/generation'
  // S-Function (CB_PWM): '<S557>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gl > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_ctrl_B.DataTypeConversion1_eo, 0);

  // End of Outputs for SubSystem: '<S556>/generation'

  // DataTypeConversion: '<S552>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S305>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S552>/Data Type Conversion2' incorporates:
  //   Constant: '<S552>/phase'

  imperix_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_c);

  // DataTypeConversion: '<S552>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_m = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S558>/generation'
  // S-Function (CB_PWM): '<S559>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_m > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S558>/generation'

  // DataTypeConversion: '<S553>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S305>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S553>/Data Type Conversion2' incorporates:
  //   Constant: '<S553>/phase'

  imperix_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ll);

  // DataTypeConversion: '<S553>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_a = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S560>/generation'
  // S-Function (CB_PWM): '<S561>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_a > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S560>/generation'

  // DeadZone: '<S591>/DeadZone'
  if (csum > imperix_ctrl_P.PCC.u_max) {
    csum -= imperix_ctrl_P.PCC.u_max;
  } else if (csum >= -imperix_ctrl_P.PCC.u_max) {
    csum = 0.0;
  } else {
    csum -= -imperix_ctrl_P.PCC.u_max;
  }

  // End of DeadZone: '<S591>/DeadZone'

  // Gain: '<S596>/Integral Gain'
  rtb_IntegralGain_n *= imperix_ctrl_P.PCC.ki;

  // Gain: '<S90>/Gain'
  c = imperix_ctrl_P.M2C.C * 0.5;

  // RateTransition generated from: '<S90>/Gain' incorporates:
  //   Gain: '<S90>/Gain'
  //   Math: '<S90>/Square'
  //   Sum: '<S81>/Sum1'

  if (tmp) {
    for (i = 0; i < 6; i++) {
      // Math: '<S90>/Square' incorporates:
      //   Sum: '<S81>/Sum1'

      rtb_Gain4_idx_0 = rtb_Sum1[i];
      imperix_ctrl_DW.TmpRTBAtGainOutport1_Buffer[i] = rtb_Gain4_idx_0 *
        rtb_Gain4_idx_0 * c;
    }
  }

  // DataTypeConversion: '<S624>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S307>/Data Type Conversion'

  // MATLAB Function 'Closed_loop_control/Subsystem25/MATLAB Function': '<S617>:1' 
  // '<S617>:1:3'
  // '<S617>:1:4'
  // '<S617>:1:6'
  // '<S617>:1:7'
  // '<S617>:1:9'
  // '<S617>:1:10'
  imperix_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S624>/Data Type Conversion2' incorporates:
  //   Constant: '<S624>/phase'

  imperix_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_n);

  // DataTypeConversion: '<S624>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_b = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S628>/generation'
  // S-Function (CB_PWM): '<S629>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_b > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S628>/generation'

  // DataTypeConversion: '<S625>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S307>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_mqr = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S625>/Data Type Conversion2' incorporates:
  //   Constant: '<S625>/phase'

  imperix_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_k);

  // DataTypeConversion: '<S625>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_h = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S630>/generation'
  // S-Function (CB_PWM): '<S631>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_h > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_ctrl_B.DataTypeConversion1_mqr, 0);

  // End of Outputs for SubSystem: '<S630>/generation'

  // DataTypeConversion: '<S626>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S307>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S626>/Data Type Conversion2' incorporates:
  //   Constant: '<S626>/phase'

  imperix_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_py);

  // DataTypeConversion: '<S626>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_e = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S632>/generation'
  // S-Function (CB_PWM): '<S633>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_e > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S632>/generation'

  // DataTypeConversion: '<S627>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S307>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S627>/Data Type Conversion2' incorporates:
  //   Constant: '<S627>/phase'

  imperix_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ng);

  // DataTypeConversion: '<S627>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_k = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S634>/generation'
  // S-Function (CB_PWM): '<S635>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_k > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S634>/generation'

  // DataTypeConversion: '<S636>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S293>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S636>/Data Type Conversion2' incorporates:
  //   Constant: '<S636>/phase'

  imperix_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_j);

  // DataTypeConversion: '<S636>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_l = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S640>/generation'
  // S-Function (CB_PWM): '<S641>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_l > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_ctrl_B.DataTypeConversion1_a, 0);

  // End of Outputs for SubSystem: '<S640>/generation'

  // DataTypeConversion: '<S637>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S293>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S637>/Data Type Conversion2' incorporates:
  //   Constant: '<S637>/phase'

  imperix_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_of);

  // DataTypeConversion: '<S637>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_n = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S642>/generation'
  // S-Function (CB_PWM): '<S643>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_n > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_ctrl_B.DataTypeConversion1_k, 0);

  // End of Outputs for SubSystem: '<S642>/generation'

  // DataTypeConversion: '<S638>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S293>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S638>/Data Type Conversion2' incorporates:
  //   Constant: '<S638>/phase'

  imperix_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_h);

  // DataTypeConversion: '<S638>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_j = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S644>/generation'
  // S-Function (CB_PWM): '<S645>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_j > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_ctrl_B.DataTypeConversion1_l4, 0);

  // End of Outputs for SubSystem: '<S644>/generation'

  // DataTypeConversion: '<S639>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S293>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S639>/Data Type Conversion2' incorporates:
  //   Constant: '<S639>/phase'

  imperix_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_nc);

  // DataTypeConversion: '<S639>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bs = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S646>/generation'
  // S-Function (CB_PWM): '<S647>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bs > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_ctrl_B.DataTypeConversion1_bg, 0);

  // End of Outputs for SubSystem: '<S646>/generation'

  // DataTypeConversion: '<S648>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S299>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S648>/Data Type Conversion2' incorporates:
  //   Constant: '<S648>/phase'

  imperix_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_f);

  // DataTypeConversion: '<S648>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bsx = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S652>/generation'
  // S-Function (CB_PWM): '<S653>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bsx > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_ctrl_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S652>/generation'

  // DataTypeConversion: '<S649>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S299>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_o1 = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S649>/Data Type Conversion2' incorporates:
  //   Constant: '<S649>/phase'

  imperix_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_i);

  // DataTypeConversion: '<S649>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_hm = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S654>/generation'
  // S-Function (CB_PWM): '<S655>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_hm > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_ctrl_B.DataTypeConversion1_o1, 0);

  // End of Outputs for SubSystem: '<S654>/generation'

  // DataTypeConversion: '<S650>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S299>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S650>/Data Type Conversion2' incorporates:
  //   Constant: '<S650>/phase'

  imperix_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_a);

  // DataTypeConversion: '<S650>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_ip = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S656>/generation'
  // S-Function (CB_PWM): '<S657>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_ip > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_ctrl_B.DataTypeConversion1_ay, 0);

  // End of Outputs for SubSystem: '<S656>/generation'

  // DataTypeConversion: '<S651>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S299>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S651>/Data Type Conversion2' incorporates:
  //   Constant: '<S651>/phase'

  imperix_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ns);

  // DataTypeConversion: '<S651>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_o = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S658>/generation'
  // S-Function (CB_PWM): '<S659>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_o > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_ctrl_B.DataTypeConversion1_pf, 0);

  // End of Outputs for SubSystem: '<S658>/generation'

  // DataTypeConversion: '<S668>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S301>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S668>/Data Type Conversion2' incorporates:
  //   Constant: '<S668>/phase'

  imperix_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_fa);

  // DataTypeConversion: '<S668>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_d = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S672>/generation'
  // S-Function (CB_PWM): '<S673>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_d > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_ctrl_B.DataTypeConversion1_al, 1);

  // End of Outputs for SubSystem: '<S672>/generation'

  // DataTypeConversion: '<S669>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S301>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S669>/Data Type Conversion2' incorporates:
  //   Constant: '<S669>/phase'

  imperix_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_hr);

  // DataTypeConversion: '<S669>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bt = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S674>/generation'
  // S-Function (CB_PWM): '<S675>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bt > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_ctrl_B.DataTypeConversion1_ig, 1);

  // End of Outputs for SubSystem: '<S674>/generation'

  // DataTypeConversion: '<S670>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S301>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S670>/Data Type Conversion2' incorporates:
  //   Constant: '<S670>/phase'

  imperix_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_at);

  // DataTypeConversion: '<S670>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_p = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S676>/generation'
  // S-Function (CB_PWM): '<S677>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_p > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S676>/generation'

  // DataTypeConversion: '<S671>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S301>/Data Type Conversion'

  imperix_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S671>/Data Type Conversion2' incorporates:
  //   Constant: '<S671>/phase'

  imperix_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_cq);

  // DataTypeConversion: '<S671>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bm = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S678>/generation'
  // S-Function (CB_PWM): '<S679>/PWM' incorporates:
  //   Constant: '<S137>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bm > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_ctrl_B.DataTypeConversion1_gw, 1);

  // End of Outputs for SubSystem: '<S678>/generation'

  // RateTransition generated from: '<S1>/Energy balance' incorporates:
  //   Sum: '<S81>/Sum1'

  if (tmp) {
    for (i = 0; i < 6; i++) {
      imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[i] = rtb_Sum1[i];
    }

    // RateTransition generated from: '<S1>/Energy balance' incorporates:
    //   Sum: '<S81>/Sum1'

    for (i = 0; i < 5; i++) {
      imperix_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[i] =
        rtb_TmpSignalConversionAtGain2I[i];
    }

    // End of RateTransition generated from: '<S1>/Energy balance'

    // SignalConversion generated from: '<S661>/Gain3'
    rtb_Gain1_f[0] = rtb_Switch_h[0];
    rtb_Gain1_f[1] = rtb_Switch_h[1];
    rtb_Gain1_f[2] = 0.0;

    // Gain: '<S661>/Gain3'
    rtb_Switch_am = 0.0;
    ie_idx_0 = 0.0;
    tmp_7 = 0.0;
    for (i = 0; i < 3; i++) {
      c = rtb_Gain1_f[i];
      rtb_Switch_am += imperix_ctrl_P.Gain3_Gain_m[3 * i] * c;
      ie_idx_0 += imperix_ctrl_P.Gain3_Gain_m[3 * i + 1] * c;
      tmp_7 += imperix_ctrl_P.Gain3_Gain_m[3 * i + 2] * c;
    }

    // End of Gain: '<S661>/Gain3'

    // RateTransition generated from: '<S1>/Energy balance' incorporates:
    //   Gain: '<S87>/Gain'
    //   Gain: '<S87>/Gain8'

    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[0] = rtb_Saturation;
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[1] =
      imperix_ctrl_P.Gain8_Gain * rtb_Saturation;
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[2] =
      imperix_ctrl_P.Gain_Gain * rtb_Switch_am;
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[3] =
      imperix_ctrl_P.Gain_Gain * ie_idx_0;
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[4] =
      imperix_ctrl_P.Gain_Gain * tmp_7;

    // RateTransition generated from: '<S1>/Energy balance'
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport5_Bu = rtb_Gain3;
  }

  // MATLAB Function: '<S96>/MATLAB Function'
  // MATLAB Function 'Closed_loop_control/Subsystem6/MATLAB Function': '<S660>:1' 
  if (!imperix_ctrl_DW.is_max_not_empty) {
    // '<S660>:1:5'
    // '<S660>:1:6'
    imperix_ctrl_DW.is_max_not_empty = true;
  }

  // End of MATLAB Function: '<S96>/MATLAB Function'

  // Update for DiscreteIntegrator: '<S18>/Discrete-Time Integrator1' incorporates:
  //   Gain: '<S18>/Gain22'

  // '<S660>:1:9'
  // '<S660>:1:10'
  imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE += imperix_ctrl_P.Gain22_Gain *
    imperix_ctrl_B.SFunction_em * imperix_ctrl_P.DiscreteTimeIntegrator1_gainval;

  // Switch: '<S200>/Switch1' incorporates:
  //   Constant: '<S200>/Clamping_zero'
  //   Constant: '<S200>/Constant'
  //   Constant: '<S200>/Constant2'
  //   RelationalOperator: '<S200>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_8 = imperix_ctrl_P.Constant_Value_e;
  } else {
    tmp_8 = imperix_ctrl_P.Constant2_Value;
  }

  // Switch: '<S200>/Switch2' incorporates:
  //   Constant: '<S200>/Clamping_zero'
  //   Constant: '<S200>/Constant3'
  //   Constant: '<S200>/Constant4'
  //   RelationalOperator: '<S200>/fix for DT propagation issue1'

  if (cumRevIndex > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_9 = imperix_ctrl_P.Constant3_Value_h;
  } else {
    tmp_9 = imperix_ctrl_P.Constant4_Value;
  }

  // Switch: '<S200>/Switch' incorporates:
  //   Constant: '<S200>/Clamping_zero'
  //   Constant: '<S200>/Constant1'
  //   Logic: '<S200>/AND3'
  //   RelationalOperator: '<S200>/Equal1'
  //   RelationalOperator: '<S200>/Relational Operator'
  //   Switch: '<S200>/Switch1'
  //   Switch: '<S200>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_8 == tmp_9))
  {
    cumRevIndex = imperix_ctrl_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S210>/Integrator' incorporates:
  //   Switch: '<S200>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE += imperix_ctrl_P.Integrator_gainval *
    cumRevIndex;

  // Update for DiscreteIntegrator: '<S354>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S346>/Kb'
  //   Gain: '<S351>/Integral Gain'
  //   Sum: '<S346>/SumI2'
  //   Sum: '<S346>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_i += (2.0 * imperix_ctrl_P.FOC.kp_F *
      (rtb_Saturation_i - D) + imperix_ctrl_P.FOC.ki_F * idx_2) *
      imperix_ctrl_P.Integrator_gainval_a;
  }

  if (imperix_ctrl_B.SFunction_h > 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState = 1;
  } else if (imperix_ctrl_B.SFunction_h < 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState = -1;
  } else if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState = 0;
  } else {
    imperix_ctrl_DW.Integrator_PrevResetState = 2;
  }

  // End of Update for DiscreteIntegrator: '<S354>/Integrator'

  // Update for DiscreteIntegrator: '<S406>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S398>/Kb'
  //   Gain: '<S403>/Integral Gain'
  //   Sum: '<S398>/SumI2'
  //   Sum: '<S398>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_d += (2.0 * imperix_ctrl_P.FOC.kp_w *
      (rtb_Saturation_c - rtb_Sum_ak) + imperix_ctrl_P.FOC.ki_w * z) *
      imperix_ctrl_P.Integrator_gainval_e;
  }

  if (imperix_ctrl_B.SFunction_h > 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_d = 1;
  } else if (imperix_ctrl_B.SFunction_h < 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_d = -1;
  } else if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_d = 0;
  } else {
    imperix_ctrl_DW.Integrator_PrevResetState_d = 2;
  }

  // End of Update for DiscreteIntegrator: '<S406>/Integrator'

  // Update for DiscreteIntegrator: '<S476>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S468>/Kb'
  //   Gain: '<S473>/Integral Gain'
  //   Sum: '<S468>/SumI2'
  //   Sum: '<S468>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_j += ((rtb_Saturation_n - rtb_Sum_m) *
      imperix_ctrl_P.MCC.kp + imperix_ctrl_P.MCC.ki * rtb_Sum6) *
      imperix_ctrl_P.Integrator_gainval_i;
  }

  if (imperix_ctrl_B.SFunction_h > 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_n = 1;
  } else if (imperix_ctrl_B.SFunction_h < 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_n = -1;
  } else if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_n = 0;
  } else {
    imperix_ctrl_DW.Integrator_PrevResetState_n = 2;
  }

  // End of Update for DiscreteIntegrator: '<S476>/Integrator'

  // Update for DiscreteIntegrator: '<S528>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S520>/Kb'
  //   Gain: '<S525>/Integral Gain'
  //   Sum: '<S520>/SumI2'
  //   Sum: '<S520>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_e += ((rtb_Saturation_d5 - rtb_Sum_h) *
      imperix_ctrl_P.MCC.kp + imperix_ctrl_P.MCC.ki * rtb_Sum8) *
      imperix_ctrl_P.Integrator_gainval_p;
  }

  if (imperix_ctrl_B.SFunction_h > 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_i = 1;
  } else if (imperix_ctrl_B.SFunction_h < 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_i = -1;
  } else if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_i = 0;
  } else {
    imperix_ctrl_DW.Integrator_PrevResetState_i = 2;
  }

  // End of Update for DiscreteIntegrator: '<S528>/Integrator'

  // Switch: '<S589>/Switch1' incorporates:
  //   Constant: '<S589>/Clamping_zero'
  //   Constant: '<S589>/Constant'
  //   Constant: '<S589>/Constant2'
  //   RelationalOperator: '<S589>/fix for DT propagation issue'

  if (csum > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_8 = imperix_ctrl_P.Constant_Value_hg;
  } else {
    tmp_8 = imperix_ctrl_P.Constant2_Value_a;
  }

  // Switch: '<S589>/Switch2' incorporates:
  //   Constant: '<S589>/Clamping_zero'
  //   Constant: '<S589>/Constant3'
  //   Constant: '<S589>/Constant4'
  //   RelationalOperator: '<S589>/fix for DT propagation issue1'

  if (rtb_IntegralGain_n > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_9 = imperix_ctrl_P.Constant3_Value_j;
  } else {
    tmp_9 = imperix_ctrl_P.Constant4_Value_a;
  }

  // Switch: '<S589>/Switch' incorporates:
  //   Constant: '<S589>/Clamping_zero'
  //   Constant: '<S589>/Constant1'
  //   Logic: '<S589>/AND3'
  //   RelationalOperator: '<S589>/Equal1'
  //   RelationalOperator: '<S589>/Relational Operator'
  //   Switch: '<S589>/Switch1'
  //   Switch: '<S589>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value_a != csum) && (tmp_8 == tmp_9)) {
    rtb_IntegralGain_n = imperix_ctrl_P.Constant1_Value_d;
  }

  // Update for DiscreteIntegrator: '<S599>/Integrator' incorporates:
  //   Switch: '<S589>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE_p += imperix_ctrl_P.Integrator_gainval_a3 *
    rtb_IntegralGain_n;
}

// Model step function for TID1
void imperix_ctrl_step1(void)          // Sample time: [0.00166667s, 0.0s]
{
  real_T B[192];
  real_T tmp[192];
  real_T b_B[96];
  real_T tmp_0[96];
  real_T tmp_5[64];
  real_T tmp_6[48];
  real_T Ec_pred[24];
  real_T IB[24];
  real_T VB[24];
  real_T is_temp[24];
  real_T tmp_3[20];
  real_T VB_tmp[18];
  real_T tmp_9[16];
  real_T cos_vals[12];
  real_T tmp_2[9];
  real_T ie_ref_temp[8];
  real_T vo_ref_temp_0[8];
  real_T VB_tmp_0[6];
  real_T tmp_1[6];
  real_T tmp_7[6];
  real_T tmp_8[6];
  real_T maxval[4];
  real_T tmp_a[4];
  real_T vo_ref_temp[4];
  real_T rtb_VectorConcatenate4[3];
  real_T angles;
  real_T b_b;
  real_T cos_vals_0;
  real_T tmp_4;
  real_T tmp_b;
  real_T tmp_c;
  real_T vo_ref_temp_1;
  int32_T cos_vals_tmp;
  int32_T flag_z;
  int32_T i;
  int32_T ibcol;
  int32_T l;
  int32_T l_k;
  boolean_T x[48];
  boolean_T b_x[8];
  boolean_T p;

  // MATLAB Function: '<S1>/Energy balance' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'
  //   RateTransition generated from: '<S90>/Gain'
  //
  // MATLAB Function 'Closed_loop_control/Energy balance': '<S26>:1'
  if (!imperix_ctrl_DW.Ts_not_empty) {
    // '<S26>:1:5'
    // '<S26>:1:8'
    imperix_ctrl_DW.Ts_not_empty = true;

    // '<S26>:1:9'
    // '<S26>:1:10'
    for (i = 0; i < 6; i++) {
      imperix_ctrl_DW.Tab2abc[i] = imperix_ctrl_P.RFT.ab2abc[i];
      imperix_ctrl_DW.Tabc2ab[i] = imperix_ctrl_P.RFT.abc2ab[i];
    }

    // '<S26>:1:11'
    // '<S26>:1:12'
    memcpy(&imperix_ctrl_DW.A_d[0], &imperix_ctrl_P.M2C.A[0], 30U * sizeof
           (real_T));
    memcpy(&imperix_ctrl_DW.pinvA[0], &imperix_ctrl_P.M2C.pinvA[0], 30U * sizeof
           (real_T));

    // '<S26>:1:13'
    imperix_ctrl_DW.Ts = imperix_ctrl_P.CEMPC.Ts;

    // '<S26>:1:17'
    // '<S26>:1:18'
    memcpy(&imperix_ctrl_DW.K[0], &imperix_ctrl_P.CEMPC.K[0], 576U * sizeof
           (real_T));
    memcpy(&imperix_ctrl_DW.MI[0], &imperix_ctrl_P.CEMPC.MI[0], 576U * sizeof
           (real_T));

    // '<S26>:1:19'
    memcpy(&imperix_ctrl_DW.NN[0], &imperix_ctrl_P.CEMPC.NN[0], 192U * sizeof
           (real_T));

    // '<S26>:1:20'
    memcpy(&imperix_ctrl_DW.ONE[0], &imperix_ctrl_P.CEMPC.ONE[0], 96U * sizeof
           (real_T));

    // '<S26>:1:21'
    imperix_ctrl_DW.Nl = imperix_ctrl_P.CEMPC.Nl;

    // '<S26>:1:22'
    imperix_ctrl_DW.is_max_p = imperix_ctrl_P.M2C.is_max;

    // '<S26>:1:23'
    imperix_ctrl_DW.is_max2 = imperix_ctrl_DW.is_max_p *
      imperix_ctrl_DW.is_max_p;

    // '<S26>:1:24'
    imperix_ctrl_DW.vo_max2 = imperix_ctrl_P.M2C.vo_max *
      imperix_ctrl_P.M2C.vo_max;

    // '<S26>:1:25'
    imperix_ctrl_DW.Ec_ref2 = imperix_ctrl_P.M2C.Ec_ref *
      imperix_ctrl_P.M2C.Ec_ref;

    // '<S26>:1:26'
    memcpy(&imperix_ctrl_DW.Hu_z[0], &imperix_ctrl_P.CEMPC.Hu_z[0], sizeof
           (real_T) << 6U);

    // '<S26>:1:27'
    memcpy(&imperix_ctrl_DW.Aineq_z[0], &imperix_ctrl_P.CEMPC.Aineq_z[0], 384U *
           sizeof(real_T));

    // '<S26>:1:28'
    imperix_ctrl_DW.lambda_z = imperix_ctrl_P.CEMPC.lambda_z;

    // '<S26>:1:29'
    memcpy(&imperix_ctrl_DW.Hu_o[0], &imperix_ctrl_P.CEMPC.Hu_o[0], sizeof
           (real_T) << 4U);

    // '<S26>:1:30'
    memcpy(&imperix_ctrl_DW.Aineq_o[0], &imperix_ctrl_P.CEMPC.Aineq_o[0], sizeof
           (real_T) << 5U);

    // '<S26>:1:31'
    imperix_ctrl_DW.lambda_o = imperix_ctrl_P.CEMPC.lambda_o;

    // '<S26>:1:32'
    imperix_ctrl_DW.Ec_dev = imperix_ctrl_P.M2C.Ec_dev;

    // '<S26>:1:37'
    imperix_ctrl_DW.options_z.UseHessianAsInput = true;
    imperix_ctrl_DW.options_z.IntegrityChecks = true;
    imperix_ctrl_DW.options_z.MaxIterations = 20;
    imperix_ctrl_DW.options_z.ConstraintTolerance = 0.0001;

    // '<S26>:1:40'
    imperix_ctrl_DW.options_o.UseHessianAsInput = true;
    imperix_ctrl_DW.options_o.IntegrityChecks = true;
    imperix_ctrl_DW.options_o.MaxIterations = 10;
    imperix_ctrl_DW.options_o.ConstraintTolerance = 0.0001;
  }

  // '<S26>:1:53'
  // '<S26>:1:54'
  // '<S26>:1:62'
  // '<S26>:1:63'
  // '<S26>:1:67'
  b_b = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport5_Bu * imperix_ctrl_DW.Ts;

  // '<S26>:1:68'
  // '<S26>:1:69'
  // '<S26>:1:70'
  // '<S26>:1:73'
  // '<S26>:1:74'
  // '<S26>:1:79'
  // '<S26>:1:80'
  // '<S26>:1:83'
  // '<S26>:1:84'
  // '<S26>:1:90'
  cos_vals_0 = cos(b_b);
  angles = sin(b_b);
  cos_vals[0] = cos_vals_0;
  cos_vals[1] = -angles;
  cos_vals[2] = angles;
  cos_vals[3] = cos_vals_0;
  angles = 2.0 * b_b;
  cos_vals_0 = cos(angles);
  angles = sin(angles);
  cos_vals[4] = cos_vals_0;
  cos_vals[5] = -angles;
  cos_vals[6] = angles;
  cos_vals[7] = cos_vals_0;
  angles = 3.0 * b_b;
  cos_vals_0 = cos(angles);
  angles = sin(angles);
  cos_vals[8] = cos_vals_0;
  cos_vals[9] = -angles;
  cos_vals[10] = angles;
  cos_vals[11] = cos_vals_0;
  imperix_ctrl_repmat(&imperix_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[0], tmp_1);
  for (flag_z = 0; flag_z < 6; flag_z++) {
    cos_vals_tmp = flag_z << 1;
    cos_vals_0 = cos_vals[cos_vals_tmp + 1];
    b_b = cos_vals[cos_vals_tmp];
    for (ibcol = 0; ibcol < 3; ibcol++) {
      cos_vals_tmp = ibcol << 1;
      VB_tmp[flag_z + 6 * ibcol] = imperix_ctrl_DW.Tabc2ab[cos_vals_tmp + 1] *
        cos_vals_0 + b_b * imperix_ctrl_DW.Tabc2ab[cos_vals_tmp];
    }

    VB_tmp_0[flag_z] = 0.0;
  }

  for (flag_z = 0; flag_z < 3; flag_z++) {
    cos_vals_0 = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[flag_z + 2];
    for (ibcol = 0; ibcol < 6; ibcol++) {
      VB_tmp_0[ibcol] += VB_tmp[6 * flag_z + ibcol] * cos_vals_0;
    }

    tmp_2[3 * flag_z] = 0.0;
    tmp_2[3 * flag_z + 1] = 0.0;
    tmp_2[3 * flag_z + 2] = 0.0;
  }

  for (flag_z = 0; flag_z < 3; flag_z++) {
    cos_vals_0 = tmp_2[3 * flag_z];
    ibcol = 3 * flag_z + 1;
    b_b = tmp_2[ibcol];
    l_k = 3 * flag_z + 2;
    angles = tmp_2[l_k];
    for (i = 0; i < 2; i++) {
      vo_ref_temp_1 = VB_tmp_0[(flag_z << 1) + i];
      cos_vals_0 += imperix_ctrl_DW.Tab2abc[3 * i] * vo_ref_temp_1;
      b_b += imperix_ctrl_DW.Tab2abc[3 * i + 1] * vo_ref_temp_1;
      angles += imperix_ctrl_DW.Tab2abc[3 * i + 2] * vo_ref_temp_1;
    }

    tmp_2[l_k] = angles;
    tmp_2[ibcol] = b_b;
    tmp_2[3 * flag_z] = cos_vals_0;
  }

  for (flag_z = 0; flag_z < 5; flag_z++) {
    tmp_3[flag_z] = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[flag_z];
  }

  for (flag_z = 0; flag_z < 3; flag_z++) {
    ibcol = flag_z << 1;
    l_k = (flag_z + 1) * 5;
    tmp_3[l_k] = tmp_1[ibcol];
    tmp_3[l_k + 1] = tmp_1[ibcol + 1];
    tmp_3[l_k + 2] = tmp_2[3 * flag_z];
    tmp_3[l_k + 3] = tmp_2[3 * flag_z + 1];
    tmp_3[l_k + 4] = tmp_2[3 * flag_z + 2];
  }

  for (flag_z = 0; flag_z < 4; flag_z++) {
    for (ibcol = 0; ibcol < 6; ibcol++) {
      cos_vals_0 = 0.0;
      for (l_k = 0; l_k < 5; l_k++) {
        cos_vals_0 += imperix_ctrl_DW.A_d[5 * ibcol + l_k] * tmp_3[5 * flag_z +
          l_k];
      }

      VB[ibcol + 6 * flag_z] = cos_vals_0;
    }
  }

  // '<S26>:1:91'
  imperix_ctrl_repmat(&imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[0], tmp_1);
  for (flag_z = 0; flag_z < 6; flag_z++) {
    VB_tmp_0[flag_z] = 0.0;
  }

  for (flag_z = 0; flag_z < 3; flag_z++) {
    cos_vals_0 = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[flag_z + 2];
    for (ibcol = 0; ibcol < 6; ibcol++) {
      VB_tmp_0[ibcol] += VB_tmp[6 * flag_z + ibcol] * cos_vals_0;
    }

    tmp_2[3 * flag_z] = 0.0;
    tmp_2[3 * flag_z + 1] = 0.0;
    tmp_2[3 * flag_z + 2] = 0.0;
  }

  for (flag_z = 0; flag_z < 3; flag_z++) {
    cos_vals_0 = tmp_2[3 * flag_z];
    ibcol = 3 * flag_z + 1;
    b_b = tmp_2[ibcol];
    l_k = 3 * flag_z + 2;
    angles = tmp_2[l_k];
    for (i = 0; i < 2; i++) {
      vo_ref_temp_1 = VB_tmp_0[(flag_z << 1) + i];
      cos_vals_0 += imperix_ctrl_DW.Tab2abc[3 * i] * vo_ref_temp_1;
      b_b += imperix_ctrl_DW.Tab2abc[3 * i + 1] * vo_ref_temp_1;
      angles += imperix_ctrl_DW.Tab2abc[3 * i + 2] * vo_ref_temp_1;
    }

    tmp_2[l_k] = angles;
    tmp_2[ibcol] = b_b;
    tmp_2[3 * flag_z] = cos_vals_0;
  }

  for (flag_z = 0; flag_z < 5; flag_z++) {
    tmp_3[flag_z] = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[flag_z];
  }

  for (flag_z = 0; flag_z < 3; flag_z++) {
    ibcol = flag_z << 1;
    l_k = (flag_z + 1) * 5;
    tmp_3[l_k] = tmp_1[ibcol];
    tmp_3[l_k + 1] = tmp_1[ibcol + 1];
    tmp_3[l_k + 2] = tmp_2[3 * flag_z];
    tmp_3[l_k + 3] = tmp_2[3 * flag_z + 1];
    tmp_3[l_k + 4] = tmp_2[3 * flag_z + 2];
  }

  for (flag_z = 0; flag_z < 6; flag_z++) {
    IB[flag_z] = 0.0;
    IB[flag_z + 6] = 0.0;
    IB[flag_z + 12] = 0.0;
    IB[flag_z + 18] = 0.0;
  }

  // '<S26>:1:94'
  // '<S26>:1:100'
  for (i = 0; i < 4; i++) {
    for (flag_z = 0; flag_z < 5; flag_z++) {
      cos_vals_0 = tmp_3[5 * i + flag_z];
      for (ibcol = 0; ibcol < 6; ibcol++) {
        cos_vals_tmp = 6 * i + ibcol;
        IB[cos_vals_tmp] += imperix_ctrl_DW.pinvA[6 * flag_z + ibcol] *
          cos_vals_0;
      }
    }

    vo_ref_temp[i] = 0.0;
  }

  // '<S26>:1:101'
  memset(&ie_ref_temp[0], 0, sizeof(real_T) << 3U);

  // '<S26>:1:102'
  // '<S26>:1:103'
  // '<S26>:1:105'
  cos_vals_tmp = static_cast<int32_T>(imperix_ctrl_DW.Nl);

  // '<S26>:1:107'
  if (static_cast<int32_T>(imperix_ctrl_DW.Nl) - 1 >= 0) {
    tmp_4 = imperix_ctrl_DW.Ec_dev * imperix_ctrl_DW.Ec_dev *
      imperix_ctrl_DW.Ec_ref2;
    tmp_7[0] = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[0];
    tmp_7[1] = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[1];
    tmp_7[2] = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[2];
    tmp_7[3] = 0.0;
    tmp_7[4] = 0.0;
    tmp_7[5] = 0.0;
    tmp_8[0] = 0.0;
    tmp_8[1] = 0.0;
    tmp_8[2] = 0.0;
    tmp_8[3] = -imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[3];
    tmp_8[4] = -imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[4];
    tmp_8[5] = -imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[5];
    for (flag_z = 0; flag_z < 576; flag_z++) {
      imperix_ctrl_B.E_tmp[flag_z] = imperix_ctrl_DW.Ts *
        imperix_ctrl_DW.K[flag_z];
    }

    for (flag_z = 0; flag_z < 24; flag_z++) {
      cos_vals_0 = IB[flag_z];
      tmp_6[flag_z] = imperix_ctrl_DW.is_max_p - cos_vals_0;
      tmp_6[flag_z + 24] = -(-imperix_ctrl_DW.is_max_p - cos_vals_0);
    }
  }

  for (l = 0; l < cos_vals_tmp; l++) {
    // '<S26>:1:111'
    cos_vals_0 = vo_ref_temp[1];
    b_b = vo_ref_temp[0];
    angles = vo_ref_temp[2];
    vo_ref_temp_1 = vo_ref_temp[3];
    for (flag_z = 0; flag_z < 24; flag_z++) {
      is_temp[flag_z] = (((imperix_ctrl_DW.ONE[flag_z + 24] * cos_vals_0 +
                           imperix_ctrl_DW.ONE[flag_z] * b_b) +
                          imperix_ctrl_DW.ONE[flag_z + 48] * angles) +
                         imperix_ctrl_DW.ONE[flag_z + 72] * vo_ref_temp_1) +
        VB[flag_z];
    }

    // '<S26>:1:114'
    memset(&imperix_ctrl_B.c_b[0], 0, 576U * sizeof(real_T));
    for (flag_z = 0; flag_z < 24; flag_z++) {
      imperix_ctrl_B.c_b[flag_z + 24 * flag_z] = is_temp[flag_z];
    }

    for (flag_z = 0; flag_z < 24; flag_z++) {
      memset(&imperix_ctrl_B.E[flag_z * 24], 0, 24U * sizeof(real_T));
      for (ibcol = 0; ibcol < 24; ibcol++) {
        cos_vals_0 = imperix_ctrl_B.c_b[24 * flag_z + ibcol];
        for (l_k = 0; l_k < 24; l_k++) {
          i = 24 * flag_z + l_k;
          imperix_ctrl_B.E[i] += imperix_ctrl_B.E_tmp[24 * ibcol + l_k] *
            cos_vals_0;
        }
      }
    }

    // '<S26>:1:115'
    for (flag_z = 0; flag_z < 8; flag_z++) {
      memset(&B[flag_z * 24], 0, 24U * sizeof(real_T));
      for (ibcol = 0; ibcol < 24; ibcol++) {
        cos_vals_0 = imperix_ctrl_DW.NN[24 * flag_z + ibcol];
        for (l_k = 0; l_k < 24; l_k++) {
          i = 24 * flag_z + l_k;
          B[i] += imperix_ctrl_B.E[24 * ibcol + l_k] * cos_vals_0;
        }
      }
    }

    // '<S26>:1:116'
    // '<S26>:1:119'
    // '<S26>:1:121'
    for (flag_z = 0; flag_z < 4; flag_z++) {
      ibcol = flag_z * 6;
      for (l_k = 0; l_k < 6; l_k++) {
        is_temp[ibcol + l_k] = imperix_ctrl_DW.TmpRTBAtGainOutport1_Buffer[l_k];
      }
    }

    // '<S26>:1:124'
    // '<S26>:1:127'
    // '<S26>:1:128'
    // '<S26>:1:131'
    // '<S26>:1:132'
    // '<S26>:1:133'
    // '<S26>:1:140'
    for (flag_z = 0; flag_z < 24; flag_z++) {
      memset(&tmp[flag_z << 3], 0, sizeof(real_T) << 3U);
      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 24; ibcol++) {
        b_b = imperix_ctrl_DW.MI[24 * flag_z + ibcol];
        for (l_k = 0; l_k < 8; l_k++) {
          i = (flag_z << 3) + l_k;
          tmp[i] += B[24 * l_k + ibcol] * 2.0 * b_b;
        }

        cos_vals_0 += imperix_ctrl_B.E[24 * ibcol + flag_z] * IB[ibcol];
      }

      Ec_pred[flag_z] = is_temp[flag_z] + cos_vals_0;
    }

    for (flag_z = 0; flag_z < 8; flag_z++) {
      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 24; ibcol++) {
        cos_vals_0 += imperix_ctrl_DW.NN[24 * flag_z + ibcol] * 2.0 * IB[ibcol];
      }

      for (ibcol = 0; ibcol < 8; ibcol++) {
        b_b = 0.0;
        for (l_k = 0; l_k < 24; l_k++) {
          b_b += tmp[(l_k << 3) + flag_z] * B[24 * ibcol + l_k];
        }

        l_k = (ibcol << 3) + flag_z;
        tmp_5[l_k] = imperix_ctrl_DW.Hu_z[l_k] * imperix_ctrl_DW.lambda_z + b_b /
          tmp_4;
      }

      b_b = 0.0;
      for (ibcol = 0; ibcol < 24; ibcol++) {
        b_b += tmp[(ibcol << 3) + flag_z] * Ec_pred[ibcol];
      }

      vo_ref_temp_0[flag_z] = cos_vals_0 / imperix_ctrl_DW.is_max2 *
        imperix_ctrl_DW.lambda_z + b_b / tmp_4;
    }

    imperix_ctrl_mpcActiveSetSolver(tmp_5, vo_ref_temp_0,
      imperix_ctrl_DW.Aineq_z, tmp_6, imperix_ctrl_DW.options_z.MaxIterations,
      imperix_ctrl_DW.options_z.ConstraintTolerance,
      imperix_ctrl_DW.options_z.UseHessianAsInput, ie_ref_temp, &flag_z, x);

    // '<S26>:1:140'
    // '<S26>:1:145'
    for (flag_z = 0; flag_z < 24; flag_z++) {
      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 8; ibcol++) {
        cos_vals_0 += imperix_ctrl_DW.NN[24 * ibcol + flag_z] *
          ie_ref_temp[ibcol];
      }

      is_temp[flag_z] = IB[flag_z] + cos_vals_0;
    }

    // '<S26>:1:148'
    memset(&imperix_ctrl_B.c_b[0], 0, 576U * sizeof(real_T));
    for (ibcol = 0; ibcol < 24; ibcol++) {
      imperix_ctrl_B.c_b[ibcol + 24 * ibcol] = is_temp[ibcol];
      memset(&imperix_ctrl_B.E[ibcol * 24], 0, 24U * sizeof(real_T));
    }

    for (flag_z = 0; flag_z < 24; flag_z++) {
      for (ibcol = 0; ibcol < 24; ibcol++) {
        cos_vals_0 = imperix_ctrl_B.c_b[24 * flag_z + ibcol];
        for (l_k = 0; l_k < 24; l_k++) {
          i = 24 * flag_z + l_k;
          imperix_ctrl_B.E[i] += imperix_ctrl_B.E_tmp[24 * ibcol + l_k] *
            cos_vals_0;
        }
      }
    }

    // '<S26>:1:149'
    // '<S26>:1:150'
    // '<S26>:1:153'
    // '<S26>:1:154'
    // '<S26>:1:157'
    // '<S26>:1:160'
    // '<S26>:1:161'
    // '<S26>:1:164'
    for (l_k = 0; l_k < 4; l_k++) {
      memset(&b_B[l_k * 24], 0, 24U * sizeof(real_T));
      for (flag_z = 0; flag_z < 24; flag_z++) {
        cos_vals_0 = imperix_ctrl_DW.ONE[24 * l_k + flag_z];
        for (ibcol = 0; ibcol < 24; ibcol++) {
          i = 24 * l_k + ibcol;
          b_B[i] += imperix_ctrl_B.E[24 * flag_z + ibcol] * cos_vals_0;
        }
      }

      flag_z = l_k * 6;
      for (ibcol = 0; ibcol < 6; ibcol++) {
        i = flag_z + ibcol;
        is_temp[i] = imperix_ctrl_DW.TmpRTBAtGainOutport1_Buffer[ibcol];
        Ec_pred[i] = tmp_7[ibcol] - VB[i];
      }

      vo_ref_temp[l_k] = Ec_pred[6 * l_k];
      for (i = 0; i < 5; i++) {
        b_b = Ec_pred[(6 * l_k + i) + 1];
        if (rtIsNaN(b_b)) {
          p = false;
        } else {
          cos_vals_0 = vo_ref_temp[l_k];
          if (rtIsNaN(cos_vals_0)) {
            p = true;
          } else {
            p = (cos_vals_0 > b_b);
          }
        }

        if (p) {
          vo_ref_temp[l_k] = b_b;
        }
      }
    }

    // '<S26>:1:165'
    for (ibcol = 0; ibcol < 4; ibcol++) {
      for (flag_z = 0; flag_z < 6; flag_z++) {
        l_k = 6 * ibcol + flag_z;
        Ec_pred[l_k] = tmp_8[flag_z] - VB[l_k];
      }

      maxval[ibcol] = Ec_pred[6 * ibcol];
      for (flag_z = 0; flag_z < 5; flag_z++) {
        b_b = Ec_pred[(6 * ibcol + flag_z) + 1];
        if (rtIsNaN(b_b)) {
          p = false;
        } else {
          cos_vals_0 = maxval[ibcol];
          if (rtIsNaN(cos_vals_0)) {
            p = true;
          } else {
            p = (cos_vals_0 < b_b);
          }
        }

        if (p) {
          maxval[ibcol] = b_b;
        }
      }
    }

    // '<S26>:1:166'
    // '<S26>:1:171'
    for (flag_z = 0; flag_z < 24; flag_z++) {
      cos_vals_0 = 0.0;
      b_b = 0.0;
      angles = 0.0;
      vo_ref_temp_1 = 0.0;
      tmp_c = 0.0;
      for (ibcol = 0; ibcol < 24; ibcol++) {
        tmp_b = imperix_ctrl_DW.MI[24 * flag_z + ibcol];
        b_b += 2.0 * b_B[ibcol] * tmp_b;
        angles += b_B[ibcol + 24] * 2.0 * tmp_b;
        vo_ref_temp_1 += b_B[ibcol + 48] * 2.0 * tmp_b;
        tmp_c += b_B[ibcol + 72] * 2.0 * tmp_b;
        cos_vals_0 += imperix_ctrl_B.E[24 * ibcol + flag_z] * VB[ibcol];
      }

      ibcol = flag_z << 2;
      tmp_0[ibcol + 3] = tmp_c;
      tmp_0[ibcol + 2] = vo_ref_temp_1;
      tmp_0[ibcol + 1] = angles;
      tmp_0[ibcol] = b_b;
      Ec_pred[flag_z] = is_temp[flag_z] + cos_vals_0;
    }

    for (flag_z = 0; flag_z < 4; flag_z++) {
      for (ibcol = 0; ibcol < 4; ibcol++) {
        cos_vals_0 = 0.0;
        for (l_k = 0; l_k < 24; l_k++) {
          cos_vals_0 += tmp_0[(l_k << 2) + flag_z] * b_B[24 * ibcol + l_k];
        }

        l_k = (ibcol << 2) + flag_z;
        tmp_9[l_k] = imperix_ctrl_DW.Hu_o[l_k] * imperix_ctrl_DW.lambda_o +
          cos_vals_0 / tmp_4;
      }

      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 24; ibcol++) {
        cos_vals_0 += tmp_0[(ibcol << 2) + flag_z] * Ec_pred[ibcol];
      }

      tmp_a[flag_z] = 0.0 / imperix_ctrl_DW.vo_max2 * imperix_ctrl_DW.lambda_o +
        cos_vals_0 / tmp_4;
      vo_ref_temp_0[flag_z] = vo_ref_temp[flag_z];
      vo_ref_temp_0[flag_z + 4] = -maxval[flag_z];
    }

    imperix_ct_mpcActiveSetSolver_k(tmp_9, tmp_a, imperix_ctrl_DW.Aineq_o,
      vo_ref_temp_0, imperix_ctrl_DW.options_o.MaxIterations,
      imperix_ctrl_DW.options_o.ConstraintTolerance,
      imperix_ctrl_DW.options_o.UseHessianAsInput, vo_ref_temp, &flag_z, b_x);

    // '<S26>:1:171'
  }

  // MATLAB Function: '<S32>/Input format'
  // '<S26>:1:178'
  // '<S26>:1:179'
  // '<S26>:1:187'
  // '<S26>:1:188'
  // '<S26>:1:189'
  // '<S26>:1:190'
  // '<S26>:1:191'
  // '<S26>:1:192'
  // '<S26>:1:193'
  // '<S26>:1:196'
  // '<S26>:1:197'
  // '<S26>:1:198'
  // '<S26>:1:201'
  // '<S26>:1:203'
  // MATLAB Function 'Closed_loop_control/NN CEC/Input format': '<S169>:1'
  if (!imperix_ctrl_DW.Ec_ref_not_empty) {
    // '<S169>:1:5'
    // '<S169>:1:6'
    imperix_ctrl_DW.Ec_ref_not_empty = true;

    // '<S169>:1:7'
  }

  // End of MATLAB Function: '<S32>/Input format'

  // MATLAB Function: '<S32>/White noise' incorporates:
  //   MATLAB Function: '<S1>/Energy balance'

  // '<S169>:1:11'
  // '<S169>:1:12'
  // '<S169>:1:13'
  // '<S169>:1:16'
  // '<S169>:1:19'
  // '<S169>:1:20'
  // '<S169>:1:23'
  // '<S169>:1:24'
  // '<S169>:1:25'
  // '<S169>:1:28'
  // MATLAB Function 'Closed_loop_control/NN CEC/FFNN/MLFB': '<S173>:1'
  // '<S173>:1:5'
  rtb_VectorConcatenate4[0] = ie_ref_temp[0];
  rtb_VectorConcatenate4[1] = ie_ref_temp[1];
  rtb_VectorConcatenate4[2] = vo_ref_temp[0];

  // MATLAB Function 'Closed_loop_control/NN CEC/White noise': '<S172>:1'
  if (!imperix_ctrl_DW.is_max_not_empty_n) {
    // '<S172>:1:4'
    // '<S172>:1:5'
    imperix_ctrl_DW.is_max_not_empty_n = true;

    // '<S172>:1:6'
  }

  // End of MATLAB Function: '<S32>/White noise'

  // RateTransition generated from: '<S32>/Vector Concatenate4' incorporates:
  //   Concatenate: '<S32>/Vector Concatenate4'

  imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[0] = rtb_VectorConcatenate4[0];
  imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[1] = rtb_VectorConcatenate4[1];
  imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[2] = rtb_VectorConcatenate4[2];
}

// Model initialize function
void imperix_ctrl_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // Set task counter limit used by the static main program
  (imperix_ctrl_M)->Timing.TaskCounters.cLimit[0] = 1;
  (imperix_ctrl_M)->Timing.TaskCounters.cLimit[1] = 10;

  {
    int32_T i;

    // Start for S-Function (TUNABLE_PARAM): '<S150>/S-Function'
    V_mag = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&V_mag, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (ADC): '<S109>/ADC'
    Adc_ConfigureInput(1, 0.021362F, 0.0F, 2);
    Adc_GetPointer(1, 2, &ix_raw_adc_ptr_1_2);

    // Start for S-Function (ADC): '<S127>/ADC'
    Adc_ConfigureInput(0, 0.021362F, 0.0F, 2);
    Adc_GetPointer(0, 2, &ix_raw_adc_ptr_0_2);

    // Start for S-Function (ADC): '<S131>/ADC'
    Adc_ConfigureInput(7, 0.021362F, 0.0F, 0);
    Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

    // Start for S-Function (ADC): '<S113>/ADC'
    Adc_ConfigureInput(6, 0.021362F, 0.0F, 0);
    Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

    // Start for S-Function (ADC): '<S133>/ADC'
    Adc_ConfigureInput(5, 0.021362F, 0.0F, 0);
    Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

    // Start for S-Function (ADC): '<S135>/ADC'
    Adc_ConfigureInput(4, 0.021362F, 0.0F, 0);
    Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);

    // Start for S-Function (ADC): '<S123>/ADC'
    Adc_ConfigureInput(7, 0.00030518F, 0.0F, 2);
    Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

    // Start for S-Function (ADC): '<S125>/ADC'
    Adc_ConfigureInput(6, 0.00030518F, 0.0F, 2);
    Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

    // Start for S-Function (ADC): '<S115>/ADC'
    Adc_ConfigureInput(5, 0.00030518F, 0.0F, 2);
    Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

    // Start for S-Function (ADC): '<S129>/ADC'
    Adc_ConfigureInput(4, 0.00030518F, 0.0F, 2);
    Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

    // Start for S-Function (ADC): '<S117>/ADC'
    Adc_ConfigureInput(3, 0.00030518F, 0.0F, 2);
    Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

    // Start for S-Function (ADC): '<S119>/ADC'
    Adc_ConfigureInput(2, 0.00030518F, 0.0F, 2);
    Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);

    // Start for S-Function (PROBE): '<S229>/S-Function'
    ConfigureProbe(&is1, 0);

    // Start for S-Function (PROBE): '<S231>/S-Function'
    ConfigureProbe(&is2, 0);

    // Start for S-Function (PROBE): '<S233>/S-Function'
    ConfigureProbe(&Vc5, 0);

    // Start for S-Function (PROBE): '<S235>/S-Function'
    ConfigureProbe(&Vc6, 0);

    // Start for S-Function (ADC): '<S121>/ADC'
    Adc_ConfigureInput(3, 0.0047937F, 0.0F, 0);
    Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

    // Start for MATLABSystem: '<S98>/Moving Average'
    imperix_ctrl_DW.obj.isInitialized = 0;
    imperix_ctrl_DW.obj.NumChannels = -1;
    imperix_ctrl_DW.obj.FrameLength = -1;
    imperix_ctrl_DW.obj.matlabCodegenIsDeleted = false;
    imperix_ctrl_SystemCore_setup_m(&imperix_ctrl_DW.obj);

    // Start for S-Function (TUNABLE_PARAM): '<S683>/S-Function'
    reset_mean = 0.0F;                 // Tunable parameter initialization
    ConfigureTunable(&reset_mean, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S237>/S-Function'
    ConfigureProbe(&wm, 0);

    // Start for S-Function (PROBE): '<S239>/S-Function'
    ConfigureProbe(&ie1, 0);

    // Start for RateTransition generated from: '<S32>/Vector Concatenate4'
    imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[0] =
      imperix_ctrl_P.TmpRTBAtVectorConcatenate4Outpo;
    imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[1] =
      imperix_ctrl_P.TmpRTBAtVectorConcatenate4Outpo;
    imperix_ctrl_B.TmpRTBAtVectorConcatenate4Outpo[2] =
      imperix_ctrl_P.TmpRTBAtVectorConcatenate4Outpo;

    // Start for S-Function (TUNABLE_PARAM): '<S685>/S-Function'
    magnetize = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&magnetize, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S681>/S-Function'
    F_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S689>/S-Function'
    w_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S691>/S-Function'
    enable_KF = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_KF, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S695>/S-Function'
    reset_KF = 1.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S693>/S-Function'
    reset_PI = 0.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_PI, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S241>/S-Function'
    ConfigureProbe(&ie1_r, 0);

    // Start for S-Function (PROBE): '<S243>/S-Function'
    ConfigureProbe(&vo_r, 0);

    // Start for S-Function (PROBE): '<S245>/S-Function'
    ConfigureProbe(&ie2_r, 0);

    // Start for S-Function (PROBE): '<S247>/S-Function'
    ConfigureProbe(&ie2, 0);

    // Start for S-Function (PROBE): '<S249>/S-Function'
    ConfigureProbe(&Frd, 0);

    // Start for S-Function (PROBE): '<S251>/S-Function'
    ConfigureProbe(&Vc_m, 0);

    // Start for S-Function (PROBE): '<S253>/S-Function'
    ConfigureProbe(&is3, 0);

    // Start for S-Function (PROBE): '<S255>/S-Function'
    ConfigureProbe(&Vc_m_f, 0);

    // Start for S-Function (PROBE): '<S257>/S-Function'
    ConfigureProbe(&iP_r, 0);

    // Start for S-Function (PROBE): '<S259>/S-Function'
    ConfigureProbe(&iP, 0);

    // Start for S-Function (PROBE): '<S261>/S-Function'
    ConfigureProbe(&vm_q, 0);

    // Start for S-Function (PROBE): '<S263>/S-Function'
    ConfigureProbe(&Frd_r, 0);

    // Start for S-Function (PROBE): '<S265>/S-Function'
    ConfigureProbe(&wm_r, 0);

    // Start for S-Function (PROBE): '<S267>/S-Function'
    ConfigureProbe(&im_d, 0);

    // Start for S-Function (PROBE): '<S269>/S-Function'
    ConfigureProbe(&imd_r, 0);

    // Start for S-Function (PROBE): '<S271>/S-Function'
    ConfigureProbe(&im_q, 0);

    // Start for S-Function (PROBE): '<S273>/S-Function'
    ConfigureProbe(&imq_r, 0);

    // Start for S-Function (PROBE): '<S275>/S-Function'
    ConfigureProbe(&is4, 0);

    // Start for S-Function (PROBE): '<S277>/S-Function'
    ConfigureProbe(&vm_d, 0);

    // Start for S-Function (PROBE): '<S279>/S-Function'
    ConfigureProbe(&im_bet, 0);

    // Start for S-Function (PROBE): '<S281>/S-Function'
    ConfigureProbe(&im_alp, 0);

    // Start for S-Function (PROBE): '<S283>/S-Function'
    ConfigureProbe(&im_bet_KF, 0);

    // Start for S-Function (PROBE): '<S285>/S-Function'
    ConfigureProbe(&im_alp_KF, 0);

    // Start for S-Function (PROBE): '<S287>/S-Function'
    ConfigureProbe(&Fr_bet, 0);

    // Start for S-Function (PROBE): '<S289>/S-Function'
    ConfigureProbe(&Fr_alp, 0);

    // Start for S-Function (PROBE): '<S291>/S-Function'
    ConfigureProbe(&Te_KF, 0);

    // Start for S-Function (PROBE): '<S293>/S-Function'
    ConfigureProbe(&V5, 0);

    // Start for S-Function (ADC): '<S111>/ADC'
    Adc_ConfigureInput(2, 6.1035E-5F, 0.0F, 0);
    Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

    // Start for S-Function (PROBE): '<S295>/S-Function'
    ConfigureProbe(&Te, 0);

    // Start for S-Function (PROBE): '<S297>/S-Function'
    ConfigureProbe(&is5, 0);

    // Start for S-Function (PROBE): '<S299>/S-Function'
    ConfigureProbe(&V6, 0);

    // Start for S-Function (PROBE): '<S301>/S-Function'
    ConfigureProbe(&V1, 0);

    // Start for S-Function (PROBE): '<S303>/S-Function'
    ConfigureProbe(&V2, 0);

    // Start for S-Function (PROBE): '<S305>/S-Function'
    ConfigureProbe(&V3, 0);

    // Start for S-Function (PROBE): '<S307>/S-Function'
    ConfigureProbe(&V4, 0);

    // Start for S-Function (PROBE): '<S309>/S-Function'
    ConfigureProbe(&is6, 0);

    // Start for S-Function (PROBE): '<S311>/S-Function'
    ConfigureProbe(&Vc1, 0);

    // Start for S-Function (PROBE): '<S313>/S-Function'
    ConfigureProbe(&Vc2, 0);

    // Start for S-Function (PROBE): '<S315>/S-Function'
    ConfigureProbe(&Vc3, 0);

    // Start for S-Function (PROBE): '<S317>/S-Function'
    ConfigureProbe(&Vc4, 0);

    // Start for S-Function (CLK): '<S137>/CLK1'
    Clock_SetFrequency((tClock) 1, 1500.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S687>/S-Function'
    enable_FP = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S144>/S-Function'
    ConfigureProbe(&v_alp, 0);

    // Start for S-Function (PROBE): '<S146>/S-Function'
    ConfigureProbe(&v_bet, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S148>/S-Function'
    f_mag = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&f_mag, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (IRQ): '<S153>/S-Function' incorporates:
    //   Constant: '<S155>/clk_id'

    ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
      imperix_ctrl_P.clk_id_Value_o, 0.5F, 0U);
    ConfigureReadTriggerDelayInNs(2000U);
    Adc_SetUserOversampling(0.0F);

    // Start for S-Function (CLK): '<S155>/CLK1'
    Clock_SetFrequency((tClock) 0, 6000.0F);

    // Start for Atomic SubSystem: '<S428>/generation'
    // Start for S-Function (CB_PWM): '<S429>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
    CbPwm_Activate((tPwmOutput) 2, 1);

    // End of Start for SubSystem: '<S428>/generation'

    // Start for Atomic SubSystem: '<S430>/generation'
    // Start for S-Function (CB_PWM): '<S431>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
    CbPwm_Activate((tPwmOutput) 6, 1);

    // End of Start for SubSystem: '<S430>/generation'

    // Start for Atomic SubSystem: '<S432>/generation'
    // Start for S-Function (CB_PWM): '<S433>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
    CbPwm_Activate((tPwmOutput) 3, 1);

    // End of Start for SubSystem: '<S432>/generation'

    // Start for Atomic SubSystem: '<S434>/generation'
    // Start for S-Function (CB_PWM): '<S435>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
    CbPwm_Activate((tPwmOutput) 7, 1);

    // End of Start for SubSystem: '<S434>/generation'
    imperix_MovingAverage_Start(&imperix_ctrl_DW.MovingAverage);
    imperix_MovingAverage_Start(&imperix_ctrl_DW.MovingAverage_p);

    // Start for Atomic SubSystem: '<S554>/generation'
    // Start for S-Function (CB_PWM): '<S555>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
    CbPwm_Activate((tPwmOutput) 0, 0);

    // End of Start for SubSystem: '<S554>/generation'

    // Start for Atomic SubSystem: '<S556>/generation'
    // Start for S-Function (CB_PWM): '<S557>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
    CbPwm_Activate((tPwmOutput) 4, 0);

    // End of Start for SubSystem: '<S556>/generation'

    // Start for Atomic SubSystem: '<S558>/generation'
    // Start for S-Function (CB_PWM): '<S559>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
    CbPwm_Activate((tPwmOutput) 1, 0);

    // End of Start for SubSystem: '<S558>/generation'

    // Start for Atomic SubSystem: '<S560>/generation'
    // Start for S-Function (CB_PWM): '<S561>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
    CbPwm_Activate((tPwmOutput) 5, 0);

    // End of Start for SubSystem: '<S560>/generation'

    // Start for Atomic SubSystem: '<S628>/generation'
    // Start for S-Function (CB_PWM): '<S629>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
    CbPwm_Activate((tPwmOutput) 2, 0);

    // End of Start for SubSystem: '<S628>/generation'

    // Start for Atomic SubSystem: '<S630>/generation'
    // Start for S-Function (CB_PWM): '<S631>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
    CbPwm_Activate((tPwmOutput) 6, 0);

    // End of Start for SubSystem: '<S630>/generation'

    // Start for Atomic SubSystem: '<S632>/generation'
    // Start for S-Function (CB_PWM): '<S633>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
    CbPwm_Activate((tPwmOutput) 3, 0);

    // End of Start for SubSystem: '<S632>/generation'

    // Start for Atomic SubSystem: '<S634>/generation'
    // Start for S-Function (CB_PWM): '<S635>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
    CbPwm_Activate((tPwmOutput) 7, 0);

    // End of Start for SubSystem: '<S634>/generation'

    // Start for Atomic SubSystem: '<S640>/generation'
    // Start for S-Function (CB_PWM): '<S641>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
    CbPwm_Activate((tPwmOutput) 8, 0);

    // End of Start for SubSystem: '<S640>/generation'

    // Start for Atomic SubSystem: '<S642>/generation'
    // Start for S-Function (CB_PWM): '<S643>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 12, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 12, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
    CbPwm_Activate((tPwmOutput) 12, 0);

    // End of Start for SubSystem: '<S642>/generation'

    // Start for Atomic SubSystem: '<S644>/generation'
    // Start for S-Function (CB_PWM): '<S645>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 9, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
    CbPwm_Activate((tPwmOutput) 9, 0);

    // End of Start for SubSystem: '<S644>/generation'

    // Start for Atomic SubSystem: '<S646>/generation'
    // Start for S-Function (CB_PWM): '<S647>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 13, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 13, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
    CbPwm_Activate((tPwmOutput) 13, 0);

    // End of Start for SubSystem: '<S646>/generation'

    // Start for Atomic SubSystem: '<S652>/generation'
    // Start for S-Function (CB_PWM): '<S653>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 10, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 10, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
    CbPwm_Activate((tPwmOutput) 10, 0);

    // End of Start for SubSystem: '<S652>/generation'

    // Start for Atomic SubSystem: '<S654>/generation'
    // Start for S-Function (CB_PWM): '<S655>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 14, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 14, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
    CbPwm_Activate((tPwmOutput) 14, 0);

    // End of Start for SubSystem: '<S654>/generation'

    // Start for Atomic SubSystem: '<S656>/generation'
    // Start for S-Function (CB_PWM): '<S657>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 11, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 11, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
    CbPwm_Activate((tPwmOutput) 11, 0);

    // End of Start for SubSystem: '<S656>/generation'

    // Start for Atomic SubSystem: '<S658>/generation'
    // Start for S-Function (CB_PWM): '<S659>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 15, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 1, 0);
    CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
    CbPwm_Activate((tPwmOutput) 15, 0);

    // End of Start for SubSystem: '<S658>/generation'

    // Start for Atomic SubSystem: '<S672>/generation'
    // Start for S-Function (CB_PWM): '<S673>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
    CbPwm_Activate((tPwmOutput) 0, 1);

    // End of Start for SubSystem: '<S672>/generation'

    // Start for Atomic SubSystem: '<S674>/generation'
    // Start for S-Function (CB_PWM): '<S675>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
    CbPwm_Activate((tPwmOutput) 4, 1);

    // End of Start for SubSystem: '<S674>/generation'

    // Start for Atomic SubSystem: '<S676>/generation'
    // Start for S-Function (CB_PWM): '<S677>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
    CbPwm_Activate((tPwmOutput) 1, 1);

    // End of Start for SubSystem: '<S676>/generation'

    // Start for Atomic SubSystem: '<S678>/generation'
    // Start for S-Function (CB_PWM): '<S679>/PWM' incorporates:
    //   Constant: '<S137>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 1);
    CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
    CbPwm_Activate((tPwmOutput) 5, 1);

    // End of Start for SubSystem: '<S678>/generation'
    imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_f = UNINITIALIZED_ZCSIG;
    imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_i = UNINITIALIZED_ZCSIG;
    imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE = POS_ZCSIG;

    // ConstCode for Triggered SubSystem: '<S82>/Sample and Hold'
    // ConstCode for Triggered SubSystem: '<S81>/Sample and Hold'
    for (i = 0; i < 6; i++) {
      // SystemInitialize for SignalConversion generated from: '<S436>/In' incorporates:
      //   Outport: '<S436>/ '

      imperix_ctrl_B.In_c[i] = imperix_ctrl_P._Y0;

      // SystemInitialize for SignalConversion generated from: '<S437>/In' incorporates:
      //   Outport: '<S437>/ '

      imperix_ctrl_B.In_h[i] = imperix_ctrl_P._Y0_o;
    }

    // End of ConstCode for SubSystem: '<S81>/Sample and Hold'
    // End of ConstCode for SubSystem: '<S82>/Sample and Hold'

    // InitializeConditions for DiscreteIntegrator: '<S18>/Discrete-Time Integrator1' 
    imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE =
      imperix_ctrl_P.DiscreteTimeIntegrator1_IC;

    // InitializeConditions for UnitDelay: '<S170>/Unit Delay1'
    imperix_ctrl_DW.UnitDelay1_DSTATE[0] =
      imperix_ctrl_P.UnitDelay1_InitialCondition;
    imperix_ctrl_DW.UnitDelay1_DSTATE[1] =
      imperix_ctrl_P.UnitDelay1_InitialCondition;

    // InitializeConditions for RateTransition generated from: '<S32>/Vector Concatenate4' 
    imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[0] =
      imperix_ctrl_P.TmpRTBAtVectorConcatenate4Outpo;
    imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[1] =
      imperix_ctrl_P.TmpRTBAtVectorConcatenate4Outpo;
    imperix_ctrl_DW.TmpRTBAtVectorConcatenate4Outpo[2] =
      imperix_ctrl_P.TmpRTBAtVectorConcatenate4Outpo;

    // InitializeConditions for UnitDelay: '<S30>/Unit Delay1'
    imperix_ctrl_DW.UnitDelay1_DSTATE_o = imperix_ctrl_P.M2C.Vc_ref;

    // InitializeConditions for DiscreteIntegrator: '<S210>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE =
      imperix_ctrl_P.PIDController1_InitialCondition;

    // InitializeConditions for UnitDelay: '<S84>/Unit Delay'
    imperix_ctrl_DW.UnitDelay_DSTATE[0] =
      imperix_ctrl_P.UnitDelay_InitialCondition[0];
    imperix_ctrl_DW.UnitDelay_DSTATE[1] =
      imperix_ctrl_P.UnitDelay_InitialCondition[1];

    // InitializeConditions for DiscreteIntegrator: '<S354>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_i =
      imperix_ctrl_P.FluxPI_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S406>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_d =
      imperix_ctrl_P.SpeedPI_InitialConditionForInte;

    // InitializeConditions for DiscreteIntegrator: '<S476>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_j =
      imperix_ctrl_P.MCCPId_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S528>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_e =
      imperix_ctrl_P.MCCPIq_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S599>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_p =
      imperix_ctrl_P.PCCPI_InitialConditionForIntegr;

    // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
    memset(&imperix_ctrl_DW.Inx[0], 0, sizeof(real_T) << 4U);
    imperix_ctrl_DW.Inx[0] = 1.0;
    imperix_ctrl_DW.Inx[5] = 1.0;
    imperix_ctrl_DW.Inx[10] = 1.0;
    imperix_ctrl_DW.Inx[15] = 1.0;

    // SystemInitialize for MATLAB Function: '<S32>/Saturation'
    imperix_ctrl_DW.Ix[1] = 0.0;
    imperix_ctrl_DW.Ix[2] = 0.0;
    imperix_ctrl_DW.Ix[0] = 1.0;
    imperix_ctrl_DW.Ix[3] = 1.0;
    imperix_ctrl_DW.Tol = 0.001;

    // SystemInitialize for Enabled SubSystem: '<S441>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_ctrl_B.Fcn_d, &imperix_ctrl_B.Fcn1_d,
      &imperix_ctrl_P.Subsystempi2delay);

    // End of SystemInitialize for SubSystem: '<S441>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S441>/Subsystem1'
    imperix_ctr_Subsystem1_Init(&imperix_ctrl_B.Fcn_b, &imperix_ctrl_B.Fcn1_i,
      &imperix_ctrl_P.Subsystem1);

    // End of SystemInitialize for SubSystem: '<S441>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S618>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S622>/Fcn' incorporates:
    //   Outport: '<S622>/dq'

    imperix_ctrl_B.Fcn_ct = imperix_ctrl_P.dq_Y0[0];

    // SystemInitialize for Fcn: '<S622>/Fcn1' incorporates:
    //   Outport: '<S622>/dq'

    imperix_ctrl_B.Fcn1_p = imperix_ctrl_P.dq_Y0[1];

    // End of SystemInitialize for SubSystem: '<S618>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S618>/Subsystem1'
    // SystemInitialize for Fcn: '<S623>/Fcn' incorporates:
    //   Outport: '<S623>/dq'

    imperix_ctrl_B.Fcn_l = imperix_ctrl_P.dq_Y0_f[0];

    // SystemInitialize for Fcn: '<S623>/Fcn1' incorporates:
    //   Outport: '<S623>/dq'

    imperix_ctrl_B.Fcn1_b = imperix_ctrl_P.dq_Y0_f[1];

    // End of SystemInitialize for SubSystem: '<S618>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S662>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_ctrl_B.Fcn_c, &imperix_ctrl_B.Fcn1_e,
      &imperix_ctrl_P.Subsystempi2delay_a);

    // End of SystemInitialize for SubSystem: '<S662>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S662>/Subsystem1'
    imperix_ctr_Subsystem1_Init(&imperix_ctrl_B.Fcn, &imperix_ctrl_B.Fcn1,
      &imperix_ctrl_P.Subsystem1_o);

    // End of SystemInitialize for SubSystem: '<S662>/Subsystem1'

    // SystemInitialize for Triggered SubSystem: '<S98>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S667>/In' incorporates:
    //   Outport: '<S667>/ '

    imperix_ctrl_B.In = imperix_ctrl_P._Y0_i;

    // End of SystemInitialize for SubSystem: '<S98>/Sample and Hold'

    // InitializeConditions for MATLABSystem: '<S98>/Moving Average'
    imperix_ctrl_DW.obj.pCumSum = 0.0;
    memset(&imperix_ctrl_DW.obj.pCumSumRev[0], 0, 99U * sizeof(real_T));
    imperix_ctrl_DW.obj.pCumRevIndex = 1.0;
    imperix_ctrl_DW.obj.pModValueRev = 0.0;
    imperix__MovingAverage_Init(&imperix_ctrl_DW.MovingAverage);
    imperix__MovingAverage_Init(&imperix_ctrl_DW.MovingAverage_p);
  }
}

// Model terminate function
void imperix_ctrl_terminate(void)
{
  // Terminate for MATLABSystem: '<S98>/Moving Average'
  if (!imperix_ctrl_DW.obj.matlabCodegenIsDeleted) {
    imperix_ctrl_DW.obj.matlabCodegenIsDeleted = true;
    if ((imperix_ctrl_DW.obj.isInitialized == 1) &&
        imperix_ctrl_DW.obj.isSetupComplete) {
      imperix_ctrl_DW.obj.NumChannels = -1;
      imperix_ctrl_DW.obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S98>/Moving Average'
  imperix__MovingAverage_Term(&imperix_ctrl_DW.MovingAverage);
  imperix__MovingAverage_Term(&imperix_ctrl_DW.MovingAverage_p);
}

boolean_T RT_MODEL_imperix_ctrl_T::StepTask(int32_T idx) const
{
  return (Timing.TaskCounters.TID[(idx)] == 0);
}

uint8_T &RT_MODEL_imperix_ctrl_T::CounterLimit(int32_T idx)
{
  return (Timing.TaskCounters.cLimit[(idx)]);
}

const char_T* RT_MODEL_imperix_ctrl_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_imperix_ctrl_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

uint8_T &RT_MODEL_imperix_ctrl_T::TaskCounter(int32_T idx)
{
  return (Timing.TaskCounters.TID[(idx)]);
}

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
