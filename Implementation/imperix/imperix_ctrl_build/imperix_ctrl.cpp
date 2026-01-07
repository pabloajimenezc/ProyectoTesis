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
// Model version                  : 19.24
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Wed Jan  7 19:32:35 2026
//
#include "imperix_ctrl.h"
#include "rtwtypes.h"
#include "imperix_ctrl_private.h"
#include <math.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include <string.h>
#include "rt_defines.h"

int16_T* ix_raw_adc_ptr_0_0;
int16_T* ix_raw_adc_ptr_1_0;
int16_T* ix_raw_adc_ptr_2_0;
int16_T* ix_raw_adc_ptr_3_0;
int16_T* ix_raw_adc_ptr_4_0;
int16_T* ix_raw_adc_ptr_5_0;
real32_T is1;                          // Probe
real32_T is2;                          // Probe
int16_T* ix_raw_adc_ptr_6_0;
int16_T* ix_raw_adc_ptr_7_0;
int16_T* ix_raw_adc_ptr_0_1;
int16_T* ix_raw_adc_ptr_1_1;
int16_T* ix_raw_adc_ptr_2_1;
int16_T* ix_raw_adc_ptr_3_1;
real32_T Vc5;                          // Probe
real32_T Vc6;                          // Probe
int16_T* ix_raw_adc_ptr_4_1;
real32_T wm;                           // Probe
real32_T ie1;                          // Probe
real32_T ie2;                          // Probe
real32_T F_ref;                        // Tunable parameter
real32_T w_ref;                        // Tunable parameter
real32_T ie_r1;                        // Probe
real32_T ie_r2;                        // Probe
real32_T vo_r;                         // Probe
real32_T Frd;                          // Probe
real32_T Vc_m;                         // Probe
real32_T is3;                          // Probe
real32_T Vc_m_f;                       // Probe
real32_T iP_r;                         // Probe
real32_T iP;                           // Probe
real32_T vsP;                          // Probe
real32_T aV_mag;                       // Tunable parameter
real32_T D1;                           // Probe
real32_T D2;                           // Probe
real32_T D3;                           // Probe
real32_T D4;                           // Probe
real32_T D5;                           // Probe
real32_T D6;                           // Probe
real32_T is4;                          // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe
real32_T Vc1;                          // Probe
real32_T Vc2;                          // Probe
real32_T Vc3;                          // Probe
real32_T Vc4;                          // Probe
real32_T enable;                       // Tunable parameter
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
real32_T af_mag;                       // Tunable parameter

// Block signals (default storage)
B_imperix_ctrl_T imperix_ctrl_B;

// Block states (default storage)
DW_imperix_ctrl_T imperix_ctrl_DW;

// Real-time model
RT_MODEL_imperix_ctrl_T imperix_ctrl_M_ = RT_MODEL_imperix_ctrl_T();
RT_MODEL_imperix_ctrl_T *const imperix_ctrl_M = &imperix_ctrl_M_;

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
static void imperix_ctrl_trisolve_f(const real_T A[16], real_T B[16]);
static real_T imperix_ctrl_norm_c0(const real_T x[4]);
static real_T imperix_ctrl_maximum_e4(const real_T x[4]);
static real_T imperix_ctrl_xnrm2_b(int32_T n, const real_T x[16], int32_T ix0);
static void imperix_ctrl_xgemv_m(int32_T m, int32_T n, const real_T A[16],
  int32_T ia0, const real_T x[16], int32_T ix0, real_T y[4]);
static void imperix_ctrl_xgerc_e(int32_T m, int32_T n, real_T alpha1, int32_T
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
static void imperix_ctrl_repmat(const real_T a[2], real_T b[4]);
static void imperix_ctrl_trisolve(const real_T A[36], real_T B[36]);
static real_T imperix_ctrl_norm(const real_T x[6]);
static real_T imperix_ctrl_maximum(const real_T x[6]);
static real_T imperix_ctrl_xnrm2(int32_T n, const real_T x[36], int32_T ix0);
static void imperix_ctrl_xgemv(int32_T m, int32_T n, const real_T A[36], int32_T
  ia0, const real_T x[36], int32_T ix0, real_T y[6]);
static void imperix_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y[6], real_T A[36], int32_T ia0);
static real_T imperix_ctrl_KWIKfactor(const real_T Ac[216], const int32_T iC[36],
  int32_T nA, const real_T Linv[36], real_T RLinv[36], real_T D[36], real_T H[36],
  int32_T n);
static void imperix_ctrl_DropConstraint(int32_T kDrop, boolean_T iA[36], int32_T
  *nA, int32_T iC[36]);
static void imperix_ctrl_qpkwik(const real_T Linv[36], const real_T Hinv[36],
  const real_T f[6], const real_T Ac[216], const real_T b[36], boolean_T iA[36],
  int32_T maxiter, real_T FeasTol, real_T x[6], real_T lambda[36], int32_T
  *status);
static void imperix_ctrl_mpcActiveSetSolver(const real_T H[36], const real_T f[6],
  const real_T A[216], const real_T b[36], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[6],
  int32_T *exitflag, boolean_T iA[36]);
static void imperix_ctrl_trisolve_n(const real_T A[9], real_T B[9]);
static real_T imperix_ctrl_norm_c(const real_T x[3]);
static real_T imperix_ctrl_maximum_e(const real_T x[3]);
static real_T imperix_ctrl_xnrm2_p(int32_T n, const real_T x[9], int32_T ix0);
static void imperix_ctrl_xgemv_k(int32_T m, int32_T n, const real_T A[9],
  int32_T ia0, const real_T x[9], int32_T ix0, real_T y[3]);
static void imperix_ctrl_xgerc_a(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[3], real_T A[9], int32_T ia0);
static real_T imperix_ctrl_KWIKfactor_b(const real_T Ac[18], const int32_T iC[6],
  int32_T nA, const real_T Linv[9], real_T RLinv[9], real_T D[9], real_T H[9],
  int32_T n);
static void imperix_ctrl_DropConstraint_j(int32_T kDrop, boolean_T iA[6],
  int32_T *nA, int32_T iC[6]);
static void imperix_ctrl_qpkwik_j(const real_T Linv[9], const real_T Hinv[9],
  const real_T f[3], const real_T Ac[18], const real_T b[6], boolean_T iA[6],
  int32_T maxiter, real_T FeasTol, real_T x[3], real_T lambda[6], int32_T
  *status);
static void imperix_ct_mpcActiveSetSolver_k(const real_T H[9], const real_T f[3],
  const real_T A[18], const real_T b[6], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[3],
  int32_T *exitflag, boolean_T iA[6]);
int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
}

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

//
// System initialize for enable system:
//    '<S350>/Subsystem - pi//2 delay'
//    '<S571>/Subsystem - pi//2 delay'
//
void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_e, P_Subsystempi2delay_imperix_c_T *localP)
{
  // SystemInitialize for Outport: '<S457>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_e = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S350>/Subsystem - pi//2 delay'
//    '<S571>/Subsystem - pi//2 delay'
//
void imperix_c_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_k, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_e)
{
  // Outputs for Enabled SubSystem: '<S350>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S457>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S457>/Fcn' incorporates:
    //   Fcn: '<S457>/Fcn1'

    tmp = cos(rtu_wt);
    tmp_0 = sin(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 + rtu_dq_k * tmp;

    // Fcn: '<S457>/Fcn1'
    *rty_alpha_beta_e = -rtu_dq * tmp + rtu_dq_k * tmp_0;
  }

  // End of Outputs for SubSystem: '<S350>/Subsystem - pi//2 delay'
}

//
// System initialize for enable system:
//    '<S350>/Subsystem1'
//    '<S571>/Subsystem1'
//
void imperix_ctr_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_b, P_Subsystem1_imperix_ctrl_T *localP)
{
  // SystemInitialize for Outport: '<S458>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_b = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S350>/Subsystem1'
//    '<S571>/Subsystem1'
//
void imperix_ctrl_Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T rtu_dq_m,
  real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_b)
{
  // Outputs for Enabled SubSystem: '<S350>/Subsystem1' incorporates:
  //   EnablePort: '<S458>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S458>/Fcn' incorporates:
    //   Fcn: '<S458>/Fcn1'

    tmp = sin(rtu_wt);
    tmp_0 = cos(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 - rtu_dq_m * tmp;

    // Fcn: '<S458>/Fcn1'
    *rty_alpha_beta_b = rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S350>/Subsystem1'
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

// Function for MATLAB Function: '<S25>/Saturation'
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

// Function for MATLAB Function: '<S25>/Saturation'
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

// Function for MATLAB Function: '<S25>/Saturation'
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

// Function for MATLAB Function: '<S25>/Saturation'
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

// Function for MATLAB Function: '<S25>/Saturation'
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

// Function for MATLAB Function: '<S25>/Saturation'
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

// Function for MATLAB Function: '<S25>/Saturation'
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

// Function for MATLAB Function: '<S25>/Saturation'
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
static void imperix_ctrl_trisolve_f(const real_T A[16], real_T B[16])
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_ctrl_norm_c0(const real_T x[4])
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_ctrl_maximum_e4(const real_T x[4])
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_ctrl_xnrm2_b(int32_T n, const real_T x[16], int32_T ix0)
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
static void imperix_ctrl_xgemv_m(int32_T m, int32_T n, const real_T A[16],
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

// Function for MATLAB Function: '<S1>/LICCs control'
static void imperix_ctrl_xgerc_e(int32_T m, int32_T n, real_T alpha1, int32_T
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
      xnorm = imperix_ctrl_xnrm2_b(3 - k_i, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_ctrl_xnrm2_b(3 - k_i, A, ii + 2));
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
        imperix_ctrl_xgemv_m(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_ctrl_xgerc_e(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
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
        imperix_ctrl_xgemv_m(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_ctrl_xgerc_e(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
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
    Xnorm0 = imperix_ctrl_norm_c0(x);
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
          cVal = imperix_ctrl_maximum_e4(varargin_1);
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
            cMin = imperix_ctrl_norm_c0(x);
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
static void imperix_ctrl_repmat(const real_T a[2], real_T b[4])
{
  b[0] = a[0];
  b[1] = a[1];
  b[2] = a[0];
  b[3] = a[1];
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_trisolve(const real_T A[36], real_T B[36])
{
  for (int32_T j = 0; j < 6; j++) {
    int32_T jBcol;
    jBcol = 6 * j;
    for (int32_T b_k = 0; b_k < 6; b_k++) {
      real_T B_0;
      int32_T B_tmp;
      int32_T kAcol;
      kAcol = 6 * b_k;
      B_tmp = b_k + jBcol;
      B_0 = B[B_tmp];
      if (B_0 != 0.0) {
        B[B_tmp] = B_0 / A[b_k + kAcol];
        for (int32_T i = b_k + 2; i < 7; i++) {
          int32_T tmp;
          tmp = (i + jBcol) - 1;
          B[tmp] -= A[(i + kAcol) - 1] * B[B_tmp];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_norm(const real_T x[6])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k = 0; k < 6; k++) {
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
static real_T imperix_ctrl_maximum(const real_T x[6])
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
    while ((!exitg1) && (k < 7)) {
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
    for (k = idx + 1; k < 7; k++) {
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
static real_T imperix_ctrl_xnrm2(int32_T n, const real_T x[36], int32_T ix0)
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
static void imperix_ctrl_xgemv(int32_T m, int32_T n, const real_T A[36], int32_T
  ia0, const real_T x[36], int32_T ix0, real_T y[6])
{
  if ((m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = (n - 1) * 6 + ia0;
    for (int32_T b_iy = ia0; b_iy <= b; b_iy += 6) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = b_iy + m;
      for (ia = b_iy; ia < d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * A[ia - 1];
      }

      ia = div_nde_s32_floor(b_iy - ia0, 6);
      y[ia] += c;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
  const real_T y[6], real_T A[36], int32_T ia0)
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

      jA += 6;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_KWIKfactor(const real_T Ac[216], const int32_T iC[36],
  int32_T nA, const real_T Linv[36], real_T RLinv[36], real_T D[36], real_T H[36],
  int32_T n)
{
  real_T A[36];
  real_T R[36];
  real_T TL[36];
  real_T tau[6];
  real_T work[6];
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
  memset(&RLinv[0], 0, 36U * sizeof(real_T));
  for (b_lastv = 0; b_lastv < nA; b_lastv++) {
    knt = iC[b_lastv];
    for (i = 0; i < 6; i++) {
      RLinv[i + 6 * b_lastv] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      xnorm = Ac[(36 * i + knt) - 1];
      for (ii = 0; ii < 6; ii++) {
        c_lastc = 6 * b_lastv + ii;
        RLinv[c_lastc] += Linv[6 * i + ii] * xnorm;
      }
    }
  }

  memcpy(&A[0], &RLinv[0], 36U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    tau[i] = 0.0;
    work[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    ii = i * 6 + i;
    if (i + 1 < 6) {
      atmp = A[ii];
      b_lastv = ii + 2;
      tau[i] = 0.0;
      xnorm = imperix_ctrl_xnrm2(5 - i, A, ii + 2);
      if (xnorm != 0.0) {
        A_0 = A[ii];
        xnorm = rt_hypotd_snf(A_0, xnorm);
        if (A_0 >= 0.0) {
          xnorm = -xnorm;
        }

        if (fabs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          f = (ii - i) + 6;
          do {
            knt++;
            for (c_lastc = b_lastv; c_lastc <= f; c_lastc++) {
              A[c_lastc - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(atmp, imperix_ctrl_xnrm2(5 - i, A, ii + 2));
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
          knt = (ii - i) + 6;
          for (c_lastc = b_lastv; c_lastc <= knt; c_lastc++) {
            A[c_lastc - 1] *= atmp;
          }

          atmp = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        b_lastv = 6 - i;
        c_lastc = (ii - i) + 5;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 5 - i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = ((c_lastc - 1) * 6 + ii) + 6;
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
        imperix_ctrl_xgemv(b_lastv, c_lastc, A, ii + 7, A, ii + 1, work);
        imperix_ctrl_xgerc(b_lastv, c_lastc, -tau[i], ii + 1, work, A, ii + 7);
      }

      A[ii] = atmp;
    } else {
      tau[5] = 0.0;
    }
  }

  for (i = 0; i < 6; i++) {
    for (ii = 0; ii <= i; ii++) {
      R[ii + 6 * i] = A[6 * i + ii];
    }

    for (ii = i + 2; ii < 7; ii++) {
      R[(ii + 6 * i) - 1] = 0.0;
    }

    work[i] = 0.0;
  }

  for (i = 5; i >= 0; i--) {
    ii = i * 6 + i;
    if (i + 1 < 6) {
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        b_lastv = 6 - i;
        c_lastc = (ii - i) + 5;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 5 - i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = ((c_lastc - 1) * 6 + ii) + 6;
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
        imperix_ctrl_xgemv(b_lastv, c_lastc, A, ii + 7, A, ii + 1, work);
        imperix_ctrl_xgerc(b_lastv, c_lastc, -tau[i], ii + 1, work, A, ii + 7);
      }

      c_lastc = (ii - i) + 6;
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
      if (fabs(R[6 * i + i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      for (ii = 0; ii < n; ii++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          xnorm = 0.0;
          for (i = 0; i < 6; i++) {
            xnorm += Linv[6 * ii + i] * A[6 * b_lastv + i];
          }

          TL[ii + 6 * b_lastv] = xnorm;
        }
      }

      memset(&RLinv[0], 0, 36U * sizeof(real_T));
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        i = (b_lastv - 1) * 6;
        ii = (b_lastv + i) - 1;
        RLinv[ii] = 1.0;
        for (knt = b_lastv; knt <= nA; knt++) {
          c_lastc = ((knt - 1) * 6 + b_lastv) - 1;
          RLinv[c_lastc] /= R[ii];
        }

        if (b_lastv > 1) {
          for (knt = 0; knt <= b_lastv - 2; knt++) {
            for (f = b_lastv; f <= nA; f++) {
              ii = (f - 1) * 6;
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
          i = (c_lastc - 1) * 6 + b_lastv;
          H[i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) * 6;
            H[i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + 6 * b_lastv) - 1] = H[i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          i = 6 * qY + b_lastv;
          D[i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) * 6;
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
static void imperix_ctrl_DropConstraint(int32_T kDrop, boolean_T iA[36], int32_T
  *nA, int32_T iC[36])
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
static void imperix_ctrl_qpkwik(const real_T Linv[36], const real_T Hinv[36],
  const real_T f[6], const real_T Ac[216], const real_T b[36], boolean_T iA[36],
  int32_T maxiter, real_T FeasTol, real_T x[6], real_T lambda[36], int32_T
  *status)
{
  real_T D[36];
  real_T H[36];
  real_T RLinv[36];
  real_T U[36];
  real_T cTol[36];
  real_T Opt[12];
  real_T Rhs[12];
  real_T r[6];
  real_T z[6];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T t;
  int32_T iC[36];
  int32_T U_tmp;
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
  int32_T tmp_0;
  boolean_T ColdReset;
  boolean_T DualFeasible;
  boolean_T cTolComputed;
  boolean_T exitg2;
  boolean_T exitg4;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  for (i = 0; i < 6; i++) {
    x[i] = 0.0;
  }

  memset(&lambda[0], 0, 36U * sizeof(real_T));
  *status = 1;
  for (i = 0; i < 6; i++) {
    r[i] = 0.0;
  }

  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 36; i++) {
    cTol[i] = 1.0;
    iC[i] = 0;
  }

  nA = 0;
  for (i = 0; i < 36; i++) {
    if (iA[i]) {
      nA++;
      iC[nA - 1] = i + 1;
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&Opt[0], 0, 12U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      Rhs[i] = f[i];
      Rhs[i + 6] = 0.0;
    }

    DualFeasible = false;
    tmp = static_cast<int32_T>(rt_roundd_snf(0.3 * static_cast<real_T>(nA)));
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H, 6);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            memset(&iC[0], 0, 36U * sizeof(int32_T));
            for (i = 0; i < 36; i++) {
              iA[i] = false;
            }

            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483641) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 7;
            }

            Rhs[i - 1] = b[iC[kDrop] - 1];
            for (i = kDrop + 1; i <= nA; i++) {
              U_tmp = (6 * kDrop + i) - 1;
              U[U_tmp] = 0.0;
              for (k = 0; k < nA; k++) {
                U[U_tmp] += RLinv[(6 * k + i) - 1] * RLinv[6 * k + kDrop];
              }

              U[kDrop + 6 * (i - 1)] = U[U_tmp];
            }
          }

          for (kDrop = 0; kDrop < 6; kDrop++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 6; i++) {
              Xnorm0 += H[6 * i + kDrop] * Rhs[i];
            }

            Opt[kDrop] = Xnorm0;
            for (k = 0; k < nA; k++) {
              if (k + 1 > 2147483641) {
                i = MAX_int32_T;
              } else {
                i = k + 7;
              }

              Opt[kDrop] += D[6 * k + kDrop] * Rhs[i - 1];
            }
          }

          for (k = 0; k < nA; k++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 6; i++) {
              Xnorm0 += D[6 * k + i] * Rhs[i];
            }

            if (k + 1 > 2147483641) {
              i = MAX_int32_T;
            } else {
              i = k + 7;
            }

            Opt[i - 1] = Xnorm0;
            if (k + 1 > 2147483641) {
              i = MAX_int32_T;
              kDrop = MAX_int32_T;
            } else {
              i = k + 7;
              kDrop = k + 7;
            }

            for (U_tmp = 0; U_tmp < nA; U_tmp++) {
              if (U_tmp + 1 > 2147483641) {
                tmp_0 = MAX_int32_T;
              } else {
                tmp_0 = U_tmp + 7;
              }

              Opt[i - 1] = U[6 * U_tmp + k] * Rhs[tmp_0 - 1] + Opt[kDrop - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (k = 0; k < nA; k++) {
            if (k + 1 > 2147483641) {
              i = MAX_int32_T;
            } else {
              i = k + 7;
            }

            lambda[iC[k] - 1] = Opt[i - 1];
            if (k + 1 > 2147483641) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              f_i = k + 7;
            }

            if ((Opt[f_i - 1] < Xnorm0) && (k + 1 <= nA)) {
              kDrop = k;
              if (k + 1 > 2147483641) {
                i = MAX_int32_T;
              } else {
                i = k + 7;
              }

              Xnorm0 = Opt[i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            for (i = 0; i < 6; i++) {
              x[i] = Opt[i];
            }
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
              memset(&iC[0], 0, 36U * sizeof(int32_T));
              for (i = 0; i < 36; i++) {
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
          memset(&lambda[0], 0, 36U * sizeof(real_T));
          for (tmp = 0; tmp < 6; tmp++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 6; i++) {
              Xnorm0 += -Hinv[6 * i + tmp] * f[i];
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
    for (tmp = 0; tmp < 6; tmp++) {
      Xnorm0 = 0.0;
      for (i = 0; i < 6; i++) {
        Xnorm0 += -Hinv[6 * i + tmp] * f[i];
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
      for (f_i = 0; f_i < 36; f_i++) {
        if (!cTolComputed) {
          for (i = 0; i < 6; i++) {
            z[i] = fabs(Ac[36 * i + f_i] * x[i]);
          }

          cVal = imperix_ctrl_maximum(z);
          if ((cTol[f_i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[f_i] = cVal;
          }
        }

        if (!iA[f_i]) {
          cVal = 0.0;
          for (i = 0; i < 6; i++) {
            cVal += Ac[36 * i + f_i] * x[i];
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
              for (i = 0; i < 6; i++) {
                z[i] = 0.0;
              }

              for (i = 0; i < 6; i++) {
                cMin = Ac[36 * i + tmp];
                for (kDrop = 0; kDrop < 6; kDrop++) {
                  z[kDrop] += Hinv[6 * i + kDrop] * cMin;
                }
              }

              guard3 = true;
            } else {
              cMin = imperix_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H, 6);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                for (i = 0; i < 36; i++) {
                  U[i] = -H[i];
                }

                for (i = 0; i < 6; i++) {
                  z[i] = 0.0;
                }

                for (i = 0; i < 6; i++) {
                  cMin = Ac[36 * i + tmp];
                  for (kDrop = 0; kDrop < 6; kDrop++) {
                    z[kDrop] += U[6 * i + kDrop] * cMin;
                  }
                }

                for (f_i = 0; f_i < nA; f_i++) {
                  cVal = 0.0;
                  for (i = 0; i < 6; i++) {
                    cVal += Ac[36 * i + tmp] * D[6 * f_i + i];
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
              for (i = 0; i < 6; i++) {
                t += Ac[36 * i + tmp] * z[i];
              }

              if (t <= 0.0) {
                cVal = 0.0;
                ColdReset = true;
              } else {
                cVal = 0.0;
                for (i = 0; i < 6; i++) {
                  cVal += Ac[36 * i + tmp] * x[i];
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
                  if ((f_i <= 36) && (lambda[f_i - 1] < 0.0)) {
                    lambda[f_i - 1] = 0.0;
                  }
                }

                lambda[tmp] += t;
                frexp(1.0, &exponent);
                if (fabs(t - cMin) < 2.2204460492503131E-16) {
                  imperix_ctrl_DropConstraint(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  for (i = 0; i < 6; i++) {
                    x[i] += t * z[i];
                  }

                  frexp(1.0, &b_exponent);
                  if (fabs(t - cVal) < 2.2204460492503131E-16) {
                    if (nA == 6) {
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
              for (i = 0; i < 36; i++) {
                cMin = fabs(b[i]);
                RLinv[i] = cMin;
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
static void imperix_ctrl_mpcActiveSetSolver(const real_T H[36], const real_T f[6],
  const real_T A[216], const real_T b[36], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[6],
  int32_T *exitflag, boolean_T iA[36])
{
  real_T A_0[216];
  real_T Linv[36];
  real_T Linv_0[36];
  real_T b_0[36];
  real_T b_A[36];
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
  static const int8_T B[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

  boolean_T exitg1;
  if (options_UseHessianAsInput) {
    memcpy(&b_A[0], &H[0], 36U * sizeof(real_T));
    jmax = 0;
    c_j = 0;
    exitg1 = false;
    while ((!exitg1) && (c_j < 6)) {
      idxAjj = c_j * 6 + c_j;
      ssq = 0.0;
      if (c_j >= 1) {
        for (b_k = 0; b_k < c_j; b_k++) {
          b_c = b_A[b_k * 6 + c_j];
          ssq += b_c * b_c;
        }
      }

      ssq = b_A[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        b_A[idxAjj] = ssq;
        if (c_j + 1 < 6) {
          if (c_j != 0) {
            b_k = ((c_j - 1) * 6 + c_j) + 2;
            for (iac = c_j + 2; iac <= b_k; iac += 6) {
              b_c_tmp = iac - c_j;
              b_c = -b_A[div_nde_s32_floor(b_c_tmp - 2, 6) * 6 + c_j];
              b_c_tmp += 4;
              for (ia = iac; ia <= b_c_tmp; ia++) {
                b_A_tmp = ((idxAjj + ia) - iac) + 1;
                b_A[b_A_tmp] += b_A[ia - 1] * b_c;
              }
            }
          }

          ssq = 1.0 / ssq;
          b_k = (idxAjj - c_j) + 6;
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
      jmax = 7;
    }

    for (c_j = 2; c_j < jmax; c_j++) {
      for (idxAjj = 0; idxAjj <= c_j - 2; idxAjj++) {
        b_A[idxAjj + 6 * (c_j - 1)] = 0.0;
      }
    }

    for (jmax = 0; jmax < 36; jmax++) {
      Linv[jmax] = B[jmax];
    }

    imperix_ctrl_trisolve(b_A, Linv);
  } else {
    memcpy(&Linv[0], &H[0], 36U * sizeof(real_T));
  }

  for (idxAjj = 0; idxAjj < 36; idxAjj++) {
    iA[idxAjj] = false;
  }

  for (jmax = 0; jmax < 6; jmax++) {
    for (c_j = 0; c_j < 6; c_j++) {
      ssq = 0.0;
      for (idxAjj = 0; idxAjj < 6; idxAjj++) {
        ssq += Linv[6 * c_j + idxAjj] * Linv[6 * jmax + idxAjj];
      }

      Linv_0[c_j + 6 * jmax] = ssq;
    }
  }

  for (jmax = 0; jmax < 216; jmax++) {
    A_0[jmax] = -A[jmax];
  }

  for (jmax = 0; jmax < 36; jmax++) {
    b_0[jmax] = -b[jmax];
  }

  imperix_ctrl_qpkwik(Linv, Linv_0, f, A_0, b_0, iA, options_MaxIterations,
                      options_ConstraintTolerance, x, b_A, exitflag);
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_trisolve_n(const real_T A[9], real_T B[9])
{
  for (int32_T j = 0; j < 3; j++) {
    int32_T jBcol;
    jBcol = 3 * j;
    for (int32_T b_k = 0; b_k < 3; b_k++) {
      real_T B_0;
      int32_T B_tmp;
      int32_T kAcol;
      kAcol = 3 * b_k;
      B_tmp = b_k + jBcol;
      B_0 = B[B_tmp];
      if (B_0 != 0.0) {
        B[B_tmp] = B_0 / A[b_k + kAcol];
        for (int32_T i = b_k + 2; i < 4; i++) {
          int32_T tmp;
          tmp = (i + jBcol) - 1;
          B[tmp] -= A[(i + kAcol) - 1] * B[B_tmp];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_norm_c(const real_T x[3])
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

  return scale * sqrt(y);
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_maximum_e(const real_T x[3])
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
    while ((!exitg1) && (k < 4)) {
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
    for (k = idx + 1; k < 4; k++) {
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
static real_T imperix_ctrl_xnrm2_p(int32_T n, const real_T x[9], int32_T ix0)
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
static void imperix_ctrl_xgemv_k(int32_T m, int32_T n, const real_T A[9],
  int32_T ia0, const real_T x[9], int32_T ix0, real_T y[3])
{
  if ((m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = (n - 1) * 3 + ia0;
    for (int32_T b_iy = ia0; b_iy <= b; b_iy += 3) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = b_iy + m;
      for (ia = b_iy; ia < d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * A[ia - 1];
      }

      ia = div_nde_s32_floor(b_iy - ia0, 3);
      y[ia] += c;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_ctrl_xgerc_a(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[3], real_T A[9], int32_T ia0)
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

      jA += 3;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_ctrl_KWIKfactor_b(const real_T Ac[18], const int32_T iC[6],
  int32_T nA, const real_T Linv[9], real_T RLinv[9], real_T D[9], real_T H[9],
  int32_T n)
{
  real_T A[9];
  real_T Q[9];
  real_T R[9];
  real_T TL[9];
  real_T tau[3];
  real_T work[3];
  real_T RLinv_0;
  real_T RLinv_1;
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
  memset(&RLinv[0], 0, 9U * sizeof(real_T));
  for (ii = 0; ii < nA; ii++) {
    b_lastv = iC[ii];
    xnorm = 0.0;
    RLinv_0 = 0.0;
    RLinv_1 = 0.0;
    for (k_i = 0; k_i < 3; k_i++) {
      tmp = Ac[(6 * k_i + b_lastv) - 1];
      xnorm += Linv[3 * k_i] * tmp;
      RLinv_0 += Linv[3 * k_i + 1] * tmp;
      RLinv_1 += Linv[3 * k_i + 2] * tmp;
    }

    RLinv[3 * ii + 2] = RLinv_1;
    RLinv[3 * ii + 1] = RLinv_0;
    RLinv[3 * ii] = xnorm;
  }

  memcpy(&A[0], &RLinv[0], 9U * sizeof(real_T));
  tau[0] = 0.0;
  work[0] = 0.0;
  tau[1] = 0.0;
  work[1] = 0.0;
  tau[2] = 0.0;
  work[2] = 0.0;
  for (k_i = 0; k_i < 3; k_i++) {
    ii = k_i * 3 + k_i;
    if (k_i + 1 < 3) {
      RLinv_0 = A[ii];
      b_lastv = ii + 2;
      tau[k_i] = 0.0;
      xnorm = imperix_ctrl_xnrm2_p(2 - k_i, A, ii + 2);
      if (xnorm != 0.0) {
        RLinv_1 = A[ii];
        xnorm = rt_hypotd_snf(RLinv_1, xnorm);
        if (RLinv_1 >= 0.0) {
          xnorm = -xnorm;
        }

        if (fabs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          f = (ii - k_i) + 3;
          do {
            knt++;
            for (c_lastc = b_lastv; c_lastc <= f; c_lastc++) {
              A[c_lastc - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            RLinv_0 *= 9.9792015476736E+291;
          } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(RLinv_0, imperix_ctrl_xnrm2_p(2 - k_i, A, ii + 2));
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
          knt = (ii - k_i) + 3;
          for (c_lastc = b_lastv; c_lastc <= knt; c_lastc++) {
            A[c_lastc - 1] *= RLinv_0;
          }

          RLinv_0 = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[k_i] != 0.0) {
        b_lastv = 3 - k_i;
        c_lastc = (ii - k_i) + 2;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 2 - k_i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = ((c_lastc - 1) * 3 + ii) + 3;
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
        imperix_ctrl_xgemv_k(b_lastv, c_lastc, A, ii + 4, A, ii + 1, work);
        imperix_ctrl_xgerc_a(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
                             4);
      }

      A[ii] = RLinv_0;
    } else {
      tau[2] = 0.0;
    }
  }

  for (k_i = 0; k_i < 3; k_i++) {
    for (ii = 0; ii <= k_i; ii++) {
      R[ii + 3 * k_i] = A[3 * k_i + ii];
    }

    for (ii = k_i + 2; ii < 4; ii++) {
      R[(ii + 3 * k_i) - 1] = 0.0;
    }

    work[k_i] = 0.0;
  }

  for (k_i = 2; k_i >= 0; k_i--) {
    ii = k_i * 3 + k_i;
    if (k_i + 1 < 3) {
      A[ii] = 1.0;
      if (tau[k_i] != 0.0) {
        b_lastv = 3 - k_i;
        c_lastc = (ii - k_i) + 2;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 2 - k_i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = ((c_lastc - 1) * 3 + ii) + 3;
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
        imperix_ctrl_xgemv_k(b_lastv, c_lastc, A, ii + 4, A, ii + 1, work);
        imperix_ctrl_xgerc_a(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
                             4);
      }

      c_lastc = (ii - k_i) + 3;
      for (b_lastv = ii + 2; b_lastv <= c_lastc; b_lastv++) {
        A[b_lastv - 1] *= -tau[k_i];
      }
    }

    A[ii] = 1.0 - tau[k_i];
    for (b_lastv = 0; b_lastv < k_i; b_lastv++) {
      A[(ii - b_lastv) - 1] = 0.0;
    }
  }

  for (k_i = 0; k_i < 3; k_i++) {
    Q[3 * k_i] = A[3 * k_i];
    ii = 3 * k_i + 1;
    Q[ii] = A[ii];
    ii = 3 * k_i + 2;
    Q[ii] = A[ii];
  }

  k_i = 0;
  do {
    exitg1 = 0;
    if (k_i <= nA - 1) {
      if (fabs(R[3 * k_i + k_i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        k_i++;
      }
    } else {
      for (k_i = 0; k_i < n; k_i++) {
        for (ii = 0; ii < n; ii++) {
          TL[k_i + 3 * ii] = (Linv[3 * k_i + 1] * Q[3 * ii + 1] + Linv[3 * k_i] *
                              Q[3 * ii]) + Linv[3 * k_i + 2] * Q[3 * ii + 2];
        }
      }

      memset(&RLinv[0], 0, 9U * sizeof(real_T));
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        k_i = (b_lastv - 1) * 3;
        ii = (b_lastv + k_i) - 1;
        RLinv[ii] = 1.0;
        for (c_lastc = b_lastv; c_lastc <= nA; c_lastc++) {
          f = ((c_lastc - 1) * 3 + b_lastv) - 1;
          RLinv[f] /= R[ii];
        }

        if (b_lastv > 1) {
          for (c_lastc = 0; c_lastc <= b_lastv - 2; c_lastc++) {
            for (knt = b_lastv; knt <= nA; knt++) {
              ii = (knt - 1) * 3;
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
          k_i = (c_lastc - 1) * 3 + b_lastv;
          H[k_i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) * 3;
            H[k_i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + 3 * b_lastv) - 1] = H[k_i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          k_i = 3 * qY + b_lastv;
          D[k_i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) * 3;
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
static void imperix_ctrl_DropConstraint_j(int32_T kDrop, boolean_T iA[6],
  int32_T *nA, int32_T iC[6])
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
static void imperix_ctrl_qpkwik_j(const real_T Linv[9], const real_T Hinv[9],
  const real_T f[3], const real_T Ac[18], const real_T b[6], boolean_T iA[6],
  int32_T maxiter, real_T FeasTol, real_T x[3], real_T lambda[6], int32_T
  *status)
{
  real_T D[9];
  real_T H[9];
  real_T RLinv[9];
  real_T U[9];
  real_T Opt[6];
  real_T Rhs[6];
  real_T cTol[6];
  real_T r[3];
  real_T varargin_1[3];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T rVal;
  real_T t;
  real_T t1;
  real_T z;
  real_T z_idx_2;
  int32_T iC[6];
  int32_T U_tmp;
  int32_T b_exponent;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exponent;
  int32_T i;
  int32_T iSave;
  int32_T kDrop;
  int32_T kNext;
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
  x[0] = 0.0;
  x[1] = 0.0;
  x[2] = 0.0;
  *status = 1;
  r[0] = 0.0;
  r[1] = 0.0;
  r[2] = 0.0;
  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 6; i++) {
    lambda[i] = 0.0;
    cTol[i] = 1.0;
    iC[i] = 0;
  }

  nA = 0;
  for (i = 0; i < 6; i++) {
    if (iA[i]) {
      nA++;
      iC[nA - 1] = i + 1;
    }
  }

  guard1 = false;
  if (nA > 0) {
    for (i = 0; i < 6; i++) {
      Opt[i] = 0.0;
    }

    Rhs[0] = f[0];
    Rhs[3] = 0.0;
    Rhs[1] = f[1];
    Rhs[4] = 0.0;
    Rhs[2] = f[2];
    Rhs[5] = 0.0;
    DualFeasible = false;
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_ctrl_KWIKfactor_b(Ac, iC, nA, Linv, RLinv, D, H, 3);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            for (i = 0; i < 6; i++) {
              iA[i] = false;
              iC[i] = 0;
            }

            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483644) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 4;
            }

            Rhs[i - 1] = b[iC[kDrop] - 1];
            for (i = kDrop + 1; i <= nA; i++) {
              U_tmp = (3 * kDrop + i) - 1;
              U[U_tmp] = 0.0;
              for (iSave = 0; iSave < nA; iSave++) {
                U[U_tmp] += RLinv[(3 * iSave + i) - 1] * RLinv[3 * iSave + kDrop];
              }

              U[kDrop + 3 * (i - 1)] = U[U_tmp];
            }
          }

          for (kDrop = 0; kDrop < 3; kDrop++) {
            Opt[kDrop] = (H[kDrop + 3] * Rhs[1] + H[kDrop] * Rhs[0]) + H[kDrop +
              6] * Rhs[2];
            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483644) {
                i = MAX_int32_T;
              } else {
                i = iSave + 4;
              }

              Opt[kDrop] += D[3 * iSave + kDrop] * Rhs[i - 1];
            }
          }

          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483644) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 4;
            }

            Opt[i - 1] = (D[3 * kDrop + 1] * Rhs[1] + D[3 * kDrop] * Rhs[0]) +
              D[3 * kDrop + 2] * Rhs[2];
            if (kDrop + 1 > 2147483644) {
              i = MAX_int32_T;
              U_tmp = MAX_int32_T;
            } else {
              i = kDrop + 4;
              U_tmp = kDrop + 4;
            }

            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483644) {
                tmp = MAX_int32_T;
              } else {
                tmp = iSave + 4;
              }

              Opt[i - 1] = U[3 * iSave + kDrop] * Rhs[tmp - 1] + Opt[U_tmp - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (iSave = 0; iSave < nA; iSave++) {
            if (iSave + 1 > 2147483644) {
              i = MAX_int32_T;
            } else {
              i = iSave + 4;
            }

            lambda[iC[iSave] - 1] = Opt[i - 1];
            if (iSave + 1 > 2147483644) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              kNext = iSave + 4;
            }

            if ((Opt[kNext - 1] < Xnorm0) && (iSave + 1 <= nA)) {
              kDrop = iSave;
              if (iSave + 1 > 2147483644) {
                i = MAX_int32_T;
              } else {
                i = iSave + 4;
              }

              Xnorm0 = Opt[i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            x[0] = Opt[0];
            x[1] = Opt[1];
            x[2] = Opt[2];
          } else {
            if (*status > 2147483646) {
              *status = MAX_int32_T;
            } else {
              (*status)++;
            }

            if (*status > 5) {
              nA = 0;
              for (i = 0; i < 6; i++) {
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
          for (i = 0; i < 6; i++) {
            lambda[i] = 0.0;
          }

          Xnorm0 = f[1];
          cMin = f[0];
          cVal = f[2];
          for (i = 0; i < 3; i++) {
            x[i] = (-Hinv[i + 3] * Xnorm0 + -Hinv[i] * cMin) + -Hinv[i + 6] *
              cVal;
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
    for (i = 0; i < 3; i++) {
      x[i] = (-Hinv[i + 3] * Xnorm0 + -Hinv[i] * cMin) + -Hinv[i + 6] * cVal;
    }

    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_ctrl_norm_c(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      kNext = -1;
      for (i = 0; i < 6; i++) {
        if (!cTolComputed) {
          varargin_1[0] = fabs(Ac[i] * x[0]);
          varargin_1[1] = fabs(Ac[i + 6] * x[1]);
          varargin_1[2] = fabs(Ac[i + 12] * x[2]);
          cVal = imperix_ctrl_maximum_e(varargin_1);
          if ((cTol[i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[i] = cVal;
          }
        }

        if (!iA[i]) {
          cVal = (((Ac[i + 6] * x[1] + Ac[i] * x[0]) + Ac[i + 12] * x[2]) - b[i])
            / cTol[i];
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
              for (i = 0; i < 3; i++) {
                t1 = Ac[6 * i + kNext];
                cMin += Hinv[3 * i] * t1;
                cVal += Hinv[3 * i + 1] * t1;
                z_idx_2 += Hinv[3 * i + 2] * t1;
              }

              guard3 = true;
            } else {
              cMin = imperix_ctrl_KWIKfactor_b(Ac, iC, nA, Linv, RLinv, D, H, 3);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                for (i = 0; i < 9; i++) {
                  U[i] = -H[i];
                }

                cMin = 0.0;
                cVal = 0.0;
                z_idx_2 = 0.0;
                for (i = 0; i < 3; i++) {
                  t1 = Ac[6 * i + kNext];
                  cMin += U[3 * i] * t1;
                  cVal += U[3 * i + 1] * t1;
                  z_idx_2 += U[3 * i + 2] * t1;
                }

                for (i = 0; i < nA; i++) {
                  r[i] = (D[3 * i + 1] * Ac[kNext + 6] + D[3 * i] * Ac[kNext]) +
                    D[3 * i + 2] * Ac[kNext + 12];
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

              rVal = Ac[kNext + 6];
              t = Ac[kNext + 12];
              z = (rVal * cVal + cMin * Ac[kNext]) + t * z_idx_2;
              if (z <= 0.0) {
                rVal = 0.0;
                ColdReset = true;
              } else {
                rVal = (b[kNext] - ((rVal * x[1] + Ac[kNext] * x[0]) + t * x[2]))
                  / z;
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
                  if ((iSave <= 6) && (lambda[iSave - 1] < 0.0)) {
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
                  frexp(1.0, &b_exponent);
                  if (fabs(t - rVal) < 2.2204460492503131E-16) {
                    if (nA == 3) {
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
              for (i = 0; i < 6; i++) {
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
static void imperix_ct_mpcActiveSetSolver_k(const real_T H[9], const real_T f[3],
  const real_T A[18], const real_T b[6], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[3],
  int32_T *exitflag, boolean_T iA[6])
{
  real_T A_0[18];
  real_T Linv[9];
  real_T b_A[9];
  real_T b_0[6];
  real_T lam[6];
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
  static const int8_T B[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  boolean_T exitg1;
  if (options_UseHessianAsInput) {
    memcpy(&b_A[0], &H[0], 9U * sizeof(real_T));
    jmax = 0;
    c_j = 0;
    exitg1 = false;
    while ((!exitg1) && (c_j < 3)) {
      idxAjj = c_j * 3 + c_j;
      ssq = 0.0;
      if (c_j >= 1) {
        for (b_k = 0; b_k < c_j; b_k++) {
          b_c = b_A[b_k * 3 + c_j];
          ssq += b_c * b_c;
        }
      }

      ssq = b_A[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        b_A[idxAjj] = ssq;
        if (c_j + 1 < 3) {
          if (c_j != 0) {
            b_k = ((c_j - 1) * 3 + c_j) + 2;
            for (iac = c_j + 2; iac <= b_k; iac += 3) {
              b_c_tmp = iac - c_j;
              b_c = -b_A[div_nde_s32_floor(b_c_tmp - 2, 3) * 3 + c_j];
              b_c_tmp++;
              for (ia = iac; ia <= b_c_tmp; ia++) {
                b_A_tmp = ((idxAjj + ia) - iac) + 1;
                b_A[b_A_tmp] += b_A[ia - 1] * b_c;
              }
            }
          }

          ssq = 1.0 / ssq;
          b_k = (idxAjj - c_j) + 3;
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
      jmax = 4;
    }

    for (c_j = 2; c_j < jmax; c_j++) {
      for (idxAjj = 0; idxAjj <= c_j - 2; idxAjj++) {
        b_A[idxAjj + 3 * (c_j - 1)] = 0.0;
      }
    }

    for (jmax = 0; jmax < 3; jmax++) {
      Linv[3 * jmax] = B[3 * jmax];
      c_j = 3 * jmax + 1;
      Linv[c_j] = B[c_j];
      c_j = 3 * jmax + 2;
      Linv[c_j] = B[c_j];
    }

    imperix_ctrl_trisolve_n(b_A, Linv);
  } else {
    memcpy(&Linv[0], &H[0], 9U * sizeof(real_T));
  }

  for (idxAjj = 0; idxAjj < 6; idxAjj++) {
    iA[idxAjj] = false;
  }

  for (jmax = 0; jmax < 3; jmax++) {
    for (c_j = 0; c_j < 3; c_j++) {
      b_A[c_j + 3 * jmax] = (Linv[3 * c_j + 1] * Linv[3 * jmax + 1] + Linv[3 *
        c_j] * Linv[3 * jmax]) + Linv[3 * c_j + 2] * Linv[3 * jmax + 2];
    }
  }

  for (jmax = 0; jmax < 18; jmax++) {
    A_0[jmax] = -A[jmax];
  }

  for (jmax = 0; jmax < 6; jmax++) {
    b_0[jmax] = -b[jmax];
  }

  imperix_ctrl_qpkwik_j(Linv, b_A, f, A_0, b_0, iA, options_MaxIterations,
                        options_ConstraintTolerance, x, lam, exitflag);
}

// Model step function for TID0
void imperix_ctrl_step0(void)          // Sample time: [0.000166667s, 0.0s]
{
  real_T varargin_1[200];
  real_T tmp_2[96];
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
  real_T rtb_DataTypeConversion1[6];
  real_T rtb_Gain2_k0[6];
  real_T rtb_Gain7[6];
  real_T rtb_Gain_j[6];
  real_T rtb_Gain1_h[5];
  real_T rtb_TmpSignalConversionAtGain2I[5];
  real_T u_ref[4];
  real_T xt_est[4];
  real_T xt_est_0[4];
  real_T rtb_Gain1_l[3];
  real_T rtb_Switch_j[2];
  real_T rtb_ie_sat[2];
  real_T tmp_1[2];
  real_T D;
  real_T Mean_AccVal;
  real_T idx_2;
  real_T rtb_DeadZone;
  real_T rtb_F;
  real_T rtb_Gain3;
  real_T rtb_Gain4_idx_0;
  real_T rtb_Gain4_idx_1;
  real_T rtb_Gain8;
  real_T rtb_IC;
  real_T rtb_IntegralGain_dr;
  real_T rtb_IntegralGain_k;
  real_T rtb_Integrator_fi;
  real_T rtb_Saturation;
  real_T rtb_Saturation_fb;
  real_T rtb_Saturation_h;
  real_T rtb_Saturation_i;
  real_T rtb_Sum1_f;
  real_T rtb_Sum_ak;
  real_T rtb_Sum_h;
  real_T rtb_Sum_j;
  real_T rtb_Sum_m;
  real_T rtb_Switch_g_idx_1;
  real_T tmp_3;
  real_T tmp_4;
  real_T tmp_5;
  real_T tmp_6;
  real_T tmp_9;
  real_T tmp_a;
  int32_T A_tmp;
  int32_T b_a_tmp;
  int32_T c_tmp;
  int32_T e;
  int32_T i;
  int32_T idx_1;
  int32_T iindx;
  int32_T jmax;
  real32_T rtb_Gain4_g;
  real32_T rtb_Product1_k_0;
  int8_T tmp_7;
  int8_T tmp_8;
  uint8_T rtb_Compare;
  boolean_T iA1_0[24];
  boolean_T iA1[12];
  boolean_T b_x[4];
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

  // S-Function (ADC): '<S101>/ADC'
  imperix_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_0_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S103>/ADC'
  imperix_ctrl_B.ADC_m = (float)(*ix_raw_adc_ptr_1_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S93>/ADC'
  imperix_ctrl_B.ADC_c = (float)(*ix_raw_adc_ptr_2_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S81>/ADC'
  imperix_ctrl_B.ADC_n = (float)(*ix_raw_adc_ptr_3_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S95>/ADC'
  imperix_ctrl_B.ADC_g = (float)(*ix_raw_adc_ptr_4_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S97>/ADC'
  imperix_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_5_0) * 0.00045776F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion2'
  rtb_Gain_j[0] = imperix_ctrl_B.ADC;
  rtb_Gain_j[1] = imperix_ctrl_B.ADC_m;
  rtb_Gain_j[2] = imperix_ctrl_B.ADC_c;
  rtb_Gain_j[3] = imperix_ctrl_B.ADC_n;
  rtb_Gain_j[4] = imperix_ctrl_B.ADC_g;
  rtb_Gain_j[5] = imperix_ctrl_B.ADC_p;

  // DataTypeConversion: '<S224>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'

  imperix_ctrl_B.DataTypeConversion = imperix_ctrl_B.ADC;

  // S-Function (PROBE): '<S224>/S-Function'
  is1 = imperix_ctrl_B.DataTypeConversion;

  // DataTypeConversion: '<S226>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'

  imperix_ctrl_B.DataTypeConversion_h = imperix_ctrl_B.ADC_m;

  // S-Function (PROBE): '<S226>/S-Function'
  is2 = imperix_ctrl_B.DataTypeConversion_h;

  // S-Function (ADC): '<S89>/ADC'
  imperix_ctrl_B.ADC_o = (float)(*ix_raw_adc_ptr_6_0) * 0.061035F + 0.0F;

  // S-Function (ADC): '<S105>/ADC'
  imperix_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_7_0) * 0.061035F + 0.0F;

  // S-Function (ADC): '<S83>/ADC'
  imperix_ctrl_B.ADC_l = (float)(*ix_raw_adc_ptr_0_1) * 0.061035F + 0.0F;

  // S-Function (ADC): '<S91>/ADC'
  imperix_ctrl_B.ADC_nj = (float)(*ix_raw_adc_ptr_1_1) * 0.061035F + 0.0F;

  // S-Function (ADC): '<S85>/ADC'
  imperix_ctrl_B.ADC_mz = (float)(*ix_raw_adc_ptr_2_1) * 0.061035F + 0.0F;

  // S-Function (ADC): '<S87>/ADC'
  imperix_ctrl_B.ADC_k = (float)(*ix_raw_adc_ptr_3_1) * 0.061035F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion1'
  rtb_DataTypeConversion1[0] = imperix_ctrl_B.ADC_o;
  rtb_DataTypeConversion1[1] = imperix_ctrl_B.ADC_e;
  rtb_DataTypeConversion1[2] = imperix_ctrl_B.ADC_l;
  rtb_DataTypeConversion1[3] = imperix_ctrl_B.ADC_nj;
  rtb_DataTypeConversion1[4] = imperix_ctrl_B.ADC_mz;
  rtb_DataTypeConversion1[5] = imperix_ctrl_B.ADC_k;

  // DataTypeConversion: '<S228>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion_c = imperix_ctrl_B.ADC_mz;

  // S-Function (PROBE): '<S228>/S-Function'
  Vc5 = imperix_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S230>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion_k = imperix_ctrl_B.ADC_k;

  // S-Function (PROBE): '<S230>/S-Function'
  Vc6 = imperix_ctrl_B.DataTypeConversion_k;

  // S-Function (ADC): '<S99>/ADC'
  imperix_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_4_1) * 0.012207F + 0.0F;

  // DataTypeConversion: '<S232>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   Gain: '<S1>/Gain'

  imperix_ctrl_B.DataTypeConversion_a = static_cast<real32_T>(1.0 /
    (imperix_ctrl_P.IM.np * imperix_ctrl_P.IM.w_max) * imperix_ctrl_B.ADC_f);

  // S-Function (PROBE): '<S232>/S-Function'
  wm = imperix_ctrl_B.DataTypeConversion_a;

  // Gain: '<S62>/Gain1'
  for (i = 0; i < 5; i++) {
    rtb_Gain1_h[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    rtb_Sum_j = rtb_Gain_j[i];
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Gain1_h[idx_1] += imperix_ctrl_P.M2C.A[5 * i + idx_1] * rtb_Sum_j;
    }
  }

  // End of Gain: '<S62>/Gain1'

  // Gain: '<S62>/Gain4'
  rtb_Gain4_idx_0 = 0.0;
  rtb_Gain4_idx_1 = 0.0;
  for (i = 0; i < 6; i++) {
    // Sum: '<S62>/Sum3' incorporates:
    //   Gain: '<S62>/Gain3'

    rtb_Sum_j = 0.0;
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Sum_j += imperix_ctrl_P.M2C.pinvA[6 * idx_1 + i] * rtb_Gain1_h[idx_1];
    }

    Mean_AccVal = rtb_Gain_j[i] - rtb_Sum_j;

    // End of Sum: '<S62>/Sum3'

    // Gain: '<S62>/Gain4'
    idx_1 = i << 1;
    rtb_Gain4_idx_0 += imperix_ctrl_P.M2C.pinvN[idx_1] * Mean_AccVal;
    rtb_Gain4_idx_1 += imperix_ctrl_P.M2C.pinvN[idx_1 + 1] * Mean_AccVal;
  }

  // DataTypeConversion: '<S234>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_m = static_cast<real32_T>(rtb_Gain4_idx_0);

  // S-Function (PROBE): '<S234>/S-Function'
  ie1 = imperix_ctrl_B.DataTypeConversion_m;

  // DataTypeConversion: '<S236>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_hg = static_cast<real32_T>(rtb_Gain4_idx_1);

  // S-Function (PROBE): '<S236>/S-Function'
  ie2 = imperix_ctrl_B.DataTypeConversion_hg;

  // RateTransition generated from: '<S25>/Saturation' incorporates:
  //   RateTransition generated from: '<S1>/Discrete-Time Integrator'
  //   RateTransition generated from: '<S1>/Product1'
  //   RateTransition generated from: '<S25>/Input format'
  //   RateTransition generated from: '<S66>/Gain'

  tmp = (imperix_ctrl_M->Timing.RateInteraction.TID0_1 == 1);
  if (tmp) {
    // RateTransition generated from: '<S25>/Saturation'
    imperix_ctrl_B.TmpRTBAtSaturationInport1[0] =
      imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0];
    imperix_ctrl_B.TmpRTBAtSaturationInport1[1] =
      imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1];
    imperix_ctrl_B.TmpRTBAtSaturationInport1[2] =
      imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2];

    // RateTransition generated from: '<S1>/Sum6'
    imperix_ctrl_B.TmpRTBAtSum6Inport1 =
      imperix_ctrl_DW.TmpRTBAtSum6Inport1_Buffer0;
  }

  // End of RateTransition generated from: '<S25>/Saturation'

  // S-Function (sdspstatfcns): '<S66>/Mean' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  Mean_AccVal = imperix_ctrl_B.ADC_o;
  for (i = 4; i >= 0; i--) {
    Mean_AccVal += rtb_DataTypeConversion1[5 - i];
  }

  Mean_AccVal /= 6.0;

  // End of S-Function (sdspstatfcns): '<S66>/Mean'

  // Sum: '<S23>/Sum' incorporates:
  //   Gain: '<S23>/Gain1'
  //   Gain: '<S23>/Gain2'
  //   UnitDelay: '<S23>/Unit Delay1'

  imperix_ctrl_DW.UnitDelay1_DSTATE_o = (1.0 - imperix_ctrl_P.TEB.alpha) *
    Mean_AccVal + imperix_ctrl_P.TEB.alpha * imperix_ctrl_DW.UnitDelay1_DSTATE_o;

  // Sum: '<S1>/Sum6' incorporates:
  //   UnitDelay: '<S23>/Unit Delay1'

  rtb_IntegralGain_k = imperix_ctrl_B.TmpRTBAtSum6Inport1 -
    imperix_ctrl_DW.UnitDelay1_DSTATE_o;

  // Sum: '<S214>/Sum' incorporates:
  //   DiscreteIntegrator: '<S205>/Integrator'
  //   Gain: '<S210>/Proportional Gain'

  rtb_DeadZone = imperix_ctrl_P.TEB.kp * rtb_IntegralGain_k +
    imperix_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S212>/Saturation'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_Saturation_fb = imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone < -imperix_ctrl_P.TEB.u_max) {
    rtb_Saturation_fb = -imperix_ctrl_P.TEB.u_max;
  } else {
    rtb_Saturation_fb = rtb_DeadZone;
  }

  // End of Saturate: '<S212>/Saturation'

  // Gain: '<S25>/Gain3'
  rtb_TmpSignalConversionAtGain2I[0] = imperix_ctrl_P.Gain3_Gain[0] *
    rtb_Saturation_fb;
  rtb_TmpSignalConversionAtGain2I[1] = imperix_ctrl_P.Gain3_Gain[1] *
    rtb_Saturation_fb;

  // S-Function (TUNABLE_PARAM): '<S589>/S-Function'
  imperix_ctrl_B.SFunction = F_ref;

  // S-Function (TUNABLE_PARAM): '<S593>/S-Function'
  imperix_ctrl_B.SFunction_p = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double'
  //   DataTypeConversion: '<S1>/Cast To Double1'

  D = imperix_ctrl_B.SFunction;
  rtb_Sum1_f = imperix_ctrl_B.SFunction_p;

  // MATLAB Function 'Closed_loop_control/IM references': '<S20>:1'
  if (!imperix_ctrl_DW.F_max_not_empty) {
    // '<S20>:1:10'
    // '<S20>:1:11'
    imperix_ctrl_DW.F_max = imperix_ctrl_P.IM.FrN;
    imperix_ctrl_DW.F_max_not_empty = true;

    // '<S20>:1:12'
    imperix_ctrl_DW.w_max = imperix_ctrl_P.IM.w_max;

    // '<S20>:1:13'
    // '<S20>:1:16'
    imperix_ctrl_DW.dF = imperix_ctrl_P.FOC.Ts / (3.0 * imperix_ctrl_P.IM.tau_r);

    // '<S20>:1:17'
    imperix_ctrl_DW.dw = imperix_ctrl_P.FOC.Ts;
  }

  if (fabs(imperix_ctrl_B.SFunction - imperix_ctrl_DW.F_prev) >
      imperix_ctrl_DW.dF) {
    // '<S20>:1:21'
    // '<S20>:1:22'
    idx_2 = imperix_ctrl_B.SFunction - imperix_ctrl_DW.F_prev;
    if (rtIsNaN(idx_2)) {
      rtb_Sum_j = (rtNaN);
    } else if (idx_2 < 0.0) {
      rtb_Sum_j = -1.0;
    } else {
      rtb_Sum_j = (idx_2 > 0.0);
    }

    D = rtb_Sum_j * imperix_ctrl_DW.dF + imperix_ctrl_DW.F_prev;
  }

  if (fabs(imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev) >
      imperix_ctrl_DW.dw) {
    // '<S20>:1:25'
    // '<S20>:1:26'
    idx_2 = imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev;
    if (rtIsNaN(idx_2)) {
      rtb_Sum_j = (rtNaN);
    } else if (idx_2 < 0.0) {
      rtb_Sum_j = -1.0;
    } else {
      rtb_Sum_j = (idx_2 > 0.0);
    }

    rtb_Sum1_f = rtb_Sum_j * imperix_ctrl_DW.dw + imperix_ctrl_DW.w_prev;
  }

  // '<S20>:1:29'
  imperix_ctrl_DW.F_prev = D;

  // '<S20>:1:30'
  imperix_ctrl_DW.w_prev = rtb_Sum1_f;

  // '<S20>:1:32'
  rtb_F = imperix_ctrl_DW.F_max * D;

  // Gain: '<S528>/Gain3' incorporates:
  //   Gain: '<S68>/Gain2'

  // '<S20>:1:33'
  rtb_IC = 0.0;
  tmp_5 = 0.0;
  tmp_6 = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_Sum_j = rtb_Gain1_h[i + 2] * imperix_ctrl_P.Gain2_Gain;
    rtb_IC += imperix_ctrl_P.Gain3_Gain_d[3 * i] * rtb_Sum_j;
    tmp_5 += imperix_ctrl_P.Gain3_Gain_d[3 * i + 1] * rtb_Sum_j;
    tmp_6 += imperix_ctrl_P.Gain3_Gain_d[3 * i + 2] * rtb_Sum_j;
  }

  // End of Gain: '<S528>/Gain3'

  // Gain: '<S528>/Gain1'
  rtb_Gain1_l[0] = imperix_ctrl_P.Gain1_Gain * rtb_IC;
  rtb_Gain1_l[1] = imperix_ctrl_P.Gain1_Gain * tmp_5;
  rtb_Gain1_l[2] = imperix_ctrl_P.Gain1_Gain * tmp_6;

  // Gain: '<S1>/Gain3' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  rtb_Gain3 = imperix_ctrl_P.IM.np * imperix_ctrl_B.ADC_f;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   UnitDelay: '<S60>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S21>:1'
  if (!imperix_ctrl_DW.xt_est_apriori_not_empty) {
    // '<S21>:1:7'
    // '<S21>:1:8'
    imperix_ctrl_DW.xt_est_apriori[0] = imperix_ctrl_P.KF.x1_mu[0];
    imperix_ctrl_DW.xt_est_apriori[1] = imperix_ctrl_P.KF.x1_mu[1];
    imperix_ctrl_DW.xt_est_apriori[2] = imperix_ctrl_P.KF.x1_mu[2];
    imperix_ctrl_DW.xt_est_apriori[3] = imperix_ctrl_P.KF.x1_mu[3];
    imperix_ctrl_DW.xt_est_apriori_not_empty = true;

    // '<S21>:1:9'
    memcpy(&imperix_ctrl_DW.C[0], &imperix_ctrl_P.KF.C[0], sizeof(real_T) << 3U);

    // '<S21>:1:10'
  }

  // '<S21>:1:15'
  memcpy(&A[0], &imperix_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

  // '<S21>:1:16'
  A[12] = imperix_ctrl_P.KF.A[12] * rtb_Gain3;

  // '<S21>:1:17'
  A[9] = imperix_ctrl_P.KF.A[9] * rtb_Gain3;

  // '<S21>:1:18'
  A[14] = imperix_ctrl_P.KF.A[14] * rtb_Gain3;

  // '<S21>:1:19'
  A[11] = imperix_ctrl_P.KF.A[11] * rtb_Gain3;

  // '<S21>:1:20'
  rtb_IntegralGain_dr = 0.5 * imperix_ctrl_P.KF.Ts;
  idx_2 = imperix_ctrl_DW.Inx[0];
  D = imperix_ctrl_DW.Inx[1];
  rtb_Saturation = imperix_ctrl_DW.Inx[2];
  rtb_Sum_ak = imperix_ctrl_DW.Inx[3];
  for (i = 0; i < 4; i++) {
    jmax = i << 2;
    M[jmax] = A[jmax] * rtb_IntegralGain_dr + idx_2;
    M[jmax + 1] = A[jmax + 1] * rtb_IntegralGain_dr + D;
    M[jmax + 2] = A[jmax + 2] * rtb_IntegralGain_dr + rtb_Saturation;
    M[jmax + 3] = A[jmax + 3] * rtb_IntegralGain_dr + rtb_Sum_ak;
  }

  // '<S21>:1:21'
  // '<S21>:1:29'
  // '<S21>:1:64'
  // '<S21>:1:52'
  for (idx_1 = 0; idx_1 < 200; idx_1++) {
    varargin_1[idx_1] = fabs(imperix_ctrl_P.KF.we_list[idx_1] - rtb_Gain3);
  }

  if (!rtIsNaN(varargin_1[0])) {
    i = 1;
  } else {
    i = 0;
    idx_1 = 2;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 201)) {
      if (!rtIsNaN(varargin_1[idx_1 - 1])) {
        i = idx_1;
        exitg1 = true;
      } else {
        idx_1++;
      }
    }
  }

  if (i == 0) {
    iindx = 1;
  } else {
    rtb_IntegralGain_dr = varargin_1[i - 1];
    iindx = i;
    for (jmax = i + 1; jmax < 201; jmax++) {
      idx_2 = varargin_1[jmax - 1];
      if (rtb_IntegralGain_dr > idx_2) {
        rtb_IntegralGain_dr = idx_2;
        iindx = jmax;
      }
    }
  }

  // '<S21>:1:52'
  idx_1 = iindx - 1;

  // '<S21>:1:53'
  idx_2 = rtb_Gain3 - imperix_ctrl_P.KF.we_list[iindx - 1];
  if (rtIsNaN(idx_2)) {
    rtb_Sum_j = (rtNaN);
  } else if (idx_2 < 0.0) {
    rtb_Sum_j = -1.0;
  } else {
    rtb_Sum_j = (idx_2 > 0.0);
  }

  idx_2 = static_cast<real_T>(iindx) + rtb_Sum_j;

  // '<S21>:1:55'
  y = rtIsNaN(idx_2);
  if ((iindx <= idx_2) || y) {
    i = iindx;
  } else {
    i = static_cast<int32_T>(idx_2);
  }

  if (i == 0) {
    // '<S21>:1:56'
    // '<S21>:1:57'
    idx_1 = iindx;

    // '<S21>:1:58'
    idx_2++;
  } else {
    if ((iindx >= idx_2) || y) {
      i = iindx;
    } else {
      i = static_cast<int32_T>(idx_2);
    }

    if (i == 201) {
      // '<S21>:1:59'
      // '<S21>:1:60'
      idx_1 = iindx - 2;

      // '<S21>:1:61'
      idx_2--;
    }
  }

  // '<S21>:1:64'
  // '<S21>:1:65'
  // '<S21>:1:67'
  D = imperix_ctrl_P.KF.we_list[1] - imperix_ctrl_P.KF.we_list[0];

  // '<S21>:1:68'
  rtb_Integrator_fi = fabs(rtb_Gain3 - imperix_ctrl_P.KF.we_list
    [static_cast<int32_T>(idx_2) - 1]) / D;

  // '<S21>:1:69'
  D = fabs(rtb_Gain3 - imperix_ctrl_P.KF.we_list[idx_1]) / D;

  // '<S21>:1:71'
  // '<S21>:1:30'
  rtb_Saturation = imperix_ctrl_DW.xt_est_apriori[1];
  rtb_Sum_ak = imperix_ctrl_DW.xt_est_apriori[0];
  rtb_Saturation_i = imperix_ctrl_DW.xt_est_apriori[2];
  rtb_Sum_m = imperix_ctrl_DW.xt_est_apriori[3];
  for (i = 0; i < 2; i++) {
    jmax = i << 2;
    iindx = ((static_cast<int32_T>(idx_2) - 1) << 3) + jmax;
    b_a_tmp = (idx_1 << 3) + jmax;
    b_a[jmax] = imperix_ctrl_P.KF.gain_schedule[iindx] * D +
      imperix_ctrl_P.KF.gain_schedule[b_a_tmp] * rtb_Integrator_fi;
    b_a[jmax + 1] = imperix_ctrl_P.KF.gain_schedule[iindx + 1] * D +
      imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 1] * rtb_Integrator_fi;
    b_a[jmax + 2] = imperix_ctrl_P.KF.gain_schedule[iindx + 2] * D +
      imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 2] * rtb_Integrator_fi;
    b_a[jmax + 3] = imperix_ctrl_P.KF.gain_schedule[iindx + 3] * D +
      imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 3] * rtb_Integrator_fi;
    rtb_ie_sat[i] = rtb_Gain1_l[i] - (((imperix_ctrl_DW.C[i + 2] *
      rtb_Saturation + imperix_ctrl_DW.C[i] * rtb_Sum_ak) + imperix_ctrl_DW.C[i
      + 4] * rtb_Saturation_i) + imperix_ctrl_DW.C[i + 6] * rtb_Sum_m);
  }

  idx_2 = rtb_ie_sat[1];
  D = rtb_ie_sat[0];
  for (i = 0; i < 4; i++) {
    rtb_Saturation = (b_a[i + 4] * idx_2 + b_a[i] * D) +
      imperix_ctrl_DW.xt_est_apriori[i];
    xt_est[i] = rtb_Saturation;
    b_x[i] = rtIsNaN(rtb_Saturation);
  }

  y = true;
  jmax = 0;
  exitg1 = false;
  while ((!exitg1) && (jmax < 4)) {
    if (!b_x[jmax]) {
      y = false;
      exitg1 = true;
    } else {
      jmax++;
    }
  }

  if (y) {
    // '<S21>:1:33'
    xt_est[0] = 0.0;
    xt_est[1] = 0.0;
    xt_est[2] = 0.0;
    xt_est[3] = 0.0;
  }

  // '<S21>:1:37'
  // '<S21>:1:38'
  for (i = 0; i < 4; i++) {
    rtb_Sum_j = 0.0;
    rtb_Integrator_fi = 0.0;
    tmp_6 = 0.0;
    tmp_a = 0.0;
    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      tmp_3 = M[(i << 2) + idx_1];
      iindx = idx_1 << 2;
      rtb_Sum_j += A[iindx] * imperix_ctrl_P.KF.Ts * tmp_3;
      rtb_Integrator_fi += A[iindx + 1] * imperix_ctrl_P.KF.Ts * tmp_3;
      tmp_6 += A[iindx + 2] * imperix_ctrl_P.KF.Ts * tmp_3;
      tmp_a += A[iindx + 3] * imperix_ctrl_P.KF.Ts * tmp_3;
    }

    idx_1 = i << 2;
    tmp_0[idx_1] = rtb_Sum_j + imperix_ctrl_DW.Inx[0];
    tmp_0[idx_1 + 1] = rtb_Integrator_fi + imperix_ctrl_DW.Inx[1];
    tmp_0[idx_1 + 2] = tmp_6 + imperix_ctrl_DW.Inx[2];
    tmp_0[idx_1 + 3] = tmp_a + imperix_ctrl_DW.Inx[3];
  }

  for (i = 0; i < 2; i++) {
    idx_2 = 0.0;
    D = 0.0;
    rtb_Saturation = 0.0;
    rtb_Sum_ak = 0.0;
    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      rtb_Sum_j = imperix_ctrl_P.KF.B[(i << 2) + idx_1];
      jmax = idx_1 << 2;
      idx_2 += M[jmax] * rtb_Sum_j;
      D += M[jmax + 1] * rtb_Sum_j;
      rtb_Saturation += M[jmax + 2] * rtb_Sum_j;
      rtb_Sum_ak += M[jmax + 3] * rtb_Sum_j;
    }

    jmax = i << 2;
    b_a[jmax + 3] = rtb_Sum_ak;
    b_a[jmax + 2] = rtb_Saturation;
    b_a[jmax + 1] = D;
    b_a[jmax] = idx_2;
  }

  for (i = 0; i < 8; i++) {
    M_0[i] = b_a[i] * imperix_ctrl_P.KF.Ts;
  }

  rtb_IC = 0.0;
  tmp_5 = 0.0;
  tmp_6 = 0.0;
  rtb_Saturation_i = 0.0;
  for (i = 0; i < 4; i++) {
    rtb_Sum_j = xt_est[i];
    idx_1 = i << 2;
    rtb_IC += tmp_0[idx_1] * rtb_Sum_j;
    tmp_5 += tmp_0[idx_1 + 1] * rtb_Sum_j;
    tmp_6 += tmp_0[idx_1 + 2] * rtb_Sum_j;
    rtb_Saturation_i += tmp_0[idx_1 + 3] * rtb_Sum_j;
  }

  idx_2 = 0.0;
  D = 0.0;
  rtb_Saturation = 0.0;
  rtb_Sum_ak = 0.0;
  for (i = 0; i < 2; i++) {
    rtb_Sum_j = imperix_ctrl_DW.UnitDelay_DSTATE[i];
    jmax = i << 2;
    idx_2 += M_0[jmax] * rtb_Sum_j;
    D += M_0[jmax + 1] * rtb_Sum_j;
    rtb_Saturation += M_0[jmax + 2] * rtb_Sum_j;
    rtb_Sum_ak += M_0[jmax + 3] * rtb_Sum_j;
  }

  imperix_ctrl_DW.xt_est_apriori[0] = rtb_IC + idx_2;
  imperix_ctrl_DW.xt_est_apriori[1] = tmp_5 + D;
  imperix_ctrl_DW.xt_est_apriori[2] = tmp_6 + rtb_Saturation;
  imperix_ctrl_DW.xt_est_apriori[3] = rtb_Saturation_i + rtb_Sum_ak;

  // ComplexToMagnitudeAngle: '<S64>/Complex to Magnitude-Angle' incorporates:
  //   MATLAB Function: '<S1>/Kalman Filter'

  // '<S21>:1:39'
  // '<S21>:1:42'
  // '<S21>:1:43'
  // '<S21>:1:44'
  rtb_Integrator_fi = rt_hypotd_snf(xt_est[2], xt_est[3]);

  // Sum: '<S1>/Sum2'
  idx_2 = rtb_F - rtb_Integrator_fi;

  // Sum: '<S154>/Sum' incorporates:
  //   DiscreteIntegrator: '<S145>/Integrator'
  //   Gain: '<S150>/Proportional Gain'

  D = imperix_ctrl_P.FOC.kp_F * idx_2 + imperix_ctrl_DW.Integrator_DSTATE_i;

  // Saturate: '<S152>/Saturation'
  if (D > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation = imperix_ctrl_P.FOC.u_max;
  } else if (D < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation = D;
  }

  // End of Saturate: '<S152>/Saturation'

  // Sum: '<S1>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   MATLAB Function: '<S1>/IM references'

  rtb_Sum1_f = imperix_ctrl_DW.w_max * rtb_Sum1_f - imperix_ctrl_B.ADC_f;

  // Sum: '<S326>/Sum' incorporates:
  //   DiscreteIntegrator: '<S317>/Integrator'
  //   Gain: '<S322>/Proportional Gain'

  rtb_Sum_ak = imperix_ctrl_P.FOC.kp_w * rtb_Sum1_f +
    imperix_ctrl_DW.Integrator_DSTATE_d;

  // Saturate: '<S324>/Saturation'
  if (rtb_Sum_ak > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_i = imperix_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_ak < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_i = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_i = rtb_Sum_ak;
  }

  // End of Saturate: '<S324>/Saturation'

  // InitialCondition: '<S64>/IC' incorporates:
  //   ComplexToMagnitudeAngle: '<S64>/Complex to Magnitude-Angle'
  //   MATLAB Function: '<S1>/Kalman Filter'

  if (imperix_ctrl_DW.IC_FirstOutputTime) {
    imperix_ctrl_DW.IC_FirstOutputTime = false;
    rtb_IC = imperix_ctrl_P.IC_Value;
  } else {
    rtb_IC = rt_atan2d_snf(xt_est[3], xt_est[2]);
  }

  // End of InitialCondition: '<S64>/IC'

  // RelationalOperator: '<S572>/Compare' incorporates:
  //   Constant: '<S571>/Constant'
  //   Constant: '<S572>/Constant'

  rtb_Compare = (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S571>/Subsystem1'
  imperix_ctrl_Subsystem1(rtb_Compare, rtb_Saturation, rtb_Saturation_i, rtb_IC,
    &imperix_ctrl_B.Fcn, &imperix_ctrl_B.Fcn1);

  // End of Outputs for SubSystem: '<S571>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S571>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S573>/Compare' incorporates:
  //   Constant: '<S571>/Constant'
  //   Constant: '<S573>/Constant'

  imperix_c_Subsystempi2delay(static_cast<uint8_T>
    (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
     imperix_ctrl_P.CompareToConstant1_const), rtb_Saturation, rtb_Saturation_i,
    rtb_IC, &imperix_ctrl_B.Fcn_c, &imperix_ctrl_B.Fcn1_e);

  // End of Outputs for SubSystem: '<S571>/Subsystem - pi//2 delay'

  // Switch: '<S571>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_j[0] = imperix_ctrl_B.Fcn;
    rtb_Switch_j[1] = imperix_ctrl_B.Fcn1;
  } else {
    rtb_Switch_j[0] = imperix_ctrl_B.Fcn_c;
    rtb_Switch_j[1] = imperix_ctrl_B.Fcn1_e;
  }

  // End of Switch: '<S571>/Switch'

  // Gain: '<S25>/Gain5'
  for (i = 0; i < 6; i++) {
    rtb_Gain_j[i] = -imperix_ctrl_P.RFT.ab2abc[i];
  }

  rtb_Sum_m = 0.0;
  rtb_Saturation_h = 0.0;
  rtb_Switch_g_idx_1 = 0.0;
  for (i = 0; i < 2; i++) {
    rtb_Sum_j = rtb_Switch_j[i];
    rtb_Sum_m += rtb_Gain_j[3 * i] * rtb_Sum_j;
    rtb_Saturation_h += rtb_Gain_j[3 * i + 1] * rtb_Sum_j;
    rtb_Switch_g_idx_1 += rtb_Gain_j[3 * i + 2] * rtb_Sum_j;
  }

  rtb_TmpSignalConversionAtGain2I[4] = rtb_Switch_g_idx_1;
  rtb_TmpSignalConversionAtGain2I[3] = rtb_Saturation_h;
  rtb_TmpSignalConversionAtGain2I[2] = rtb_Sum_m;

  // End of Gain: '<S25>/Gain5'

  // Gain: '<S25>/Gain7'
  for (i = 0; i < 6; i++) {
    rtb_Gain7[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    rtb_Sum_j = rtb_TmpSignalConversionAtGain2I[i];
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      rtb_Gain7[idx_1] += imperix_ctrl_P.M2C.pinvA[6 * i + idx_1] * rtb_Sum_j;
    }
  }

  // End of Gain: '<S25>/Gain7'

  // Sum: '<S1>/Sum' incorporates:
  //   Bias: '<S1>/Add Constant1'
  //   Gain: '<S1>/Gain5'
  //   Product: '<S1>/Divide'

  rtb_F = rtb_Saturation_i / (rtb_F + imperix_ctrl_P.AddConstant1_Bias) *
    (imperix_ctrl_P.IM.Lm / imperix_ctrl_P.IM.tau_r) + rtb_Gain3;

  // Gain: '<S60>/Gain'
  rtb_IntegralGain_dr = imperix_ctrl_P.IM.Lo * rtb_F;

  // RelationalOperator: '<S529>/Compare' incorporates:
  //   Constant: '<S527>/Constant'
  //   Constant: '<S529>/Constant'

  rtb_Compare = (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const_o);

  // Outputs for Enabled SubSystem: '<S527>/Subsystem1' incorporates:
  //   EnablePort: '<S532>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S532>/Fcn' incorporates:
    //   Fcn: '<S532>/Fcn1'

    rtb_Gain3 = sin(rtb_IC);
    rtb_Sum_m = cos(rtb_IC);

    // Fcn: '<S532>/Fcn'
    imperix_ctrl_B.Fcn_l = rtb_Gain1_l[0] * rtb_Sum_m + rtb_Gain1_l[1] *
      rtb_Gain3;

    // Fcn: '<S532>/Fcn1'
    imperix_ctrl_B.Fcn1_b = -rtb_Gain1_l[0] * rtb_Gain3 + rtb_Gain1_l[1] *
      rtb_Sum_m;
  }

  // End of Outputs for SubSystem: '<S527>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S527>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S531>/Enable'

  // RelationalOperator: '<S530>/Compare' incorporates:
  //   Constant: '<S527>/Constant'
  //   Constant: '<S530>/Constant'

  if (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_ctrl_P.CompareToConstant1_const_o) {
    // Fcn: '<S531>/Fcn' incorporates:
    //   Fcn: '<S531>/Fcn1'

    rtb_Gain3 = cos(rtb_IC);
    rtb_Sum_m = sin(rtb_IC);

    // Fcn: '<S531>/Fcn'
    imperix_ctrl_B.Fcn_ct = rtb_Gain1_l[0] * rtb_Sum_m - rtb_Gain1_l[1] *
      rtb_Gain3;

    // Fcn: '<S531>/Fcn1'
    imperix_ctrl_B.Fcn1_p = rtb_Gain1_l[0] * rtb_Gain3 + rtb_Gain1_l[1] *
      rtb_Sum_m;
  }

  // End of RelationalOperator: '<S530>/Compare'
  // End of Outputs for SubSystem: '<S527>/Subsystem - pi//2 delay'

  // Switch: '<S527>/Switch'
  if (rtb_Compare != 0) {
    rtb_Gain3 = imperix_ctrl_B.Fcn_l;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1_b;
  } else {
    rtb_Gain3 = imperix_ctrl_B.Fcn_ct;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1_p;
  }

  // End of Switch: '<S527>/Switch'

  // Sum: '<S60>/Sum6'
  rtb_Gain3 = rtb_Saturation - rtb_Gain3;

  // Sum: '<S394>/Sum' incorporates:
  //   DiscreteIntegrator: '<S385>/Integrator'
  //   Gain: '<S390>/Proportional Gain'

  rtb_Sum_m = imperix_ctrl_P.MCC.kp * rtb_Gain3 +
    imperix_ctrl_DW.Integrator_DSTATE_j;

  // Saturate: '<S392>/Saturation'
  if (rtb_Sum_m > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_h = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_m < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_h = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_h = rtb_Sum_m;
  }

  // End of Saturate: '<S392>/Saturation'

  // Sum: '<S60>/Sum' incorporates:
  //   Product: '<S60>/Product1'

  rtb_Sum_j = rtb_Saturation_h - rtb_IntegralGain_dr * rtb_Saturation_i;

  // Sum: '<S60>/Sum8'
  rtb_Switch_g_idx_1 = rtb_Saturation_i - rtb_Switch_g_idx_1;

  // Sum: '<S446>/Sum' incorporates:
  //   DiscreteIntegrator: '<S437>/Integrator'
  //   Gain: '<S442>/Proportional Gain'

  rtb_Sum_h = imperix_ctrl_P.MCC.kp * rtb_Switch_g_idx_1 +
    imperix_ctrl_DW.Integrator_DSTATE_e;

  // Saturate: '<S444>/Saturation'
  if (rtb_Sum_h > imperix_ctrl_P.MCC.u_max) {
    rtb_Gain8 = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_h < -imperix_ctrl_P.MCC.u_max) {
    rtb_Gain8 = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Gain8 = rtb_Sum_h;
  }

  // End of Saturate: '<S444>/Saturation'

  // Sum: '<S60>/Sum1' incorporates:
  //   Product: '<S60>/Product'

  rtb_IntegralGain_dr = rtb_Saturation * rtb_IntegralGain_dr + rtb_Gain8;

  // RelationalOperator: '<S455>/Compare' incorporates:
  //   Constant: '<S350>/Constant'
  //   Constant: '<S455>/Constant'

  rtb_Compare = (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment_l ==
                 imperix_ctrl_P.CompareToConstant_const_l);

  // Outputs for Enabled SubSystem: '<S350>/Subsystem1'
  imperix_ctrl_Subsystem1(rtb_Compare, rtb_Sum_j, rtb_IntegralGain_dr, rtb_IC,
    &imperix_ctrl_B.Fcn_b, &imperix_ctrl_B.Fcn1_i);

  // End of Outputs for SubSystem: '<S350>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S350>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S456>/Compare' incorporates:
  //   Constant: '<S350>/Constant'
  //   Constant: '<S456>/Constant'

  imperix_c_Subsystempi2delay(static_cast<uint8_T>
    (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment_l ==
     imperix_ctrl_P.CompareToConstant1_const_l), rtb_Sum_j, rtb_IntegralGain_dr,
    rtb_IC, &imperix_ctrl_B.Fcn_d, &imperix_ctrl_B.Fcn1_d);

  // End of Outputs for SubSystem: '<S350>/Subsystem - pi//2 delay'

  // Switch: '<S350>/Switch' incorporates:
  //   UnitDelay: '<S60>/Unit Delay'

  if (rtb_Compare != 0) {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_b;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_i;
  } else {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_d;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_d;
  }

  // End of Switch: '<S350>/Switch'

  // SignalConversion generated from: '<S59>/Gain2' incorporates:
  //   Constant: '<S59>/vx'

  rtb_IntegralGain_dr = imperix_ctrl_P.M2C.Vdc / 2.0;

  // SignalConversion generated from: '<S347>/Gain3' incorporates:
  //   UnitDelay: '<S60>/Unit Delay'

  rtb_Gain1_l[0] = imperix_ctrl_DW.UnitDelay_DSTATE[0];
  rtb_Gain1_l[1] = imperix_ctrl_DW.UnitDelay_DSTATE[1];
  rtb_Gain1_l[2] = 0.0;

  // Gain: '<S347>/Gain3'
  rtb_IC = 0.0;
  tmp_5 = 0.0;
  tmp_6 = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_Sum_j = rtb_Gain1_l[i];
    rtb_IC += imperix_ctrl_P.Gain3_Gain_p[3 * i] * rtb_Sum_j;
    tmp_5 += imperix_ctrl_P.Gain3_Gain_p[3 * i + 1] * rtb_Sum_j;
    tmp_6 += imperix_ctrl_P.Gain3_Gain_p[3 * i + 2] * rtb_Sum_j;
  }

  // End of Gain: '<S347>/Gain3'

  // SignalConversion generated from: '<S59>/Gain2' incorporates:
  //   Constant: '<S59>/vx'

  rtb_TmpSignalConversionAtGain2I[0] = rtb_IntegralGain_dr;
  rtb_TmpSignalConversionAtGain2I[1] = -rtb_IntegralGain_dr;
  rtb_TmpSignalConversionAtGain2I[2] = rtb_IC;
  rtb_TmpSignalConversionAtGain2I[3] = tmp_5;
  rtb_TmpSignalConversionAtGain2I[4] = tmp_6;

  // Gain: '<S59>/Gain2'
  for (i = 0; i < 6; i++) {
    rtb_Gain2_k0[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    rtb_Sum_j = rtb_TmpSignalConversionAtGain2I[i];
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      rtb_Gain2_k0[idx_1] += imperix_ctrl_P.Gain2_Gain_o[6 * i + idx_1] *
        rtb_Sum_j;
    }
  }

  // End of Gain: '<S59>/Gain2'

  // MATLAB Function: '<S25>/Saturation' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'
  //   RateTransition generated from: '<S25>/Saturation'

  // MATLAB Function 'Closed_loop_control/NN CEC/Saturation': '<S166>:1'
  // '<S166>:1:49'
  // '<S166>:1:56'
  // '<S166>:1:4'
  // '<S166>:1:5'
  if (!imperix_ctrl_DW.Ac_not_empty) {
    // '<S166>:1:10'
    // '<S166>:1:11'
    for (i = 0; i < 6; i++) {
      rtb_IntegralGain_dr = imperix_ctrl_P.M2C.N[i];
      imperix_ctrl_DW.Ac[i] = rtb_IntegralGain_dr;
      imperix_ctrl_DW.Ac[i + 6] = -rtb_IntegralGain_dr;
      rtb_IntegralGain_dr = imperix_ctrl_P.M2C.N[i + 6];
      imperix_ctrl_DW.Ac[i + 12] = rtb_IntegralGain_dr;
      imperix_ctrl_DW.Ac[i + 18] = -rtb_IntegralGain_dr;
    }

    imperix_ctrl_DW.Ac_not_empty = true;

    // '<S166>:1:13'
    // '<S166>:1:17'
    imperix_ctrl_DW.is_max_e = imperix_ctrl_P.M2C.is_max;

    // '<S166>:1:18'
    imperix_ctrl_DW.SolverOpts.UseHessianAsInput = true;
    imperix_ctrl_DW.SolverOpts.IntegrityChecks = true;
    imperix_ctrl_DW.SolverOpts.MaxIterations = 100;
    imperix_ctrl_DW.SolverOpts.ConstraintTolerance = imperix_ctrl_DW.Tol;
  }

  // '<S166>:1:23'
  for (i = 0; i < 6; i++) {
    rtb_Sum_j = rtb_Gain7[i];
    bc[i] = imperix_ctrl_DW.is_max_e - rtb_Sum_j;
    bc[i + 6] = imperix_ctrl_DW.is_max_e + rtb_Sum_j;
  }

  // '<S166>:1:30'
  rtb_IntegralGain_dr = imperix_ctrl_B.TmpRTBAtSaturationInport1[1];
  rtb_Sum_j = imperix_ctrl_B.TmpRTBAtSaturationInport1[0];
  for (i = 0; i < 12; i++) {
    lb[i] = (imperix_ctrl_DW.Ac[i + 12] * rtb_IntegralGain_dr +
             imperix_ctrl_DW.Ac[i] * rtb_Sum_j) - bc[i];
  }

  if (!rtIsNaN(lb[0])) {
    i = 1;
  } else {
    i = 0;
    idx_1 = 2;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 13)) {
      if (!rtIsNaN(lb[idx_1 - 1])) {
        i = idx_1;
        exitg1 = true;
      } else {
        idx_1++;
      }
    }
  }

  if (i == 0) {
    rtb_IntegralGain_dr = lb[0];
  } else {
    rtb_IntegralGain_dr = lb[i - 1];
    for (idx_1 = i + 1; idx_1 < 13; idx_1++) {
      rtb_Sum_j = lb[idx_1 - 1];
      if (rtb_IntegralGain_dr < rtb_Sum_j) {
        rtb_IntegralGain_dr = rtb_Sum_j;
      }
    }
  }

  if (imperix_ctrl_DW.Tol < rtb_IntegralGain_dr) {
    // '<S166>:1:31'
    // '<S166>:1:33'
    if (imperix_ctrl_DW.SolverOpts.UseHessianAsInput) {
      u_ref[0] = imperix_ctrl_DW.Ix[0];
      u_ref[1] = imperix_ctrl_DW.Ix[1];
      u_ref[2] = imperix_ctrl_DW.Ix[2];
      u_ref[3] = imperix_ctrl_DW.Ix[3];
      iindx = 0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 2)) {
        idx_1 = (i << 1) + i;
        rtb_Sum_j = 0.0;
        if (i >= 1) {
          for (jmax = 0; jmax < 1; jmax++) {
            rtb_Sum_j += u_ref[1] * u_ref[1];
          }
        }

        rtb_Sum_j = u_ref[idx_1] - rtb_Sum_j;
        if (rtb_Sum_j > 0.0) {
          rtb_Sum_j = sqrt(rtb_Sum_j);
          u_ref[idx_1] = rtb_Sum_j;
          if (i + 1 < 2) {
            rtb_IntegralGain_dr = 1.0 / rtb_Sum_j;
            for (jmax = idx_1 + 2; jmax <= idx_1 + 2; jmax++) {
              u_ref[jmax - 1] *= rtb_IntegralGain_dr;
            }
          }

          i++;
        } else {
          u_ref[idx_1] = rtb_Sum_j;
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
      idx_1 = i << 1;
      rtb_IntegralGain_dr = xt_est[idx_1 + 1];
      rtb_Sum_j = xt_est[idx_1];
      xt_est_0[idx_1] = rtb_IntegralGain_dr * xt_est[1] + rtb_Sum_j * xt_est[0];
      xt_est_0[idx_1 + 1] = rtb_IntegralGain_dr * xt_est[3] + rtb_Sum_j *
        xt_est[2];
      tmp_1[i] = -imperix_ctrl_B.TmpRTBAtSaturationInport1[i];
    }

    for (i = 0; i < 24; i++) {
      bc_1[i] = -imperix_ctrl_DW.Ac[i];
    }

    for (i = 0; i < 12; i++) {
      bc_0[i] = -bc[i];
    }

    imperix_ctrl_qpkwik_d(xt_est, xt_est_0, tmp_1, bc_1, bc_0, iA1,
                          imperix_ctrl_DW.SolverOpts.MaxIterations,
                          imperix_ctrl_DW.SolverOpts.ConstraintTolerance,
                          rtb_ie_sat, lb, &i);

    // '<S166>:1:33'
    // '<S166>:1:34'
  } else {
    // '<S166>:1:36'
    rtb_ie_sat[0] = imperix_ctrl_B.TmpRTBAtSaturationInport1[0];
    rtb_ie_sat[1] = imperix_ctrl_B.TmpRTBAtSaturationInport1[1];
  }

  // '<S166>:1:40'
  // '<S166>:1:49'
  rtb_Gain7[0] = imperix_ctrl_B.ADC_o - rtb_Gain2_k0[0];
  rtb_Gain7[3] = -rtb_Gain2_k0[3];
  rtb_Gain7[1] = imperix_ctrl_B.ADC_e - rtb_Gain2_k0[1];
  rtb_Gain7[4] = -rtb_Gain2_k0[4];
  rtb_Gain7[2] = imperix_ctrl_B.ADC_l - rtb_Gain2_k0[2];
  rtb_Gain7[5] = -rtb_Gain2_k0[5];
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
    rtb_IC = rtb_Gain7[0];
  } else {
    rtb_IC = rtb_Gain7[i - 1];
    for (iindx = i + 1; iindx < 7; iindx++) {
      rtb_Sum_j = rtb_Gain7[iindx - 1];
      if (rtb_IC > rtb_Sum_j) {
        rtb_IC = rtb_Sum_j;
      }
    }
  }

  // '<S166>:1:50'
  rtb_Gain7[0] = -rtb_Gain2_k0[0];
  rtb_Gain7[3] = -static_cast<real_T>(imperix_ctrl_B.ADC_nj) - rtb_Gain2_k0[3];
  rtb_Gain7[1] = -rtb_Gain2_k0[1];
  rtb_Gain7[4] = -static_cast<real_T>(imperix_ctrl_B.ADC_mz) - rtb_Gain2_k0[4];
  rtb_Gain7[2] = -rtb_Gain2_k0[2];
  rtb_Gain7[5] = -static_cast<real_T>(imperix_ctrl_B.ADC_k) - rtb_Gain2_k0[5];
  if (!rtIsNaN(-rtb_Gain2_k0[0])) {
    i = 1;
  } else {
    i = 0;
    idx_1 = 2;
    exitg1 = false;
    while ((!exitg1) && (idx_1 < 7)) {
      if (!rtIsNaN(rtb_Gain7[idx_1 - 1])) {
        i = idx_1;
        exitg1 = true;
      } else {
        idx_1++;
      }
    }
  }

  if (i == 0) {
    rtb_IntegralGain_dr = -rtb_Gain2_k0[0];
  } else {
    rtb_IntegralGain_dr = rtb_Gain7[i - 1];
    for (idx_1 = i + 1; idx_1 < 7; idx_1++) {
      rtb_Sum_j = rtb_Gain7[idx_1 - 1];
      if (rtb_IntegralGain_dr < rtb_Sum_j) {
        rtb_IntegralGain_dr = rtb_Sum_j;
      }
    }
  }

  // '<S166>:1:51'
  if (imperix_ctrl_B.TmpRTBAtSaturationInport1[2] > rtb_IC - 1.0) {
    rtb_IC--;
  } else if (rtIsNaN(imperix_ctrl_B.TmpRTBAtSaturationInport1[2])) {
    if (!rtIsNaN(rtb_IC - 1.0)) {
      rtb_IC--;
    } else {
      rtb_IC = (rtNaN);
    }
  } else {
    rtb_IC = imperix_ctrl_B.TmpRTBAtSaturationInport1[2];
  }

  if ((!(rtb_IC >= rtb_IntegralGain_dr + 1.0)) && (!rtIsNaN(rtb_IntegralGain_dr
        + 1.0))) {
    rtb_IC = rtb_IntegralGain_dr + 1.0;
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
    // '<S166>:1:56'
    rtb_ie_sat[0] = 0.0;
    rtb_ie_sat[1] = 0.0;
  }

  if (rtIsNaN(rtb_IC)) {
    // '<S166>:1:59'
    // '<S166>:1:60'
    rtb_IC = 0.0;
  }

  // Sum: '<S165>/Sum' incorporates:
  //   Gain: '<S165>/Gain1'
  //   Gain: '<S165>/Gain2'
  //   UnitDelay: '<S165>/Unit Delay1'

  imperix_ctrl_DW.UnitDelay1_DSTATE[0] = (1.0 - imperix_ctrl_P.CCMPC.alpha) *
    rtb_ie_sat[0] + imperix_ctrl_P.CCMPC.alpha *
    imperix_ctrl_DW.UnitDelay1_DSTATE[0];
  imperix_ctrl_DW.UnitDelay1_DSTATE[1] = (1.0 - imperix_ctrl_P.CCMPC.alpha) *
    rtb_ie_sat[1] + imperix_ctrl_P.CCMPC.alpha *
    imperix_ctrl_DW.UnitDelay1_DSTATE[1];

  // DataTypeConversion: '<S238>/Data Type Conversion' incorporates:
  //   UnitDelay: '<S165>/Unit Delay1'

  imperix_ctrl_B.DataTypeConversion_o = static_cast<real32_T>
    (imperix_ctrl_DW.UnitDelay1_DSTATE[0]);

  // S-Function (PROBE): '<S238>/S-Function'
  ie_r1 = imperix_ctrl_B.DataTypeConversion_o;

  // DataTypeConversion: '<S240>/Data Type Conversion' incorporates:
  //   UnitDelay: '<S165>/Unit Delay1'

  imperix_ctrl_B.DataTypeConversion_cc = static_cast<real32_T>
    (imperix_ctrl_DW.UnitDelay1_DSTATE[1]);

  // S-Function (PROBE): '<S240>/S-Function'
  ie_r2 = imperix_ctrl_B.DataTypeConversion_cc;

  // DataTypeConversion: '<S242>/Data Type Conversion' incorporates:
  //   MATLAB Function: '<S25>/Saturation'

  imperix_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(rtb_IC);

  // S-Function (PROBE): '<S242>/S-Function'
  vo_r = imperix_ctrl_B.DataTypeConversion_p;

  // DataTypeConversion: '<S244>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain1'

  imperix_ctrl_B.DataTypeConversion_cf = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.FrN * rtb_Integrator_fi);

  // S-Function (PROBE): '<S244>/S-Function'
  Frd = imperix_ctrl_B.DataTypeConversion_cf;

  // DataTypeConversion: '<S246>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(Mean_AccVal);

  // S-Function (PROBE): '<S246>/S-Function'
  Vc_m = imperix_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S248>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'

  imperix_ctrl_B.DataTypeConversion_p2 = imperix_ctrl_B.ADC_c;

  // S-Function (PROBE): '<S248>/S-Function'
  is3 = imperix_ctrl_B.DataTypeConversion_p2;

  // DataTypeConversion: '<S250>/Data Type Conversion' incorporates:
  //   UnitDelay: '<S23>/Unit Delay1'

  imperix_ctrl_B.DataTypeConversion_ol = static_cast<real32_T>
    (imperix_ctrl_DW.UnitDelay1_DSTATE_o);

  // S-Function (PROBE): '<S250>/S-Function'
  Vc_m_f = imperix_ctrl_B.DataTypeConversion_ol;

  // DataTypeConversion: '<S252>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_k1 = static_cast<real32_T>(rtb_Saturation_fb);

  // S-Function (PROBE): '<S252>/S-Function'
  iP_r = imperix_ctrl_B.DataTypeConversion_k1;

  // DataTypeConversion: '<S254>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_n = static_cast<real32_T>(rtb_Gain1_h[0]);

  // S-Function (PROBE): '<S254>/S-Function'
  iP = imperix_ctrl_B.DataTypeConversion_n;

  // Sum: '<S65>/Sum3'
  rtb_IntegralGain_dr = rtb_Saturation_fb - rtb_Gain1_h[0];

  // Sum: '<S517>/Sum' incorporates:
  //   DiscreteIntegrator: '<S508>/Integrator'
  //   Gain: '<S513>/Proportional Gain'

  Mean_AccVal = imperix_ctrl_P.PCC.kp * rtb_IntegralGain_dr +
    imperix_ctrl_DW.Integrator_DSTATE_p;

  // Saturate: '<S515>/Saturation'
  if (Mean_AccVal > imperix_ctrl_P.PCC.u_max) {
    rtb_Sum_j = imperix_ctrl_P.PCC.u_max;
  } else if (Mean_AccVal < -imperix_ctrl_P.PCC.u_max) {
    rtb_Sum_j = -imperix_ctrl_P.PCC.u_max;
  } else {
    rtb_Sum_j = Mean_AccVal;
  }

  // Sum: '<S65>/Sum13' incorporates:
  //   Constant: '<S65>/Constant1'
  //   Saturate: '<S515>/Saturation'

  rtb_Integrator_fi = rtb_Sum_j - 1.5 * imperix_ctrl_P.M2C.Vdc;

  // DataTypeConversion: '<S256>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_kl = static_cast<real32_T>(rtb_Integrator_fi);

  // S-Function (PROBE): '<S256>/S-Function'
  vsP = imperix_ctrl_B.DataTypeConversion_kl;

  // S-Function (TUNABLE_PARAM): '<S595>/S-Function'
  imperix_ctrl_B.SFunction_i = aV_mag;

  // Gain: '<S1>/Gain4'
  rtb_Gain4_g = imperix_ctrl_P.Gain4_Gain * imperix_ctrl_B.SFunction_i;

  // RateTransition generated from: '<S1>/Product1'
  if (tmp) {
    // RateTransition generated from: '<S1>/Product1'
    imperix_ctrl_B.TmpRTBAtProduct1Inport2[0] =
      imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[0];
    imperix_ctrl_B.TmpRTBAtProduct1Inport2[1] =
      imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[1];
    imperix_ctrl_B.TmpRTBAtProduct1Inport2[2] =
      imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[2];
  }

  // Product: '<S1>/Product1'
  rtb_Product1_k_0 = rtb_Gain4_g * imperix_ctrl_B.TmpRTBAtProduct1Inport2[0];

  // Sum: '<S1>/Sum3' incorporates:
  //   Constant: '<S1>/Constant2'

  rtb_Gain2_k0[0] = imperix_ctrl_P.Constant2_Value + rtb_Product1_k_0;

  // Sum: '<S1>/Sum4' incorporates:
  //   Constant: '<S1>/Constant2'

  rtb_Gain2_k0[3] = rtb_Product1_k_0 - imperix_ctrl_P.Constant2_Value;

  // Product: '<S1>/Product1'
  rtb_Product1_k_0 = rtb_Gain4_g * imperix_ctrl_B.TmpRTBAtProduct1Inport2[1];

  // Sum: '<S1>/Sum3' incorporates:
  //   Constant: '<S1>/Constant2'

  rtb_Gain2_k0[1] = imperix_ctrl_P.Constant2_Value + rtb_Product1_k_0;

  // Sum: '<S1>/Sum4' incorporates:
  //   Constant: '<S1>/Constant2'

  rtb_Gain2_k0[4] = rtb_Product1_k_0 - imperix_ctrl_P.Constant2_Value;

  // Product: '<S1>/Product1'
  rtb_Product1_k_0 = rtb_Gain4_g * imperix_ctrl_B.TmpRTBAtProduct1Inport2[2];

  // Sum: '<S1>/Sum3' incorporates:
  //   Constant: '<S1>/Constant2'

  rtb_Gain2_k0[2] = imperix_ctrl_P.Constant2_Value + rtb_Product1_k_0;

  // Sum: '<S1>/Sum4' incorporates:
  //   Constant: '<S1>/Constant2'

  rtb_Gain2_k0[5] = rtb_Product1_k_0 - imperix_ctrl_P.Constant2_Value;

  // Abs: '<S1>/Abs'
  for (i = 0; i < 6; i++) {
    rtb_Gain2_k0[i] = fabs(rtb_Gain2_k0[i]);
  }

  // End of Abs: '<S1>/Abs'

  // DataTypeConversion: '<S258>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'
  //   Gain: '<S1>/Gain6'
  //   Rounding: '<S1>/Round'

  imperix_ctrl_B.DataTypeConversion_ay = static_cast<real32_T>(rt_roundd_snf
    (imperix_ctrl_P.Gain6_Gain * rtb_Gain2_k0[0]) * imperix_ctrl_P.Gain12_Gain);

  // S-Function (PROBE): '<S258>/S-Function'
  D1 = imperix_ctrl_B.DataTypeConversion_ay;

  // DataTypeConversion: '<S260>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'
  //   Gain: '<S1>/Gain7'
  //   Rounding: '<S1>/Round1'

  imperix_ctrl_B.DataTypeConversion_cp = static_cast<real32_T>(rt_roundd_snf
    (imperix_ctrl_P.Gain7_Gain * rtb_Gain2_k0[1]) * imperix_ctrl_P.Gain13_Gain);

  // S-Function (PROBE): '<S260>/S-Function'
  D2 = imperix_ctrl_B.DataTypeConversion_cp;

  // DataTypeConversion: '<S262>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'
  //   Gain: '<S1>/Gain8'
  //   Rounding: '<S1>/Round2'

  imperix_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(rt_roundd_snf
    (imperix_ctrl_P.Gain8_Gain * rtb_Gain2_k0[2]) * imperix_ctrl_P.Gain14_Gain);

  // S-Function (PROBE): '<S262>/S-Function'
  D3 = imperix_ctrl_B.DataTypeConversion_i;

  // DataTypeConversion: '<S264>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'
  //   Gain: '<S1>/Gain9'
  //   Rounding: '<S1>/Round3'

  imperix_ctrl_B.DataTypeConversion_d = static_cast<real32_T>(rt_roundd_snf
    (imperix_ctrl_P.Gain9_Gain * rtb_Gain2_k0[3]) * imperix_ctrl_P.Gain15_Gain);

  // S-Function (PROBE): '<S264>/S-Function'
  D4 = imperix_ctrl_B.DataTypeConversion_d;

  // DataTypeConversion: '<S266>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain10'
  //   Gain: '<S1>/Gain16'
  //   Rounding: '<S1>/Round4'

  imperix_ctrl_B.DataTypeConversion_j = static_cast<real32_T>(rt_roundd_snf
    (imperix_ctrl_P.Gain10_Gain * rtb_Gain2_k0[4]) * imperix_ctrl_P.Gain16_Gain);

  // S-Function (PROBE): '<S266>/S-Function'
  D5 = imperix_ctrl_B.DataTypeConversion_j;

  // DataTypeConversion: '<S268>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain11'
  //   Gain: '<S1>/Gain17'
  //   Rounding: '<S1>/Round5'

  imperix_ctrl_B.DataTypeConversion_ct = static_cast<real32_T>(rt_roundd_snf
    (imperix_ctrl_P.Gain11_Gain * rtb_Gain2_k0[5]) * imperix_ctrl_P.Gain17_Gain);

  // S-Function (PROBE): '<S268>/S-Function'
  D6 = imperix_ctrl_B.DataTypeConversion_ct;

  // DataTypeConversion: '<S270>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'

  imperix_ctrl_B.DataTypeConversion_l = imperix_ctrl_B.ADC_n;

  // S-Function (PROBE): '<S270>/S-Function'
  is4 = imperix_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S272>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'

  imperix_ctrl_B.DataTypeConversion_lx = imperix_ctrl_B.ADC_g;

  // S-Function (PROBE): '<S272>/S-Function'
  is5 = imperix_ctrl_B.DataTypeConversion_lx;

  // DataTypeConversion: '<S274>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion2'

  imperix_ctrl_B.DataTypeConversion_kf = imperix_ctrl_B.ADC_p;

  // S-Function (PROBE): '<S274>/S-Function'
  is6 = imperix_ctrl_B.DataTypeConversion_kf;

  // DataTypeConversion: '<S276>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion_ex = imperix_ctrl_B.ADC_o;

  // S-Function (PROBE): '<S276>/S-Function'
  Vc1 = imperix_ctrl_B.DataTypeConversion_ex;

  // DataTypeConversion: '<S278>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion_p2x = imperix_ctrl_B.ADC_e;

  // S-Function (PROBE): '<S278>/S-Function'
  Vc2 = imperix_ctrl_B.DataTypeConversion_p2x;

  // DataTypeConversion: '<S280>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion_ok = imperix_ctrl_B.ADC_l;

  // S-Function (PROBE): '<S280>/S-Function'
  Vc3 = imperix_ctrl_B.DataTypeConversion_ok;

  // DataTypeConversion: '<S282>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion_jn = imperix_ctrl_B.ADC_nj;

  // S-Function (PROBE): '<S282>/S-Function'
  Vc4 = imperix_ctrl_B.DataTypeConversion_jn;

  // S-Function (TUNABLE_PARAM): '<S591>/S-Function'
  imperix_ctrl_B.SFunction_c = enable;

  // MATLAB Function: '<S1>/LICCs control' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'
  //   Gain: '<S60>/Gain1'
  //   MATLAB Function: '<S25>/Saturation'
  //   UnitDelay: '<S165>/Unit Delay1'
  //   UnitDelay: '<S60>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/LICCs control': '<S22>:1'
  // '<S22>:1:40'
  if (!imperix_ctrl_DW.A_not_empty) {
    // '<S22>:1:5'
    // '<S22>:1:6'
    memcpy(&imperix_ctrl_DW.A[0], &imperix_ctrl_P.CCMPC.A[0], sizeof(real_T) <<
           3U);
    imperix_ctrl_DW.A_not_empty = true;

    // '<S22>:1:7'
    // '<S22>:1:8'
    // '<S22>:1:9'
    // '<S22>:1:10'
    memcpy(&imperix_ctrl_DW.B[0], &imperix_ctrl_P.CCMPC.B[0], sizeof(real_T) <<
           4U);
    memcpy(&imperix_ctrl_DW.H[0], &imperix_ctrl_P.CCMPC.H[0], sizeof(real_T) <<
           4U);
    memcpy(&imperix_ctrl_DW.Q[0], &imperix_ctrl_P.CCMPC.Q[0], sizeof(real_T) <<
           4U);
    memcpy(&imperix_ctrl_DW.R[0], &imperix_ctrl_P.CCMPC.R[0], sizeof(real_T) <<
           4U);

    // '<S22>:1:11'
    memcpy(&imperix_ctrl_DW.Aineq[0], &imperix_ctrl_P.CCMPC.Aineq[0], 96U *
           sizeof(real_T));

    // '<S22>:1:12'
    memcpy(&imperix_ctrl_DW.pinvT[0], &imperix_ctrl_P.CCMPC.pinvT[0], 30U *
           sizeof(real_T));

    // '<S22>:1:16'
    imperix_ctrl_DW.options.UseHessianAsInput = true;
    imperix_ctrl_DW.options.IntegrityChecks = true;
    imperix_ctrl_DW.options.MaxIterations = 10;
    imperix_ctrl_DW.options.ConstraintTolerance = 1.0E-5;
  }

  // '<S22>:1:22'
  // '<S22>:1:25'
  // '<S22>:1:28'
  // '<S22>:1:31'
  // '<S22>:1:34'
  // '<S22>:1:37'
  // '<S22>:1:40'
  xt_est[0] = imperix_ctrl_DW.UnitDelay1_DSTATE[0];
  u_ref[0] = imperix_ctrl_DW.u_prev[0];
  xt_est[1] = imperix_ctrl_DW.UnitDelay1_DSTATE[1];
  u_ref[1] = imperix_ctrl_DW.u_prev[1];
  rtb_Sum_j = imperix_ctrl_P.Gain1_Gain_m * imperix_ctrl_DW.UnitDelay_DSTATE[0];
  xt_est[2] = imperix_ctrl_DW.UnitDelay1_DSTATE[0];
  u_ref[2] = imperix_ctrl_DW.u_prev[0];
  xt_est[3] = imperix_ctrl_DW.UnitDelay1_DSTATE[1];
  u_ref[3] = imperix_ctrl_DW.u_prev[1];
  tmp_5 = imperix_ctrl_P.Gain1_Gain_m * imperix_ctrl_DW.UnitDelay_DSTATE[1];
  for (i = 0; i < 6; i++) {
    rtb_Gain_j[i] = ((imperix_ctrl_DW.pinvT[i + 6] * rtb_Sum_j +
                      imperix_ctrl_DW.pinvT[i] * rtb_Integrator_fi) +
                     imperix_ctrl_DW.pinvT[i + 12] * tmp_5) + rtb_IC;
  }

  // '<S22>:1:41'
  rtb_Gain7[0] = imperix_ctrl_B.ADC_o - rtb_Gain_j[0];
  rtb_Gain7[1] = imperix_ctrl_B.ADC_e - rtb_Gain_j[1];
  rtb_Gain7[2] = imperix_ctrl_B.ADC_l - rtb_Gain_j[2];
  rtb_Gain7[3] = 0.0 - rtb_Gain_j[3];
  rtb_Gain7[4] = 0.0 - rtb_Gain_j[4];
  rtb_Gain7[5] = 0.0 - rtb_Gain_j[5];
  for (i = 0; i < 2; i++) {
    idx_1 = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      bc[idx_1 + jmax] = rtb_Gain7[jmax];
    }
  }

  // '<S22>:1:42'
  rtb_Gain7[0] = 0.0 - rtb_Gain_j[0];
  rtb_Gain7[1] = 0.0 - rtb_Gain_j[1];
  rtb_Gain7[2] = 0.0 - rtb_Gain_j[2];
  rtb_Gain7[3] = -static_cast<real_T>(imperix_ctrl_B.ADC_nj) - rtb_Gain_j[3];
  rtb_Gain7[4] = -static_cast<real_T>(imperix_ctrl_B.ADC_mz) - rtb_Gain_j[4];
  rtb_Gain7[5] = -static_cast<real_T>(imperix_ctrl_B.ADC_k) - rtb_Gain_j[5];
  for (i = 0; i < 2; i++) {
    idx_1 = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      lb[idx_1 + jmax] = rtb_Gain7[jmax];
    }
  }

  // '<S22>:1:43'
  // '<S22>:1:48'
  if (imperix_ctrl_DW.options.UseHessianAsInput) {
    memcpy(&A[0], &imperix_ctrl_DW.H[0], sizeof(real_T) << 4U);
    jmax = 0;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 4)) {
      idx_1 = (i << 2) + i;
      rtb_Sum_j = 0.0;
      if (i >= 1) {
        for (iindx = 0; iindx < i; iindx++) {
          rtb_Integrator_fi = A[(iindx << 2) + i];
          rtb_Sum_j += rtb_Integrator_fi * rtb_Integrator_fi;
        }
      }

      rtb_Sum_j = A[idx_1] - rtb_Sum_j;
      if (rtb_Sum_j > 0.0) {
        rtb_Sum_j = sqrt(rtb_Sum_j);
        A[idx_1] = rtb_Sum_j;
        if (i + 1 < 4) {
          if (i != 0) {
            b_a_tmp = (((i - 1) << 2) + i) + 2;
            for (iindx = i + 2; iindx <= b_a_tmp; iindx += 4) {
              c_tmp = iindx - i;
              rtb_Integrator_fi = -A[(((c_tmp - 2) >> 2) << 2) + i];
              e = c_tmp + 2;
              for (c_tmp = iindx; c_tmp <= e; c_tmp++) {
                A_tmp = ((idx_1 + c_tmp) - iindx) + 1;
                A[A_tmp] += A[c_tmp - 1] * rtb_Integrator_fi;
              }
            }
          }

          rtb_Integrator_fi = 1.0 / rtb_Sum_j;
          b_a_tmp = (idx_1 - i) + 4;
          for (iindx = idx_1 + 2; iindx <= b_a_tmp; iindx++) {
            A[iindx - 1] *= rtb_Integrator_fi;
          }
        }

        i++;
      } else {
        A[idx_1] = rtb_Sum_j;
        jmax = i + 1;
        exitg1 = true;
      }
    }

    if (jmax == 0) {
      jmax = 5;
    }

    for (idx_1 = 2; idx_1 < jmax; idx_1++) {
      for (i = 0; i <= idx_1 - 2; i++) {
        A[i + ((idx_1 - 1) << 2)] = 0.0;
      }
    }

    for (i = 0; i < 4; i++) {
      jmax = i << 2;
      M[jmax] = B[jmax];
      M[jmax + 1] = B[jmax + 1];
      M[jmax + 2] = B[jmax + 2];
      M[jmax + 3] = B[jmax + 3];
    }

    imperix_ctrl_trisolve_f(A, M);
  } else {
    memcpy(&M[0], &imperix_ctrl_DW.H[0], sizeof(real_T) << 4U);
  }

  for (i = 0; i < 24; i++) {
    iA1_0[i] = false;
  }

  rtb_IC = (imperix_ctrl_DW.A[0] * rtb_Gain4_idx_0 + imperix_ctrl_DW.A[4] *
            rtb_Gain4_idx_1) + (imperix_ctrl_DW.B[0] * imperix_ctrl_DW.u_prev[0]
    + imperix_ctrl_DW.u_prev[1] * imperix_ctrl_DW.B[4]);
  tmp_5 = (imperix_ctrl_DW.A[1] * rtb_Gain4_idx_0 + imperix_ctrl_DW.A[5] *
           rtb_Gain4_idx_1) + (imperix_ctrl_DW.u_prev[0] * imperix_ctrl_DW.B[1]
    + imperix_ctrl_DW.u_prev[1] * imperix_ctrl_DW.B[5]);
  rtb_Sum_j = 0.0;
  rtb_Integrator_fi = 0.0;
  tmp_6 = 0.0;
  tmp_a = 0.0;
  for (i = 0; i < 4; i++) {
    tmp_3 = 0.0;
    rtb_Gain4_idx_0 = 0.0;
    rtb_Gain4_idx_1 = 0.0;
    tmp_9 = 0.0;
    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      tmp_4 = imperix_ctrl_DW.Q[(i << 2) + idx_1];
      tmp_3 += 2.0 * imperix_ctrl_DW.B[idx_1] * tmp_4;
      rtb_Gain4_idx_0 += imperix_ctrl_DW.B[idx_1 + 4] * 2.0 * tmp_4;
      rtb_Gain4_idx_1 += imperix_ctrl_DW.B[idx_1 + 8] * 2.0 * tmp_4;
      tmp_9 += imperix_ctrl_DW.B[idx_1 + 12] * 2.0 * tmp_4;
    }

    idx_1 = i << 2;
    tmp_0[idx_1 + 3] = tmp_9;
    tmp_0[idx_1 + 2] = rtb_Gain4_idx_1;
    tmp_0[idx_1 + 1] = rtb_Gain4_idx_0;
    tmp_0[idx_1] = tmp_3;
    xt_est_0[i] = (imperix_ctrl_DW.A[i + 4] * tmp_5 + imperix_ctrl_DW.A[i] *
                   rtb_IC) - xt_est[i];
    tmp_3 = xt_est_0[i];
    rtb_Sum_j += tmp_0[idx_1] * tmp_3;
    rtb_Integrator_fi += tmp_0[idx_1 + 1] * tmp_3;
    tmp_6 += tmp_0[idx_1 + 2] * tmp_3;
    tmp_a += tmp_0[idx_1 + 3] * tmp_3;
  }

  xt_est[0] = 0.0;
  xt_est[1] = 0.0;
  xt_est[2] = 0.0;
  xt_est[3] = 0.0;
  for (i = 0; i < 4; i++) {
    tmp_3 = u_ref[i];
    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      iindx = i << 2;
      b_a_tmp = iindx + idx_1;
      xt_est[idx_1] += imperix_ctrl_DW.R[b_a_tmp] * -2.0 * tmp_3;
      jmax = idx_1 << 2;
      A[b_a_tmp] = ((M[jmax + 1] * M[iindx + 1] + M[jmax] * M[iindx]) + M[jmax +
                    2] * M[iindx + 2]) + M[jmax + 3] * M[iindx + 3];
    }
  }

  u_ref[0] = rtb_Sum_j + xt_est[0];
  u_ref[1] = rtb_Integrator_fi + xt_est[1];
  u_ref[2] = tmp_6 + xt_est[2];
  u_ref[3] = tmp_a + xt_est[3];
  for (i = 0; i < 96; i++) {
    tmp_2[i] = -imperix_ctrl_DW.Aineq[i];
  }

  for (i = 0; i < 12; i++) {
    bc_1[i] = -bc[i];
    bc_1[i + 12] = lb[i];
  }

  imperix_ctrl_qpkwik_g(M, A, u_ref, tmp_2, bc_1, iA1_0,
                        imperix_ctrl_DW.options.MaxIterations,
                        imperix_ctrl_DW.options.ConstraintTolerance, xt_est, lam,
                        &i);

  // '<S22>:1:48'
  // '<S22>:1:50'
  imperix_ctrl_DW.u_prev[0] = xt_est[0];
  imperix_ctrl_DW.u_prev[1] = xt_est[1];

  // End of MATLAB Function: '<S1>/LICCs control'

  // S-Function (IRQ): '<S108>/S-Function' incorporates:
  //   Constant: '<S110>/clk_id'

  // '<S22>:1:53'
  // '<S22>:1:56'
  // S-Function (TUNABLE_PARAM): '<S597>/S-Function'
  imperix_ctrl_B.SFunction_b = af_mag;

  // DeadZone: '<S197>/DeadZone'
  // MATLAB Function 'Closed_loop_control/Modulation index': '<S24>:1'
  // '<S24>:1:4'
  // '<S24>:1:15'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone -= imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone >= -imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_ctrl_P.TEB.u_max;
  }

  // End of DeadZone: '<S197>/DeadZone'

  // Gain: '<S202>/Integral Gain'
  rtb_IntegralGain_k *= imperix_ctrl_P.TEB.ki;

  // DataTypeConversion: '<S335>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1 = static_cast<real32_T>(rtb_Gain2_k0[1]);

  // DataTypeConversion: '<S335>/Data Type Conversion2' incorporates:
  //   Constant: '<S335>/phase'

  imperix_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value);

  // DataTypeConversion: '<S335>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3 = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S339>/generation'
  // S-Function (CB_PWM): '<S340>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_ctrl_B.DataTypeConversion1, 0);

  // End of Outputs for SubSystem: '<S339>/generation'

  // DataTypeConversion: '<S336>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S335>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>(rtb_Gain2_k0[1]);

  // DataTypeConversion: '<S336>/Data Type Conversion2' incorporates:
  //   Constant: '<S336>/phase'

  imperix_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_o);

  // DataTypeConversion: '<S336>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_g = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S341>/generation'
  // S-Function (CB_PWM): '<S342>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_g > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_ctrl_B.DataTypeConversion1_p, 0);

  // End of Outputs for SubSystem: '<S341>/generation'

  // DataTypeConversion: '<S337>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S335>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>(rtb_Gain2_k0[1]);

  // DataTypeConversion: '<S337>/Data Type Conversion2' incorporates:
  //   Constant: '<S337>/phase'

  imperix_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_l);

  // DataTypeConversion: '<S337>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_i = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S343>/generation'
  // S-Function (CB_PWM): '<S344>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_i > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_ctrl_B.DataTypeConversion1_h, 0);

  // End of Outputs for SubSystem: '<S343>/generation'

  // DataTypeConversion: '<S338>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S335>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>(rtb_Gain2_k0[1]);

  // DataTypeConversion: '<S338>/Data Type Conversion2' incorporates:
  //   Constant: '<S338>/phase'

  imperix_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_oo);

  // DataTypeConversion: '<S338>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gf = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S345>/generation'
  // S-Function (CB_PWM): '<S346>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gf > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_ctrl_B.DataTypeConversion1_f, 0);

  // End of Outputs for SubSystem: '<S345>/generation'

  // DataTypeConversion: '<S459>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>(rtb_Gain2_k0[2]);

  // DataTypeConversion: '<S459>/Data Type Conversion2' incorporates:
  //   Constant: '<S459>/phase'

  imperix_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_p);

  // DataTypeConversion: '<S459>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gp = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S463>/generation'
  // S-Function (CB_PWM): '<S464>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gp > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S463>/generation'

  // DataTypeConversion: '<S460>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S459>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>(rtb_Gain2_k0[2]);

  // DataTypeConversion: '<S460>/Data Type Conversion2' incorporates:
  //   Constant: '<S460>/phase'

  imperix_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_pr);

  // DataTypeConversion: '<S460>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gl = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S465>/generation'
  // S-Function (CB_PWM): '<S466>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gl > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_ctrl_B.DataTypeConversion1_e, 0);

  // End of Outputs for SubSystem: '<S465>/generation'

  // DataTypeConversion: '<S461>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S459>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>(rtb_Gain2_k0[2]);

  // DataTypeConversion: '<S461>/Data Type Conversion2' incorporates:
  //   Constant: '<S461>/phase'

  imperix_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_c);

  // DataTypeConversion: '<S461>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_m = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S467>/generation'
  // S-Function (CB_PWM): '<S468>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_m > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S467>/generation'

  // DataTypeConversion: '<S462>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S459>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>(rtb_Gain2_k0[2]);

  // DataTypeConversion: '<S462>/Data Type Conversion2' incorporates:
  //   Constant: '<S462>/phase'

  imperix_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ll);

  // DataTypeConversion: '<S462>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_a = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S469>/generation'
  // S-Function (CB_PWM): '<S470>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_a > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S469>/generation'

  // DeadZone: '<S500>/DeadZone'
  if (Mean_AccVal > imperix_ctrl_P.PCC.u_max) {
    Mean_AccVal -= imperix_ctrl_P.PCC.u_max;
  } else if (Mean_AccVal >= -imperix_ctrl_P.PCC.u_max) {
    Mean_AccVal = 0.0;
  } else {
    Mean_AccVal -= -imperix_ctrl_P.PCC.u_max;
  }

  // End of DeadZone: '<S500>/DeadZone'

  // Gain: '<S505>/Integral Gain'
  rtb_IntegralGain_dr *= imperix_ctrl_P.PCC.ki;

  // Gain: '<S66>/Gain'
  rtb_Sum_j = imperix_ctrl_P.M2C.C * 0.5;

  // RateTransition generated from: '<S66>/Gain' incorporates:
  //   Gain: '<S66>/Gain'
  //   Math: '<S66>/Square'

  if (tmp) {
    for (i = 0; i < 6; i++) {
      // Math: '<S66>/Square'
      rtb_Gain4_idx_0 = rtb_DataTypeConversion1[i];
      imperix_ctrl_DW.TmpRTBAtGainOutport1_Buffer[i] = rtb_Gain4_idx_0 *
        rtb_Gain4_idx_0 * rtb_Sum_j;
    }
  }

  // DataTypeConversion: '<S533>/Data Type Conversion1'
  // MATLAB Function 'Closed_loop_control/Subsystem25/MATLAB Function': '<S526>:1' 
  // '<S526>:1:3'
  // '<S526>:1:4'
  // '<S526>:1:6'
  // '<S526>:1:7'
  // '<S526>:1:9'
  // '<S526>:1:10'
  imperix_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>(rtb_Gain2_k0[3]);

  // DataTypeConversion: '<S533>/Data Type Conversion2' incorporates:
  //   Constant: '<S533>/phase'

  imperix_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_n);

  // DataTypeConversion: '<S533>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_b = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S537>/generation'
  // S-Function (CB_PWM): '<S538>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_b > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S537>/generation'

  // DataTypeConversion: '<S534>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S533>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>(rtb_Gain2_k0[3]);

  // DataTypeConversion: '<S534>/Data Type Conversion2' incorporates:
  //   Constant: '<S534>/phase'

  imperix_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_k);

  // DataTypeConversion: '<S534>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_h = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S539>/generation'
  // S-Function (CB_PWM): '<S540>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_h > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S539>/generation'

  // DataTypeConversion: '<S535>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S533>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>(rtb_Gain2_k0[3]);

  // DataTypeConversion: '<S535>/Data Type Conversion2' incorporates:
  //   Constant: '<S535>/phase'

  imperix_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_py);

  // DataTypeConversion: '<S535>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_e = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S541>/generation'
  // S-Function (CB_PWM): '<S542>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_e > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S541>/generation'

  // DataTypeConversion: '<S536>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S533>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>(rtb_Gain2_k0[3]);

  // DataTypeConversion: '<S536>/Data Type Conversion2' incorporates:
  //   Constant: '<S536>/phase'

  imperix_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ng);

  // DataTypeConversion: '<S536>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_k = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S543>/generation'
  // S-Function (CB_PWM): '<S544>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_k > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S543>/generation'

  // DataTypeConversion: '<S545>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>(rtb_Gain2_k0[4]);

  // DataTypeConversion: '<S545>/Data Type Conversion2' incorporates:
  //   Constant: '<S545>/phase'

  imperix_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_j);

  // DataTypeConversion: '<S545>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_l = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S549>/generation'
  // S-Function (CB_PWM): '<S550>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_l > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_ctrl_B.DataTypeConversion1_a, 2);

  // End of Outputs for SubSystem: '<S549>/generation'

  // DataTypeConversion: '<S546>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S545>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>(rtb_Gain2_k0[4]);

  // DataTypeConversion: '<S546>/Data Type Conversion2' incorporates:
  //   Constant: '<S546>/phase'

  imperix_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_of);

  // DataTypeConversion: '<S546>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_n = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S551>/generation'
  // S-Function (CB_PWM): '<S552>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_n > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_ctrl_B.DataTypeConversion1_k, 2);

  // End of Outputs for SubSystem: '<S551>/generation'

  // DataTypeConversion: '<S547>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S545>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>(rtb_Gain2_k0[4]);

  // DataTypeConversion: '<S547>/Data Type Conversion2' incorporates:
  //   Constant: '<S547>/phase'

  imperix_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_h);

  // DataTypeConversion: '<S547>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_j = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S553>/generation'
  // S-Function (CB_PWM): '<S554>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_j > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_ctrl_B.DataTypeConversion1_l, 2);

  // End of Outputs for SubSystem: '<S553>/generation'

  // DataTypeConversion: '<S548>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S545>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>(rtb_Gain2_k0[4]);

  // DataTypeConversion: '<S548>/Data Type Conversion2' incorporates:
  //   Constant: '<S548>/phase'

  imperix_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_nc);

  // DataTypeConversion: '<S548>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bs = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S555>/generation'
  // S-Function (CB_PWM): '<S556>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bs > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_ctrl_B.DataTypeConversion1_bg, 2);

  // End of Outputs for SubSystem: '<S555>/generation'

  // DataTypeConversion: '<S557>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>(rtb_Gain2_k0[5]);

  // DataTypeConversion: '<S557>/Data Type Conversion2' incorporates:
  //   Constant: '<S557>/phase'

  imperix_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_f);

  // DataTypeConversion: '<S557>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bsx = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S561>/generation'
  // S-Function (CB_PWM): '<S562>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bsx > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_ctrl_B.DataTypeConversion1_d, 2);

  // End of Outputs for SubSystem: '<S561>/generation'

  // DataTypeConversion: '<S558>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S557>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>(rtb_Gain2_k0[5]);

  // DataTypeConversion: '<S558>/Data Type Conversion2' incorporates:
  //   Constant: '<S558>/phase'

  imperix_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_i);

  // DataTypeConversion: '<S558>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_hm = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S563>/generation'
  // S-Function (CB_PWM): '<S564>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_hm > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_ctrl_B.DataTypeConversion1_o, 2);

  // End of Outputs for SubSystem: '<S563>/generation'

  // DataTypeConversion: '<S559>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S557>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>(rtb_Gain2_k0[5]);

  // DataTypeConversion: '<S559>/Data Type Conversion2' incorporates:
  //   Constant: '<S559>/phase'

  imperix_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_a);

  // DataTypeConversion: '<S559>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_ip = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S565>/generation'
  // S-Function (CB_PWM): '<S566>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_ip > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_ctrl_B.DataTypeConversion1_ay, 2);

  // End of Outputs for SubSystem: '<S565>/generation'

  // DataTypeConversion: '<S560>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S557>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>(rtb_Gain2_k0[5]);

  // DataTypeConversion: '<S560>/Data Type Conversion2' incorporates:
  //   Constant: '<S560>/phase'

  imperix_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ns);

  // DataTypeConversion: '<S560>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_o = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S567>/generation'
  // S-Function (CB_PWM): '<S568>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_o > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 2);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 2);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_ctrl_B.DataTypeConversion1_pf, 2);

  // End of Outputs for SubSystem: '<S567>/generation'

  // DataTypeConversion: '<S576>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>(rtb_Gain2_k0[0]);

  // DataTypeConversion: '<S576>/Data Type Conversion2' incorporates:
  //   Constant: '<S576>/phase'

  imperix_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_fa);

  // DataTypeConversion: '<S576>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_d = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S580>/generation'
  // S-Function (CB_PWM): '<S581>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_d > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_ctrl_B.DataTypeConversion1_al, 0);

  // End of Outputs for SubSystem: '<S580>/generation'

  // DataTypeConversion: '<S577>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S576>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>(rtb_Gain2_k0[0]);

  // DataTypeConversion: '<S577>/Data Type Conversion2' incorporates:
  //   Constant: '<S577>/phase'

  imperix_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_hr);

  // DataTypeConversion: '<S577>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bt = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S582>/generation'
  // S-Function (CB_PWM): '<S583>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bt > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_ctrl_B.DataTypeConversion1_ig, 0);

  // End of Outputs for SubSystem: '<S582>/generation'

  // DataTypeConversion: '<S578>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S576>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>(rtb_Gain2_k0[0]);

  // DataTypeConversion: '<S578>/Data Type Conversion2' incorporates:
  //   Constant: '<S578>/phase'

  imperix_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_at);

  // DataTypeConversion: '<S578>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_p = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S584>/generation'
  // S-Function (CB_PWM): '<S585>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_p > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_ctrl_B.DataTypeConversion1_g, 0);

  // End of Outputs for SubSystem: '<S584>/generation'

  // DataTypeConversion: '<S579>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S576>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>(rtb_Gain2_k0[0]);

  // DataTypeConversion: '<S579>/Data Type Conversion2' incorporates:
  //   Constant: '<S579>/phase'

  imperix_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_cq);

  // DataTypeConversion: '<S579>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bm = imperix_ctrl_B.SFunction_c;

  // Outputs for Atomic SubSystem: '<S586>/generation'
  // S-Function (CB_PWM): '<S587>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bm > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_ctrl_B.DataTypeConversion1_gw, 0);

  // End of Outputs for SubSystem: '<S586>/generation'

  // RateTransition generated from: '<S1>/Discrete-Time Integrator' incorporates:
  //   Gain: '<S1>/Gain2'

  if (tmp) {
    imperix_ctrl_DW.TmpRTBAtDiscreteTimeIntegratorI =
      imperix_ctrl_P.Gain2_Gain_f * imperix_ctrl_B.SFunction_b;

    // RateTransition generated from: '<S1>/Energy balance' incorporates:
    //   Gain: '<S1>/Gain2'

    for (i = 0; i < 6; i++) {
      imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[i] =
        rtb_DataTypeConversion1[i];
    }

    // End of RateTransition generated from: '<S1>/Energy balance'

    // RateTransition generated from: '<S1>/Energy balance'
    for (i = 0; i < 5; i++) {
      imperix_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[i] =
        rtb_TmpSignalConversionAtGain2I[i];
    }

    // End of RateTransition generated from: '<S1>/Energy balance'

    // SignalConversion generated from: '<S570>/Gain3'
    rtb_Gain1_l[0] = rtb_Switch_j[0];
    rtb_Gain1_l[1] = rtb_Switch_j[1];
    rtb_Gain1_l[2] = 0.0;

    // Gain: '<S570>/Gain3'
    rtb_IC = 0.0;
    tmp_5 = 0.0;
    tmp_6 = 0.0;
    for (i = 0; i < 3; i++) {
      rtb_Sum_j = rtb_Gain1_l[i];
      rtb_IC += imperix_ctrl_P.Gain3_Gain_m[3 * i] * rtb_Sum_j;
      tmp_5 += imperix_ctrl_P.Gain3_Gain_m[3 * i + 1] * rtb_Sum_j;
      tmp_6 += imperix_ctrl_P.Gain3_Gain_m[3 * i + 2] * rtb_Sum_j;
    }

    // End of Gain: '<S570>/Gain3'

    // RateTransition generated from: '<S1>/Energy balance' incorporates:
    //   Gain: '<S63>/Gain'
    //   Gain: '<S63>/Gain8'

    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[0] = rtb_Saturation_fb;
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[1] =
      imperix_ctrl_P.Gain8_Gain_j * rtb_Saturation_fb;
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[2] =
      imperix_ctrl_P.Gain_Gain * rtb_IC;
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[3] =
      imperix_ctrl_P.Gain_Gain * tmp_5;
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[4] =
      imperix_ctrl_P.Gain_Gain * tmp_6;

    // RateTransition generated from: '<S1>/Energy balance'
    imperix_ctrl_DW.TmpRTBAtEnergybalanceInport5_Bu = rtb_F;
  }

  // MATLAB Function: '<S72>/MATLAB Function'
  // MATLAB Function 'Closed_loop_control/Subsystem6/MATLAB Function': '<S569>:1' 
  if (!imperix_ctrl_DW.is_max_not_empty) {
    // '<S569>:1:5'
    // '<S569>:1:6'
    imperix_ctrl_DW.is_max_not_empty = true;
  }

  // End of MATLAB Function: '<S72>/MATLAB Function'

  // Switch: '<S195>/Switch1' incorporates:
  //   Constant: '<S195>/Clamping_zero'
  //   Constant: '<S195>/Constant'
  //   Constant: '<S195>/Constant2'
  //   RelationalOperator: '<S195>/fix for DT propagation issue'

  // '<S569>:1:9'
  // '<S569>:1:10'
  if (rtb_DeadZone > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_7 = imperix_ctrl_P.Constant_Value;
  } else {
    tmp_7 = imperix_ctrl_P.Constant2_Value_n;
  }

  // Switch: '<S195>/Switch2' incorporates:
  //   Constant: '<S195>/Clamping_zero'
  //   Constant: '<S195>/Constant3'
  //   Constant: '<S195>/Constant4'
  //   RelationalOperator: '<S195>/fix for DT propagation issue1'

  if (rtb_IntegralGain_k > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_8 = imperix_ctrl_P.Constant3_Value;
  } else {
    tmp_8 = imperix_ctrl_P.Constant4_Value;
  }

  // Switch: '<S195>/Switch' incorporates:
  //   Constant: '<S195>/Clamping_zero'
  //   Constant: '<S195>/Constant1'
  //   Logic: '<S195>/AND3'
  //   RelationalOperator: '<S195>/Equal1'
  //   RelationalOperator: '<S195>/Relational Operator'
  //   Switch: '<S195>/Switch1'
  //   Switch: '<S195>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_7 == tmp_8))
  {
    rtb_IntegralGain_k = imperix_ctrl_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S205>/Integrator' incorporates:
  //   Switch: '<S195>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE += imperix_ctrl_P.Integrator_gainval *
    rtb_IntegralGain_k;

  // Update for DiscreteIntegrator: '<S145>/Integrator' incorporates:
  //   Gain: '<S137>/Kb'
  //   Gain: '<S142>/Integral Gain'
  //   Sum: '<S137>/SumI2'
  //   Sum: '<S137>/SumI4'

  imperix_ctrl_DW.Integrator_DSTATE_i += (2.0 * imperix_ctrl_P.FOC.kp_F *
    (rtb_Saturation - D) + imperix_ctrl_P.FOC.ki_F * idx_2) *
    imperix_ctrl_P.Integrator_gainval_a;

  // Update for DiscreteIntegrator: '<S317>/Integrator' incorporates:
  //   Gain: '<S309>/Kb'
  //   Gain: '<S314>/Integral Gain'
  //   Sum: '<S309>/SumI2'
  //   Sum: '<S309>/SumI4'

  imperix_ctrl_DW.Integrator_DSTATE_d += (2.0 * imperix_ctrl_P.FOC.kp_w *
    (rtb_Saturation_i - rtb_Sum_ak) + imperix_ctrl_P.FOC.ki_w * rtb_Sum1_f) *
    imperix_ctrl_P.Integrator_gainval_e;

  // Update for DiscreteIntegrator: '<S385>/Integrator' incorporates:
  //   Gain: '<S377>/Kb'
  //   Gain: '<S382>/Integral Gain'
  //   Sum: '<S377>/SumI2'
  //   Sum: '<S377>/SumI4'

  imperix_ctrl_DW.Integrator_DSTATE_j += ((rtb_Saturation_h - rtb_Sum_m) *
    imperix_ctrl_P.MCC.kp + imperix_ctrl_P.MCC.ki * rtb_Gain3) *
    imperix_ctrl_P.Integrator_gainval_i;

  // Update for DiscreteIntegrator: '<S437>/Integrator' incorporates:
  //   Gain: '<S429>/Kb'
  //   Gain: '<S434>/Integral Gain'
  //   Sum: '<S429>/SumI2'
  //   Sum: '<S429>/SumI4'

  imperix_ctrl_DW.Integrator_DSTATE_e += ((rtb_Gain8 - rtb_Sum_h) *
    imperix_ctrl_P.MCC.kp + imperix_ctrl_P.MCC.ki * rtb_Switch_g_idx_1) *
    imperix_ctrl_P.Integrator_gainval_p;

  // Switch: '<S498>/Switch1' incorporates:
  //   Constant: '<S498>/Clamping_zero'
  //   Constant: '<S498>/Constant'
  //   Constant: '<S498>/Constant2'
  //   RelationalOperator: '<S498>/fix for DT propagation issue'

  if (Mean_AccVal > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_7 = imperix_ctrl_P.Constant_Value_h;
  } else {
    tmp_7 = imperix_ctrl_P.Constant2_Value_a;
  }

  // Switch: '<S498>/Switch2' incorporates:
  //   Constant: '<S498>/Clamping_zero'
  //   Constant: '<S498>/Constant3'
  //   Constant: '<S498>/Constant4'
  //   RelationalOperator: '<S498>/fix for DT propagation issue1'

  if (rtb_IntegralGain_dr > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_8 = imperix_ctrl_P.Constant3_Value_j;
  } else {
    tmp_8 = imperix_ctrl_P.Constant4_Value_a;
  }

  // Switch: '<S498>/Switch' incorporates:
  //   Constant: '<S498>/Clamping_zero'
  //   Constant: '<S498>/Constant1'
  //   Logic: '<S498>/AND3'
  //   RelationalOperator: '<S498>/Equal1'
  //   RelationalOperator: '<S498>/Relational Operator'
  //   Switch: '<S498>/Switch1'
  //   Switch: '<S498>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value_a != Mean_AccVal) && (tmp_7 == tmp_8))
  {
    rtb_IntegralGain_dr = imperix_ctrl_P.Constant1_Value_d;
  }

  // Update for DiscreteIntegrator: '<S508>/Integrator' incorporates:
  //   Switch: '<S498>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE_p += imperix_ctrl_P.Integrator_gainval_a3 *
    rtb_IntegralGain_dr;
}

// Model step function for TID1
void imperix_ctrl_step1(void)          // Sample time: [0.00166667s, 0.0s]
{
  real_T E[324];
  real_T E_tmp[324];
  real_T c_b[324];
  real_T B[108];
  real_T tmp[108];
  real_T b_B[54];
  real_T tmp_0[54];
  real_T tmp_4[36];
  real_T tmp_5[36];
  real_T Ec_pred[18];
  real_T IB[18];
  real_T VB[18];
  real_T is_temp[18];
  real_T tmp_2[15];
  real_T VB_tmp[12];
  real_T tmp_7[9];
  real_T cos_vals[8];
  real_T ie_ref_temp[6];
  real_T tmp_6[6];
  real_T vo_ref_temp_0[6];
  real_T VB_tmp_0[4];
  real_T tmp_1[4];
  real_T maxval[3];
  real_T rtb_VectorConcatenate4[3];
  real_T tmp_8[3];
  real_T vo_ref_temp[3];
  real_T VB_tmp_1;
  real_T VB_tmp_2;
  real_T angles;
  real_T b_b;
  real_T cos_vals_0;
  real_T rtb_Constant;
  real_T tmp_3;
  int32_T E_tmp_0;
  int32_T Tabc2ab_tmp;
  int32_T flag_z;
  int32_T i;
  int32_T ibcol;
  int32_T l;
  boolean_T x[36];
  boolean_T b_x[6];
  boolean_T p;

  // Constant: '<S1>/Constant'
  rtb_Constant = imperix_ctrl_P.M2C.Vc_ref;

  // MATLAB Function: '<S1>/Energy balance' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'
  //   RateTransition generated from: '<S66>/Gain'
  //
  // MATLAB Function 'Closed_loop_control/Energy balance': '<S18>:1'
  if (!imperix_ctrl_DW.Ts_not_empty) {
    // '<S18>:1:5'
    // '<S18>:1:8'
    imperix_ctrl_DW.Ts_not_empty = true;

    // '<S18>:1:9'
    // '<S18>:1:10'
    for (i = 0; i < 6; i++) {
      imperix_ctrl_DW.Tab2abc[i] = imperix_ctrl_P.RFT.ab2abc[i];
      imperix_ctrl_DW.Tabc2ab[i] = imperix_ctrl_P.RFT.abc2ab[i];
    }

    // '<S18>:1:11'
    // '<S18>:1:12'
    memcpy(&imperix_ctrl_DW.A_d[0], &imperix_ctrl_P.M2C.A[0], 30U * sizeof
           (real_T));
    memcpy(&imperix_ctrl_DW.pinvA[0], &imperix_ctrl_P.M2C.pinvA[0], 30U * sizeof
           (real_T));

    // '<S18>:1:13'
    imperix_ctrl_DW.Ts = imperix_ctrl_P.CEMPC.Ts;

    // '<S18>:1:17'
    // '<S18>:1:18'
    memcpy(&imperix_ctrl_DW.K[0], &imperix_ctrl_P.CEMPC.K[0], 324U * sizeof
           (real_T));
    memcpy(&imperix_ctrl_DW.MI[0], &imperix_ctrl_P.CEMPC.MI[0], 324U * sizeof
           (real_T));

    // '<S18>:1:19'
    memcpy(&imperix_ctrl_DW.NN[0], &imperix_ctrl_P.CEMPC.NN[0], 108U * sizeof
           (real_T));

    // '<S18>:1:20'
    memcpy(&imperix_ctrl_DW.ONE[0], &imperix_ctrl_P.CEMPC.ONE[0], 54U * sizeof
           (real_T));

    // '<S18>:1:21'
    imperix_ctrl_DW.Nl = imperix_ctrl_P.CEMPC.Nl;

    // '<S18>:1:22'
    imperix_ctrl_DW.is_max_p = imperix_ctrl_P.M2C.is_max;

    // '<S18>:1:23'
    imperix_ctrl_DW.is_max2 = imperix_ctrl_DW.is_max_p *
      imperix_ctrl_DW.is_max_p;

    // '<S18>:1:24'
    imperix_ctrl_DW.vo_max2 = imperix_ctrl_P.M2C.vo_max *
      imperix_ctrl_P.M2C.vo_max;

    // '<S18>:1:25'
    imperix_ctrl_DW.Ec_ref2 = imperix_ctrl_P.M2C.Ec_ref *
      imperix_ctrl_P.M2C.Ec_ref;

    // '<S18>:1:26'
    memcpy(&imperix_ctrl_DW.Hu_z[0], &imperix_ctrl_P.CEMPC.Hu_z[0], 36U * sizeof
           (real_T));

    // '<S18>:1:27'
    memcpy(&imperix_ctrl_DW.Aineq_z[0], &imperix_ctrl_P.CEMPC.Aineq_z[0], 216U *
           sizeof(real_T));

    // '<S18>:1:28'
    imperix_ctrl_DW.lambda_z = imperix_ctrl_P.CEMPC.lambda_z;

    // '<S18>:1:29'
    memcpy(&imperix_ctrl_DW.Hu_o[0], &imperix_ctrl_P.CEMPC.Hu_o[0], 9U * sizeof
           (real_T));

    // '<S18>:1:30'
    memcpy(&imperix_ctrl_DW.Aineq_o[0], &imperix_ctrl_P.CEMPC.Aineq_o[0], 18U *
           sizeof(real_T));

    // '<S18>:1:31'
    imperix_ctrl_DW.lambda_o = imperix_ctrl_P.CEMPC.lambda_o;

    // '<S18>:1:32'
    imperix_ctrl_DW.Ec_dev = imperix_ctrl_P.M2C.Ec_dev;

    // '<S18>:1:37'
    imperix_ctrl_DW.options_z.UseHessianAsInput = true;
    imperix_ctrl_DW.options_z.IntegrityChecks = true;
    imperix_ctrl_DW.options_z.MaxIterations = 20;
    imperix_ctrl_DW.options_z.ConstraintTolerance = 0.0001;

    // '<S18>:1:40'
    imperix_ctrl_DW.options_o.UseHessianAsInput = true;
    imperix_ctrl_DW.options_o.IntegrityChecks = true;
    imperix_ctrl_DW.options_o.MaxIterations = 10;
    imperix_ctrl_DW.options_o.ConstraintTolerance = 0.0001;
  }

  // '<S18>:1:53'
  // '<S18>:1:54'
  // '<S18>:1:62'
  // '<S18>:1:63'
  // '<S18>:1:67'
  b_b = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport5_Bu * imperix_ctrl_DW.Ts;

  // '<S18>:1:68'
  // '<S18>:1:69'
  // '<S18>:1:70'
  // '<S18>:1:73'
  // '<S18>:1:74'
  // '<S18>:1:79'
  // '<S18>:1:80'
  // '<S18>:1:83'
  // '<S18>:1:84'
  // '<S18>:1:90'
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
  for (flag_z = 0; flag_z < 3; flag_z++) {
    Tabc2ab_tmp = flag_z << 1;
    b_b = imperix_ctrl_DW.Tabc2ab[Tabc2ab_tmp + 1];
    cos_vals_0 = imperix_ctrl_DW.Tabc2ab[Tabc2ab_tmp];
    for (ibcol = 0; ibcol < 4; ibcol++) {
      Tabc2ab_tmp = ibcol << 1;
      VB_tmp[ibcol + (flag_z << 2)] = cos_vals[Tabc2ab_tmp + 1] * b_b +
        cos_vals[Tabc2ab_tmp] * cos_vals_0;
    }
  }

  imperix_ctrl_repmat(&imperix_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[0], tmp_1);
  cos_vals_0 = 0.0;
  angles = 0.0;
  VB_tmp_1 = 0.0;
  VB_tmp_2 = 0.0;
  for (flag_z = 0; flag_z < 3; flag_z++) {
    b_b = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[flag_z + 2];
    Tabc2ab_tmp = flag_z << 2;
    cos_vals_0 += VB_tmp[Tabc2ab_tmp] * b_b;
    angles += VB_tmp[Tabc2ab_tmp + 1] * b_b;
    VB_tmp_1 += VB_tmp[Tabc2ab_tmp + 2] * b_b;
    VB_tmp_2 += VB_tmp[Tabc2ab_tmp + 3] * b_b;
  }

  VB_tmp_0[3] = VB_tmp_2;
  VB_tmp_0[2] = VB_tmp_1;
  VB_tmp_0[1] = angles;
  VB_tmp_0[0] = cos_vals_0;
  for (flag_z = 0; flag_z < 2; flag_z++) {
    b_b = 0.0;
    cos_vals_0 = 0.0;
    angles = 0.0;
    for (ibcol = 0; ibcol < 2; ibcol++) {
      VB_tmp_1 = VB_tmp_0[(flag_z << 1) + ibcol];
      b_b += imperix_ctrl_DW.Tab2abc[3 * ibcol] * VB_tmp_1;
      cos_vals_0 += imperix_ctrl_DW.Tab2abc[3 * ibcol + 1] * VB_tmp_1;
      angles += imperix_ctrl_DW.Tab2abc[3 * ibcol + 2] * VB_tmp_1;
    }

    vo_ref_temp_0[3 * flag_z + 2] = angles;
    vo_ref_temp_0[3 * flag_z + 1] = cos_vals_0;
    vo_ref_temp_0[3 * flag_z] = b_b;
  }

  for (flag_z = 0; flag_z < 5; flag_z++) {
    tmp_2[flag_z] = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[flag_z];
  }

  for (flag_z = 0; flag_z < 2; flag_z++) {
    ibcol = flag_z << 1;
    i = (flag_z + 1) * 5;
    tmp_2[i] = tmp_1[ibcol];
    tmp_2[i + 1] = tmp_1[ibcol + 1];
    tmp_2[i + 2] = vo_ref_temp_0[3 * flag_z];
    tmp_2[i + 3] = vo_ref_temp_0[3 * flag_z + 1];
    tmp_2[i + 4] = vo_ref_temp_0[3 * flag_z + 2];
  }

  // '<S18>:1:91'
  imperix_ctrl_repmat(&imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[0], tmp_1);
  VB_tmp_0[0] = 0.0;
  VB_tmp_0[1] = 0.0;
  VB_tmp_0[2] = 0.0;
  VB_tmp_0[3] = 0.0;
  for (flag_z = 0; flag_z < 3; flag_z++) {
    for (ibcol = 0; ibcol < 6; ibcol++) {
      b_b = 0.0;
      for (i = 0; i < 5; i++) {
        b_b += imperix_ctrl_DW.A_d[5 * ibcol + i] * tmp_2[5 * flag_z + i];
      }

      VB[ibcol + 6 * flag_z] = b_b;
    }

    b_b = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[flag_z + 2];
    Tabc2ab_tmp = flag_z << 2;
    VB_tmp_0[0] += VB_tmp[Tabc2ab_tmp] * b_b;
    VB_tmp_0[1] += VB_tmp[Tabc2ab_tmp + 1] * b_b;
    VB_tmp_0[2] += VB_tmp[Tabc2ab_tmp + 2] * b_b;
    VB_tmp_0[3] += VB_tmp[Tabc2ab_tmp + 3] * b_b;
  }

  for (flag_z = 0; flag_z < 2; flag_z++) {
    b_b = 0.0;
    cos_vals_0 = 0.0;
    angles = 0.0;
    for (ibcol = 0; ibcol < 2; ibcol++) {
      VB_tmp_1 = VB_tmp_0[(flag_z << 1) + ibcol];
      b_b += imperix_ctrl_DW.Tab2abc[3 * ibcol] * VB_tmp_1;
      cos_vals_0 += imperix_ctrl_DW.Tab2abc[3 * ibcol + 1] * VB_tmp_1;
      angles += imperix_ctrl_DW.Tab2abc[3 * ibcol + 2] * VB_tmp_1;
    }

    vo_ref_temp_0[3 * flag_z + 2] = angles;
    vo_ref_temp_0[3 * flag_z + 1] = cos_vals_0;
    vo_ref_temp_0[3 * flag_z] = b_b;
  }

  for (flag_z = 0; flag_z < 5; flag_z++) {
    tmp_2[flag_z] = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[flag_z];
  }

  for (flag_z = 0; flag_z < 2; flag_z++) {
    ibcol = flag_z << 1;
    i = (flag_z + 1) * 5;
    tmp_2[i] = tmp_1[ibcol];
    tmp_2[i + 1] = tmp_1[ibcol + 1];
    tmp_2[i + 2] = vo_ref_temp_0[3 * flag_z];
    tmp_2[i + 3] = vo_ref_temp_0[3 * flag_z + 1];
    tmp_2[i + 4] = vo_ref_temp_0[3 * flag_z + 2];
  }

  for (flag_z = 0; flag_z < 6; flag_z++) {
    IB[flag_z] = 0.0;
    IB[flag_z + 6] = 0.0;
    IB[flag_z + 12] = 0.0;
  }

  // '<S18>:1:94'
  // '<S18>:1:100'
  for (i = 0; i < 3; i++) {
    for (flag_z = 0; flag_z < 5; flag_z++) {
      b_b = tmp_2[5 * i + flag_z];
      for (ibcol = 0; ibcol < 6; ibcol++) {
        Tabc2ab_tmp = 6 * i + ibcol;
        IB[Tabc2ab_tmp] += imperix_ctrl_DW.pinvA[6 * flag_z + ibcol] * b_b;
      }
    }

    vo_ref_temp[i] = 0.0;
  }

  // '<S18>:1:101'
  for (i = 0; i < 6; i++) {
    ie_ref_temp[i] = 0.0;
  }

  // '<S18>:1:102'
  // '<S18>:1:103'
  // '<S18>:1:105'
  Tabc2ab_tmp = static_cast<int32_T>(imperix_ctrl_DW.Nl);

  // '<S18>:1:107'
  if (static_cast<int32_T>(imperix_ctrl_DW.Nl) - 1 >= 0) {
    tmp_3 = imperix_ctrl_DW.Ec_dev * imperix_ctrl_DW.Ec_dev *
      imperix_ctrl_DW.Ec_ref2;
    tmp_6[0] = 0.0;
    tmp_6[1] = 0.0;
    tmp_6[2] = 0.0;
    tmp_6[3] = -imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[3];
    tmp_6[4] = -imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[4];
    tmp_6[5] = -imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[5];
    for (flag_z = 0; flag_z < 324; flag_z++) {
      E_tmp[flag_z] = imperix_ctrl_DW.Ts * imperix_ctrl_DW.K[flag_z];
    }

    for (flag_z = 0; flag_z < 18; flag_z++) {
      b_b = IB[flag_z];
      tmp_5[flag_z] = imperix_ctrl_DW.is_max_p - b_b;
      tmp_5[flag_z + 18] = -(-imperix_ctrl_DW.is_max_p - b_b);
    }
  }

  for (l = 0; l < Tabc2ab_tmp; l++) {
    // '<S18>:1:111'
    b_b = vo_ref_temp[1];
    cos_vals_0 = vo_ref_temp[0];
    angles = vo_ref_temp[2];
    for (flag_z = 0; flag_z < 18; flag_z++) {
      is_temp[flag_z] = ((imperix_ctrl_DW.ONE[flag_z + 18] * b_b +
                          imperix_ctrl_DW.ONE[flag_z] * cos_vals_0) +
                         imperix_ctrl_DW.ONE[flag_z + 36] * angles) + VB[flag_z];
    }

    // '<S18>:1:114'
    memset(&c_b[0], 0, 324U * sizeof(real_T));
    for (flag_z = 0; flag_z < 18; flag_z++) {
      c_b[flag_z + 18 * flag_z] = is_temp[flag_z];
    }

    for (flag_z = 0; flag_z < 18; flag_z++) {
      memset(&E[flag_z * 18], 0, 18U * sizeof(real_T));
      for (ibcol = 0; ibcol < 18; ibcol++) {
        b_b = c_b[18 * flag_z + ibcol];
        for (i = 0; i < 18; i++) {
          E_tmp_0 = 18 * flag_z + i;
          E[E_tmp_0] += E_tmp[18 * ibcol + i] * b_b;
        }
      }
    }

    // '<S18>:1:115'
    for (flag_z = 0; flag_z < 6; flag_z++) {
      memset(&B[flag_z * 18], 0, 18U * sizeof(real_T));
      for (ibcol = 0; ibcol < 18; ibcol++) {
        b_b = imperix_ctrl_DW.NN[18 * flag_z + ibcol];
        for (i = 0; i < 18; i++) {
          E_tmp_0 = 18 * flag_z + i;
          B[E_tmp_0] += E[18 * ibcol + i] * b_b;
        }
      }
    }

    // '<S18>:1:116'
    // '<S18>:1:119'
    // '<S18>:1:121'
    for (flag_z = 0; flag_z < 3; flag_z++) {
      ibcol = flag_z * 6;
      for (i = 0; i < 6; i++) {
        is_temp[ibcol + i] = imperix_ctrl_DW.TmpRTBAtGainOutport1_Buffer[i];
      }
    }

    // '<S18>:1:124'
    // '<S18>:1:127'
    // '<S18>:1:128'
    // '<S18>:1:131'
    // '<S18>:1:132'
    // '<S18>:1:133'
    // '<S18>:1:140'
    for (flag_z = 0; flag_z < 18; flag_z++) {
      for (ibcol = 0; ibcol < 6; ibcol++) {
        tmp[ibcol + 6 * flag_z] = 0.0;
      }

      b_b = 0.0;
      for (ibcol = 0; ibcol < 18; ibcol++) {
        cos_vals_0 = imperix_ctrl_DW.MI[18 * flag_z + ibcol];
        for (i = 0; i < 6; i++) {
          E_tmp_0 = 6 * flag_z + i;
          tmp[E_tmp_0] += B[18 * i + ibcol] * 2.0 * cos_vals_0;
        }

        b_b += E[18 * ibcol + flag_z] * IB[ibcol];
      }

      Ec_pred[flag_z] = is_temp[flag_z] + b_b;
    }

    for (flag_z = 0; flag_z < 6; flag_z++) {
      b_b = 0.0;
      for (ibcol = 0; ibcol < 18; ibcol++) {
        b_b += imperix_ctrl_DW.NN[18 * flag_z + ibcol] * 2.0 * IB[ibcol];
      }

      for (ibcol = 0; ibcol < 6; ibcol++) {
        cos_vals_0 = 0.0;
        for (i = 0; i < 18; i++) {
          cos_vals_0 += tmp[6 * i + flag_z] * B[18 * ibcol + i];
        }

        i = 6 * ibcol + flag_z;
        tmp_4[i] = imperix_ctrl_DW.Hu_z[i] * imperix_ctrl_DW.lambda_z +
          cos_vals_0 / tmp_3;
      }

      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 18; ibcol++) {
        cos_vals_0 += tmp[6 * ibcol + flag_z] * Ec_pred[ibcol];
      }

      vo_ref_temp_0[flag_z] = b_b / imperix_ctrl_DW.is_max2 *
        imperix_ctrl_DW.lambda_z + cos_vals_0 / tmp_3;
    }

    imperix_ctrl_mpcActiveSetSolver(tmp_4, vo_ref_temp_0,
      imperix_ctrl_DW.Aineq_z, tmp_5, imperix_ctrl_DW.options_z.MaxIterations,
      imperix_ctrl_DW.options_z.ConstraintTolerance,
      imperix_ctrl_DW.options_z.UseHessianAsInput, ie_ref_temp, &flag_z, x);

    // '<S18>:1:140'
    // '<S18>:1:145'
    for (flag_z = 0; flag_z < 18; flag_z++) {
      b_b = 0.0;
      for (ibcol = 0; ibcol < 6; ibcol++) {
        b_b += imperix_ctrl_DW.NN[18 * ibcol + flag_z] * ie_ref_temp[ibcol];
      }

      is_temp[flag_z] = IB[flag_z] + b_b;
    }

    // '<S18>:1:148'
    memset(&c_b[0], 0, 324U * sizeof(real_T));
    for (ibcol = 0; ibcol < 18; ibcol++) {
      c_b[ibcol + 18 * ibcol] = is_temp[ibcol];
      memset(&E[ibcol * 18], 0, 18U * sizeof(real_T));
    }

    for (flag_z = 0; flag_z < 18; flag_z++) {
      for (ibcol = 0; ibcol < 18; ibcol++) {
        b_b = c_b[18 * flag_z + ibcol];
        for (i = 0; i < 18; i++) {
          E_tmp_0 = 18 * flag_z + i;
          E[E_tmp_0] += E_tmp[18 * ibcol + i] * b_b;
        }
      }
    }

    // '<S18>:1:149'
    // '<S18>:1:150'
    // '<S18>:1:153'
    // '<S18>:1:154'
    // '<S18>:1:157'
    // '<S18>:1:160'
    // '<S18>:1:161'
    // '<S18>:1:164'
    for (i = 0; i < 3; i++) {
      memset(&b_B[i * 18], 0, 18U * sizeof(real_T));
      for (flag_z = 0; flag_z < 18; flag_z++) {
        b_b = imperix_ctrl_DW.ONE[18 * i + flag_z];
        for (ibcol = 0; ibcol < 18; ibcol++) {
          E_tmp_0 = 18 * i + ibcol;
          b_B[E_tmp_0] += E[18 * flag_z + ibcol] * b_b;
        }
      }

      flag_z = i * 6;
      for (ibcol = 0; ibcol < 6; ibcol++) {
        is_temp[flag_z + ibcol] =
          imperix_ctrl_DW.TmpRTBAtGainOutport1_Buffer[ibcol];
      }

      vo_ref_temp_0[i] = imperix_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[i];
    }

    vo_ref_temp_0[3] = 0.0;
    vo_ref_temp_0[4] = 0.0;
    vo_ref_temp_0[5] = 0.0;
    for (ibcol = 0; ibcol < 3; ibcol++) {
      for (flag_z = 0; flag_z < 6; flag_z++) {
        i = 6 * ibcol + flag_z;
        Ec_pred[i] = vo_ref_temp_0[flag_z] - VB[i];
      }

      vo_ref_temp[ibcol] = Ec_pred[6 * ibcol];
      for (i = 0; i < 5; i++) {
        cos_vals_0 = Ec_pred[(6 * ibcol + i) + 1];
        if (rtIsNaN(cos_vals_0)) {
          p = false;
        } else {
          b_b = vo_ref_temp[ibcol];
          if (rtIsNaN(b_b)) {
            p = true;
          } else {
            p = (b_b > cos_vals_0);
          }
        }

        if (p) {
          vo_ref_temp[ibcol] = cos_vals_0;
        }
      }
    }

    // '<S18>:1:165'
    for (ibcol = 0; ibcol < 3; ibcol++) {
      for (flag_z = 0; flag_z < 6; flag_z++) {
        i = 6 * ibcol + flag_z;
        Ec_pred[i] = tmp_6[flag_z] - VB[i];
      }

      maxval[ibcol] = Ec_pred[6 * ibcol];
      for (flag_z = 0; flag_z < 5; flag_z++) {
        cos_vals_0 = Ec_pred[(6 * ibcol + flag_z) + 1];
        if (rtIsNaN(cos_vals_0)) {
          p = false;
        } else {
          b_b = maxval[ibcol];
          if (rtIsNaN(b_b)) {
            p = true;
          } else {
            p = (b_b < cos_vals_0);
          }
        }

        if (p) {
          maxval[ibcol] = cos_vals_0;
        }
      }
    }

    // '<S18>:1:166'
    // '<S18>:1:171'
    for (flag_z = 0; flag_z < 18; flag_z++) {
      b_b = 0.0;
      cos_vals_0 = 0.0;
      angles = 0.0;
      VB_tmp_1 = 0.0;
      for (ibcol = 0; ibcol < 18; ibcol++) {
        VB_tmp_2 = imperix_ctrl_DW.MI[18 * flag_z + ibcol];
        cos_vals_0 += 2.0 * b_B[ibcol] * VB_tmp_2;
        angles += b_B[ibcol + 18] * 2.0 * VB_tmp_2;
        VB_tmp_1 += b_B[ibcol + 36] * 2.0 * VB_tmp_2;
        b_b += E[18 * ibcol + flag_z] * VB[ibcol];
      }

      tmp_0[3 * flag_z + 2] = VB_tmp_1;
      tmp_0[3 * flag_z + 1] = angles;
      tmp_0[3 * flag_z] = cos_vals_0;
      Ec_pred[flag_z] = is_temp[flag_z] + b_b;
    }

    for (flag_z = 0; flag_z < 3; flag_z++) {
      for (ibcol = 0; ibcol < 3; ibcol++) {
        b_b = 0.0;
        for (i = 0; i < 18; i++) {
          b_b += tmp_0[3 * i + flag_z] * b_B[18 * ibcol + i];
        }

        i = 3 * ibcol + flag_z;
        tmp_7[i] = imperix_ctrl_DW.Hu_o[i] * imperix_ctrl_DW.lambda_o + b_b /
          tmp_3;
      }

      b_b = 0.0;
      for (ibcol = 0; ibcol < 18; ibcol++) {
        b_b += tmp_0[3 * ibcol + flag_z] * Ec_pred[ibcol];
      }

      tmp_8[flag_z] = 0.0 / imperix_ctrl_DW.vo_max2 * imperix_ctrl_DW.lambda_o +
        b_b / tmp_3;
      vo_ref_temp_0[flag_z] = vo_ref_temp[flag_z];
      vo_ref_temp_0[flag_z + 3] = -maxval[flag_z];
    }

    imperix_ct_mpcActiveSetSolver_k(tmp_7, tmp_8, imperix_ctrl_DW.Aineq_o,
      vo_ref_temp_0, imperix_ctrl_DW.options_o.MaxIterations,
      imperix_ctrl_DW.options_o.ConstraintTolerance,
      imperix_ctrl_DW.options_o.UseHessianAsInput, vo_ref_temp, &flag_z, b_x);

    // '<S18>:1:171'
  }

  // MATLAB Function: '<S25>/Input format'
  // '<S18>:1:178'
  // '<S18>:1:179'
  // '<S18>:1:187'
  // '<S18>:1:188'
  // '<S18>:1:189'
  // '<S18>:1:190'
  // '<S18>:1:191'
  // '<S18>:1:192'
  // '<S18>:1:193'
  // '<S18>:1:196'
  // '<S18>:1:197'
  // '<S18>:1:198'
  // '<S18>:1:201'
  // '<S18>:1:203'
  // MATLAB Function 'Closed_loop_control/NN CEC/Input format': '<S164>:1'
  if (!imperix_ctrl_DW.Ec_ref_not_empty) {
    // '<S164>:1:5'
    // '<S164>:1:6'
    imperix_ctrl_DW.Ec_ref_not_empty = true;

    // '<S164>:1:7'
  }

  // End of MATLAB Function: '<S25>/Input format'

  // MATLAB Function: '<S25>/White noise' incorporates:
  //   MATLAB Function: '<S1>/Energy balance'

  // '<S164>:1:11'
  // '<S164>:1:12'
  // '<S164>:1:13'
  // '<S164>:1:16'
  // '<S164>:1:19'
  // '<S164>:1:20'
  // '<S164>:1:23'
  // '<S164>:1:24'
  // '<S164>:1:25'
  // '<S164>:1:28'
  // MATLAB Function 'Closed_loop_control/NN CEC/FFNN/MLFB': '<S168>:1'
  // '<S168>:1:5'
  rtb_VectorConcatenate4[0] = ie_ref_temp[0];
  rtb_VectorConcatenate4[1] = ie_ref_temp[1];
  rtb_VectorConcatenate4[2] = vo_ref_temp[0];

  // MATLAB Function 'Closed_loop_control/NN CEC/White noise': '<S167>:1'
  if (!imperix_ctrl_DW.is_max_not_empty_n) {
    // '<S167>:1:4'
    // '<S167>:1:5'
    imperix_ctrl_DW.is_max_not_empty_n = true;

    // '<S167>:1:6'
  }

  // End of MATLAB Function: '<S25>/White noise'

  // RateTransition generated from: '<S25>/Saturation' incorporates:
  //   Concatenate: '<S25>/Vector Concatenate4'

  imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0] = rtb_VectorConcatenate4[0];
  imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1] = rtb_VectorConcatenate4[1];
  imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2] = rtb_VectorConcatenate4[2];

  // RateTransition generated from: '<S1>/Product1' incorporates:
  //   DiscreteIntegrator: '<S1>/Discrete-Time Integrator'
  //   Fcn: '<S1>/Fcn'
  //   Fcn: '<S1>/Fcn1'
  //   Fcn: '<S1>/Fcn2'

  imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[0] = static_cast<real32_T>(sin
    (static_cast<real_T>(imperix_ctrl_DW.DiscreteTimeIntegrator_DSTATE)));
  imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[1] = static_cast<real32_T>(sin
    (static_cast<real_T>(imperix_ctrl_DW.DiscreteTimeIntegrator_DSTATE -
    2.09439516F)));
  imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[2] = static_cast<real32_T>(sin
    (static_cast<real_T>(imperix_ctrl_DW.DiscreteTimeIntegrator_DSTATE +
    2.09439516F)));

  // RateTransition generated from: '<S1>/Sum6'
  imperix_ctrl_DW.TmpRTBAtSum6Inport1_Buffer0 = rtb_Constant;

  // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator' incorporates:
  //   RateTransition generated from: '<S1>/Discrete-Time Integrator'

  imperix_ctrl_DW.DiscreteTimeIntegrator_DSTATE +=
    imperix_ctrl_P.DiscreteTimeIntegrator_gainval *
    imperix_ctrl_DW.TmpRTBAtDiscreteTimeIntegratorI;
}

// Model initialize function
void imperix_ctrl_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // non-finite (run-time) assignments
  imperix_ctrl_P.SFunction_P4_o = rtMinusInfF;
  imperix_ctrl_P.SFunction_P5_i = rtInfF;
  imperix_ctrl_P.SFunction_P4_h = rtMinusInfF;
  imperix_ctrl_P.SFunction_P5_f = rtInfF;
  imperix_ctrl_P.SFunction_P4_k = rtMinusInfF;
  imperix_ctrl_P.SFunction_P5_h = rtInfF;

  // Set task counter limit used by the static main program
  (imperix_ctrl_M)->Timing.TaskCounters.cLimit[0] = 1;
  (imperix_ctrl_M)->Timing.TaskCounters.cLimit[1] = 10;

  // Start for S-Function (ADC): '<S101>/ADC'
  Adc_ConfigureInput(0, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(0, 0, &ix_raw_adc_ptr_0_0);

  // Start for S-Function (ADC): '<S103>/ADC'
  Adc_ConfigureInput(1, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(1, 0, &ix_raw_adc_ptr_1_0);

  // Start for S-Function (ADC): '<S93>/ADC'
  Adc_ConfigureInput(2, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

  // Start for S-Function (ADC): '<S81>/ADC'
  Adc_ConfigureInput(3, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

  // Start for S-Function (ADC): '<S95>/ADC'
  Adc_ConfigureInput(4, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);

  // Start for S-Function (ADC): '<S97>/ADC'
  Adc_ConfigureInput(5, 0.00045776F, 0.0F, 0);
  Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

  // Start for S-Function (PROBE): '<S224>/S-Function'
  ConfigureProbe(&is1, 0);

  // Start for S-Function (PROBE): '<S226>/S-Function'
  ConfigureProbe(&is2, 0);

  // Start for S-Function (ADC): '<S89>/ADC'
  Adc_ConfigureInput(6, 0.061035F, 0.0F, 0);
  Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

  // Start for S-Function (ADC): '<S105>/ADC'
  Adc_ConfigureInput(7, 0.061035F, 0.0F, 0);
  Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

  // Start for S-Function (ADC): '<S83>/ADC'
  Adc_ConfigureInput(0, 0.061035F, 0.0F, 1);
  Adc_GetPointer(0, 1, &ix_raw_adc_ptr_0_1);

  // Start for S-Function (ADC): '<S91>/ADC'
  Adc_ConfigureInput(1, 0.061035F, 0.0F, 1);
  Adc_GetPointer(1, 1, &ix_raw_adc_ptr_1_1);

  // Start for S-Function (ADC): '<S85>/ADC'
  Adc_ConfigureInput(2, 0.061035F, 0.0F, 1);
  Adc_GetPointer(2, 1, &ix_raw_adc_ptr_2_1);

  // Start for S-Function (ADC): '<S87>/ADC'
  Adc_ConfigureInput(3, 0.061035F, 0.0F, 1);
  Adc_GetPointer(3, 1, &ix_raw_adc_ptr_3_1);

  // Start for S-Function (PROBE): '<S228>/S-Function'
  ConfigureProbe(&Vc5, 0);

  // Start for S-Function (PROBE): '<S230>/S-Function'
  ConfigureProbe(&Vc6, 0);

  // Start for S-Function (ADC): '<S99>/ADC'
  Adc_ConfigureInput(4, 0.012207F, 0.0F, 1);
  Adc_GetPointer(4, 1, &ix_raw_adc_ptr_4_1);

  // Start for S-Function (PROBE): '<S232>/S-Function'
  ConfigureProbe(&wm, 0);

  // Start for S-Function (PROBE): '<S234>/S-Function'
  ConfigureProbe(&ie1, 0);

  // Start for S-Function (PROBE): '<S236>/S-Function'
  ConfigureProbe(&ie2, 0);

  // Start for RateTransition generated from: '<S25>/Saturation'
  imperix_ctrl_B.TmpRTBAtSaturationInport1[0] =
    imperix_ctrl_P.TmpRTBAtSaturationInport1_Initi;
  imperix_ctrl_B.TmpRTBAtSaturationInport1[1] =
    imperix_ctrl_P.TmpRTBAtSaturationInport1_Initi;
  imperix_ctrl_B.TmpRTBAtSaturationInport1[2] =
    imperix_ctrl_P.TmpRTBAtSaturationInport1_Initi;

  // Start for RateTransition generated from: '<S1>/Sum6'
  imperix_ctrl_B.TmpRTBAtSum6Inport1 =
    imperix_ctrl_P.TmpRTBAtSum6Inport1_InitialCond;

  // Start for S-Function (TUNABLE_PARAM): '<S589>/S-Function'
  F_ref = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S593>/S-Function'
  w_ref = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

  // Start for InitialCondition: '<S64>/IC'
  imperix_ctrl_DW.IC_FirstOutputTime = true;

  // Start for S-Function (PROBE): '<S238>/S-Function'
  ConfigureProbe(&ie_r1, 0);

  // Start for S-Function (PROBE): '<S240>/S-Function'
  ConfigureProbe(&ie_r2, 0);

  // Start for S-Function (PROBE): '<S242>/S-Function'
  ConfigureProbe(&vo_r, 0);

  // Start for S-Function (PROBE): '<S244>/S-Function'
  ConfigureProbe(&Frd, 0);

  // Start for S-Function (PROBE): '<S246>/S-Function'
  ConfigureProbe(&Vc_m, 0);

  // Start for S-Function (PROBE): '<S248>/S-Function'
  ConfigureProbe(&is3, 0);

  // Start for S-Function (PROBE): '<S250>/S-Function'
  ConfigureProbe(&Vc_m_f, 0);

  // Start for S-Function (PROBE): '<S252>/S-Function'
  ConfigureProbe(&iP_r, 0);

  // Start for S-Function (PROBE): '<S254>/S-Function'
  ConfigureProbe(&iP, 0);

  // Start for S-Function (PROBE): '<S256>/S-Function'
  ConfigureProbe(&vsP, 0);

  // Start for S-Function (TUNABLE_PARAM): '<S595>/S-Function'
  aV_mag = 0.0F;                       // Tunable parameter initialization
  ConfigureTunable(&aV_mag, 0, 0);

  // Start for RateTransition generated from: '<S1>/Product1'
  imperix_ctrl_B.TmpRTBAtProduct1Inport2[0] =
    imperix_ctrl_P.TmpRTBAtProduct1Inport2_Initial;
  imperix_ctrl_B.TmpRTBAtProduct1Inport2[1] =
    imperix_ctrl_P.TmpRTBAtProduct1Inport2_Initial;
  imperix_ctrl_B.TmpRTBAtProduct1Inport2[2] =
    imperix_ctrl_P.TmpRTBAtProduct1Inport2_Initial;

  // Start for S-Function (PROBE): '<S258>/S-Function'
  ConfigureProbe(&D1, 0);

  // Start for S-Function (PROBE): '<S260>/S-Function'
  ConfigureProbe(&D2, 0);

  // Start for S-Function (PROBE): '<S262>/S-Function'
  ConfigureProbe(&D3, 0);

  // Start for S-Function (PROBE): '<S264>/S-Function'
  ConfigureProbe(&D4, 0);

  // Start for S-Function (PROBE): '<S266>/S-Function'
  ConfigureProbe(&D5, 0);

  // Start for S-Function (PROBE): '<S268>/S-Function'
  ConfigureProbe(&D6, 0);

  // Start for S-Function (PROBE): '<S270>/S-Function'
  ConfigureProbe(&is4, 0);

  // Start for S-Function (PROBE): '<S272>/S-Function'
  ConfigureProbe(&is5, 0);

  // Start for S-Function (PROBE): '<S274>/S-Function'
  ConfigureProbe(&is6, 0);

  // Start for S-Function (PROBE): '<S276>/S-Function'
  ConfigureProbe(&Vc1, 0);

  // Start for S-Function (PROBE): '<S278>/S-Function'
  ConfigureProbe(&Vc2, 0);

  // Start for S-Function (PROBE): '<S280>/S-Function'
  ConfigureProbe(&Vc3, 0);

  // Start for S-Function (PROBE): '<S282>/S-Function'
  ConfigureProbe(&Vc4, 0);

  // Start for S-Function (TUNABLE_PARAM): '<S591>/S-Function'
  enable = 0.0F;                       // Tunable parameter initialization
  ConfigureTunable(&enable, 0, 0);

  // Start for S-Function (IRQ): '<S108>/S-Function' incorporates:
  //   Constant: '<S110>/clk_id'

  ConfigureMainInterrupt(SimulinkInterrupt, (tClock) imperix_ctrl_P.clk_id_Value,
    0.5F, 0U);
  ConfigureReadTriggerDelayInNs(2000U);
  Adc_SetUserOversampling(0.0F);

  // Start for S-Function (CLK): '<S110>/CLK1'
  Clock_SetFrequency((tClock) 0, 6000.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S597>/S-Function'
  af_mag = 0.0F;                       // Tunable parameter initialization
  ConfigureTunable(&af_mag, 0, 0);

  // Start for Atomic SubSystem: '<S339>/generation'

  // Start for S-Function (CB_PWM): '<S340>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 4, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
  CbPwm_Activate((tPwmOutput) 4, 0);

  // End of Start for SubSystem: '<S339>/generation'

  // Start for Atomic SubSystem: '<S341>/generation'

  // Start for S-Function (CB_PWM): '<S342>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 5, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
  CbPwm_Activate((tPwmOutput) 5, 0);

  // End of Start for SubSystem: '<S341>/generation'

  // Start for Atomic SubSystem: '<S343>/generation'

  // Start for S-Function (CB_PWM): '<S344>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 6, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
  CbPwm_Activate((tPwmOutput) 6, 0);

  // End of Start for SubSystem: '<S343>/generation'

  // Start for Atomic SubSystem: '<S345>/generation'

  // Start for S-Function (CB_PWM): '<S346>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
  CbPwm_Activate((tPwmOutput) 7, 0);

  // End of Start for SubSystem: '<S345>/generation'

  // Start for Atomic SubSystem: '<S463>/generation'

  // Start for S-Function (CB_PWM): '<S464>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
  CbPwm_Activate((tPwmOutput) 8, 0);

  // End of Start for SubSystem: '<S463>/generation'

  // Start for Atomic SubSystem: '<S465>/generation'

  // Start for S-Function (CB_PWM): '<S466>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 9, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
  CbPwm_Activate((tPwmOutput) 9, 0);

  // End of Start for SubSystem: '<S465>/generation'

  // Start for Atomic SubSystem: '<S467>/generation'

  // Start for S-Function (CB_PWM): '<S468>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 10, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 10, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
  CbPwm_Activate((tPwmOutput) 10, 0);

  // End of Start for SubSystem: '<S467>/generation'

  // Start for Atomic SubSystem: '<S469>/generation'

  // Start for S-Function (CB_PWM): '<S470>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 11, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 11, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
  CbPwm_Activate((tPwmOutput) 11, 0);

  // End of Start for SubSystem: '<S469>/generation'

  // Start for Atomic SubSystem: '<S537>/generation'

  // Start for S-Function (CB_PWM): '<S538>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 12, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 12, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
  CbPwm_Activate((tPwmOutput) 12, 0);

  // End of Start for SubSystem: '<S537>/generation'

  // Start for Atomic SubSystem: '<S539>/generation'

  // Start for S-Function (CB_PWM): '<S540>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 13, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 13, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
  CbPwm_Activate((tPwmOutput) 13, 0);

  // End of Start for SubSystem: '<S539>/generation'

  // Start for Atomic SubSystem: '<S541>/generation'

  // Start for S-Function (CB_PWM): '<S542>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 14, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 14, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
  CbPwm_Activate((tPwmOutput) 14, 0);

  // End of Start for SubSystem: '<S541>/generation'

  // Start for Atomic SubSystem: '<S543>/generation'

  // Start for S-Function (CB_PWM): '<S544>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 15, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
  CbPwm_Activate((tPwmOutput) 15, 0);

  // End of Start for SubSystem: '<S543>/generation'

  // Start for Atomic SubSystem: '<S549>/generation'

  // Start for S-Function (CB_PWM): '<S550>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 1, 2);
  CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 2);
  CbPwm_Activate((tPwmOutput) 8, 2);

  // End of Start for SubSystem: '<S549>/generation'

  // Start for Atomic SubSystem: '<S551>/generation'

  // Start for S-Function (CB_PWM): '<S552>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 1, 2);
  CbPwm_SetPhase((tPwmOutput) 9, 0.5F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 2);
  CbPwm_Activate((tPwmOutput) 9, 2);

  // End of Start for SubSystem: '<S551>/generation'

  // Start for Atomic SubSystem: '<S553>/generation'

  // Start for S-Function (CB_PWM): '<S554>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 10, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 1, 2);
  CbPwm_SetPhase((tPwmOutput) 10, 0.25F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 2);
  CbPwm_Activate((tPwmOutput) 10, 2);

  // End of Start for SubSystem: '<S553>/generation'

  // Start for Atomic SubSystem: '<S555>/generation'

  // Start for S-Function (CB_PWM): '<S556>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 11, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 1, 2);
  CbPwm_SetPhase((tPwmOutput) 11, 0.0F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 2);
  CbPwm_Activate((tPwmOutput) 11, 2);

  // End of Start for SubSystem: '<S555>/generation'

  // Start for Atomic SubSystem: '<S561>/generation'

  // Start for S-Function (CB_PWM): '<S562>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 12, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 1, 2);
  CbPwm_SetPhase((tPwmOutput) 12, 0.75F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 2);
  CbPwm_Activate((tPwmOutput) 12, 2);

  // End of Start for SubSystem: '<S561>/generation'

  // Start for Atomic SubSystem: '<S563>/generation'

  // Start for S-Function (CB_PWM): '<S564>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 13, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 1, 2);
  CbPwm_SetPhase((tPwmOutput) 13, 0.5F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 2);
  CbPwm_Activate((tPwmOutput) 13, 2);

  // End of Start for SubSystem: '<S563>/generation'

  // Start for Atomic SubSystem: '<S565>/generation'

  // Start for S-Function (CB_PWM): '<S566>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 14, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 1, 2);
  CbPwm_SetPhase((tPwmOutput) 14, 0.25F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 2);
  CbPwm_Activate((tPwmOutput) 14, 2);

  // End of Start for SubSystem: '<S565>/generation'

  // Start for Atomic SubSystem: '<S567>/generation'

  // Start for S-Function (CB_PWM): '<S568>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 15, (tClock) imperix_ctrl_P.clk_id_Value, 2);
  CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 2);
  CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 2);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 1, 2);
  CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 2);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 2);
  CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 2);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 2);
  CbPwm_Activate((tPwmOutput) 15, 2);

  // End of Start for SubSystem: '<S567>/generation'

  // Start for Atomic SubSystem: '<S580>/generation'

  // Start for S-Function (CB_PWM): '<S581>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
  CbPwm_Activate((tPwmOutput) 0, 0);

  // End of Start for SubSystem: '<S580>/generation'

  // Start for Atomic SubSystem: '<S582>/generation'

  // Start for S-Function (CB_PWM): '<S583>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 1, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
  CbPwm_Activate((tPwmOutput) 1, 0);

  // End of Start for SubSystem: '<S582>/generation'

  // Start for Atomic SubSystem: '<S584>/generation'

  // Start for S-Function (CB_PWM): '<S585>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 2, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
  CbPwm_Activate((tPwmOutput) 2, 0);

  // End of Start for SubSystem: '<S584>/generation'

  // Start for Atomic SubSystem: '<S586>/generation'

  // Start for S-Function (CB_PWM): '<S587>/PWM' incorporates:
  //   Constant: '<S110>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_ctrl_P.clk_id_Value, 0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 3, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
  CbPwm_Activate((tPwmOutput) 3, 0);

  // End of Start for SubSystem: '<S586>/generation'

  // InitializeConditions for UnitDelay: '<S165>/Unit Delay1'
  imperix_ctrl_DW.UnitDelay1_DSTATE[0] =
    imperix_ctrl_P.UnitDelay1_InitialCondition;
  imperix_ctrl_DW.UnitDelay1_DSTATE[1] =
    imperix_ctrl_P.UnitDelay1_InitialCondition;

  // InitializeConditions for RateTransition generated from: '<S25>/Saturation'
  imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0] =
    imperix_ctrl_P.TmpRTBAtSaturationInport1_Initi;
  imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1] =
    imperix_ctrl_P.TmpRTBAtSaturationInport1_Initi;
  imperix_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2] =
    imperix_ctrl_P.TmpRTBAtSaturationInport1_Initi;

  // InitializeConditions for RateTransition generated from: '<S1>/Sum6'
  imperix_ctrl_DW.TmpRTBAtSum6Inport1_Buffer0 =
    imperix_ctrl_P.TmpRTBAtSum6Inport1_InitialCond;

  // InitializeConditions for UnitDelay: '<S23>/Unit Delay1'
  imperix_ctrl_DW.UnitDelay1_DSTATE_o = imperix_ctrl_P.M2C.Vc_ref;

  // InitializeConditions for DiscreteIntegrator: '<S205>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE =
    imperix_ctrl_P.PIDController1_InitialCondition;

  // InitializeConditions for UnitDelay: '<S60>/Unit Delay'
  imperix_ctrl_DW.UnitDelay_DSTATE[0] =
    imperix_ctrl_P.UnitDelay_InitialCondition[0];
  imperix_ctrl_DW.UnitDelay_DSTATE[1] =
    imperix_ctrl_P.UnitDelay_InitialCondition[1];

  // InitializeConditions for DiscreteIntegrator: '<S145>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_i =
    imperix_ctrl_P.FluxPI1_InitialConditionForInte;

  // InitializeConditions for DiscreteIntegrator: '<S317>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_d =
    imperix_ctrl_P.SpeedPI1_InitialConditionForInt;

  // InitializeConditions for DiscreteIntegrator: '<S385>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_j =
    imperix_ctrl_P.MCCPId_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S437>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_e =
    imperix_ctrl_P.MCCPIq_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S508>/Integrator'
  imperix_ctrl_DW.Integrator_DSTATE_p =
    imperix_ctrl_P.PCCPI_InitialConditionForIntegr;

  // InitializeConditions for RateTransition generated from: '<S1>/Product1'
  imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[0] =
    imperix_ctrl_P.TmpRTBAtProduct1Inport2_Initial;
  imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[1] =
    imperix_ctrl_P.TmpRTBAtProduct1Inport2_Initial;
  imperix_ctrl_DW.TmpRTBAtProduct1Inport2_Buffer0[2] =
    imperix_ctrl_P.TmpRTBAtProduct1Inport2_Initial;

  // InitializeConditions for DiscreteIntegrator: '<S1>/Discrete-Time Integrator' 
  imperix_ctrl_DW.DiscreteTimeIntegrator_DSTATE =
    imperix_ctrl_P.DiscreteTimeIntegrator_IC;

  // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
  imperix_ctrl_DW.Inx[1] = 0.0;
  imperix_ctrl_DW.Inx[2] = 0.0;
  imperix_ctrl_DW.Inx[3] = 0.0;
  imperix_ctrl_DW.Inx[0] = 1.0;

  // SystemInitialize for MATLAB Function: '<S25>/Saturation'
  imperix_ctrl_DW.Ix[1] = 0.0;
  imperix_ctrl_DW.Ix[2] = 0.0;
  imperix_ctrl_DW.Ix[0] = 1.0;
  imperix_ctrl_DW.Ix[3] = 1.0;
  imperix_ctrl_DW.Tol = 0.001;

  // SystemInitialize for Enabled SubSystem: '<S350>/Subsystem - pi//2 delay'
  impe_Subsystempi2delay_Init(&imperix_ctrl_B.Fcn_d, &imperix_ctrl_B.Fcn1_d,
    &imperix_ctrl_P.Subsystempi2delay);

  // End of SystemInitialize for SubSystem: '<S350>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S350>/Subsystem1'
  imperix_ctr_Subsystem1_Init(&imperix_ctrl_B.Fcn_b, &imperix_ctrl_B.Fcn1_i,
    &imperix_ctrl_P.Subsystem1);

  // End of SystemInitialize for SubSystem: '<S350>/Subsystem1'

  // SystemInitialize for Enabled SubSystem: '<S527>/Subsystem - pi//2 delay'
  // SystemInitialize for Fcn: '<S531>/Fcn' incorporates:
  //   Outport: '<S531>/dq'

  imperix_ctrl_B.Fcn_ct = imperix_ctrl_P.dq_Y0[0];

  // SystemInitialize for Fcn: '<S531>/Fcn1' incorporates:
  //   Outport: '<S531>/dq'

  imperix_ctrl_B.Fcn1_p = imperix_ctrl_P.dq_Y0[1];

  // End of SystemInitialize for SubSystem: '<S527>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S527>/Subsystem1'
  // SystemInitialize for Fcn: '<S532>/Fcn' incorporates:
  //   Outport: '<S532>/dq'

  imperix_ctrl_B.Fcn_l = imperix_ctrl_P.dq_Y0_f[0];

  // SystemInitialize for Fcn: '<S532>/Fcn1' incorporates:
  //   Outport: '<S532>/dq'

  imperix_ctrl_B.Fcn1_b = imperix_ctrl_P.dq_Y0_f[1];

  // End of SystemInitialize for SubSystem: '<S527>/Subsystem1'

  // SystemInitialize for Enabled SubSystem: '<S571>/Subsystem - pi//2 delay'
  impe_Subsystempi2delay_Init(&imperix_ctrl_B.Fcn_c, &imperix_ctrl_B.Fcn1_e,
    &imperix_ctrl_P.Subsystempi2delay_a);

  // End of SystemInitialize for SubSystem: '<S571>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S571>/Subsystem1'
  imperix_ctr_Subsystem1_Init(&imperix_ctrl_B.Fcn, &imperix_ctrl_B.Fcn1,
    &imperix_ctrl_P.Subsystem1_o);

  // End of SystemInitialize for SubSystem: '<S571>/Subsystem1'
}

// Model terminate function
void imperix_ctrl_terminate(void)
{
  // (no terminate code required)
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
