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
// Model version                  : 19.176
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Fri Feb 27 19:51:56 2026
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
static real_T imperix_balance_ctrl_norm(const real_T x[2]);
static real_T imperix_balance_ctrl_xnrm2(int32_T n, const real_T x[4], int32_T
  ix0);
static void imperix_balance_ctrl_xgemv(int32_T m, int32_T n, const real_T A[4],
  int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2]);
static void imperix_balance_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[2], real_T A[4], int32_T ia0);
static real_T imperix_balance_ctrl_KWIKfactor(const real_T Ac[24], const int32_T
  iC[12], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n);
static void imperix_balance__DropConstraint(int32_T kDrop, boolean_T iA[12],
  int32_T *nA, int32_T iC[12]);
static void imperix_balance_ctrl_qpkwik(const real_T Linv[4], const real_T Hinv
  [4], const real_T f[2], const real_T Ac[24], const real_T b[12], boolean_T iA
  [12], int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[12], int32_T
  *status);
static void imperix_balance_ctrl_trisolve(const real_T A[64], real_T B[64]);
static real_T imperix_balance_ctrl_norm_d(const real_T x[8]);
static real_T imperix_balance_ctrl_maximum(const real_T x[8]);
static real_T imperix_balance_ctrl_xnrm2_l(int32_T n, const real_T x[64],
  int32_T ix0);
static void imperix_balance_ctrl_xgemv_j(int32_T m, int32_T n, const real_T A[64],
  int32_T ia0, const real_T x[64], int32_T ix0, real_T y[8]);
static void imperix_balance_ctrl_xgerc_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[8], real_T A[64], int32_T ia0);
static real_T imperix_balance_ct_KWIKfactor_l(const real_T Ac[192], const
  int32_T iC[24], int32_T nA, const real_T Linv[64], real_T RLinv[64], real_T D
  [64], real_T H[64], int32_T n);
static void imperix_balanc_DropConstraint_g(int32_T kDrop, boolean_T iA[24],
  int32_T *nA, int32_T iC[24]);
static void imperix_balance_ctrl_qpkwik_n(const real_T Linv[64], const real_T
  Hinv[64], const real_T f[8], const real_T Ac[192], const real_T b[24],
  boolean_T iA[24], int32_T maxiter, real_T FeasTol, real_T x[8], real_T lambda
  [24], int32_T *status);
static void imperix_balance_ctrl_predict(const real32_T inputsT_0_f1[14],
  real32_T outputs_0_f1[3]);
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

//
// System initialize for enable system:
//    '<S387>/Subsystem - pi//2 delay'
//    '<S451>/Subsystem - pi//2 delay'
//
void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_g, P_Subsystempi2delay_imperix_b_T *localP)
{
  // SystemInitialize for Outport: '<S390>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_g = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S387>/Subsystem - pi//2 delay'
//    '<S451>/Subsystem - pi//2 delay'
//
void imperix_b_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_g)
{
  // Outputs for Enabled SubSystem: '<S387>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S390>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S390>/Fcn' incorporates:
    //   Fcn: '<S390>/Fcn1'

    tmp = cos(rtu_wt);
    tmp_0 = sin(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 + rtu_dq_m * tmp;

    // Fcn: '<S390>/Fcn1'
    *rty_alpha_beta_g = -rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S387>/Subsystem - pi//2 delay'
}

//
// System initialize for enable system:
//    '<S387>/Subsystem1'
//    '<S451>/Subsystem1'
//
void imperix_bal_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_n, P_Subsystem1_imperix_balance__T *localP)
{
  // SystemInitialize for Outport: '<S391>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_n = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S387>/Subsystem1'
//    '<S451>/Subsystem1'
//
void imperix_balance__Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_g, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_n)
{
  // Outputs for Enabled SubSystem: '<S387>/Subsystem1' incorporates:
  //   EnablePort: '<S391>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S391>/Fcn' incorporates:
    //   Fcn: '<S391>/Fcn1'

    tmp = sin(rtu_wt);
    tmp_0 = cos(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 - rtu_dq_g * tmp;

    // Fcn: '<S391>/Fcn1'
    *rty_alpha_beta_n = rtu_dq * tmp + rtu_dq_g * tmp_0;
  }

  // End of Outputs for SubSystem: '<S387>/Subsystem1'
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

// Function for MATLAB Function: '<S27>/Saturation'
static real_T imperix_balance_ctrl_norm(const real_T x[2])
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

// Function for MATLAB Function: '<S27>/Saturation'
static real_T imperix_balance_ctrl_xnrm2(int32_T n, const real_T x[4], int32_T
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

// Function for MATLAB Function: '<S27>/Saturation'
static void imperix_balance_ctrl_xgemv(int32_T m, int32_T n, const real_T A[4],
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

// Function for MATLAB Function: '<S27>/Saturation'
static void imperix_balance_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1,
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
static real_T imperix_balance_ctrl_KWIKfactor(const real_T Ac[24], const int32_T
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
      xnorm = imperix_balance_ctrl_xnrm2(1, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_balance_ctrl_xnrm2(1, A, ii + 2));
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
        imperix_balance_ctrl_xgemv(b_lastv, c_lastc, A, ii + 3, A, ii + 1, work);
        imperix_balance_ctrl_xgerc(b_lastv, c_lastc, -tau[0], ii + 1, work, A,
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
        imperix_balance_ctrl_xgemv(b_lastv, c_lastc, A, ii + 3, A, ii + 1, work);
        imperix_balance_ctrl_xgerc(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A,
          ii + 3);
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
static void imperix_balance__DropConstraint(int32_T kDrop, boolean_T iA[12],
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
static void imperix_balance_ctrl_qpkwik(const real_T Linv[4], const real_T Hinv
  [4], const real_T f[2], const real_T Ac[24], const real_T b[12], boolean_T iA
  [12], int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[12], int32_T
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
        Xnorm0 = imperix_balance_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H,
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
              imperix_balance__DropConstraint(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_balance_ctrl_norm(x);
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
              cMin = imperix_balance_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D,
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
                  imperix_balance__DropConstraint(kDrop, iA, &nA, iC);
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
            cMin = imperix_balance_ctrl_norm(x);
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

// Function for MATLAB Function: '<S1>/LICCs control'
static void imperix_balance_ctrl_trisolve(const real_T A[64], real_T B[64])
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_balance_ctrl_norm_d(const real_T x[8])
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_balance_ctrl_maximum(const real_T x[8])
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_balance_ctrl_xnrm2_l(int32_T n, const real_T x[64],
  int32_T ix0)
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

// Function for MATLAB Function: '<S1>/LICCs control'
static void imperix_balance_ctrl_xgemv_j(int32_T m, int32_T n, const real_T A[64],
  int32_T ia0, const real_T x[64], int32_T ix0, real_T y[8])
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

// Function for MATLAB Function: '<S1>/LICCs control'
static void imperix_balance_ctrl_xgerc_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[8], real_T A[64], int32_T ia0)
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_balance_ct_KWIKfactor_l(const real_T Ac[192], const
  int32_T iC[24], int32_T nA, const real_T Linv[64], real_T RLinv[64], real_T D
  [64], real_T H[64], int32_T n)
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
      xnorm = Ac[(24 * i + knt) - 1];
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
      xnorm = imperix_balance_ctrl_xnrm2_l(7 - i, A, ii + 2);
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

          xnorm = rt_hypotd_snf(atmp, imperix_balance_ctrl_xnrm2_l(7 - i, A, ii
            + 2));
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
        imperix_balance_ctrl_xgemv_j(b_lastv, c_lastc, A, ii + 9, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i(b_lastv, c_lastc, -tau[i], ii + 1, work, A,
          ii + 9);
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
        imperix_balance_ctrl_xgemv_j(b_lastv, c_lastc, A, ii + 9, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i(b_lastv, c_lastc, -tau[i], ii + 1, work, A,
          ii + 9);
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

// Function for MATLAB Function: '<S1>/LICCs control'
static void imperix_balanc_DropConstraint_g(int32_T kDrop, boolean_T iA[24],
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
static void imperix_balance_ctrl_qpkwik_n(const real_T Linv[64], const real_T
  Hinv[64], const real_T f[8], const real_T Ac[192], const real_T b[24],
  boolean_T iA[24], int32_T maxiter, real_T FeasTol, real_T x[8], real_T lambda
  [24], int32_T *status)
{
  real_T D[64];
  real_T H[64];
  real_T RLinv[64];
  real_T U[64];
  real_T cTol[24];
  real_T Opt[16];
  real_T Rhs[16];
  real_T r[8];
  real_T z[8];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T t;
  int32_T iC[24];
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
  memset(&lambda[0], 0, 24U * sizeof(real_T));
  *status = 1;
  memset(&r[0], 0, sizeof(real_T) << 3U);
  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 24; i++) {
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
        Xnorm0 = imperix_balance_ct_KWIKfactor_l(Ac, iC, nA, Linv, RLinv, D, H,
          8);
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
              memset(&iC[0], 0, 24U * sizeof(int32_T));
              for (i = 0; i < 24; i++) {
                iA[i] = false;
              }

              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_balanc_DropConstraint_g(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&lambda[0], 0, 24U * sizeof(real_T));
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
    Xnorm0 = imperix_balance_ctrl_norm_d(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      tmp = -1;
      for (f_i = 0; f_i < 24; f_i++) {
        if (!cTolComputed) {
          for (i = 0; i < 8; i++) {
            z[i] = fabs(Ac[24 * i + f_i] * x[i]);
          }

          cVal = imperix_balance_ctrl_maximum(z);
          if ((cTol[f_i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[f_i] = cVal;
          }
        }

        if (!iA[f_i]) {
          cVal = 0.0;
          for (i = 0; i < 8; i++) {
            cVal += Ac[24 * i + f_i] * x[i];
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
                cMin = Ac[24 * i + tmp];
                for (kDrop = 0; kDrop < 8; kDrop++) {
                  z[kDrop] += Hinv[(i << 3) + kDrop] * cMin;
                }
              }

              guard3 = true;
            } else {
              cMin = imperix_balance_ct_KWIKfactor_l(Ac, iC, nA, Linv, RLinv, D,
                H, 8);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                for (i = 0; i < 64; i++) {
                  U[i] = -H[i];
                }

                memset(&z[0], 0, sizeof(real_T) << 3U);
                for (i = 0; i < 8; i++) {
                  cMin = Ac[24 * i + tmp];
                  for (kDrop = 0; kDrop < 8; kDrop++) {
                    z[kDrop] += U[(i << 3) + kDrop] * cMin;
                  }
                }

                for (f_i = 0; f_i < nA; f_i++) {
                  cVal = 0.0;
                  for (i = 0; i < 8; i++) {
                    cVal += Ac[24 * i + tmp] * D[(f_i << 3) + i];
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
                t += Ac[24 * i + tmp] * z[i];
              }

              if (t <= 0.0) {
                cVal = 0.0;
                ColdReset = true;
              } else {
                cVal = 0.0;
                for (i = 0; i < 8; i++) {
                  cVal += Ac[24 * i + tmp] * x[i];
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
                  if ((f_i <= 24) && (lambda[f_i - 1] < 0.0)) {
                    lambda[f_i - 1] = 0.0;
                  }
                }

                lambda[tmp] += t;
                frexp(1.0, &exponent);
                if (fabs(t - cMin) < 2.2204460492503131E-16) {
                  imperix_balanc_DropConstraint_g(kDrop, iA, &nA, iC);
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
            cMin = imperix_balance_ctrl_norm_d(x);
            if (fabs(cMin - Xnorm0) > 0.001) {
              Xnorm0 = cMin;
              for (i = 0; i < 24; i++) {
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

void microKernel7561611648325250845(int32_T K, const real32_T *A, int32_T LDA,
  const real32_T *B, real32_T *C)
{
  int32_T idxA;
  int32_T idxB;
  real32_T c;
  idxA = 0;
  idxB = 0;
  c = C[0];
  for (int32_T k = 0; k < K; k++) {
    c += A[idxA] * B[idxB];
    idxA += LDA;
    idxB++;
  }

  C[0] = c;
}

void microKernel15033412493656496525(int32_T K, const real32_T *A, int32_T LDA,
  const real32_T *B, real32_T *C)
{
  int32_T idxA;
  int32_T idxB;
  real32_T c;
  real32_T c_0;
  real32_T c_1;
  real32_T c_2;
  real32_T c_3;
  real32_T c_4;
  real32_T c_5;
  idxA = 1;
  idxB = 0;
  c = C[0];
  c_0 = C[1];
  c_1 = C[2];
  c_2 = C[3];
  c_3 = C[4];
  c_4 = C[5];
  c_5 = C[6];
  for (int32_T k = 0; k < K; k++) {
    real32_T bTemp;
    bTemp = B[idxB];
    c += A[idxA - 1] * bTemp;
    c_0 += A[idxA] * bTemp;
    c_1 += A[idxA + 1] * bTemp;
    c_2 += A[idxA + 2] * bTemp;
    c_3 += A[idxA + 3] * bTemp;
    c_4 += A[idxA + 4] * bTemp;
    c_5 += A[idxA + 5] * bTemp;
    idxA += LDA;
    idxB++;
  }

  C[0] = c;
  C[1] = c_0;
  C[2] = c_1;
  C[3] = c_2;
  C[4] = c_3;
  C[5] = c_4;
  C[6] = c_5;
}

void macroKernel10105731019644652458(int32_T M, int32_T K, int32_T N, const
  real32_T *A, int32_T LDA, const real32_T *B, int32_T LDB, real32_T *C, int32_T
  LDC)
{
  int32_T i;
  int32_T idxA;
  int32_T idxB;
  int32_T idxC;
  int32_T j;
  j = 0;
  idxB = 0;
  while (j < N) {
    idxC = LDC * j;
    i = 0;
    idxA = 0;
    while (i <= M - 7) {
      microKernel15033412493656496525(K, &A[idxA], LDA, &B[idxB], &C[idxC]);
      idxA += 7;
      idxC += 7;
      i += 7;
    }

    while (i <= M - 1) {
      microKernel7561611648325250845(K, &A[idxA], LDA, &B[idxB], &C[idxC]);
      idxA++;
      idxC++;
      i++;
    }

    idxB += LDB;
    j++;
  }
}

void matrixMultiply10105731019644652458(int32_T M, int32_T K, int32_T N, int32_T
  blockSizeM, int32_T blockSizeK, int32_T blockSizeN, const real32_T *A, const
  real32_T *B, real32_T *C)
{
  int32_T K2;
  int32_T N2;
  int32_T i;
  int32_T i0;
  int32_T i0_ub;
  int32_T j1;
  int32_T k;
  int32_T k0;
  int32_T k0_ub;
  int32_T tmp;
  memset(C, 0, static_cast<uint32_T>((M * N) << 2));
  if (blockSizeM >= M) {
    blockSizeM = M;
  } else {
    blockSizeM = div_nde_s32_floor(blockSizeM, 7) * 7;
    if (blockSizeM <= 0) {
      blockSizeM = 1;
    }
  }

  if (blockSizeN >= N) {
    blockSizeN = N;
  } else if (blockSizeN <= 0) {
    blockSizeN = 1;
  }

  i0_ub = div_s32_floor(M - 1, blockSizeM);
  k0_ub = div_s32_floor(K - 1, blockSizeK);
  for (j1 = 0; j1 < N; j1 += blockSizeN) {
    if (j1 > N - blockSizeN) {
      N2 = N - j1;
    } else {
      N2 = blockSizeN;
    }

    for (k0 = 1; k0 <= k0_ub + 1; k0++) {
      k = (k0 - 1) * blockSizeK;
      if (k > K - blockSizeK) {
        K2 = K - k;
      } else {
        K2 = blockSizeK;
      }

      for (i0 = 1; i0 <= i0_ub + 1; i0++) {
        i = (i0 - 1) * blockSizeM;
        if (i > M - blockSizeM) {
          tmp = M - i;
        } else {
          tmp = blockSizeM;
        }

        macroKernel10105731019644652458(tmp, K2, N2, &A[i + M * k], M, &B[k + K *
          j1], K, &C[i + M * j1], M);
      }
    }
  }
}

// Function for MATLAB Function: '<S158>/MLFB'
static void imperix_balance_ctrl_predict(const real32_T inputsT_0_f1[14],
  real32_T outputs_0_f1[3])
{
  int32_T c_dim1;
  real32_T outT_f5_0_f1[70];
  real32_T outT_f7_0_f1[70];
  real32_T tmp[70];
  real32_T outT_f7_0_f1_0;
  real32_T tmp_0;
  boolean_T tmp_1;
  static const real32_T tmp_2[980] = { 3.21475124F, -0.749499083F, -0.706749737F,
    1.53990805F, -4.19570446F, 0.919218957F, 1.80032182F, -0.19973135F,
    0.684478104F, 0.240208134F, 2.25418282F, 2.0332396F, -0.962108076F,
    -1.30364656F, 2.21210408F, -0.393689573F, 1.56215167F, 0.759670258F,
    1.27261782F, -0.107331313F, 0.339805633F, -3.0180366F, 0.249489069F,
    -0.517815053F, 0.0443173647F, 0.699533403F, 0.410107583F, -0.769144416F,
    2.42366648F, 0.495829612F, -0.677773118F, -1.55822766F, 1.89956462F,
    -0.609965563F, -0.397610039F, -1.76524627F, 0.634959698F, 1.37789369F,
    0.0379478931F, 2.83498359F, -2.4556911F, 1.65182912F, -1.91660237F,
    0.223917902F, -1.01633894F, -0.0210897699F, -0.0294902269F, 0.511780381F,
    0.361828744F, -1.35094321F, 0.445376962F, -0.565476954F, 0.0888223127F,
    0.676562488F, -1.06366527F, 0.160821825F, -2.33384371F, -0.623395503F,
    2.4003346F, 0.926458F, -0.582349837F, 0.445469707F, -0.83335954F,
    0.138541445F, -1.58163023F, 0.0373615623F, -1.82859552F, 2.0663197F,
    0.173219457F, 0.672106683F, -1.66518545F, -2.08568788F, -3.78806758F,
    -3.13574839F, 1.78988254F, 0.0613083243F, -0.504235446F, 0.24736923F,
    0.990968704F, 1.68172979F, 1.57388961F, -2.91585636F, 0.852175951F,
    -0.100243635F, -0.909605384F, 1.63709366F, -0.711489081F, 1.1305418F,
    0.629809558F, -2.08313513F, -0.121885687F, 3.40435982F, -1.29696095F,
    -0.097084716F, -0.781933784F, 0.870749295F, 0.549997449F, -0.137387812F,
    -0.383485138F, -1.48999059F, 2.80720115F, -0.758735895F, -0.719047546F,
    1.6111393F, 0.608155608F, 0.469291776F, -1.39066F, 0.152668029F,
    -0.460556239F, -2.66549373F, -1.31873488F, 1.87167764F, 0.70815587F,
    0.917097092F, 2.00506806F, 0.577693164F, -1.37769067F, 0.202227056F,
    0.570002377F, -1.10021174F, -0.520899236F, 1.77758718F, -0.110697575F,
    -3.61315727F, -1.00667858F, 0.776354432F, -1.17978859F, -0.664565623F,
    -2.60369134F, 1.05065095F, 0.321908951F, -0.379147261F, 1.89961219F,
    -1.47172141F, 0.535839617F, 1.86154151F, 1.02951646F, -0.829234123F,
    0.844888926F, 0.57672447F, -1.92060435F, -1.50264513F, 1.80273736F,
    1.23447812F, -0.167764395F, -1.33401072F, -0.972648919F, -0.246567726F,
    -1.77338052F, -0.967940807F, -3.07817531F, -0.814793766F, 0.515951037F,
    -1.2472353F, -4.53427744F, 1.03168F, -1.29119945F, 1.17209494F, 1.40165508F,
    0.847245514F, -0.744030535F, -0.813797355F, 0.995436966F, 0.818072557F,
    1.08666432F, 0.5284428F, -1.32978868F, 2.11506104F, -1.86882222F, 0.787053F,
    -2.3515234F, 1.39071727F, -0.95852977F, 0.941344202F, -0.087624073F,
    1.01477134F, 0.647486389F, -1.28977406F, 0.376479983F, 1.34188628F,
    4.07262564F, -3.48568273F, 0.874065757F, 0.702939749F, -0.712417305F,
    -0.920512378F, 0.368076295F, 1.2803371F, -0.960849643F, 1.16746902F,
    1.09053552F, -1.03406906F, -0.731498957F, 1.88677239F, 1.89141226F,
    -0.808315933F, -0.342783391F, 2.56769562F, 0.527044237F, 1.54939735F,
    1.3987546F, -1.35464358F, 0.388869524F, 0.145249397F, 2.00364208F,
    -1.30845666F, 0.231528908F, -0.367231578F, -2.48055983F, 0.708370507F,
    2.18800473F, 3.30327535F, 1.21318316F, -0.2172672F, -1.12002265F,
    -0.155813947F, 1.21096396F, -0.623311698F, -1.48206973F, 1.94520783F,
    2.61423492F, 0.999752939F, 1.58725345F, -0.886070549F, 2.19494653F,
    -0.72089237F, -1.30206501F, -1.88071489F, -0.230626881F, 1.00376201F,
    0.334203392F, -2.98994064F, 0.556949079F, 0.051870618F, 0.550160885F,
    -1.25177324F, -0.281077862F, -1.16272295F, 0.827035904F, -1.67306447F,
    0.190015942F, -0.152006954F, -0.295905858F, -3.07003951F, 2.65400529F,
    0.621917248F, 0.132098615F, -0.325046808F, -0.52719593F, 2.92649174F,
    -2.6008997F, 0.693409204F, 0.490779936F, 0.108418852F, -1.58975971F,
    0.722523749F, -0.616235852F, -1.19192028F, -0.736933351F, 0.633522809F,
    2.04412F, 0.525607169F, 1.69113171F, 0.670680046F, -1.61769676F, -1.9058007F,
    1.2227416F, 0.389181346F, -0.443399251F, -0.620901F, -0.174267247F,
    2.73123479F, -1.2592504F, -0.601718783F, 0.0750344F, -0.239930466F,
    -1.32380319F, 3.67973638F, 1.39284241F, 3.30464649F, -1.71381032F,
    0.510504842F, -0.445829749F, -0.62458396F, 1.97069418F, -0.50059092F,
    -0.165105343F, -0.378617972F, 0.484201461F, 1.54645729F, 1.19526947F,
    -1.97662175F, 0.69620204F, 2.93220305F, 0.37386176F, -0.144820735F,
    1.38461077F, -0.232650504F, -0.631566465F, -1.73430419F, -0.802883F,
    3.38725305F, 0.492954016F, 1.00284171F, -0.573359132F, -1.18449891F,
    0.705488443F, -0.960739672F, -0.652449846F, 0.542410672F, -0.012339077F,
    0.734969556F, 0.243321061F, 1.00321484F, -0.759484947F, 0.596628726F,
    1.16162705F, 0.677593589F, 1.15363467F, -3.17925453F, -1.34398389F,
    2.92468762F, 0.773250878F, -1.53506851F, 4.0132308F, 1.96733546F,
    1.18176973F, -1.21342027F, 0.102803044F, 0.286119193F, -1.2460537F,
    -1.40256929F, -0.153187394F, -1.76306713F, -1.91234291F, -0.298866838F,
    1.22867572F, -2.65041F, -0.324236095F, -2.0428443F, -1.76528275F,
    -1.52834308F, 1.38716698F, 1.10609579F, -1.48445249F, -0.587889135F,
    0.302556545F, -2.20980239F, 0.237400651F, -2.93835616F, -2.52250957F,
    0.921511889F, 1.28739333F, 0.327468514F, 0.627287865F, 1.27409303F,
    -1.05174851F, 0.0556332171F, 0.84733355F, -3.62790489F, -3.36159515F,
    1.89667249F, -2.17655373F, 1.22969496F, -0.0552662499F, -1.16709244F,
    -0.114110887F, -1.03441834F, -2.59412909F, 3.35597754F, 0.484228194F,
    -1.21514416F, -0.541720629F, -0.496093065F, -0.138700083F, -0.222388074F,
    0.232672542F, 0.557221651F, -0.508723497F, 0.889913142F, -0.772066355F,
    0.020242814F, 0.433919668F, 1.87024236F, -1.35836184F, -0.862093F,
    -1.58236158F, -0.83176446F, 0.580870926F, 1.2176826F, 3.43256068F,
    -3.39698863F, -1.39560068F, -1.11008668F, -1.28485191F, -2.41616964F,
    1.22235239F, 1.26637709F, 1.02287865F, -0.0574627072F, -0.800733924F,
    0.486679882F, -0.886888F, 0.880484402F, 4.41307878F, 1.34699059F,
    1.34510267F, 1.82426786F, -0.65048033F, -1.14338315F, 1.25160408F,
    0.0491192639F, -0.487418294F, 0.636645436F, -0.764748156F, -0.376667708F,
    1.03960681F, -0.711961329F, -0.230344132F, -1.12643349F, -1.12589109F,
    -2.78112483F, 0.14340584F, -0.0783896074F, 0.818820775F, 0.0579636842F,
    0.312479764F, -0.424972117F, -0.643232346F, 0.185154602F, 0.345167726F,
    0.837225258F, -0.83403486F, -1.06623888F, 0.455150396F, 0.538185537F,
    0.673540354F, 3.0522325F, 2.18722701F, -1.38501859F, -0.462284893F,
    -0.505544603F, 0.46413058F, 0.384366155F, -0.73314935F, -0.0961599052F,
    1.05250835F, -0.781618237F, -0.776224196F, -0.403940648F, -0.811380684F,
    0.461196184F, 0.0670649484F, 0.858303547F, 0.78682524F, 0.0450868979F,
    0.0833747759F, -0.44541F, 0.279944569F, -0.0244310796F, -0.39544192F,
    0.123125359F, -0.347818404F, -0.551205218F, 0.178913012F, -1.03333414F,
    -0.363268644F, 1.15012133F, 0.340952337F, 0.432330519F, 0.660504639F,
    -0.0649712682F, -1.40567672F, 0.0126160048F, 0.0595629439F, -0.633048058F,
    2.90899444F, -0.502528F, -0.353085071F, -3.21233916F, -0.759203672F,
    -0.136816934F, 0.79978615F, 0.163412809F, -0.599511504F, -0.94588F,
    -0.348885208F, 0.817661703F, -0.212811977F, 0.482516617F, 0.280914128F,
    0.343203962F, 0.431617588F, 1.17539227F, -1.39943445F, 1.31479299F,
    -1.15339792F, 1.95872307F, 1.85508323F, -0.134996474F, -0.0679469928F,
    0.610740244F, -2.2588F, 1.30831659F, 1.32136309F, 1.20744455F, 2.97362F,
    -0.886285782F, 1.02591097F, -1.11458182F, 1.46520638F, -0.00415156316F,
    1.76763976F, -1.3508867F, -0.151117653F, 0.812926888F, 1.2801193F,
    -1.43378389F, -0.568392038F, 2.08886194F, -0.392009139F, -0.635288537F,
    -1.06702757F, 0.771098375F, -2.10405207F, 0.254276395F, 0.497928888F,
    1.30130303F, 1.04603708F, 0.211426482F, -0.0144274756F, 0.221559584F,
    -2.26969314F, -1.2076751F, 0.154162571F, -0.719006538F, 1.16311514F,
    0.597329F, -1.41170907F, -0.844692F, -2.36825967F, -0.78664F, -1.20496905F,
    0.340454251F, 0.375205874F, 0.291167438F, -0.179175124F, -1.98942626F,
    -0.234387383F, 0.208310857F, 0.663318276F, -0.498770475F, 0.702210188F,
    -1.28003871F, -0.728886425F, -0.181687325F, -1.32975769F, -0.917322457F,
    -0.589293599F, 0.412870407F, -0.00772252306F, 0.154471517F, -0.225858167F,
    -0.708087087F, 0.67547071F, 2.02582741F, -0.17014049F, 0.35920462F,
    1.33774531F, -1.1285038F, 0.0759319F, -0.239150301F, -1.00312579F,
    -0.18945308F, 0.804672241F, -1.19588017F, -0.163610712F, -0.569396436F,
    0.164958626F, 0.705137968F, -1.28559494F, 0.230475888F, -0.310159057F,
    0.563197792F, 1.30086899F, 0.317517102F, -0.714539468F, -0.045916561F,
    -0.06469886F, -1.10400498F, 0.575134575F, -1.57302797F, 1.06904697F,
    -0.35043487F, 0.479660869F, 1.54896295F, -2.56738472F, 1.28280437F,
    0.573771238F, 0.133621559F, -0.183654591F, -0.0828540102F, -1.64939904F,
    -1.15047967F, -1.3475697F, -0.511463523F, 0.649267137F, 1.09755969F,
    -0.688420951F, -1.43314087F, 0.332718283F, 2.10327268F, 0.875929177F,
    -1.38499284F, 1.18539739F, -1.12065601F, -0.339883626F, 0.934966803F,
    -0.703110576F, 0.125430271F, -1.36689293F, -0.892908454F, -0.785796821F,
    -0.995999F, -1.13566303F, 0.113537F, 0.366676301F, -0.364291757F,
    1.94207966F, 0.378042966F, -4.34057808F, -0.321004212F, 2.22973323F,
    -3.72444797F, -3.09602451F, -0.686721265F, 1.44437051F, -0.680028558F,
    2.4678371F, 0.18265143F, 0.971802413F, -0.744793F, -1.58571601F,
    -0.913942397F, 1.1512382F, 3.12086296F, -1.03708124F, -2.15265346F,
    0.314660162F, 1.46836281F, 2.40552735F, 2.88060832F, 0.373790145F,
    2.31562567F, 3.28656507F, -2.00377655F, -2.48108387F, -0.93587178F,
    2.60510468F, 1.60050559F, 3.00657082F, -2.29055071F, -1.99633837F,
    3.81394124F, 1.64025462F, -0.521576464F, -0.0804269761F, 0.756126642F,
    -3.04225636F, 1.16977274F, 0.66688621F, -2.69957876F, -1.3127358F,
    -2.70463419F, -1.17067277F, 2.64954782F, -0.0659463927F, 2.16437912F,
    1.2253958F, 3.60971189F, 1.56435347F, -0.111294739F, -4.36723F, 2.45022416F,
    -2.73321891F, 0.965366662F, 0.293782055F, -1.92508543F, 3.25642109F,
    0.391162723F, -0.513473809F, -1.08988154F, -3.1683681F, -1.74924088F,
    1.58060145F, -2.00821424F, -1.14706111F, 3.83194828F, 1.997944F,
    -1.88588011F, -0.789053202F, -0.413849771F, -2.04341221F, -1.30417502F,
    -2.54994607F, 0.675947428F, 2.32765913F, 2.01889F, 0.757410526F, 2.23663378F,
    -2.07432556F, -3.62461615F, -1.69542706F, 3.96935391F, 3.99527144F,
    -0.0570397452F, 1.67210615F, -1.24510813F, 2.46562958F, 1.85866308F,
    0.746613F, -0.790295839F, 2.75598097F, -0.276638508F, 2.32123423F,
    2.69475198F, -1.92998207F, -3.35736132F, -0.218758225F, -0.711250484F,
    -4.32846308F, 3.20532298F, 0.179833293F, 2.27624464F, -3.10526085F,
    1.3956058F, -1.00122941F, -2.78130436F, 0.309926867F, 2.53346682F,
    1.27461553F, 0.0674294159F, -1.0574944F, -1.82701755F, 2.73270559F,
    -3.66974282F, -3.68232536F, -3.30034065F, -1.42698562F, -0.243943766F,
    3.38136411F, 0.167430937F, -0.885598719F, -1.54368246F, -2.65035844F,
    -0.742522717F, -0.263479114F, 2.33796668F, 2.58436251F, -0.43479988F,
    -2.09692693F, 0.721332133F, 0.618592858F, -0.357308447F, 2.59887719F,
    3.64445114F, 2.56182957F, -0.421050668F, 1.75004637F, -0.270359695F,
    0.664141357F, -0.635865331F, 0.791050673F, 0.405744F, 0.0568631478F,
    -0.194006503F, 0.365073055F, 0.335174948F, -0.274959356F, 0.342170298F,
    0.601151168F, -0.423965573F, 0.977297127F, 0.233925715F, 0.270589709F,
    -0.88997215F, -0.441456139F, 2.6339848F, 1.50590837F, -1.71071708F,
    0.293046296F, -1.07067347F, -0.921991825F, -0.0662860721F, 1.00496626F,
    -0.943216205F, -1.27671039F, -0.710712492F, -0.147993073F, -0.123241179F,
    1.15415716F, -1.04150069F, -0.318400383F, 1.33044064F, -1.20719409F,
    -0.199749023F, -0.348908216F, 0.237781554F, 0.0431933776F, 0.216320544F,
    -0.961444259F, 0.486576259F, -0.819330156F, 0.2912817F, 1.56862748F,
    0.548137963F, -0.260866463F, -0.238781855F, -0.909740508F, -0.335045576F,
    0.0152884927F, -0.0255163591F, 0.5530352F, -0.440142661F, 0.441198856F,
    -0.199471F, 1.85065937F, -0.108413473F, 0.294337928F, -1.69410312F,
    0.346740812F, -0.373709083F, 0.226403952F, -0.308534384F, -0.622950673F,
    1.3885386F, -0.546424568F, 0.963124752F, -0.373249084F, 1.67884266F,
    0.432107538F, -0.209847555F, 0.425995529F, -0.502165735F, -0.855443597F,
    -0.338867128F, 0.490272045F, 0.673130214F, 0.257805824F, -1.61432314F,
    -0.227883279F, 0.794586122F, -0.415808409F, -0.290444255F, 0.677861452F,
    0.128610879F, -0.312889546F, 0.761716485F, -0.759029F, 1.7134856F,
    0.0778834373F, 0.286888957F, -0.250362337F, 0.789251506F, 0.300750256F,
    0.560874403F, -0.801923931F, -0.221643522F, -0.457424462F, 0.173603877F,
    -0.0867232904F, 0.75722003F, 0.26887852F, -1.23918521F, -0.357965261F,
    -0.880900562F, 0.331211627F, -0.254766196F, -0.981249094F, 0.637022316F,
    0.0628055707F, 0.0179730691F, 0.357884973F, 0.539549708F, -0.12748F,
    -0.347742528F, 0.883400083F, 0.397498071F, 0.224604413F, 0.0232152939F,
    -0.129258141F, -0.0750293061F, 0.528302968F, -0.637775958F, -0.525405645F,
    -0.578769F, -0.387879372F, 0.370658636F, 1.22901964F, 0.0928446203F,
    0.38702327F, 1.21671927F, 0.0574093349F, -0.449559808F, -0.0297720116F,
    -0.205857113F, 0.492723048F, -0.522823513F, -0.011710736F, 0.586490273F,
    0.672873497F, 0.345842868F, -2.43008566F, 0.167825699F, -0.840480328F,
    0.0709761F, 2.94552827F, 3.62950826F, -0.0452067666F, -2.53956938F,
    1.09126031F, 0.857565F, 0.571589649F, 0.0476088859F, -0.740256429F,
    -2.55511713F, -0.0203391388F, 0.674231052F, -0.339482844F, -0.264861137F,
    3.31612611F, 0.315347701F, -3.16703796F, 3.01451206F, -0.714047253F,
    -2.10655713F, 2.64550209F, 1.83887911F, 0.809755266F, -0.320504248F,
    -0.15755628F, 0.105984978F, -3.83072686F, 0.270136446F, 0.259652F,
    3.67492628F, 0.0346884467F, -4.14741373F, -3.91321945F, -0.61959213F,
    0.345517814F, -1.83148134F, -0.176683053F, -2.68451405F, 0.920444727F,
    -0.257444561F, 1.34169447F, 0.895065606F, -3.63285112F, -0.25688836F,
    -0.454921037F, -0.0275377631F, 1.04794145F, 2.39669442F, -0.589750528F,
    2.4074502F, -0.171809047F, 0.404077947F, 0.0153363524F, -0.145918041F,
    -2.6319356F, -3.13947654F, 3.36766076F, 2.95099092F, -0.902962387F,
    0.790454626F, -2.72021699F, -1.75014699F, 0.535262048F, 1.14705575F };

  static const real32_T e[70] = { 0.286003262F, -0.6958F, -0.373458833F,
    -1.18083274F, -1.08470297F, -0.842332244F, -0.816837F, -1.92417347F,
    -1.0049926F, -1.17603672F, 0.253489196F, -0.0987642407F, -1.53581774F,
    -0.326292127F, -1.24713218F, -1.74312317F, -0.962675869F, -1.70093548F,
    -1.75535083F, -0.803248465F, -1.83077872F, 0.510583043F, -1.65665209F,
    -1.39906836F, -1.109249F, -0.896060228F, -1.5585705F, -1.602054F,
    -1.82357633F, -0.631943882F, -0.909583509F, -0.292616785F, -1.49165702F,
    -1.0876503F, -1.0610851F, -1.41559792F, -0.805391312F, -1.47838485F,
    -1.27800131F, 0.440722078F, 0.344220221F, 0.32045725F, 0.0293287542F,
    -2.54229355F, -1.0833813F, -0.791409731F, -0.3215276F, -0.634578288F,
    -1.32084322F, -0.53872323F, -1.50449455F, -0.969850063F, -1.34583652F,
    -1.37109077F, -1.02896106F, -0.784324527F, -0.525458694F, -0.48063463F,
    -0.990988731F, -0.787840545F, -1.34492326F, -1.5258292F, -0.854013562F,
    -1.38115883F, -1.71488595F, -0.725341439F, -1.41149008F, -0.623455167F,
    -0.450424135F, -1.08738232F };

  static const real32_T tmp_3[4900] = { 0.0832742676F, -1.6712817F, 0.328374952F,
    -0.0180623382F, -0.554647803F, -0.76479435F, 0.165504739F, -2.37335134F,
    -0.575770676F, 1.2276262F, 1.14924848F, -0.987541F, -2.3157928F,
    -3.14953566F, 1.27286327F, -2.10516405F, -2.3470912F, -2.023592F,
    1.23994327F, 0.955177128F, 1.42919493F, -0.129894733F, -0.0903072804F,
    1.00233126F, -0.326501936F, 0.0744362622F, -0.923780143F, -0.430350542F,
    0.0424115658F, -3.34171128F, -1.75521195F, -0.0418783091F, -1.4440906F,
    -1.82485151F, 1.22607791F, -0.077282533F, -0.180605978F, 0.342677325F,
    -0.79407841F, -2.2345829F, 0.147589669F, 0.0400113F, -1.57546127F,
    -2.96694708F, 0.0727545545F, 0.680143833F, 0.348380506F, 0.192719921F,
    0.808380663F, -1.03513622F, 0.742163956F, 0.556846321F, -3.11808157F,
    0.245419487F, -5.0277791F, 0.296872914F, -0.0263269767F, -4.58221531F,
    -1.1160239F, 0.230815381F, -1.05030513F, -3.83701491F, -0.938127041F,
    -1.62255347F, -2.58884883F, -0.38789326F, 0.615692675F, 0.683428109F,
    0.777201474F, -0.282792F, -0.220965981F, -3.42448521F, 0.180529147F,
    -0.373983979F, -0.638804078F, -0.105704583F, 0.271227092F, 0.684371591F,
    -0.927388191F, 0.583971262F, -2.01433015F, -8.74715424F, -0.972511888F,
    1.68592525F, -0.58381325F, 0.718982279F, 0.243370682F, -0.742594361F,
    -1.63860106F, 0.378154218F, 1.64702582F, 0.822811425F, -0.163301185F,
    -2.30103254F, -0.0848745331F, -0.0182721242F, -1.84603417F, -1.76561928F,
    -0.0336946398F, 1.32952178F, 0.0837229788F, -0.402248055F, 1.14402688F,
    -0.75522238F, -1.4619453F, 2.58065629F, -1.69862533F, -1.43220055F,
    0.312896401F, -0.917739213F, -2.11561465F, -0.0476784334F, -0.0565327369F,
    0.89964354F, 1.87182546F, -1.63477874F, -0.952597737F, -0.0341337062F,
    -1.4649173F, -0.653055787F, -1.05975151F, 1.01573527F, -0.418598145F,
    0.60807F, 0.307121933F, -0.328542084F, -0.614492893F, -1.40330911F,
    1.08891845F, 0.326039225F, 1.16145551F, 0.409160852F, 1.98979151F,
    0.995329142F, 1.42434335F, -1.79140019F, -1.051759F, -0.693462729F,
    -1.51864505F, -1.16256702F, -0.123417735F, -4.07821035F, -0.0990858078F,
    -0.512931049F, -3.74911737F, 0.667191863F, 0.230403915F, -2.21678424F,
    0.457708061F, 0.822906554F, -0.105656326F, -1.34740162F, -3.83435F,
    0.149809584F, 0.537057161F, -1.1649195F, 0.222672105F, -3.48855972F,
    1.55478597F, 0.046459157F, 0.909568F, 0.584361672F, -0.0206699967F,
    0.25363481F, -0.344441831F, -0.164068073F, -0.745832205F, 1.47972798F,
    0.128365383F, 0.431657493F, -1.68416047F, -2.18835211F, 0.230716184F,
    0.49264881F, 1.32865238F, -3.9846642F, 0.456581116F, 2.01253819F,
    -1.45410812F, -3.32415056F, 1.42131817F, -0.297655284F, -0.211847052F,
    -0.668137F, -1.1326232F, -0.412504554F, 0.464011F, -0.814661F, 1.37309432F,
    0.821038902F, -1.18527007F, -0.81898123F, -1.33186471F, -0.427400887F,
    -1.58177245F, -0.161489218F, 0.856691122F, -0.940665483F, -0.0831502378F,
    -1.11025465F, -0.881598F, -2.0274508F, -0.839405596F, -2.15014982F,
    0.650731266F, -1.1262362F, 0.373923928F, -0.126181528F, 0.733752429F,
    0.389776707F, -0.603240609F, -7.71204329F, 0.56295234F, 0.251327F,
    -1.26283073F, -0.320520043F, -0.0880522504F, -2.9032774F, 0.760357082F,
    0.536315143F, 1.56103706F, -0.233865038F, -0.62761873F, 2.54787564F,
    -1.32743263F, -3.00546527F, 0.324916035F, -0.17542091F, 2.04178905F,
    -2.40816307F, -1.00991499F, 0.978880346F, 0.23760736F, -1.94921982F,
    -0.491552323F, -0.0569229312F, -0.645967364F, -1.82143462F, -0.118769959F,
    0.173709095F, -0.899839938F, -0.295095921F, -4.63477659F, -0.412228554F,
    -0.480608761F, -0.419139326F, 0.958856523F, 0.531238675F, 0.474980265F,
    -1.54137576F, -0.477074295F, -0.247465968F, -0.805577934F, -3.12224793F,
    -3.35777521F, -2.22629261F, 0.146730378F, 1.8557322F, 1.89656889F,
    0.206929773F, -1.06752551F, 0.161019787F, -2.89454603F, -0.389236867F,
    -0.428657979F, -3.96794295F, -0.653187573F, -7.42288828F, -0.398332775F,
    -3.37612605F, 0.479615897F, -0.267296284F, 0.239426896F, -2.31309891F,
    -2.68709087F, -0.216360599F, 0.785352886F, 1.69429708F, 0.61307F,
    -1.67550468F, 0.417406172F, -1.29759085F, -0.891821265F, -0.92902118F,
    0.572998583F, 0.631200433F, -0.2136821F, -7.66123152F, -0.467645884F,
    -1.63673508F, -3.96728349F, -0.306296617F, 1.74712539F, 0.469375134F,
    -0.378488123F, 0.326543868F, 0.876525939F, -1.39843023F, 0.49776265F,
    -3.12408495F, -1.22308457F, -0.47056675F, -0.453119874F, -0.334913433F,
    0.210709915F, 0.425901979F, 0.226886436F, 0.673255801F, 0.0354825817F,
    -0.423259705F, 0.099940829F, 0.228769347F, -0.380622089F, 1.18308854F,
    -2.62682199F, -7.39137268F, 0.114744075F, 1.44767773F, -2.72405386F,
    0.864078403F, -1.68564212F, -0.369530648F, -0.295101374F, -1.28488576F,
    -1.84104264F, -2.01763415F, 0.957740963F, -0.771142483F, 0.632213F,
    0.576458633F, -3.32013655F, -0.392025203F, -1.54557359F, 0.718464673F,
    -2.54705358F, 0.210249946F, 1.11000025F, -1.05080187F, -0.285376728F,
    -1.18189251F, -0.646176338F, 0.314913183F, -0.465484351F, -0.984353364F,
    1.00760376F, 0.544664919F, -0.704339564F, 0.381501198F, -0.899721444F,
    -0.0879778191F, 2.10744715F, -1.72928405F, 1.84150624F, -0.434396565F,
    -1.00979459F, -1.47802734F, -0.759405613F, -2.52034736F, 0.193850115F,
    -1.10946023F, -0.0632182211F, 0.300438583F, -0.516259789F, 1.28134763F,
    -0.312753439F, 1.31984699F, -1.97710645F, -0.90356797F, 1.19273186F,
    -1.72155571F, -2.15434146F, -1.20887053F, -5.97070694F, 1.08576465F,
    2.26055288F, -0.963798F, 0.845847607F, 0.493978202F, -1.33212566F,
    0.988398135F, -0.925959051F, 2.56851578F, 1.52497792F, -1.79157484F,
    1.73832858F, -1.92950594F, -1.07114124F, -0.897518814F, 0.134530246F,
    0.117309F, -2.23437142F, -1.19098401F, -5.94894934F, 0.854171872F,
    0.368056089F, 0.589121461F, 0.295650512F, 1.6262207F, -1.72019506F,
    -1.36221337F, 1.77642143F, -4.46879101F, 0.339873F, 0.899758816F,
    0.179408133F, -1.4858408F, 1.62925649F, 0.437784731F, 1.87866938F,
    0.187518492F, -0.563194513F, -1.42929375F, -3.70205021F, -3.80710888F,
    -3.02953172F, -2.14711356F, -0.781511605F, -0.191473052F, -0.262350827F,
    -0.882009F, -0.653239071F, 0.30311954F, -0.288781017F, -0.882717967F,
    -0.556342483F, 0.388980657F, 0.154414281F, -5.20460224F, -0.0120756598F,
    0.34212479F, -0.535560071F, -0.985577881F, -2.14742041F, 0.710979104F,
    0.625261426F, 1.33182776F, -1.98525167F, -2.26866794F, -1.54265821F,
    0.0227160621F, 1.26966691F, 2.62825608F, 0.587764144F, 0.909724951F,
    -0.83844465F, 0.759122849F, -0.915195405F, -1.28300405F, 0.580719411F,
    -1.86890888F, 0.758918166F, 0.191432104F, -1.85939538F, 0.548857212F,
    0.843103588F, -1.38750124F, -0.15729019F, 0.487434477F, 0.892254651F,
    -1.55730081F, 0.579810381F, 0.0293410067F, -0.555173457F, -3.15484881F,
    0.598218858F, -1.28947926F, 0.3690117F, 0.549322486F, -0.659294426F,
    -1.06455362F, -0.131340414F, -0.55972451F, -1.43907022F, 0.923071921F,
    -1.9902885F, -0.589306056F, -0.902021289F, -5.61379528F, -1.47125566F,
    -1.66217184F, 0.742364526F, 1.65247297F, 0.285060495F, -2.83553338F,
    0.670183122F, -1.77328825F, -0.303918689F, -0.203567028F, 0.679792702F,
    0.975838125F, 0.555264771F, -3.69774675F, 1.32757914F, 0.787174225F,
    1.85843611F, -0.156052455F, 0.0462265797F, -3.37766862F, -1.20856798F,
    0.374949068F, -0.277140617F, 1.4505645F, 0.053786505F, -2.42905211F,
    -4.31066036F, -2.69253922F, -1.24288023F, 0.756283581F, 0.685523927F,
    -0.0293619633F, 0.892434239F, 0.649365664F, 0.0838103071F, -0.868502498F,
    0.60438478F, -0.468311787F, -0.134281695F, 1.65759563F, -1.82322848F,
    1.34720135F, -0.288480133F, 0.716772676F, -0.648937166F, -0.164127752F,
    -1.91715169F, 2.38328552F, 0.249622598F, -2.73453951F, -3.85969043F,
    -0.688331664F, -2.26298833F, 0.264242589F, -0.380832851F, -1.75584674F,
    -0.363073498F, -0.621701658F, 1.78841901F, -0.0891377404F, 0.436886F,
    2.02823234F, 0.0103035122F, 0.255891979F, -0.942244232F, 0.648880243F,
    0.173258498F, 0.896036506F, 1.95090795F, -1.62799942F, 0.515329659F,
    -0.210970879F, -1.33192432F, 1.65088642F, 0.527557F, 0.876671F, -4.17285633F,
    1.30412817F, -1.77142596F, -0.270105422F, -3.5138669F, -2.16402531F,
    0.0422157757F, -2.43654323F, 0.898059309F, -0.0869123638F, -0.211701438F,
    -0.27203384F, -0.227813438F, -4.90603781F, 0.656750441F, -1.90197694F,
    0.704232395F, -1.10490191F, -1.0562346F, 1.38303363F, -1.87921476F,
    0.472575694F, 1.00623477F, -0.810889244F, 0.730042636F, -2.80774665F,
    -5.81668758F, -1.18967164F, -1.88113225F, 1.2026608F, 0.905298591F,
    -0.31944117F, 1.59182024F, 0.84101218F, -0.598834038F, 0.701492667F,
    -0.551472187F, -1.26677048F, 0.0180345792F, 0.441623062F, -2.14237332F,
    -2.74802852F, 0.193223834F, -5.32688046F, -1.54488838F, -2.66822243F,
    -4.29260683F, -1.03237772F, 0.723455727F, 0.736165404F, -0.916452646F,
    -0.137627438F, 1.03335071F, -0.874727726F, -1.81061542F, -1.99120402F,
    1.60032225F, -1.13569582F, 0.63887465F, 0.634648502F, 1.46491849F,
    -0.0853811502F, 0.224082455F, 0.535070658F, 0.862369895F, -1.28992665F,
    2.10021949F, -0.0783458F, 0.0883350149F, -3.03193927F, -1.38271296F,
    1.56452858F, -0.686779737F, 0.31799683F, -1.15530515F, -1.92367208F,
    -0.728214681F, 1.5346452F, 0.890806556F, 0.298352867F, 1.92321765F,
    0.947558939F, 0.47201103F, -2.22082829F, -3.43626738F, 0.572840035F,
    -0.885269761F, -1.63035977F, 0.616145F, -1.39049327F, -1.08746946F,
    -3.65254521F, 1.46883738F, 1.71406829F, -1.13641226F, -0.225410029F,
    1.13331926F, -0.415392578F, 0.426342487F, 1.03880954F, -0.256975561F,
    -0.264054537F, -0.941292107F, -2.11102891F, 0.0615938902F, 0.528389692F,
    -1.88565278F, -0.009924246F, 0.525133371F, 1.11892569F, -1.46944249F,
    1.35242331F, -0.454117119F, -1.56303489F, -1.6426357F, -1.23027217F,
    0.373108625F, 0.114934407F, 0.370195F, -0.912983835F, 2.61692595F,
    0.437849402F, 0.234347269F, -0.0965677053F, -3.95051908F, 1.15969741F,
    0.33372122F, 0.840282202F, -3.19108891F, 0.301415622F, -2.56543422F,
    -0.0414712541F, -0.220490396F, -5.12596321F, 0.599319518F, 1.29366648F,
    0.783734858F, -0.923131347F, -0.192146406F, -4.08445644F, 0.257016212F,
    -0.945764661F, -1.33380961F, -2.92474055F, -4.00916958F, -0.259142429F,
    -0.350041747F, 0.0672610402F, -0.718426228F, -1.63092184F, -0.351792425F,
    -1.4736104F, 0.149360329F, -6.01733F, -3.90587306F, -0.44926098F,
    0.615663767F, -0.142852426F, -1.86021101F, -4.82385826F, -0.427831352F,
    0.140586928F, -3.19477487F, -0.667916238F, 0.0222578719F, -0.219977245F,
    -0.0423041F, 0.152504385F, 0.118630216F, 0.305143595F, 0.342740566F,
    -0.207254484F, 0.467088F, 0.641731F, -0.505464137F, -6.14425373F,
    0.654319465F, 0.601458848F, -0.31360957F, -0.805895746F, -1.08649254F,
    -0.794739F, -0.80193007F, -0.475666016F, -0.619042516F, 0.100420296F,
    -2.35164118F, 0.0113160526F, -0.630022347F, -2.66986F, -0.845665693F,
    -4.06955099F, -0.074306272F, -0.935278F, 0.285197496F, -0.734458268F,
    0.795199513F, -1.40544689F, -0.638487875F, -0.0316435173F, -2.80156898F,
    0.165926486F, 0.117815018F, -4.92887545F, -0.133767456F, -0.255882591F,
    0.107462302F, -1.33687031F, -0.46056965F, -0.544715405F, 0.263844699F,
    -0.512439966F, 1.91713834F, -2.33717704F, -0.149416655F, -1.40883124F,
    0.163243815F, -3.28589773F, -2.04779911F, -1.60629928F, 0.600057423F,
    1.23255694F, -0.138676763F, -0.702506244F, 0.671020627F, -2.83152294F,
    -0.262282223F, 0.56335181F, 1.19717574F, -0.833329141F, -0.738956094F,
    0.49030903F, 2.64780116F, -1.76726937F, -0.392047912F, 0.477341861F,
    -1.10611868F, -0.0948555768F, -0.314620376F, -1.86801434F, 0.0752738938F,
    -0.0661366135F, -0.896399617F, -1.00673354F, -0.199384481F, -0.400712699F,
    -1.53669405F, -2.64218879F, 1.21587348F, -0.0163703486F, 0.527442455F,
    0.383036703F, 0.526736081F, 1.3626039F, -0.673583806F, -2.30391669F,
    -2.47523475F, -0.163030982F, -4.04000473F, 0.861779511F, 0.446249545F,
    -1.84303427F, -1.31139922F, -0.633283198F, 0.897471726F, -1.00841963F,
    -1.98354745F, -2.42246318F, 0.798109829F, -0.303697526F, 0.301206499F,
    0.173701808F, -0.563094497F, -4.59901285F, 0.407781512F, 1.10467303F,
    -1.64258158F, -0.984472334F, -1.74300802F, 1.5009433F, -3.55399728F,
    -0.526769757F, 0.290378332F, -0.442473531F, 1.18057942F, 1.8288579F,
    -0.994168937F, -1.35783422F, 1.41091776F, 0.480169415F, -0.107983291F,
    1.34832203F, -0.0970161334F, -2.27427983F, -0.805311382F, 1.4100771F,
    0.158376664F, -1.50804126F, 0.421702325F, -0.799726665F, -0.143500954F,
    -0.658617854F, 0.301275194F, 0.856340051F, 1.40507233F, -2.36014557F,
    -0.82472533F, 0.329159915F, 0.201562896F, -1.30278051F, -0.420014858F,
    -1.79198289F, -0.561579466F, 2.60986924F, -0.338780344F, -0.185123757F,
    -0.552936077F, -0.952487469F, -2.95613027F, 1.23750889F, -1.97230923F,
    -6.07575941F, -1.23130107F, -3.5435462F, 1.04701662F, -4.06927299F,
    -0.0848638F, -1.02357554F, -1.57297134F, 0.834004402F, -2.98893666F,
    3.05786443F, 1.04232454F, 0.0546555184F, -2.55896044F, -1.83609772F,
    0.955842793F, 0.434127F, 0.937922776F, -2.5627389F, 0.98716116F,
    -0.498420537F, 0.565384209F, -5.92615223F, 0.849328578F, -2.33842444F,
    0.183439687F, -0.18062456F, 1.52527738F, -9.58208466F, -2.09990978F,
    -0.553566575F, -1.51807761F, -0.826266766F, -1.66616309F, -0.131504044F,
    0.0555655807F, -1.37089729F, -0.353444964F, 0.159012392F, 0.43424949F,
    -0.803950071F, 0.0783276856F, -8.43457699F, -2.21343493F, 0.27338028F,
    -0.452123374F, -0.457421809F, -0.504828811F, -1.23970962F, -1.25210595F,
    1.00929141F, -1.31933665F, -0.965248108F, 0.0189619288F, -2.2717011F,
    0.357950151F, 1.67697227F, -0.506588399F, 0.927782655F, 0.208771378F,
    -0.0162791666F, -0.982513785F, 0.956840336F, -0.353180617F, -1.73183322F,
    -0.805676877F, 1.00335228F, 0.203206688F, -0.465806931F, -1.95538723F,
    -1.94115436F, -1.52714789F, -1.83401561F, 0.388229638F, 0.58299619F,
    -1.67651856F, 0.270632207F, -0.222737193F, 0.428608924F, -2.16110849F,
    -0.258040696F, -0.242090538F, -0.218681201F, -1.43231785F, -4.65435553F,
    0.72260958F, 1.54054785F, -0.522286236F, 0.143330991F, 0.589525F,
    0.340611607F, 1.11642671F, -2.03399F, -3.6252687F, -0.382974803F,
    -0.130773276F, 0.575835824F, 0.516495645F, -1.88571F, -0.00990445167F,
    -1.0301317F, -0.651163F, -0.64945668F, -1.1854136F, -1.60983849F,
    -0.372235686F, -1.1776824F, 0.940956414F, 0.191822365F, 0.134848952F,
    1.55867755F, -0.228286415F, -5.41165495F, 0.267856687F, 0.0117219472F,
    0.403787613F, -1.07861876F, 0.821287453F, -1.69316F, 0.940482676F,
    -2.69087362F, 0.576864779F, 0.813715696F, 2.12582231F, -1.14787221F,
    -2.15465F, -0.19645381F, 0.214492336F, 0.602757931F, -0.147770375F,
    0.0249827858F, 0.0466224216F, 0.264764339F, 0.583779752F, -1.84646857F,
    1.80124557F, -0.547943771F, -1.62435257F, -0.287544787F, -1.10539234F,
    0.490899205F, 1.72252011F, -1.48200738F, -0.369306386F, -0.131143495F,
    1.42526925F, -0.0968263522F, 0.963339388F, -2.9634974F, -2.87122321F,
    -3.4722414F, 1.65808642F, -1.36623907F, 0.59773773F, 0.0117365355F,
    0.267738581F, 0.245718673F, -2.18095732F, -0.376342773F, -2.29540968F,
    -0.775934815F, 0.0844921693F, -4.7498641F, -1.4207648F, -0.774623871F,
    -0.715034306F, -1.21475565F, -0.01573468F, -1.41988F, 0.318683654F,
    0.602601945F, 1.323524F, 0.0295816734F, 0.118174098F, -0.533660114F,
    -0.0871346593F, -2.14419365F, -0.0643464103F, 0.908267677F, -1.4375385F,
    1.5286659F, 0.194728121F, -5.3214283F, -0.678177416F, -0.130068421F,
    -3.5393014F, 0.146318704F, 0.843114853F, -0.700193167F, -1.79126143F,
    0.372220457F, 2.40809F, -2.75822258F, -1.86558473F, 1.72013462F,
    0.190602228F, -1.21420789F, 0.334140122F, -3.0033381F, -0.708724856F,
    0.0852830708F, -2.10617661F, -0.696832359F, -0.050128147F, 0.181738511F,
    -1.67764831F, 0.852729559F, -2.63423896F, 1.40515649F, 0.00604663463F,
    -5.2445097F, -0.829942524F, -0.480187207F, -0.693994462F, 0.636261463F,
    0.479066432F, -0.658353567F, -0.0573146828F, 0.498072267F, -0.788238764F,
    0.897999227F, -1.80610406F, 1.98153377F, -1.58744013F, 1.07601833F,
    0.829359174F, 0.0244171731F, 1.03347623F, 0.41430822F, -1.40256369F,
    -0.108978041F, -1.03182697F, -3.90171F, -0.352139562F, 1.59165609F,
    -0.449820906F, 0.383221984F, 1.08370113F, -4.51948F, -1.29106975F,
    -0.211019F, -3.96274281F, -2.85300589F, -0.0456845164F, -0.0375132486F,
    -1.03293F, -5.38121271F, -0.257825017F, -0.877672851F, 0.341626137F,
    -0.749563932F, -3.10043621F, -7.26517248F, -0.129231542F, -0.793003142F,
    1.00849378F, 0.917928457F, 3.58685F, -2.54659224F, -0.573798656F,
    -0.811096549F, -5.00424242F, 3.58359456F, 0.431549788F, -4.45328283F,
    0.118504718F, -0.372048616F, -0.892507672F, 0.7293275F, 0.126400933F,
    1.23496687F, -0.10269618F, -0.669535398F, 0.289848864F, -1.40536797F,
    0.722677648F, -0.98430717F, -1.73662031F, 0.580201864F, -4.06886864F,
    1.85574532F, 1.04485214F, -1.72270012F, -0.246744573F, 0.834379554F,
    -4.14361191F, -1.05731821F, 0.817020595F, -0.231634647F, -3.47785258F,
    -0.342648059F, -1.4534868F, -0.431263745F, 0.836436868F, -1.8807528F,
    -3.09754014F, -2.03969216F, 0.350001186F, -2.53457117F, 0.677468777F,
    0.122537419F, -0.852925F, -2.93947721F, 0.751582205F, -3.64611411F,
    0.913421929F, 0.90859735F, 0.260977983F, 0.163145423F, -0.939923167F,
    -2.60607767F, 1.16448689F, 0.775890529F, 0.147289634F, -3.58911872F,
    -0.325556219F, -1.70291281F, 0.958415F, -0.334481299F, -0.139059499F,
    -0.592082262F, 0.0537587814F, -4.34512186F, -2.40504313F, 1.06809413F,
    -1.32573009F, -2.56774879F, -0.883603156F, 0.282108456F, -1.9537425F,
    1.33005345F, -1.55204844F, -0.540356219F, -0.252593F, 1.33291268F,
    0.581731856F, -0.119964905F, 0.0648889095F, -1.64130759F, 0.144401878F,
    0.289087832F, 0.67716F, -1.6876179F, -0.0439028591F, -2.07156801F,
    0.18221207F, -0.949744463F, 0.647303224F, -0.628903F, -2.31055665F,
    1.688779F, -0.851592958F, -1.01245618F, 0.756127298F, -0.472011894F,
    -1.50684452F, 0.129336506F, -1.04747713F, -0.0478156731F, 1.59502745F,
    -0.145046711F, -1.15833402F, -0.0810685307F, -0.169359311F, 0.325220585F,
    1.48378897F, 1.08616745F, 1.2522068F, 0.144252613F, -1.01181734F,
    0.270851642F, -1.04769886F, -0.40512526F, -1.87921989F, 1.27600157F,
    0.354597598F, 0.36215362F, 0.299843282F, 0.560221F, 0.765525937F,
    -0.980193198F, 0.282664984F, -0.925274432F, -0.292261481F, -1.7500633F,
    0.00890046638F, -0.506645501F, 0.276922703F, -1.06809771F, -2.45170784F,
    -0.0394710042F, -0.269165188F, 0.560438454F, 0.440432489F, 0.27475819F,
    -0.528482735F, -2.44962049F, -1.91738355F, 0.977408826F, 1.03559017F,
    1.9403255F, -0.200974718F, -0.697570086F, -1.24231267F, -2.07344127F,
    0.170373946F, -0.0339752287F, 0.486545742F, 0.819313288F, 0.211648554F,
    0.12910156F, -0.998489857F, -0.265815347F, 0.407863498F, 0.592548072F,
    0.424855918F, 0.114547618F, 0.656833827F, -0.342329502F, -0.196675703F,
    -0.169550285F, 0.245100558F, -0.336436063F, 0.0633960068F, 0.773526967F,
    -0.595023572F, 0.0816092864F, -0.46615532F, 2.14351892F, 1.36164379F,
    0.679688156F, -0.917363346F, -0.392232865F, -1.11291158F, -2.6121316F,
    0.54966F, 1.06569755F, 0.403542727F, -0.370943844F, 2.03675914F,
    -0.31155622F, -0.760324359F, 0.14520742F, 0.785050094F, 0.659072518F,
    0.267589182F, 2.4554925F, 0.321032554F, 0.544120073F, 3.03204131F,
    -0.729465F, -0.764335334F, -0.221003011F, -1.39965332F, 0.223171234F,
    0.171264783F, -7.14684725F, 0.00509873452F, -0.334087551F, -0.153908789F,
    0.841253817F, 0.479640752F, -1.94228554F, -4.92430258F, -1.07964432F,
    1.38883901F, -1.20183384F, -1.03850591F, -2.86876941F, 0.453991354F,
    -0.305041492F, -2.82428932F, 0.876248717F, 0.646279573F, 0.253009379F,
    1.59123135F, 0.983279288F, -0.532172918F, -4.64654827F, 0.359246373F,
    0.0407891944F, -0.0106209908F, -0.658229649F, -0.372647136F, -2.59974813F,
    0.287290066F, -0.222277299F, 0.186122715F, 0.0979403332F, -2.1243012F,
    0.443358153F, -0.6068964F, -1.73784459F, -0.585454941F, -2.00476456F,
    -1.73087645F, 0.0627822429F, 1.75641787F, 1.05959523F, 0.864703417F,
    0.352484614F, 0.361112177F, 0.195591941F, -2.15267777F, -0.522316396F,
    -1.98462391F, -0.900417089F, -1.58602941F, -1.79810524F, -2.10562348F,
    -0.181895763F, 0.959565043F, -1.57815671F, 0.489335954F, 0.603582323F,
    0.812455833F, 1.07453859F, 1.21301734F, 0.403313786F, -3.45522523F,
    0.24807319F, -0.118722707F, -1.21820211F, -2.59922981F, -2.48573852F,
    0.802194536F, -1.59215379F, -2.85943699F, -3.77757049F, 0.457846522F,
    -4.29951715F, 0.273849666F, -7.52563143F, -0.896618903F, -0.965930641F,
    0.0743058F, -0.823021114F, -0.0839170143F, -3.90526843F, 1.29733407F,
    0.504330695F, -0.121346727F, -3.29900503F, -0.194850639F, -0.415103287F,
    -0.904900849F, -1.22594655F, -1.44146693F, -1.82336891F, 1.33635867F,
    0.123493209F, -2.10231566F, -0.593408227F, -0.949458F, 0.80025655F,
    -0.0525036752F, -1.1292429F, 2.2561202F, 1.54729426F, 1.11117F, 0.166232094F,
    -0.827204704F, 2.25558257F, -3.78239894F, -0.824875176F, 1.83899951F,
    0.162356973F, 0.476936191F, 1.84331477F, -1.55148029F, -2.53518414F,
    -0.15156348F, -0.635956645F, 0.172637373F, -3.54891706F, -1.59428799F,
    2.23168612F, 0.410375595F, -0.826698542F, -1.66833031F, 1.28708136F,
    -0.196763173F, -0.496146321F, 0.254589647F, -1.22984231F, -0.122777387F,
    1.02523375F, -0.373501927F, 2.02683854F, 5.08603334F, 0.803635776F,
    1.10130441F, -1.41931689F, 0.349876285F, -0.0549339801F, -0.353431F,
    -0.126679942F, -0.448954493F, -0.332542807F, 0.531988382F, -0.0495536402F,
    -0.338623196F, -6.09113073F, -1.09916866F, -0.294777095F, -2.00254583F,
    -3.05279875F, 0.858465791F, -0.641107857F, -0.109888375F, -0.334934801F,
    0.577657819F, -1.48695743F, -0.64898628F, -3.9077704F, -2.23423195F,
    -0.636018813F, -0.269629687F, 0.0145852463F, 0.178076431F, 0.204154298F,
    -1.07243645F, -0.0149970306F, 0.019160945F, -0.413402F, -0.122204542F,
    -0.897087693F, 0.0125024775F, -0.909583151F, -0.658853F, -3.49100471F,
    -0.992939651F, -1.88913894F, 0.24967967F, 1.77930772F, -0.0249132421F,
    0.109524548F, -0.248526961F, -0.550831079F, -3.12554908F, -2.12776756F,
    -0.151203126F, -1.08940089F, -3.95318317F, -0.460862637F, -0.323336959F,
    -1.10884297F, -0.411007255F, -0.480152905F, -0.251424164F, 0.153881758F,
    -0.396196336F, -2.66880274F, -0.401998609F, -2.13339639F, -0.554669738F,
    1.23536098F, -1.52895844F, -3.53925967F, -0.123853385F, -0.11403355F,
    -0.610980868F, -3.23447347F, -4.57712889F, -0.218128487F, -1.93232775F,
    -3.76923633F, 0.22954303F, -0.682394207F, -1.49663246F, -2.66846895F,
    -0.784236908F, -5.49514532F, -1.29076982F, 0.411735147F, 0.339840025F,
    -0.244588792F, 0.228041127F, 1.57988167F, -1.47154462F, -2.99780798F,
    -0.0846490636F, -2.95465088F, -1.23877645F, 0.167413235F, -2.51960397F,
    -1.98065054F, 0.233084053F, -0.702547491F, -1.18154728F, -0.0556484535F,
    0.821227968F, -2.86507988F, 0.690518916F, -0.216049626F, 2.00182652F,
    -2.07293701F, -7.3829565F, 0.287449211F, -1.84619582F, -2.13152647F,
    0.925899386F, -0.596409619F, -1.45111084F, -1.90966427F, -0.0680923536F,
    0.143950492F, 0.863323867F, -3.87662292F, -3.29313374F, -2.53017449F,
    1.97219968F, 1.15062118F, 0.46204865F, 1.08644819F, -0.414547265F,
    0.68294245F, -0.545090139F, -0.990606487F, -1.71248174F, -0.531475127F,
    -0.559002638F, -1.63182282F, 1.79735529F, -4.30831861F, 1.57738948F,
    -0.457852662F, 0.41832F, 0.36877346F, -0.14054206F, -1.30072749F,
    0.930444837F, 1.27725828F, -0.180162862F, 0.259562939F, -2.12843609F,
    -1.00984764F, 0.673914611F, -0.936028779F, -0.0583448112F, 0.492414474F,
    0.0941330194F, -3.51723337F, -0.358543038F, 0.20984073F, -1.54498947F,
    0.421114981F, 0.167617768F, -0.362924099F, 0.667427123F, -1.86461949F,
    -0.620360494F, 0.192266226F, 0.643249214F, -1.21625721F, 0.445250273F,
    0.247384712F, 0.330384791F, -4.09975433F, -1.4291172F, 0.274065673F,
    0.0337202586F, -2.848104F, -0.0717461631F, -0.577405572F, -1.17671704F,
    -0.0753322F, -3.6353519F, -0.500728905F, 1.03826392F, -4.47476768F,
    -0.0215353649F, 1.11668587F, 0.181249961F, -1.06176627F, 0.690345347F,
    -0.083672829F, -3.58167171F, -2.93982863F, -0.780362F, 0.403492242F,
    -1.2960937F, -0.964457154F, -2.262393F, 0.261319876F, -0.1877359F,
    -2.29498887F, -1.43278456F, -1.54217398F, -0.908019781F, -0.721927524F,
    -1.90580618F, -8.34936714F, -1.95249748F, -2.93476367F, -1.29454541F,
    -0.717857897F, 0.058282271F, -4.67781878F, 1.16471577F, 0.408602715F,
    -1.75431979F, -0.432310611F, -2.1284461F, 0.755134F, -0.130984336F,
    -2.36952949F, -2.27005029F, -0.296615332F, -2.35815525F, 1.32607698F,
    -0.671373546F, -1.48559391F, -3.54717708F, -1.46362019F, -2.73883343F,
    -0.523036182F, -0.489105314F, -0.217682511F, 0.229820386F, -1.6849736F,
    -3.41791368F, -2.60187221F, 1.05325067F, -0.568867922F, 1.16270983F,
    0.0240534898F, -0.744505048F, 0.665685773F, 0.544543445F, 0.0990419164F,
    0.705654F, -0.633425653F, -0.0875370353F, -1.1572237F, 0.809785604F,
    0.752472758F, -0.175618932F, -0.732535541F, -0.966495F, -0.0884524286F,
    -0.897208571F, -3.32830882F, -1.37246013F, -0.148999453F, -1.94079518F,
    0.474787742F, 0.867079675F, -0.917211056F, 1.25100029F, -0.0343011916F,
    1.35443783F, -0.98142451F, -1.0605967F, -1.02740061F, -0.673437893F,
    0.0572998896F, -0.722872138F, 0.591510296F, -0.300241709F, -0.321876168F,
    0.646143377F, 1.46192133F, 0.110198632F, 0.804882467F, 0.145793691F,
    1.78976583F, 0.985024F, -1.25862288F, -4.71610737F, 1.20700729F,
    0.795130908F, 0.270147979F, -0.661934495F, -0.48797363F, -0.181551278F,
    -2.89459729F, -0.142828956F, -0.437946767F, 0.0129855881F, -1.94778991F,
    -0.594815195F, -1.3492558F, -0.72904408F, -1.18792534F, 1.12026727F,
    0.3857418F, -1.39074135F, 0.838229299F, -0.882735491F, 0.152921706F,
    -3.14597273F, -1.77295113F, 0.841446F, -0.23864238F, -0.123018369F,
    0.971746087F, -0.397634059F, -0.810747802F, 0.305860072F, -0.293441713F,
    1.18878078F, -0.854288518F, -0.390265733F, 0.121753782F, 0.621027F,
    -1.38001406F, 0.979048193F, -2.06224751F, -1.07681537F, -0.925793409F,
    -0.104178F, 0.737843633F, 0.839133859F, -2.04764318F, -1.17095339F,
    -0.109892011F, -1.11281991F, 0.295214385F, 0.194623873F, 0.205571696F,
    -1.37183607F, 0.900537848F, 1.2843976F, -1.36222458F, 1.11299026F,
    0.970194399F, -1.10371661F, -0.946073532F, -0.265977919F, -0.0246711411F,
    -0.566884398F, -5.13740301F, -0.481029898F, 1.06179285F, -0.426372945F,
    -1.66949403F, -0.142868489F, -2.59578824F, -4.4480443F, -0.650928319F,
    1.59696305F, -0.971015394F, 1.4487257F, -0.262237817F, 0.435350448F,
    -3.04375553F, -0.516109824F, 1.52702701F, -0.891521633F, -0.872502446F,
    -1.7899127F, -6.52508211F, -1.53245032F, -1.99011588F, -1.60816026F,
    0.65653652F, 0.220295519F, -2.37880158F, 0.674351692F, 0.554265261F,
    -0.13721776F, 0.497621506F, 1.1645534F, -0.07438308F, -3.30165029F,
    -0.146577612F, -2.95763206F, -0.206856832F, 0.501575112F, -0.535879195F,
    1.04859102F, 0.278470755F, -0.510840714F, -2.36624479F, 1.65542865F,
    -1.43137085F, 0.860494554F, 0.957979321F, -1.04503477F, -1.49925017F,
    0.912095F, 0.411324531F, -0.945760787F, -1.35708797F, -3.93920493F,
    -0.286293656F, -1.67357695F, 0.0612508543F, -0.723912299F, 0.381880343F,
    -0.0159050245F, 1.43565547F, 0.327876031F, 0.241611302F, 1.36572468F,
    -1.39351487F, -0.706377447F, 0.19881326F, -2.28586817F, 0.336828262F,
    0.617132306F, -3.91424799F, 0.692640662F, 1.12894785F, -0.875046194F,
    -1.89460731F, 0.0466435291F, -1.94245231F, 0.737179339F, -1.18076658F,
    0.140797734F, -1.08879793F, -1.92079556F, -4.09660912F, -0.576288342F,
    0.085810028F, 1.8616F, 1.5235914F, 0.756733F, 0.0464782566F, 0.0228288975F,
    -0.887161195F, 0.342045367F, -2.17278743F, -0.413037628F, -0.236483291F,
    1.5049324F, -0.969859302F, 0.785441458F, -2.28996062F, 0.502087F,
    -0.13429068F, -1.48794746F, -2.72893453F, -2.03129363F, -0.389848977F,
    0.689958394F, 2.76195359F, -0.450553983F, -0.964444697F, 0.55308485F,
    -0.616639853F, 0.111899965F, -0.447098941F, 1.35373783F, 1.50143111F,
    -0.162642539F, -0.374575913F, -1.29572093F, -0.908167F, 1.32054532F,
    1.73006356F, 1.68160951F, 0.0354997F, -1.47433269F, 0.705046833F,
    1.85253477F, -4.28659105F, -4.00290108F, -2.517874F, 1.24529421F,
    -0.361399084F, 2.69728112F, -0.290332466F, -0.649625F, 0.936366796F,
    -1.3512665F, -1.45888305F, 0.500113785F, -0.531210661F, -2.58744717F,
    -5.56317139F, -0.390087247F, -1.51444197F, -0.542555392F, 0.996158481F,
    0.486229807F, -3.40539455F, 2.18845654F, 0.897148788F, 2.18367052F,
    0.440303326F, -1.79634738F, -0.145306125F, -0.00740041444F, 1.91600072F,
    -0.130535513F, -0.647311509F, 2.8358686F, 1.04026043F, -0.818767488F,
    -1.75373065F, -0.415372252F, -1.34826052F, -1.38715804F, 3.19554615F,
    1.6755625F, -1.23797894F, 0.76359123F, 0.422161639F, -0.961878896F,
    1.24475348F, 0.551770866F, -1.11294031F, -2.23012376F, -1.6239208F,
    0.707431793F, 2.08570957F, -0.0135949664F, 0.572289526F, -0.547043681F,
    0.444090068F, 0.198020637F, 0.0404682904F, -0.291368753F, -1.37282681F,
    -0.399046093F, 1.09335303F, -2.71050406F, 3.32647943F, 0.945453525F,
    1.69021571F, 2.06002021F, 0.430342168F, 2.69676399F, -0.0525043309F,
    -1.68828189F, -0.743833721F, -0.911171436F, -1.28931606F, 0.205630586F,
    -1.87629128F, 0.0443967022F, 2.15914893F, 0.0108377F, 0.281002343F,
    1.02010763F, -1.2288518F, -2.44828033F, -0.357188165F, 1.65456462F,
    -0.456981391F, 0.962759137F, -0.536786735F, 1.72223294F, 1.88191772F,
    -0.785134F, -0.566220343F, -4.57362652F, 1.36675775F, 0.0178084802F,
    1.0446341F, 0.119599849F, -1.60182357F, -0.889053106F, -3.06188869F,
    -0.738399446F, 0.0220985617F, -2.02521086F, -0.828177035F, -1.05284774F,
    -5.92411566F, 1.31080103F, -1.98448265F, -1.43138361F, 1.80189955F,
    -0.578489304F, -0.385758817F, 1.05286765F, -0.399974525F, -1.75226879F,
    0.16643618F, -2.74398947F, -0.822294235F, -2.62144184F, -4.00772858F,
    0.226507872F, -2.47787213F, -0.4690018F, 1.77460039F, -0.371760756F,
    -2.53701687F, 1.18281054F, -1.14225042F, 1.76910067F, 0.345763445F,
    0.863203645F, 1.73209631F, 0.380641103F, -3.3054173F, 0.893003106F,
    1.08757746F, -1.54706144F, 0.790945709F, 0.513546348F, -0.923036456F,
    1.8229928F, -0.0698972717F, -0.223161712F, -3.75243306F, -3.81382394F,
    0.310182571F, 0.237494811F, 0.356933743F, -1.80044043F, -1.22027552F,
    1.33888674F, -1.67173195F, 0.656185627F, -1.27491701F, -2.04443F, 2.7124064F,
    -0.386758417F, -0.0665474385F, 1.0883528F, 1.01237345F, 0.130488813F,
    2.04752F, 1.80480993F, -4.96173525F, 0.366886348F, -0.198884457F,
    0.910876751F, -0.48943758F, -0.180105373F, -3.74630404F, -0.929064035F,
    0.559856355F, 1.63316441F, -0.639338136F, -0.272348255F, -5.83517027F,
    -1.36356521F, -1.36073041F, -1.03775799F, -0.899067104F, 0.4376809F,
    0.21085228F, 0.833174944F, -0.465744495F, 0.0291977338F, 0.903132141F,
    -0.087893F, -1.90840495F, -1.78001082F, -0.837060332F, -0.0786351934F,
    -2.70054126F, 0.0868880749F, 0.0129877226F, 0.562404692F, 0.569987118F,
    -0.0375059135F, -0.369674265F, -1.89763796F, -0.912832737F, -0.955915689F,
    0.126821235F, -0.449110925F, -0.452121377F, 0.159788F, 0.423022866F,
    -0.541483819F, 1.16053128F, 0.150442258F, 0.0371130221F, 0.813780367F,
    -2.69575596F, -1.91263771F, -2.68184662F, 1.3491472F, -0.5269F,
    -0.591918528F, 0.270182163F, -0.958401501F, -1.34358835F, -0.206668526F,
    -0.755105317F, 1.0078609F, -0.07551606F, -0.305869758F, -3.31277F,
    0.675377607F, -2.34009504F, -1.29844058F, -1.1274507F, 0.331343174F,
    -0.492310703F, -2.08680511F, 1.14176416F, -0.415033042F, -0.116562992F,
    -2.39554167F, -2.41586447F, -1.15718567F, -0.595295131F, -0.674430788F,
    0.398141265F, -0.906432688F, -0.875419497F, -1.6150161F, -2.93576074F,
    0.670405805F, 0.0953706652F, -2.83504891F, -1.53068304F, 0.19449465F,
    1.1336962F, 0.603256643F, -0.420542806F, 0.247220293F, -5.2288084F,
    -0.955562413F, -1.71071625F, -4.81370354F, -1.16233397F, 0.389577985F,
    0.628203154F, -0.611674964F, -0.187099308F, -0.0723117366F, -1.70526087F,
    0.432126909F, 0.840522528F, 1.03452325F, 0.576262057F, -0.265253216F,
    1.29800785F, 0.355643F, -4.94177246F, 0.194338202F, -0.400090635F,
    -2.39567542F, -0.375143915F, 0.982256174F, -0.184371293F, 0.980435491F,
    -0.367908955F, -2.51555967F, -2.53324962F, -0.731501162F, -1.18821633F,
    -2.07702422F, 0.319715649F, -0.571371257F, 0.700039923F, 2.57893562F,
    -0.420075178F, 0.0485791713F, -1.05947363F, 0.0441348366F, -3.6786716F,
    -1.47161877F, -3.29542613F, 1.19894421F, 1.69321465F, 0.849106967F,
    -5.16230488F, 0.680917084F, -2.44530845F, -1.6751616F, 0.277687758F,
    -0.315104753F, 0.750344753F, 0.490846306F, -8.12840939F, -3.08864F,
    -1.04926205F, -0.369224966F, -1.54089177F, -1.17149651F, -4.77701521F,
    -1.17339313F, 0.46138978F, -0.0097083766F, -0.669164896F, -1.05896759F,
    1.22719455F, -0.0838277116F, 0.761628687F, 0.963391185F, 1.03459239F,
    -0.986724854F, -3.0188446F, -1.77009845F, -2.57736874F, -0.740494668F,
    -5.04843855F, 1.13934112F, 0.591851294F, 0.161576271F, -0.77003479F,
    -0.489707738F, -0.352809638F, -3.04712391F, -0.286259621F, 0.438010484F,
    0.25288102F, -1.58894408F, -0.703674138F, -2.39007783F, -3.34003949F,
    -0.964014173F, -1.27945507F, 1.14074349F, -0.289888978F, -0.784663796F,
    -1.64427352F, -0.222081304F, -0.0363736749F, 1.87802446F, -0.0402154F,
    -2.07484245F, -3.09781718F, 1.06141782F, -1.95500112F, 0.718560576F,
    0.522773862F, -1.57473755F, 0.608360469F, 0.516930044F, -0.116655268F,
    -0.127940118F, -0.432010382F, -1.05240488F, -1.42855704F, 0.784495592F,
    1.11238694F, -5.19620419F, 2.79353F, -0.126677319F, -0.0852709189F,
    -2.45116639F, 0.326751381F, 0.169815227F, -4.34980345F, 0.533614814F,
    -0.221425459F, -0.855943799F, 0.6522879F, 0.200884923F, -8.79686451F,
    -4.83360624F, -0.697650909F, -2.33862376F, -0.104452483F, -0.867435217F,
    -0.0564296953F, -0.789805F, -0.646837115F, -0.665026546F, 2.01631379F,
    -1.53332663F, -1.32373059F, -0.190978765F, 0.439445913F, 0.273454696F,
    -3.54508972F, -0.218558207F, -0.547561646F, -0.0701666102F, -1.07312393F,
    -0.299871504F, -1.24646378F, -2.11023617F, 0.0383923836F, 1.07979131F,
    0.412520379F, -2.95330477F, -4.31241798F, -1.57942295F, -1.43481159F,
    1.33580911F, -1.33442497F, -0.19327727F, 0.033901345F, -0.254738867F,
    -0.308668524F, -2.6382916F, -1.07513666F, 0.0242153406F, 0.363168031F,
    -1.86525583F, -0.0893510878F, -0.119507186F, 0.938232422F, 0.574648619F,
    -1.51176584F, -0.283837F, 0.033865843F, 0.421190679F, -0.680341482F,
    -0.508483708F, 0.750415564F, 1.26013315F, 1.34288347F, 0.57095933F,
    -1.4320935F, -1.6494031F, 1.18321323F, -2.18395782F, -2.06496239F,
    -3.9882226F, -1.19296098F, 0.462797433F, -1.57549167F, 1.06216764F,
    -1.2475239F, 0.825977802F, 0.883325696F, 0.638068318F, -3.50427365F,
    0.617966056F, 0.960140884F, 1.67627895F, -1.00340188F, 0.0805130154F,
    -2.13589525F, -2.12774754F, -1.2653358F, -0.802753031F, 2.28670096F,
    -1.88029516F, -0.147895217F, 1.4152559F, 0.151309669F, -0.616059482F,
    -1.41022849F, -0.309922665F, -2.91334081F, 1.03119481F, 0.606704056F,
    -0.308879256F, -1.58769476F, 0.252744973F, -0.895309269F, -1.23934603F,
    -0.251173884F, -3.39247155F, -1.06960332F, -0.372153848F, -3.20061779F,
    -0.342047691F, 0.288013369F, -3.5958271F, -0.774137735F, -2.08334064F,
    -1.01790154F, -0.957190096F, -0.127903149F, 1.16480839F, 0.510504186F,
    -1.13867521F, -2.21489096F, 0.44501242F, -1.31772816F, -1.17189932F,
    0.155094668F, 1.40749598F, 0.487772763F, 0.689328849F, -8.43191F,
    0.780954957F, 0.00230219588F, 0.246930748F, 0.254220307F, -1.55079663F,
    -0.505699635F, 0.356349587F, 1.13368261F, -3.22059894F, 1.28867412F,
    -1.846964F, -2.39037776F, 0.0899983123F, -3.59758806F, -1.27290618F,
    1.38116443F, -1.29390514F, 0.365488112F, 0.919858158F, -2.40822411F,
    -1.0380652F, 2.09682775F, -0.292952746F, -0.0287217F, -1.21896768F,
    -1.14148569F, -1.12357485F, -0.475370556F, 1.05463123F, 0.934226274F,
    0.830694079F, 0.42400983F, 0.0864465684F, 0.787255704F, 0.294705808F,
    -3.51799202F, -1.3461895F, -2.22997522F, -0.980406821F, 0.430203855F,
    -0.439115196F, -3.20988202F, -0.816549897F, -0.393548429F, -1.12353837F,
    0.328229278F, -0.467978239F, -3.77079558F, 1.94141912F, -2.16448116F,
    -0.89317286F, -1.27745545F, -0.103347532F, -0.142014414F, -3.14477563F,
    -1.00273871F, -0.823417604F, 0.0385581665F, -1.14201641F, 0.64460808F,
    2.18400645F, -0.42795369F, 0.672281265F, -3.38333797F, 0.769835591F,
    0.425281465F, 0.363950372F, 0.677832484F, 0.587496758F, -3.19273257F,
    0.211524069F, -0.594408691F, -1.35178316F, -5.30485F, -2.4198947F,
    -2.76626039F, -1.67289507F, 2.15325189F, -2.59306335F, -1.5335952F,
    -1.16425586F, -1.27613032F, -1.82246733F, -0.827183366F, 1.92823017F,
    -1.99706399F, -6.62163734F, -2.8457489F, -2.71184063F, -1.69800222F,
    0.4329274F, 0.26092729F, -1.99291372F, -0.380749583F, -0.646864474F,
    -1.1855216F, 0.692135811F, 0.0688983351F, -2.40225601F, -4.07489395F,
    -3.81805539F, -1.94416416F, -5.98842955F, -0.573935151F, 1.06346881F,
    0.661907792F, -2.15667176F, -1.75042379F, -0.331381828F, 2.29357266F,
    2.81192636F, -1.22663665F, 1.27480423F, 1.66787612F, -7.51951742F,
    -4.75065708F, 0.442787647F, 0.497724593F, 0.607475042F, 0.878755212F,
    0.769077897F, 0.852465212F, -0.778528392F, -1.65184021F, 0.720029116F,
    -4.33644438F, -0.986711502F, 1.14479291F, 1.03638506F, 0.800578594F,
    0.587060511F, 0.364215374F, 0.819290936F, 1.09667516F, -1.79487371F,
    -0.111456327F, -0.533547819F, -2.45577312F, -0.881691694F, -4.13381624F,
    -3.47050428F, -1.57388377F, 1.38277757F, -1.39296246F, 0.947600484F,
    -0.69942975F, -0.523612738F, -2.52239F, -0.718662679F, -2.41887426F,
    0.149130657F, -0.397880167F, -1.02199948F, -8.18201351F, -0.647879899F,
    -1.49802983F, -1.32369661F, -3.04627299F, -1.81642914F, -7.24710464F,
    1.96975243F, -2.44753361F, -0.235703155F, -0.14788866F, -2.17300844F,
    1.80046654F, -0.116023898F, 1.89982331F, -3.74479175F, -1.14043188F,
    1.32816792F, -3.45098495F, -5.88198376F, 0.11604017F, -0.242947683F,
    1.41923106F, 0.239708975F, 0.863336504F, 0.319975555F, 0.497532636F,
    0.293120652F, 1.40305793F, -1.42593479F, -2.05222154F, -1.2406069F,
    2.25826907F, -2.14531136F, 0.934923172F, 1.47403526F, 0.943834484F,
    -1.32826126F, -1.67226756F, -1.21741664F, -0.100345403F, 0.764297724F,
    -0.649385154F, -2.6653986F, -1.14147317F, 0.779461801F, -1.4049325F,
    0.977521539F, -0.23717241F, -2.10040307F, -1.84112513F, 1.53394437F,
    0.0603961907F, 1.04207742F, -0.585282385F, 1.65098882F, -3.23497891F,
    -1.45958543F, -4.61147308F, 0.0549455658F, 1.93468988F, -2.31959605F,
    -0.849318147F, -2.33283114F, 1.34948289F, -0.62300843F, 0.504132271F,
    -0.360821307F, 0.832849801F, -0.29141289F, -2.93836498F, 0.603022039F,
    0.702709854F, -1.46177578F, -1.49627674F, -0.642594337F, -6.68793726F,
    -0.228051573F, -1.27485836F, -2.09965F, -0.342698127F, -1.58823657F,
    -0.535924554F, 0.595268905F, 1.80316579F, -0.777896285F, -2.38067079F,
    -2.51035404F, -3.18776512F, -2.27906895F, -0.433341F, 0.158260494F,
    2.34168839F, -0.623856783F, -0.168352976F, 0.960019827F, -3.44071722F,
    0.473770261F, -0.33767432F, 1.23604953F, 0.0824523345F, 3.09011292F,
    -0.489878565F, 0.974375486F, -3.30721784F, -0.673206806F, 0.597314537F,
    1.76779771F, -0.54767561F, 0.829591811F, 0.227291837F, 0.0249764491F,
    -0.865294933F, -2.30970979F, -3.26958227F, -2.19562435F, -2.29220366F,
    1.22722805F, -1.70061266F, 0.358725816F, 1.48588872F, -0.388322711F,
    0.6722458F, 1.0523299F, -2.17168808F, -2.8651731F, -3.62180185F,
    -2.31352973F, 0.607329309F, -0.291572332F, -0.330839902F, -0.578904331F,
    -2.36328554F, 1.52916551F, -2.99077892F, 0.555859625F, 0.863372207F,
    -0.447854966F, -0.637487411F, -0.242662147F, -1.7245121F, 0.223481461F,
    0.654546916F, -2.91246963F, -0.626268089F, -0.239330441F, 0.289749F,
    0.5723418F, 0.292189687F, 0.893653512F, -1.73989594F, -4.59950256F,
    -1.10736072F, -0.241619244F, -1.98859143F, -1.13428044F, -5.38235426F,
    -0.200084671F, 1.48053181F, 0.742474675F, 0.0353137255F, -0.0155453514F,
    -1.55522251F, -0.130065739F, 0.227867484F, 0.325916767F, -1.25290585F,
    -0.146279484F, 1.02043247F, -4.34503841F, -2.63725519F, 0.506299615F,
    -1.27375519F, 0.924325109F, -1.63415587F, -1.67371202F, 1.34639394F,
    -1.05807817F, -4.19790316F, -0.667595387F, 0.0136741595F, -1.29601479F,
    -0.0869756639F, 0.92146349F, 0.404072881F, -1.25430524F, -0.0781485364F,
    -0.227774978F, -0.897988915F, -2.19252038F, -0.0976378173F, -1.69957101F,
    -0.739785254F, -0.858056366F, -0.324423641F, -0.835384905F, -3.44305682F,
    -0.510912F, 0.245447785F, 0.0360959135F, -0.989672244F, -0.126184568F,
    -2.66878176F, -2.31807041F, -1.75224793F, -0.0417991504F, 0.950862706F,
    1.74784529F, 0.756426632F, 0.0421901457F, -3.92623687F, -0.741672277F,
    0.153619707F, -0.294808626F, -0.143718019F, -0.298326045F, -1.52277F,
    1.29220879F, -3.55048776F, -4.07367134F, -1.02496564F, 0.390747666F,
    -0.567197859F, -0.927783847F, -0.814295769F, 0.91186291F, -4.9004097F,
    -1.41680872F, -0.542669952F, -0.1879026F, -1.19780302F, 0.304328084F,
    -5.22665262F, 0.357656211F, 0.149287745F, -0.652584374F, -3.49406123F,
    0.0108729657F, 1.7245177F, -2.52730465F, -2.88371229F, -0.567303658F,
    0.225899383F, 1.34051597F, -4.93530655F, -0.549480855F, 0.0941799432F,
    -1.96434915F, -1.37060475F, -0.238066107F, -0.191914544F, -0.324148893F,
    1.62012661F, 1.29683566F, 0.705419779F, -0.982730865F, 0.122456133F,
    0.370602816F, 0.3420026F, -4.96060801F, -1.71055472F, -2.03093219F,
    0.437020779F, 0.333378136F, -0.131058544F, -1.38560176F, 0.208462358F,
    0.196939245F, -0.224751145F, -1.0402329F, 0.305139154F, -0.084129028F,
    -1.52157879F, -2.66026735F, 0.159347564F, -0.753619969F, 0.265519798F,
    -0.671783268F, 0.75665F, 0.187907845F, -2.47430444F, -0.648925245F,
    0.345804811F, 0.0721173659F, -0.164710447F, 0.0327656716F, -6.34646797F,
    -3.39063025F, 0.676194549F, 0.525233626F, -0.195721656F, -1.79405463F,
    -3.99749708F, -0.680268526F, -0.938740849F, -1.26315141F, -0.0708776191F,
    0.414394379F, -0.840246856F, -0.392210364F, 0.346102208F, -0.318549842F,
    -1.95753694F, -0.0965304598F, -0.0447933152F, 0.0745346621F, 0.63703692F,
    -0.19923991F, -2.55823684F, -1.08910143F, 3.97449294E-5F, -0.924713969F,
    -0.159472123F, -2.91024685F, -0.124838524F, -1.15443909F, -0.829520524F,
    0.77916491F, 0.601998806F, -1.52563429F, -0.075923048F, 0.711928964F,
    -3.18189621F, -1.57937121F, -4.79227781F, -2.58898759F, -0.212184757F,
    0.210265428F, -1.51018465F, 0.834583759F, 0.727655113F, -1.50736666F,
    -0.684862792F, -1.05595708F, 0.283145905F, -0.529667914F, -5.72106171F,
    -0.820942938F, -1.53104472F, -0.650888443F, -0.155551538F, -0.737334669F,
    -1.12230229F, -0.746164918F, 0.843917131F, -0.765104532F, -0.472833F,
    -0.786432683F, -2.81916952F, -1.63000274F, -0.371264368F, 0.0666224957F,
    0.972030461F, 0.363750458F, 0.223232657F, 1.41078341F, -0.956129313F,
    0.134426519F, 0.603991628F, 0.165212184F, -1.19144356F, 0.880607903F,
    0.404936075F, -2.37275672F, -2.43116474F, 0.73068583F, -0.0645829663F,
    0.117747203F, -1.24264717F, -0.526801705F, 0.325391591F, 1.56826735F,
    -0.582314312F, -0.603489816F, -1.2591083F, -1.60702074F, -3.03826785F,
    -0.308007628F, 1.24445641F, -0.519830763F, -0.242190883F, -6.31790924F,
    -0.224989057F, -1.01993096F, -4.90055418F, -0.194978595F, -2.36866188F,
    0.731028378F, 1.05621886F, -0.107997604F, -0.747332692F, 0.0558474511F,
    -1.57535982F, -4.83428F, -0.546290159F, -1.86888945F, -1.38290834F,
    -2.62621403F, 0.555783391F, 0.475012094F, 0.130963102F, 0.784095645F,
    -1.30206394F, 0.689699F, -0.60815239F, -2.3071053F, -8.20123482F,
    0.37478894F, -2.99957967F, 0.257129937F, -0.539134502F, -0.51329565F,
    -5.12533855F, -1.61705482F, 1.16755235F, -3.80927038F, 0.867312193F,
    -1.34925127F, 0.124723464F, 0.957077563F, -0.489578307F, 0.270978689F,
    0.229540214F, 0.636476576F, -0.916079462F, -0.487437755F, -5.34026575F,
    -2.03392553F, 1.06691384F, 1.93133402F, 1.93742621F, -0.556027651F,
    -0.189161763F, 2.09002328F, -0.184549749F, -1.33410013F, -1.69263673F,
    0.160743982F, 0.761723399F, 1.23129606F, 0.278419822F, -0.63751781F,
    1.98221469F, -0.37265265F, -5.61321926F, 0.386240155F, 1.23979F,
    -1.19809043F, -0.535697103F, 3.05887842F, 1.14647746F, -1.87505865F,
    0.345522404F, -2.11410832F, -1.48843932F, -1.54444599F, -2.98033547F,
    -1.29359937F, -1.37580109F, -1.31893051F, -0.163156807F, -0.111173898F,
    -1.63346767F, -2.16167307F, -3.71879697F, 0.65023309F, -0.473560631F,
    -3.26746368F, -0.266859621F, 0.112142757F, 1.32732749F, -4.21016312F,
    -0.335792243F, 0.243170023F, 0.296836019F, 0.386723906F, -4.89147472F,
    1.85165954F, -1.86286414F, 0.112128817F, -1.163481F, -2.08719277F,
    -2.79149723F, 0.818220735F, 1.14195466F, 0.0366689712F, -2.12679982F,
    -1.9076333F, -0.982739627F, -0.136057571F, -0.843160391F, 1.47965217F,
    0.620618403F, -0.700742424F, 0.195987821F, 0.124878533F, -6.20244884F,
    -3.04108405F, -1.17062926F, -3.85312033F, -1.15211904F, -2.70388079F,
    -0.0811429322F, -0.0306446757F, -0.963702679F, -1.76729047F, -0.285481066F,
    -2.59073949F, 0.340289593F, 0.90347743F, -1.47052038F, 0.152632549F,
    -1.75204575F, -0.266763836F, 0.218559921F, 0.493662417F, -3.15660191F,
    0.467205822F, -2.31841445F, -2.09414434F, 0.656361F, -0.562453568F,
    -0.858581364F, -1.27471197F, -3.12528181F, 0.42631945F, 0.160017297F,
    1.99591732F, 1.26220119F, -0.268253326F, -0.382763863F, 0.980413258F,
    -0.410600454F, 1.68069649F, 0.626095F, -0.397220433F, -0.271593809F,
    -1.67030764F, -0.584303677F, -0.43012315F, 1.41893947F, -1.87692308F,
    0.186689258F, -1.78646338F, 0.414519906F, -1.52056563F, -0.240441844F,
    -2.29704976F, -1.01799369F, 0.735198F, 0.646184087F, 0.735616446F,
    -2.29129386F, -2.04031587F, -0.535400808F, -0.327611297F, -3.05736661F,
    -1.32376432F, 0.125746593F, -0.0574844666F, -0.754324675F, 1.15436435F,
    0.302372038F, -3.22644424F, -1.60165977F, -0.289349705F, -7.9644208F,
    -0.901248038F, -0.622704208F, -0.613457382F, 1.58583689F, -3.1386354F,
    -0.458833188F, 0.0716029182F, 0.9790501F, -1.73238206F, -0.637477875F,
    -1.20877945F, -0.205334917F, 1.37826717F, 1.50377357F, -0.246355981F,
    1.5579859F, -0.0999821797F, 0.480205357F, 0.597289085F, -4.50632286F,
    0.696854532F, -0.53689009F, 0.27641F, 1.00018013F, 1.35648942F,
    0.00404501753F, -0.457410187F, -1.80472636F, 1.43509233F, 0.790111959F,
    0.412724674F, -3.51192093F, 0.928326249F, 0.23583509F, 0.462607175F,
    0.0151507696F, -0.120380603F, -0.410703391F, -2.02887225F, 1.25416398F,
    1.49080849F, 0.394242376F, 0.638353944F, 0.89818579F, -1.451689F,
    -1.44006932F, -2.05100679F, -0.0795890316F, -0.941352129F, -3.04605126F,
    -1.11837733F, -1.15332305F, 1.55163276F, 0.372491091F, 0.930507481F,
    -2.96214461F, 0.746207893F, -2.67960167F, 0.616755784F, 0.829340219F,
    -2.13938618F, -2.39723873F, -0.104805745F, -2.52966022F, -0.681999385F,
    -1.45534456F, -1.48385596F, -0.349068046F, -1.06793463F, -5.53801918F,
    -5.70287228F, -3.15174484F, 0.303034395F, -0.419105142F, -3.92400193F,
    -0.258789837F, 0.231185839F, 0.613140583F, -0.715369821F, 0.683738708F,
    -0.357705683F, 1.09014845F, 0.681056142F, -0.727814198F, -0.604044855F,
    -2.0019002F, -0.0790058449F, -0.470649868F, -4.0625186F, -1.74807155F,
    -0.495020658F, -1.18024898F, -0.058238849F, -2.13935065F, 1.84497058F,
    0.273417085F, 0.341227531F, -4.68400526F, 0.349710345F, 0.560308F,
    0.215113178F, -1.45356941F, -0.755297124F, -0.207040757F, -0.125252679F,
    0.573792458F, 1.14675951F, 0.629842401F, -1.33229852F, 0.69945538F,
    -0.982183754F, 0.801316679F, -0.99119556F, -1.74308479F, 0.371877134F,
    1.33257282F, -0.356397808F, -0.420443922F, -0.343669683F, 0.765796F,
    -0.306608945F, 1.57997167F, 0.253458709F, 0.147805542F, 0.360142648F,
    -1.84319472F, -0.718832791F, -0.314167738F, 0.448458463F, 0.527240753F,
    -0.595020771F, -1.28574669F, 0.356500477F, -1.3581897F, 0.222433969F,
    0.945530653F, 0.391404212F, -0.915722191F, 0.0186646953F, -2.78787088F,
    -2.07730603F, -2.27234626F, -1.18807447F, -0.444433451F, 0.98579073F,
    -1.37505615F, -0.677014172F, -0.6920982F, -1.19956934F, -3.41651702F,
    -1.39122629F, 0.784721732F, -2.08231974F, 0.0676131621F, -0.43243289F,
    -3.57895827F, 0.640696585F, -0.316806823F, -0.594875038F, 0.0503091179F,
    -1.13404131F, 0.478917897F, 0.0138262436F, 1.36632252F, 0.431464583F,
    -0.136381537F, 0.23354581F, -3.1105423F, -2.22110581F, -4.5587697F,
    0.538834214F, 0.975276F, -1.21778703F, -0.200171441F, 0.693849266F,
    1.30651593F, 0.598987818F, 1.48957419F, 0.324724972F, 0.361142814F,
    -4.51316404F, -1.42967308F, 0.882744968F, 1.63815534F, 1.29110348F,
    0.941454589F, 0.262303859F, 0.851335406F, -0.0408956707F, -1.45295262F,
    0.74626708F, 0.637227714F, 1.45338202F, 0.213341311F, -2.06357384F,
    -0.178488F, -0.11425925F, 1.24729085F, -1.45838976F, -0.918684602F,
    -1.36626923F, -3.29957223F, 0.74488318F, 2.07672977F, -0.382467151F,
    0.365537465F, 1.20926476F, -0.710773885F, 0.277121753F, -4.92730427F,
    -0.711795688F, 0.640216053F, -2.51388621F, -0.465698868F, -1.31705296F,
    -2.95999932F, -0.633754194F, -1.1009779F, -1.25760424F, -3.68857336F,
    -0.111286715F, 0.0150506618F, 2.25480676F, 0.654029489F, -0.910542905F,
    1.69717062F, 0.167475045F, -1.21523976F, -0.469457775F, -1.48468971F,
    -1.78190744F, -0.838844836F, 0.892556906F, -0.383954436F, -1.37269831F,
    -0.950532794F, -0.27001223F, -0.580027401F, -2.57334852F, 1.25669861F,
    -2.72438288F, -3.01554227F, 1.0645808F, 0.347769469F, -2.33148F,
    0.367274284F, -0.428728372F, 1.59499419F, -0.630553365F, 0.563610554F,
    -0.984202385F, -0.957728565F, -2.88820171F, -0.318817884F, -2.78037715F,
    0.53199F, -1.62117183F, 0.627629757F, 1.57179594F, -3.39285517F,
    0.045805838F, 1.93477452F, -1.34204662F, -0.824161708F, -0.947818279F,
    -0.960401952F, 2.32087207F, -1.35331798F, 0.182235658F, -1.26978207F,
    -1.50373757F, -0.579828262F, -0.471212685F, -0.718266726F, -0.12844637F,
    0.58465004F, -0.765015543F, -0.49445802F, 0.160664722F, -1.32348454F,
    0.66532588F, -0.700558364F, 1.59101641F, 1.23628306F, -1.31156027F,
    0.918847084F, 0.929242253F, -1.12692356F, 0.296017587F, -1.49418974F,
    0.304195642F, -1.32652509F, 0.286124974F, 1.24991477F, 0.760017812F,
    1.18429446F, -1.00199842F, -1.09072852F, -0.0467518307F, -2.31973171F,
    0.338224202F, 0.433526814F, 1.42195117F, 0.273282498F, -0.898094F,
    -0.128167078F, 1.45891035F, -0.850233316F, 0.793147743F, 0.869507372F,
    1.17497623F, -2.41097283F, 0.872857809F, -0.403148532F, -1.12508392F,
    0.570314288F, 0.471351713F, -1.10258293F, -1.43641853F, 1.01172435F,
    -1.00607979F, 0.418516964F, 1.00850832F, -1.31141961F, -2.26335621F,
    -0.212310195F, -0.878095448F, -0.029444579F, -0.180939078F, -7.74263477F,
    -0.0775157362F, -0.0741863102F, -1.26907241F, -5.30252218F, -3.04029465F,
    -8.32589F, -0.924466252F, -1.88677382F, 1.3254838F, -1.77585292F,
    0.416387677F, 0.556856573F, 0.0352799594F, -1.97936106F, 0.833755791F,
    0.433681071F, 0.344678402F, -0.228556558F, 0.382174134F, -2.76818919F,
    -1.81681907F, -0.631948769F, 2.10455966F, 2.3930409F, -0.429990083F,
    -1.62725163F, 0.99414897F, 0.540332139F, 1.51250064F, 2.0858047F,
    -0.663812101F, 0.923371077F, 0.861227632F, 1.07539761F, 0.128166094F,
    -1.66160774F, -0.23421225F, -1.39273429F, 0.223103821F, -1.61600745F,
    0.0527770072F, -0.399858177F, 0.230194747F, -0.0808839947F, 0.3948358F,
    -1.07127333F, -2.50375581F, 0.308604598F, 0.00701995287F, -0.779160261F,
    1.60040534F, -1.44122195F, 1.19018292F, -0.669054687F, -0.205150515F,
    -0.385469913F, 2.4668839F, -1.23004901F, -1.07856655F, 2.52450013F,
    0.515807867F, 0.215421081F, -0.548282206F, -2.52346516F, -1.46440017F,
    -0.014902507F, -2.91566682F, -0.17955707F, -0.691691697F, -4.7169013F,
    -0.268753648F, 1.45546687F, -0.120183066F, -4.23659897F, -1.42776632F,
    0.124762021F, 1.57525539F, -2.60674F, -0.520017803F, -1.14400268F,
    2.34597683F, 0.144812271F, 1.43700206F, -1.46665466F, -1.18239403F,
    -2.03461957F, 0.299429476F, -2.12361121F, 0.490251899F, -1.93827021F,
    -1.41227865F, -0.540842772F, -2.13792157F, 1.72741711F, -0.229115874F,
    -4.78025484F, 0.819733739F, -1.78771544F, -4.83477736F, -4.37162F,
    -0.873411059F, 0.484382629F, -0.101980522F, -2.75376177F, -1.15621114F,
    -7.04880238F, -1.13972461F, -1.88912296F, -3.27760339F, 1.09349978F,
    -0.533808529F, 0.425804585F, 0.692655325F, 1.06603479F, -0.691359162F,
    0.90542531F, 0.409407347F, 0.554418743F, -0.438947111F, -1.7351675F,
    -5.93270159F, 0.632230699F, -5.29593468F, -1.90249276F, 1.37443495F,
    -1.15285933F, 0.664974034F, 0.741964757F, 0.142985716F, 1.48333263F,
    -2.2169342F, 1.58399987F, -2.0562911F, -1.17190647F, -1.494928F,
    -2.19146824F, -0.874141872F, 1.85681379F, -0.246342704F, -0.667418063F,
    -0.807690501F, 0.809443414F, 2.34776211F, -2.80209374F, 1.45065677F,
    0.612787187F, -1.02164006F, 1.09545171F, -3.58689857F, -2.87859273F,
    -1.92473507F, -5.03334618F, -0.21215634F, 1.22757864F, -0.0186989848F,
    0.105333507F, 1.62290812F, 0.709946752F, 0.211151883F, -3.37417054F,
    -0.652180076F, -1.28228188F, -1.28142011F, 1.23711836F, 2.16053271F,
    -1.89947855F, -0.659971654F, 1.40919244F, 2.35475731F, -2.11767483F,
    -2.98735523F, 0.286450326F, -1.70330083F, 0.32964921F, -0.00151800015F,
    -0.893758059F, 0.0174868442F, -1.22648132F, 0.65047121F, -0.912294626F,
    0.0747697204F, -0.717132866F, 1.55647862F, -2.24600673F, 1.82404208F,
    1.61791146F, 1.30701983F, -4.83340502F, -0.111730807F, -0.927835822F,
    -0.23858206F, 0.600455463F, 1.18972301F, 0.358671039F, 0.46183F,
    0.429340273F, 1.79563034F, -1.02484953F, -0.796415091F, -0.591381073F,
    -1.65102351F, -0.0022507871F, -1.6575675F, -2.796175F, 3.23374701F,
    0.490213692F, 0.960755408F, 0.0372298583F, -2.18107486F, -0.392834F,
    0.0105016064F, 1.41955864F, -0.0317961127F, 0.318430811F, 0.609987676F,
    1.4515295F, 2.47194028F, -0.0876368955F, -2.11348152F, -1.30006564F,
    -3.75591183F, 0.618304789F, 0.339017481F, -6.37215853F, -1.204831F,
    0.41207245F, -3.46979284F, -0.112405695F, -0.122060731F, -1.92432177F,
    1.46729755F, -1.98710227F, -0.411355495F, -1.90149844F, -3.91145968F,
    -0.0553738885F, 1.46896315F, -0.542125046F, -1.04294527F, -2.72794485F,
    -0.241544813F, -0.175268114F, -2.30982661F, -0.49759078F, 0.354045272F,
    -5.25816059F, 0.422920465F, 0.666594F, -0.0425056629F, -0.671723902F,
    0.464109242F, -0.211155474F, -1.22663045F, -3.54754233F, 0.522664368F,
    -0.051241558F, 0.51575315F, -2.28066635F, 1.09465849F, 0.385436028F,
    0.401215017F, -2.30265093F, 1.82616782F, 0.289326757F, -3.4820323F,
    -1.8373307F, -0.290701538F, -2.55455875F, -0.942864239F, -0.159720227F,
    -1.90296888F, 0.320030242F, -0.828923643F, -2.54004431F, -0.393996209F,
    1.43511009F, -0.695012152F, 0.571644962F, -1.18779933F, -7.03748083F,
    -0.160727695F, -0.8931036F, -0.114301793F, -1.90253544F, -0.230942234F,
    -2.05683517F, -1.6389538F, 0.160801962F, 0.133548826F, -1.38416529F,
    0.964714F, 2.17947698F, 0.315211207F, -3.55237222F, -0.503400385F,
    0.316017061F, -1.15861952F, -0.531868F, -0.465250552F, -2.908885F,
    -3.97265148F, 0.342755228F, -1.90382624F, 0.0738771707F, -2.73849869F,
    -0.322852314F, -0.884786665F, 1.79847586F, -1.75485265F, -2.79135275F,
    -2.11571264F, -1.09120595F, 0.823183119F, -0.369758815F, -0.182740822F,
    -5.77041626F, 0.382543564F, 0.401422948F, 0.0275033452F, -2.6901257F,
    0.0752627477F, -0.309980303F, -1.72669423F, -2.07930303F, 1.1339705F,
    -1.25993907F, 2.2723105F, -4.34007311F, -1.61239743F, -0.873987854F,
    -0.259258091F, -2.65692878F, 0.195896879F, -0.0367341749F, -3.64239717F,
    1.7734704F, 2.15713978F, 0.291955501F, -0.961985707F, 0.196475014F,
    -0.925144732F, 0.493463576F, -1.34101856F, 1.52459633F, 0.75833118F,
    0.348434389F, -0.738182783F, 0.217772558F, -0.657200634F, 0.254392117F,
    -0.298688293F, 0.386572927F, 1.14662576F, -1.15361357F, 0.727751732F,
    0.705880523F, -3.06803775F, -0.805705488F, -0.952139735F, -0.611429F,
    -3.11412048F, 0.644545496F, -0.188393965F, -6.9613204F, -2.12375379F,
    -0.444414854F, -1.85579538F, -3.66037059F, -1.50604916F, -8.71732521F,
    -1.59046197F, -0.609697461F, 0.768173933F, -0.334933549F, -1.00597298F,
    2.00387669F, 0.334692627F, -1.30311882F, -1.44184232F, -2.96918702F,
    0.568578601F, -0.533353031F, 0.473029315F, 1.34126186F, -1.26762927F,
    -0.56581229F, -0.3427912F, 0.213013768F, -2.95922208F, -0.353701323F,
    0.586784F, 0.896724522F, 0.0773066133F, 0.0955889F, -0.260555148F,
    0.417669117F, -1.32097602F, -2.87329936F, 0.681312323F, -0.813180268F,
    0.216762826F, -0.8336761F, -0.891053915F, -0.550246358F, -0.334528744F,
    0.256608278F, 0.681692243F, 0.0839163F, -1.6550374F, -0.201927662F,
    0.636770368F, -2.28832626F, 0.946945667F, 2.58470845F, 0.839791715F,
    -0.618804455F, -0.0789698437F, -0.443769604F, -0.343940616F, 0.789229572F,
    -0.0578456186F, -0.53242594F, 0.0904917121F, -0.440453142F, -0.611795F,
    -0.737947166F, -4.13145781F, -2.23158407F, 1.02544427F, -0.308685035F,
    -0.0949043483F, -2.66972041F, -0.140778095F, -0.467991412F, -0.974762857F,
    0.800362349F, 0.741968811F, 0.512676299F, 0.0854056478F, -0.202649653F,
    -0.349745184F, -1.03571534F, -0.434897125F, 1.05692947F, -0.282790333F,
    -0.830081403F, 1.77736676F, -0.0635167584F, 1.28998899F, 0.760619938F,
    0.795473039F, -0.402889609F, -0.88305521F, -0.593328834F, 0.00145645719F,
    -0.285562575F, -0.165098622F, 0.0391205028F, -0.0436022282F, -1.80381823F,
    -0.245253667F, 0.506937444F, -2.91765952F, -0.939739287F, -1.26300764F,
    -0.38938126F, 1.1717099F, -2.1677146F, 0.470199674F, 1.27489698F,
    -0.692612171F, -0.0326086655F, 1.29207671F, 0.227554336F, -0.675161839F,
    -0.912230968F, -1.79973972F, -1.73791301F, 0.377899975F, -1.11747313F,
    1.67611706F, 0.57162863F, -0.987601101F, -0.863288641F, -2.23103166F,
    -0.954550385F, 0.746349156F, 0.0141309854F, 0.839780807F, 0.0463140272F,
    0.239613891F, -1.68551731F, -1.55273044F, -1.35319F, -0.097505115F,
    -3.20419669F, -3.35236311F, 0.899120867F, 0.107298106F, 0.162774F,
    0.39865461F, 1.05107033F, 0.064218834F, -4.54181528F, -2.05402398F,
    -0.205348253F, -0.360042334F, 0.793486714F, 1.04913795F, -0.875828743F,
    0.222125798F, -2.19680285F, -0.283031374F, -0.573030889F, 0.475523055F,
    -0.788302124F, -0.769566774F, -2.33267784F, 0.727132857F, 0.457122535F,
    -1.49704325F, 1.63561153F, 0.195251316F, -0.326138675F, 0.0709716603F,
    -8.40162849F, -0.481243461F, -4.38627867E-5F, 0.087634638F, -3.63759971F,
    -0.164722636F, 0.423994362F, -0.916249335F, -0.341283798F, 0.622752F,
    1.04310048F, -0.923574746F, -1.76843524F, 0.891157269F, -2.2333014F,
    -2.34262443F, -1.13023639F, 0.46104452F, -0.733919919F, -1.58909738F,
    -0.25496161F, 1.19693363F, -0.240367353F, -3.59499383F, 0.610749304F,
    0.484365404F, -0.132958829F, -1.77192724F, -0.86006093F, 0.616643369F,
    1.09122491F, -1.08294356F, 0.386661083F, -0.821295321F, -2.97633576F,
    -1.88717711F, 0.9645679F, -0.217097193F, -0.988842845F, -2.16555953F,
    0.804854333F, -0.574676335F, -0.437776506F, 0.0212867279F, -0.652551591F,
    -0.0171889383F, 2.2365644F, -0.522330046F, -4.35184574F, -1.47373605F,
    -0.858350277F, -1.67048788F, -2.27522373F, -0.66144973F, -4.62745714F,
    0.102084853F, -0.308678925F, -1.25577593F, 0.57602489F, 0.124050602F,
    1.50147426F, 0.65039F, -0.480159461F, 2.89865F, -0.734540105F, 0.0267886762F,
    -1.45665491F, -4.76542759F, -2.7558167F, 0.287463695F, -1.35682583F,
    -0.0908551291F, -0.0617223494F, 0.0408988856F, -2.78173327F, -0.151463166F,
    0.590639353F, -0.912270546F, -0.974628031F, 0.317888409F, 0.757050931F,
    1.76087797F, -0.141235679F, 1.31929958F, 0.753991961F, -1.22471189F,
    0.413749814F, 1.41069257F, -0.238271564F, 1.03105605F, 0.713553488F,
    -3.34883523F, -2.83550906F, -0.685297728F, 1.15286148F, 0.835454464F,
    1.23166478F, -2.19991827F, -0.865947902F, 0.172207236F, 0.542072356F,
    0.814807594F, -1.04979527F, -0.596677363F, -3.88986611F, -2.82287812F,
    -2.45919371F, -0.303470939F, 0.834248781F, -0.951881F, -0.423085093F,
    -1.26303387F, 0.656574488F, -0.8980847F, 1.28210652F, -0.129549652F,
    1.38772547F, -0.0898337737F, 2.36601639F, -1.40846848F, -0.722668707F,
    0.418548256F, 0.0942813605F, -0.225392401F, -1.04665875F, -0.200385287F,
    -1.22691023F, 0.784625113F, 0.223010853F, 0.767695189F, -3.46528172F,
    -1.54984045F, -0.865461648F, 0.649451375F, 0.704250753F, 1.09825349F,
    -1.41334105F, -1.03620327F, -0.294504911F, 0.119624808F, 1.13628F,
    -0.267723382F, 0.0565801039F, 0.141314283F, 1.08469522F, 0.282356948F,
    0.331371337F, 0.448017716F, 0.401144505F, -0.960805655F, 0.517916441F,
    1.04090869F, -1.83637488F, 0.111444034F, 1.46825159F, 0.0126091139F,
    1.30731916F, 1.77149582F, -0.0247867201F, -1.17124295F, -0.18321158F,
    -2.18397427F, -0.832610548F, 1.30939186F, -0.808160603F, 0.513333619F,
    1.29729F, -0.718601525F, -0.837305F, 0.121115573F, -0.449113101F,
    -0.535116374F, 0.275379956F, -1.25061464F, 3.08118439F, -0.21483928F,
    -0.303671449F, -0.584635854F, -0.755613804F, -1.37706876F, -2.72505212F,
    -3.02067733F, 0.48411274F, 1.14203048F, -0.175334349F, 1.55339098F,
    1.14382017F, -0.981810331F, -0.312065F, 0.572703063F, 0.278480142F,
    1.03706574F, -0.354934603F, 1.15942466F, -0.233475596F, 0.151983842F,
    -0.645282686F, -0.703117073F, 0.456210405F, -5.99032116F, -3.56326199F,
    -1.57046306F, -1.75129426F, 0.459370553F, -4.70307302F, -3.55863857F,
    0.693901956F, 1.30204296F, 0.729778767F, 0.410222709F, -1.79570878F,
    -0.79818362F, -0.532456577F, -0.170376375F, -2.2191093F, 0.318143845F,
    0.226121396F, -1.62960875F, -2.26736283F, -0.986380875F, -1.83152986F,
    0.222787932F, -3.6803515F, 0.16698648F, 0.778804719F, 0.29770714F,
    -0.714515626F, 1.13234568F, 0.485586375F, -2.13798189F, -0.280556172F,
    0.868532181F, -0.682797074F, -1.85521412F, -0.356497616F, 0.0556875207F,
    0.856124699F, -0.156787619F, -0.289049476F, 1.69533813F, -0.776879191F,
    -1.14817774F, -0.163408086F, -2.9883F, -4.7065959F, -0.405869722F,
    -0.483716726F, -0.682563603F, -0.174061835F, -1.83581567F, -2.73960352F,
    1.24633932F, -0.199580088F, 0.212519154F, 0.0651128069F, 0.235833734F,
    0.320604205F, -0.0579057F, -2.71236277F, 0.325391F, 0.817282259F, 0.3340877F,
    -2.18760729F, 0.539068043F, -0.343393356F, 0.20909293F, -0.269513696F,
    -2.62222838F, -0.636562F, 0.838526368F, -0.568612695F, -0.0991723463F,
    -0.124698684F, 1.36360884F, 3.09332585F, -2.60492349F, 0.330313414F,
    -0.955380261F, 0.877013445F, 0.232391104F, -4.23235226F, -0.616358101F,
    -1.41834641F, -0.839344442F, 0.899840772F, -0.432084084F, -1.17286015F,
    -1.2722739F, -1.95872867F, 1.72633779F, 0.634602726F, -1.93382859F,
    -2.17432594F, -0.0231405012F, -2.36910701F, -1.16758251F, -0.130518019F,
    -1.44469452F, -0.32946828F, 0.738329649F, -1.55887127F, -0.788970053F,
    0.294277519F, -3.38126707F, 0.365123063F, -0.986482084F, -2.60605955F,
    -0.262066215F, 0.735304177F, 1.5792706F, 1.8738091F, 1.90457714F,
    0.632335722F, -0.568588F, -9.13582802F, 1.29276383F, 0.512832165F,
    -0.00700189406F, -1.5053556F, 0.367770195F, -1.04401827F, 0.929556668F,
    1.31526268F, -2.7741673F, -1.07128394F, -2.0750351F, -1.74836934F,
    0.22680071F, -1.10265827F, -0.971489191F, -2.49773264F, 0.258687139F,
    0.0654349253F, -0.175197899F, -5.1056118F, -2.04890227F, -0.589140177F,
    1.03669143F, -0.638915956F, -4.37545204F, -1.70274115F, -0.381575048F,
    -0.109647684F, -0.270496488F, -0.876257956F, 1.34455192F, 1.10199118F,
    1.70953393F, -1.62329328F, -0.642653883F, -0.674065113F, 0.427268118F,
    0.703472793F, -0.995449F, 0.161830828F, -0.0664401F, -1.08964145F,
    -1.59271252F, -0.595339F, -0.764432F, -0.322496653F, -0.148356438F,
    -0.0488387123F, -1.58068895F, -1.29281139F, 0.63706547F, 0.195041522F,
    1.0688827F, 0.401685983F, -0.138745934F, -1.29631031F, 1.18225706F,
    0.124126546F, -0.996606946F, 0.279815882F, -2.00022864F, -1.47350621F,
    0.396932334F, -1.816571F, -1.7436049F, 0.60859555F, -0.195505485F,
    -0.480926812F, 0.761251569F, 1.7393055F, -0.0667807758F, 0.932307184F,
    0.676335871F, 0.554395199F, 1.29713726F, 1.25682235F, -1.32177758F,
    -0.911619544F, 0.489971787F, 0.102738F, -2.31964612F, 0.389985204F,
    -1.97675264F, 0.554889262F, 0.579040468F, -0.400030106F, 1.48249173F,
    0.0590870827F, -2.18489313F, -3.37957549F, 0.388422638F, -0.381520748F,
    -0.338896364F, -3.6250217F, 1.8531636F, -1.1614188F, 0.699519157F,
    -0.605154157F, -0.304846436F, -4.60025167F, -0.869768858F, -3.25903344F,
    -3.70321774F, -1.39148116F, 0.693512F, 2.36698794F, -0.532490969F,
    0.601734817F, 0.346489102F, 0.653780878F, 1.22861481F, 0.326585978F,
    -1.16956365F, 0.560940683F, -0.176040873F, -0.322904527F, -0.261968076F,
    0.10130097F, 0.422321141F, -1.1237545F, 0.138785899F, -1.37380099F,
    0.986746132F, -0.124071151F, -0.916741908F, 2.23288965F, -2.41777134F,
    0.426310301F, -0.683323681F, -0.929530442F, -0.630534172F, 0.0896795243F,
    -1.40618145F, 0.748228073F, 0.0569568686F, -0.776501834F, 0.722735882F,
    -1.34256184F, -0.0101127727F, -0.926683545F, 1.20191634F, -4.12469578F,
    1.00148427F, -0.195612982F, 1.0364095F, -2.34237432F, 0.42873767F,
    -1.70773804F, -0.244149238F, -0.500943959F, 1.13117659F, 0.304886103F,
    0.567125082F, -2.80391026F, -0.825350761F, 0.460769147F, -1.28801751F,
    0.154794559F, 0.283068925F, -4.71395445F, 1.73284101F, -2.89052916F,
    -2.04866433F, 1.32803106F, -0.213226229F, 1.42876494F, 0.577687383F,
    1.13021672F, 0.662802458F, -1.55491817F, 0.263073415F, -2.39819074F,
    -0.249710917F, 0.217682585F, -0.00925954711F, -2.81687164F, 0.334560663F,
    0.429500341F, -0.0331038795F, -0.878866673F, 0.0475155935F, 1.14683485F,
    0.514665365F, -0.896366477F, -0.532165766F, 0.389726371F, 1.43083155F,
    -4.60366631F, 3.05506635F, 1.64648175F, -0.949107289F, -2.17824173F,
    0.810834825F, -0.0248431172F, -0.637277365F, -1.63437569F, -1.66334093F,
    -2.96868396F, 1.11825562F, -1.00509691F, 1.20710051F, 1.31169033F,
    -0.799004734F, -0.765924335F, -0.962338388F, 1.12076008F, -3.87062359F,
    -0.307093799F, 1.8405633F, 0.155783206F, -1.42088187F, 0.628720105F,
    -1.4290483F, -2.09871125F, -0.701099634F, -2.16182685F, 2.33092427F,
    1.46827388F, -0.277039796F, 1.84950638F, 1.53191268F, 1.24173224F,
    0.125263453F, -1.81119406F, -1.90062773F, -0.345481068F, -0.453898579F,
    0.656773627F, -0.205559F, -5.77180243F, -3.96931458F, -2.33477688F,
    -0.758463919F, 0.906038225F, -1.62422168F, -0.202578902F, -0.174221039F,
    -1.45631433F, 1.62593722F, 0.113094941F, 0.155662641F, 1.00630116F,
    0.404518217F, -0.330476433F, 0.046029076F, -2.26348639F, -0.295646548F,
    -0.679235518F, 0.629436374F, 0.3223162F, -0.715265572F, -0.901571751F,
    -0.295496374F, -1.87801194F, -0.27680707F, -0.163081184F, -0.920279741F,
    -1.64986205F, 0.911670089F, 0.286692113F, -1.66894293F, -1.40570128F,
    1.85478508F, -0.078721568F, -3.48477674F, -0.147901773F, 1.0545404F,
    -0.451583475F, 0.993249655F, 1.01214123F, 1.07192457F, -0.37911728F,
    -0.904959857F, -1.68496096F, -1.19465077F, -0.468665481F, -1.14285147F,
    -0.39761436F, 1.14208281F, -3.31858754F, 0.486740589F, 0.109198593F,
    -0.639679849F, -3.70537F, -0.324076176F, 0.222521976F, -1.57928634F,
    0.934412241F, 0.504319131F, -1.31182563F, 0.529103279F, 0.355523974F,
    0.70712626F, -1.44601119F, -2.4972806F, -0.0465360917F, 1.43910241F,
    -1.36087954F, 0.203210711F, -6.31692219F, -3.12542653F, -3.92122889F,
    -2.23380566F, -0.121589236F, 1.09192991F, -2.3468008F, -0.633411348F,
    1.20418572F, 1.26008856F, -1.59155226F, 1.56242657F, -0.626807F,
    -0.577816129F, -1.1644268F, -0.276113898F, -3.57709765F, 0.703616738F,
    -0.537469387F, -0.529723585F, 1.24732125F, -0.446957707F, -1.92070353F,
    0.338040352F, 0.231258884F, 1.2122618F, -0.509074211F, 1.41290843F,
    -0.159990534F, 1.60881615F, 1.34592509F, -0.0795532092F, -0.49276787F,
    1.75169158F, 0.110018089F, -0.699761629F, 1.0191766F, 0.55235225F,
    -3.20408773F, 1.58736074F, 0.459498912F, 1.52552164F, -2.6650238F,
    -2.0942533F, -3.32317591F, -0.866558671F, 0.123366274F, -1.76934767F,
    0.588949084F, -0.189526096F, 2.18784881F, 2.30586123F, 1.88352549F,
    -1.65613031F, -0.712891877F, 0.355434865F, 0.735945404F, 1.51013207F,
    -1.40859044F, 0.569062531F, -1.27995241F, -1.43416F, -0.790507197F,
    0.264740914F, -4.23638773F, 0.358177483F, -0.89113009F, -1.18554902F,
    -3.09792256F, 0.2599383F, -1.27481806F, -3.42739439F, 0.746817052F,
    0.783848524F, 0.307215542F, -2.21603942F, -0.903051853F, -1.36912763F,
    -0.387970656F, -3.20536804F, 1.02785206F, -0.163270488F, 1.23603725F,
    1.91040599F, 0.282298386F, -0.20359914F, -2.62005448F, 0.126315743F,
    0.0604731143F, 0.0376657471F, 0.198955536F, -0.274829119F, -0.663064897F,
    -1.39763236F, -0.0365209207F, -0.678480804F, -0.673489869F, -2.10269952F,
    -0.233874947F, -0.332650155F, -1.43363595F, 1.79846799F, -1.0701406F,
    -0.396907091F, 0.287771851F, -1.02798748F, 0.0684386268F, 0.849177F,
    0.337176323F, 0.172853872F, -0.165113121F, 0.0104329661F, 0.369324774F,
    0.0137771834F, 1.03703618F, 1.25007689F, -0.373929203F, -0.536551595F,
    0.163942903F, 0.295507967F, -1.28387904F, 0.264508456F, 0.738260686F,
    0.159604833F, 0.205037504F, 1.18227601F, 0.553743482F, -2.92402077F,
    0.302111536F, -0.108988136F, 0.903900862F, -2.65925789F, -3.65343118F,
    0.741620421F, -1.35354233F, 0.327520937F, -1.10676217F, 0.0742578581F,
    -2.41738605F, 0.38277477F, -2.78017879F, -0.130898952F, 1.53848982F,
    -0.955382168F, -0.921767F, -0.368732721F, -3.1105547F, -1.26557779F,
    -2.17357683F, -1.48436236F, -2.82425404F, 0.115993671F, -0.281320691F,
    0.650285F, -0.0283548441F, -0.460030049F, -0.180718794F, -0.799860537F,
    -0.557797F, 0.430607647F, 1.22225976F, -0.75363934F, -3.62411451F,
    0.743964434F, -0.780872703F, -0.287537158F, -0.361829519F, -0.763671219F,
    0.823121607F, -0.253235459F, 3.06589508F, -1.13144839F, 0.994322777F,
    -3.03789711F, -0.385298759F, -1.56607652F, -1.36433709F, -0.21528478F,
    -0.0802271888F, 0.817062736F, 0.230799288F, -0.419672877F, -1.15264511F,
    0.225286275F, 1.19571185F, -3.79921865F, -0.30197078F, -3.24543262F,
    0.300776362F, 0.378403336F, -3.84295273F, -0.679455161F, 0.160762638F,
    -2.47035265F, -4.91441536F, -1.78533113F, -3.40156651F, -4.30212784F,
    -0.452068418F, -1.35969818F, -0.337609529F, -3.46679449F, -4.6680479F,
    0.0946081951F, -4.74580669F, 0.290868759F, -1.63777375F, -1.11944604F,
    0.298639208F, -0.358945549F, -3.57641721F, -2.38239074F, -0.816784382F,
    -0.177718833F, -0.416478842F, -0.204115883F, -2.48821497F, 0.688966F,
    0.631429851F, -0.667245388F, 0.36764434F, -3.10685253F, 0.617533565F,
    0.0681383163F, -0.482838094F, -0.0246333089F, -2.45138526F, 0.136111453F,
    -1.21201515F, 1.22082865F, -2.17304397F, -0.429016382F, -0.689331889F,
    -0.400115192F, -2.44386864F, 1.89058173F, 0.322777659F, -1.34907007F,
    0.508488119F, -0.434868336F, -3.26829624F, 1.241027F, -0.782365203F,
    -0.382631332F, -0.246018261F, -0.497704506F, 1.74172425F, 0.326596737F,
    -1.20570683F, -0.242796868F, 0.462104052F, -0.635464F, -4.05738592F,
    -0.432466596F, 0.8135F, 0.575295925F, 0.536013901F, -1.97183561F,
    -0.888005257F, -0.345049441F, -5.4516F, -0.552384675F, 0.972771227F,
    -0.0174172353F, 0.663986266F, 0.130944654F, 0.73217386F, -1.78204787F,
    -1.44554472F, -0.928643942F, -1.3200227F, 0.18344979F, -0.65166086F };

  static const real32_T d[70] = { -1.13252938F, -0.0958412215F, -4.89823532F,
    -1.34461045F, -1.51614344F, -1.95528877F, -1.10472727F, -0.231536627F,
    0.55128634F, -1.08205223F, 0.0931146517F, -1.38892078F, -0.0884473771F,
    -4.04125643F, -3.7869947F, -1.8405062F, -0.406192571F, -3.85924196F,
    -2.60373378F, 0.496697843F, -1.32191825F, -2.24326611F, -2.42647147F,
    -3.92418814F, -0.0626707152F, -0.472612351F, -3.08578014F, -0.332230538F,
    -1.10017085F, -0.826013207F, -1.04717469F, -0.136934936F, -2.35505557F,
    -3.97496939F, -0.319365144F, -0.855615079F, -4.53055811F, -1.25569093F,
    -1.58881009F, 0.753583252F, -2.7138505F, 6.84443F, -2.18723059F,
    0.759218752F, -0.818075538F, 0.604649961F, -2.76242F, -5.54452705F,
    -2.13074851F, -2.6065371F, 0.0440813862F, -2.46396756F, -0.918245077F,
    -1.9856143F, 0.927412271F, -0.694488764F, -2.9294641F, -0.591107905F,
    -3.8957293F, -2.33905339F, -6.06841326F, -0.127917424F, -2.19248176F,
    -0.768610299F, -2.32753706F, -2.46526718F, -2.48506141F, -2.55720115F,
    0.377746671F, -0.448460549F };

  static const real32_T tmp_4[4900] = { -0.344708115F, 0.296522707F,
    -0.0317500122F, 0.267265648F, -0.108435437F, 0.619200468F, -0.116478719F,
    -0.0409399308F, -1.09490025F, -0.100543603F, -3.14382529F, 0.164395094F,
    0.0885621533F, -0.288897097F, -0.246475667F, -0.165428609F, 0.216180861F,
    -0.72227031F, -0.803032756F, -0.0142340073F, 0.037939053F, -1.30875778F,
    -1.34842658F, 0.176314816F, -0.0232763849F, 0.14951165F, -0.207008675F,
    -1.93906868F, 0.429647386F, 0.223471567F, -0.0588456504F, -0.139287844F,
    -0.30772531F, -0.0944125429F, 0.358224839F, -0.0069364761F, -0.253231019F,
    0.0520286076F, -1.22348237F, 0.200694F, 0.360755444F, -0.0755501315F,
    -0.0198794901F, 0.136880487F, 0.401391476F, 0.0411468968F, -0.235696808F,
    -0.00366917439F, -0.407964915F, -0.202086359F, -0.0363282114F, 0.178520262F,
    -0.589810252F, 0.278728753F, -0.436973155F, -0.129403383F, 0.0394425765F,
    -0.641655207F, -0.0682593361F, -0.295838296F, 0.179999471F, -1.9328295F,
    -0.183613464F, 0.130804315F, 0.0178018548F, -0.971790373F, 0.109446578F,
    -0.355814189F, 0.0157292187F, 0.0874912515F, 0.666397572F, 0.180295587F,
    0.672171116F, 0.898471236F, 0.678738594F, 1.31715488F, 0.142538905F,
    0.479661554F, 2.23711276F, 0.586137474F, 6.43697834F, 2.00928974F,
    0.447532356F, 0.116393276F, 0.221632704F, -0.137249693F, 0.374780267F,
    0.148961753F, 0.0912376344F, 0.440294981F, 0.543705404F, -0.618952453F,
    1.80543828F, 0.747990191F, 0.272822231F, 1.72713423F, 0.300956398F,
    2.40617085F, 0.920329392F, 0.123856932F, 0.0464104712F, 0.334206402F,
    2.57198048F, 0.411843717F, 1.44551241F, -0.181065008F, -0.426151395F,
    0.850663245F, 0.339999795F, 1.49580324F, 0.829927921F, 0.464308292F,
    0.541835189F, -0.410410523F, 0.686957F, 0.273407668F, 1.98083484F, 1.677526F,
    0.706385434F, -0.192536965F, 0.378112406F, 0.0100156236F, -1.15596747F,
    0.784694433F, 0.505963266F, 0.576393545F, 0.939617813F, 1.22562099F,
    0.415961266F, 0.382161766F, 0.840919495F, 6.37942934F, 0.438275218F,
    0.555383265F, 0.0325605981F, 0.734903157F, 0.278588414F, 0.0947789773F,
    0.537019491F, 0.187915713F, 0.0869245529F, 0.599236906F, -0.489464641F,
    -1.11282015F, 0.570565164F, -0.105371326F, -0.187335506F, 0.118851259F,
    -0.714601636F, 0.100101076F, 0.735129833F, -0.905732274F, -0.327444613F,
    0.0596060343F, 0.14929755F, -0.443568438F, -0.0680515766F, 0.171502158F,
    -0.0727253482F, -0.332843244F, -0.10036584F, 0.417494655F, -0.392719746F,
    -0.236404017F, 0.105765767F, -0.107401043F, -0.376795173F, -0.406006426F,
    -0.0330707878F, -0.970641673F, -0.365679711F, -0.956175387F, -0.590836644F,
    -0.180182844F, -0.650360465F, -0.141429156F, -0.503465354F, -0.375748426F,
    -0.3376064F, 1.16323876F, -0.308322042F, -0.56571F, -0.306803048F,
    -0.710605145F, -2.35756493F, -0.390221834F, -0.316896051F, 0.0121138366F,
    0.00867323391F, -0.409751296F, -0.0533408634F, 0.124239393F, -0.396588057F,
    -0.29451412F, -0.315928906F, -0.126930773F, -0.680895746F, -0.475192189F,
    -0.0386250876F, -0.299493551F, 0.170525536F, 1.09740889F, -0.789557F,
    -0.373898596F, 0.0791171938F, -1.91043329F, -0.0990559086F, -0.418291599F,
    -0.194160089F, -0.0344054773F, 0.307150334F, 0.0621479712F, 0.129868507F,
    0.119818568F, 0.158358008F, -0.236968428F, 0.0831470713F, 0.36774233F,
    0.671151161F, 0.150531679F, -0.0362777971F, -0.0247549769F, 0.1393639F,
    -0.268401563F, 0.127849892F, -0.902081788F, 0.401459157F, 0.102673866F,
    0.415509F, 0.212519452F, 0.197058916F, -0.592232347F, -0.0510100089F,
    0.168068632F, -0.113998391F, -0.161168844F, -0.207060084F, 0.0526984F,
    -0.061668124F, 0.0798435882F, 0.376199037F, 0.0196167473F, 0.115791924F,
    -0.0127043929F, -0.227874205F, 0.586086F, 0.182225958F, 0.433790088F,
    -0.49461773F, -1.1786114F, -0.277416945F, 0.300804198F, 0.347896636F,
    -1.10423231F, 1.14331877F, 0.338638306F, 0.000938588F, 0.30760029F,
    0.328354806F, 0.230978638F, 0.319596559F, 0.522296548F, -0.149146363F,
    0.673227429F, 0.120494895F, 0.129338861F, -0.306991667F, -0.0886085704F,
    0.107450478F, -0.0929392651F, -0.338818878F, 1.28748763F, 0.0964410305F,
    0.345389724F, 0.279092491F, -1.30221343F, 0.232909039F, 0.308930039F,
    -0.0309322551F, -0.151820451F, 0.274440795F, -0.857611477F, 0.0742628574F,
    0.174657762F, -0.299211F, -0.0686857104F, 0.0842149928F, 0.206741914F,
    0.303376734F, 0.112886146F, 0.517626286F, -0.846863091F, 0.105579451F,
    0.0419931151F, -0.0241935328F, -1.0063343F, 0.00625375938F, -0.0886148363F,
    0.134416893F, -0.0818461254F, -0.0563920699F, 0.125259742F, -0.59919107F,
    -0.0811550841F, 0.148461178F, -0.114983201F, -0.0195572376F, 0.0145889046F,
    0.0692091361F, 0.0680520609F, 0.116496839F, -0.468572319F, -0.876609743F,
    -0.093078956F, -0.590126395F, 0.327172428F, -0.158519194F, -0.000440060045F,
    -1.29664457F, -0.591129482F, -0.97393316F, -0.0167099554F, 0.0686401427F,
    -0.314070433F, 0.274864703F, 0.0160267F, 0.012919724F, -0.142911673F,
    0.325859F, -0.157899037F, 0.139530122F, -0.0859869197F, -1.30039883F,
    0.122555174F, 0.079047747F, -0.033167392F, 0.0854080245F, -0.132294118F,
    -0.024431074F, 0.0967996195F, -0.829567432F, -0.177324727F, 0.169739544F,
    0.180833444F, -0.123836249F, -0.919578314F, 0.187480062F, 0.0708323345F,
    -0.0493929908F, 0.137583956F, 0.214557454F, -0.179886058F, 0.251161933F,
    0.265471071F, 0.20016855F, -0.19148849F, 0.135476172F, 0.139260516F,
    0.582168102F, 0.384207577F, -0.0781713128F, -0.539415F, -0.141783282F,
    0.0836725757F, 0.0830851644F, -1.01599145F, 0.422982246F, -0.182930425F,
    0.0508358F, 0.177536502F, 0.287442446F, 0.0414880253F, -0.721452475F,
    0.302985251F, 0.0714110136F, -0.0153420307F, 0.0347187556F, -0.039163392F,
    0.497145802F, -0.450484931F, -0.0429436341F, -0.294139057F, 0.00999989454F,
    0.482195288F, -1.46390128F, 0.255725026F, 0.31575191F, 0.467882395F,
    -0.305147737F, -1.4128418F, 0.0713773519F, 0.117807917F, 0.309341192F,
    -1.20448053F, 0.890156209F, 0.153239533F, -0.0754648447F, 0.204803497F,
    0.300314754F, 0.37800023F, 0.0135772917F, 0.426185042F, -0.414784044F,
    -0.117359661F, 0.139012754F, 0.608826578F, 0.0485274307F, -0.598651409F,
    0.232239619F, 0.115102045F, 0.229934052F, 1.8422941F, -0.143008813F,
    0.375553459F, 0.263082087F, -1.97429037F, -0.205323339F, -0.0881673694F,
    0.106162027F, -0.0872032046F, -0.0267914589F, 1.05895853F, 0.227267638F,
    0.142741486F, -0.104767725F, -0.226285607F, -0.0248108972F, 0.0851105824F,
    -1.34191406F, -0.190764889F, -0.538239598F, 0.347987115F, 0.155220345F,
    -0.261931121F, 0.284997761F, -0.938954294F, -0.0709517896F, -0.0867083594F,
    -0.276681185F, -0.0195796341F, 0.0980109572F, -0.394333452F, 0.124464914F,
    0.0899681076F, -0.0847688168F, 0.228320688F, 0.0318040885F, 0.164908081F,
    0.159490064F, -0.236571953F, -0.00652151695F, 0.371597707F, -0.340995431F,
    -0.28092438F, -0.295295209F, 0.0241599176F, 0.154871032F, 0.0162958745F,
    -1.670753F, 0.858479917F, 0.430297196F, -0.27949214F, 0.0152601535F,
    0.359468967F, -1.71247399F, -0.142852768F, 0.383273959F, -0.710853338F,
    -0.399583161F, 0.249200061F, -0.0320559256F, 0.0089188125F, 0.462717682F,
    -0.191330373F, -0.576734364F, -0.0775977895F, 0.0858499184F, 0.0130576557F,
    0.0891078189F, -0.178566769F, 0.345475048F, -1.56971848F, -0.0899747461F,
    -0.0144099016F, -0.301852F, -2.38213921F, 0.0551856421F, 0.0627101138F,
    0.0187725592F, 0.490859896F, 0.34313491F, 4.88105869F, 0.139050707F,
    0.430588633F, 0.186806843F, 2.0682137F, 0.555304289F, 0.382465124F,
    1.98901463F, 0.36797291F, 0.883882821F, 2.10799146F, 0.36934188F, 0.63783F,
    -0.0809918717F, 0.86725539F, 0.164404884F, -0.348411471F, 0.589991689F,
    0.439454317F, 0.105915241F, 0.651420832F, 3.50082755F, 0.875521541F,
    0.614515781F, 2.35396266F, 0.764286876F, 2.41080046F, 0.593034923F,
    1.36960256F, -0.0278278794F, 0.416053951F, 1.19740891F, 0.360055298F,
    2.06899571F, 1.91123188F, 0.683793068F, 0.353611946F, 1.41512537F,
    1.95274627F, 0.103075475F, 0.333489388F, 0.447404742F, 0.875133097F,
    4.19423962F, 0.899195F, 2.45475197F, 2.55801773F, 0.390789181F, 0.625188947F,
    0.453941792F, 0.966432393F, 7.01063F, -0.028169902F, 0.39367342F,
    0.499004751F, 0.413870454F, 2.71205354F, -0.0445217155F, 0.533494949F,
    0.379593879F, 0.201481581F, 0.747068226F, 0.669945478F, 0.52974838F,
    0.956810653F, 0.894616961F, -0.122055091F, 0.721944153F, 0.0637471452F,
    0.471907139F, 0.756012261F, 0.116776772F, -0.0630041063F, -0.0337756798F,
    -1.62474608F, 0.492480725F, 0.354016334F, 0.573256433F, 0.123468459F,
    -2.00121546F, -1.11110866F, -0.198395222F, -0.466409624F, -0.0502739362F,
    0.0838698149F, 0.486446977F, 0.225498512F, 0.215211943F, 0.117582619F,
    0.140771583F, -0.631637156F, -1.73743486F, 0.275308907F, -0.110128775F,
    -0.0712464675F, -0.0397333689F, -0.0658893734F, -1.1504401F, 0.0208830535F,
    0.127661526F, -0.190081775F, -0.30286181F, -0.00508702407F, -0.204869792F,
    -0.120991707F, 0.0795436352F, 0.414680451F, -1.14318633F, -1.26216555F,
    -0.190824762F, 0.0113697592F, -0.135431141F, -0.306712061F, 0.780831277F,
    0.358886719F, 0.0785347596F, 0.699641585F, -0.227156699F, 0.0432228893F,
    0.05215808F, 0.534312248F, 1.04225397F, 0.201891944F, 0.188952565F,
    0.205735713F, 0.271204174F, -0.658162236F, 0.0608480833F, 0.232911855F,
    -0.126045421F, 0.0643538088F, 0.167013347F, 0.0913849398F, -0.191690534F,
    -0.0238655098F, 0.313957125F, 0.0583697259F, -0.780956388F, 0.246127531F,
    0.160412282F, 0.609232247F, 0.0864787102F, -0.673127294F, -0.0253075119F,
    -0.069821544F, -0.324747413F, -0.0226846319F, 0.324692518F, 0.146094635F,
    0.113820374F, 0.0327737965F, 0.0569127798F, 0.119633399F, 0.0340038203F,
    0.118386731F, -0.00951076299F, -0.0297084693F, 0.097177133F, 0.033158917F,
    -0.00193634944F, -0.236934051F, -0.00382415857F, 0.135221153F, 0.134191394F,
    -0.0603423081F, -0.260473102F, -1.63411653F, -1.44397688F, -0.661202073F,
    -0.019442467F, 0.0517361F, -1.49268329F, -0.0771451145F, 0.0832525045F,
    0.311522275F, -0.113825507F, 0.112670228F, 0.0984991118F, 0.0598424971F,
    -0.0474000759F, 0.0389586538F, 0.26448226F, 0.0809371322F, -0.0220873486F,
    0.0299410019F, -1.33157957F, -0.0679544881F, -0.10641446F, 0.229116321F,
    -0.0681927949F, 0.0455615073F, 0.767960131F, 0.129086018F, -0.498978227F,
    0.0186599195F, 0.164233372F, -0.0485945567F, 0.00187761488F, 0.0269513614F,
    0.0351168F, 0.827508688F, 0.15182732F, 0.250231F, -0.121624462F,
    -1.19166946F, -0.157197341F, 0.0481864F, -0.411162168F, 0.0539235845F,
    -0.049378179F, -0.121148512F, 0.236700147F, -0.264505148F, 0.102797523F,
    0.0089314878F, -0.549640298F, -0.150799736F, 0.266546518F, 0.0581783801F,
    -0.0780769F, -0.00211354857F, -0.06660676F, 0.01038808F, -0.0365091115F,
    -2.21162415F, -0.25303784F, -0.10976661F, 0.0670876801F, -0.0917904824F,
    0.0250037462F, 0.0476727337F, 0.0240730159F, 0.033639349F, 0.143025294F,
    -0.635027826F, -0.40887177F, -1.33900714F, -0.105166525F, 0.00824265089F,
    -0.156450436F, 0.126506597F, -0.0442984812F, -0.0556013137F, -1.32456601F,
    0.186676204F, -0.100017212F, -0.0852117613F, -1.35123456F, 0.0581145622F,
    -0.0517918877F, -0.0161017068F, -0.186474279F, -0.037356507F, -0.0340631567F,
    0.0633391589F, -1.91514671F, -0.0142009361F, 0.2515001F, -0.039871119F,
    -0.056165617F, -0.119256131F, -0.118774034F, -0.0385750085F, -0.0358847082F,
    0.0860663652F, 0.267467916F, -0.172226831F, 0.0116422866F, 0.0896747336F,
    -0.00453062635F, 0.460839063F, 0.0885308385F, 0.0714735091F, -0.0275466591F,
    -0.0348627642F, 0.112995759F, -0.00455908244F, 0.0293101408F, 0.0547592938F,
    -0.0468874536F, -1.33476424F, -0.540562093F, 0.640438557F, 0.274052F,
    0.799007952F, -0.00519388542F, 0.0261651762F, 1.96612084F, 0.406761914F,
    1.59727347F, -0.000987292849F, 0.0267908238F, 0.454997689F, -0.569703F,
    0.21598497F, -0.794031262F, 0.823952079F, 0.878997803F, 0.117785022F,
    -0.427155316F, 0.506625056F, -0.154545486F, -0.0974676386F, -0.125236452F,
    -0.209158346F, 0.631855488F, -1.23513544F, 0.761854053F, 0.530952632F,
    0.45774284F, -0.0486369953F, 0.193499267F, -0.325610906F, -3.0695045F,
    -0.846614301F, -0.148539826F, -0.871282518F, 0.0232182946F, -2.39000082F,
    -1.22179019F, -0.0986221954F, -0.298765391F, -2.3896811F, 0.911915362F,
    0.207593247F, 0.493021697F, -2.66804814F, -0.516921341F, 0.424345285F,
    0.389476657F, 0.351300091F, 0.916789532F, -0.0994027257F, -0.626615F,
    -0.436171979F, 0.0361953676F, -0.399546117F, 0.324991733F, -0.0381982736F,
    0.131843403F, 1.50199F, -0.701518476F, 0.0579233654F, 0.177617192F,
    0.481844395F, -0.393093079F, 0.288649529F, 1.05423653F, 0.257193327F,
    0.0621247888F, 0.388015717F, 0.259079069F, 0.0703622699F, -0.356403142F,
    0.108782262F, -0.069538F, 0.0115440339F, 0.182408273F, 0.0558490455F,
    0.464256078F, -2.71334076F, -0.488340318F, 0.0525200963F, -0.0227650944F,
    0.0491507873F, -0.19680576F, 0.0193949398F, -0.158430412F, 0.0756931677F,
    0.0551977456F, 0.27727288F, -2.21021128F, 0.242805615F, -0.0277499799F,
    -0.121179163F, -0.098643668F, -0.106132708F, 0.0383105F, -0.017841978F,
    0.111622363F, -0.411895722F, -0.487885237F, 0.0406070054F, -0.456008434F,
    -0.19436F, 0.209586561F, -0.0488202237F, -0.00755506102F, -1.67903149F,
    -0.831868827F, 0.104796551F, 0.0066952277F, -0.0910665244F, 0.58768028F,
    0.0108863069F, -0.0991044343F, 0.133155733F, 0.139025018F, -0.0904902294F,
    0.0802461728F, 0.196014225F, -1.06537807F, 0.016929036F, 0.246613443F,
    -0.176968008F, 0.0874442235F, -1.7076416F, -0.0635365173F, 0.187709019F,
    -0.591168523F, 0.875429571F, -0.482986838F, 0.0878139287F, 0.0454127043F,
    0.829611838F, -0.194517225F, -0.0292763989F, -0.677288294F, -0.0732322186F,
    0.168068F, 2.50922346F, 0.0558168851F, -1.5022825F, 0.0696841702F,
    -0.200199112F, 0.717569053F, -0.421892077F, 0.0418340266F, 0.652471662F,
    -2.85752845F, -1.41473103F, 0.150740117F, 1.47281218F, -0.0671477094F,
    0.846159399F, 0.0199860465F, -0.798895836F, -0.24901998F, -0.679981351F,
    0.145927101F, 1.03707457F, 2.05339885F, 0.100119479F, 0.129324824F,
    -1.54399145F, 0.305362225F, -0.376662016F, -0.102569915F, 0.754160881F,
    0.364141732F, -0.785405636F, -0.779112697F, -0.271980196F, -1.149894F,
    1.37152278F, 1.08523297F, -0.432584822F, -0.342291594F, 3.42293525F,
    0.673952579F, 0.831774652F, 0.198135033F, 0.17694968F, 3.9898417F,
    -0.00253529986F, -1.81862402F, -0.0187396687F, 1.26287448F, -0.0412912592F,
    -0.330039948F, 0.89429152F, 0.693290651F, -0.685086131F, -0.170709759F,
    0.297341406F, 0.143168F, 0.642858386F, 0.612478733F, -0.00545081822F,
    -0.877173722F, 3.12029696F, -0.0196713507F, 0.690860868F, -0.236951739F,
    0.848527849F, -0.146405473F, 0.511324167F, 0.00285919756F, -0.143121228F,
    0.298146784F, 1.02410054F, 0.341185361F, -0.11659015F, 0.00975555088F,
    -0.721731067F, 0.354453027F, 0.422229171F, 0.354647964F, 0.349247038F,
    -0.13760452F, -1.30933595F, 0.0408574343F, 0.0589469075F, 0.161083207F,
    -0.414097458F, 0.463009655F, -0.0632825792F, 0.36324814F, 0.138168037F,
    0.376835585F, -1.18435037F, -0.471807063F, 0.227852628F, 0.183307245F,
    0.176674366F, 0.262968391F, -0.375569165F, 0.17449F, -0.0671620145F,
    0.191150188F, 0.119330131F, -0.0876880884F, 0.200951636F, 0.139859721F,
    0.402497798F, 0.160278037F, 0.0654114857F, -0.836939216F, -0.669925809F,
    -0.0856024921F, 0.174303025F, 0.163644984F, -0.32949695F, 0.684220731F,
    0.315422803F, -0.991262734F, -1.63145864F, -0.138671502F, 0.227913722F,
    0.317255586F, 0.328651488F, 0.347530901F, 0.160859689F, 0.200076938F,
    0.137582779F, 0.111729398F, 0.264731407F, 0.296467364F, 0.115411967F,
    -0.710903525F, -0.447139055F, 0.0953914821F, 0.323642969F, 0.00799527951F,
    0.0471683964F, 0.447822034F, 0.125713944F, 0.0989058167F, 0.0959509313F,
    0.00213678693F, 0.647178531F, 0.158147961F, -0.0763865486F, 0.0923368F,
    -0.455340385F, -0.0480354615F, -0.266397506F, -0.300342768F, -0.135545224F,
    0.370395124F, -0.111130036F, -0.111891873F, -0.334542483F, 0.0971842781F,
    -0.0408773236F, 0.104236357F, -0.103777401F, 0.0522543453F, -0.185680509F,
    0.206188276F, -0.744064212F, -0.0311548263F, 0.193484694F, 0.105508976F,
    -0.731904F, 0.087487787F, -0.787689149F, -3.18926358F, -1.07308447F,
    -0.0318816453F, -0.173220664F, 0.223906353F, -0.00569338491F, -0.0767875835F,
    0.243702799F, 0.0488996729F, -0.224709883F, -0.0154834241F, 0.393865675F,
    0.0768289715F, -0.213470176F, -0.00699988F, -0.786941588F, 0.958085179F,
    -0.0445643626F, -0.503046811F, -1.09914064F, 0.171754435F, -0.0228659771F,
    0.225822702F, -0.722568512F, 0.154493362F, 0.11802125F, 0.0610719249F,
    0.131761178F, 0.044943735F, 0.0260425098F, 0.0957720503F, 0.0389146246F,
    0.0779700503F, 0.396497726F, -0.207795247F, 0.0432191081F, -0.207056016F,
    -1.0224061F, 0.100620478F, 0.29636991F, -0.601645F, -0.0982596278F,
    -0.0181928035F, -0.089035295F, 0.0268295389F, 0.0799236819F, 0.119749948F,
    -0.316444725F, 0.00623613689F, 0.0435368903F, -0.0326690339F, 0.0486285537F,
    -0.39566052F, -1.33189595F, -0.0866996199F, 0.0750819147F, -0.0647585243F,
    -0.783525646F, -0.0183615647F, -0.222364187F, 0.0111952182F, -0.0563604571F,
    0.00960770342F, -0.506037354F, -1.77721941F, -0.190212607F, 0.0632152632F,
    0.0749724582F, 0.0765139088F, -0.109414287F, 0.0588540174F, -1.23506F,
    -0.0660297498F, -0.130698696F, -0.162628904F, 0.129106984F, 0.010981299F,
    0.0238579512F, -0.0320883319F, -0.00743116625F, -0.57427448F, -0.652451396F,
    -0.235023633F, -0.00305073126F, 0.0495064966F, -0.143577486F, -0.253184736F,
    -0.00931109488F, -0.00307861F, -0.190846398F, -0.0275371037F, -0.0478217416F,
    -0.0105035137F, -0.203588217F, -0.458171159F, 0.102574281F, 0.221184522F,
    -0.11942108F, -0.0732886F, -1.20407069F, 0.0330812223F, -0.181074426F,
    -0.398308694F, -0.423618555F, 0.0573583804F, 0.0105741303F, -0.228112638F,
    -2.63744211F, 0.170947269F, 0.000523006369F, 0.0163288582F, 0.0674305111F,
    0.273730129F, 1.60678494F, 0.604301214F, 0.355416328F, -0.160926744F,
    -3.42788F, 0.3117688F, 0.709764F, 1.7954098F, 0.291725576F, 3.73067927F,
    1.29022253F, 0.0734391063F, -0.854280233F, -0.211405963F, 1.09494984F,
    1.00220299F, -0.0407189876F, 0.45990479F, 0.22777082F, 0.969816506F,
    0.350610167F, -0.497901529F, -0.0427287854F, 0.10801556F, -1.03093183F,
    0.462434024F, 1.40243864F, 1.58461022F, 0.533738196F, 0.293237716F,
    1.12343907F, -0.230887413F, 0.292262256F, -0.671797216F, -0.251566708F,
    0.299355239F, 0.354567945F, -0.974703312F, -1.92631423F, -0.0617586337F,
    0.488007337F, 0.453138679F, 1.18218088F, 0.0761287957F, 0.0992926955F,
    3.30496144F, 0.292747021F, -0.270144433F, 0.576744676F, 0.558319271F,
    -0.00333980634F, 4.05033398F, -0.0438481681F, 0.021420991F, -0.0282612443F,
    0.6004076F, 0.789951921F, 0.49924463F, 0.00297154859F, 0.0595016107F,
    0.465482205F, 0.384100497F, 0.876260459F, 0.911210179F, 1.92495632F,
    0.532657146F, 0.400673598F, 0.797023654F, 1.08653224F, 0.158816114F,
    0.448262095F, 0.0956491902F, -0.780957162F, -0.222458228F, -0.0186935719F,
    0.182714403F, 0.261748344F, 0.14236246F, 0.107571431F, -0.349545419F,
    -0.566235721F, 0.0377777517F, 0.157940835F, 0.199430585F, -1.53377771F,
    0.286585659F, 0.150468856F, 0.0951103F, -0.106060401F, -0.0159033015F,
    0.195125461F, -0.0308894385F, 0.13402532F, 0.15815118F, -0.0687791F,
    0.048345115F, -0.466684818F, 0.0677186623F, -0.0436035134F, 0.244173571F,
    0.0568390638F, -1.87462389F, 0.0539596379F, -2.30547F, 0.295328647F,
    0.0572190769F, 0.13523832F, -0.520826578F, -1.30464911F, -1.45344484F,
    0.200528547F, 0.176180452F, 0.183112845F, -0.793913305F, 0.204698071F,
    -0.0825754181F, -0.119758867F, 0.058467418F, 0.142284289F, 0.058320988F,
    0.203265876F, 0.0634952411F, -0.0606466606F, 0.198764116F, 0.0387653746F,
    -0.0902126357F, -0.147732526F, 0.155765116F, 0.0767657459F, -0.588985682F,
    0.0412142649F, 0.189065F, 0.0804521367F, 0.00484254397F, -0.0474331416F,
    0.140383348F, -0.166496873F, 0.191958323F, -0.274570942F, 0.14250879F,
    -0.343478024F, -0.0433246568F, -0.786499321F, -0.0437625F, -0.84025985F,
    0.158815637F, -0.0727088228F, 0.286775529F, -0.0958954766F, -0.295377433F,
    0.0645086393F, 0.0684013069F, 0.0905572549F, 0.0169209391F, -0.989733338F,
    0.24536711F, 0.136266232F, 0.108130366F, 0.0447054431F, 0.0396242552F,
    -0.0568705834F, 0.0407928452F, -0.0129483845F, 0.208619282F, -1.98470175F,
    -0.0770041943F, -0.996626F, -0.116351083F, -0.223795459F, -0.0546759702F,
    0.112442851F, -0.42061767F, 0.0421961695F, 0.0574199818F, 0.0341178253F,
    -0.085470058F, 0.281603396F, -0.176748246F, -0.205429375F, 0.0788627714F,
    -0.140976712F, 0.17561312F, 0.080440551F, -0.19892706F, -0.0364072733F,
    -2.16819429F, -0.0397628546F, 0.0674962774F, 0.129546031F, 0.0757766217F,
    -0.141332254F, -0.0685838684F, 0.15006499F, -0.0658248439F, 0.0091711618F,
    -0.056698177F, -0.666568696F, 0.0276613832F, -0.0612982139F, -0.0609233081F,
    0.0124839144F, -0.0431581065F, 0.0475915223F, -0.215672299F, -1.27040672F,
    -0.0192787852F, -0.00670628855F, -0.0364337191F, 0.0983203873F,
    0.0629944652F, -0.046895083F, 0.0551954396F, -0.909139693F, 0.16309613F,
    -0.672296405F, -0.0907269418F, 0.0464431792F, 0.0705443248F, -0.00247086165F,
    -0.690972626F, -0.121816583F, -0.134488344F, -0.0237570461F, -0.0702721402F,
    -0.882777572F, -0.156554863F, -0.0074591022F, -0.0542999F, -0.308741361F,
    -0.19259572F, -0.186936662F, -0.092728436F, 0.115784F, -0.0258470364F,
    -1.63397849F, -0.159709677F, -1.12446046F, -1.40930653F, -0.395111084F,
    -0.110249467F, -0.0375822857F, -0.208579779F, -0.0759954154F, 0.0302365925F,
    -0.139475212F, 0.0273896158F, -0.224920899F, -0.987412035F, -0.160352275F,
    -0.14877966F, 0.0738942623F, 0.141687274F, 0.0487870574F, -0.420110881F,
    -0.157093599F, -1.75270021F, -0.839661419F, -0.37176016F, -0.156137243F,
    -0.0939074531F, -0.127145335F, -0.277034312F, 0.10337092F, 0.0404727384F,
    -0.0336391144F, -0.135880947F, -0.350436747F, -0.0402207673F, 0.155074224F,
    -0.127184346F, -0.232775748F, -0.102978691F, -0.0694243F, -0.189516544F,
    -0.744641781F, -0.339400828F, -0.049565617F, -0.016419908F, -0.30665648F,
    0.172567815F, 0.147911832F, 0.163234204F, -1.44449413F, 0.00488748262F,
    -0.0250345599F, -0.0386269055F, 0.306660205F, 0.390812844F, 0.119689301F,
    -0.355490953F, -0.124179684F, 0.128818199F, 0.0324379057F, 0.175095364F,
    0.207105592F, 0.287651777F, 0.103635147F, 0.121109411F, -0.151374191F,
    0.189268678F, -0.191227853F, 0.0163804982F, 0.103943646F, 0.290964574F,
    -0.410414934F, 0.0710468516F, -0.998816073F, -0.394212097F, -0.130628899F,
    0.275939912F, -0.139156476F, -0.154589623F, 0.0429926366F, -0.0852415264F,
    0.32654202F, 0.180633858F, 0.102698676F, 0.0781068876F, 0.0737994164F,
    -0.0142418686F, -0.51715529F, -0.0117380442F, 0.0437215231F, -0.811745167F,
    0.161546677F, -1.04969347F, -0.203685582F, -0.12601912F, 0.277546108F,
    0.241660759F, 0.396532744F, 0.386580706F, -0.0855153725F, 0.126199231F,
    -0.0721740574F, 0.210941181F, -0.168709815F, 0.170873687F, -0.0203614309F,
    0.193875685F, 0.153711706F, 0.304186F, 0.193682656F, 0.129245818F,
    -1.7423563F, 0.0156865381F, -0.0112703722F, -0.0440880507F, 0.1010876F,
    -0.176721126F, -1.39320421F, -0.272291422F, 0.400728345F, -0.153059959F,
    0.091122508F, -0.356534898F, -0.140605688F, 0.0306031574F, -0.0421269871F,
    -3.00783134F, -0.0895699635F, 0.171428517F, 0.106985264F, -0.0719492212F,
    -1.71306753F, -0.149609089F, 0.139332384F, -0.0715021715F, -0.146816611F,
    -0.160549209F, 0.152784124F, 0.445097327F, -0.161079496F, -0.173426822F,
    -0.137943506F, 0.0984670073F, 0.380872369F, -0.300350249F, -4.55708456F,
    -0.135241136F, 0.249728978F, 0.0383830927F, -0.201457381F, -0.54664886F,
    0.107432254F, -0.0768873468F, -0.513038278F, -0.035767287F, -2.80083752F,
    -0.279596359F, 0.323895633F, 0.297254831F, -0.0461522155F, 0.382499546F,
    0.0600544848F, -0.0569396429F, -1.21961808F, 0.365584075F, -0.251381755F,
    -0.198007897F, -0.358684957F, -1.1610992F, -0.112125486F, -0.330681443F,
    0.154036582F, 0.35815993F, 0.48384589F, -0.0893177688F, -0.0503037162F,
    -0.0189272109F, -1.09169316F, 0.42708689F, -0.143862411F, -0.201122537F,
    0.00635014102F, -0.194863737F, 0.102030911F, -0.17998983F, -0.184081882F,
    -0.0591057576F, -0.910338044F, -0.230812922F, -0.534606576F, -0.3459149F,
    -0.522426307F, -0.0705686212F, 0.207953885F, 1.14274693F, -0.2201024F,
    8.73982525F, -0.861751318F, -0.090910621F, -0.354839087F, -0.0732579753F,
    1.34589851F, -0.0515226386F, 0.327820241F, -0.125893191F, 0.0679292F,
    0.361071616F, -0.217943504F, 0.807561F, 0.200614154F, 0.32629475F,
    -1.63105261F, 0.563486397F, 1.51093495F, 0.119631022F, -0.216401443F,
    0.179019913F, 0.476529092F, 2.29394197F, 0.0280986372F, 1.08996475F,
    -2.71312714F, -0.00734620867F, 0.713902414F, 0.434999138F, -0.778505147F,
    0.376418889F, 0.602924824F, -0.135599345F, 0.10332597F, -3.68347597F,
    -0.0629625693F, -2.18342543F, 1.62556541F, -0.370690048F, 0.153242156F,
    0.343531042F, 0.517007053F, 0.369303F, 0.958716869F, -0.457091779F,
    0.017814206F, 1.57050228F, 1.16534483F, -0.0903479233F, -0.0557886176F,
    0.601342618F, 3.87630224F, 0.367308825F, -0.0662172064F, -0.0875239074F,
    0.556288242F, 0.249576256F, -0.075551182F, -0.224185795F, -0.997338235F,
    0.155487046F, -0.600827396F, -0.175894484F, 0.136142537F, -0.202735469F,
    -0.0949552283F, 0.000669097761F, -0.057891354F, -0.53696233F, 0.098550193F,
    -2.59968734F, -0.201731905F, 0.229120582F, 0.370385915F, -0.353868365F,
    0.287330955F, 0.0571129434F, 0.0512513407F, -0.139663935F, -0.248200178F,
    0.144524F, -0.106798925F, -1.85319173F, -0.0406877697F, -0.222430497F,
    -0.103867903F, -0.0429000556F, -0.862048149F, 0.132544801F, 0.332894325F,
    -0.197538733F, -0.05849595F, -0.92879045F, 0.152478695F, 0.490937084F,
    0.0415547192F, -0.409785837F, -0.0681067556F, -0.293349862F, -0.257064909F,
    0.342715919F, -0.170720682F, -0.111199357F, 0.103013709F, -1.60177279F,
    -0.0903653055F, -0.0469096415F, 0.517874479F, 0.0127202775F, -0.143951342F,
    0.0958805084F, 0.499017209F, -1.68007839F, -0.107200153F, 0.0838671848F,
    0.000904218643F, -0.149849772F, -0.0555995591F, -0.130051702F, 0.0169323292F,
    -0.0437380187F, -0.85165F, -0.138699383F, -0.104764685F, -0.0353346057F,
    -0.121117458F, -0.169967383F, 0.0937475711F, 0.179611653F, -0.283650935F,
    0.223739564F, -0.633700907F, -0.0202165972F, 0.332300633F, 0.0399194434F,
    -0.0536357798F, 0.216142491F, 0.369601965F, -0.0937607F, 0.378824532F,
    0.388948977F, -1.11782074F, 0.200851262F, -0.34839204F, 0.129901171F,
    0.372433484F, -0.0574236251F, -0.0988561139F, -0.0526968576F, 0.0870211795F,
    -0.0568763912F, 0.243719563F, -0.10816136F, 0.275446892F, 0.00821531471F,
    -0.809984565F, 0.492063642F, -0.138479799F, 0.158590838F, 0.0546315946F,
    0.0156144518F, -0.0338614658F, -0.257901907F, -0.00863058493F, -0.258451253F,
    0.167443514F, 0.457844704F, 0.00348568568F, 0.329435378F, -0.167166799F,
    -0.0779876783F, -0.296767771F, 0.0232222714F, -0.383901983F, -0.293142527F,
    -0.392311603F, -2.40586042F, -0.257955611F, -0.0354144946F, -0.145383194F,
    0.0449966267F, -0.0581135862F, -0.17286925F, -0.00678592874F, -0.0909129158F,
    -0.276828438F, -0.202996492F, -0.557528794F, 0.0758728087F, 0.214345023F,
    -0.296363622F, 0.351680398F, 0.0718571767F, 0.107055686F, 0.510311544F,
    0.310099572F, 0.355039388F, 0.352890939F, -0.0144098075F, 0.235113338F,
    0.451672405F, 1.04368937F, 0.332069486F, 0.297062248F, 0.185259253F,
    -0.0944247767F, 0.0266839378F, 0.458663017F, 0.865626872F, 0.112054057F,
    1.52647281F, -1.69657528F, 0.0271606836F, -1.25994039F, 0.424913406F,
    -0.618554413F, 0.556473255F, -0.732542694F, 0.42175132F, 0.398062229F,
    0.325662851F, 0.290886104F, -0.484384149F, 0.469664961F, 0.226173341F,
    -1.2893306F, 0.213629723F, 0.321476102F, 0.28430444F, -0.0191732608F,
    -0.0634221882F, 0.378766984F, -0.0715928152F, 0.435318381F, -0.448179483F,
    0.172402486F, -0.0168990176F, 0.299986809F, -0.624523163F, -1.0867449F,
    -0.39580366F, 0.0249154717F, 0.0749523565F, 0.311198562F, -0.851407707F,
    0.528238475F, 0.13692984F, -0.0588573553F, 0.2886087F, 0.399440885F,
    0.414072901F, -0.0589917786F, 0.5346573F, 0.335688472F, 0.434243798F,
    0.3910335F, 0.365869582F, -0.280045927F, 0.116070956F, 0.383332074F,
    0.314863175F, 0.13641049F, 0.180522144F, 0.437168539F, 0.156197891F,
    -0.0364700966F, 0.386281937F, -0.196445554F, 0.14877364F, 0.192701817F,
    0.506799519F, -1.42508578F, 0.283177F, 0.132539377F, 0.0549714305F,
    -0.122520082F, -0.0274396352F, 0.305585F, 0.58478F, 0.0403318964F, 1.853513F,
    -2.61454391F, 0.029523382F, -0.636503279F, 0.293542236F, -1.33300304F,
    0.185971752F, -0.0231711287F, 0.382588536F, -0.278607368F, -0.0371864066F,
    0.947330356F, -1.21064413F, 0.194956169F, -0.0110981129F, -0.186157078F,
    -0.00588905765F, -0.226507872F, 0.0859314948F, -0.325750709F, 0.0376937315F,
    -0.0625614375F, -0.0261169132F, -0.0702359304F, -2.39724803F, -0.651050568F,
    -0.116208322F, -0.0303446017F, 0.0379890613F, -3.99897528F, -0.189302772F,
    -0.131114349F, 0.0482723676F, -0.652044892F, -3.56629872F, -0.30433318F,
    0.08630988F, -0.0498182587F, 0.161158144F, -0.135460392F, 0.270093471F,
    0.0611305311F, -0.858371675F, 0.251042664F, 0.53820169F, 0.298956424F,
    -0.0792483538F, 0.0798619613F, 0.180634812F, 0.146222949F, 0.0123719657F,
    1.83319628F, 0.0586950742F, -0.00592580251F, 0.0429391079F, -0.0164033063F,
    -0.111861661F, -0.0540835187F, -0.29926458F, 0.263487637F, -0.105621263F,
    -0.366352499F, 0.332026899F, -0.0921442434F, 0.124177009F, 0.522215068F,
    -0.337513387F, 0.0616962612F, -0.190255925F, -0.0281796791F, -2.55329466F,
    -0.743787587F, 0.30340907F, -0.659071445F, 0.0201765113F, -0.285957128F,
    -0.385402232F, -0.327028692F, -0.0626516342F, 0.00472287694F, -0.14810136F,
    0.193854079F, 0.0947829F, -0.239035681F, 0.175492853F, -0.629173577F,
    -0.0466132835F, -0.161869287F, -0.355161518F, -0.213154942F, -0.10152147F,
    -0.246670634F, 0.416774303F, -0.269130945F, -0.732734084F, 0.0390752852F,
    0.028962804F, -0.00569434185F, 0.381948292F, -1.41157484F, -0.118011437F,
    0.264539927F, 0.00855871662F, -0.102675311F, -0.301813751F, 0.217392921F,
    -0.154665083F, -0.578287899F, -0.29092145F, 0.0449657962F, -0.0727367103F,
    -0.206244498F, 0.319316179F, 0.405150712F, -0.0104237329F, -0.355824083F,
    -0.232327208F, -0.36729598F, -0.033482492F, -0.0222721249F, 0.0959315598F,
    -2.63469F, -0.166778028F, -0.0101756584F, -0.0147505114F, 0.089551F,
    0.0334048793F, 0.341258019F, 0.121781424F, -0.233144954F, -0.283314496F,
    -0.0350792073F, -0.118889108F, -0.108866304F, -0.0352039561F, -0.724935532F,
    0.340099543F, -0.162798256F, 0.0683016852F, -0.209731743F, -0.455238402F,
    0.0105686057F, 0.0548822843F, -0.136618629F, -0.0110735679F, -0.0935070142F,
    -0.351433903F, -0.295895189F, -0.0721897408F, -0.0695479214F, 0.212521181F,
    -0.330690295F, -1.77876043F, 0.00635630731F, -0.0543687344F, 0.0496001169F,
    0.147705F, 0.0177021232F, -0.343518019F, -0.451833904F, 0.0250197537F,
    0.310075581F, -0.068715319F, -0.107909851F, -0.0805916712F, -0.218697041F,
    0.00723147113F, 0.266012847F, -0.256238937F, -0.184412614F, 0.00756738242F,
    -0.110768184F, -0.00432969583F, 0.203472942F, -0.499120474F, 0.126567975F,
    -0.0281484332F, -0.544558764F, -0.0850897729F, 0.146580383F, 0.0177754927F,
    0.0626340434F, -0.0172739923F, -0.261968464F, 0.0800018311F, 0.12961185F,
    -0.102002434F, -1.06087101F, -0.136265233F, -0.153543428F, 0.0375695191F,
    0.18975994F, 0.0242565162F, 0.0732493773F, -0.317839801F, -0.022466952F,
    -0.0425829515F, -0.0831161365F, -0.318624F, -0.291819662F, 0.0723316222F,
    -1.03186381F, 0.594551384F, 0.722171485F, -0.690721512F, -0.568694532F,
    -0.497460783F, -0.755139112F, 0.602777898F, -0.546757758F, 2.9405055F,
    1.24267495F, -0.316279173F, -0.81879878F, -0.368100166F, -0.49119997F,
    -0.197258696F, 0.0213320348F, -0.425397784F, -0.897369802F, -0.138522834F,
    -0.556850314F, -0.139630392F, -0.33985883F, -0.904762F, 0.383642733F,
    -1.40064394F, -1.61233747F, 0.822746098F, -1.67322338F, -0.875394F,
    -0.0498321839F, 0.326685518F, -0.402655274F, 0.453854263F, -0.905747652F,
    -0.326559931F, -0.75452137F, -0.544327259F, 0.669327736F, 0.163729697F,
    -0.345154285F, 0.540192306F, 0.0882392302F, -1.79334199F, -0.607432F,
    -1.0527879F, -1.24413192F, -1.27951229F, 0.339189321F, -0.117198773F,
    0.169273779F, -3.42691851F, 0.0175127648F, -0.543254912F, -0.772732735F,
    0.762665F, -0.597695827F, -0.723176837F, -0.162022546F, -0.116138943F,
    3.48946738F, -0.64191556F, 0.476982594F, -0.107275128F, 0.843766034F,
    -1.34728098F, -0.0824143663F, -0.1144647F, 0.24763675F, 0.431490541F,
    -1.83626509F, 0.0854928568F, 0.0892828256F, 0.218229741F, -0.683414F,
    0.29239288F, 0.444191307F, -0.210693955F, 0.272270381F, 3.78781F,
    0.633180439F, -0.409663171F, 0.371389836F, 0.27196759F, 0.0312522799F,
    0.565687895F, 0.0340589173F, 0.0967010558F, 0.327838123F, 0.464072376F,
    -0.0320372209F, -0.227328062F, 0.785224438F, 0.018619014F, -0.452131122F,
    -0.321525872F, -1.49955404F, -0.777460277F, 0.0707132369F, 0.507653058F,
    0.0888489261F, -2.06060076F, 0.348368168F, 0.664048254F, -1.62470901F,
    0.499962509F, 0.294849932F, -0.0329619758F, 1.11028194F, 0.281382531F,
    -0.371951759F, 0.156851172F, 0.262783825F, -4.296206F, 0.349536806F,
    -0.776987433F, -0.712183F, 0.299268782F, 0.265261889F, 0.45924294F,
    -0.0012553056F, -3.30812025F, 0.217778713F, -0.189788222F, 0.0415993705F,
    0.0404810272F, 0.0506547205F, 0.267386258F, 0.132097095F, -0.282761961F,
    2.99928951F, -0.187173247F, 0.0754881F, 0.401621252F, -1.39406085F,
    0.214703143F, 0.0425201841F, 0.261720955F, 0.205717206F, -0.122732F,
    0.245819479F, 0.0702838227F, -0.0121470653F, 0.247534111F, -1.17022979F,
    0.187691927F, -0.00148317625F, 0.383720338F, -0.045343589F, -0.843701422F,
    -0.102198891F, -0.158906877F, -0.0224456377F, -0.0345289521F, -0.119702689F,
    -0.0988971069F, -0.39967677F, -0.0661988F, -0.0655928552F, 0.0815989822F,
    -0.430977404F, -2.16156363F, -0.0911845714F, -0.186632857F, -0.5524894F,
    0.0254343655F, -1.8654393F, -1.34933436F, -1.08680022F, 0.255551189F,
    0.171876192F, -1.10192883F, -0.113110349F, -0.089199841F, -0.0816518739F,
    0.0412803777F, 0.197799712F, 0.00923768431F, 0.0777281F, 0.00500777364F,
    0.14021273F, 0.127015159F, -0.00547071174F, -0.305370361F, -0.0274096541F,
    -0.0880864561F, -0.739025593F, 0.0636019334F, 0.024111025F, -0.0681061298F,
    -0.947454F, 0.187325329F, -0.046182245F, 0.0465440899F, -0.0138270818F,
    -0.212329715F, -0.799646676F, 0.0539357401F, 0.0692328587F, 0.00844569691F,
    0.545637548F, 0.147196308F, 0.0477682352F, -0.288250536F, -0.0624449961F,
    -0.0930319875F, -0.0712309778F, 0.066675432F, -0.262191683F, 0.0125085935F,
    0.628576219F, -0.0768648535F, -0.0228090137F, 0.126313031F, -0.00304058241F,
    0.142853618F, 0.104937166F, 0.506598711F, -0.384723753F, -0.760431588F,
    0.160239056F, -0.590364933F, 0.194406986F, -0.115435F, -0.140885368F,
    -0.432751596F, 0.0322554335F, 0.257534295F, 0.0137076052F, -0.143460304F,
    -0.013225751F, -0.564217687F, -0.0864330158F, -0.420551F, -0.283000946F,
    0.0721736774F, -0.306999058F, -0.898177F, -0.490073055F, 0.142973647F,
    -0.530200779F, -0.293533146F, -0.230199188F, 0.0693166628F, 0.0639394373F,
    -0.100709274F, -0.00794320554F, -0.00174697256F, -0.208514288F,
    0.0377006158F, -0.115574814F, 0.114082284F, -0.294606417F, -0.063455F,
    0.141526386F, -0.166756615F, -1.71302474F, 0.00584008638F, 0.309720606F,
    0.203842714F, -0.00808658823F, -1.06147718F, -0.36164251F, 0.0136671532F,
    0.0864721686F, -0.0443624482F, -0.394925833F, -0.0325821191F, -0.0850945935F,
    -1.40609598F, -0.384896785F, 0.0289695803F, 0.0368540399F, 0.0899716169F,
    -1.48310947F, 0.187790275F, 0.08568988F, -0.329948395F, 0.143979296F,
    -0.141355157F, -0.138482854F, 0.0472962782F, -0.131985232F, 0.0358108245F,
    -1.73154187F, 0.112329222F, -0.0206111018F, -0.120785475F, -0.0496198F,
    0.146716937F, -0.0243047234F, -0.423430502F, 0.076861F, 0.00827304367F,
    0.0727493912F, -0.352168798F, -0.090089269F, 0.033571206F, 0.0382464938F,
    0.0409468673F, 0.014649339F, -1.62473083F, -0.0663804933F, -0.0731737167F,
    -1.35354209F, -0.129826248F, -0.0642386228F, -0.203579232F, 0.00277163787F,
    -0.0477874763F, -0.0109717213F, -0.0348248482F, 0.0109177353F, 0.0108995372F,
    -0.0322277658F, -0.004135272F, 0.00199589925F, -1.5811981F, -0.112398788F,
    -0.16204755F, -0.0613199472F, 0.180990562F, 0.0189141575F, -0.371912569F,
    -0.120288357F, 0.0216678698F, -1.07051F, 0.0967997536F, -0.129248217F,
    -0.0121136885F, -0.226201177F, -0.348743498F, -0.17500487F, -0.0141172167F,
    0.0172930229F, -0.0246634837F, -0.447091222F, -0.0828557312F, -0.0845896304F,
    -0.850388527F, -0.0182589386F, -0.170522973F, 0.00077713991F, -0.0909505F,
    0.0357062817F, -0.0473292582F, -0.0214194059F, -0.0085021453F, 0.0475985035F,
    -0.179095417F, 6.06993151F, -0.38231197F, -1.4095118F, -1.08286834F,
    0.706942081F, 0.0760291144F, -0.00487223081F, -2.26309276F, 0.12240319F,
    4.4527607F, 1.20626915F, 0.106762126F, 0.192655593F, 0.213417098F,
    1.48517346F, -0.0126114711F, -0.7636621F, 0.239538401F, -0.835771859F,
    0.0879501477F, -0.49287343F, -1.02734041F, 0.480794758F, -0.0183082931F,
    1.58448625F, 0.0100265257F, 0.430666924F, 0.185941011F, 0.976131558F,
    0.537969887F, -0.208061263F, 0.644957483F, -0.314328F, 1.92679775F,
    -1.85283327F, 0.0773626342F, -0.720076323F, 2.07537842F, 2.12674403F,
    0.263761F, -0.491829723F, -0.622710586F, 0.689255595F, -3.20946693F,
    -0.531871259F, -0.0787015334F, 1.60172606F, -0.471390486F, -0.527580202F,
    -0.543919504F, 0.201529905F, 7.72401762F, -0.0563344844F, -0.710304201F,
    -0.505060434F, -0.142676547F, 0.00131479104F, -0.2855151F, -0.75919944F,
    -0.14264901F, -4.60967F, -1.20311809F, -0.701752722F, 0.35835737F,
    0.922448516F, -0.753596365F, -0.509773314F, -0.310909241F, -1.81464195F,
    0.452517211F, 0.783861458F, 0.16329667F, -0.220267743F, -0.0634613112F,
    -0.145796537F, 0.608904541F, 0.199722335F, 0.618475378F, 0.0837174207F,
    1.32438755F, 0.476985484F, 0.0704139695F, 0.065866746F, -0.400701642F,
    0.189241F, -0.139607817F, 0.132669851F, 0.0660921261F, -0.032417044F,
    0.148908496F, -0.238731802F, 0.0721972585F, 0.0817903355F, -0.134637594F,
    -0.899707675F, -0.257776976F, -0.515469F, 0.155542225F, 0.038896095F,
    0.169582859F, -0.453486443F, -0.358769208F, 0.11724139F, -0.20705457F,
    0.130789503F, 0.233248726F, 0.108918205F, 0.0363765731F, -0.419224322F,
    -0.105198227F, 0.073007226F, -0.0485684313F, 0.0179511327F, 0.720309913F,
    0.206572F, -0.0153989643F, -3.20303535F, 0.204987898F, 0.313705742F,
    0.0520827547F, -0.312988877F, 0.473572642F, -0.338202655F, 0.0694169402F,
    -0.531519353F, 0.183122203F, -1.30273306F, 0.21317935F, 0.244195715F,
    -0.063851364F, 0.364170849F, -0.21184887F, 0.157819763F, -0.031495247F,
    -0.2429851F, 0.268278718F, -0.360320866F, 0.0803431943F, 0.146030426F,
    -0.0208316296F, -0.132432356F, -0.0837848186F, -1.01754773F, -0.042345617F,
    -1.49802935F, 0.178439781F, -0.117516875F, 0.0134093203F, -0.0522123203F,
    -0.314150333F, -0.70698446F, -0.362033933F, -0.447557539F, 0.00038752472F,
    -0.0789975375F, -0.370219857F, 0.0647365153F, -0.111812033F, -0.219603121F,
    -0.0543520339F, -1.04135036F, -1.11499214F, 0.0543510765F, 0.0856178254F,
    -0.497267365F, -0.0535803698F, 0.0205340851F, -0.365482F, 0.047700759F,
    -0.109160408F, -0.0820690617F, -0.0798234195F, 0.00198460626F, -0.270018935F,
    -0.042439092F, -0.251768112F, -0.0408977121F, -1.42622077F, -0.247471094F,
    -0.289773285F, 0.0111012189F, -0.0390217192F, 0.00132059446F, -0.24383688F,
    -0.218779027F, -1.75277019F, -0.24330382F, 0.00189838244F, -0.133868858F,
    -0.0878529F, -0.135930851F, -0.0697359145F, -0.226084083F, -0.224691331F,
    0.0846547186F, 0.0252020713F, -0.728242338F, -0.0741261542F, -0.101554863F,
    -0.298802733F, -0.354934961F, 0.137417898F, -0.225426152F, -0.077693522F,
    -0.102260068F, -0.35272339F, 0.0445723087F, 0.0607294217F, -0.0229565017F,
    0.310205668F, 0.811399937F, 0.195157155F, -0.698375583F, 0.193803817F,
    0.0261989664F, 0.270920157F, 0.343124866F, 0.80580765F, 0.110274866F,
    0.425707281F, 0.0236005429F, 0.246208891F, 0.130850479F, 0.125214919F,
    0.0369717516F, 0.207844093F, 0.125865132F, 0.353032261F, 0.0355903469F,
    0.126133278F, 0.0695274472F, -0.00996684935F, -0.00571002439F, 0.16790849F,
    -0.43098855F, 0.101498336F, -1.53209651F, 0.293762F, -0.217102185F,
    0.168887615F, 0.0410618559F, -0.96179086F, 0.256103069F, 0.222069502F,
    0.496256381F, -0.168909326F, 0.185853198F, -0.0143953813F, 0.339036644F,
    -0.0671694204F, -0.745175362F, 0.327633083F, 0.0774909928F, -0.40827328F,
    0.112637892F, -0.996916F, 0.0131734032F, -0.104818277F, -0.0998545513F,
    0.0899021849F, -0.207540452F, 0.177229956F, 0.177808374F, 0.261079133F,
    0.0750163272F, 0.226281032F, -0.168580756F, 0.136282504F, 0.179682881F,
    0.177037135F, 1.18298137F, -0.935218334F, 0.136683375F, 0.0811029F,
    -0.343918324F, 0.186862051F, -0.105547816F, 0.00825648755F, 0.213317707F,
    0.120831683F, 0.561705947F, -0.363003314F, -0.109533869F, -0.120300509F,
    -0.0394650698F, -0.21352382F, 0.159954071F, 0.014982447F, -0.00632910803F,
    -0.270178646F, -3.28459907F, -0.54177767F, 0.045629818F, 0.0499457084F,
    0.0128088072F, -0.1435128F, -0.436557025F, 0.0482870527F, 0.0499140508F,
    0.00773696089F, -0.0302331578F, -0.027858628F, 0.179932907F, 0.0739152357F,
    0.0326539464F, 0.0477506109F, 0.0199655686F, 0.0648301244F, 0.014862895F,
    0.0571792498F, -0.093718946F, -2.13999867F, 0.0890734196F, -1.98677039F,
    0.074953936F, 0.0115275169F, -0.024595663F, -0.00523804128F, -0.18239069F,
    -0.417194F, -0.404058337F, 0.0314082839F, -0.0721648261F, -0.106705137F,
    -0.015909709F, -0.0652157962F, -0.0309474505F, -0.00816005F, -0.0316151604F,
    0.124976702F, -0.225806862F, -0.108501241F, 0.0652836338F, -0.0407428555F,
    -0.180666983F, 0.115296058F, 0.183995485F, -0.108716838F, 0.0936865956F,
    0.137179524F, -0.373547047F, -0.23072429F, -0.0421364717F, -0.0673279166F,
    -2.43818545F, 0.00858169608F, -0.229840502F, -0.0278498773F, 0.104501799F,
    -0.154854059F, 0.40425539F, 0.104826897F, -0.0720289648F, 0.0476114303F,
    -0.527015448F, 0.287186086F, -0.16926524F, 0.0609043539F, 0.00730875833F,
    0.0618907064F, -0.412309527F, 0.0360277891F, -0.179479167F, 0.0431114025F,
    -0.719951F, 0.0512485132F, -0.221538693F, -0.0452244654F, -0.0373635553F,
    -0.0948846042F, -0.911325455F, -0.657642066F, -0.0476699658F, -0.118548021F,
    -0.0281337649F, -0.00880252F, -0.132895663F, -0.276964068F, -0.817932069F,
    -0.00857612491F, -0.00305172F, -0.039792385F, -0.141773641F, -0.0214031897F,
    -0.0367149F, -0.0519931354F, 0.0681945086F, -0.306291819F, -0.105502225F,
    0.00755234715F, -0.065543741F, -0.30558604F, -0.10062404F, 0.201017424F,
    -0.0497245602F, -0.0151820583F, -0.850306094F, 0.0837586224F, -0.0814262629F,
    0.0037344289F, 0.0234147161F, 0.398266345F, -0.00221740035F, 0.141865641F,
    -0.0167847015F, -0.133250877F, -0.97656F, -0.0507894792F, 0.184640631F,
    0.111475289F, 0.429467112F, -0.101105072F, 0.0909513161F, -0.0532786511F,
    0.0104658827F, -0.150762722F, -0.0829722509F, -0.0305988714F, -0.0891172886F,
    0.017223943F, 0.0421777293F, 0.285954952F, -0.209073335F, 0.449875832F,
    -0.0644738823F, 0.549553F, 0.202451885F, -0.0936857536F, 0.30200842F,
    0.132614449F, -0.634047F, -0.118488446F, 0.288316637F, 0.481252551F,
    -0.44117102F, -0.0343010947F, 0.150354445F, 0.177273944F, 0.00544659514F,
    0.0616409741F, 0.287386686F, -0.317086637F, 0.213585556F, 0.0851307288F,
    -0.523200572F, -0.0907982F, -0.423853964F, -0.419501394F, -0.254799902F,
    0.336581647F, -0.704641581F, -0.47890842F, 0.0181735735F, -0.515648603F,
    0.462831408F, 0.0998092443F, 0.204845294F, -0.56019789F, -0.553276896F,
    -1.09865928F, -0.79526639F, -0.332626462F, 0.40046683F, -0.648415506F,
    0.509914041F, -0.261877388F, -0.594291449F, 0.448597789F, 0.207761154F,
    0.169648424F, -0.844657481F, -0.959500134F, -0.139731884F, 0.342372894F,
    0.380343616F, 0.162736684F, -0.3631441F, 0.207619071F, 0.276474625F,
    -0.470464081F, -0.250195146F, -0.0541787669F, 0.241536766F, -0.269182533F,
    -0.437816054F, -0.199688107F, -0.00476823933F, 0.231981754F, 0.120043129F,
    0.337767094F, 0.692883193F, 0.226450682F, 0.00982321892F, 0.0656033903F,
    -0.00316107692F, 0.379402816F, -0.211669892F, 0.105789602F, 0.168269575F,
    0.207052991F, 0.282278627F, 0.195132375F, 0.555107892F, 0.0478252396F,
    -0.011435464F, 0.206727326F, 0.0238654893F, 0.114832714F, 0.0713056698F,
    0.119371161F, 0.140155688F, 0.122669324F, -0.210941091F, -0.239598066F,
    -0.55808264F, 0.0283654314F, -0.93051064F, -0.111435696F, -0.54576385F,
    0.0654333606F, 0.0738066733F, -1.66909277F, -0.0553093031F, -0.111817978F,
    0.260476381F, 0.179584354F, 0.113857403F, -0.22535634F, 0.721502781F,
    -0.0642261207F, -0.579464316F, 0.0149281202F, 0.199013472F, -1.03366256F,
    0.242302254F, -1.73612666F, -0.172623634F, 0.294088781F, 0.117703356F,
    0.0117921373F, 0.30391559F, -2.30835199F, 0.197586685F, -0.142476887F,
    0.232482627F, -0.0385387242F, -0.11285235F, 0.165405765F, 0.147102058F,
    0.0723384172F, 1.10791719F, -0.364464819F, 0.233056247F, 0.0941533595F,
    -0.576050878F, -0.340854347F, 0.20965904F, -0.387612849F, 0.0405583F,
    0.022595657F, -0.172400609F, -0.0659838F, 0.0259212665F, 9.12979885E-7F,
    -1.18446839F, -0.107299745F, -0.105102569F, 0.148060814F, -0.106809288F,
    -0.177406922F, 0.0359549858F, -0.266318798F, 0.0339218304F, 0.179199919F,
    0.0051174066F, 0.148442537F, -0.0755903497F, 0.210339904F, -0.0716126338F,
    0.0881881714F, -0.399751037F, 0.105762936F, -0.0100478018F, 0.0704766437F,
    -0.459859759F, 0.110870868F, -0.249210045F, 0.0561319403F, -1.86453748F,
    -0.20576708F, -0.126578823F, -0.338348627F, 0.025927376F, -0.0596552379F,
    -0.309844404F, -0.0623008832F, 0.0458345562F, 0.0157581344F, -0.379749089F,
    0.0382520221F, 0.0127737708F, -0.0288631804F, 0.077472F, -0.461118042F,
    0.0306845065F, -0.0960148647F, -2.25979328F, 0.0988898352F, 0.129404247F,
    0.0133113973F, -0.660289824F, -0.0858023614F, -0.220169857F, 0.037871968F,
    -0.246747419F, 0.0711347386F, -0.291745871F, -0.0481954962F, -0.211238638F,
    -0.0956959799F, 0.200206071F, -0.101828419F, -0.114331067F, -0.0599963702F,
    -0.606780887F, -0.00665404927F, -0.209333926F, -0.0789842755F,
    -0.0138418498F, -0.0922822729F, -0.23194167F, 0.0720336363F, 0.0989388078F,
    0.0991155654F, -2.36479855F, -0.198613226F, -0.169294864F, 0.172719359F,
    0.0500591174F, -0.101612739F, -0.0465929247F, 0.0755843818F, -0.504579127F,
    -0.00929237064F, -0.06742654F, 0.0232340526F, -0.114287846F, 0.0568442158F,
    0.0245414972F, 0.0816121623F, 0.135491967F, 0.0260352734F, -0.0740078911F,
    -0.134325698F, -1.30294287F, -0.0199934263F, -0.127921969F, -0.640463233F,
    -1.80778837F, 0.0230774656F, -0.102359831F, -0.645068705F, -0.0369545855F,
    -0.0869214386F, -0.0371026732F, -0.0636232719F, 0.0176853519F, -0.370613515F,
    -0.33688131F, -0.0041833045F, -0.228781506F, -0.0341148451F, -0.0379945114F,
    -0.427708805F, -0.0178249553F, -0.107385248F, -1.21013486F, 0.009737866F,
    0.120196328F, -0.0234936F, -0.22432895F, -0.0528772026F, -0.00911674928F,
    -0.0230680648F, 0.0170232598F, -0.184996158F, -0.136779949F, -0.000796017F,
    -0.0704146922F, 0.083715044F, 0.349088967F, 0.109592937F, -0.0552751422F,
    -0.164851323F, -0.850759625F, -0.0896389261F, -0.0451427251F, -0.0855733827F,
    0.164380476F, 0.584771752F, 1.10929251F, 0.283523798F, -0.0781605765F,
    0.202935681F, -0.789381266F, 0.201956093F, 0.322464228F, -3.57880616F,
    -0.349838197F, -2.93616366F, -0.147225529F, -0.359605551F, -0.509698F,
    -0.105589442F, -0.0471766926F, -0.0454012044F, 0.892205834F, 0.846737683F,
    0.249295115F, 0.334396958F, 0.310165316F, 0.286648244F, 0.324469686F,
    0.123633273F, -0.455928653F, 0.154945239F, 1.68870652F, -1.11371315F,
    -1.43828785F, 0.472422093F, 0.609459758F, -0.635831118F, -0.0913417935F,
    -0.25866735F, -0.168232769F, -0.401379764F, 0.162147239F, 0.0693604946F,
    0.945442F, 0.0962463841F, -0.309701502F, 0.638742626F, -0.158644512F,
    0.90426743F, 0.127308965F, 0.0192711055F, -0.861782432F, -0.070507355F,
    0.173763424F, -0.0237700827F, -0.224372178F, 1.47893333F, -0.133820355F,
    -0.243693724F, 0.0316035859F, 0.308770567F, -0.456140727F, 0.346053898F,
    0.415144563F, 0.0715437755F, 0.197085738F, 0.310469866F, 0.085682638F,
    -0.162047043F, -1.18496311F, -0.429045558F, 0.174984723F, -0.115579374F,
    -0.115674712F, 0.145706654F, -0.302935869F, -0.0314770117F, -0.313580692F,
    0.176166803F, -0.146737784F, 0.143224701F, 0.0675746351F, 0.32392931F,
    0.143488958F, 0.408859044F, -0.674992561F, -0.145586058F, -0.0815689787F,
    -0.101759F, -0.683179259F, -0.112354308F, -0.623958707F, 0.0107030571F,
    0.125535518F, -0.0587239079F, -0.157657146F, -0.876144648F, -0.021803664F,
    -0.0299455039F, -0.0458133668F, 0.129899934F, -1.18463218F, 0.0835971F,
    -0.0940022692F, 0.218666598F, 0.249965489F, -0.11720483F, 0.0647223368F,
    -2.43843031F, 0.133033738F, 0.331212938F, 0.118861578F, -1.3341198F,
    -0.516648471F, -0.563892782F, 0.253318936F, -0.164359495F, -0.299446434F,
    -0.864772856F, 0.0144669358F, -0.0898540542F, -0.128741533F, 0.187871069F,
    0.097247161F, 0.104924612F, 0.0426716432F, -0.746542156F, -0.39602837F,
    0.0167010278F, -0.054310184F, 0.160860226F, -0.0312312711F, 0.148722231F,
    0.0425567664F, -0.0470771976F, 0.484606147F, -0.11820849F, -0.0141240936F,
    -0.12024042F, -0.128468513F, -0.0926441103F, -0.138705328F, -0.00692687649F,
    -0.378027111F, 0.128901407F, 0.236494258F, -0.0732093602F, -0.907934606F,
    0.146827444F, -0.160878524F, 0.161772922F, 0.205545828F, -0.0681049898F,
    0.0781186819F, -0.474052072F, -0.381257474F, 0.112247869F, -0.170833528F,
    0.00699852267F, -0.363281935F, 0.0854247734F, -0.0858939067F, 0.091357857F,
    0.0371554121F, -0.14529264F, -0.0948840678F, -0.107956909F, -0.0167622603F,
    -0.0734509155F, -0.338281631F, 0.225564316F, 0.049784027F, -0.854167521F,
    -0.0469336212F, 0.142625421F, 0.103132971F, -0.680071652F, 0.174327627F,
    -0.22903806F, 0.32365346F, -0.108282872F, -0.333351523F, -0.240205169F,
    0.12001241F, 0.0498969853F, -0.0632793233F, -0.0285865031F, -0.0566752665F,
    -0.0103653902F, 0.153057724F, -0.800692916F, 0.20072867F, -0.157626987F,
    0.162506F, -0.0108285481F, 0.148361593F, 0.0905810297F, -0.164327413F,
    0.0626074225F, 0.0106780548F, 0.3009094F, -1.00006318F, 0.0708020404F,
    -0.0934927687F, -0.291170359F, -0.504967391F, 0.0613179132F, 0.10679014F,
    0.0503239594F, 0.0273680221F, 0.110433526F, -0.0857474282F, 0.0223060362F,
    0.0265818443F, 0.0354618356F, 0.425657123F, 0.010739808F, 0.232187167F,
    -0.0972986F, -1.08786488F, 0.00448709261F, 0.0450369827F, -0.0078425929F,
    0.0523116663F, -0.141422048F, -0.286997437F, 0.0721805394F, -0.56773144F,
    0.149672478F, -0.772967279F, 0.121066853F, -0.149216071F, 0.182555601F,
    0.0385620743F, 0.0349703021F, -0.0216150358F, -0.340831161F, 0.0945848376F,
    0.0975051746F, 0.0123079978F, -0.104788363F, -0.618263721F, -0.130365118F,
    -0.151398242F, 0.133140594F, 0.123425342F, 0.0207252149F, 0.104011849F,
    0.0428396426F, 0.0862678811F, 0.202459499F, -0.138543442F, -1.86209559F,
    -0.897591531F, 0.109063879F, 0.0854523629F, 0.0814208761F, -0.383407295F,
    -0.0145070096F, 0.0295310058F, -1.03181446F, -0.120925553F, -0.0783758909F,
    0.102476507F, 0.172360301F, -0.036385648F, -0.0263040811F, 0.174505949F,
    0.178808525F, 0.259225845F, 0.117594086F, 0.0391680226F, 0.0917629227F,
    0.174779862F, -0.317981571F, -0.463325381F, -0.171659946F, 0.115845606F,
    -0.00877991784F, -0.0987419486F, 0.126757368F, -0.0641986504F, 0.0957466289F,
    0.376355022F, 0.163029F, 0.788496375F, -0.0950840786F, 0.00386832934F,
    0.0624754652F, -0.999930322F, 0.260024816F, 0.209598735F, 0.380081803F,
    0.312411F, -0.36424914F, 0.0692139342F, -0.452399969F, 0.0157918911F,
    0.177848309F, -1.41529024F, 0.284202814F, 0.166925207F, 0.39185977F,
    0.233719453F, 0.220502749F, -0.733241141F, -0.788791478F, 0.34379F,
    0.203752F, -0.153586745F, 0.260168791F, 0.0461821295F, -0.465786785F,
    -1.58025777F, 0.210844F, 0.297552943F, -0.119669855F, 0.1278864F,
    -2.23667884F, 0.153336242F, 0.10310816F, -0.0770505667F, -0.384395182F,
    -0.50266397F, -0.663321555F, 0.119968206F, 0.366362393F, 0.21045424F,
    0.530222595F, 0.228855312F, 0.0756812543F, -0.21628952F, 0.0329187028F,
    0.0116477218F, 0.239370197F, 0.117983758F, 0.443986475F, 0.0663274601F,
    0.296844155F, 0.154652402F, -0.0411783829F, -0.459063798F, 0.154845491F,
    -0.105690442F, 0.258573085F, 0.654472113F, -0.0266591441F, 0.29288891F,
    -0.124974355F, -0.00124625955F, 0.371989369F, 0.0569709651F, 0.098553054F,
    0.0967855155F, 0.0218176339F, -0.32639122F, 0.106475458F, -0.723442674F,
    -0.116287626F, 0.011164871F, -0.048731152F, -0.212548956F, 0.109627299F,
    0.104048938F, -0.648292243F, -0.133489862F, 0.0613997243F, 0.00929033943F,
    0.111448519F, -0.327869117F, -0.0923282728F, 0.0583495572F, 0.00189461908F,
    -0.118400127F, 0.019088164F, -0.00122834276F, -0.0535058752F, 0.138946638F,
    0.0551270321F, -0.00982912444F, -0.0814004093F, -1.61257374F, -0.114228293F,
    -0.00278861076F, 0.0491107181F, 0.0272869579F, -2.3770256F, 0.277513683F,
    -1.45284057F, 0.0127109103F, 0.334744662F, 0.0160931442F, -0.0701591596F,
    -0.426753193F, -0.583575785F, -0.847450852F, 0.155032784F, -0.0223367F,
    -0.605164F, 0.0214728173F, -0.65556252F, -0.0367306806F, 0.173649803F,
    -0.174224257F, 0.176006243F, -0.0129082259F, -0.760398567F, -0.160819277F,
    0.029562F, 0.162904903F, 0.0339848474F, -0.0410511233F, 0.0844028443F,
    0.124158196F, -0.11965923F, -0.836271465F, -0.682113767F, 0.0531055108F,
    -0.223641008F, -0.595608532F, 0.161216229F, 0.0306733884F, -0.0292806327F,
    -0.0443817675F, 0.0474921539F, 0.286033928F, 0.215115532F, -1.04012275F,
    0.100948088F, -0.000704513281F, 0.241655201F, 0.318480313F, 0.513826132F,
    0.119774267F, -0.412873715F, -0.545348465F, -0.29238075F, 0.227285311F,
    0.0818443075F, -0.400284022F, 0.0548234954F, 0.113533892F, 0.0975022092F,
    0.072639361F, 0.20279403F, 0.145266473F, 0.0058228327F, -0.0564861633F,
    0.373869777F, 0.0325276069F, 0.0546413697F, -2.44215274F, 0.228684425F,
    0.0348600447F, 0.0974744409F, -0.0368388928F, -1.61713791F, 0.177740157F,
    -0.216416284F, 0.286599785F, 0.0897626728F, 0.0407986417F, -0.133497581F,
    -0.0514410324F, 0.149427503F, -0.235513702F, 0.0142683052F, -0.12869826F,
    -0.657150328F, 0.171005353F, -0.593629301F, -1.00579166F, 0.0943095312F,
    0.00462524453F, 0.0698428527F, 0.123690397F, -0.519517243F, 0.0427396595F,
    -0.325826108F, 0.173836023F, 0.00890875887F, -0.0712510124F, 0.121034563F,
    0.296193391F, 0.106730178F, 0.460576087F, -0.0609621629F, 0.177881867F,
    -0.0653611943F, -0.75371182F, -0.0457997955F, 0.0541079529F, -0.474985898F,
    0.0781711042F, 0.268785536F, 0.351934493F, 0.0575133339F, 0.070660904F,
    0.166375935F, -0.0327448547F, 0.0442937613F, 0.0645852163F, -0.192375273F,
    -0.133734182F, -0.13662526F, -0.860992849F, -0.0981844664F, 0.0268097762F,
    -0.08286006F, -0.0544855148F, 0.142816916F, 0.0355121121F, -0.11165487F,
    -0.0147897014F, 0.0776518881F, -0.0130282063F, 0.130145088F, 0.235219702F,
    0.0309950057F, -0.7508232F, -0.093054831F, 0.27206707F, -1.51958418F,
    -1.56088865F, 0.0951979831F, 0.323739409F, -1.27298927F, 0.0529734604F,
    -0.0216552056F, 0.135418341F, -0.0250008237F, -0.123743236F, 0.00453272834F,
    0.251214206F, 0.0669245422F, -0.195556939F, 0.136577308F, -0.0461372063F,
    0.378206909F, -0.0413890295F, -0.0855765045F, -0.742392242F, 0.140422404F,
    -0.131343573F, 0.0916168392F, -0.473560244F, 0.0792257637F, -0.0238741636F,
    0.0723114684F, 0.0945136175F, 0.0821220055F, -0.713279665F, 0.150643215F,
    0.148423567F, 0.124206007F, 0.0180389974F, -0.130873233F, 0.116882615F,
    -0.358531624F, -1.20625126F, -0.0457536951F, 0.089978084F, -0.339265585F,
    0.0896727145F, 0.265369266F, 0.819521844F, 0.164644599F, 0.0599577539F,
    0.265756577F, -0.246557146F, 0.0409212746F, 0.467328489F, 0.31814447F,
    0.121882871F, -0.619839191F, 0.00584880682F, -0.153969705F, -0.633777797F,
    0.14016369F, -0.105264716F, -0.0258948915F, -1.08183885F, 0.131591305F,
    -0.0385015942F, -0.0625776723F, -0.101765744F, 0.169591099F, 0.200918749F,
    -0.00768650603F, 0.0645463243F, 0.201293439F, -0.335704327F, -1.39669991F,
    -0.688816369F, 0.0415970758F, 0.241268635F, 0.105926231F, 0.076034978F,
    -0.388488322F, 0.0940264836F, 0.361073703F, 0.045737233F, -0.687996F,
    0.140748516F, -0.153582722F, -0.584688723F, 0.124259822F, -0.178997234F,
    0.341783524F, 0.122428462F, -0.0829574242F, -0.737390041F, -0.0198269449F,
    -0.222588673F, -0.0439841971F, -0.412118673F, 0.432716608F, -0.109962635F,
    0.0390124917F, 0.0487682857F, 0.253510535F, -0.26282391F, 0.151395634F,
    0.356201828F, -0.276757509F, 0.155816466F, -0.0497168824F, 0.097672537F,
    0.248931587F, -2.51983404F, 0.310038984F, -0.21519576F, -0.109201252F,
    -0.265937656F, 0.065559864F, 0.666844785F, 0.263403565F, 0.159527183F,
    0.30956313F, -0.123963803F, -0.082248345F, 0.336950541F, -0.797660112F,
    0.352704227F, -1.78884268F, -0.471763551F, 0.00702690938F, -0.073945038F,
    -0.0188803151F, -0.196419567F, 0.0560804978F, -0.103481308F, 0.256407619F,
    0.225120962F, 0.454589695F, -0.382455021F, -0.307350188F, 0.0339940973F,
    0.243689641F, -1.23674047F, 0.0778310671F, -0.295634508F, -0.00322097493F,
    -1.96988714F, 0.136654705F, 0.136758044F, -0.735664606F, -0.00179174449F,
    -0.101520106F, 0.249074131F, 0.358635128F, 0.0593701266F, -0.00509268558F,
    0.0234811194F, -0.109545797F, -0.27713421F, -0.127608448F, -0.294848919F,
    0.265316248F, 0.654288471F, -0.24494116F, -1.8067807F, 0.0618263F, 0.404518F,
    0.0637108162F, -0.504620373F, -0.829347134F, -0.19292663F, -0.208454818F,
    0.446737647F, 0.367346227F, -0.976159334F, 0.198235556F, 0.253009647F,
    0.312924355F, 0.756392181F, -0.179272562F, 0.251978129F, -0.0173505954F,
    -0.966358F, 0.335530251F, 0.111753412F, -0.44925648F, 0.177129209F,
    0.264062285F, -0.304861873F, 0.260259688F, 0.239497453F, -0.448225707F,
    0.148314595F, 0.215759501F, -0.0053763655F, 0.419621021F, 0.406790107F,
    -0.540261626F, 0.313599616F, 0.363042265F, -0.241958976F, -0.0610541105F,
    -0.121367909F, 0.286136806F, -0.131562918F, 0.0972906947F, 0.61110729F,
    0.28766191F, 0.23763299F, -0.227244958F, 0.207435906F, 0.03536769F,
    0.233417094F, 0.030316161F, -0.302818269F, 0.417553484F, 0.0785757378F,
    -0.0915582106F, -0.00970151834F, -0.195867285F, 0.0830484107F,
    -0.00701187365F, -0.0567568F, 0.114909731F, 0.540410876F, -1.59953463F,
    -1.56454349F, 0.0790231079F, -0.0507972054F, 0.24258846F, -0.16429095F,
    -1.04031086F, 0.226501048F, 0.000788671779F, 0.125027567F, -0.198504552F,
    0.0376252905F, 0.213484F, 0.0513074249F, -0.718793333F, 0.304166198F,
    0.443876177F, 0.102035657F, -0.0267716646F, -0.860745251F, 0.186293393F,
    0.168157861F, -0.482609242F, 0.239576891F, -0.242153838F, 0.0536962673F,
    0.128814638F, -0.0701171905F, 0.185959697F, 0.0574967824F, -0.138842776F,
    0.141162708F, 0.0703944415F, 0.351326406F, 0.0412075482F, -0.0727291852F,
    -0.129778311F, 0.027217567F, 0.0926624686F, -0.0223736465F, 0.414070189F,
    0.114858143F, 0.707230628F, -0.343064845F, -0.147682488F, 0.150438234F,
    0.121472657F, -0.574780047F, 0.323776782F, -0.0992255509F, 0.155301556F,
    0.093137F, 0.160154521F, 0.132864386F, -2.68029237F, -0.222627103F,
    -0.0645570755F, 0.0138231795F, 0.308832437F, -0.542114496F, 0.182014585F,
    0.0905957296F, 0.0998555198F, 0.138189122F, -0.366973251F, 0.0611918233F,
    -0.605201364F, 0.0187468287F, 0.0289990958F, -0.0973797292F, -0.812046289F,
    -0.583929479F, -0.952000737F, -0.255158544F, 0.0788749903F, -0.0852164254F,
    -0.897648036F, -0.123343416F, 0.0682634711F, -0.0875600353F, 0.203935713F,
    0.0698000267F, 0.156063244F, -0.161007971F, -0.2598252F, 0.205376729F,
    -0.0593696758F, 0.0711575896F, 0.109568484F, -0.365758836F, 0.0312146209F,
    0.097135067F, -0.254224807F, 0.578947484F, 0.153467372F, 0.161959022F,
    -0.0493002906F, 0.121363342F, 0.161410019F, 0.121195935F, 0.136867866F,
    -0.223408595F, -0.13780266F, -0.394989461F, 0.580465734F, 0.516663F,
    -0.125352159F, 1.10715342F, 0.755706191F, 0.3913351F, 3.78909683F,
    0.527702928F, 0.726765454F, 2.08908606F, 0.126138136F, -0.273455828F,
    0.555651F, 1.06793261F, 0.113043696F, -0.106877334F, 0.592086136F,
    0.439157248F, 0.286870539F, 0.525360882F, 0.103843376F, 0.60511905F,
    0.0109705646F, 1.48931825F, 0.237773567F, -0.255872637F, 1.48164439F,
    3.4739995F, -0.218146548F, -0.25147292F, 1.29000509F, 0.639618814F,
    1.78063083F, 3.05089831F, 0.624927938F, 0.693285584F, 2.08711052F,
    1.37720382F, -0.00374004967F, 0.209512889F, -0.194876403F, -0.719100118F,
    7.66854143F, 0.783356726F, 0.119164318F, 2.00437427F, 0.526144683F,
    0.0927068591F, 0.245304242F, 0.556225657F, -0.400243759F, 0.652740717F,
    -0.092499F, 0.0863449872F, 1.15819919F, 0.440100461F, 0.404641032F,
    0.146231234F, 0.0564178079F, 7.12270546F, 0.815833569F, -0.122150213F,
    -0.415408283F, 2.47776F, 0.451236904F, 0.0845936F, -0.228014931F,
    0.180688649F, 0.318989098F, 0.700654924F, -0.379564881F, -0.0527430326F,
    0.26153791F, -0.0845308229F, 0.449384063F, 0.479523867F, 0.0299422499F,
    0.228698865F, -1.67086F, 0.282121867F, -0.162435398F, -0.198894128F,
    -0.0891549513F, -0.149678051F, -0.013232993F, 0.387050271F, 0.268216163F,
    0.352308959F, -0.334952325F, -0.653633714F, 0.18722643F, 0.299357951F,
    0.220186964F, -2.09554672F, 0.255122632F, -0.22621353F, -0.660238743F,
    -0.298501432F, 0.177064776F, -0.565767884F, -0.991824806F, 0.559342742F,
    -0.0947389F, 0.104891717F, -0.0944979936F, -0.0282762814F, -1.09554505F,
    0.537617266F, 0.113570422F, 0.309553146F, 0.409465551F, 0.0340503901F,
    1.27040875F, -0.165494964F, 0.291455F, -0.238575816F, -0.0974049941F,
    -0.174561188F, 0.14082022F, -0.826968F, 0.875910342F, -0.1105235F,
    -0.110207938F, 0.161562547F, 0.503101051F, 0.461282074F, -0.344465435F,
    0.109551318F, 0.230640307F, 0.00251878845F, 0.0734116808F, 0.127681315F,
    -0.0214081742F, 0.00476629566F, -0.260502845F, -0.232083023F, 0.284613401F,
    -0.249290958F, 0.0597768463F, 0.405966073F, -0.121830523F, -0.187375441F,
    0.180432379F, -1.41729164F, 0.242251739F, 0.1887431F, -0.26906541F,
    0.0240143966F, -1.20647705F, -0.0343731716F, 0.0363305286F, -0.0939051211F,
    0.122266985F, 0.0880525708F, -0.0698337257F, -0.163989455F, 0.0788051039F,
    -0.0657156482F, -0.00236166734F, -0.7142272F, 0.0184206571F, 0.0166642778F,
    0.127837941F, -1.84110641F, 0.0469762F, -1.05028582F, -0.963241935F,
    -0.89157629F, -0.182277188F, 0.00626792479F, -1.00933361F, 0.213939324F,
    -0.120374233F, -0.0919744596F, 0.12198247F, -0.0244986545F, -1.75740051F,
    0.335885942F, 0.0962912068F, -0.0800404847F, 0.00919041783F, 0.203958362F,
    -0.57720691F, 0.0621952228F, -0.883446455F, -0.380824327F, -0.294044793F,
    -0.25905931F, 0.143037334F, 0.0546722077F, 0.0903589F, 0.078506209F,
    0.0682240129F, 0.212333828F, -0.00115443522F, -0.938410461F, 0.0453366302F,
    0.103535771F, 0.0494990461F, -0.599535644F, -0.0177759249F, -0.0172544047F,
    0.010436669F, -0.248245299F, 0.231097892F, 0.0278393F, -0.161758497F,
    -0.0584388413F, -0.290897608F, 0.587841272F, -0.304511547F, -0.0751539171F,
    -0.0571017824F, -0.271768898F, -0.353171557F, 0.268072605F, -0.356554419F,
    -0.602610707F, 0.0337235741F, -1.08906877F, -0.423900396F, 0.336081415F,
    -0.284841716F, -0.195483819F, -0.320520192F, 0.0303907394F, -0.193703189F,
    -0.224837929F, -0.333533794F, -0.235645398F, -0.325180829F, -0.561082363F,
    -0.502158642F, -0.702589F, -0.199867949F, -0.105870835F, -0.112369157F,
    -0.140676066F, 0.101187401F, -0.415215164F, 0.37284568F, -0.470224023F,
    -0.291620761F, 0.0330533944F, -0.465957761F, -0.0812402144F, -0.40917328F,
    0.21245344F, -0.0614894181F, -0.091537118F, -0.416192979F, 0.014297422F,
    -0.581040382F, -0.330850869F, -2.02329063F, -0.0879088044F, -0.193930373F,
    -0.308494776F, -0.14119947F, -0.610113859F, -1.2360394F, -0.509525836F,
    -0.436422765F, -0.313355416F, 0.0205143634F, -0.689078629F, -0.225797564F,
    -0.3584795F, -0.55667609F, 0.200911745F, -0.69238019F, 0.0564260781F,
    -0.564429879F, 0.0513527803F, -0.240329355F, -0.650104F, 0.10834638F,
    -0.150039181F, -0.0751550123F, 0.225073591F, 0.0981119648F, -0.0244024787F,
    0.119864218F, -0.0177415498F, -0.0275750216F, 0.0396657959F, 0.392948478F,
    0.0785218F, -0.0668641403F, -0.767718F, -0.280753613F, 0.12335635F,
    -0.0857361F, -0.11205823F, -0.00369435619F, -0.213791177F, 0.0260292869F,
    0.0508976169F, 0.080602251F, 0.0135304723F, 0.0635922179F, -0.128767893F,
    0.0574609488F, -0.734383762F, -0.0489268713F, -0.192721814F, -0.601478338F,
    -1.32755411F, 0.100943312F, 0.0058754934F, -0.906722784F, -0.0712152869F,
    -0.0020420095F, -0.0675802603F, 0.0300708935F, 0.0564783923F, -0.103392176F,
    -0.119647712F, 0.0566111505F, -0.118327186F, 0.0947671607F, -0.0679518878F,
    -0.0742310584F, 0.140128732F, -1.83893204F, -0.792613089F, 0.135439351F,
    0.102393307F, -0.00713887811F, 0.120655596F, -1.27906656F, 0.0336749554F,
    -0.0689367F, 0.112830333F, 0.0166807268F, -0.0878576338F, 0.0400229059F,
    0.0513986498F, -0.0562588647F, -0.781081855F, -0.0275430474F, 0.0367724076F,
    -0.0800635815F, -2.84204841F, -0.0584730282F, -0.0715047568F, -1.12897778F,
    -0.257939249F, 0.177434012F, 0.669138F, 0.221169636F, 0.123093888F,
    0.0734578073F, -0.0231309664F, 0.349655956F, 0.0862435102F, 0.159112826F,
    0.120274246F, -0.215962186F, 0.0504301079F, -0.0652084947F, 0.28139472F,
    -0.111404136F, 0.0710685924F, 0.207999155F, 0.0773216709F, 0.00815932732F,
    0.0965578631F, 0.214235201F, 0.053548269F, 0.00985762291F, 0.267572671F,
    0.0169050433F, 0.01641641F, 0.0900043473F, -0.116948724F, -0.0292933621F,
    -0.629960239F, 0.139586106F, 0.29094255F, -1.52068949F, 0.320622712F,
    -0.990650356F, 0.0410960428F, 0.0502380691F, -0.0287658181F, -0.103767321F,
    0.040505942F, 0.0293596406F, -0.543415129F, -0.0086633F, -0.0494596F,
    -0.964957178F, 0.0321077108F, -0.0105280867F, -0.212388828F, 0.0766892508F,
    -0.0222061984F, 0.196865603F, 0.186747044F, -1.27199435F, 0.106930211F,
    -0.34639886F, 0.193770364F, 0.426154882F, -0.0720309764F, 0.133417F,
    0.0830726624F, 0.0544757135F, 0.409484178F, -0.243561149F, 0.291257024F,
    -0.189198464F, -1.0214076F, 0.198438287F, 0.0298994221F, -1.24303436F,
    0.138650984F, -0.0504431613F, 3.59519124F, 0.210619688F, 0.560206234F,
    -0.250821322F, 1.35039937F, 0.754252F, 0.82072717F, 1.45406663F,
    0.168909818F, 0.251158F, 2.20336628F, 0.203101918F, 0.471461147F,
    0.307604939F, 2.60177088F, -0.2662628F, -0.0899125189F, 0.485177189F,
    -0.0755065605F, 0.117907569F, 0.577327192F, -1.34096324F, -0.641144574F,
    0.152274877F, 2.16045618F, -0.139176771F, -0.715630233F, -0.0988410264F,
    1.06335974F, 0.078240484F, -0.119671144F, 0.818187296F, -0.541866422F,
    0.0665434226F, 1.70547271F, 0.0850788876F, -0.567277074F, 2.59013724F,
    3.73899174F, 0.285721302F, -0.524929225F, -0.36907348F, -0.477580905F,
    2.91144919F, -0.488365799F, 1.14804041F, -0.0379221179F, -0.778737724F,
    0.203153193F, 0.254517674F, -0.141830161F, 3.50383735F, -0.0101215644F,
    -0.247421429F, -0.182510063F, -0.345304698F, -0.301628381F, 0.213865191F,
    -0.321672022F, -0.773264647F, 1.66934407F, -1.00843263F, -0.513343394F,
    -0.517969131F, 2.73990202F, -0.103981107F, -0.301608205F, -0.409586072F,
    0.183452964F, 0.222298294F, 0.899077892F, -0.281682819F, 0.456852645F,
    1.1204555F, -0.325427413F, 0.227773666F, 0.822957933F, -1.68117011F,
    -0.0979577079F, 3.07435536F, 1.30992055F, -0.237456709F, 1.07370532F,
    0.27229625F, -0.471137285F, -0.186780661F, 0.0659298897F, -0.0689807236F,
    -0.470218927F, -0.702987731F, -0.480423659F, 0.997902393F, 0.722321153F,
    -0.348732859F, -0.257682681F, -0.18066442F, 0.218309373F, -1.37226355F,
    -1.98158216F, -0.892634571F, 0.152806506F, 0.669914246F, -0.270934373F,
    0.987983286F, 1.54854453F, 0.264788777F, -0.149792492F, 0.420289487F,
    5.45914078F, 0.615548849F, -0.445096135F, 0.371235549F, 0.415832F,
    1.25815511F, -0.466647178F, 1.63929689F, -0.412806094F, -0.524481833F,
    0.0704479143F, -0.42879343F, -0.675390422F, -5.6260457F, 0.111803263F,
    0.0668160766F, 0.681341887F, 0.914833069F, -0.785394251F, 0.139834151F,
    0.223357379F, -0.0176376589F, 5.83810663F, -0.126497909F, -0.0655598864F,
    -0.246017292F, 1.2296983F, -0.153560951F, 0.46585381F, -0.502960145F,
    -0.155545577F, 0.20212765F, -0.619134307F, -0.200039908F, 0.0835311189F,
    0.0735129118F, -0.0640362948F, 0.0398099236F, -0.242977738F, 0.112224266F,
    0.122284137F, 0.00858894642F, -1.62804759F, 0.158171341F, 0.00687358156F,
    0.0931179225F, -0.272057533F, -0.291617215F, -0.0303813927F, 0.122677922F,
    -0.0814132169F, 0.0564954244F, -0.055507455F, -0.351434F, -0.0351531357F,
    -0.0421595909F, -0.12380325F, 0.168188468F, 0.0467880666F, 0.0680069625F,
    0.0834065601F, 8.19711568E-5F, 0.146574721F, -0.493714154F, 0.127711F,
    -0.182443067F, 0.132863298F, 0.0160081629F, -0.0924607962F, -1.91979909F,
    -0.685601532F, -0.691044748F, -0.123276286F, 0.181759343F, -0.649062514F,
    -0.630909681F, 0.0583985336F, 0.000394127594F, 0.0108477389F, 0.302030206F,
    0.112529039F, -0.00558121968F, -0.0942095369F, -0.959330738F, -0.0418096855F,
    -0.0629969463F, 0.0481567644F, -0.0754380524F, -0.0998503119F, 0.0873078406F,
    0.0764413849F, -0.36169073F, -0.0627372116F, 0.0629482642F, 0.0787522495F,
    -0.084660925F, -1.85995638F, 0.00869191624F, -0.235081255F, -0.0143378424F,
    0.0540056676F, 0.0571139641F, 0.284232438F, -0.139213115F, -0.764261663F,
    -0.340152055F, -0.607531428F, -0.113897495F, -0.118096776F, 0.0963554904F,
    -0.108559586F, -0.0121754669F, -1.17977989F, 0.0556809194F, -0.976227F,
    0.177206874F, -1.1452328F, -0.0507506654F, 0.0178673323F, -0.183900952F,
    0.0966161862F, -0.0638434887F, 0.100358218F, -0.0743485168F, -0.0608190969F,
    -0.0685112849F, -0.560787916F, 0.3197667F, -1.79702044F, 0.18600744F,
    0.0287769791F, -0.144779116F, -0.221735716F, -0.0839447379F, -0.055775322F,
    -0.284105539F, 0.203408197F, -0.114125878F, -0.136245579F, -0.804951847F,
    -1.72884703F, -0.337368518F, 0.00726130651F, -0.27748704F, 0.0556813516F,
    -0.374054313F, -0.206436828F, -2.63395667F, -0.0431394614F, -0.421427697F,
    0.0136855254F, -0.00985625479F, -0.0562871248F, 0.419420689F, -0.0739346147F,
    -0.118975759F, 0.112986252F, -0.221274853F, -0.553423345F, -0.068643488F,
    0.0763834044F, 0.00404371135F, -1.52023518F, -0.00378342811F, 0.108943678F,
    0.193154588F, -0.0250488669F, 0.0156940352F, -0.254303634F, 0.299799293F,
    -0.199903682F, 0.281977534F, 0.601115525F, 0.076858364F, -0.0216874518F,
    -0.00951647945F, -0.423427552F, 0.549346447F, 0.30180034F, 0.912879467F,
    -0.0205211155F, -0.1035918F, -2.09170628F, -0.00917518791F, -0.790166736F,
    -0.292453766F, -0.570739329F, 0.261983663F, 0.0682691485F, 0.24511835F,
    -0.169771329F, -0.0650974736F, -0.195003331F, -0.237189814F, 0.0684617385F,
    0.0320605934F, -1.77282763F, -0.176427603F, 0.216561869F, 0.24232313F,
    0.046129033F, 0.32757327F, -0.342652112F, -0.0820846856F, 0.169765621F,
    -1.90405715F, 0.0459432267F, -0.249187097F, 0.210678264F, -0.473555088F,
    -1.04317093F, -0.430597395F, 0.236957863F, 0.465717196F, -0.360171527F,
    0.69767946F, 0.0807214901F, -1.58566058F, 0.181195632F, -0.0560938753F,
    0.0569076799F, 0.191588268F, 0.194832698F, 0.682715774F, 0.057722535F,
    -0.0557482056F, 0.154233083F, 0.518898249F, 0.327103078F, 0.127019405F,
    -0.0411461964F, -0.0289311539F, -1.81595576F, 0.224999622F, 0.159907609F,
    0.0738038719F, -0.0640043095F, 0.111982279F, -0.165928125F, 0.300016582F,
    -0.0619453378F, 0.010683638F, -0.149465144F, -0.0721710175F, 0.191027343F,
    0.0542783737F, -1.2987F, 0.0787583143F, 0.0963957533F, 0.0859834626F,
    0.0829507709F, -0.300926626F, -1.918486F, -0.0623639449F, -0.217276469F,
    -0.0683070645F, -1.06161106F, 0.099957943F, -0.212900236F, -0.0901161507F,
    -0.0265918542F, 0.030269F, -0.0800218359F, -0.890123665F, 0.0385439955F,
    -0.0253296122F, -0.523776591F, -0.173688531F, 0.0388978384F, 0.140769541F,
    0.0506989881F, 0.161852732F, 0.0910022259F, 0.00936476141F, 0.122837752F,
    -0.269373864F, 0.0567912273F, 0.0537209027F, 0.0551698655F, -1.5597564F,
    -0.012971987F, 0.0907466263F, -0.0301601421F, 0.0171530358F, -0.0312336963F,
    0.0773409903F, -0.181513488F, -0.185709313F, -0.0178714171F,
    -0.000793746905F, -0.184650958F, 0.120950766F, 0.199035183F, -0.560033679F,
    -0.000330684037F, 0.0502513349F, 0.190770358F, -0.166029826F, -0.269715875F,
    0.00559255201F, -0.0780265257F, -0.477656424F, -1.29286468F, 0.00437540142F,
    0.163256228F, -0.054683242F, 0.00219232356F, -0.214363143F, 0.193451837F,
    0.0148699097F, -0.0512727834F, 0.255134284F, 0.22834298F, 0.0826527774F,
    -0.0323025249F, 0.0175847448F, -1.12204802F, 0.021233866F, 0.139393941F,
    -0.00461763795F, 0.0421789065F, -0.443247288F, -1.06181347F, -0.372541964F,
    -0.35197708F, 0.0710552633F, -0.0718201622F, 0.26006493F, -0.0406439751F,
    0.00742504327F, 0.00356656453F, -0.045751892F, -0.0386084169F, -1.16263652F,
    0.0645059869F, 0.0632237047F, -0.0396916904F, -0.0615954027F, -0.0837378427F,
    -0.469334811F, -0.660022676F, -0.0564551093F, -0.299229622F,
    -0.000353195966F, 0.0735545531F, -1.06012797F, -0.19195056F, 0.107071795F,
    0.0449198F, -0.577461481F, -0.360143781F, -0.0181337073F, 0.0658542067F,
    -0.0158167612F, -0.143326551F, -0.386460692F, -0.310834914F, -0.00635593059F,
    -0.426397949F, 0.028001802F, -0.0516360439F, 0.0286435783F, -0.0643092468F,
    0.187101915F, -0.268305898F, 0.141198292F, 0.0631373227F, -0.043419946F,
    -0.750754F, 0.0965292379F, 0.0879319385F, 0.204060346F, 0.510631502F,
    -0.0275080055F, -0.0263391249F, -0.0895809308F, 0.0524371043F,
    -0.0962813646F, -0.0800945535F, 0.0354543217F, -0.0214544497F };

  static const real32_T c[70] = { -3.20660138F, -3.93908906F, -2.98628688F,
    -2.76958537F, -2.83556628F, -0.339866757F, -3.44403744F, -2.96386719F,
    -3.10710335F, -2.63585162F, -4.34904146F, 1.86939859F, -2.57588911F,
    -2.1587615F, -2.26269817F, 0.855222344F, -3.4600296F, -2.43170953F,
    -2.10505533F, -3.06208611F, -2.27848053F, -1.80708647F, 0.142687038F,
    -1.85403395F, -2.17874908F, 1.06688833F, -2.07933831F, 0.524345934F,
    -4.3339777F, 0.123211309F, -3.1702652F, -2.85273838F, 0.358863741F,
    -2.17496586F, 1.3322953F, -2.34825706F, -1.89512265F, -2.79308248F,
    1.05174613F, -2.6205554F, -3.04794025F, -3.73940802F, -3.05853677F,
    -3.69982457F, -3.71589065F, -2.86986017F, 0.124864817F, 1.61031342F,
    -2.20778155F, -2.46851301F, -2.36280465F, -3.03538799F, -3.41260767F,
    -2.31259561F, -2.80541253F, -2.39672279F, -1.05906844F, 0.38691777F,
    -2.39238358F, -3.12412453F, -2.86113715F, -4.50152397F, -2.59193897F,
    -2.81275415F, -2.87763858F, 1.10491502F, -2.07690239F, -3.46219778F,
    -2.14066625F, -4.08765841F };

  static const real32_T tmp_5[210] = { 0.0213319734F, -0.0103486013F,
    -0.0104404278F, -0.156951353F, -0.0344145969F, -0.737675309F, -0.0196906123F,
    0.0128917918F, 0.029262023F, -0.0264189839F, -0.0289149787F, -0.0245174076F,
    0.0126627525F, -0.0146634337F, 0.0464424826F, 0.0739812329F, -0.045951169F,
    -0.0104580736F, 0.0111528793F, -0.0141632315F, -0.0208590291F, 0.0344876461F,
    -0.0123080593F, 0.00615317095F, -0.0042455853F, 0.036537841F, 0.51254338F,
    -0.00229264633F, 0.021402156F, -0.0302436557F, 0.442086369F, -0.819551468F,
    0.543461F, -0.0985349F, 0.0220005922F, -0.153200597F, 0.0354541354F,
    0.00477220165F, 0.0130972126F, -0.0218294822F, 0.000515388325F, 0.068419762F,
    0.0059635F, 0.0128374696F, -0.00449299859F, 0.0285669547F, 0.0754289702F,
    -0.13743794F, 0.0204839259F, -0.0112259109F, 0.012782339F, -0.0124894585F,
    -0.0263310466F, 0.00437187869F, 0.0211249981F, -0.0256713685F, 0.0860607848F,
    -0.0104203532F, -0.0251433812F, 0.086742416F, 0.000101842605F, 0.0261715893F,
    -0.0717450082F, -0.0242267083F, 0.0234243292F, -0.014904934F, 0.0237561259F,
    -0.113067076F, -0.173108712F, 0.0309970398F, -0.0204117764F, 0.104567312F,
    0.0145589244F, 0.00600059889F, 0.00254134135F, 0.112414017F, -0.0246398691F,
    0.192206949F, 0.00504496694F, -0.0338768661F, -0.00600430649F,
    -0.0213509668F, 0.0899104F, 0.120767109F, -0.0570332333F, 0.0578042977F,
    -0.0940387473F, 0.0166540965F, -0.0835490078F, 0.144083649F, -0.0185708273F,
    0.0150728785F, 0.00170809228F, 0.0344588421F, 0.0273518041F, 0.00380020496F,
    -0.0725298822F, 0.0681623369F, 0.115535639F, -0.00835637562F, 0.0195574127F,
    0.0126266275F, -0.0496559255F, 0.0881954581F, -0.119177751F, -0.0161671489F,
    0.0135588134F, 0.0101696085F, 0.0249492191F, -0.011990115F, -0.0643324256F,
    -6.64477702E-5F, -0.0261142012F, 0.00904489402F, 0.097114414F,
    -0.0143775204F, -0.174383417F, -0.0266447738F, -0.000652155664F,
    -2.17448711F, 0.0512441285F, -0.0508506708F, 0.0902230591F, 0.0458474495F,
    -0.050290633F, -0.115067668F, -0.0123027628F, -0.0139553891F, -0.0722167566F,
    0.0292202365F, 0.00549883F, 0.0577982068F, -0.0313000455F, 0.946024656F,
    0.810433269F, -0.0136845754F, -0.0124595985F, 0.0321483687F, 0.0805313289F,
    0.0197925474F, 0.130288497F, 0.0149319F, -0.101642057F, 0.146237597F,
    -0.0187306609F, 0.00134543F, -0.0188210383F, -0.0150842704F, -0.00840467773F,
    0.0193344299F, -0.018327672F, -0.0079210531F, 0.0345098451F, -0.0342763364F,
    0.0645072088F, -0.0582448393F, -0.933331668F, -0.196738496F, 0.470497608F,
    0.00279787718F, 0.028743051F, 0.00354244653F, 0.000190099614F,
    -0.00845781062F, -0.0362526029F, 0.0226361137F, -0.0049140593F,
    -0.0429376662F, -0.000529176206F, -0.0457185619F, -0.0984965414F,
    -0.00168439711F, -0.098084107F, -0.164759308F, -0.00316154701F,
    0.00385144842F, -0.0113027692F, -0.00870676711F, -0.00419528037F,
    -0.0162383951F, -0.0127129164F, 0.0494396165F, 0.071643427F, 0.50788945F,
    0.216768578F, -0.154774517F, 0.021977514F, -0.0409016386F, -0.0229166392F,
    -0.0073874956F, 0.00898195244F, 0.0185738634F, 0.0444020443F, 0.0276940893F,
    -0.074637793F, -0.0967334F, -0.0236994121F, 0.175483346F, -0.0321770571F,
    -0.00152641F, -0.000344836182F, -0.0107092662F, -0.0276827589F,
    0.0441878475F, 0.0279047415F, 0.00551491976F, -0.0641829148F, -0.0295875408F,
    0.0144501533F, -0.0117024994F };

  matrixMultiply10105731019644652458(70, 14, 1, 64, 64, 64, &(&tmp_2[0])[0],
    &inputsT_0_f1[0], &outT_f7_0_f1[0]);
  for (c_dim1 = 0; c_dim1 < 70; c_dim1++) {
    outT_f7_0_f1_0 = outT_f7_0_f1[c_dim1] + e[c_dim1];
    tmp_1 = rtIsNaNF(outT_f7_0_f1_0);
    if (tmp_1 || (outT_f7_0_f1_0 > 0.0F)) {
      tmp_0 = outT_f7_0_f1_0;
    } else {
      tmp_0 = 0.0F;
    }

    if ((outT_f7_0_f1_0 >= 0.0F) || tmp_1) {
      outT_f7_0_f1_0 = 0.0F;
    }

    outT_f7_0_f1[c_dim1] = 0.01F * outT_f7_0_f1_0 + tmp_0;
  }

  matrixMultiply10105731019644652458(70, 70, 1, 64, 64, 64, &(&tmp_3[0])[0],
    &outT_f7_0_f1[0], &outT_f5_0_f1[0]);
  for (c_dim1 = 0; c_dim1 < 70; c_dim1++) {
    outT_f7_0_f1_0 = outT_f5_0_f1[c_dim1] + d[c_dim1];
    tmp_1 = rtIsNaNF(outT_f7_0_f1_0);
    if (tmp_1 || (outT_f7_0_f1_0 > 0.0F)) {
      tmp_0 = outT_f7_0_f1_0;
    } else {
      tmp_0 = 0.0F;
    }

    if ((outT_f7_0_f1_0 >= 0.0F) || tmp_1) {
      outT_f7_0_f1_0 = 0.0F;
    }

    outT_f5_0_f1[c_dim1] = 0.01F * outT_f7_0_f1_0 + tmp_0;
  }

  matrixMultiply10105731019644652458(70, 70, 1, 64, 64, 64, &(&tmp_4[0])[0],
    &outT_f5_0_f1[0], &tmp[0]);
  for (c_dim1 = 0; c_dim1 < 70; c_dim1++) {
    outT_f7_0_f1_0 = tmp[c_dim1] + c[c_dim1];
    tmp_1 = rtIsNaNF(outT_f7_0_f1_0);
    if (tmp_1 || (outT_f7_0_f1_0 > 0.0F)) {
      tmp_0 = outT_f7_0_f1_0;
    } else {
      tmp_0 = 0.0F;
    }

    if ((outT_f7_0_f1_0 >= 0.0F) || tmp_1) {
      outT_f7_0_f1_0 = 0.0F;
    }

    outT_f7_0_f1[c_dim1] = 0.01F * outT_f7_0_f1_0 + tmp_0;
  }

  matrixMultiply10105731019644652458(3, 70, 1, 64, 64, 64, &(&tmp_5[0])[0],
    &outT_f7_0_f1[0], &outputs_0_f1[0]);
  outputs_0_f1[0] = static_cast<real32_T>(tanh(static_cast<real_T>(outputs_0_f1
    [0] - 0.0177620221F)));
  outputs_0_f1[1] = static_cast<real32_T>(tanh(static_cast<real_T>(outputs_0_f1
    [1] + 0.0209442936F)));
  outputs_0_f1[2] = static_cast<real32_T>(tanh(static_cast<real_T>(outputs_0_f1
    [2] - 0.0336378627F)));
}

// Model step function for TID0
void imperix_balance_ctrl_step0(void)  // Sample time: [0.000166667s, 0.0s]
{
  real_T varargin_1[200];
  real_T tmp_1[192];
  real_T A_0[64];
  real_T a__3[24];
  real_T rtb_Gain31_0[24];
  real_T A[16];
  real_T M[16];
  real_T tmp[16];
  real_T bc[12];
  real_T bc_0[12];
  real_T x[12];
  real_T M_0[8];
  real_T b_a[8];
  real_T vse_temp[8];
  real_T CastToDouble5[6];
  real_T rtb_Bias[6];
  real_T rtb_Gain1_mw[6];
  real_T rtb_Gain2[6];
  real_T rtb_Gain31[6];
  real_T a[5];
  real_T rtb_Gain1_n[5];
  real_T xt_est[4];
  real_T rtb_Gain1[3];
  real_T rtb_Switch_p_0[3];
  real_T rtb_ie_sat[2];
  real_T tmp_0[2];
  real_T D;
  real_T idx_2;
  real_T ie_idx_0;
  real_T ie_idx_1;
  real_T ie_ref_fil_pred2_idx_0;
  real_T ie_ref_fil_pred2_idx_1;
  real_T rtb_DeadZone;
  real_T rtb_DeadZone_o;
  real_T rtb_F;
  real_T rtb_Fr_idx_0;
  real_T rtb_Fr_idx_1;
  real_T rtb_Gain14;
  real_T rtb_Gain1_k_idx_0;
  real_T rtb_Gain1_k_idx_1;
  real_T rtb_Gain5;
  real_T rtb_IntegralGain_m;
  real_T rtb_Integrator_b;
  real_T rtb_Saturation;
  real_T rtb_Saturation_h;
  real_T rtb_Saturation_p;
  real_T rtb_Sum;
  real_T rtb_Sum13;
  real_T rtb_Sum1_dd;
  real_T rtb_Sum1_fi;
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
  real_T rtb_Switch_h_idx_1;
  real_T rtb_Te;
  real_T rtb_UnitDelay_idx_0;
  real_T rtb_UnitDelay_idx_1;
  real_T rtb_im_idx_0;
  real_T rtb_im_idx_1;
  real_T rtb_w;
  real_T ssq;
  real_T tmp_2;
  int32_T A_tmp;
  int32_T M_ref_tmp;
  int32_T b_a_tmp;
  int32_T b_idx;
  int32_T e;
  int32_T idxAjj;
  int32_T idx_1;
  int32_T k;
  int8_T tmp_3;
  int8_T tmp_4;
  uint8_T rtb_Compare;
  boolean_T d_x[2];
  boolean_T tmp_5;
  boolean_T y;
  ZCEventType zcEvent;
  static const int8_T B[64] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  boolean_T exitg1;

  // Update the flag to indicate when data transfers from
  //   Sample time: [0.00016666666666666666s, 0.0s] to Sample time: [0.0016666666666666668s, 0.0s]  
  (imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1)++;
  if ((imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1) > 9) {
    imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1 = 0;
  }

  // S-Function (TUNABLE_PARAM): '<S689>/S-Function'
  imperix_balance_ctrl_B.SFunction = F_ref;

  // S-Function (TUNABLE_PARAM): '<S699>/S-Function'
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
    imperix_balance_ctrl_DW.w_max = 6.2831853071795862 *
      imperix_balance_ctrl_P.IM.f_max;

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
    idx_2 = imperix_balance_ctrl_B.SFunction - imperix_balance_ctrl_DW.F_prev;
    if (rtIsNaN(idx_2)) {
      ssq = (rtNaN);
    } else if (idx_2 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (idx_2 > 0.0);
    }

    rtb_F = ssq * imperix_balance_ctrl_DW.dF + imperix_balance_ctrl_DW.F_prev;
  }

  if (fabs(imperix_balance_ctrl_B.SFunction_f - imperix_balance_ctrl_DW.w_prev) >
      imperix_balance_ctrl_DW.dw) {
    // '<S28>:1:25'
    // '<S28>:1:26'
    idx_2 = imperix_balance_ctrl_B.SFunction_f - imperix_balance_ctrl_DW.w_prev;
    if (rtIsNaN(idx_2)) {
      ssq = (rtNaN);
    } else if (idx_2 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (idx_2 > 0.0);
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
  imperix_balance_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_3_0) * 3.0518E-5F + 0.0F;

  // DataTypeConversion: '<S1>/Cast To Double1'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC),
    &imperix_balance_ctrl_B.MovingAverage_pn,
    &imperix_balance_ctrl_DW.MovingAverage_pn);

  // S-Function (TUNABLE_PARAM): '<S693>/S-Function'
  imperix_balance_ctrl_B.SFunction_k = reset_mean;

  // Outputs for Triggered SubSystem: '<S93>/Sample and Hold' incorporates:
  //   TriggerPort: '<S675>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S675>/In'
    imperix_balance_ctrl_B.In =
      imperix_balance_ctrl_B.MovingAverage_pn.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S93>/Sample and Hold'

  // Gain: '<S1>/Gain5' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double1'
  //   Sum: '<S93>/Sum1'

  rtb_Gain5 = (imperix_balance_ctrl_B.ADC - imperix_balance_ctrl_B.In) *
    imperix_balance_ctrl_P.IM.wb;

  // Sum: '<S75>/Sum1'
  rtb_Sum1_od = rtb_w - rtb_Gain5;

  // S-Function (TUNABLE_PARAM): '<S705>/S-Function'
  imperix_balance_ctrl_B.SFunction_c = reset_PI;

  // DiscreteIntegrator: '<S356>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE =
      imperix_balance_ctrl_P.SpeedPI_InitialConditionForInte;
  }

  // Sum: '<S365>/Sum' incorporates:
  //   DiscreteIntegrator: '<S356>/Integrator'
  //   Gain: '<S361>/Proportional Gain'

  rtb_Sum_j = imperix_balance_ctrl_P.FOC.kp_w * rtb_Sum1_od +
    imperix_balance_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S363>/Saturation'
  if (rtb_Sum_j > imperix_balance_ctrl_P.FOC.u_max) {
    rtb_Saturation = imperix_balance_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_j < -imperix_balance_ctrl_P.FOC.u_max) {
    rtb_Saturation = -imperix_balance_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation = rtb_Sum_j;
  }

  // End of Saturate: '<S363>/Saturation'

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
  rtb_Gain1_mw[0] = imperix_balance_ctrl_B.ADC_f;
  rtb_Gain1_mw[1] = imperix_balance_ctrl_B.ADC_e;
  rtb_Gain1_mw[2] = imperix_balance_ctrl_B.ADC_i;
  rtb_Gain1_mw[3] = imperix_balance_ctrl_B.ADC_d;
  rtb_Gain1_mw[4] = imperix_balance_ctrl_B.ADC_ib;
  rtb_Gain1_mw[5] = imperix_balance_ctrl_B.ADC_p;

  // Gain: '<S91>/Gain1'
  for (b_idx = 0; b_idx < 5; b_idx++) {
    rtb_Gain1_n[b_idx] = 0.0;
  }

  for (b_idx = 0; b_idx < 6; b_idx++) {
    ssq = rtb_Gain1_mw[b_idx];
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Gain1_n[idx_1] += imperix_balance_ctrl_P.M2C.A[5 * b_idx + idx_1] *
        ssq;
    }
  }

  // End of Gain: '<S91>/Gain1'

  // Gain: '<S628>/Gain3' incorporates:
  //   Gain: '<S87>/Gain2'

  tmp_2 = 0.0;
  ie_idx_1 = 0.0;
  ie_idx_0 = 0.0;
  for (b_idx = 0; b_idx < 3; b_idx++) {
    ssq = rtb_Gain1_n[b_idx + 2] * imperix_balance_ctrl_P.Gain2_Gain;
    tmp_2 += imperix_balance_ctrl_P.Gain3_Gain[3 * b_idx] * ssq;
    ie_idx_1 += imperix_balance_ctrl_P.Gain3_Gain[3 * b_idx + 1] * ssq;
    ie_idx_0 += imperix_balance_ctrl_P.Gain3_Gain[3 * b_idx + 2] * ssq;
  }

  // End of Gain: '<S628>/Gain3'

  // Gain: '<S628>/Gain1'
  rtb_Gain1[0] = imperix_balance_ctrl_P.Gain1_Gain * tmp_2;
  rtb_Gain1[1] = imperix_balance_ctrl_P.Gain1_Gain * ie_idx_1;
  rtb_Gain1[2] = imperix_balance_ctrl_P.Gain1_Gain * ie_idx_0;

  // UnitDelay: '<S81>/Unit Delay'
  rtb_UnitDelay_idx_0 = imperix_balance_ctrl_DW.UnitDelay_DSTATE[0];
  rtb_UnitDelay_idx_1 = imperix_balance_ctrl_DW.UnitDelay_DSTATE[1];

  // S-Function (TUNABLE_PARAM): '<S709>/S-Function'
  imperix_balance_ctrl_B.SFunction_fs = reset_KF;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   UnitDelay: '<S81>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S29>:1'
  // '<S29>:1:14'
  if (imperix_balance_ctrl_B.SFunction_fs != 0.0F) {
    // '<S29>:1:13'
    imperix_balance_ctrl_DW.xt_est_apriori[0] = imperix_balance_ctrl_P.KF.x1_mu
      [0];
    imperix_balance_ctrl_DW.xt_est_apriori[1] = imperix_balance_ctrl_P.KF.x1_mu
      [1];
    imperix_balance_ctrl_DW.xt_est_apriori[2] = imperix_balance_ctrl_P.KF.x1_mu
      [2];
    imperix_balance_ctrl_DW.xt_est_apriori[3] = imperix_balance_ctrl_P.KF.x1_mu
      [3];

    // '<S29>:1:14'
    // '<S29>:1:15'
    rtb_im_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    rtb_im_idx_1 = 0.0;
    rtb_Fr_idx_1 = 0.0;

    // '<S29>:1:16'
    rtb_Te = 0.0;
  } else {
    // '<S29>:1:21'
    memcpy(&A[0], &imperix_balance_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

    // '<S29>:1:22'
    A[12] = imperix_balance_ctrl_P.KF.A[12] * rtb_Gain5;

    // '<S29>:1:23'
    A[9] = imperix_balance_ctrl_P.KF.A[9] * rtb_Gain5;

    // '<S29>:1:24'
    A[14] = imperix_balance_ctrl_P.KF.A[14] * rtb_Gain5;

    // '<S29>:1:25'
    A[11] = imperix_balance_ctrl_P.KF.A[11] * rtb_Gain5;

    // '<S29>:1:26'
    ie_ref_fil_pred2_idx_0 = 0.5 * imperix_balance_ctrl_P.KF.Ts;
    for (b_idx = 0; b_idx < 16; b_idx++) {
      M[b_idx] = ie_ref_fil_pred2_idx_0 * A[b_idx] +
        imperix_balance_ctrl_DW.Inx[b_idx];
    }

    // '<S29>:1:27'
    // '<S29>:1:35'
    // '<S29>:1:67'
    // '<S29>:1:54'
    for (k = 0; k < 200; k++) {
      varargin_1[k] = fabs(imperix_balance_ctrl_P.KF.we_list[k] - rtb_Gain5);
    }

    if (!rtIsNaN(varargin_1[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 201)) {
        if (!rtIsNaN(varargin_1[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (b_idx == 0) {
      idxAjj = 1;
    } else {
      ssq = varargin_1[b_idx - 1];
      idxAjj = b_idx;
      for (idx_1 = b_idx + 1; idx_1 < 201; idx_1++) {
        idx_2 = varargin_1[idx_1 - 1];
        if (ssq > idx_2) {
          ssq = idx_2;
          idxAjj = idx_1;
        }
      }
    }

    // '<S29>:1:54'
    idx_1 = idxAjj - 1;

    // '<S29>:1:55'
    idx_2 = rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list[idxAjj - 1];
    if (rtIsNaN(idx_2)) {
      ssq = (rtNaN);
    } else if (idx_2 < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (idx_2 > 0.0);
    }

    idx_2 = static_cast<real_T>(idxAjj) + ssq;

    // '<S29>:1:57'
    tmp_5 = rtIsNaN(idx_2);
    if ((idxAjj <= idx_2) || tmp_5) {
      b_idx = idxAjj;
    } else {
      b_idx = static_cast<int32_T>(idx_2);
    }

    if (b_idx == 0) {
      // '<S29>:1:58'
      // '<S29>:1:59'
      idx_1 = idxAjj;

      // '<S29>:1:60'
      idx_2++;
    } else {
      if ((idxAjj >= idx_2) || tmp_5) {
        b_idx = idxAjj;
      } else {
        b_idx = static_cast<int32_T>(idx_2);
      }

      if (b_idx == 201) {
        // '<S29>:1:61'
        // '<S29>:1:62'
        idx_1 = idxAjj - 2;

        // '<S29>:1:63'
        idx_2--;
      }
    }

    // '<S29>:1:67'
    // '<S29>:1:68'
    // '<S29>:1:70'
    D = imperix_balance_ctrl_P.KF.we_list[1] -
      imperix_balance_ctrl_P.KF.we_list[0];

    // '<S29>:1:71'
    rtb_Sum_l = fabs(rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list
                     [static_cast<int32_T>(idx_2) - 1]) / D;

    // '<S29>:1:72'
    D = fabs(rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list[idx_1]) / D;

    // '<S29>:1:74'
    // '<S29>:1:36'
    rtb_im_idx_0 = imperix_balance_ctrl_DW.xt_est_apriori[1];
    rtb_Fr_idx_0 = imperix_balance_ctrl_DW.xt_est_apriori[0];
    rtb_im_idx_1 = imperix_balance_ctrl_DW.xt_est_apriori[2];
    rtb_Fr_idx_1 = imperix_balance_ctrl_DW.xt_est_apriori[3];
    for (b_idx = 0; b_idx < 2; b_idx++) {
      idxAjj = b_idx << 2;
      k = ((static_cast<int32_T>(idx_2) - 1) << 3) + idxAjj;
      b_a_tmp = (idx_1 << 3) + idxAjj;
      b_a[idxAjj] = imperix_balance_ctrl_P.KF.gain_schedule[k] * D +
        imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp] * rtb_Sum_l;
      b_a[idxAjj + 1] = imperix_balance_ctrl_P.KF.gain_schedule[k + 1] * D +
        imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 1] * rtb_Sum_l;
      b_a[idxAjj + 2] = imperix_balance_ctrl_P.KF.gain_schedule[k + 2] * D +
        imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 2] * rtb_Sum_l;
      b_a[idxAjj + 3] = imperix_balance_ctrl_P.KF.gain_schedule[k + 3] * D +
        imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 3] * rtb_Sum_l;
      rtb_ie_sat[b_idx] = rtb_Gain1[b_idx] -
        (((imperix_balance_ctrl_P.KF.C[b_idx + 2] * rtb_im_idx_0 +
           imperix_balance_ctrl_P.KF.C[b_idx] * rtb_Fr_idx_0) +
          imperix_balance_ctrl_P.KF.C[b_idx + 4] * rtb_im_idx_1) +
         imperix_balance_ctrl_P.KF.C[b_idx + 6] * rtb_Fr_idx_1);
    }

    // '<S29>:1:37'
    // '<S29>:1:40'
    // '<S29>:1:41'
    for (k = 0; k < 4; k++) {
      idx_2 = (b_a[k + 4] * rtb_ie_sat[1] + b_a[k] * rtb_ie_sat[0]) +
        imperix_balance_ctrl_DW.xt_est_apriori[k];
      if (!(idx_2 >= -10.0)) {
        idx_2 = -10.0;
      }

      if (idx_2 <= 10.0) {
        xt_est[k] = idx_2;
      } else {
        xt_est[k] = 10.0;
      }

      idx_2 = A[k + 4];
      rtb_Sum_l = A[k];
      D = A[k + 8];
      rtb_im_idx_0 = A[k + 12];
      for (b_idx = 0; b_idx < 4; b_idx++) {
        idx_1 = b_idx << 2;
        idxAjj = idx_1 + k;
        tmp[idxAjj] = (((idx_2 * imperix_balance_ctrl_P.KF.Ts * M[idx_1 + 1] +
                         imperix_balance_ctrl_P.KF.Ts * rtb_Sum_l * M[idx_1]) +
                        D * imperix_balance_ctrl_P.KF.Ts * M[idx_1 + 2]) +
                       rtb_im_idx_0 * imperix_balance_ctrl_P.KF.Ts * M[idx_1 + 3])
          + imperix_balance_ctrl_DW.Inx[idxAjj];
      }
    }

    for (b_idx = 0; b_idx < 2; b_idx++) {
      idx_2 = 0.0;
      rtb_Sum_l = 0.0;
      D = 0.0;
      rtb_im_idx_0 = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        ssq = imperix_balance_ctrl_P.KF.B[(b_idx << 2) + idx_1];
        idxAjj = idx_1 << 2;
        idx_2 += M[idxAjj] * ssq;
        rtb_Sum_l += M[idxAjj + 1] * ssq;
        D += M[idxAjj + 2] * ssq;
        rtb_im_idx_0 += M[idxAjj + 3] * ssq;
      }

      idxAjj = b_idx << 2;
      b_a[idxAjj + 3] = rtb_im_idx_0;
      b_a[idxAjj + 2] = D;
      b_a[idxAjj + 1] = rtb_Sum_l;
      b_a[idxAjj] = idx_2;
    }

    for (b_idx = 0; b_idx < 8; b_idx++) {
      M_0[b_idx] = b_a[b_idx] * imperix_balance_ctrl_P.KF.Ts;
    }

    tmp_2 = 0.0;
    ie_idx_1 = 0.0;
    ie_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    for (b_idx = 0; b_idx < 4; b_idx++) {
      ssq = xt_est[b_idx];
      idx_1 = b_idx << 2;
      tmp_2 += tmp[idx_1] * ssq;
      ie_idx_1 += tmp[idx_1 + 1] * ssq;
      ie_idx_0 += tmp[idx_1 + 2] * ssq;
      rtb_Fr_idx_0 += tmp[idx_1 + 3] * ssq;
    }

    idx_2 = 0.0;
    rtb_Sum_l = 0.0;
    D = 0.0;
    rtb_im_idx_0 = 0.0;
    for (b_idx = 0; b_idx < 2; b_idx++) {
      ssq = imperix_balance_ctrl_DW.UnitDelay_DSTATE[b_idx];
      idxAjj = b_idx << 2;
      idx_2 += M_0[idxAjj] * ssq;
      rtb_Sum_l += M_0[idxAjj + 1] * ssq;
      D += M_0[idxAjj + 2] * ssq;
      rtb_im_idx_0 += M_0[idxAjj + 3] * ssq;
    }

    imperix_balance_ctrl_DW.xt_est_apriori[0] = tmp_2 + idx_2;
    imperix_balance_ctrl_DW.xt_est_apriori[1] = ie_idx_1 + rtb_Sum_l;
    imperix_balance_ctrl_DW.xt_est_apriori[2] = ie_idx_0 + D;
    imperix_balance_ctrl_DW.xt_est_apriori[3] = rtb_Fr_idx_0 + rtb_im_idx_0;

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
  idx_2 = rtb_F - rtb_Gain14;

  // DiscreteIntegrator: '<S304>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_h != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_k =
      imperix_balance_ctrl_P.FluxPI_InitialConditionForInteg;
  }

  // Sum: '<S313>/Sum' incorporates:
  //   DiscreteIntegrator: '<S304>/Integrator'
  //   Gain: '<S309>/Proportional Gain'

  rtb_Sum_l = imperix_balance_ctrl_P.FOC.kp_F * idx_2 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_k;

  // Saturate: '<S311>/Saturation'
  if (rtb_Sum_l > imperix_balance_ctrl_P.FOC.u_max) {
    D = imperix_balance_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_l < -imperix_balance_ctrl_P.FOC.u_max) {
    D = -imperix_balance_ctrl_P.FOC.u_max;
  } else {
    D = rtb_Sum_l;
  }

  // End of Saturate: '<S311>/Saturation'

  // S-Function (TUNABLE_PARAM): '<S695>/S-Function'
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

  // RelationalOperator: '<S629>/Compare' incorporates:
  //   Constant: '<S627>/Constant'
  //   Constant: '<S629>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_balance_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S627>/Subsystem1' incorporates:
  //   EnablePort: '<S632>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S632>/Fcn' incorporates:
    //   Fcn: '<S632>/Fcn1'

    rtb_Sum6 = sin(rtb_Switch);
    rtb_Sum_n = cos(rtb_Switch);

    // Fcn: '<S632>/Fcn'
    imperix_balance_ctrl_B.Fcn = rtb_Gain1[0] * rtb_Sum_n + rtb_Gain1[1] *
      rtb_Sum6;

    // Fcn: '<S632>/Fcn1'
    imperix_balance_ctrl_B.Fcn1 = -rtb_Gain1[0] * rtb_Sum6 + rtb_Gain1[1] *
      rtb_Sum_n;
  }

  // End of Outputs for SubSystem: '<S627>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S627>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S631>/Enable'

  // RelationalOperator: '<S630>/Compare' incorporates:
  //   Constant: '<S627>/Constant'
  //   Constant: '<S630>/Constant'

  if (imperix_balance_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_balance_ctrl_P.CompareToConstant1_const) {
    // Fcn: '<S631>/Fcn' incorporates:
    //   Fcn: '<S631>/Fcn1'

    rtb_Sum6 = cos(rtb_Switch);
    rtb_Sum_n = sin(rtb_Switch);

    // Fcn: '<S631>/Fcn'
    imperix_balance_ctrl_B.Fcn_o = rtb_Gain1[0] * rtb_Sum_n - rtb_Gain1[1] *
      rtb_Sum6;

    // Fcn: '<S631>/Fcn1'
    imperix_balance_ctrl_B.Fcn1_l = rtb_Gain1[0] * rtb_Sum6 + rtb_Gain1[1] *
      rtb_Sum_n;
  }

  // End of RelationalOperator: '<S630>/Compare'
  // End of Outputs for SubSystem: '<S627>/Subsystem - pi//2 delay'

  // Switch: '<S627>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_f_idx_0 = imperix_balance_ctrl_B.Fcn;
    rtb_Switch_f_idx_1 = imperix_balance_ctrl_B.Fcn1;
  } else {
    rtb_Switch_f_idx_0 = imperix_balance_ctrl_B.Fcn_o;
    rtb_Switch_f_idx_1 = imperix_balance_ctrl_B.Fcn1_l;
  }

  // End of Switch: '<S627>/Switch'

  // Sum: '<S81>/Sum6'
  rtb_Sum6 = D - rtb_Switch_f_idx_0;

  // DiscreteIntegrator: '<S486>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_p != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_h =
      imperix_balance_ctrl_P.MCCPId_InitialConditionForInteg;
  }

  // Sum: '<S495>/Sum' incorporates:
  //   DiscreteIntegrator: '<S486>/Integrator'
  //   Gain: '<S491>/Proportional Gain'

  rtb_Sum_n = imperix_balance_ctrl_P.MCC.kp * rtb_Sum6 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_h;

  // Saturate: '<S493>/Saturation'
  if (rtb_Sum_n > imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_p = imperix_balance_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_n < -imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_p = -imperix_balance_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_p = rtb_Sum_n;
  }

  // End of Saturate: '<S493>/Saturation'

  // Sum: '<S81>/Sum' incorporates:
  //   Product: '<S81>/Product3'

  rtb_Sum = rtb_Saturation_p - rtb_Integrator_b * rtb_Saturation;

  // Sum: '<S81>/Sum8'
  rtb_Sum8 = rtb_Saturation - rtb_Switch_f_idx_1;

  // DiscreteIntegrator: '<S538>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_b != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_m =
      imperix_balance_ctrl_P.MCCPIq_InitialConditionForInteg;
  }

  // Sum: '<S547>/Sum' incorporates:
  //   DiscreteIntegrator: '<S538>/Integrator'
  //   Gain: '<S543>/Proportional Gain'

  rtb_Sum_o = imperix_balance_ctrl_P.MCC.kp * rtb_Sum8 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_m;

  // Saturate: '<S545>/Saturation'
  if (rtb_Sum_o > imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_h = imperix_balance_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_o < -imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_h = -imperix_balance_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_h = rtb_Sum_o;
  }

  // End of Saturate: '<S545>/Saturation'

  // Sum: '<S81>/Sum1' incorporates:
  //   Product: '<S81>/Product1'

  rtb_Sum1_dd = D * rtb_Integrator_b + rtb_Saturation_h;

  // Gain: '<S81>/Gain1'
  rtb_Gain1_k_idx_0 = imperix_balance_ctrl_P.Gain1_Gain_m * rtb_Sum;
  rtb_Gain1_k_idx_1 = imperix_balance_ctrl_P.Gain1_Gain_m * rtb_Sum1_dd;

  // Sum: '<S79>/Sum6' incorporates:
  //   Constant: '<S1>/Vc_ref'
  //   UnitDelay: '<S393>/Unit Delay1'

  rtb_Integrator_b = imperix_balance_ctrl_P.M2C.Vc_ref -
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE;

  // Sum: '<S440>/Sum' incorporates:
  //   DiscreteIntegrator: '<S431>/Integrator'
  //   Gain: '<S436>/Proportional Gain'

  rtb_DeadZone = imperix_balance_ctrl_P.TEC.kp * rtb_Integrator_b +
    imperix_balance_ctrl_DW.Integrator_DSTATE_p;

  // Saturate: '<S438>/Saturation'
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
  //   Saturate: '<S438>/Saturation'
  //   Sum: '<S81>/Sum2'

  rtb_Sum1_fi = ssq - (rtb_Gain1_k_idx_0 * D + rtb_Gain1_k_idx_1 *
                       rtb_Saturation) * imperix_balance_ctrl_P.Gain4_Gain *
    (1.0 / imperix_balance_ctrl_P.M2C.Vdc);

  // Sum: '<S85>/Sum3'
  rtb_IntegralGain_m = rtb_Sum1_fi - rtb_Gain1_n[0];

  // Sum: '<S618>/Sum' incorporates:
  //   DiscreteIntegrator: '<S609>/Integrator'
  //   Gain: '<S614>/Proportional Gain'

  rtb_DeadZone_o = imperix_balance_ctrl_P.PCC.kp * rtb_IntegralGain_m +
    imperix_balance_ctrl_DW.Integrator_DSTATE_a;

  // Saturate: '<S616>/Saturation'
  if (rtb_DeadZone_o > imperix_balance_ctrl_P.PCC.u_max) {
    ssq = imperix_balance_ctrl_P.PCC.u_max;
  } else if (rtb_DeadZone_o < -imperix_balance_ctrl_P.PCC.u_max) {
    ssq = -imperix_balance_ctrl_P.PCC.u_max;
  } else {
    ssq = rtb_DeadZone_o;
  }

  // Sum: '<S85>/Sum13' incorporates:
  //   Constant: '<S85>/Constant1'
  //   Saturate: '<S616>/Saturation'

  rtb_Sum13 = 1.5 * imperix_balance_ctrl_P.M2C.Vdc - ssq;

  // RelationalOperator: '<S556>/Compare' incorporates:
  //   Constant: '<S451>/Constant'
  //   Constant: '<S556>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_balance_ctrl_P.CompareToConstant_const_d);

  // Outputs for Enabled SubSystem: '<S451>/Subsystem1'
  imperix_balance__Subsystem1(rtb_Compare, rtb_Sum, rtb_Sum1_dd, rtb_Switch,
    &imperix_balance_ctrl_B.Fcn_ou, &imperix_balance_ctrl_B.Fcn1_f);

  // End of Outputs for SubSystem: '<S451>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S451>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S557>/Compare' incorporates:
  //   Constant: '<S451>/Constant'
  //   Constant: '<S557>/Constant'

  imperix_b_Subsystempi2delay(static_cast<uint8_T>
    (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment ==
     imperix_balance_ctrl_P.CompareToConstant1_const_j), rtb_Sum, rtb_Sum1_dd,
    rtb_Switch, &imperix_balance_ctrl_B.Fcn_b, &imperix_balance_ctrl_B.Fcn1_i);

  // End of Outputs for SubSystem: '<S451>/Subsystem - pi//2 delay'

  // Switch: '<S451>/Switch'
  if (rtb_Compare != 0) {
    rtb_Sum1_dd = imperix_balance_ctrl_B.Fcn_ou;
    rtb_Switch_h_idx_1 = imperix_balance_ctrl_B.Fcn1_f;
  } else {
    rtb_Sum1_dd = imperix_balance_ctrl_B.Fcn_b;
    rtb_Switch_h_idx_1 = imperix_balance_ctrl_B.Fcn1_i;
  }

  // End of Switch: '<S451>/Switch'

  // RateTransition generated from: '<S27>/Saturation' incorporates:
  //   RateTransition generated from: '<S27>/Input format'

  tmp_5 = (imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1 == 1);
  if (tmp_5) {
    // RateTransition generated from: '<S27>/Saturation'
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0] =
      imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0];
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1] =
      imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1];
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2] =
      imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2];
  }

  // End of RateTransition generated from: '<S27>/Saturation'

  // RelationalOperator: '<S388>/Compare' incorporates:
  //   Constant: '<S387>/Constant'
  //   Constant: '<S388>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment_j ==
                 imperix_balance_ctrl_P.CompareToConstant_const_b);

  // Outputs for Enabled SubSystem: '<S387>/Subsystem1'
  imperix_balance__Subsystem1(rtb_Compare, D, rtb_Saturation, rtb_Switch,
    &imperix_balance_ctrl_B.Fcn_br, &imperix_balance_ctrl_B.Fcn1_f3);

  // End of Outputs for SubSystem: '<S387>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S387>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S389>/Compare' incorporates:
  //   Constant: '<S387>/Constant'
  //   Constant: '<S389>/Constant'

  imperix_b_Subsystempi2delay(static_cast<uint8_T>
    (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment_j ==
     imperix_balance_ctrl_P.CompareToConstant1_const_o), D, rtb_Saturation,
    rtb_Switch, &imperix_balance_ctrl_B.Fcn_m, &imperix_balance_ctrl_B.Fcn1_c);

  // End of Outputs for SubSystem: '<S387>/Subsystem - pi//2 delay'

  // Switch: '<S387>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch = imperix_balance_ctrl_B.Fcn_br;
    rtb_Sum = imperix_balance_ctrl_B.Fcn1_f3;
  } else {
    rtb_Switch = imperix_balance_ctrl_B.Fcn_m;
    rtb_Sum = imperix_balance_ctrl_B.Fcn1_c;
  }

  // End of Switch: '<S387>/Switch'

  // SignalConversion generated from: '<S386>/Gain3'
  rtb_Switch_p_0[0] = rtb_Switch;
  rtb_Switch_p_0[1] = rtb_Sum;
  rtb_Switch_p_0[2] = 0.0;

  // Gain: '<S386>/Gain3'
  tmp_2 = 0.0;
  ie_idx_1 = 0.0;
  ie_idx_0 = 0.0;
  for (b_idx = 0; b_idx < 3; b_idx++) {
    ssq = rtb_Switch_p_0[b_idx];
    tmp_2 += imperix_balance_ctrl_P.Gain3_Gain_g[3 * b_idx] * ssq;
    ie_idx_1 += imperix_balance_ctrl_P.Gain3_Gain_g[3 * b_idx + 1] * ssq;
    ie_idx_0 += imperix_balance_ctrl_P.Gain3_Gain_g[3 * b_idx + 2] * ssq;
  }

  // End of Gain: '<S386>/Gain3'

  // SignalConversion generated from: '<S83>/Gain31' incorporates:
  //   Gain: '<S83>/Gain'
  //   Gain: '<S83>/Gain29'

  a[0] = imperix_balance_ctrl_P.Gain29_Gain[0] * rtb_Sum1_fi;
  a[1] = imperix_balance_ctrl_P.Gain29_Gain[1] * rtb_Sum1_fi;
  a[2] = imperix_balance_ctrl_P.Gain_Gain * tmp_2;
  a[3] = imperix_balance_ctrl_P.Gain_Gain * ie_idx_1;
  a[4] = imperix_balance_ctrl_P.Gain_Gain * ie_idx_0;

  // Gain: '<S83>/Gain31'
  for (b_idx = 0; b_idx < 6; b_idx++) {
    rtb_Gain31[b_idx] = 0.0;
  }

  for (b_idx = 0; b_idx < 5; b_idx++) {
    ssq = a[b_idx];
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      rtb_Gain31[idx_1] += imperix_balance_ctrl_P.M2C.pinvA[6 * b_idx + idx_1] *
        ssq;
    }
  }

  // End of Gain: '<S83>/Gain31'

  // Gain: '<S81>/Gain3' incorporates:
  //   UnitDelay: '<S81>/Unit Delay'

  imperix_balance_ctrl_DW.UnitDelay_DSTATE[0] =
    imperix_balance_ctrl_P.Gain3_Gain_c * rtb_Sum1_dd;
  imperix_balance_ctrl_DW.UnitDelay_DSTATE[1] =
    imperix_balance_ctrl_P.Gain3_Gain_c * rtb_Switch_h_idx_1;

  // SignalConversion generated from: '<S80>/Gain2' incorporates:
  //   Constant: '<S80>/vx'

  ie_ref_fil_pred2_idx_0 = imperix_balance_ctrl_P.M2C.Vdc / 2.0;

  // Gain: '<S81>/Gain2' incorporates:
  //   UnitDelay: '<S81>/Unit Delay'

  tmp_2 = 0.0;
  ie_idx_1 = 0.0;
  ie_idx_0 = 0.0;
  for (b_idx = 0; b_idx < 2; b_idx++) {
    ssq = imperix_balance_ctrl_DW.UnitDelay_DSTATE[b_idx];
    tmp_2 += imperix_balance_ctrl_P.RFT.ab2abc[3 * b_idx] * ssq;
    ie_idx_1 += imperix_balance_ctrl_P.RFT.ab2abc[3 * b_idx + 1] * ssq;
    ie_idx_0 += imperix_balance_ctrl_P.RFT.ab2abc[3 * b_idx + 2] * ssq;

    // SignalConversion generated from: '<S80>/Gain2' incorporates:
    //   Constant: '<S80>/vx'
    //   UnitDelay: '<S81>/Unit Delay'

    a[b_idx] = ie_ref_fil_pred2_idx_0 *
      imperix_balance_ctrl_ConstP.vx_rtw_collapsed_sub_expr_yVo7x[b_idx];
  }

  // End of Gain: '<S81>/Gain2'

  // SignalConversion generated from: '<S80>/Gain2'
  a[2] = tmp_2;
  a[3] = ie_idx_1;
  a[4] = ie_idx_0;

  // Gain: '<S80>/Gain2'
  for (b_idx = 0; b_idx < 6; b_idx++) {
    rtb_Gain2[b_idx] = 0.0;
  }

  for (b_idx = 0; b_idx < 5; b_idx++) {
    ssq = a[b_idx];
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      rtb_Gain2[idx_1] += imperix_balance_ctrl_P.Gain2_Gain_i[6 * b_idx + idx_1]
        * ssq;
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
  //   TriggerPort: '<S669>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE_h,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S669>/In'
    imperix_balance_ctrl_B.In_nz =
      imperix_balance_ctrl_B.MovingAverage_p.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_o),
    &imperix_balance_ctrl_B.MovingAverage1,
    &imperix_balance_ctrl_DW.MovingAverage1);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold1' incorporates:
  //   TriggerPort: '<S670>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold1_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S670>/In'
    imperix_balance_ctrl_B.In_g =
      imperix_balance_ctrl_B.MovingAverage1.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold1'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_n),
    &imperix_balance_ctrl_B.MovingAverage2,
    &imperix_balance_ctrl_DW.MovingAverage2);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold2' incorporates:
  //   TriggerPort: '<S671>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold2_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S671>/In'
    imperix_balance_ctrl_B.In_m =
      imperix_balance_ctrl_B.MovingAverage2.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold2'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_m),
    &imperix_balance_ctrl_B.MovingAverage3,
    &imperix_balance_ctrl_DW.MovingAverage3);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold3' incorporates:
  //   TriggerPort: '<S672>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold3_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S672>/In'
    imperix_balance_ctrl_B.In_n =
      imperix_balance_ctrl_B.MovingAverage3.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold3'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_k),
    &imperix_balance_ctrl_B.MovingAverage4,
    &imperix_balance_ctrl_DW.MovingAverage4);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold4' incorporates:
  //   TriggerPort: '<S673>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold4_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S673>/In'
    imperix_balance_ctrl_B.In_k =
      imperix_balance_ctrl_B.MovingAverage4.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S92>/Sample and Hold4'

  // DataTypeConversion: '<S1>/Cast To Double5'
  imperix_balan_MovingAverage(static_cast<real_T>(imperix_balance_ctrl_B.ADC_fe),
    &imperix_balance_ctrl_B.MovingAverage5,
    &imperix_balance_ctrl_DW.MovingAverage5);

  // Outputs for Triggered SubSystem: '<S92>/Sample and Hold5' incorporates:
  //   TriggerPort: '<S674>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold5_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S674>/In'
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

  // MATLAB Function: '<S27>/Saturation'
  // MATLAB Function 'Closed_loop_control/ICB/Saturation': '<S161>:1'
  // '<S161>:1:40'
  // '<S161>:1:51'
  // '<S161>:1:4'
  // '<S161>:1:5'
  if (!imperix_balance_ctrl_DW.Ac_not_empty) {
    // '<S161>:1:10'
    // '<S161>:1:11'
    for (b_idx = 0; b_idx < 6; b_idx++) {
      ssq = imperix_balance_ctrl_P.M2C.N[b_idx];
      imperix_balance_ctrl_DW.Ac[b_idx] = ssq;
      imperix_balance_ctrl_DW.Ac[b_idx + 6] = -ssq;
      ssq = imperix_balance_ctrl_P.M2C.N[b_idx + 6];
      imperix_balance_ctrl_DW.Ac[b_idx + 12] = ssq;
      imperix_balance_ctrl_DW.Ac[b_idx + 18] = -ssq;
    }

    imperix_balance_ctrl_DW.Ac_not_empty = true;

    // '<S161>:1:14'
    imperix_balance_ctrl_DW.is_max = imperix_balance_ctrl_P.M2C.is_max;
  }

  // '<S161>:1:19'
  for (idx_1 = 0; idx_1 < 6; idx_1++) {
    ssq = rtb_Gain31[idx_1];
    bc[idx_1] = imperix_balance_ctrl_DW.is_max - ssq;
    bc[idx_1 + 6] = imperix_balance_ctrl_DW.is_max + ssq;
  }

  ssq = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1];
  tmp_2 = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0];
  for (b_idx = 0; b_idx < 12; b_idx++) {
    x[b_idx] = (imperix_balance_ctrl_DW.Ac[b_idx + 12] * ssq +
                imperix_balance_ctrl_DW.Ac[b_idx] * tmp_2) - bc[b_idx];
  }

  if (!rtIsNaN(x[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 13)) {
      if (!rtIsNaN(x[k - 1])) {
        b_idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (b_idx == 0) {
    ssq = x[0];
  } else {
    ssq = x[b_idx - 1];
    for (k = b_idx + 1; k < 13; k++) {
      tmp_2 = x[k - 1];
      if (ssq < tmp_2) {
        ssq = tmp_2;
      }
    }
  }

  if (ssq > 0.01) {
    // '<S161>:1:25'
    // '<S161>:1:26'
    // '<S161>:1:65'
    tmp_0[0] = -imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0];
    tmp_0[1] = -imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1];
    for (b_idx = 0; b_idx < 24; b_idx++) {
      rtb_Gain31_0[b_idx] = -imperix_balance_ctrl_DW.Ac[b_idx];
    }

    for (b_idx = 0; b_idx < 12; b_idx++) {
      bc_0[b_idx] = -bc[b_idx];
    }

    imperix_balance_ctrl_qpkwik(imperix_balance_ctrl_DW.Ix,
      imperix_balance_ctrl_DW.Ix, tmp_0, rtb_Gain31_0, bc_0,
      imperix_balance_ctrl_DW.iA_k, 10, 0.01, rtb_ie_sat, x, &b_idx);

    // '<S161>:1:65'
    // '<S161>:1:67'
    // '<S161>:1:26'
    // '<S161>:1:27'
  } else {
    // '<S161>:1:29'
    rtb_ie_sat[0] = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0];
    rtb_ie_sat[1] = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1];

    // '<S161>:1:30'
    for (idx_1 = 0; idx_1 < 12; idx_1++) {
      imperix_balance_ctrl_DW.iA_k[idx_1] = false;
    }
  }

  // '<S161>:1:40'
  rtb_Gain31[0] = rtb_Bias[0] - rtb_Gain2[0];
  rtb_Gain31[3] = -rtb_Gain2[3];
  rtb_Gain31[1] = rtb_Bias[1] - rtb_Gain2[1];
  rtb_Gain31[4] = -rtb_Gain2[4];
  rtb_Gain31[2] = rtb_Bias[2] - rtb_Gain2[2];
  rtb_Gain31[5] = -rtb_Gain2[5];
  if (!rtIsNaN(rtb_Gain31[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    idx_1 = 2;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 7)) {
      if (!rtIsNaN(rtb_Gain31[idx_1 - 1])) {
        b_idx = idx_1;
        exitg1 = true;
      } else {
        idx_1++;
      }
    }
  }

  if (b_idx == 0) {
    ie_idx_1 = rtb_Gain31[0];
  } else {
    ie_idx_1 = rtb_Gain31[b_idx - 1];
    for (k = b_idx + 1; k < 7; k++) {
      ssq = rtb_Gain31[k - 1];
      if (ie_idx_1 > ssq) {
        ie_idx_1 = ssq;
      }
    }
  }

  // '<S161>:1:41'
  rtb_Gain31[0] = -rtb_Gain2[0];
  rtb_Gain31[3] = -rtb_Bias[3] - rtb_Gain2[3];
  rtb_Gain31[1] = -rtb_Gain2[1];
  rtb_Gain31[4] = -rtb_Bias[4] - rtb_Gain2[4];
  rtb_Gain31[2] = -rtb_Gain2[2];
  rtb_Gain31[5] = -rtb_Bias[5] - rtb_Gain2[5];
  if (!rtIsNaN(-rtb_Gain2[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    idx_1 = 2;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 7)) {
      if (!rtIsNaN(rtb_Gain31[idx_1 - 1])) {
        b_idx = idx_1;
        exitg1 = true;
      } else {
        idx_1++;
      }
    }
  }

  if (b_idx == 0) {
    ie_idx_0 = -rtb_Gain2[0];
  } else {
    ie_idx_0 = rtb_Gain31[b_idx - 1];
    for (idx_1 = b_idx + 1; idx_1 < 7; idx_1++) {
      ssq = rtb_Gain31[idx_1 - 1];
      if (ie_idx_0 < ssq) {
        ie_idx_0 = ssq;
      }
    }
  }

  // '<S161>:1:42'
  if (imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2] > ie_idx_1 - 1.0) {
    tmp_2 = ie_idx_1 - 1.0;
  } else if (rtIsNaN(imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2])) {
    if (!rtIsNaN(ie_idx_1 - 1.0)) {
      tmp_2 = ie_idx_1 - 1.0;
    } else {
      tmp_2 = (rtNaN);
    }
  } else {
    tmp_2 = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2];
  }

  if ((!(tmp_2 >= ie_idx_0 + 1.0)) && (!rtIsNaN(ie_idx_0 + 1.0))) {
    tmp_2 = ie_idx_0 + 1.0;
  }

  if (ie_idx_1 - 1.0 < ie_idx_0 + 1.0) {
    // '<S161>:1:44'
    // '<S161>:1:45'
    tmp_2 = 0.0;
  }

  d_x[0] = rtIsNaN(rtb_ie_sat[0]);
  d_x[1] = rtIsNaN(rtb_ie_sat[1]);
  y = true;
  b_idx = 0;
  exitg1 = false;
  while ((!exitg1) && (b_idx < 2)) {
    if (!d_x[b_idx]) {
      y = false;
      exitg1 = true;
    } else {
      b_idx++;
    }
  }

  if (y) {
    // '<S161>:1:51'
    rtb_ie_sat[0] = 0.0;
    rtb_ie_sat[1] = 0.0;
  }

  if (rtIsNaN(tmp_2)) {
    // '<S161>:1:54'
    // '<S161>:1:55'
    tmp_2 = 0.0;
  }

  // Gain: '<S91>/Gain3'
  ie_idx_0 = 0.0;
  ie_idx_1 = 0.0;
  for (b_idx = 0; b_idx < 6; b_idx++) {
    ssq = rtb_Gain1_mw[b_idx];
    idx_1 = b_idx << 1;
    ie_idx_0 += imperix_balance_ctrl_P.M2C.Te[idx_1] * ssq;
    ie_idx_1 += imperix_balance_ctrl_P.M2C.Te[idx_1 + 1] * ssq;
  }

  // End of Gain: '<S91>/Gain3'

  // MATLAB Function: '<S1>/LICCs control' incorporates:
  //   MATLAB Function: '<S27>/Saturation'
  //   UnitDelay: '<S160>/Unit Delay1'

  // MATLAB Function 'Closed_loop_control/LICCs control': '<S30>:1'
  // '<S30>:1:18'
  if (!imperix_balance_ctrl_DW.A_not_empty) {
    // '<S30>:1:5'
    // '<S30>:1:6'
    memcpy(&imperix_balance_ctrl_DW.A[0], &imperix_balance_ctrl_P.CCC.A[0],
           sizeof(real_T) << 4U);
    imperix_balance_ctrl_DW.A_not_empty = true;

    // '<S30>:1:7'
    memcpy(&imperix_balance_ctrl_DW.B[0], &imperix_balance_ctrl_P.CCC.B[0],
           sizeof(real_T) << 6U);

    // '<S30>:1:8'
    memcpy(&imperix_balance_ctrl_DW.Aineq[0], &imperix_balance_ctrl_P.CCC.Aineq
           [0], 192U * sizeof(real_T));

    // '<S30>:1:10'
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      imperix_balance_ctrl_DW.pinvTx[idx_1] =
        imperix_balance_ctrl_P.M2C.pinvTx[idx_1];
    }

    // '<S30>:1:11'
    memcpy(&imperix_balance_ctrl_DW.pinvTy[0],
           &imperix_balance_ctrl_P.M2C.pinvTy[0], 12U * sizeof(real_T));

    // '<S30>:1:16'
    memcpy(&A_0[0], &imperix_balance_ctrl_P.CCC.H[0], sizeof(real_T) << 6U);

    // '<S30>:1:18'
    b_idx = 0;
    idx_1 = 0;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 8)) {
      idxAjj = (idx_1 << 3) + idx_1;
      ssq = 0.0;
      if (idx_1 >= 1) {
        for (k = 0; k < idx_1; k++) {
          ie_ref_fil_pred2_idx_0 = A_0[(k << 3) + idx_1];
          ssq += ie_ref_fil_pred2_idx_0 * ie_ref_fil_pred2_idx_0;
        }
      }

      ssq = A_0[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        A_0[idxAjj] = ssq;
        if (idx_1 + 1 < 8) {
          if (idx_1 != 0) {
            b_a_tmp = (((idx_1 - 1) << 3) + idx_1) + 2;
            for (k = idx_1 + 2; k <= b_a_tmp; k += 8) {
              M_ref_tmp = k - idx_1;
              ie_ref_fil_pred2_idx_0 = -A_0[(((M_ref_tmp - 2) >> 3) << 3) +
                idx_1];
              e = M_ref_tmp + 6;
              for (M_ref_tmp = k; M_ref_tmp <= e; M_ref_tmp++) {
                A_tmp = ((idxAjj + M_ref_tmp) - k) + 1;
                A_0[A_tmp] += A_0[M_ref_tmp - 1] * ie_ref_fil_pred2_idx_0;
              }
            }
          }

          ie_ref_fil_pred2_idx_0 = 1.0 / ssq;
          b_a_tmp = (idxAjj - idx_1) + 8;
          for (k = idxAjj + 2; k <= b_a_tmp; k++) {
            A_0[k - 1] *= ie_ref_fil_pred2_idx_0;
          }
        }

        idx_1++;
      } else {
        A_0[idxAjj] = ssq;
        b_idx = idx_1 + 1;
        exitg1 = true;
      }
    }

    if (b_idx == 0) {
      b_idx = 9;
    }

    for (idxAjj = 2; idxAjj < b_idx; idxAjj++) {
      for (idx_1 = 0; idx_1 <= idxAjj - 2; idx_1++) {
        A_0[idx_1 + ((idxAjj - 1) << 3)] = 0.0;
      }
    }

    for (b_idx = 0; b_idx < 64; b_idx++) {
      imperix_balance_ctrl_DW.Linv[b_idx] = B[b_idx];
    }

    imperix_balance_ctrl_trisolve(A_0, imperix_balance_ctrl_DW.Linv);

    // '<S30>:1:19'
    // '<S30>:1:21'
    // '<S30>:1:22'
    for (b_idx = 0; b_idx < 8; b_idx++) {
      for (idx_1 = 0; idx_1 < 8; idx_1++) {
        ssq = 0.0;
        for (idxAjj = 0; idxAjj < 8; idxAjj++) {
          ssq += imperix_balance_ctrl_DW.Linv[(idx_1 << 3) + idxAjj] *
            imperix_balance_ctrl_DW.Linv[(b_idx << 3) + idxAjj];
        }

        idxAjj = (b_idx << 3) + idx_1;
        imperix_balance_ctrl_DW.Hinv[idxAjj] = ssq;
        imperix_balance_ctrl_DW.M_ref[idxAjj] = 0.0;
      }

      for (idx_1 = 0; idx_1 < 8; idx_1++) {
        idxAjj = b_idx << 3;
        k = idxAjj + idx_1;
        ssq = imperix_balance_ctrl_P.CCC.Q[k];
        for (b_a_tmp = 0; b_a_tmp < 8; b_a_tmp++) {
          M_ref_tmp = idxAjj + b_a_tmp;
          imperix_balance_ctrl_DW.M_ref[M_ref_tmp] += imperix_balance_ctrl_DW.B
            [(b_a_tmp << 3) + idx_1] * -2.0 * ssq;
        }

        A_0[k] = 0.0;
      }

      for (idx_1 = 0; idx_1 < 8; idx_1++) {
        idxAjj = b_idx << 3;
        ssq = imperix_balance_ctrl_P.CCC.Q[idxAjj + idx_1];
        for (k = 0; k < 8; k++) {
          b_a_tmp = idxAjj + k;
          A_0[b_a_tmp] += imperix_balance_ctrl_DW.B[(k << 3) + idx_1] * 2.0 *
            ssq;
        }
      }

      imperix_balance_ctrl_DW.M_state[b_idx] = 0.0;
      imperix_balance_ctrl_DW.M_state[b_idx + 8] = 0.0;
    }

    for (b_idx = 0; b_idx < 2; b_idx++) {
      for (idx_1 = 0; idx_1 < 8; idx_1++) {
        idxAjj = b_idx << 3;
        ssq = imperix_balance_ctrl_DW.A[idxAjj + idx_1];
        for (k = 0; k < 8; k++) {
          b_a_tmp = idxAjj + k;
          imperix_balance_ctrl_DW.M_state[b_a_tmp] += A_0[(idx_1 << 3) + k] *
            ssq;
        }
      }
    }

    // '<S30>:1:23'
    for (idx_1 = 0; idx_1 < 16; idx_1++) {
      imperix_balance_ctrl_DW.M_u[idx_1] = -2.0 *
        imperix_balance_ctrl_P.CCC.R[idx_1];
    }

    // '<S30>:1:24'
    imperix_balance_ctrl_DW.alpha = imperix_balance_ctrl_P.CCC.alpha;
  }

  // '<S30>:1:29'
  // '<S30>:1:32'
  // '<S30>:1:33'
  ssq = (1.0 - imperix_balance_ctrl_DW.alpha) * rtb_ie_sat[0] +
    imperix_balance_ctrl_DW.alpha * imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f
    [0];
  vse_temp[2] = ssq;
  ie_ref_fil_pred2_idx_0 = (1.0 - imperix_balance_ctrl_DW.alpha) * rtb_ie_sat[0]
    + imperix_balance_ctrl_DW.alpha * ssq;
  ssq = (1.0 - imperix_balance_ctrl_DW.alpha) * rtb_ie_sat[1] +
    imperix_balance_ctrl_DW.alpha * imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f
    [1];
  ie_ref_fil_pred2_idx_1 = (1.0 - imperix_balance_ctrl_DW.alpha) * rtb_ie_sat[1]
    + imperix_balance_ctrl_DW.alpha * ssq;

  // '<S30>:1:34'
  // '<S30>:1:35'
  // '<S30>:1:38'
  // '<S30>:1:41'
  // '<S30>:1:44'
  // '<S30>:1:47'
  for (b_idx = 0; b_idx < 6; b_idx++) {
    rtb_Gain2[b_idx] = (imperix_balance_ctrl_DW.pinvTy[b_idx + 6] *
                        rtb_Switch_h_idx_1 +
                        imperix_balance_ctrl_DW.pinvTy[b_idx] * rtb_Sum1_dd) +
      (imperix_balance_ctrl_DW.pinvTx[b_idx] * rtb_Sum13 + tmp_2);
  }

  // '<S30>:1:48'
  rtb_Gain31[3] = 0.0 - rtb_Gain2[3];
  rtb_Gain31[4] = 0.0 - rtb_Gain2[4];
  rtb_Gain31[5] = 0.0 - rtb_Gain2[5];

  // '<S30>:1:49'
  CastToDouble5[0] = 0.0 - rtb_Gain2[0];
  CastToDouble5[1] = 0.0 - rtb_Gain2[1];
  CastToDouble5[2] = 0.0 - rtb_Gain2[2];
  rtb_Gain31[0] = rtb_Bias[0] - rtb_Gain2[0];
  CastToDouble5[3] = -rtb_Bias[3] - rtb_Gain2[3];
  rtb_Gain31[1] = rtb_Bias[1] - rtb_Gain2[1];
  CastToDouble5[4] = -rtb_Bias[4] - rtb_Gain2[4];
  rtb_Gain31[2] = rtb_Bias[2] - rtb_Gain2[2];
  CastToDouble5[5] = -rtb_Bias[5] - rtb_Gain2[5];

  // '<S30>:1:50'
  // '<S30>:1:53'
  // '<S30>:1:65'
  vse_temp[0] = imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0];
  vse_temp[4] = ie_ref_fil_pred2_idx_0;
  vse_temp[6] = (1.0 - imperix_balance_ctrl_DW.alpha) * rtb_ie_sat[0] +
    imperix_balance_ctrl_DW.alpha * ie_ref_fil_pred2_idx_0;
  vse_temp[1] = imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1];
  vse_temp[3] = ssq;
  vse_temp[5] = ie_ref_fil_pred2_idx_1;
  vse_temp[7] = (1.0 - imperix_balance_ctrl_DW.alpha) * rtb_ie_sat[1] +
    imperix_balance_ctrl_DW.alpha * ie_ref_fil_pred2_idx_1;
  tmp_0[0] = (imperix_balance_ctrl_DW.A[0] * ie_idx_0 +
              imperix_balance_ctrl_DW.A[8] * ie_idx_1) +
    (imperix_balance_ctrl_DW.B[0] * imperix_balance_ctrl_DW.u_prev[0] +
     imperix_balance_ctrl_DW.u_prev[1] * imperix_balance_ctrl_DW.B[8]);
  tmp_0[1] = (imperix_balance_ctrl_DW.A[1] * ie_idx_0 +
              imperix_balance_ctrl_DW.A[9] * ie_idx_1) +
    (imperix_balance_ctrl_DW.u_prev[0] * imperix_balance_ctrl_DW.B[1] +
     imperix_balance_ctrl_DW.u_prev[1] * imperix_balance_ctrl_DW.B[9]);
  memset(&M_0[0], 0, sizeof(real_T) << 3U);
  for (b_idx = 0; b_idx < 8; b_idx++) {
    ssq = vse_temp[b_idx];
    for (idx_1 = 0; idx_1 < 8; idx_1++) {
      M_0[idx_1] += imperix_balance_ctrl_DW.M_ref[(b_idx << 3) + idx_1] * ssq;
    }
  }

  memset(&vse_temp[0], 0, sizeof(real_T) << 3U);
  for (b_idx = 0; b_idx < 2; b_idx++) {
    ssq = tmp_0[b_idx];
    for (idx_1 = 0; idx_1 < 8; idx_1++) {
      vse_temp[idx_1] += imperix_balance_ctrl_DW.M_state[(b_idx << 3) + idx_1] *
        ssq;
    }
  }

  ssq = imperix_balance_ctrl_DW.u_prev[1];
  ie_ref_fil_pred2_idx_0 = imperix_balance_ctrl_DW.u_prev[0];
  for (b_idx = 0; b_idx < 8; b_idx++) {
    b_a[b_idx] = (imperix_balance_ctrl_DW.M_u[b_idx + 8] * ssq +
                  imperix_balance_ctrl_DW.M_u[b_idx] * ie_ref_fil_pred2_idx_0) +
      (M_0[b_idx] + vse_temp[b_idx]);
  }

  for (b_idx = 0; b_idx < 192; b_idx++) {
    tmp_1[b_idx] = -imperix_balance_ctrl_DW.Aineq[b_idx];
  }

  for (b_idx = 0; b_idx < 6; b_idx++) {
    ssq = rtb_Gain31[b_idx];
    rtb_Gain31_0[b_idx] = -ssq;
    rtb_Gain31_0[b_idx + 6] = -ssq;
    ssq = CastToDouble5[b_idx];
    rtb_Gain31_0[b_idx + 12] = ssq;
    rtb_Gain31_0[b_idx + 18] = ssq;
  }

  imperix_balance_ctrl_qpkwik_n(imperix_balance_ctrl_DW.Linv,
    imperix_balance_ctrl_DW.Hinv, b_a, tmp_1, rtb_Gain31_0,
    imperix_balance_ctrl_DW.iA, 5, 0.1, vse_temp, a__3, &b_idx);

  // SignalConversion generated from: '<S31>/Gain'
  // '<S30>:1:65'
  // '<S30>:1:67'
  // '<S30>:1:53'
  // '<S30>:1:55'
  // '<S30>:1:58'
  a[0] = rtb_Sum13;

  // MATLAB Function: '<S1>/LICCs control'
  imperix_balance_ctrl_DW.u_prev[0] = vse_temp[0];

  // SignalConversion generated from: '<S31>/Gain' incorporates:
  //   MATLAB Function: '<S1>/LICCs control'

  a[1] = rtb_Sum1_dd;
  a[3] = vse_temp[0];

  // MATLAB Function: '<S1>/LICCs control'
  imperix_balance_ctrl_DW.u_prev[1] = vse_temp[1];

  // SignalConversion generated from: '<S31>/Gain' incorporates:
  //   MATLAB Function: '<S1>/LICCs control'

  a[2] = rtb_Switch_h_idx_1;
  a[4] = vse_temp[1];

  // Sum: '<S31>/Sum11' incorporates:
  //   Gain: '<S31>/Gain'
  //   MATLAB Function: '<S27>/Saturation'

  for (b_idx = 0; b_idx < 6; b_idx++) {
    ssq = 0.0;
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      ssq += imperix_balance_ctrl_P.M2C.pinvT[6 * idx_1 + b_idx] * a[idx_1];
    }

    rtb_Gain2[b_idx] = ssq + tmp_2;
  }

  // End of Sum: '<S31>/Sum11'

  // MATLAB Function: '<S31>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation Index/Modulation index': '<S163>:1' 
  // '<S163>:1:4'
  rtb_Gain2[3] = -rtb_Gain2[3];
  rtb_Gain2[4] = -rtb_Gain2[4];
  rtb_Gain2[5] = -rtb_Gain2[5];

  // '<S163>:1:10'
  for (k = 0; k < 6; k++) {
    rtb_Sum13 = rtb_Gain2[k] / rtb_Bias[k];
    if (!(rtb_Sum13 >= 0.0)) {
      rtb_Sum13 = 0.0;
    }

    if (!(rtb_Sum13 <= 1.0)) {
      rtb_Sum13 = 1.0;
    }

    rtb_Gain2[k] = rtb_Sum13;

    // Gain: '<S1>/Gain' incorporates:
    //   Gain: '<S1>/Gain21'

    rtb_Gain31[k] = imperix_balance_ctrl_P.Gain_Gain_e * rtb_Sum13;
  }

  // End of MATLAB Function: '<S31>/Modulation index'

  // DataTypeConversion: '<S143>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1 = static_cast<real32_T>(rtb_Gain31
    [4]);

  // S-Function (DAC): '<S143>/DAC'
  Dac_SetVoltage(1, imperix_balance_ctrl_B.DataTypeConversion1, 0);

  // DataTypeConversion: '<S145>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>
    (rtb_Gain31[5]);

  // S-Function (DAC): '<S145>/DAC'
  Dac_SetVoltage(2, imperix_balance_ctrl_B.DataTypeConversion1_l, 0);

  // DataTypeConversion: '<S151>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_la = static_cast<real32_T>
    (rtb_Gain31[0]);

  // S-Function (DAC): '<S151>/DAC'
  Dac_SetVoltage(0, imperix_balance_ctrl_B.DataTypeConversion1_la, 1);

  // DataTypeConversion: '<S153>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>
    (rtb_Gain31[1]);

  // S-Function (DAC): '<S153>/DAC'
  Dac_SetVoltage(1, imperix_balance_ctrl_B.DataTypeConversion1_p, 1);

  // DataTypeConversion: '<S155>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>
    (rtb_Gain31[2]);

  // S-Function (DAC): '<S155>/DAC'
  Dac_SetVoltage(2, imperix_balance_ctrl_B.DataTypeConversion1_a, 1);

  // DataTypeConversion: '<S157>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>
    (rtb_Gain31[3]);

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
  //   TriggerPort: '<S392>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE_hy,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S392>/In'
    imperix_balance_ctrl_B.In_ge =
      imperix_balance_ctrl_B.MovingAverage.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S78>/Sample and Hold'

  // DataTypeConversion: '<S187>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double3'
  //   Gain: '<S1>/Gain11'
  //   Sum: '<S78>/Sum1'

  imperix_balance_ctrl_B.DataTypeConversion = static_cast<real32_T>
    (imperix_balance_ctrl_P.IM.Tb / imperix_balance_ctrl_P.IM.TN *
     (imperix_balance_ctrl_B.ADC_g - imperix_balance_ctrl_B.In_ge));

  // S-Function (PROBE): '<S187>/S-Function'
  Te = imperix_balance_ctrl_B.DataTypeConversion;

  // Gain: '<S1>/Gain21'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.Vc_ref;
  for (idx_1 = 0; idx_1 < 6; idx_1++) {
    rtb_Gain31[idx_1] = ssq * rtb_Bias[idx_1];
  }

  // End of Gain: '<S1>/Gain21'

  // DataTypeConversion: '<S189>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_o = static_cast<real32_T>
    (rtb_Gain31[4]);

  // S-Function (PROBE): '<S189>/S-Function'
  Vc5 = imperix_balance_ctrl_B.DataTypeConversion_o;

  // DataTypeConversion: '<S191>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_k = static_cast<real32_T>
    (rtb_Gain31[5]);

  // S-Function (PROBE): '<S191>/S-Function'
  Vc6 = imperix_balance_ctrl_B.DataTypeConversion_k;

  // Gain: '<S1>/Gain25'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S193>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain25'

  imperix_balance_ctrl_B.DataTypeConversion_kx = static_cast<real32_T>(ssq *
    ie_idx_0);

  // S-Function (PROBE): '<S193>/S-Function'
  ie1 = imperix_balance_ctrl_B.DataTypeConversion_kx;

  // Gain: '<S1>/Gain9'
  rtb_Sum13 = 1.0 / (1.4142135623730951 * imperix_balance_ctrl_P.IM.IN);

  // DataTypeConversion: '<S195>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_balance_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(rtb_Sum13 *
    rtb_Gain1[0]);

  // S-Function (PROBE): '<S195>/S-Function'
  im_alp = imperix_balance_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S197>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_balance_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(rtb_Sum13 *
    rtb_Gain1[1]);

  // S-Function (PROBE): '<S197>/S-Function'
  im_bet = imperix_balance_ctrl_B.DataTypeConversion_i;

  // Gain: '<S1>/Gain24'
  rtb_Sum13 = 1.0 / imperix_balance_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S199>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain24'

  imperix_balance_ctrl_B.DataTypeConversion_m = static_cast<real32_T>(rtb_Sum13 *
    rtb_ie_sat[0]);

  // S-Function (PROBE): '<S199>/S-Function'
  ie1_r = imperix_balance_ctrl_B.DataTypeConversion_m;

  // DataTypeConversion: '<S201>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain26'
  //   MATLAB Function: '<S27>/Saturation'

  imperix_balance_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.vo_max * tmp_2);

  // S-Function (PROBE): '<S201>/S-Function'
  vo_r = imperix_balance_ctrl_B.DataTypeConversion_p;

  // DataTypeConversion: '<S203>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain24'

  imperix_balance_ctrl_B.DataTypeConversion_iu = static_cast<real32_T>(rtb_Sum13
    * rtb_ie_sat[1]);

  // S-Function (PROBE): '<S203>/S-Function'
  ie2_r = imperix_balance_ctrl_B.DataTypeConversion_iu;

  // DataTypeConversion: '<S205>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'

  imperix_balance_ctrl_B.DataTypeConversion_pe = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.FrN * rtb_Gain14);

  // S-Function (PROBE): '<S205>/S-Function'
  Frd = imperix_balance_ctrl_B.DataTypeConversion_pe;

  // DataTypeConversion: '<S207>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain25'

  imperix_balance_ctrl_B.DataTypeConversion_d = static_cast<real32_T>(ssq *
    ie_idx_1);

  // S-Function (PROBE): '<S207>/S-Function'
  ie2 = imperix_balance_ctrl_B.DataTypeConversion_d;

  // Gain: '<S1>/Gain1'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.is_max;
  for (b_idx = 0; b_idx < 6; b_idx++) {
    rtb_Gain1_mw[b_idx] *= ssq;
  }

  // End of Gain: '<S1>/Gain1'

  // DataTypeConversion: '<S209>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_id = static_cast<real32_T>
    (rtb_Gain1_mw[0]);

  // S-Function (PROBE): '<S209>/S-Function'
  is1 = imperix_balance_ctrl_B.DataTypeConversion_id;

  // S-Function (sdspstatfcns): '<S86>/Mean'
  rtb_Gain14 = rtb_Bias[0];
  for (b_idx = 4; b_idx >= 0; b_idx--) {
    rtb_Gain14 += rtb_Bias[5 - b_idx];
  }

  rtb_Gain14 /= 6.0;

  // End of S-Function (sdspstatfcns): '<S86>/Mean'

  // DataTypeConversion: '<S211>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain22'

  imperix_balance_ctrl_B.DataTypeConversion_g = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.Vc_ref * rtb_Gain14);

  // S-Function (PROBE): '<S211>/S-Function'
  Vc_m = imperix_balance_ctrl_B.DataTypeConversion_g;

  // DataTypeConversion: '<S213>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain20'

  imperix_balance_ctrl_B.DataTypeConversion_gb = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.PCC.u_max * rtb_Sum1_fi);

  // S-Function (PROBE): '<S213>/S-Function'
  iP_r = imperix_balance_ctrl_B.DataTypeConversion_gb;

  // DataTypeConversion: '<S215>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_balance_ctrl_B.DataTypeConversion_h = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.PCC.u_max * rtb_Gain1_n[0]);

  // S-Function (PROBE): '<S215>/S-Function'
  iP = imperix_balance_ctrl_B.DataTypeConversion_h;

  // Gain: '<S1>/Gain16'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.vy_max;

  // DataTypeConversion: '<S217>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_balance_ctrl_B.DataTypeConversion_m1 = static_cast<real32_T>(ssq *
    rtb_Gain1_k_idx_1);

  // S-Function (PROBE): '<S217>/S-Function'
  vm_q = imperix_balance_ctrl_B.DataTypeConversion_m1;

  // DataTypeConversion: '<S219>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'

  imperix_balance_ctrl_B.DataTypeConversion_dr = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.FrN * rtb_F);

  // S-Function (PROBE): '<S219>/S-Function'
  Frd_r = imperix_balance_ctrl_B.DataTypeConversion_dr;

  // DataTypeConversion: '<S221>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain7'

  imperix_balance_ctrl_B.DataTypeConversion_pw = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.wb * rtb_w);

  // S-Function (PROBE): '<S221>/S-Function'
  wm_r = imperix_balance_ctrl_B.DataTypeConversion_pw;

  // DataTypeConversion: '<S223>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'

  imperix_balance_ctrl_B.DataTypeConversion_mx = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isdN * rtb_Switch_f_idx_0);

  // S-Function (PROBE): '<S223>/S-Function'
  im_d = imperix_balance_ctrl_B.DataTypeConversion_mx;

  // DataTypeConversion: '<S225>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'

  imperix_balance_ctrl_B.DataTypeConversion_l = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isdN * D);

  // S-Function (PROBE): '<S225>/S-Function'
  imd_r = imperix_balance_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S227>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain2'

  imperix_balance_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isqN * rtb_Switch_f_idx_1);

  // S-Function (PROBE): '<S227>/S-Function'
  im_q = imperix_balance_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S229>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain3'

  imperix_balance_ctrl_B.DataTypeConversion_d4 = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isqN * rtb_Saturation);

  // S-Function (PROBE): '<S229>/S-Function'
  imq_r = imperix_balance_ctrl_B.DataTypeConversion_d4;

  // DataTypeConversion: '<S231>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_pw0 = static_cast<real32_T>
    (rtb_Gain1_mw[1]);

  // S-Function (PROBE): '<S231>/S-Function'
  is2 = imperix_balance_ctrl_B.DataTypeConversion_pw0;

  // DataTypeConversion: '<S233>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_balance_ctrl_B.DataTypeConversion_ez = static_cast<real32_T>(ssq *
    rtb_Gain1_k_idx_0);

  // S-Function (PROBE): '<S233>/S-Function'
  vm_d = imperix_balance_ctrl_B.DataTypeConversion_ez;

  // DataTypeConversion: '<S235>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain27'
  //   UnitDelay: '<S393>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_n = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.Vc_ref *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE);

  // S-Function (PROBE): '<S235>/S-Function'
  Vc_m_f = imperix_balance_ctrl_B.DataTypeConversion_n;

  // DataTypeConversion: '<S237>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_lu = static_cast<real32_T>
    (rtb_Gain31[0]);

  // S-Function (PROBE): '<S237>/S-Function'
  Vc1 = imperix_balance_ctrl_B.DataTypeConversion_lu;

  // Gain: '<S1>/Gain18'
  ssq = 1.0 / (imperix_balance_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S239>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_balance_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(ssq *
    rtb_im_idx_1);

  // S-Function (PROBE): '<S239>/S-Function'
  im_bet_KF = imperix_balance_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S241>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_balance_ctrl_B.DataTypeConversion_ir = static_cast<real32_T>(ssq *
    rtb_im_idx_0);

  // S-Function (PROBE): '<S241>/S-Function'
  im_alp_KF = imperix_balance_ctrl_B.DataTypeConversion_ir;

  // Gain: '<S1>/Gain19'
  ssq = 1.0 / imperix_balance_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S243>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_balance_ctrl_B.DataTypeConversion_d5 = static_cast<real32_T>(ssq *
    rtb_Fr_idx_1);

  // S-Function (PROBE): '<S243>/S-Function'
  Fr_bet = imperix_balance_ctrl_B.DataTypeConversion_d5;

  // DataTypeConversion: '<S245>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_balance_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(ssq *
    rtb_Fr_idx_0);

  // S-Function (PROBE): '<S245>/S-Function'
  Fr_alp = imperix_balance_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S247>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain23'

  imperix_balance_ctrl_B.DataTypeConversion_fy = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.TN * rtb_Te);

  // S-Function (PROBE): '<S247>/S-Function'
  Te_KF = imperix_balance_ctrl_B.DataTypeConversion_fy;

  // DataTypeConversion: '<S249>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_l5 = static_cast<real32_T>
    (rtb_Gain31[1]);

  // S-Function (PROBE): '<S249>/S-Function'
  Vc2 = imperix_balance_ctrl_B.DataTypeConversion_l5;

  // DataTypeConversion: '<S251>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_iw = static_cast<real32_T>
    (rtb_Gain31[2]);

  // S-Function (PROBE): '<S251>/S-Function'
  Vc3 = imperix_balance_ctrl_B.DataTypeConversion_iw;

  // DataTypeConversion: '<S253>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fo = static_cast<real32_T>
    (rtb_Gain1_mw[2]);

  // S-Function (PROBE): '<S253>/S-Function'
  is3 = imperix_balance_ctrl_B.DataTypeConversion_fo;

  // DataTypeConversion: '<S255>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_a = static_cast<real32_T>
    (rtb_Gain31[3]);

  // S-Function (PROBE): '<S255>/S-Function'
  Vc4 = imperix_balance_ctrl_B.DataTypeConversion_a;

  // Gain: '<S1>/Gain28'
  ssq = 1.0 / imperix_balance_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S257>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain28'
  //   UnitDelay: '<S160>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_l4 = static_cast<real32_T>(ssq *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1]);

  // S-Function (PROBE): '<S257>/S-Function'
  ie2_rf = imperix_balance_ctrl_B.DataTypeConversion_l4;

  // DataTypeConversion: '<S259>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fs = static_cast<real32_T>
    (rtb_Gain1_mw[3]);

  // S-Function (PROBE): '<S259>/S-Function'
  is4 = imperix_balance_ctrl_B.DataTypeConversion_fs;

  // DataTypeConversion: '<S261>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ba = static_cast<real32_T>
    (rtb_Gain1_mw[4]);

  // S-Function (PROBE): '<S261>/S-Function'
  is5 = imperix_balance_ctrl_B.DataTypeConversion_ba;

  // DataTypeConversion: '<S263>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fz = static_cast<real32_T>
    (rtb_Gain1_mw[5]);

  // S-Function (PROBE): '<S263>/S-Function'
  is6 = imperix_balance_ctrl_B.DataTypeConversion_fz;

  // DataTypeConversion: '<S265>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain4'

  imperix_balance_ctrl_B.DataTypeConversion_bg = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.wb * rtb_Gain5);

  // S-Function (PROBE): '<S265>/S-Function'
  wm = imperix_balance_ctrl_B.DataTypeConversion_bg;

  // DataTypeConversion: '<S267>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain28'
  //   UnitDelay: '<S160>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_fn = static_cast<real32_T>(ssq *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0]);

  // S-Function (PROBE): '<S267>/S-Function'
  ie1_rf = imperix_balance_ctrl_B.DataTypeConversion_fn;

  // S-Function (TUNABLE_PARAM): '<S701>/S-Function'
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

  // Sum: '<S160>/Sum' incorporates:
  //   Gain: '<S160>/Gain1'
  //   Gain: '<S160>/Gain2'
  //   UnitDelay: '<S160>/Unit Delay1'

  imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0] = (1.0 -
    imperix_balance_ctrl_P.CCC.alpha) * rtb_ie_sat[0] +
    imperix_balance_ctrl_P.CCC.alpha *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0];
  imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1] = (1.0 -
    imperix_balance_ctrl_P.CCC.alpha) * rtb_ie_sat[1] +
    imperix_balance_ctrl_P.CCC.alpha *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1];

  // RateTransition generated from: '<S27>/Input format'
  if (tmp_5) {
    imperix_balance_ctrl_DW.TmpRTBAtInputformatInport2_Buff = rtb_Sum1_fi;

    // RateTransition generated from: '<S27>/Input format'
    imperix_balance_ctrl_DW.TmpRTBAtInputformatInport3_Buff[0] = rtb_Switch;
    imperix_balance_ctrl_DW.TmpRTBAtInputformatInport3_Buff[1] = rtb_Sum;

    // RateTransition generated from: '<S27>/Input format'
    imperix_balance_ctrl_DW.TmpRTBAtInputformatInport4_Buff[0] =
      rtb_UnitDelay_idx_0;
    imperix_balance_ctrl_DW.TmpRTBAtInputformatInport4_Buff[1] =
      rtb_UnitDelay_idx_1;

    // RateTransition generated from: '<S27>/Input format'
    imperix_balance_ctrl_DW.TmpRTBAtInputformatInport5_Buff = rtb_Sum_b;
  }

  // Gain: '<S86>/Gain' incorporates:
  //   Math: '<S86>/Square'

  ssq = imperix_balance_ctrl_P.M2C.C * 0.5;
  for (b_idx = 0; b_idx < 6; b_idx++) {
    // Math: '<S86>/Square'
    rtb_F = rtb_Bias[b_idx];
    rtb_Bias[b_idx] = rtb_F * rtb_F * ssq;
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

  // DataTypeConversion: '<S171>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ao = static_cast<real32_T>
    (rtb_Gain2[0]);

  // S-Function (PROBE): '<S171>/S-Function'
  D1 = imperix_balance_ctrl_B.DataTypeConversion_ao;

  // DataTypeConversion: '<S173>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ay = static_cast<real32_T>
    (rtb_Gain2[1]);

  // S-Function (PROBE): '<S173>/S-Function'
  D2 = imperix_balance_ctrl_B.DataTypeConversion_ay;

  // DataTypeConversion: '<S175>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_hd = static_cast<real32_T>
    (rtb_Gain2[2]);

  // S-Function (PROBE): '<S175>/S-Function'
  D3 = imperix_balance_ctrl_B.DataTypeConversion_hd;

  // DataTypeConversion: '<S177>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_gh = static_cast<real32_T>
    (rtb_Gain2[3]);

  // S-Function (PROBE): '<S177>/S-Function'
  D4 = imperix_balance_ctrl_B.DataTypeConversion_gh;

  // DataTypeConversion: '<S179>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ns = static_cast<real32_T>
    (rtb_Gain2[4]);

  // S-Function (PROBE): '<S179>/S-Function'
  D5 = imperix_balance_ctrl_B.DataTypeConversion_ns;

  // DataTypeConversion: '<S181>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ep = static_cast<real32_T>
    (rtb_Gain2[5]);

  // S-Function (PROBE): '<S181>/S-Function'
  D6 = imperix_balance_ctrl_B.DataTypeConversion_ep;

  // DataTypeConversion: '<S32>/Data Type Conversion2' incorporates:
  //   Constant: '<S32>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value);

  // S-Function (TUNABLE_PARAM): '<S691>/S-Function'
  imperix_balance_ctrl_B.SFunction_g = VSETEN;

  // S-Function (TUNABLE_PARAM): '<S697>/S-Function'
  imperix_balance_ctrl_B.SFunction_c4 = enable_FP;

  // Outputs for Atomic SubSystem: '<S182>/generation'
  // S-Function (CB_PWM): '<S183>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_balance_ctrl_B.SFunction_g, 2);

  // End of Outputs for SubSystem: '<S182>/generation'

  // DataTypeConversion: '<S33>/Data Type Conversion2' incorporates:
  //   Constant: '<S33>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_b);

  // S-Function (TUNABLE_PARAM): '<S703>/S-Function'
  imperix_balance_ctrl_B.SFunction_j = INDM;

  // Outputs for Atomic SubSystem: '<S184>/generation'
  // S-Function (CB_PWM): '<S185>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_balance_ctrl_B.SFunction_j, 2);

  // End of Outputs for SubSystem: '<S184>/generation'

  // DataTypeConversion: '<S374>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S173>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_le = static_cast<real32_T>
    (rtb_Gain2[1]);

  // DataTypeConversion: '<S374>/Data Type Conversion2' incorporates:
  //   Constant: '<S374>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_l = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_j);

  // Outputs for Atomic SubSystem: '<S378>/generation'
  // S-Function (CB_PWM): '<S379>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2,
                     imperix_balance_ctrl_B.DataTypeConversion1_le, 1);

  // End of Outputs for SubSystem: '<S378>/generation'

  // DataTypeConversion: '<S375>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S173>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_pv = static_cast<real32_T>
    (rtb_Gain2[1]);

  // DataTypeConversion: '<S375>/Data Type Conversion2' incorporates:
  //   Constant: '<S375>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_o);

  // Outputs for Atomic SubSystem: '<S380>/generation'
  // S-Function (CB_PWM): '<S381>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6,
                     imperix_balance_ctrl_B.DataTypeConversion1_pv, 1);

  // End of Outputs for SubSystem: '<S380>/generation'

  // DataTypeConversion: '<S376>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S173>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_Gain2[1]);

  // DataTypeConversion: '<S376>/Data Type Conversion2' incorporates:
  //   Constant: '<S376>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_l);

  // Outputs for Atomic SubSystem: '<S382>/generation'
  // S-Function (CB_PWM): '<S383>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3,
                     imperix_balance_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S382>/generation'

  // DataTypeConversion: '<S377>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S173>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_Gain2[1]);

  // DataTypeConversion: '<S377>/Data Type Conversion2' incorporates:
  //   Constant: '<S377>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_oo);

  // Outputs for Atomic SubSystem: '<S384>/generation'
  // S-Function (CB_PWM): '<S385>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7,
                     imperix_balance_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S384>/generation'

  // Sum: '<S393>/Sum' incorporates:
  //   Gain: '<S393>/Gain1'
  //   Gain: '<S393>/Gain2'
  //   UnitDelay: '<S393>/Unit Delay1'

  imperix_balance_ctrl_DW.UnitDelay1_DSTATE = (1.0 -
    imperix_balance_ctrl_P.TEC.alpha) * rtb_Gain14 +
    imperix_balance_ctrl_P.TEC.alpha * imperix_balance_ctrl_DW.UnitDelay1_DSTATE;

  // DeadZone: '<S423>/DeadZone'
  if (rtb_DeadZone > imperix_balance_ctrl_P.TEC.u_max) {
    rtb_DeadZone -= imperix_balance_ctrl_P.TEC.u_max;
  } else if (rtb_DeadZone >= -imperix_balance_ctrl_P.TEC.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_balance_ctrl_P.TEC.u_max;
  }

  // End of DeadZone: '<S423>/DeadZone'

  // Gain: '<S428>/Integral Gain'
  rtb_Integrator_b *= imperix_balance_ctrl_P.TEC.ki;

  // DataTypeConversion: '<S560>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S175>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_Gain2[2]);

  // DataTypeConversion: '<S560>/Data Type Conversion2' incorporates:
  //   Constant: '<S560>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_p);

  // Outputs for Atomic SubSystem: '<S564>/generation'
  // S-Function (CB_PWM): '<S565>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_balance_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S564>/generation'

  // DataTypeConversion: '<S561>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S175>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_eo = static_cast<real32_T>
    (rtb_Gain2[2]);

  // DataTypeConversion: '<S561>/Data Type Conversion2' incorporates:
  //   Constant: '<S561>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_pr);

  // Outputs for Atomic SubSystem: '<S566>/generation'
  // S-Function (CB_PWM): '<S567>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4,
                     imperix_balance_ctrl_B.DataTypeConversion1_eo, 0);

  // End of Outputs for SubSystem: '<S566>/generation'

  // DataTypeConversion: '<S562>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S175>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (rtb_Gain2[2]);

  // DataTypeConversion: '<S562>/Data Type Conversion2' incorporates:
  //   Constant: '<S562>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_c);

  // Outputs for Atomic SubSystem: '<S568>/generation'
  // S-Function (CB_PWM): '<S569>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1,
                     imperix_balance_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S568>/generation'

  // DataTypeConversion: '<S563>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S175>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_Gain2[2]);

  // DataTypeConversion: '<S563>/Data Type Conversion2' incorporates:
  //   Constant: '<S563>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ll);

  // Outputs for Atomic SubSystem: '<S570>/generation'
  // S-Function (CB_PWM): '<S571>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5,
                     imperix_balance_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S570>/generation'

  // DeadZone: '<S601>/DeadZone'
  if (rtb_DeadZone_o > imperix_balance_ctrl_P.PCC.u_max) {
    rtb_DeadZone_o -= imperix_balance_ctrl_P.PCC.u_max;
  } else if (rtb_DeadZone_o >= -imperix_balance_ctrl_P.PCC.u_max) {
    rtb_DeadZone_o = 0.0;
  } else {
    rtb_DeadZone_o -= -imperix_balance_ctrl_P.PCC.u_max;
  }

  // End of DeadZone: '<S601>/DeadZone'

  // Gain: '<S606>/Integral Gain'
  rtb_IntegralGain_m *= imperix_balance_ctrl_P.PCC.ki;

  // DataTypeConversion: '<S633>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S177>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_Gain2[3]);

  // DataTypeConversion: '<S633>/Data Type Conversion2' incorporates:
  //   Constant: '<S633>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_n);

  // Outputs for Atomic SubSystem: '<S637>/generation'
  // S-Function (CB_PWM): '<S638>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2,
                     imperix_balance_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S637>/generation'

  // DataTypeConversion: '<S634>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S177>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_Gain2[3]);

  // DataTypeConversion: '<S634>/Data Type Conversion2' incorporates:
  //   Constant: '<S634>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_jk = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_k);

  // Outputs for Atomic SubSystem: '<S639>/generation'
  // S-Function (CB_PWM): '<S640>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6,
                     imperix_balance_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S639>/generation'

  // DataTypeConversion: '<S635>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S177>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (rtb_Gain2[3]);

  // DataTypeConversion: '<S635>/Data Type Conversion2' incorporates:
  //   Constant: '<S635>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_py);

  // Outputs for Atomic SubSystem: '<S641>/generation'
  // S-Function (CB_PWM): '<S642>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3,
                     imperix_balance_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S641>/generation'

  // DataTypeConversion: '<S636>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S177>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_Gain2[3]);

  // DataTypeConversion: '<S636>/Data Type Conversion2' incorporates:
  //   Constant: '<S636>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ng);

  // Outputs for Atomic SubSystem: '<S643>/generation'
  // S-Function (CB_PWM): '<S644>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7,
                     imperix_balance_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S643>/generation'

  // DataTypeConversion: '<S645>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S179>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (rtb_Gain2[4]);

  // DataTypeConversion: '<S645>/Data Type Conversion2' incorporates:
  //   Constant: '<S645>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ji);

  // Outputs for Atomic SubSystem: '<S649>/generation'
  // S-Function (CB_PWM): '<S650>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8,
                     imperix_balance_ctrl_B.DataTypeConversion1_al, 0);

  // End of Outputs for SubSystem: '<S649>/generation'

  // DataTypeConversion: '<S646>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S179>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_Gain2[4]);

  // DataTypeConversion: '<S646>/Data Type Conversion2' incorporates:
  //   Constant: '<S646>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_of);

  // Outputs for Atomic SubSystem: '<S651>/generation'
  // S-Function (CB_PWM): '<S652>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12,
                     imperix_balance_ctrl_B.DataTypeConversion1_k, 0);

  // End of Outputs for SubSystem: '<S651>/generation'

  // DataTypeConversion: '<S647>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S179>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (rtb_Gain2[4]);

  // DataTypeConversion: '<S647>/Data Type Conversion2' incorporates:
  //   Constant: '<S647>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_h);

  // Outputs for Atomic SubSystem: '<S653>/generation'
  // S-Function (CB_PWM): '<S654>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9,
                     imperix_balance_ctrl_B.DataTypeConversion1_l4, 0);

  // End of Outputs for SubSystem: '<S653>/generation'

  // DataTypeConversion: '<S648>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S179>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (rtb_Gain2[4]);

  // DataTypeConversion: '<S648>/Data Type Conversion2' incorporates:
  //   Constant: '<S648>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_nc);

  // Outputs for Atomic SubSystem: '<S655>/generation'
  // S-Function (CB_PWM): '<S656>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13,
                     imperix_balance_ctrl_B.DataTypeConversion1_bg, 0);

  // End of Outputs for SubSystem: '<S655>/generation'

  // DataTypeConversion: '<S657>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S181>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_Gain2[5]);

  // DataTypeConversion: '<S657>/Data Type Conversion2' incorporates:
  //   Constant: '<S657>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_f);

  // Outputs for Atomic SubSystem: '<S661>/generation'
  // S-Function (CB_PWM): '<S662>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10,
                     imperix_balance_ctrl_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S661>/generation'

  // DataTypeConversion: '<S658>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S181>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (rtb_Gain2[5]);

  // DataTypeConversion: '<S658>/Data Type Conversion2' incorporates:
  //   Constant: '<S658>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_i);

  // Outputs for Atomic SubSystem: '<S663>/generation'
  // S-Function (CB_PWM): '<S664>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14,
                     imperix_balance_ctrl_B.DataTypeConversion1_o, 0);

  // End of Outputs for SubSystem: '<S663>/generation'

  // DataTypeConversion: '<S659>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S181>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (rtb_Gain2[5]);

  // DataTypeConversion: '<S659>/Data Type Conversion2' incorporates:
  //   Constant: '<S659>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_a);

  // Outputs for Atomic SubSystem: '<S665>/generation'
  // S-Function (CB_PWM): '<S666>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11,
                     imperix_balance_ctrl_B.DataTypeConversion1_ay, 0);

  // End of Outputs for SubSystem: '<S665>/generation'

  // DataTypeConversion: '<S660>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S181>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (rtb_Gain2[5]);

  // DataTypeConversion: '<S660>/Data Type Conversion2' incorporates:
  //   Constant: '<S660>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ns);

  // Outputs for Atomic SubSystem: '<S667>/generation'
  // S-Function (CB_PWM): '<S668>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15,
                     imperix_balance_ctrl_B.DataTypeConversion1_pf, 0);

  // End of Outputs for SubSystem: '<S667>/generation'

  // DataTypeConversion: '<S676>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S171>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_als = static_cast<real32_T>
    (rtb_Gain2[0]);

  // DataTypeConversion: '<S676>/Data Type Conversion2' incorporates:
  //   Constant: '<S676>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_fa);

  // Outputs for Atomic SubSystem: '<S680>/generation'
  // S-Function (CB_PWM): '<S681>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_balance_ctrl_B.DataTypeConversion1_als, 1);

  // End of Outputs for SubSystem: '<S680>/generation'

  // DataTypeConversion: '<S677>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S171>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (rtb_Gain2[0]);

  // DataTypeConversion: '<S677>/Data Type Conversion2' incorporates:
  //   Constant: '<S677>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_hr);

  // Outputs for Atomic SubSystem: '<S682>/generation'
  // S-Function (CB_PWM): '<S683>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4,
                     imperix_balance_ctrl_B.DataTypeConversion1_ig, 1);

  // End of Outputs for SubSystem: '<S682>/generation'

  // DataTypeConversion: '<S678>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S171>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_Gain2[0]);

  // DataTypeConversion: '<S678>/Data Type Conversion2' incorporates:
  //   Constant: '<S678>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_at);

  // Outputs for Atomic SubSystem: '<S684>/generation'
  // S-Function (CB_PWM): '<S685>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1,
                     imperix_balance_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S684>/generation'

  // DataTypeConversion: '<S679>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S171>/Data Type Conversion'

  imperix_balance_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (rtb_Gain2[0]);

  // DataTypeConversion: '<S679>/Data Type Conversion2' incorporates:
  //   Constant: '<S679>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_cq);

  // Outputs for Atomic SubSystem: '<S686>/generation'
  // S-Function (CB_PWM): '<S687>/PWM' incorporates:
  //   Constant: '<S136>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5,
                     imperix_balance_ctrl_B.DataTypeConversion1_gw, 1);

  // End of Outputs for SubSystem: '<S686>/generation'

  // S-Function (TUNABLE_PARAM): '<S711>/S-Function'
  imperix_balance_ctrl_B.SFunction_fd = INDS;

  // Gain: '<S1>/Gain8'
  imperix_balance_ctrl_B.Gain8 = imperix_balance_ctrl_P.Gain8_Gain *
    imperix_balance_ctrl_B.SFunction_fd;

  // S-Function (DAC): '<S147>/DAC'
  Dac_SetVoltage(3, imperix_balance_ctrl_B.Gain8, 0);

  // S-Function (TUNABLE_PARAM): '<S707>/S-Function'
  imperix_balance_ctrl_B.SFunction_o = INDT;

  // Gain: '<S1>/Gain6'
  imperix_balance_ctrl_B.Gain6 = imperix_balance_ctrl_P.Gain6_Gain *
    imperix_balance_ctrl_B.SFunction_o;

  // S-Function (DAC): '<S149>/DAC'
  Dac_SetVoltage(0, imperix_balance_ctrl_B.Gain6, 0);

  // Update for DiscreteIntegrator: '<S356>/Integrator' incorporates:
  //   Gain: '<S348>/Kb'
  //   Gain: '<S353>/Integral Gain'
  //   Sum: '<S348>/SumI2'
  //   Sum: '<S348>/SumI4'

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

  // End of Update for DiscreteIntegrator: '<S356>/Integrator'

  // Update for DiscreteIntegrator: '<S304>/Integrator' incorporates:
  //   Gain: '<S296>/Kb'
  //   Gain: '<S301>/Integral Gain'
  //   Sum: '<S296>/SumI2'
  //   Sum: '<S296>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_k += (2.0 *
      imperix_balance_ctrl_P.FOC.kp_F * (D - rtb_Sum_l) +
      imperix_balance_ctrl_P.FOC.ki_F * idx_2) *
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

  // End of Update for DiscreteIntegrator: '<S304>/Integrator'

  // Update for DiscreteIntegrator: '<S486>/Integrator' incorporates:
  //   Gain: '<S478>/Kb'
  //   Gain: '<S483>/Integral Gain'
  //   Sum: '<S478>/SumI2'
  //   Sum: '<S478>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_h += ((rtb_Saturation_p -
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

  // End of Update for DiscreteIntegrator: '<S486>/Integrator'

  // Update for DiscreteIntegrator: '<S538>/Integrator' incorporates:
  //   Gain: '<S530>/Kb'
  //   Gain: '<S535>/Integral Gain'
  //   Sum: '<S530>/SumI2'
  //   Sum: '<S530>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_m += ((rtb_Saturation_h -
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

  // End of Update for DiscreteIntegrator: '<S538>/Integrator'

  // Switch: '<S421>/Switch1' incorporates:
  //   Constant: '<S421>/Clamping_zero'
  //   Constant: '<S421>/Constant'
  //   Constant: '<S421>/Constant2'
  //   RelationalOperator: '<S421>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_balance_ctrl_P.Clamping_zero_Value) {
    tmp_3 = imperix_balance_ctrl_P.Constant_Value_g;
  } else {
    tmp_3 = imperix_balance_ctrl_P.Constant2_Value;
  }

  // Switch: '<S421>/Switch2' incorporates:
  //   Constant: '<S421>/Clamping_zero'
  //   Constant: '<S421>/Constant3'
  //   Constant: '<S421>/Constant4'
  //   RelationalOperator: '<S421>/fix for DT propagation issue1'

  if (rtb_Integrator_b > imperix_balance_ctrl_P.Clamping_zero_Value) {
    tmp_4 = imperix_balance_ctrl_P.Constant3_Value;
  } else {
    tmp_4 = imperix_balance_ctrl_P.Constant4_Value;
  }

  // Switch: '<S421>/Switch' incorporates:
  //   Constant: '<S421>/Clamping_zero'
  //   Constant: '<S421>/Constant1'
  //   Logic: '<S421>/AND3'
  //   RelationalOperator: '<S421>/Equal1'
  //   RelationalOperator: '<S421>/Relational Operator'
  //   Switch: '<S421>/Switch1'
  //   Switch: '<S421>/Switch2'

  if ((imperix_balance_ctrl_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_3 ==
       tmp_4)) {
    rtb_Integrator_b = imperix_balance_ctrl_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S431>/Integrator' incorporates:
  //   Switch: '<S421>/Switch'

  imperix_balance_ctrl_DW.Integrator_DSTATE_p +=
    imperix_balance_ctrl_P.Integrator_gainval_n * rtb_Integrator_b;

  // Switch: '<S599>/Switch1' incorporates:
  //   Constant: '<S599>/Clamping_zero'
  //   Constant: '<S599>/Constant'
  //   Constant: '<S599>/Constant2'
  //   RelationalOperator: '<S599>/fix for DT propagation issue'

  if (rtb_DeadZone_o > imperix_balance_ctrl_P.Clamping_zero_Value_p) {
    tmp_3 = imperix_balance_ctrl_P.Constant_Value_gx;
  } else {
    tmp_3 = imperix_balance_ctrl_P.Constant2_Value_c;
  }

  // Switch: '<S599>/Switch2' incorporates:
  //   Constant: '<S599>/Clamping_zero'
  //   Constant: '<S599>/Constant3'
  //   Constant: '<S599>/Constant4'
  //   RelationalOperator: '<S599>/fix for DT propagation issue1'

  if (rtb_IntegralGain_m > imperix_balance_ctrl_P.Clamping_zero_Value_p) {
    tmp_4 = imperix_balance_ctrl_P.Constant3_Value_f;
  } else {
    tmp_4 = imperix_balance_ctrl_P.Constant4_Value_a;
  }

  // Switch: '<S599>/Switch' incorporates:
  //   Constant: '<S599>/Clamping_zero'
  //   Constant: '<S599>/Constant1'
  //   Logic: '<S599>/AND3'
  //   RelationalOperator: '<S599>/Equal1'
  //   RelationalOperator: '<S599>/Relational Operator'
  //   Switch: '<S599>/Switch1'
  //   Switch: '<S599>/Switch2'

  if ((imperix_balance_ctrl_P.Clamping_zero_Value_p != rtb_DeadZone_o) && (tmp_3
       == tmp_4)) {
    rtb_IntegralGain_m = imperix_balance_ctrl_P.Constant1_Value_e;
  }

  // Update for DiscreteIntegrator: '<S609>/Integrator' incorporates:
  //   Switch: '<S599>/Switch'

  imperix_balance_ctrl_DW.Integrator_DSTATE_a +=
    imperix_balance_ctrl_P.Integrator_gainval_b1 * rtb_IntegralGain_m;
}

// Model step function for TID1
void imperix_balance_ctrl_step1(void)  // Sample time: [0.00166667s, 0.0s]
{
  real_T rtb_obs[14];
  real_T rtb_TmpRTBAtInputformatInport1[6];
  real_T accumulatedData;
  int32_T i;
  int32_T i_0;
  real32_T rtb_obs_0[14];
  real32_T tmp[3];

  // RateTransition generated from: '<S27>/Input format'
  i = imperix_balance_ctrl_DW.TmpRTBAtInputformatInport1_Acti * 6;
  for (i_0 = 0; i_0 < 6; i_0++) {
    rtb_TmpRTBAtInputformatInport1[i_0] =
      imperix_balance_ctrl_DW.TmpRTBAtInputformatInport1_Buff[i_0 + i];
  }

  // End of RateTransition generated from: '<S27>/Input format'

  // MATLAB Function: '<S27>/Input format' incorporates:
  //   RateTransition generated from: '<S27>/Input format'
  //
  // MATLAB Function 'Closed_loop_control/ICB/Input format': '<S159>:1'
  // '<S159>:1:5'
  // '<S159>:1:6'
  // '<S159>:1:7'
  // '<S159>:1:10'
  memset(&rtb_obs[0], 0, 14U * sizeof(real_T));

  // '<S159>:1:13'
  accumulatedData = rtb_TmpRTBAtInputformatInport1[0];
  for (i = 0; i < 5; i++) {
    accumulatedData += rtb_TmpRTBAtInputformatInport1[i + 1];
  }

  accumulatedData /= 6.0;
  for (i = 0; i < 6; i++) {
    rtb_obs[i] = rtb_TmpRTBAtInputformatInport1[i] - accumulatedData;
  }

  // '<S159>:1:14'
  rtb_obs[6] = imperix_balance_ctrl_DW.TmpRTBAtInputformatInport2_Buff;

  // '<S159>:1:17'
  // '<S159>:1:18'
  rtb_obs[7] = imperix_balance_ctrl_DW.TmpRTBAtInputformatInport3_Buff[0];
  rtb_obs[9] = imperix_balance_ctrl_DW.TmpRTBAtInputformatInport4_Buff[0];
  rtb_obs[8] = imperix_balance_ctrl_DW.TmpRTBAtInputformatInport3_Buff[1];
  rtb_obs[10] = imperix_balance_ctrl_DW.TmpRTBAtInputformatInport4_Buff[1];

  // '<S159>:1:19'
  rtb_obs[11] = (imperix_balance_ctrl_DW.TmpRTBAtInputformatInport4_Buff[0] *
                 imperix_balance_ctrl_DW.TmpRTBAtInputformatInport3_Buff[0] +
                 imperix_balance_ctrl_DW.TmpRTBAtInputformatInport4_Buff[1] *
                 imperix_balance_ctrl_DW.TmpRTBAtInputformatInport3_Buff[1]) *
    1.5;
  rtb_obs[12] = (imperix_balance_ctrl_DW.TmpRTBAtInputformatInport3_Buff[0] *
                 imperix_balance_ctrl_DW.TmpRTBAtInputformatInport4_Buff[1] -
                 imperix_balance_ctrl_DW.TmpRTBAtInputformatInport4_Buff[0] *
                 imperix_balance_ctrl_DW.TmpRTBAtInputformatInport3_Buff[1]) *
    1.5;

  // '<S159>:1:22'
  rtb_obs[13] = imperix_balance_ctrl_DW.TmpRTBAtInputformatInport5_Buff;

  // DataTypeConversion: '<S27>/Cast To Double' incorporates:
  //   MATLAB Function: '<S27>/Input format'

  // '<S159>:1:25'
  // MATLAB Function 'Closed_loop_control/ICB/FFNN/MLFB': '<S162>:1'
  // '<S162>:1:5'
  for (i = 0; i < 14; i++) {
    rtb_obs_0[i] = static_cast<real32_T>(rtb_obs[i] /
      imperix_balance_ctrl_P.Xmax[i]);
  }

  // End of DataTypeConversion: '<S27>/Cast To Double'

  // MATLAB Function: '<S158>/MLFB'
  imperix_balance_ctrl_predict(rtb_obs_0, tmp);

  // RateTransition generated from: '<S27>/Saturation' incorporates:
  //   DataTypeConversion: '<S27>/Cast To Double1'
  //   Gain: '<S27>/Gain4'
  //   MATLAB Function: '<S158>/MLFB'

  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0] =
    imperix_balance_ctrl_P.Ymax[0] * tmp[0];
  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1] =
    imperix_balance_ctrl_P.Ymax[1] * tmp[1];
  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2] =
    imperix_balance_ctrl_P.Ymax[2] * tmp[2];
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

  // RateTransition generated from: '<S27>/Input format'
  for (int32_T i = 0; i < 6; i++) {
    imperix_balance_ctrl_DW.TmpRTBAtInputformatInport1_Buff[i +
      (imperix_balance_ctrl_DW.TmpRTBAtInputformatInport1_Acti == 0) * 6] =
      rtb_TmpRTBAtZeroOrderHold1Inpor[i];
  }

  imperix_balance_ctrl_DW.TmpRTBAtInputformatInport1_Acti = static_cast<int8_T>
    (imperix_balance_ctrl_DW.TmpRTBAtInputformatInport1_Acti == 0);

  // End of RateTransition generated from: '<S27>/Input format'
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

    // Start for S-Function (TUNABLE_PARAM): '<S689>/S-Function'
    F_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S699>/S-Function'
    w_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

    // Start for S-Function (ADC): '<S120>/ADC'
    Adc_ConfigureInput(3, 3.0518E-5F, 0.0F, 0);
    Adc_EnableSynchronousAveraging(3, 0);
    Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);
    imperix_MovingAverage_Start(&imperix_balance_ctrl_DW.MovingAverage_pn);

    // Start for S-Function (TUNABLE_PARAM): '<S693>/S-Function'
    reset_mean = 0.0F;                 // Tunable parameter initialization
    ConfigureTunable(&reset_mean, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S705>/S-Function'
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

    // Start for S-Function (TUNABLE_PARAM): '<S709>/S-Function'
    reset_KF = 1.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S695>/S-Function'
    magnetize = 1.0F;                  // Tunable parameter initialization
    ConfigureTunable(&magnetize, 0, 0, 0.0F, 1.0F);

    // Start for RateTransition generated from: '<S27>/Saturation'
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0] =
      imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1] =
      imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2] =
      imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;

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

    // Start for S-Function (PROBE): '<S187>/S-Function'
    ConfigureProbe(&Te, 0);

    // Start for S-Function (PROBE): '<S189>/S-Function'
    ConfigureProbe(&Vc5, 0);

    // Start for S-Function (PROBE): '<S191>/S-Function'
    ConfigureProbe(&Vc6, 0);

    // Start for S-Function (PROBE): '<S193>/S-Function'
    ConfigureProbe(&ie1, 0);

    // Start for S-Function (PROBE): '<S195>/S-Function'
    ConfigureProbe(&im_alp, 0);

    // Start for S-Function (PROBE): '<S197>/S-Function'
    ConfigureProbe(&im_bet, 0);

    // Start for S-Function (PROBE): '<S199>/S-Function'
    ConfigureProbe(&ie1_r, 0);

    // Start for S-Function (PROBE): '<S201>/S-Function'
    ConfigureProbe(&vo_r, 0);

    // Start for S-Function (PROBE): '<S203>/S-Function'
    ConfigureProbe(&ie2_r, 0);

    // Start for S-Function (PROBE): '<S205>/S-Function'
    ConfigureProbe(&Frd, 0);

    // Start for S-Function (PROBE): '<S207>/S-Function'
    ConfigureProbe(&ie2, 0);

    // Start for S-Function (PROBE): '<S209>/S-Function'
    ConfigureProbe(&is1, 0);

    // Start for S-Function (PROBE): '<S211>/S-Function'
    ConfigureProbe(&Vc_m, 0);

    // Start for S-Function (PROBE): '<S213>/S-Function'
    ConfigureProbe(&iP_r, 0);

    // Start for S-Function (PROBE): '<S215>/S-Function'
    ConfigureProbe(&iP, 0);

    // Start for S-Function (PROBE): '<S217>/S-Function'
    ConfigureProbe(&vm_q, 0);

    // Start for S-Function (PROBE): '<S219>/S-Function'
    ConfigureProbe(&Frd_r, 0);

    // Start for S-Function (PROBE): '<S221>/S-Function'
    ConfigureProbe(&wm_r, 0);

    // Start for S-Function (PROBE): '<S223>/S-Function'
    ConfigureProbe(&im_d, 0);

    // Start for S-Function (PROBE): '<S225>/S-Function'
    ConfigureProbe(&imd_r, 0);

    // Start for S-Function (PROBE): '<S227>/S-Function'
    ConfigureProbe(&im_q, 0);

    // Start for S-Function (PROBE): '<S229>/S-Function'
    ConfigureProbe(&imq_r, 0);

    // Start for S-Function (PROBE): '<S231>/S-Function'
    ConfigureProbe(&is2, 0);

    // Start for S-Function (PROBE): '<S233>/S-Function'
    ConfigureProbe(&vm_d, 0);

    // Start for S-Function (PROBE): '<S235>/S-Function'
    ConfigureProbe(&Vc_m_f, 0);

    // Start for S-Function (PROBE): '<S237>/S-Function'
    ConfigureProbe(&Vc1, 0);

    // Start for S-Function (PROBE): '<S239>/S-Function'
    ConfigureProbe(&im_bet_KF, 0);

    // Start for S-Function (PROBE): '<S241>/S-Function'
    ConfigureProbe(&im_alp_KF, 0);

    // Start for S-Function (PROBE): '<S243>/S-Function'
    ConfigureProbe(&Fr_bet, 0);

    // Start for S-Function (PROBE): '<S245>/S-Function'
    ConfigureProbe(&Fr_alp, 0);

    // Start for S-Function (PROBE): '<S247>/S-Function'
    ConfigureProbe(&Te_KF, 0);

    // Start for S-Function (PROBE): '<S249>/S-Function'
    ConfigureProbe(&Vc2, 0);

    // Start for S-Function (PROBE): '<S251>/S-Function'
    ConfigureProbe(&Vc3, 0);

    // Start for S-Function (PROBE): '<S253>/S-Function'
    ConfigureProbe(&is3, 0);

    // Start for S-Function (PROBE): '<S255>/S-Function'
    ConfigureProbe(&Vc4, 0);

    // Start for S-Function (PROBE): '<S257>/S-Function'
    ConfigureProbe(&ie2_rf, 0);

    // Start for S-Function (PROBE): '<S259>/S-Function'
    ConfigureProbe(&is4, 0);

    // Start for S-Function (PROBE): '<S261>/S-Function'
    ConfigureProbe(&is5, 0);

    // Start for S-Function (PROBE): '<S263>/S-Function'
    ConfigureProbe(&is6, 0);

    // Start for S-Function (PROBE): '<S265>/S-Function'
    ConfigureProbe(&wm, 0);

    // Start for S-Function (PROBE): '<S267>/S-Function'
    ConfigureProbe(&ie1_rf, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S701>/S-Function'
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

    // Start for S-Function (PROBE): '<S171>/S-Function'
    ConfigureProbe(&D1, 0);

    // Start for S-Function (PROBE): '<S173>/S-Function'
    ConfigureProbe(&D2, 0);

    // Start for S-Function (PROBE): '<S175>/S-Function'
    ConfigureProbe(&D3, 0);

    // Start for S-Function (PROBE): '<S177>/S-Function'
    ConfigureProbe(&D4, 0);

    // Start for S-Function (PROBE): '<S179>/S-Function'
    ConfigureProbe(&D5, 0);

    // Start for S-Function (PROBE): '<S181>/S-Function'
    ConfigureProbe(&D6, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S691>/S-Function'
    VSETEN = 1.0F;                     // Tunable parameter initialization
    ConfigureTunable(&VSETEN, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S697>/S-Function'
    enable_FP = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

    // Start for Atomic SubSystem: '<S182>/generation'
    // Start for S-Function (CB_PWM): '<S183>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S182>/generation'

    // Start for S-Function (TUNABLE_PARAM): '<S703>/S-Function'
    INDM = 0.0F;                       // Tunable parameter initialization
    ConfigureTunable(&INDM, 0, 0, 0.0F, 1.0F);

    // Start for Atomic SubSystem: '<S184>/generation'
    // Start for S-Function (CB_PWM): '<S185>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S184>/generation'

    // Start for Atomic SubSystem: '<S378>/generation'
    // Start for S-Function (CB_PWM): '<S379>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S378>/generation'

    // Start for Atomic SubSystem: '<S380>/generation'
    // Start for S-Function (CB_PWM): '<S381>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S380>/generation'

    // Start for Atomic SubSystem: '<S382>/generation'
    // Start for S-Function (CB_PWM): '<S383>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S382>/generation'

    // Start for Atomic SubSystem: '<S384>/generation'
    // Start for S-Function (CB_PWM): '<S385>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S384>/generation'

    // Start for Atomic SubSystem: '<S564>/generation'
    // Start for S-Function (CB_PWM): '<S565>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S564>/generation'

    // Start for Atomic SubSystem: '<S566>/generation'
    // Start for S-Function (CB_PWM): '<S567>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S566>/generation'

    // Start for Atomic SubSystem: '<S568>/generation'
    // Start for S-Function (CB_PWM): '<S569>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S568>/generation'

    // Start for Atomic SubSystem: '<S570>/generation'
    // Start for S-Function (CB_PWM): '<S571>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S570>/generation'

    // Start for Atomic SubSystem: '<S637>/generation'
    // Start for S-Function (CB_PWM): '<S638>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S637>/generation'

    // Start for Atomic SubSystem: '<S639>/generation'
    // Start for S-Function (CB_PWM): '<S640>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S639>/generation'

    // Start for Atomic SubSystem: '<S641>/generation'
    // Start for S-Function (CB_PWM): '<S642>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S641>/generation'

    // Start for Atomic SubSystem: '<S643>/generation'
    // Start for S-Function (CB_PWM): '<S644>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S643>/generation'

    // Start for Atomic SubSystem: '<S649>/generation'
    // Start for S-Function (CB_PWM): '<S650>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S649>/generation'

    // Start for Atomic SubSystem: '<S651>/generation'
    // Start for S-Function (CB_PWM): '<S652>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S651>/generation'

    // Start for Atomic SubSystem: '<S653>/generation'
    // Start for S-Function (CB_PWM): '<S654>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S653>/generation'

    // Start for Atomic SubSystem: '<S655>/generation'
    // Start for S-Function (CB_PWM): '<S656>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S655>/generation'

    // Start for Atomic SubSystem: '<S661>/generation'
    // Start for S-Function (CB_PWM): '<S662>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S661>/generation'

    // Start for Atomic SubSystem: '<S663>/generation'
    // Start for S-Function (CB_PWM): '<S664>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S663>/generation'

    // Start for Atomic SubSystem: '<S665>/generation'
    // Start for S-Function (CB_PWM): '<S666>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S665>/generation'

    // Start for Atomic SubSystem: '<S667>/generation'
    // Start for S-Function (CB_PWM): '<S668>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S667>/generation'

    // Start for Atomic SubSystem: '<S680>/generation'
    // Start for S-Function (CB_PWM): '<S681>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S680>/generation'

    // Start for Atomic SubSystem: '<S682>/generation'
    // Start for S-Function (CB_PWM): '<S683>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S682>/generation'

    // Start for Atomic SubSystem: '<S684>/generation'
    // Start for S-Function (CB_PWM): '<S685>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S684>/generation'

    // Start for Atomic SubSystem: '<S686>/generation'
    // Start for S-Function (CB_PWM): '<S687>/PWM' incorporates:
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

    // End of Start for SubSystem: '<S686>/generation'

    // Start for S-Function (TUNABLE_PARAM): '<S711>/S-Function'
    INDS = 0.0F;                       // Tunable parameter initialization
    ConfigureTunable(&INDS, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S707>/S-Function'
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

    // InitializeConditions for DiscreteIntegrator: '<S356>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE =
      imperix_balance_ctrl_P.SpeedPI_InitialConditionForInte;

    // InitializeConditions for UnitDelay: '<S81>/Unit Delay'
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[0] =
      imperix_balance_ctrl_P.UnitDelay_InitialCondition[0];
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[1] =
      imperix_balance_ctrl_P.UnitDelay_InitialCondition[1];

    // InitializeConditions for DiscreteIntegrator: '<S304>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_k =
      imperix_balance_ctrl_P.FluxPI_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S486>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_h =
      imperix_balance_ctrl_P.MCCPId_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S538>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_m =
      imperix_balance_ctrl_P.MCCPIq_InitialConditionForInteg;

    // InitializeConditions for UnitDelay: '<S393>/Unit Delay1'
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE =
      imperix_balance_ctrl_P.M2C.Vc_ref;

    // InitializeConditions for DiscreteIntegrator: '<S431>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_p =
      imperix_balance_ctrl_P.PIDController1_InitialCondition;

    // InitializeConditions for DiscreteIntegrator: '<S609>/Integrator'
    imperix_balance_ctrl_DW.Integrator_DSTATE_a =
      imperix_balance_ctrl_P.PCCPI_InitialConditionForIntegr;

    // InitializeConditions for RateTransition generated from: '<S27>/Saturation' 
    imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0] =
      imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;
    imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1] =
      imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;
    imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2] =
      imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;

    // InitializeConditions for UnitDelay: '<S160>/Unit Delay1'
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0] =
      imperix_balance_ctrl_P.UnitDelay1_InitialCondition;
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1] =
      imperix_balance_ctrl_P.UnitDelay1_InitialCondition;

    // InitializeConditions for RateTransition generated from: '<S27>/Input format' 
    for (i = 0; i < 6; i++) {
      imperix_balance_ctrl_DW.TmpRTBAtInputformatInport1_Buff[i] =
        imperix_balance_ctrl_P.TmpRTBAtInputformatInport1_Init;
    }

    // End of InitializeConditions for RateTransition generated from: '<S27>/Input format' 

    // SystemInitialize for MATLAB Function: '<S27>/Saturation'
    imperix_balance_ctrl_DW.Ix[1] = 0.0;
    imperix_balance_ctrl_DW.Ix[2] = 0.0;
    imperix_balance_ctrl_DW.Ix[0] = 1.0;
    imperix_balance_ctrl_DW.Ix[3] = 1.0;

    // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
    memset(&imperix_balance_ctrl_DW.Inx[0], 0, sizeof(real_T) << 4U);
    imperix_balance_ctrl_DW.Inx[0] = 1.0;
    imperix_balance_ctrl_DW.Inx[5] = 1.0;
    imperix_balance_ctrl_DW.Inx[10] = 1.0;
    imperix_balance_ctrl_DW.Inx[15] = 1.0;

    // SystemInitialize for Enabled SubSystem: '<S387>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_balance_ctrl_B.Fcn_m,
      &imperix_balance_ctrl_B.Fcn1_c, &imperix_balance_ctrl_P.Subsystempi2delay);

    // End of SystemInitialize for SubSystem: '<S387>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S387>/Subsystem1'
    imperix_bal_Subsystem1_Init(&imperix_balance_ctrl_B.Fcn_br,
      &imperix_balance_ctrl_B.Fcn1_f3, &imperix_balance_ctrl_P.Subsystem1);

    // End of SystemInitialize for SubSystem: '<S387>/Subsystem1'

    // SystemInitialize for Triggered SubSystem: '<S78>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S392>/In' incorporates:
    //   Outport: '<S392>/ '

    imperix_balance_ctrl_B.In_ge = imperix_balance_ctrl_P._Y0;

    // End of SystemInitialize for SubSystem: '<S78>/Sample and Hold'

    // SystemInitialize for Enabled SubSystem: '<S451>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_balance_ctrl_B.Fcn_b,
      &imperix_balance_ctrl_B.Fcn1_i,
      &imperix_balance_ctrl_P.Subsystempi2delay_p);

    // End of SystemInitialize for SubSystem: '<S451>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S451>/Subsystem1'
    imperix_bal_Subsystem1_Init(&imperix_balance_ctrl_B.Fcn_ou,
      &imperix_balance_ctrl_B.Fcn1_f, &imperix_balance_ctrl_P.Subsystem1_e);

    // End of SystemInitialize for SubSystem: '<S451>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S627>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S631>/Fcn' incorporates:
    //   Outport: '<S631>/dq'

    imperix_balance_ctrl_B.Fcn_o = imperix_balance_ctrl_P.dq_Y0[0];

    // SystemInitialize for Fcn: '<S631>/Fcn1' incorporates:
    //   Outport: '<S631>/dq'

    imperix_balance_ctrl_B.Fcn1_l = imperix_balance_ctrl_P.dq_Y0[1];

    // End of SystemInitialize for SubSystem: '<S627>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S627>/Subsystem1'
    // SystemInitialize for Fcn: '<S632>/Fcn' incorporates:
    //   Outport: '<S632>/dq'

    imperix_balance_ctrl_B.Fcn = imperix_balance_ctrl_P.dq_Y0_c[0];

    // SystemInitialize for Fcn: '<S632>/Fcn1' incorporates:
    //   Outport: '<S632>/dq'

    imperix_balance_ctrl_B.Fcn1 = imperix_balance_ctrl_P.dq_Y0_c[1];

    // End of SystemInitialize for SubSystem: '<S627>/Subsystem1'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S669>/In' incorporates:
    //   Outport: '<S669>/ '

    imperix_balance_ctrl_B.In_nz = imperix_balance_ctrl_P._Y0_e;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold1'
    // SystemInitialize for SignalConversion generated from: '<S670>/In' incorporates:
    //   Outport: '<S670>/ '

    imperix_balance_ctrl_B.In_g = imperix_balance_ctrl_P._Y0_m;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold2'
    // SystemInitialize for SignalConversion generated from: '<S671>/In' incorporates:
    //   Outport: '<S671>/ '

    imperix_balance_ctrl_B.In_m = imperix_balance_ctrl_P._Y0_eo;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold2'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold3'
    // SystemInitialize for SignalConversion generated from: '<S672>/In' incorporates:
    //   Outport: '<S672>/ '

    imperix_balance_ctrl_B.In_n = imperix_balance_ctrl_P._Y0_mx;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold3'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold4'
    // SystemInitialize for SignalConversion generated from: '<S673>/In' incorporates:
    //   Outport: '<S673>/ '

    imperix_balance_ctrl_B.In_k = imperix_balance_ctrl_P._Y0_h;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold4'

    // SystemInitialize for Triggered SubSystem: '<S92>/Sample and Hold5'
    // SystemInitialize for SignalConversion generated from: '<S674>/In' incorporates:
    //   Outport: '<S674>/ '

    imperix_balance_ctrl_B.In_c = imperix_balance_ctrl_P._Y0_o;

    // End of SystemInitialize for SubSystem: '<S92>/Sample and Hold5'

    // SystemInitialize for Triggered SubSystem: '<S93>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S675>/In' incorporates:
    //   Outport: '<S675>/ '

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
