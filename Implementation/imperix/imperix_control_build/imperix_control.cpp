//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_control.cpp
//
// Code generated for Simulink model 'imperix_control'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.33
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Thu Dec 18 17:11:36 2025
//
#include "imperix_control.h"
#include "rtwtypes.h"
#include "imperix_control_private.h"
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
real32_T is3;                          // Probe
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
int16_T* ix_raw_adc_ptr_0_2;
real32_T Frd;                          // Probe

// Block signals (default storage)
B_imperix_control_T imperix_control_B;

// Block states (default storage)
DW_imperix_control_T imperix_control_DW;

// Real-time model
RT_MODEL_imperix_control_T imperix_control_M_ = RT_MODEL_imperix_control_T();
RT_MODEL_imperix_control_T *const imperix_control_M = &imperix_control_M_;

// Forward declaration for local functions
static void imperix_control_trisolve_k(const real_T A[4], real_T B[4]);
static real_T imperix_control_norm_k(const real_T x[2]);
static real_T imperix_control_xnrm2_b(int32_T n, const real_T x[4], int32_T ix0);
static void imperix_control_xgemv_e(int32_T m, int32_T n, const real_T A[4],
  int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2]);
static void imperix_control_xgerc_j(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[2], real_T A[4], int32_T ia0);
static real_T imperix_control_KWIKfactor_kk(const real_T Ac[24], const int32_T
  iC[12], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n);
static void imperix_contro_DropConstraint_i(int32_T kDrop, boolean_T iA[12],
  int32_T *nA, int32_T iC[12]);
static void imperix_control_qpkwik_aq(const real_T Linv[4], const real_T Hinv[4],
  const real_T f[2], const real_T Ac[24], const real_T b[12], boolean_T iA[12],
  int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[12], int32_T
  *status);
static void imperix_control_trisolve_j(const real_T A[16], real_T B[16]);
static real_T imperix_control_norm_j(const real_T x[4]);
static real_T imperix_control_maximum_j(const real_T x[4]);
static real_T imperix_control_xnrm2_d(int32_T n, const real_T x[16], int32_T ix0);
static void imperix_control_xgemv_k(int32_T m, int32_T n, const real_T A[16],
  int32_T ia0, const real_T x[16], int32_T ix0, real_T y[4]);
static void imperix_control_xgerc_n(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[4], real_T A[16], int32_T ia0);
static real_T imperix_control_KWIKfactor_k(const real_T Ac[96], const int32_T
  iC[24], int32_T nA, const real_T Linv[16], real_T RLinv[16], real_T D[16],
  real_T H[16], int32_T n);
static void imperix_contro_DropConstraint_o(int32_T kDrop, boolean_T iA[24],
  int32_T *nA, int32_T iC[24]);
static void imperix_control_qpkwik_a(const real_T Linv[16], const real_T Hinv[16],
  const real_T f[4], const real_T Ac[96], const real_T b[24], boolean_T iA[24],
  int32_T maxiter, real_T FeasTol, real_T x[4], real_T lambda[24], int32_T
  *status);
static void imperix_control_repmat(const real_T a[2], real_T b[4]);
static void imperix_control_trisolve(const real_T A[36], real_T B[36]);
static real_T imperix_control_norm(const real_T x[6]);
static real_T imperix_control_maximum(const real_T x[6]);
static real_T imperix_control_xnrm2(int32_T n, const real_T x[36], int32_T ix0);
static void imperix_control_xgemv(int32_T m, int32_T n, const real_T A[36],
  int32_T ia0, const real_T x[36], int32_T ix0, real_T y[6]);
static void imperix_control_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[6], real_T A[36], int32_T ia0);
static real_T imperix_control_KWIKfactor(const real_T Ac[216], const int32_T iC
  [36], int32_T nA, const real_T Linv[36], real_T RLinv[36], real_T D[36],
  real_T H[36], int32_T n);
static void imperix_control_DropConstraint(int32_T kDrop, boolean_T iA[36],
  int32_T *nA, int32_T iC[36]);
static void imperix_control_qpkwik(const real_T Linv[36], const real_T Hinv[36],
  const real_T f[6], const real_T Ac[216], const real_T b[36], boolean_T iA[36],
  int32_T maxiter, real_T FeasTol, real_T x[6], real_T lambda[36], int32_T
  *status);
static void imperix_cont_mpcActiveSetSolver(const real_T H[36], const real_T f[6],
  const real_T A[216], const real_T b[36], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[6],
  int32_T *exitflag, boolean_T iA[36]);
static void imperix_control_trisolve_a(const real_T A[9], real_T B[9]);
static real_T imperix_control_norm_i(const real_T x[3]);
static real_T imperix_control_maximum_c(const real_T x[3]);
static real_T imperix_control_xnrm2_j(int32_T n, const real_T x[9], int32_T ix0);
static void imperix_control_xgemv_j(int32_T m, int32_T n, const real_T A[9],
  int32_T ia0, const real_T x[9], int32_T ix0, real_T y[3]);
static void imperix_control_xgerc_c(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[3], real_T A[9], int32_T ia0);
static real_T imperix_control_KWIKfactor_b(const real_T Ac[18], const int32_T
  iC[6], int32_T nA, const real_T Linv[9], real_T RLinv[9], real_T D[9], real_T
  H[9], int32_T n);
static void imperix_contro_DropConstraint_n(int32_T kDrop, boolean_T iA[6],
  int32_T *nA, int32_T iC[6]);
static void imperix_control_qpkwik_n(const real_T Linv[9], const real_T Hinv[9],
  const real_T f[3], const real_T Ac[18], const real_T b[6], boolean_T iA[6],
  int32_T maxiter, real_T FeasTol, real_T x[3], real_T lambda[6], int32_T
  *status);
static void imperix_co_mpcActiveSetSolver_i(const real_T H[9], const real_T f[3],
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
//    '<S317>/Subsystem - pi//2 delay'
//    '<S325>/Subsystem - pi//2 delay'
//
void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_j, P_Subsystempi2delay_imperix_c_T *localP)
{
  // SystemInitialize for Outport: '<S320>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_j = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S317>/Subsystem - pi//2 delay'
//    '<S325>/Subsystem - pi//2 delay'
//
void imperix_c_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_j)
{
  // Outputs for Enabled SubSystem: '<S317>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S320>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S320>/Fcn' incorporates:
    //   Fcn: '<S320>/Fcn1'

    tmp = cos(rtu_wt);
    tmp_0 = sin(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 + rtu_dq_m * tmp;

    // Fcn: '<S320>/Fcn1'
    *rty_alpha_beta_j = -rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S317>/Subsystem - pi//2 delay'
}

//
// System initialize for enable system:
//    '<S317>/Subsystem1'
//    '<S325>/Subsystem1'
//
void imperix_con_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_k, P_Subsystem1_imperix_control_T *localP)
{
  // SystemInitialize for Outport: '<S321>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_k = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S317>/Subsystem1'
//    '<S325>/Subsystem1'
//
void imperix_control_Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_k)
{
  // Outputs for Enabled SubSystem: '<S317>/Subsystem1' incorporates:
  //   EnablePort: '<S321>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S321>/Fcn' incorporates:
    //   Fcn: '<S321>/Fcn1'

    tmp = sin(rtu_wt);
    tmp_0 = cos(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 - rtu_dq_m * tmp;

    // Fcn: '<S321>/Fcn1'
    *rty_alpha_beta_k = rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S317>/Subsystem1'
}

// Function for MATLAB Function: '<S26>/Saturation'
static void imperix_control_trisolve_k(const real_T A[4], real_T B[4])
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

// Function for MATLAB Function: '<S26>/Saturation'
static real_T imperix_control_norm_k(const real_T x[2])
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

// Function for MATLAB Function: '<S26>/Saturation'
static real_T imperix_control_xnrm2_b(int32_T n, const real_T x[4], int32_T ix0)
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

// Function for MATLAB Function: '<S26>/Saturation'
static void imperix_control_xgemv_e(int32_T m, int32_T n, const real_T A[4],
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

// Function for MATLAB Function: '<S26>/Saturation'
static void imperix_control_xgerc_j(int32_T m, int32_T n, real_T alpha1, int32_T
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

// Function for MATLAB Function: '<S26>/Saturation'
static real_T imperix_control_KWIKfactor_kk(const real_T Ac[24], const int32_T
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
      xnorm = imperix_control_xnrm2_b(1, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_control_xnrm2_b(1, A, ii + 2));
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
        imperix_control_xgemv_e(b_lastv, c_lastc, A, ii + 3, A, ii + 1, work);
        imperix_control_xgerc_j(b_lastv, c_lastc, -tau[0], ii + 1, work, A, ii +
          3);
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
        imperix_control_xgemv_e(b_lastv, c_lastc, A, ii + 3, A, ii + 1, work);
        imperix_control_xgerc_j(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii
          + 3);
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

// Function for MATLAB Function: '<S26>/Saturation'
static void imperix_contro_DropConstraint_i(int32_T kDrop, boolean_T iA[12],
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

// Function for MATLAB Function: '<S26>/Saturation'
static void imperix_control_qpkwik_aq(const real_T Linv[4], const real_T Hinv[4],
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
        Xnorm0 = imperix_control_KWIKfactor_kk(Ac, iC, nA, Linv, RLinv, D, H, 2);
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
              imperix_contro_DropConstraint_i(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_control_norm_k(x);
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
              cMin = imperix_control_KWIKfactor_kk(Ac, iC, nA, Linv, RLinv, D, H,
                2);
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
                  imperix_contro_DropConstraint_i(kDrop, iA, &nA, iC);
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
            cMin = imperix_control_norm_k(x);
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
static void imperix_control_trisolve_j(const real_T A[16], real_T B[16])
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_control_norm_j(const real_T x[4])
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
static real_T imperix_control_maximum_j(const real_T x[4])
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
static real_T imperix_control_xnrm2_d(int32_T n, const real_T x[16], int32_T ix0)
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
static void imperix_control_xgemv_k(int32_T m, int32_T n, const real_T A[16],
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
static void imperix_control_xgerc_n(int32_T m, int32_T n, real_T alpha1, int32_T
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
static real_T imperix_control_KWIKfactor_k(const real_T Ac[96], const int32_T
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
      xnorm = imperix_control_xnrm2_d(3 - k_i, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_control_xnrm2_d(3 - k_i, A, ii
            + 2));
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
        imperix_control_xgemv_k(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_control_xgerc_n(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii
          + 5);
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
        imperix_control_xgemv_k(b_lastv, c_lastc, A, ii + 5, A, ii + 1, work);
        imperix_control_xgerc_n(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii
          + 5);
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
static void imperix_contro_DropConstraint_o(int32_T kDrop, boolean_T iA[24],
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
static void imperix_control_qpkwik_a(const real_T Linv[16], const real_T Hinv[16],
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
        Xnorm0 = imperix_control_KWIKfactor_k(Ac, iC, nA, Linv, RLinv, D, H, 4);
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
              imperix_contro_DropConstraint_o(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_control_norm_j(x);
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
          cVal = imperix_control_maximum_j(varargin_1);
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
              cMin = imperix_control_KWIKfactor_k(Ac, iC, nA, Linv, RLinv, D, H,
                4);
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
                  imperix_contro_DropConstraint_o(kDrop, iA, &nA, iC);
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
            cMin = imperix_control_norm_j(x);
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
static void imperix_control_repmat(const real_T a[2], real_T b[4])
{
  b[0] = a[0];
  b[1] = a[1];
  b[2] = a[0];
  b[3] = a[1];
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_control_trisolve(const real_T A[36], real_T B[36])
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
static real_T imperix_control_norm(const real_T x[6])
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
static real_T imperix_control_maximum(const real_T x[6])
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
static real_T imperix_control_xnrm2(int32_T n, const real_T x[36], int32_T ix0)
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
static void imperix_control_xgemv(int32_T m, int32_T n, const real_T A[36],
  int32_T ia0, const real_T x[36], int32_T ix0, real_T y[6])
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
static void imperix_control_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[6], real_T A[36], int32_T ia0)
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
static real_T imperix_control_KWIKfactor(const real_T Ac[216], const int32_T iC
  [36], int32_T nA, const real_T Linv[36], real_T RLinv[36], real_T D[36],
  real_T H[36], int32_T n)
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
      xnorm = imperix_control_xnrm2(5 - i, A, ii + 2);
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

          xnorm = rt_hypotd_snf(atmp, imperix_control_xnrm2(5 - i, A, ii + 2));
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
        imperix_control_xgemv(b_lastv, c_lastc, A, ii + 7, A, ii + 1, work);
        imperix_control_xgerc(b_lastv, c_lastc, -tau[i], ii + 1, work, A, ii + 7);
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
        imperix_control_xgemv(b_lastv, c_lastc, A, ii + 7, A, ii + 1, work);
        imperix_control_xgerc(b_lastv, c_lastc, -tau[i], ii + 1, work, A, ii + 7);
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
static void imperix_control_DropConstraint(int32_T kDrop, boolean_T iA[36],
  int32_T *nA, int32_T iC[36])
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
static void imperix_control_qpkwik(const real_T Linv[36], const real_T Hinv[36],
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
        Xnorm0 = imperix_control_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H, 6);
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
              imperix_control_DropConstraint(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_control_norm(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      tmp = -1;
      for (f_i = 0; f_i < 36; f_i++) {
        if (!cTolComputed) {
          for (i = 0; i < 6; i++) {
            z[i] = fabs(Ac[36 * i + f_i] * x[i]);
          }

          cVal = imperix_control_maximum(z);
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
              cMin = imperix_control_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H, 6);
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
                  imperix_control_DropConstraint(kDrop, iA, &nA, iC);
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
            cMin = imperix_control_norm(x);
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
static void imperix_cont_mpcActiveSetSolver(const real_T H[36], const real_T f[6],
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

    imperix_control_trisolve(b_A, Linv);
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

  imperix_control_qpkwik(Linv, Linv_0, f, A_0, b_0, iA, options_MaxIterations,
    options_ConstraintTolerance, x, b_A, exitflag);
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_control_trisolve_a(const real_T A[9], real_T B[9])
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
static real_T imperix_control_norm_i(const real_T x[3])
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
static real_T imperix_control_maximum_c(const real_T x[3])
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
static real_T imperix_control_xnrm2_j(int32_T n, const real_T x[9], int32_T ix0)
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
static void imperix_control_xgemv_j(int32_T m, int32_T n, const real_T A[9],
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
static void imperix_control_xgerc_c(int32_T m, int32_T n, real_T alpha1, int32_T
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
static real_T imperix_control_KWIKfactor_b(const real_T Ac[18], const int32_T
  iC[6], int32_T nA, const real_T Linv[9], real_T RLinv[9], real_T D[9], real_T
  H[9], int32_T n)
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
      xnorm = imperix_control_xnrm2_j(2 - k_i, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_control_xnrm2_j(2 - k_i, A, ii
            + 2));
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
        imperix_control_xgemv_j(b_lastv, c_lastc, A, ii + 4, A, ii + 1, work);
        imperix_control_xgerc_c(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii
          + 4);
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
        imperix_control_xgemv_j(b_lastv, c_lastc, A, ii + 4, A, ii + 1, work);
        imperix_control_xgerc_c(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii
          + 4);
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
static void imperix_contro_DropConstraint_n(int32_T kDrop, boolean_T iA[6],
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
static void imperix_control_qpkwik_n(const real_T Linv[9], const real_T Hinv[9],
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
        Xnorm0 = imperix_control_KWIKfactor_b(Ac, iC, nA, Linv, RLinv, D, H, 3);
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
              imperix_contro_DropConstraint_n(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_control_norm_i(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      kNext = -1;
      for (i = 0; i < 6; i++) {
        if (!cTolComputed) {
          varargin_1[0] = fabs(Ac[i] * x[0]);
          varargin_1[1] = fabs(Ac[i + 6] * x[1]);
          varargin_1[2] = fabs(Ac[i + 12] * x[2]);
          cVal = imperix_control_maximum_c(varargin_1);
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
              cMin = imperix_control_KWIKfactor_b(Ac, iC, nA, Linv, RLinv, D, H,
                3);
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
                  imperix_contro_DropConstraint_n(kDrop, iA, &nA, iC);
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
            cMin = imperix_control_norm_i(x);
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
static void imperix_co_mpcActiveSetSolver_i(const real_T H[9], const real_T f[3],
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

    imperix_control_trisolve_a(b_A, Linv);
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

  imperix_control_qpkwik_n(Linv, b_A, f, A_0, b_0, iA, options_MaxIterations,
    options_ConstraintTolerance, x, lam, exitflag);
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

// Model step function for TID0
void imperix_control_step0(void)       // Sample time: [0.000166667s, 0.0s]
{
  real_T tmp_1[96];
  real_T bc_1[24];
  real_T lam[24];
  real_T A_0[16];
  real_T Linv_0[16];
  real_T bc[12];
  real_T bc_0[12];
  real_T lb[12];
  real_T rtb_DataTypeConversion1[6];
  real_T rtb_DataTypeConversion2[6];
  real_T rtb_Gain7[6];
  real_T rtb_Gain1_g[5];
  real_T rtb_TmpSignalConversionAtGain2I[5];
  real_T rtb_VectorConcatenate[5];
  real_T A[4];
  real_T Linv[4];
  real_T Linv_1[4];
  real_T rtb_Switch_h_0[3];
  real_T rtb_Switch_f[2];
  real_T rtb_ie_sat[2];
  real_T tmp_0[2];
  real_T Mean_AccVal;
  real_T b_c;
  real_T ie_idx_0;
  real_T rtb_CastToDouble2;
  real_T rtb_DeadZone;
  real_T rtb_DeadZone_g;
  real_T rtb_F;
  real_T rtb_Gain1_e_idx_0;
  real_T rtb_Gain1_e_idx_1;
  real_T rtb_Gain2_d;
  real_T rtb_Gain4_idx_0;
  real_T rtb_Gain4_idx_1;
  real_T rtb_Saturation;
  real_T rtb_Saturation_e;
  real_T rtb_Saturation_fi;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_n;
  real_T rtb_Sum4;
  real_T rtb_Sum5;
  real_T rtb_Sum6;
  real_T rtb_Sum8;
  real_T rtb_Sum_b;
  real_T rtb_Sum_d;
  real_T rtb_Sum_e2;
  real_T rtb_Sum_f;
  real_T rtb_Switch_h_idx_0;
  real_T rtb_Switch_h_idx_1;
  real_T rtb_vo_sat;
  real_T ssq;
  int32_T A_tmp;
  int32_T b_c_tmp;
  int32_T d;
  int32_T e;
  int32_T i;
  int32_T idxAjj;
  int32_T info;
  int32_T jmax;
  int8_T tmp_2;
  int8_T tmp_3;
  uint8_T rtb_Compare;
  boolean_T iA1_0[24];
  boolean_T iA1[12];
  boolean_T tmp;
  static const int8_T B[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  boolean_T exitg1;

  // Update the flag to indicate when data transfers from
  //   Sample time: [0.00016666666666666666s, 0.0s] to Sample time: [0.0016666666666666668s, 0.0s]  
  (imperix_control_M->Timing.RateInteraction.TID0_1)++;
  if ((imperix_control_M->Timing.RateInteraction.TID0_1) > 9) {
    imperix_control_M->Timing.RateInteraction.TID0_1 = 0;
  }

  // S-Function (ADC): '<S90>/ADC'
  imperix_control_B.ADC = (float)(*ix_raw_adc_ptr_0_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S92>/ADC'
  imperix_control_B.ADC_c = (float)(*ix_raw_adc_ptr_1_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S80>/ADC'
  imperix_control_B.ADC_o = (float)(*ix_raw_adc_ptr_2_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S68>/ADC'
  imperix_control_B.ADC_g = (float)(*ix_raw_adc_ptr_3_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S82>/ADC'
  imperix_control_B.ADC_p = (float)(*ix_raw_adc_ptr_4_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S84>/ADC'
  imperix_control_B.ADC_i = (float)(*ix_raw_adc_ptr_5_0) * 0.00045776F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion2'
  rtb_DataTypeConversion2[0] = imperix_control_B.ADC;
  rtb_DataTypeConversion2[1] = imperix_control_B.ADC_c;
  rtb_DataTypeConversion2[2] = imperix_control_B.ADC_o;
  rtb_DataTypeConversion2[3] = imperix_control_B.ADC_g;
  rtb_DataTypeConversion2[4] = imperix_control_B.ADC_p;
  rtb_DataTypeConversion2[5] = imperix_control_B.ADC_i;
  for (i = 0; i < 6; i++) {
    // DataTypeConversion: '<S1>/Data Type Conversion3'
    imperix_control_B.DataTypeConversion3[i] = static_cast<real32_T>
      (rtb_DataTypeConversion2[i]);
  }

  // S-Function (PROBE): '<S215>/S-Function'
  is1 = imperix_control_B.DataTypeConversion3[0];

  // S-Function (PROBE): '<S217>/S-Function'
  is2 = imperix_control_B.DataTypeConversion3[1];

  // S-Function (ADC): '<S76>/ADC'
  imperix_control_B.ADC_b = (float)(*ix_raw_adc_ptr_6_0) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S94>/ADC'
  imperix_control_B.ADC_n = (float)(*ix_raw_adc_ptr_7_0) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S70>/ADC'
  imperix_control_B.ADC_cr = (float)(*ix_raw_adc_ptr_0_1) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S78>/ADC'
  imperix_control_B.ADC_ge = (float)(*ix_raw_adc_ptr_1_1) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S72>/ADC'
  imperix_control_B.ADC_p2 = (float)(*ix_raw_adc_ptr_2_1) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S74>/ADC'
  imperix_control_B.ADC_h = (float)(*ix_raw_adc_ptr_3_1) * 0.027466F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion1'
  rtb_DataTypeConversion1[0] = imperix_control_B.ADC_b;
  rtb_DataTypeConversion1[1] = imperix_control_B.ADC_n;
  rtb_DataTypeConversion1[2] = imperix_control_B.ADC_cr;
  rtb_DataTypeConversion1[3] = imperix_control_B.ADC_ge;
  rtb_DataTypeConversion1[4] = imperix_control_B.ADC_p2;
  rtb_DataTypeConversion1[5] = imperix_control_B.ADC_h;
  for (i = 0; i < 6; i++) {
    // DataTypeConversion: '<S1>/Data Type Conversion4'
    imperix_control_B.DataTypeConversion4[i] = static_cast<real32_T>
      (rtb_DataTypeConversion1[i]);
  }

  // S-Function (PROBE): '<S219>/S-Function'
  Vc5 = imperix_control_B.DataTypeConversion4[4];

  // S-Function (PROBE): '<S221>/S-Function'
  Vc6 = imperix_control_B.DataTypeConversion4[5];

  // S-Function (ADC): '<S86>/ADC'
  imperix_control_B.ADC_bz = (float)(*ix_raw_adc_ptr_4_1) * 0.012207F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion5' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   Gain: '<S1>/Gain'

  imperix_control_B.DataTypeConversion5 = static_cast<real32_T>(1.0 /
    imperix_control_P.IM.w_max * imperix_control_B.ADC_bz);

  // S-Function (PROBE): '<S223>/S-Function'
  wm = imperix_control_B.DataTypeConversion5;

  // Gain: '<S62>/Gain1'
  for (i = 0; i < 5; i++) {
    rtb_Gain1_g[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    ssq = rtb_DataTypeConversion2[i];
    for (idxAjj = 0; idxAjj < 5; idxAjj++) {
      rtb_Gain1_g[idxAjj] += imperix_control_P.M2C.A[5 * i + idxAjj] * ssq;
    }
  }

  // End of Gain: '<S62>/Gain1'

  // Gain: '<S62>/Gain4'
  rtb_Gain4_idx_0 = 0.0;
  rtb_Gain4_idx_1 = 0.0;
  for (i = 0; i < 6; i++) {
    // Sum: '<S62>/Sum3' incorporates:
    //   Gain: '<S62>/Gain3'

    ssq = 0.0;
    for (idxAjj = 0; idxAjj < 5; idxAjj++) {
      ssq += imperix_control_P.M2C.pinvA[6 * idxAjj + i] * rtb_Gain1_g[idxAjj];
    }

    rtb_vo_sat = rtb_DataTypeConversion2[i] - ssq;

    // End of Sum: '<S62>/Sum3'

    // Gain: '<S62>/Gain4'
    idxAjj = i << 1;
    rtb_Gain4_idx_0 += imperix_control_P.M2C.pinvN[idxAjj] * rtb_vo_sat;
    rtb_Gain4_idx_1 += imperix_control_P.M2C.pinvN[idxAjj + 1] * rtb_vo_sat;
  }

  // DataTypeConversion: '<S1>/Data Type Conversion6'
  imperix_control_B.DataTypeConversion6[0] = static_cast<real32_T>
    (rtb_Gain4_idx_0);
  imperix_control_B.DataTypeConversion6[1] = static_cast<real32_T>
    (rtb_Gain4_idx_1);

  // S-Function (PROBE): '<S225>/S-Function'
  ie1 = imperix_control_B.DataTypeConversion6[0];

  // S-Function (PROBE): '<S227>/S-Function'
  ie2 = imperix_control_B.DataTypeConversion6[1];

  // RateTransition generated from: '<S26>/Saturation' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'
  //   RateTransition generated from: '<S1>/Sum5'
  //   RateTransition generated from: '<S26>/Input format'
  //   RateTransition generated from: '<S54>/IC'
  //   RateTransition generated from: '<S56>/Gain'

  tmp = (imperix_control_M->Timing.RateInteraction.TID0_1 == 1);
  if (tmp) {
    // RateTransition generated from: '<S26>/Saturation'
    imperix_control_B.TmpRTBAtSaturationInport1[0] =
      imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[0];
    imperix_control_B.TmpRTBAtSaturationInport1[1] =
      imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[1];
    imperix_control_B.TmpRTBAtSaturationInport1[2] =
      imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[2];

    // RateTransition generated from: '<S1>/Sum7'
    imperix_control_B.TmpRTBAtSum7Inport1 =
      imperix_control_DW.TmpRTBAtSum7Inport1_Buffer0;
  }

  // End of RateTransition generated from: '<S26>/Saturation'

  // S-Function (sdspstatfcns): '<S56>/Mean' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  Mean_AccVal = imperix_control_B.ADC_b;
  for (i = 4; i >= 0; i--) {
    Mean_AccVal += rtb_DataTypeConversion1[5 - i];
  }

  // Sum: '<S24>/Sum' incorporates:
  //   Gain: '<S24>/Gain1'
  //   Gain: '<S24>/Gain2'
  //   S-Function (sdspstatfcns): '<S56>/Mean'
  //   UnitDelay: '<S24>/Unit Delay1'

  imperix_control_DW.UnitDelay1_DSTATE_k = (1.0 - imperix_control_P.TEB.alpha) *
    (Mean_AccVal / 6.0) + imperix_control_P.TEB.alpha *
    imperix_control_DW.UnitDelay1_DSTATE_k;

  // Sum: '<S1>/Sum7' incorporates:
  //   UnitDelay: '<S24>/Unit Delay1'

  Mean_AccVal = imperix_control_B.TmpRTBAtSum7Inport1 -
    imperix_control_DW.UnitDelay1_DSTATE_k;

  // Sum: '<S203>/Sum' incorporates:
  //   DiscreteIntegrator: '<S194>/Integrator'
  //   Gain: '<S199>/Proportional Gain'

  rtb_DeadZone = imperix_control_P.TEB.kp * Mean_AccVal +
    imperix_control_DW.Integrator_DSTATE;

  // Saturate: '<S201>/Saturation'
  if (rtb_DeadZone > imperix_control_P.TEB.u_max) {
    rtb_Saturation_n = imperix_control_P.TEB.u_max;
  } else if (rtb_DeadZone < -imperix_control_P.TEB.u_max) {
    rtb_Saturation_n = -imperix_control_P.TEB.u_max;
  } else {
    rtb_Saturation_n = rtb_DeadZone;
  }

  // End of Saturate: '<S201>/Saturation'

  // Gain: '<S26>/Gain3'
  rtb_TmpSignalConversionAtGain2I[0] = imperix_control_P.Gain3_Gain[0] *
    rtb_Saturation_n;
  rtb_TmpSignalConversionAtGain2I[1] = imperix_control_P.Gain3_Gain[1] *
    rtb_Saturation_n;

  // S-Function (TUNABLE_PARAM): '<S561>/S-Function'
  imperix_control_B.SFunction = F_ref;

  // S-Function (TUNABLE_PARAM): '<S565>/S-Function'
  imperix_control_B.SFunction_k = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double'
  //   DataTypeConversion: '<S1>/Cast To Double1'

  rtb_Sum5 = imperix_control_B.SFunction;
  rtb_Sum4 = imperix_control_B.SFunction_k;

  // MATLAB Function 'Closed_loop_control/IM references': '<S21>:1'
  if (!imperix_control_DW.F_max_not_empty) {
    // '<S21>:1:10'
    // '<S21>:1:11'
    imperix_control_DW.F_max = imperix_control_P.IM.FrN;
    imperix_control_DW.F_max_not_empty = true;

    // '<S21>:1:12'
    imperix_control_DW.w_max = imperix_control_P.IM.w_max;

    // '<S21>:1:13'
    // '<S21>:1:16'
    imperix_control_DW.dF = imperix_control_P.FOC.Ts / (3.0 *
      imperix_control_P.IM.tau_r);

    // '<S21>:1:17'
    imperix_control_DW.dw = imperix_control_P.FOC.Ts;
  }

  if (fabs(imperix_control_B.SFunction - imperix_control_DW.F_prev) >
      imperix_control_DW.dF) {
    // '<S21>:1:21'
    // '<S21>:1:22'
    rtb_Sum_f = imperix_control_B.SFunction - imperix_control_DW.F_prev;
    if (rtIsNaN(rtb_Sum_f)) {
      ssq = (rtNaN);
    } else if (rtb_Sum_f < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (rtb_Sum_f > 0.0);
    }

    rtb_Sum5 = ssq * imperix_control_DW.dF + imperix_control_DW.F_prev;
  }

  if (fabs(imperix_control_B.SFunction_k - imperix_control_DW.w_prev) >
      imperix_control_DW.dw) {
    // '<S21>:1:25'
    // '<S21>:1:26'
    rtb_Sum_f = imperix_control_B.SFunction_k - imperix_control_DW.w_prev;
    if (rtIsNaN(rtb_Sum_f)) {
      ssq = (rtNaN);
    } else if (rtb_Sum_f < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (rtb_Sum_f > 0.0);
    }

    rtb_Sum4 = ssq * imperix_control_DW.dw + imperix_control_DW.w_prev;
  }

  // '<S21>:1:29'
  imperix_control_DW.F_prev = rtb_Sum5;

  // '<S21>:1:30'
  imperix_control_DW.w_prev = rtb_Sum4;

  // '<S21>:1:32'
  rtb_F = imperix_control_DW.F_max * rtb_Sum5;

  // RateTransition generated from: '<S1>/Sum5'
  // '<S21>:1:33'
  if (tmp) {
    // RateTransition generated from: '<S1>/Sum5'
    imperix_control_B.TmpRTBAtSum5Inport2 =
      imperix_control_DW.TmpRTBAtSum5Inport2_Buffer0;
  }

  // Sum: '<S1>/Sum5'
  rtb_Sum5 = rtb_F - imperix_control_B.TmpRTBAtSum5Inport2;

  // Sum: '<S143>/Sum' incorporates:
  //   DiscreteIntegrator: '<S134>/Integrator'
  //   Gain: '<S139>/Proportional Gain'

  rtb_Sum_f = imperix_control_P.FOC.kp_F * rtb_Sum5 +
    imperix_control_DW.Integrator_DSTATE_h;

  // Saturate: '<S141>/Saturation'
  if (rtb_Sum_f > imperix_control_P.FOC.u_max) {
    rtb_Saturation = imperix_control_P.FOC.u_max;
  } else if (rtb_Sum_f < -imperix_control_P.FOC.u_max) {
    rtb_Saturation = -imperix_control_P.FOC.u_max;
  } else {
    rtb_Saturation = rtb_Sum_f;
  }

  // End of Saturate: '<S141>/Saturation'

  // Sum: '<S1>/Sum4' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   MATLAB Function: '<S1>/IM references'

  rtb_Sum4 = imperix_control_DW.w_max * rtb_Sum4 - imperix_control_B.ADC_bz;

  // Sum: '<S295>/Sum' incorporates:
  //   DiscreteIntegrator: '<S286>/Integrator'
  //   Gain: '<S291>/Proportional Gain'

  rtb_Sum_e2 = imperix_control_P.FOC.kp_w * rtb_Sum4 +
    imperix_control_DW.Integrator_DSTATE_e;

  // Saturate: '<S293>/Saturation'
  if (rtb_Sum_e2 > imperix_control_P.FOC.u_max) {
    rtb_Saturation_m = imperix_control_P.FOC.u_max;
  } else if (rtb_Sum_e2 < -imperix_control_P.FOC.u_max) {
    rtb_Saturation_m = -imperix_control_P.FOC.u_max;
  } else {
    rtb_Saturation_m = rtb_Sum_e2;
  }

  // End of Saturate: '<S293>/Saturation'

  // RateTransition generated from: '<S54>/IC'
  if (tmp) {
    // RateTransition generated from: '<S54>/IC'
    imperix_control_B.TmpRTBAtICOutport1 =
      imperix_control_DW.TmpRTBAtICOutport1_Buffer0;
  }

  // RelationalOperator: '<S318>/Compare' incorporates:
  //   Constant: '<S317>/Constant'
  //   Constant: '<S318>/Constant'

  rtb_Compare = (imperix_control_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_control_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S317>/Subsystem1'
  imperix_control_Subsystem1(rtb_Compare, rtb_Saturation, rtb_Saturation_m,
    imperix_control_B.TmpRTBAtICOutport1, &imperix_control_B.Fcn_c,
    &imperix_control_B.Fcn1_f);

  // End of Outputs for SubSystem: '<S317>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S317>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S319>/Compare' incorporates:
  //   Constant: '<S317>/Constant'
  //   Constant: '<S319>/Constant'

  imperix_c_Subsystempi2delay(static_cast<uint8_T>
    (imperix_control_P.dq0toAlphaBetaZero_Alignment ==
     imperix_control_P.CompareToConstant1_const), rtb_Saturation,
    rtb_Saturation_m, imperix_control_B.TmpRTBAtICOutport1,
    &imperix_control_B.Fcn_h, &imperix_control_B.Fcn1_a);

  // End of Outputs for SubSystem: '<S317>/Subsystem - pi//2 delay'

  // Switch: '<S317>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_f[0] = imperix_control_B.Fcn_c;
    rtb_Switch_f[1] = imperix_control_B.Fcn1_f;
  } else {
    rtb_Switch_f[0] = imperix_control_B.Fcn_h;
    rtb_Switch_f[1] = imperix_control_B.Fcn1_a;
  }

  // End of Switch: '<S317>/Switch'

  // Gain: '<S26>/Gain5'
  for (i = 0; i < 6; i++) {
    rtb_DataTypeConversion2[i] = -imperix_control_P.RFT.ab2abc[i];
  }

  rtb_Gain2_d = 0.0;
  rtb_Gain1_e_idx_0 = 0.0;
  rtb_Gain1_e_idx_1 = 0.0;
  for (i = 0; i < 2; i++) {
    ssq = rtb_Switch_f[i];
    rtb_Gain2_d += rtb_DataTypeConversion2[3 * i] * ssq;
    rtb_Gain1_e_idx_0 += rtb_DataTypeConversion2[3 * i + 1] * ssq;
    rtb_Gain1_e_idx_1 += rtb_DataTypeConversion2[3 * i + 2] * ssq;
  }

  rtb_TmpSignalConversionAtGain2I[4] = rtb_Gain1_e_idx_1;
  rtb_TmpSignalConversionAtGain2I[3] = rtb_Gain1_e_idx_0;
  rtb_TmpSignalConversionAtGain2I[2] = rtb_Gain2_d;

  // End of Gain: '<S26>/Gain5'

  // Gain: '<S26>/Gain7'
  for (i = 0; i < 6; i++) {
    rtb_Gain7[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    ssq = rtb_TmpSignalConversionAtGain2I[i];
    for (idxAjj = 0; idxAjj < 6; idxAjj++) {
      rtb_Gain7[idxAjj] += imperix_control_P.M2C.pinvA[6 * i + idxAjj] * ssq;
    }
  }

  // End of Gain: '<S26>/Gain7'

  // Gain: '<S1>/Gain2' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  rtb_Gain2_d = imperix_control_P.IM.np * imperix_control_B.ADC_bz;

  // Sum: '<S1>/Sum3' incorporates:
  //   Bias: '<S1>/Add Constant'
  //   Gain: '<S1>/Gain4'
  //   Product: '<S1>/Divide1'

  rtb_F = rtb_Saturation_m / (rtb_F + imperix_control_P.AddConstant_Bias) *
    (imperix_control_P.IM.Lm / imperix_control_P.IM.tau_r) + rtb_Gain2_d;

  // Gain: '<S53>/Gain'
  rtb_CastToDouble2 = imperix_control_P.IM.Lo * rtb_F;

  // Gain: '<S495>/Gain3' incorporates:
  //   Gain: '<S57>/Gain2'

  b_c = 0.0;
  ie_idx_0 = 0.0;
  for (i = 0; i < 3; i++) {
    ssq = rtb_Gain1_g[i + 2] * imperix_control_P.Gain2_Gain;
    b_c += imperix_control_P.Gain3_Gain_b[3 * i] * ssq;
    ie_idx_0 += imperix_control_P.Gain3_Gain_b[3 * i + 1] * ssq;
  }

  // End of Gain: '<S495>/Gain3'

  // Gain: '<S495>/Gain1'
  rtb_Gain1_e_idx_0 = imperix_control_P.Gain1_Gain * b_c;
  rtb_Gain1_e_idx_1 = imperix_control_P.Gain1_Gain * ie_idx_0;

  // RelationalOperator: '<S496>/Compare' incorporates:
  //   Constant: '<S494>/Constant'
  //   Constant: '<S496>/Constant'

  rtb_Compare = (imperix_control_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_control_P.CompareToConstant_const_l);

  // Outputs for Enabled SubSystem: '<S494>/Subsystem1' incorporates:
  //   EnablePort: '<S499>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S499>/Fcn'
    imperix_control_B.Fcn = rtb_Gain1_e_idx_0 * cos
      (imperix_control_B.TmpRTBAtICOutport1) + rtb_Gain1_e_idx_1 * sin
      (imperix_control_B.TmpRTBAtICOutport1);

    // Fcn: '<S499>/Fcn1'
    imperix_control_B.Fcn1 = -rtb_Gain1_e_idx_0 * sin
      (imperix_control_B.TmpRTBAtICOutport1) + rtb_Gain1_e_idx_1 * cos
      (imperix_control_B.TmpRTBAtICOutport1);
  }

  // End of Outputs for SubSystem: '<S494>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S494>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S498>/Enable'

  // RelationalOperator: '<S497>/Compare' incorporates:
  //   Constant: '<S494>/Constant'
  //   Constant: '<S497>/Constant'

  if (imperix_control_P.AlphaBetaZerotodq0_Alignment ==
      imperix_control_P.CompareToConstant1_const_k) {
    // Fcn: '<S498>/Fcn'
    imperix_control_B.Fcn_p = rtb_Gain1_e_idx_0 * sin
      (imperix_control_B.TmpRTBAtICOutport1) - rtb_Gain1_e_idx_1 * cos
      (imperix_control_B.TmpRTBAtICOutport1);

    // Fcn: '<S498>/Fcn1'
    imperix_control_B.Fcn1_h = rtb_Gain1_e_idx_0 * cos
      (imperix_control_B.TmpRTBAtICOutport1) + rtb_Gain1_e_idx_1 * sin
      (imperix_control_B.TmpRTBAtICOutport1);
  }

  // End of RelationalOperator: '<S497>/Compare'
  // End of Outputs for SubSystem: '<S494>/Subsystem - pi//2 delay'

  // Switch: '<S494>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_h_idx_0 = imperix_control_B.Fcn;
    rtb_Switch_h_idx_1 = imperix_control_B.Fcn1;
  } else {
    rtb_Switch_h_idx_0 = imperix_control_B.Fcn_p;
    rtb_Switch_h_idx_1 = imperix_control_B.Fcn1_h;
  }

  // End of Switch: '<S494>/Switch'

  // Sum: '<S53>/Sum6'
  rtb_Sum6 = rtb_Saturation - rtb_Switch_h_idx_0;

  // Sum: '<S369>/Sum' incorporates:
  //   DiscreteIntegrator: '<S360>/Integrator'
  //   Gain: '<S365>/Proportional Gain'

  rtb_Sum_d = imperix_control_P.MCC.kp * rtb_Sum6 +
    imperix_control_DW.Integrator_DSTATE_b;

  // Saturate: '<S367>/Saturation'
  if (rtb_Sum_d > imperix_control_P.MCC.u_max) {
    rtb_Saturation_e = imperix_control_P.MCC.u_max;
  } else if (rtb_Sum_d < -imperix_control_P.MCC.u_max) {
    rtb_Saturation_e = -imperix_control_P.MCC.u_max;
  } else {
    rtb_Saturation_e = rtb_Sum_d;
  }

  // End of Saturate: '<S367>/Saturation'

  // Sum: '<S53>/Sum' incorporates:
  //   Product: '<S53>/Product1'

  rtb_Switch_h_idx_0 = rtb_Saturation_e - rtb_CastToDouble2 * rtb_Saturation_m;

  // Sum: '<S53>/Sum8'
  rtb_Sum8 = rtb_Saturation_m - rtb_Switch_h_idx_1;

  // Sum: '<S421>/Sum' incorporates:
  //   DiscreteIntegrator: '<S412>/Integrator'
  //   Gain: '<S417>/Proportional Gain'

  rtb_Sum_b = imperix_control_P.MCC.kp * rtb_Sum8 +
    imperix_control_DW.Integrator_DSTATE_k;

  // Saturate: '<S419>/Saturation'
  if (rtb_Sum_b > imperix_control_P.MCC.u_max) {
    rtb_Saturation_fi = imperix_control_P.MCC.u_max;
  } else if (rtb_Sum_b < -imperix_control_P.MCC.u_max) {
    rtb_Saturation_fi = -imperix_control_P.MCC.u_max;
  } else {
    rtb_Saturation_fi = rtb_Sum_b;
  }

  // End of Saturate: '<S419>/Saturation'

  // Sum: '<S53>/Sum1' incorporates:
  //   Product: '<S53>/Product'

  rtb_Switch_h_idx_1 = rtb_Saturation * rtb_CastToDouble2 + rtb_Saturation_fi;

  // RelationalOperator: '<S430>/Compare' incorporates:
  //   Constant: '<S325>/Constant'
  //   Constant: '<S430>/Constant'

  rtb_Compare = (imperix_control_P.dq0toAlphaBetaZero_Alignment_g ==
                 imperix_control_P.CompareToConstant_const_h);

  // Outputs for Enabled SubSystem: '<S325>/Subsystem1'
  imperix_control_Subsystem1(rtb_Compare, rtb_Switch_h_idx_0, rtb_Switch_h_idx_1,
    imperix_control_B.TmpRTBAtICOutport1, &imperix_control_B.Fcn_b,
    &imperix_control_B.Fcn1_o);

  // End of Outputs for SubSystem: '<S325>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S325>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S431>/Compare' incorporates:
  //   Constant: '<S325>/Constant'
  //   Constant: '<S431>/Constant'

  imperix_c_Subsystempi2delay(static_cast<uint8_T>
    (imperix_control_P.dq0toAlphaBetaZero_Alignment_g ==
     imperix_control_P.CompareToConstant1_const_f), rtb_Switch_h_idx_0,
    rtb_Switch_h_idx_1, imperix_control_B.TmpRTBAtICOutport1,
    &imperix_control_B.Fcn_k, &imperix_control_B.Fcn1_l);

  // End of Outputs for SubSystem: '<S325>/Subsystem - pi//2 delay'

  // Switch: '<S325>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_h_idx_0 = imperix_control_B.Fcn_b;
    rtb_Switch_h_idx_1 = imperix_control_B.Fcn1_o;
  } else {
    rtb_Switch_h_idx_0 = imperix_control_B.Fcn_k;
    rtb_Switch_h_idx_1 = imperix_control_B.Fcn1_l;
  }

  // End of Switch: '<S325>/Switch'

  // SignalConversion generated from: '<S52>/Gain2' incorporates:
  //   Constant: '<S52>/vx'

  rtb_CastToDouble2 = imperix_control_P.M2C.Vdc / 2.0;

  // SignalConversion generated from: '<S322>/Gain3'
  rtb_Switch_h_0[0] = rtb_Switch_h_idx_0;
  rtb_Switch_h_0[1] = rtb_Switch_h_idx_1;
  rtb_Switch_h_0[2] = 0.0;

  // Gain: '<S322>/Gain3'
  b_c = 0.0;
  ie_idx_0 = 0.0;
  rtb_vo_sat = 0.0;
  for (i = 0; i < 3; i++) {
    ssq = rtb_Switch_h_0[i];
    b_c += imperix_control_P.Gain3_Gain_o[3 * i] * ssq;
    ie_idx_0 += imperix_control_P.Gain3_Gain_o[3 * i + 1] * ssq;
    rtb_vo_sat += imperix_control_P.Gain3_Gain_o[3 * i + 2] * ssq;
  }

  // End of Gain: '<S322>/Gain3'

  // SignalConversion generated from: '<S52>/Gain2' incorporates:
  //   Constant: '<S52>/vx'

  rtb_TmpSignalConversionAtGain2I[0] = rtb_CastToDouble2;
  rtb_TmpSignalConversionAtGain2I[1] = -rtb_CastToDouble2;
  rtb_TmpSignalConversionAtGain2I[2] = b_c;
  rtb_TmpSignalConversionAtGain2I[3] = ie_idx_0;
  rtb_TmpSignalConversionAtGain2I[4] = rtb_vo_sat;

  // Gain: '<S52>/Gain2'
  for (i = 0; i < 6; i++) {
    rtb_DataTypeConversion2[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    ssq = rtb_TmpSignalConversionAtGain2I[i];
    for (idxAjj = 0; idxAjj < 6; idxAjj++) {
      rtb_DataTypeConversion2[idxAjj] += imperix_control_P.Gain2_Gain_k[6 * i +
        idxAjj] * ssq;
    }
  }

  // End of Gain: '<S52>/Gain2'

  // MATLAB Function: '<S26>/Saturation' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'
  //   RateTransition generated from: '<S26>/Saturation'

  // MATLAB Function 'Closed_loop_control/NN CEC/Saturation': '<S155>:1'
  // '<S155>:1:49'
  // '<S155>:1:4'
  // '<S155>:1:5'
  if (!imperix_control_DW.Ac_not_empty) {
    // '<S155>:1:10'
    // '<S155>:1:11'
    for (i = 0; i < 6; i++) {
      rtb_CastToDouble2 = imperix_control_P.M2C.N[i];
      imperix_control_DW.Ac[i] = rtb_CastToDouble2;
      imperix_control_DW.Ac[i + 6] = -rtb_CastToDouble2;
      rtb_CastToDouble2 = imperix_control_P.M2C.N[i + 6];
      imperix_control_DW.Ac[i + 12] = rtb_CastToDouble2;
      imperix_control_DW.Ac[i + 18] = -rtb_CastToDouble2;
    }

    imperix_control_DW.Ac_not_empty = true;

    // '<S155>:1:13'
    // '<S155>:1:17'
    imperix_control_DW.is_max = imperix_control_P.M2C.is_max;

    // '<S155>:1:18'
    imperix_control_DW.SolverOpts.UseHessianAsInput = true;
    imperix_control_DW.SolverOpts.IntegrityChecks = true;
    imperix_control_DW.SolverOpts.MaxIterations = 100;
    imperix_control_DW.SolverOpts.ConstraintTolerance = imperix_control_DW.Tol;
  }

  // '<S155>:1:23'
  for (i = 0; i < 6; i++) {
    rtb_DeadZone_g = rtb_Gain7[i];
    bc[i] = imperix_control_DW.is_max - rtb_DeadZone_g;
    bc[i + 6] = imperix_control_DW.is_max + rtb_DeadZone_g;
  }

  // '<S155>:1:30'
  rtb_CastToDouble2 = imperix_control_B.TmpRTBAtSaturationInport1[1];
  rtb_DeadZone_g = imperix_control_B.TmpRTBAtSaturationInport1[0];
  for (i = 0; i < 12; i++) {
    lb[i] = (imperix_control_DW.Ac[i + 12] * rtb_CastToDouble2 +
             imperix_control_DW.Ac[i] * rtb_DeadZone_g) - bc[i];
  }

  if (!rtIsNaN(lb[0])) {
    i = 1;
  } else {
    i = 0;
    idxAjj = 2;
    exitg1 = false;
    while ((!exitg1) && (idxAjj < 13)) {
      if (!rtIsNaN(lb[idxAjj - 1])) {
        i = idxAjj;
        exitg1 = true;
      } else {
        idxAjj++;
      }
    }
  }

  if (i == 0) {
    rtb_CastToDouble2 = lb[0];
  } else {
    rtb_CastToDouble2 = lb[i - 1];
    for (idxAjj = i + 1; idxAjj < 13; idxAjj++) {
      rtb_DeadZone_g = lb[idxAjj - 1];
      if (rtb_CastToDouble2 < rtb_DeadZone_g) {
        rtb_CastToDouble2 = rtb_DeadZone_g;
      }
    }
  }

  if (imperix_control_DW.Tol < rtb_CastToDouble2) {
    // '<S155>:1:31'
    // '<S155>:1:33'
    if (imperix_control_DW.SolverOpts.UseHessianAsInput) {
      A[0] = imperix_control_DW.Ix[0];
      A[1] = imperix_control_DW.Ix[1];
      A[2] = imperix_control_DW.Ix[2];
      A[3] = imperix_control_DW.Ix[3];
      info = 0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 2)) {
        idxAjj = (i << 1) + i;
        ssq = 0.0;
        if (i >= 1) {
          for (jmax = 0; jmax < 1; jmax++) {
            ssq += A[1] * A[1];
          }
        }

        ssq = A[idxAjj] - ssq;
        if (ssq > 0.0) {
          ssq = sqrt(ssq);
          A[idxAjj] = ssq;
          if (i + 1 < 2) {
            rtb_CastToDouble2 = 1.0 / ssq;
            for (jmax = idxAjj + 2; jmax <= idxAjj + 2; jmax++) {
              A[jmax - 1] *= rtb_CastToDouble2;
            }
          }

          i++;
        } else {
          A[idxAjj] = ssq;
          info = i + 1;
          exitg1 = true;
        }
      }

      if (info == 0) {
        A[2] = 0.0;
      }

      Linv[0] = 1.0;
      Linv[1] = 0.0;
      Linv[2] = 0.0;
      Linv[3] = 1.0;
      imperix_control_trisolve_k(A, Linv);
    } else {
      Linv[0] = imperix_control_DW.Ix[0];
      Linv[1] = imperix_control_DW.Ix[1];
      Linv[2] = imperix_control_DW.Ix[2];
      Linv[3] = imperix_control_DW.Ix[3];
    }

    for (i = 0; i < 12; i++) {
      iA1[i] = false;
    }

    for (i = 0; i < 2; i++) {
      jmax = i << 1;
      rtb_CastToDouble2 = Linv[jmax + 1];
      rtb_DeadZone_g = Linv[jmax];
      Linv_1[jmax] = rtb_CastToDouble2 * Linv[1] + rtb_DeadZone_g * Linv[0];
      Linv_1[jmax + 1] = rtb_CastToDouble2 * Linv[3] + rtb_DeadZone_g * Linv[2];
      tmp_0[i] = -imperix_control_B.TmpRTBAtSaturationInport1[i];
    }

    for (i = 0; i < 24; i++) {
      bc_1[i] = -imperix_control_DW.Ac[i];
    }

    for (i = 0; i < 12; i++) {
      bc_0[i] = -bc[i];
    }

    imperix_control_qpkwik_aq(Linv, Linv_1, tmp_0, bc_1, bc_0, iA1,
      imperix_control_DW.SolverOpts.MaxIterations,
      imperix_control_DW.SolverOpts.ConstraintTolerance, rtb_ie_sat, lb, &i);

    // '<S155>:1:33'
    // '<S155>:1:34'
  } else {
    // '<S155>:1:36'
    rtb_ie_sat[0] = imperix_control_B.TmpRTBAtSaturationInport1[0];
    rtb_ie_sat[1] = imperix_control_B.TmpRTBAtSaturationInport1[1];
  }

  // '<S155>:1:40'
  // '<S155>:1:49'
  rtb_Gain7[0] = imperix_control_B.ADC_b - rtb_DataTypeConversion2[0];
  rtb_Gain7[3] = -rtb_DataTypeConversion2[3];
  rtb_Gain7[1] = imperix_control_B.ADC_n - rtb_DataTypeConversion2[1];
  rtb_Gain7[4] = -rtb_DataTypeConversion2[4];
  rtb_Gain7[2] = imperix_control_B.ADC_cr - rtb_DataTypeConversion2[2];
  rtb_Gain7[5] = -rtb_DataTypeConversion2[5];
  if (!rtIsNaN(rtb_Gain7[0])) {
    i = 1;
  } else {
    i = 0;
    info = 2;
    exitg1 = false;
    while ((!exitg1) && (info < 7)) {
      if (!rtIsNaN(rtb_Gain7[info - 1])) {
        i = info;
        exitg1 = true;
      } else {
        info++;
      }
    }
  }

  if (i == 0) {
    rtb_vo_sat = rtb_Gain7[0];
  } else {
    rtb_vo_sat = rtb_Gain7[i - 1];
    for (info = i + 1; info < 7; info++) {
      rtb_DeadZone_g = rtb_Gain7[info - 1];
      if (rtb_vo_sat > rtb_DeadZone_g) {
        rtb_vo_sat = rtb_DeadZone_g;
      }
    }
  }

  // '<S155>:1:50'
  rtb_Gain7[0] = -rtb_DataTypeConversion2[0];
  rtb_Gain7[3] = -static_cast<real_T>(imperix_control_B.ADC_ge) -
    rtb_DataTypeConversion2[3];
  rtb_Gain7[1] = -rtb_DataTypeConversion2[1];
  rtb_Gain7[4] = -static_cast<real_T>(imperix_control_B.ADC_p2) -
    rtb_DataTypeConversion2[4];
  rtb_Gain7[2] = -rtb_DataTypeConversion2[2];
  rtb_Gain7[5] = -static_cast<real_T>(imperix_control_B.ADC_h) -
    rtb_DataTypeConversion2[5];
  if (!rtIsNaN(-rtb_DataTypeConversion2[0])) {
    i = 1;
  } else {
    i = 0;
    idxAjj = 2;
    exitg1 = false;
    while ((!exitg1) && (idxAjj < 7)) {
      if (!rtIsNaN(rtb_Gain7[idxAjj - 1])) {
        i = idxAjj;
        exitg1 = true;
      } else {
        idxAjj++;
      }
    }
  }

  if (i == 0) {
    rtb_CastToDouble2 = -rtb_DataTypeConversion2[0];
  } else {
    rtb_CastToDouble2 = rtb_Gain7[i - 1];
    for (idxAjj = i + 1; idxAjj < 7; idxAjj++) {
      rtb_DeadZone_g = rtb_Gain7[idxAjj - 1];
      if (rtb_CastToDouble2 < rtb_DeadZone_g) {
        rtb_CastToDouble2 = rtb_DeadZone_g;
      }
    }
  }

  // '<S155>:1:51'
  if (imperix_control_B.TmpRTBAtSaturationInport1[2] > rtb_vo_sat - 1.0) {
    rtb_vo_sat--;
  } else if (rtIsNaN(imperix_control_B.TmpRTBAtSaturationInport1[2])) {
    if (!rtIsNaN(rtb_vo_sat - 1.0)) {
      rtb_vo_sat--;
    } else {
      rtb_vo_sat = (rtNaN);
    }
  } else {
    rtb_vo_sat = imperix_control_B.TmpRTBAtSaturationInport1[2];
  }

  if ((!(rtb_vo_sat >= rtb_CastToDouble2 + 1.0)) && (!rtIsNaN(rtb_CastToDouble2
        + 1.0))) {
    rtb_vo_sat = rtb_CastToDouble2 + 1.0;
  }

  // End of MATLAB Function: '<S26>/Saturation'

  // Sum: '<S154>/Sum' incorporates:
  //   Gain: '<S154>/Gain1'
  //   Gain: '<S154>/Gain2'
  //   UnitDelay: '<S154>/Unit Delay1'

  rtb_CastToDouble2 = (1.0 - imperix_control_P.CCMPC.alpha) * rtb_ie_sat[0] +
    imperix_control_P.CCMPC.alpha * imperix_control_DW.UnitDelay1_DSTATE[0];
  imperix_control_DW.UnitDelay1_DSTATE[0] = rtb_CastToDouble2;

  // DataTypeConversion: '<S1>/Data Type Conversion7'
  imperix_control_B.DataTypeConversion7[0] = static_cast<real32_T>
    (rtb_CastToDouble2);

  // Sum: '<S154>/Sum' incorporates:
  //   Gain: '<S154>/Gain1'
  //   Gain: '<S154>/Gain2'
  //   UnitDelay: '<S154>/Unit Delay1'

  rtb_CastToDouble2 = (1.0 - imperix_control_P.CCMPC.alpha) * rtb_ie_sat[1] +
    imperix_control_P.CCMPC.alpha * imperix_control_DW.UnitDelay1_DSTATE[1];
  imperix_control_DW.UnitDelay1_DSTATE[1] = rtb_CastToDouble2;

  // DataTypeConversion: '<S1>/Data Type Conversion7'
  imperix_control_B.DataTypeConversion7[1] = static_cast<real32_T>
    (rtb_CastToDouble2);

  // S-Function (PROBE): '<S229>/S-Function'
  ie_r1 = imperix_control_B.DataTypeConversion7[0];

  // S-Function (PROBE): '<S231>/S-Function'
  ie_r2 = imperix_control_B.DataTypeConversion7[1];

  // DataTypeConversion: '<S1>/Data Type Conversion8'
  imperix_control_B.DataTypeConversion8 = static_cast<real32_T>(rtb_vo_sat);

  // S-Function (PROBE): '<S233>/S-Function'
  vo_r = imperix_control_B.DataTypeConversion8;

  // S-Function (PROBE): '<S237>/S-Function'
  is3 = imperix_control_B.DataTypeConversion3[2];

  // S-Function (PROBE): '<S239>/S-Function'
  is4 = imperix_control_B.DataTypeConversion3[3];

  // S-Function (PROBE): '<S241>/S-Function'
  is5 = imperix_control_B.DataTypeConversion3[4];

  // S-Function (PROBE): '<S243>/S-Function'
  is6 = imperix_control_B.DataTypeConversion3[5];

  // S-Function (PROBE): '<S245>/S-Function'
  Vc1 = imperix_control_B.DataTypeConversion4[0];

  // S-Function (PROBE): '<S247>/S-Function'
  Vc2 = imperix_control_B.DataTypeConversion4[1];

  // S-Function (PROBE): '<S249>/S-Function'
  Vc3 = imperix_control_B.DataTypeConversion4[2];

  // S-Function (PROBE): '<S251>/S-Function'
  Vc4 = imperix_control_B.DataTypeConversion4[3];

  // S-Function (TUNABLE_PARAM): '<S563>/S-Function'
  imperix_control_B.SFunction_kx = enable;

  // Sum: '<S55>/Sum3'
  rtb_CastToDouble2 = rtb_Saturation_n - rtb_Gain1_g[0];

  // Sum: '<S485>/Sum' incorporates:
  //   DiscreteIntegrator: '<S476>/Integrator'
  //   Gain: '<S481>/Proportional Gain'

  rtb_DeadZone_g = imperix_control_P.PCC.kp * rtb_CastToDouble2 +
    imperix_control_DW.Integrator_DSTATE_hg;

  // Saturate: '<S483>/Saturation'
  if (rtb_DeadZone_g > imperix_control_P.PCC.u_max) {
    ssq = imperix_control_P.PCC.u_max;
  } else if (rtb_DeadZone_g < -imperix_control_P.PCC.u_max) {
    ssq = -imperix_control_P.PCC.u_max;
  } else {
    ssq = rtb_DeadZone_g;
  }

  // Sum: '<S55>/Sum13' incorporates:
  //   Constant: '<S55>/Constant1'
  //   Saturate: '<S483>/Saturation'

  ssq -= 1.5 * imperix_control_P.M2C.Vdc;

  // SignalConversion generated from: '<S17>/Vector Concatenate'
  rtb_VectorConcatenate[0] = ssq;

  // Gain: '<S53>/Gain1'
  b_c = imperix_control_P.Gain1_Gain_p * rtb_Switch_h_idx_0;
  ie_idx_0 = b_c;

  // SignalConversion generated from: '<S17>/Vector Concatenate' incorporates:
  //   Gain: '<S53>/Gain1'

  rtb_VectorConcatenate[1] = b_c;

  // Gain: '<S53>/Gain1'
  b_c = imperix_control_P.Gain1_Gain_p * rtb_Switch_h_idx_1;

  // SignalConversion generated from: '<S17>/Vector Concatenate' incorporates:
  //   Gain: '<S53>/Gain1'

  rtb_VectorConcatenate[2] = b_c;

  // MATLAB Function: '<S1>/LICCs control' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'
  //   Gain: '<S53>/Gain1'
  //   UnitDelay: '<S154>/Unit Delay1'

  // MATLAB Function 'Closed_loop_control/LICCs control': '<S23>:1'
  // '<S23>:1:48'
  if (!imperix_control_DW.Ad_not_empty) {
    // '<S23>:1:5'
    // '<S23>:1:7'
    memcpy(&imperix_control_DW.Ad[0], &imperix_control_P.CCMPC.Ad[0], sizeof
           (real_T) << 3U);
    imperix_control_DW.Ad_not_empty = true;

    // '<S23>:1:8'
    // '<S23>:1:9'
    // '<S23>:1:10'
    // '<S23>:1:11'
    memcpy(&imperix_control_DW.Bd[0], &imperix_control_P.CCMPC.Bd[0], sizeof
           (real_T) << 4U);
    memcpy(&imperix_control_DW.H[0], &imperix_control_P.CCMPC.H[0], sizeof
           (real_T) << 4U);

    // '<S23>:1:12'
    imperix_control_DW.lambda = imperix_control_P.CCMPC.lambda;

    // '<S23>:1:13'
    memcpy(&imperix_control_DW.Aineq[0], &imperix_control_P.CCMPC.Aineq[0], 96U *
           sizeof(real_T));

    // '<S23>:1:14'
    // '<S23>:1:15'
    imperix_control_DW.is_max2 = imperix_control_P.M2C.is_max *
      imperix_control_P.M2C.is_max;

    // '<S23>:1:16'
    // '<S23>:1:17'
    imperix_control_DW.Vc_ref2 = imperix_control_P.M2C.Vc_ref *
      imperix_control_P.M2C.Vc_ref;

    // '<S23>:1:18'
    memcpy(&imperix_control_DW.pinvT[0], &imperix_control_P.CCMPC.pinvT[0], 30U *
           sizeof(real_T));

    // '<S23>:1:25'
    imperix_control_DW.options.UseHessianAsInput = true;
    imperix_control_DW.options.IntegrityChecks = true;
    imperix_control_DW.options.MaxIterations = 10;
    imperix_control_DW.options.ConstraintTolerance = 1.0E-5;
  }

  // '<S23>:1:33'
  // '<S23>:1:36'
  // '<S23>:1:39'
  // '<S23>:1:42'
  // '<S23>:1:45'
  // '<S23>:1:48'
  Linv[0] = imperix_control_DW.UnitDelay1_DSTATE[0];
  A[0] = imperix_control_DW.u_prev[0];
  Linv[1] = imperix_control_DW.UnitDelay1_DSTATE[1];
  A[1] = imperix_control_DW.u_prev[1];
  Linv[2] = imperix_control_DW.UnitDelay1_DSTATE[0];
  A[2] = imperix_control_DW.u_prev[0];
  Linv[3] = imperix_control_DW.UnitDelay1_DSTATE[1];
  A[3] = imperix_control_DW.u_prev[1];
  for (i = 0; i < 6; i++) {
    rtb_DataTypeConversion2[i] = ((imperix_control_DW.pinvT[i + 6] * ie_idx_0 +
      imperix_control_DW.pinvT[i] * ssq) + imperix_control_DW.pinvT[i + 12] *
      b_c) + rtb_vo_sat;
  }

  // '<S23>:1:49'
  rtb_Gain7[0] = imperix_control_B.ADC_b - rtb_DataTypeConversion2[0];
  rtb_Gain7[1] = imperix_control_B.ADC_n - rtb_DataTypeConversion2[1];
  rtb_Gain7[2] = imperix_control_B.ADC_cr - rtb_DataTypeConversion2[2];
  rtb_Gain7[3] = 0.0 - rtb_DataTypeConversion2[3];
  rtb_Gain7[4] = 0.0 - rtb_DataTypeConversion2[4];
  rtb_Gain7[5] = 0.0 - rtb_DataTypeConversion2[5];
  for (i = 0; i < 2; i++) {
    idxAjj = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      bc[idxAjj + jmax] = rtb_Gain7[jmax];
    }
  }

  // '<S23>:1:50'
  rtb_Gain7[0] = 0.0 - rtb_DataTypeConversion2[0];
  rtb_Gain7[1] = 0.0 - rtb_DataTypeConversion2[1];
  rtb_Gain7[2] = 0.0 - rtb_DataTypeConversion2[2];
  rtb_Gain7[3] = -static_cast<real_T>(imperix_control_B.ADC_ge) -
    rtb_DataTypeConversion2[3];
  rtb_Gain7[4] = -static_cast<real_T>(imperix_control_B.ADC_p2) -
    rtb_DataTypeConversion2[4];
  rtb_Gain7[5] = -static_cast<real_T>(imperix_control_B.ADC_h) -
    rtb_DataTypeConversion2[5];
  for (i = 0; i < 2; i++) {
    idxAjj = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      lb[idxAjj + jmax] = rtb_Gain7[jmax];
    }
  }

  // '<S23>:1:51'
  // '<S23>:1:56'
  if (imperix_control_DW.options.UseHessianAsInput) {
    memcpy(&A_0[0], &imperix_control_DW.H[0], sizeof(real_T) << 4U);
    jmax = 0;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 4)) {
      idxAjj = (i << 2) + i;
      ssq = 0.0;
      if (i >= 1) {
        for (info = 0; info < i; info++) {
          b_c = A_0[(info << 2) + i];
          ssq += b_c * b_c;
        }
      }

      ssq = A_0[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        A_0[idxAjj] = ssq;
        if (i + 1 < 4) {
          if (i != 0) {
            d = (((i - 1) << 2) + i) + 2;
            for (info = i + 2; info <= d; info += 4) {
              b_c_tmp = info - i;
              b_c = -A_0[(((b_c_tmp - 2) >> 2) << 2) + i];
              e = b_c_tmp + 2;
              for (b_c_tmp = info; b_c_tmp <= e; b_c_tmp++) {
                A_tmp = ((idxAjj + b_c_tmp) - info) + 1;
                A_0[A_tmp] += A_0[b_c_tmp - 1] * b_c;
              }
            }
          }

          ssq = 1.0 / ssq;
          d = (idxAjj - i) + 4;
          for (info = idxAjj + 2; info <= d; info++) {
            A_0[info - 1] *= ssq;
          }
        }

        i++;
      } else {
        A_0[idxAjj] = ssq;
        jmax = i + 1;
        exitg1 = true;
      }
    }

    if (jmax == 0) {
      jmax = 5;
    }

    for (idxAjj = 2; idxAjj < jmax; idxAjj++) {
      for (i = 0; i <= idxAjj - 2; i++) {
        A_0[i + ((idxAjj - 1) << 2)] = 0.0;
      }
    }

    for (i = 0; i < 4; i++) {
      jmax = i << 2;
      Linv_0[jmax] = B[jmax];
      Linv_0[jmax + 1] = B[jmax + 1];
      Linv_0[jmax + 2] = B[jmax + 2];
      Linv_0[jmax + 3] = B[jmax + 3];
    }

    imperix_control_trisolve_j(A_0, Linv_0);
  } else {
    memcpy(&Linv_0[0], &imperix_control_DW.H[0], sizeof(real_T) << 4U);
  }

  for (i = 0; i < 24; i++) {
    iA1_0[i] = false;
  }

  b_c = (imperix_control_DW.Ad[0] * rtb_Gain4_idx_0 + imperix_control_DW.Ad[4] *
         rtb_Gain4_idx_1) + (imperix_control_DW.Bd[0] *
    imperix_control_DW.u_prev[0] + imperix_control_DW.u_prev[1] *
    imperix_control_DW.Bd[4]);
  ie_idx_0 = (imperix_control_DW.Ad[1] * rtb_Gain4_idx_0 +
              imperix_control_DW.Ad[5] * rtb_Gain4_idx_1) +
    (imperix_control_DW.u_prev[0] * imperix_control_DW.Bd[1] +
     imperix_control_DW.u_prev[1] * imperix_control_DW.Bd[5]);
  for (i = 0; i < 4; i++) {
    Linv_1[i] = (imperix_control_DW.Ad[i + 4] * ie_idx_0 +
                 imperix_control_DW.Ad[i] * b_c) - Linv[i];
    for (idxAjj = 0; idxAjj < 4; idxAjj++) {
      jmax = idxAjj << 2;
      info = i << 2;
      A_0[idxAjj + info] = ((Linv_0[jmax + 1] * Linv_0[info + 1] + Linv_0[jmax] *
        Linv_0[info]) + Linv_0[jmax + 2] * Linv_0[info + 2]) + Linv_0[jmax + 3] *
        Linv_0[info + 3];
    }
  }

  rtb_Gain4_idx_0 = Linv_1[1];
  rtb_Gain4_idx_1 = Linv_1[0];
  ssq = Linv_1[2];
  b_c = Linv_1[3];
  for (i = 0; i < 4; i++) {
    idxAjj = i << 2;
    Linv_1[i] = (((imperix_control_DW.Bd[idxAjj + 1] * 2.0 * rtb_Gain4_idx_0 +
                   imperix_control_DW.Bd[idxAjj] * 2.0 * rtb_Gain4_idx_1) +
                  imperix_control_DW.Bd[idxAjj + 2] * 2.0 * ssq) +
                 imperix_control_DW.Bd[idxAjj + 3] * 2.0 * b_c) /
      imperix_control_DW.is_max2 + 2.0 * A[i] / imperix_control_DW.Vc_ref2 *
      imperix_control_DW.lambda;
  }

  for (i = 0; i < 96; i++) {
    tmp_1[i] = -imperix_control_DW.Aineq[i];
  }

  for (i = 0; i < 12; i++) {
    bc_1[i] = -bc[i];
    bc_1[i + 12] = lb[i];
  }

  imperix_control_qpkwik_a(Linv_0, A_0, Linv_1, tmp_1, bc_1, iA1_0,
    imperix_control_DW.options.MaxIterations,
    imperix_control_DW.options.ConstraintTolerance, Linv, lam, &i);

  // '<S23>:1:56'
  // '<S23>:1:58'
  // '<S23>:1:62'
  // '<S23>:1:63'
  // '<S23>:1:64'
  // '<S23>:1:65'
  // '<S23>:1:66'
  // '<S23>:1:67'
  // '<S23>:1:69'
  imperix_control_DW.u_prev[0] = Linv[0];
  rtb_VectorConcatenate[3] = Linv[0];
  imperix_control_DW.u_prev[1] = Linv[1];
  rtb_VectorConcatenate[4] = Linv[1];

  // End of MATLAB Function: '<S1>/LICCs control'

  // Sum: '<S17>/Sum11' incorporates:
  //   Gain: '<S17>/Gain'

  for (i = 0; i < 6; i++) {
    ssq = 0.0;
    for (idxAjj = 0; idxAjj < 5; idxAjj++) {
      ssq += imperix_control_P.CCMPC.pinvT[6 * idxAjj + i] *
        rtb_VectorConcatenate[idxAjj];
    }

    rtb_DataTypeConversion2[i] = ssq + rtb_vo_sat;
  }

  // End of Sum: '<S17>/Sum11'
  // MATLAB Function: '<S1>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation index': '<S25>:1'
  // '<S25>:1:4'
  rtb_DataTypeConversion2[3] = -rtb_DataTypeConversion2[3];
  rtb_DataTypeConversion2[4] = -rtb_DataTypeConversion2[4];
  rtb_DataTypeConversion2[5] = -rtb_DataTypeConversion2[5];

  // '<S25>:1:8'
  for (idxAjj = 0; idxAjj < 6; idxAjj++) {
    rtb_vo_sat = rtb_DataTypeConversion2[idxAjj] /
      rtb_DataTypeConversion1[idxAjj];
    if (!(rtb_vo_sat >= 0.0)) {
      rtb_vo_sat = 0.0;
    }

    if (rtb_vo_sat <= 1.0) {
      rtb_DataTypeConversion2[idxAjj] = rtb_vo_sat;
    } else {
      rtb_DataTypeConversion2[idxAjj] = 1.0;
    }
  }

  // End of MATLAB Function: '<S1>/Modulation index'

  // DeadZone: '<S186>/DeadZone'
  if (rtb_DeadZone > imperix_control_P.TEB.u_max) {
    rtb_DeadZone -= imperix_control_P.TEB.u_max;
  } else if (rtb_DeadZone >= -imperix_control_P.TEB.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_control_P.TEB.u_max;
  }

  // End of DeadZone: '<S186>/DeadZone'

  // Gain: '<S191>/Integral Gain'
  Mean_AccVal *= imperix_control_P.TEB.ki;

  // DataTypeConversion: '<S28>/Data Type Conversion1' incorporates:
  //   Constant: '<S1>/Constant4'

  imperix_control_B.DataTypeConversion1 = static_cast<real32_T>
    (imperix_control_P.Constant4_Value);

  // DataTypeConversion: '<S28>/Data Type Conversion2' incorporates:
  //   Constant: '<S28>/phase'

  imperix_control_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_control_P.phase_Value);

  // DataTypeConversion: '<S28>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_d = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S212>/generation'
  // S-Function (CB_PWM): '<S213>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_d > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_control_B.DataTypeConversion1, 1);

  // End of Outputs for SubSystem: '<S212>/generation'

  // DataTypeConversion: '<S304>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_n = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S304>/Data Type Conversion2' incorporates:
  //   Constant: '<S304>/phase'

  imperix_control_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_control_P.phase_Value_a);

  // DataTypeConversion: '<S304>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_o = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S308>/generation'
  // S-Function (CB_PWM): '<S309>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_o > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_control_B.DataTypeConversion1_n, 1);

  // End of Outputs for SubSystem: '<S308>/generation'

  // DataTypeConversion: '<S305>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S304>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S305>/Data Type Conversion2' incorporates:
  //   Constant: '<S305>/phase'

  imperix_control_B.DataTypeConversion2_e = static_cast<real32_T>
    (imperix_control_P.phase_Value_p);

  // DataTypeConversion: '<S305>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_e = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S310>/generation'
  // S-Function (CB_PWM): '<S311>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_e > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_control_B.DataTypeConversion1_i, 1);

  // End of Outputs for SubSystem: '<S310>/generation'

  // DataTypeConversion: '<S306>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S304>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_nb = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S306>/Data Type Conversion2' incorporates:
  //   Constant: '<S306>/phase'

  imperix_control_B.DataTypeConversion2_h = static_cast<real32_T>
    (imperix_control_P.phase_Value_m);

  // DataTypeConversion: '<S306>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_n = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S312>/generation'
  // S-Function (CB_PWM): '<S313>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_n > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_control_B.DataTypeConversion1_nb, 1);

  // End of Outputs for SubSystem: '<S312>/generation'

  // DataTypeConversion: '<S307>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S304>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S307>/Data Type Conversion2' incorporates:
  //   Constant: '<S307>/phase'

  imperix_control_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_control_P.phase_Value_n);

  // DataTypeConversion: '<S307>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_p = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S314>/generation'
  // S-Function (CB_PWM): '<S315>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_p > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_control_B.DataTypeConversion1_k, 1);

  // End of Outputs for SubSystem: '<S314>/generation'

  // DeadZone: '<S468>/DeadZone'
  if (rtb_DeadZone_g > imperix_control_P.PCC.u_max) {
    rtb_DeadZone_g -= imperix_control_P.PCC.u_max;
  } else if (rtb_DeadZone_g >= -imperix_control_P.PCC.u_max) {
    rtb_DeadZone_g = 0.0;
  } else {
    rtb_DeadZone_g -= -imperix_control_P.PCC.u_max;
  }

  // End of DeadZone: '<S468>/DeadZone'

  // Gain: '<S473>/Integral Gain'
  rtb_CastToDouble2 *= imperix_control_P.PCC.ki;

  // Gain: '<S56>/Gain'
  ssq = imperix_control_P.M2C.C * 0.5;

  // RateTransition generated from: '<S56>/Gain' incorporates:
  //   Gain: '<S56>/Gain'
  //   Math: '<S56>/Square'

  if (tmp) {
    for (i = 0; i < 6; i++) {
      // Math: '<S56>/Square'
      rtb_Gain4_idx_0 = rtb_DataTypeConversion1[i];
      imperix_control_DW.TmpRTBAtGainOutport1_Buffer[i] = rtb_Gain4_idx_0 *
        rtb_Gain4_idx_0 * ssq;
    }
  }

  // DataTypeConversion: '<S500>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_e = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S500>/Data Type Conversion2' incorporates:
  //   Constant: '<S500>/phase'

  imperix_control_B.DataTypeConversion2_ka = static_cast<real32_T>
    (imperix_control_P.phase_Value_c);

  // DataTypeConversion: '<S500>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_k = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S504>/generation'
  // S-Function (CB_PWM): '<S505>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_k > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_control_B.DataTypeConversion1_e, 0);

  // End of Outputs for SubSystem: '<S504>/generation'

  // DataTypeConversion: '<S501>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S500>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_ii = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S501>/Data Type Conversion2' incorporates:
  //   Constant: '<S501>/phase'

  imperix_control_B.DataTypeConversion2_hr = static_cast<real32_T>
    (imperix_control_P.phase_Value_cq);

  // DataTypeConversion: '<S501>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_a = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S506>/generation'
  // S-Function (CB_PWM): '<S507>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_a > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_control_B.DataTypeConversion1_ii, 0);

  // End of Outputs for SubSystem: '<S506>/generation'

  // DataTypeConversion: '<S502>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S500>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S502>/Data Type Conversion2' incorporates:
  //   Constant: '<S502>/phase'

  imperix_control_B.DataTypeConversion2_m = static_cast<real32_T>
    (imperix_control_P.phase_Value_a4);

  // DataTypeConversion: '<S502>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_na = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S508>/generation'
  // S-Function (CB_PWM): '<S509>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_na > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_control_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S508>/generation'

  // DataTypeConversion: '<S503>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S500>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S503>/Data Type Conversion2' incorporates:
  //   Constant: '<S503>/phase'

  imperix_control_B.DataTypeConversion2_ht = static_cast<real32_T>
    (imperix_control_P.phase_Value_n4);

  // DataTypeConversion: '<S503>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_b = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S510>/generation'
  // S-Function (CB_PWM): '<S511>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_b > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_control_B.DataTypeConversion1_h, 0);

  // End of Outputs for SubSystem: '<S510>/generation'

  // DataTypeConversion: '<S512>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_DataTypeConversion2[3]);

  // DataTypeConversion: '<S512>/Data Type Conversion2' incorporates:
  //   Constant: '<S512>/phase'

  imperix_control_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_control_P.phase_Value_c0);

  // DataTypeConversion: '<S512>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_aq = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S516>/generation'
  // S-Function (CB_PWM): '<S517>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_aq > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_control_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S516>/generation'

  // DataTypeConversion: '<S513>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S512>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_DataTypeConversion2[3]);

  // DataTypeConversion: '<S513>/Data Type Conversion2' incorporates:
  //   Constant: '<S513>/phase'

  imperix_control_B.DataTypeConversion2_kf = static_cast<real32_T>
    (imperix_control_P.phase_Value_i);

  // DataTypeConversion: '<S513>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_pq = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S518>/generation'
  // S-Function (CB_PWM): '<S519>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_pq > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_control_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S518>/generation'

  // DataTypeConversion: '<S514>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S512>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_DataTypeConversion2[3]);

  // DataTypeConversion: '<S514>/Data Type Conversion2' incorporates:
  //   Constant: '<S514>/phase'

  imperix_control_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_control_P.phase_Value_md);

  // DataTypeConversion: '<S514>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_g = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S520>/generation'
  // S-Function (CB_PWM): '<S521>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_g > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_control_B.DataTypeConversion1_g, 0);

  // End of Outputs for SubSystem: '<S520>/generation'

  // DataTypeConversion: '<S515>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S512>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_mx = static_cast<real32_T>
    (rtb_DataTypeConversion2[3]);

  // DataTypeConversion: '<S515>/Data Type Conversion2' incorporates:
  //   Constant: '<S515>/phase'

  imperix_control_B.DataTypeConversion2_kr = static_cast<real32_T>
    (imperix_control_P.phase_Value_ab);

  // DataTypeConversion: '<S515>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_nh = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S522>/generation'
  // S-Function (CB_PWM): '<S523>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_nh > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_control_B.DataTypeConversion1_mx, 0);

  // End of Outputs for SubSystem: '<S522>/generation'

  // DataTypeConversion: '<S524>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_eq = static_cast<real32_T>
    (rtb_DataTypeConversion2[4]);

  // DataTypeConversion: '<S524>/Data Type Conversion2' incorporates:
  //   Constant: '<S524>/phase'

  imperix_control_B.DataTypeConversion2_kfv = static_cast<real32_T>
    (imperix_control_P.phase_Value_j);

  // DataTypeConversion: '<S524>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_h = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S528>/generation'
  // S-Function (CB_PWM): '<S529>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_h > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_control_B.DataTypeConversion1_eq, 1);

  // End of Outputs for SubSystem: '<S528>/generation'

  // DataTypeConversion: '<S525>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S524>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_gn = static_cast<real32_T>
    (rtb_DataTypeConversion2[4]);

  // DataTypeConversion: '<S525>/Data Type Conversion2' incorporates:
  //   Constant: '<S525>/phase'

  imperix_control_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_control_P.phase_Value_f);

  // DataTypeConversion: '<S525>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_e3 = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S530>/generation'
  // S-Function (CB_PWM): '<S531>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_e3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_control_B.DataTypeConversion1_gn, 1);

  // End of Outputs for SubSystem: '<S530>/generation'

  // DataTypeConversion: '<S526>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S524>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_gj = static_cast<real32_T>
    (rtb_DataTypeConversion2[4]);

  // DataTypeConversion: '<S526>/Data Type Conversion2' incorporates:
  //   Constant: '<S526>/phase'

  imperix_control_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_control_P.phase_Value_o);

  // DataTypeConversion: '<S526>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_j = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S532>/generation'
  // S-Function (CB_PWM): '<S533>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_j > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_control_B.DataTypeConversion1_gj, 1);

  // End of Outputs for SubSystem: '<S532>/generation'

  // DataTypeConversion: '<S527>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S524>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_l = static_cast<real32_T>
    (rtb_DataTypeConversion2[4]);

  // DataTypeConversion: '<S527>/Data Type Conversion2' incorporates:
  //   Constant: '<S527>/phase'

  imperix_control_B.DataTypeConversion2_d1 = static_cast<real32_T>
    (imperix_control_P.phase_Value_nf);

  // DataTypeConversion: '<S527>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_f = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S534>/generation'
  // S-Function (CB_PWM): '<S535>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_f > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_control_B.DataTypeConversion1_l, 1);

  // End of Outputs for SubSystem: '<S534>/generation'

  // DataTypeConversion: '<S536>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_hk = static_cast<real32_T>
    (rtb_DataTypeConversion2[5]);

  // DataTypeConversion: '<S536>/Data Type Conversion2' incorporates:
  //   Constant: '<S536>/phase'

  imperix_control_B.DataTypeConversion2_dy = static_cast<real32_T>
    (imperix_control_P.phase_Value_b);

  // DataTypeConversion: '<S536>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_a1 = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S540>/generation'
  // S-Function (CB_PWM): '<S541>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_a1 > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_control_B.DataTypeConversion1_hk,
                     0);

  // End of Outputs for SubSystem: '<S540>/generation'

  // DataTypeConversion: '<S537>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S536>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_gf = static_cast<real32_T>
    (rtb_DataTypeConversion2[5]);

  // DataTypeConversion: '<S537>/Data Type Conversion2' incorporates:
  //   Constant: '<S537>/phase'

  imperix_control_B.DataTypeConversion2_l = static_cast<real32_T>
    (imperix_control_P.phase_Value_jt);

  // DataTypeConversion: '<S537>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_i = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S542>/generation'
  // S-Function (CB_PWM): '<S543>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_i > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_control_B.DataTypeConversion1_gf,
                     0);

  // End of Outputs for SubSystem: '<S542>/generation'

  // DataTypeConversion: '<S538>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S536>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_cz = static_cast<real32_T>
    (rtb_DataTypeConversion2[5]);

  // DataTypeConversion: '<S538>/Data Type Conversion2' incorporates:
  //   Constant: '<S538>/phase'

  imperix_control_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_control_P.phase_Value_o0);

  // DataTypeConversion: '<S538>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_l = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S544>/generation'
  // S-Function (CB_PWM): '<S545>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_l > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_control_B.DataTypeConversion1_cz,
                     0);

  // End of Outputs for SubSystem: '<S544>/generation'

  // DataTypeConversion: '<S539>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S536>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_le = static_cast<real32_T>
    (rtb_DataTypeConversion2[5]);

  // DataTypeConversion: '<S539>/Data Type Conversion2' incorporates:
  //   Constant: '<S539>/phase'

  imperix_control_B.DataTypeConversion2_lo = static_cast<real32_T>
    (imperix_control_P.phase_Value_jo);

  // DataTypeConversion: '<S539>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_o4 = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S546>/generation'
  // S-Function (CB_PWM): '<S547>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_o4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_control_B.DataTypeConversion1_le,
                     0);

  // End of Outputs for SubSystem: '<S546>/generation'

  // DataTypeConversion: '<S548>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_iz = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S548>/Data Type Conversion2' incorporates:
  //   Constant: '<S548>/phase'

  imperix_control_B.DataTypeConversion2_mh = static_cast<real32_T>
    (imperix_control_P.phase_Value_jb);

  // DataTypeConversion: '<S548>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_ax = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S552>/generation'
  // S-Function (CB_PWM): '<S553>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_ax > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_control_B.DataTypeConversion1_iz, 0);

  // End of Outputs for SubSystem: '<S552>/generation'

  // DataTypeConversion: '<S549>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S548>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S549>/Data Type Conversion2' incorporates:
  //   Constant: '<S549>/phase'

  imperix_control_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_control_P.phase_Value_l);

  // DataTypeConversion: '<S549>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_p3 = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S554>/generation'
  // S-Function (CB_PWM): '<S555>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_p3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_control_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S554>/generation'

  // DataTypeConversion: '<S550>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S548>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_kz = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S550>/Data Type Conversion2' incorporates:
  //   Constant: '<S550>/phase'

  imperix_control_B.DataTypeConversion2_m4 = static_cast<real32_T>
    (imperix_control_P.phase_Value_lk);

  // DataTypeConversion: '<S550>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_c = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S556>/generation'
  // S-Function (CB_PWM): '<S557>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_control_B.DataTypeConversion1_kz, 0);

  // End of Outputs for SubSystem: '<S556>/generation'

  // DataTypeConversion: '<S551>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S548>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S551>/Data Type Conversion2' incorporates:
  //   Constant: '<S551>/phase'

  imperix_control_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_control_P.phase_Value_nl);

  // DataTypeConversion: '<S551>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_bc = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S558>/generation'
  // S-Function (CB_PWM): '<S559>/PWM' incorporates:
  //   Constant: '<S99>/clk_id'

  if (imperix_control_B.DataTypeConversion3_bc > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_control_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S558>/generation'

  // RateTransition generated from: '<S1>/Energy balance'
  if (tmp) {
    for (i = 0; i < 6; i++) {
      imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[i] =
        rtb_DataTypeConversion1[i];
    }

    // RateTransition generated from: '<S1>/Energy balance'
    for (i = 0; i < 5; i++) {
      imperix_control_DW.TmpRTBAtEnergybalanceInport3_Bu[i] =
        rtb_TmpSignalConversionAtGain2I[i];
    }

    // End of RateTransition generated from: '<S1>/Energy balance'

    // SignalConversion generated from: '<S316>/Gain3'
    rtb_Switch_h_0[0] = rtb_Switch_f[0];
    rtb_Switch_h_0[1] = rtb_Switch_f[1];
    rtb_Switch_h_0[2] = 0.0;

    // Gain: '<S316>/Gain3'
    b_c = 0.0;
    ie_idx_0 = 0.0;
    rtb_vo_sat = 0.0;
    for (i = 0; i < 3; i++) {
      ssq = rtb_Switch_h_0[i];
      b_c += imperix_control_P.Gain3_Gain_d[3 * i] * ssq;
      ie_idx_0 += imperix_control_P.Gain3_Gain_d[3 * i + 1] * ssq;
      rtb_vo_sat += imperix_control_P.Gain3_Gain_d[3 * i + 2] * ssq;
    }

    // End of Gain: '<S316>/Gain3'

    // RateTransition generated from: '<S1>/Energy balance' incorporates:
    //   Gain: '<S51>/Gain'
    //   Gain: '<S51>/Gain8'

    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[0] = rtb_Saturation_n;
    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[1] =
      imperix_control_P.Gain8_Gain * rtb_Saturation_n;
    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[2] =
      imperix_control_P.Gain_Gain * b_c;
    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[3] =
      imperix_control_P.Gain_Gain * ie_idx_0;
    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[4] =
      imperix_control_P.Gain_Gain * rtb_vo_sat;

    // RateTransition generated from: '<S1>/Energy balance'
    imperix_control_DW.TmpRTBAtEnergybalanceInport5_Bu = rtb_F;

    // RateTransition generated from: '<S1>/Kalman Filter'
    imperix_control_DW.TmpRTBAtKalmanFilterInport1_Buf[0] = rtb_Gain1_e_idx_0;
    imperix_control_DW.TmpRTBAtKalmanFilterInport1_Buf[1] = rtb_Gain1_e_idx_1;

    // RateTransition generated from: '<S1>/Kalman Filter'
    imperix_control_DW.TmpRTBAtKalmanFilterInport2_Buf = rtb_Gain2_d;

    // RateTransition generated from: '<S1>/Unit Delay'
    imperix_control_DW.TmpRTBAtUnitDelayInport1_Buffer[0] = rtb_Switch_h_idx_0;
    imperix_control_DW.TmpRTBAtUnitDelayInport1_Buffer[1] = rtb_Switch_h_idx_1;
  }

  // S-Function (ADC): '<S88>/ADC'
  imperix_control_B.ADC_j = (float)(*ix_raw_adc_ptr_0_2) * 0.012207F + 0.0F;

  // Switch: '<S184>/Switch1' incorporates:
  //   Constant: '<S184>/Clamping_zero'
  //   Constant: '<S184>/Constant'
  //   Constant: '<S184>/Constant2'
  //   RelationalOperator: '<S184>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_control_P.Clamping_zero_Value) {
    tmp_2 = imperix_control_P.Constant_Value;
  } else {
    tmp_2 = imperix_control_P.Constant2_Value;
  }

  // Switch: '<S184>/Switch2' incorporates:
  //   Constant: '<S184>/Clamping_zero'
  //   Constant: '<S184>/Constant3'
  //   Constant: '<S184>/Constant4'
  //   RelationalOperator: '<S184>/fix for DT propagation issue1'

  if (Mean_AccVal > imperix_control_P.Clamping_zero_Value) {
    tmp_3 = imperix_control_P.Constant3_Value;
  } else {
    tmp_3 = imperix_control_P.Constant4_Value_j;
  }

  // Switch: '<S184>/Switch' incorporates:
  //   Constant: '<S184>/Clamping_zero'
  //   Constant: '<S184>/Constant1'
  //   Logic: '<S184>/AND3'
  //   RelationalOperator: '<S184>/Equal1'
  //   RelationalOperator: '<S184>/Relational Operator'
  //   Switch: '<S184>/Switch1'
  //   Switch: '<S184>/Switch2'

  if ((imperix_control_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_2 == tmp_3))
  {
    Mean_AccVal = imperix_control_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S194>/Integrator' incorporates:
  //   Switch: '<S184>/Switch'

  imperix_control_DW.Integrator_DSTATE += imperix_control_P.Integrator_gainval *
    Mean_AccVal;

  // Update for DiscreteIntegrator: '<S134>/Integrator' incorporates:
  //   Gain: '<S126>/Kb'
  //   Gain: '<S131>/Integral Gain'
  //   Sum: '<S126>/SumI2'
  //   Sum: '<S126>/SumI4'

  imperix_control_DW.Integrator_DSTATE_h += (2.0 * imperix_control_P.FOC.kp_F *
    (rtb_Saturation - rtb_Sum_f) + imperix_control_P.FOC.ki_F * rtb_Sum5) *
    imperix_control_P.Integrator_gainval_o;

  // Update for DiscreteIntegrator: '<S286>/Integrator' incorporates:
  //   Gain: '<S278>/Kb'
  //   Gain: '<S283>/Integral Gain'
  //   Sum: '<S278>/SumI2'
  //   Sum: '<S278>/SumI4'

  imperix_control_DW.Integrator_DSTATE_e += (2.0 * imperix_control_P.FOC.kp_w *
    (rtb_Saturation_m - rtb_Sum_e2) + imperix_control_P.FOC.ki_w * rtb_Sum4) *
    imperix_control_P.Integrator_gainval_k;

  // Update for DiscreteIntegrator: '<S360>/Integrator' incorporates:
  //   Gain: '<S352>/Kb'
  //   Gain: '<S357>/Integral Gain'
  //   Sum: '<S352>/SumI2'
  //   Sum: '<S352>/SumI4'

  imperix_control_DW.Integrator_DSTATE_b += ((rtb_Saturation_e - rtb_Sum_d) *
    imperix_control_P.MCC.kp + imperix_control_P.MCC.ki * rtb_Sum6) *
    imperix_control_P.Integrator_gainval_c;

  // Update for DiscreteIntegrator: '<S412>/Integrator' incorporates:
  //   Gain: '<S404>/Kb'
  //   Gain: '<S409>/Integral Gain'
  //   Sum: '<S404>/SumI2'
  //   Sum: '<S404>/SumI4'

  imperix_control_DW.Integrator_DSTATE_k += ((rtb_Saturation_fi - rtb_Sum_b) *
    imperix_control_P.MCC.kp + imperix_control_P.MCC.ki * rtb_Sum8) *
    imperix_control_P.Integrator_gainval_p;

  // Switch: '<S466>/Switch1' incorporates:
  //   Constant: '<S466>/Clamping_zero'
  //   Constant: '<S466>/Constant'
  //   Constant: '<S466>/Constant2'
  //   RelationalOperator: '<S466>/fix for DT propagation issue'

  if (rtb_DeadZone_g > imperix_control_P.Clamping_zero_Value_e) {
    tmp_2 = imperix_control_P.Constant_Value_i;
  } else {
    tmp_2 = imperix_control_P.Constant2_Value_p;
  }

  // Switch: '<S466>/Switch2' incorporates:
  //   Constant: '<S466>/Clamping_zero'
  //   Constant: '<S466>/Constant3'
  //   Constant: '<S466>/Constant4'
  //   RelationalOperator: '<S466>/fix for DT propagation issue1'

  if (rtb_CastToDouble2 > imperix_control_P.Clamping_zero_Value_e) {
    tmp_3 = imperix_control_P.Constant3_Value_g;
  } else {
    tmp_3 = imperix_control_P.Constant4_Value_c;
  }

  // Switch: '<S466>/Switch' incorporates:
  //   Constant: '<S466>/Clamping_zero'
  //   Constant: '<S466>/Constant1'
  //   Logic: '<S466>/AND3'
  //   RelationalOperator: '<S466>/Equal1'
  //   RelationalOperator: '<S466>/Relational Operator'
  //   Switch: '<S466>/Switch1'
  //   Switch: '<S466>/Switch2'

  if ((imperix_control_P.Clamping_zero_Value_e != rtb_DeadZone_g) && (tmp_2 ==
       tmp_3)) {
    rtb_CastToDouble2 = imperix_control_P.Constant1_Value_i;
  }

  // Update for DiscreteIntegrator: '<S476>/Integrator' incorporates:
  //   Switch: '<S466>/Switch'

  imperix_control_DW.Integrator_DSTATE_hg +=
    imperix_control_P.Integrator_gainval_m * rtb_CastToDouble2;
}

// Model step function for TID1
void imperix_control_step1(void)       // Sample time: [0.00166667s, 0.0s]
{
  real_T E[324];
  real_T E_tmp[324];
  real_T c_b[324];
  real_T B[108];
  real_T tmp[108];
  real_T b_B[54];
  real_T tmp_0[54];
  real_T Ad[36];
  real_T Adt[36];
  real_T Adt_0[36];
  real_T tmp_2[36];
  real_T tmp_5[36];
  real_T Ec_pred[18];
  real_T Kt[18];
  real_T VB[18];
  real_T is_temp[18];
  real_T tmp_4[15];
  real_T VB_tmp[12];
  real_T A[9];
  real_T cos_vals[8];
  real_T Ad_0[6];
  real_T tmp_1[6];
  real_T tmp_6[6];
  real_T xt_est[6];
  real_T VB_tmp_0[4];
  real_T tmp_3[4];
  real_T maxval_0[3];
  real_T rtb_VectorConcatenate4[3];
  real_T tmp_7[3];
  real_T vo_ref_temp[3];
  real_T VB_tmp_1;
  real_T VB_tmp_2;
  real_T a21;
  real_T maxval;
  real_T rtb_ComplextoMagnitudeAngle_o1;
  real_T rtb_IC;
  real_T tmp_8;
  int32_T Kt_tmp;
  int32_T Kt_tmp_0;
  int32_T i;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  int32_T rtemp;
  boolean_T x[36];
  boolean_T b_x[6];
  boolean_T p;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   RateTransition generated from: '<S1>/Kalman Filter'
  //   UnitDelay: '<S1>/Unit Delay'
  //
  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S22>:1'
  if (!imperix_control_DW.xt_est_apriori_not_empty) {
    // '<S22>:1:5'
    // '<S22>:1:6'
    for (i = 0; i < 6; i++) {
      imperix_control_DW.xt_est_apriori[i] = imperix_control_P.KF.x1_mu[i];
    }

    imperix_control_DW.xt_est_apriori_not_empty = true;

    // '<S22>:1:7'
    // '<S22>:1:8'
    memcpy(&imperix_control_DW.SIGt_apriori[0], &imperix_control_P.KF.SIG1[0],
           36U * sizeof(real_T));
    memcpy(&imperix_control_DW.Q[0], &imperix_control_P.KF.Q[0], 36U * sizeof
           (real_T));

    // '<S22>:1:9'
    memcpy(&imperix_control_DW.R[0], &imperix_control_P.KF.R[0], 9U * sizeof
           (real_T));

    // '<S22>:1:10'
    memcpy(&imperix_control_DW.Bd_m[0], &imperix_control_P.KF.Bd[0], 12U *
           sizeof(real_T));

    // '<S22>:1:11'
    memcpy(&imperix_control_DW.C[0], &imperix_control_P.KF.C[0], 18U * sizeof
           (real_T));

    // '<S22>:1:12'
    // '<S22>:1:13'
  }

  // '<S22>:1:20'
  // '<S22>:1:28'
  for (r2 = 0; r2 < 6; r2++) {
    Kt[r2] = imperix_control_DW.C[3 * r2];
    VB[r2] = 0.0;
    Kt[r2 + 6] = imperix_control_DW.C[3 * r2 + 1];
    VB[r2 + 6] = 0.0;
    Kt[r2 + 12] = imperix_control_DW.C[3 * r2 + 2];
    VB[r2 + 12] = 0.0;
  }

  for (r2 = 0; r2 < 3; r2++) {
    for (r3 = 0; r3 < 6; r3++) {
      maxval = Kt[6 * r2 + r3];
      for (i = 0; i < 6; i++) {
        rtemp = 6 * r2 + i;
        VB[rtemp] += imperix_control_DW.SIGt_apriori[6 * r3 + i] * maxval;
      }
    }
  }

  for (r2 = 0; r2 < 6; r2++) {
    maxval = 0.0;
    tmp_8 = 0.0;
    a21 = 0.0;
    for (r3 = 0; r3 < 6; r3++) {
      VB_tmp_1 = imperix_control_DW.SIGt_apriori[6 * r2 + r3];
      maxval += imperix_control_DW.C[3 * r3] * VB_tmp_1;
      tmp_8 += imperix_control_DW.C[3 * r3 + 1] * VB_tmp_1;
      a21 += imperix_control_DW.C[3 * r3 + 2] * VB_tmp_1;
    }

    is_temp[3 * r2 + 2] = a21;
    is_temp[3 * r2 + 1] = tmp_8;
    is_temp[3 * r2] = maxval;
  }

  for (r2 = 0; r2 < 3; r2++) {
    for (r3 = 0; r3 < 3; r3++) {
      maxval = 0.0;
      for (i = 0; i < 6; i++) {
        maxval += is_temp[3 * i + r2] * Kt[6 * r3 + i];
      }

      rtemp = 3 * r3 + r2;
      A[rtemp] = imperix_control_DW.R[rtemp] + maxval;
    }
  }

  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = fabs(A[0]);
  a21 = fabs(A[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }

  if (fabs(A[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  A[r2] /= A[r1];
  A[r3] /= A[r1];
  A[r2 + 3] -= A[r1 + 3] * A[r2];
  A[r3 + 3] -= A[r1 + 3] * A[r3];
  A[r2 + 6] -= A[r1 + 6] * A[r2];
  A[r3 + 6] -= A[r1 + 6] * A[r3];
  if (fabs(A[r3 + 3]) > fabs(A[r2 + 3])) {
    rtemp = r2;
    r2 = r3;
    r3 = rtemp;
  }

  A[r3 + 3] /= A[r2 + 3];
  A[r3 + 6] -= A[r3 + 3] * A[r2 + 6];

  // '<S22>:1:29'
  // '<S22>:1:30'
  a21 = 0.0;
  rtb_ComplextoMagnitudeAngle_o1 = 0.0;
  tmp_8 = 0.0;
  for (i = 0; i < 6; i++) {
    rtemp = 6 * r1 + i;
    Kt[rtemp] = VB[i] / A[r1];
    Kt_tmp = 6 * r2 + i;
    Kt[Kt_tmp] = VB[i + 6] - A[r1 + 3] * Kt[rtemp];
    Kt_tmp_0 = 6 * r3 + i;
    Kt[Kt_tmp_0] = VB[i + 12] - A[r1 + 6] * Kt[rtemp];
    Kt[Kt_tmp] /= A[r2 + 3];
    Kt[Kt_tmp_0] -= A[r2 + 6] * Kt[Kt_tmp];
    Kt[Kt_tmp_0] /= A[r3 + 6];
    Kt[Kt_tmp] -= A[r3 + 3] * Kt[Kt_tmp_0];
    Kt[rtemp] -= Kt[Kt_tmp_0] * A[r3];
    Kt[rtemp] -= Kt[Kt_tmp] * A[r2];
    maxval = imperix_control_DW.xt_est_apriori[i];
    a21 += imperix_control_DW.C[3 * i] * maxval;
    rtb_ComplextoMagnitudeAngle_o1 += imperix_control_DW.C[3 * i + 1] * maxval;
    tmp_8 += imperix_control_DW.C[3 * i + 2] * maxval;
  }

  a21 = imperix_control_DW.TmpRTBAtKalmanFilterInport1_Buf[0] - a21;
  rtb_ComplextoMagnitudeAngle_o1 =
    imperix_control_DW.TmpRTBAtKalmanFilterInport1_Buf[1] -
    rtb_ComplextoMagnitudeAngle_o1;
  tmp_8 = imperix_control_DW.TmpRTBAtKalmanFilterInport2_Buf - tmp_8;
  for (r2 = 0; r2 < 6; r2++) {
    xt_est[r2] = ((Kt[r2 + 6] * rtb_ComplextoMagnitudeAngle_o1 + Kt[r2] * a21) +
                  Kt[r2 + 12] * tmp_8) + imperix_control_DW.xt_est_apriori[r2];
  }

  // '<S22>:1:31'
  // '<S22>:1:34'
  // '<S22>:1:35'
  // '<S22>:1:36'
  // '<S22>:1:37'
  // '<S22>:1:38'
  // '<S22>:1:42'
  // '<S22>:1:43'
  // '<S22>:1:44'
  // '<S22>:1:45'
  // '<S22>:1:46'
  // '<S22>:1:47'
  // '<S22>:1:48'
  // '<S22>:1:51'
  memcpy(&Ad[0], &imperix_control_P.KF.Ad[0], 36U * sizeof(real_T));
  memcpy(&Adt[0], &imperix_control_P.KF.Adt[0], 36U * sizeof(real_T));
  Ad[18] = xt_est[4] * imperix_control_P.KF.Ad[18];
  Ad[13] = xt_est[4] * imperix_control_P.KF.Ad[13];
  Ad[20] = xt_est[4] * imperix_control_P.KF.Ad[20];
  Ad[15] = xt_est[4] * imperix_control_P.KF.Ad[15];
  Ad[4] = xt_est[3] * imperix_control_P.KF.Ad[4];
  Ad[10] = xt_est[2] * imperix_control_P.KF.Ad[10];

  // '<S22>:1:52'
  Adt[18] = Ad[18];

  // '<S22>:1:53'
  Adt[13] = Ad[13];

  // '<S22>:1:54'
  Adt[20] = Ad[20];

  // '<S22>:1:55'
  Adt[15] = Ad[15];

  // '<S22>:1:56'
  Adt[4] = Ad[4];

  // '<S22>:1:57'
  Adt[10] = Ad[10];

  // '<S22>:1:58'
  Adt[24] = xt_est[3] * imperix_control_P.KF.Adt[24];

  // '<S22>:1:59'
  Adt[25] = xt_est[2] * imperix_control_P.KF.Adt[25];

  // '<S22>:1:60'
  Adt[26] = xt_est[3] * imperix_control_P.KF.Adt[26];

  // '<S22>:1:61'
  Adt[27] = xt_est[2] * imperix_control_P.KF.Adt[27];

  // '<S22>:1:62'
  Adt[16] = xt_est[1] * imperix_control_P.KF.Adt[16];

  // '<S22>:1:63'
  Adt[22] = xt_est[0] * imperix_control_P.KF.Adt[22];

  // '<S22>:1:66'
  for (r2 = 0; r2 < 6; r2++) {
    Ad_0[r2] = 0.0;
  }

  for (r2 = 0; r2 < 6; r2++) {
    maxval = xt_est[r2];
    for (r3 = 0; r3 < 6; r3++) {
      Ad_0[r3] += Ad[6 * r2 + r3] * maxval;
    }

    tmp_1[r2] = 0.0;
  }

  for (r2 = 0; r2 < 2; r2++) {
    maxval = imperix_control_DW.UnitDelay_DSTATE[r2];
    for (r3 = 0; r3 < 6; r3++) {
      tmp_1[r3] += imperix_control_DW.Bd_m[6 * r2 + r3] * maxval;
    }
  }

  // '<S22>:1:68'
  for (r2 = 0; r2 < 6; r2++) {
    imperix_control_DW.xt_est_apriori[r2] = Ad_0[r2] + tmp_1[r2];
  }

  for (r3 = 0; r3 < 6; r3++) {
    a21 = imperix_control_DW.C[3 * r3 + 1];
    rtb_ComplextoMagnitudeAngle_o1 = imperix_control_DW.C[3 * r3];
    maxval = imperix_control_DW.C[3 * r3 + 2];
    for (r2 = 0; r2 < 6; r2++) {
      i = 6 * r3 + r2;
      Ad[i] = imperix_control_DW.Inx[i] - ((Kt[r2 + 6] * a21 +
        rtb_ComplextoMagnitudeAngle_o1 * Kt[r2]) + Kt[r2 + 12] * maxval);
      tmp_2[r3 + 6 * r2] = 0.0;
    }
  }

  for (r2 = 0; r2 < 6; r2++) {
    for (r3 = 0; r3 < 6; r3++) {
      i = 6 * r2 + r3;
      maxval = imperix_control_DW.SIGt_apriori[i];
      for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
        rtemp = 6 * r2 + Kt_tmp;
        tmp_2[rtemp] += Ad[6 * r3 + Kt_tmp] * maxval;
      }

      Adt_0[i] = 0.0;
    }

    for (r3 = 0; r3 < 6; r3++) {
      maxval = tmp_2[6 * r2 + r3];
      for (i = 0; i < 6; i++) {
        rtemp = 6 * r2 + i;
        Adt_0[rtemp] += Adt[6 * r3 + i] * maxval;
      }
    }
  }

  for (r2 = 0; r2 < 6; r2++) {
    for (r3 = 0; r3 < 6; r3++) {
      maxval = 0.0;
      for (i = 0; i < 6; i++) {
        maxval += Adt_0[6 * i + r2] * Adt[6 * i + r3];
      }

      rtemp = 6 * r3 + r2;
      imperix_control_DW.SIGt_apriori[rtemp] = imperix_control_DW.Q[rtemp] +
        maxval;
    }
  }

  // ComplexToMagnitudeAngle: '<S54>/Complex to Magnitude-Angle' incorporates:
  //   MATLAB Function: '<S1>/Kalman Filter'

  // '<S22>:1:69'
  // '<S22>:1:70'
  // '<S22>:1:73'
  // '<S22>:1:74'
  // '<S22>:1:75'
  // '<S22>:1:76'
  // '<S22>:1:77'
  // '<S22>:1:79'
  rtb_ComplextoMagnitudeAngle_o1 = rt_hypotd_snf
    (imperix_control_DW.xt_est_apriori[2], imperix_control_DW.xt_est_apriori[3]);

  // DataTypeConversion: '<S1>/Data Type Conversion10' incorporates:
  //   Gain: '<S1>/Gain1'

  imperix_control_B.DataTypeConversion10 = static_cast<real32_T>(1.0 /
    imperix_control_P.IM.FrN * rtb_ComplextoMagnitudeAngle_o1);

  // S-Function (PROBE): '<S235>/S-Function'
  Frd = imperix_control_B.DataTypeConversion10;

  // MATLAB Function: '<S1>/Energy balance' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'
  //   RateTransition generated from: '<S56>/Gain'
  //
  // MATLAB Function 'Closed_loop_control/Energy balance': '<S19>:1'
  if (!imperix_control_DW.Ts_not_empty) {
    // '<S19>:1:5'
    // '<S19>:1:8'
    imperix_control_DW.Ts_not_empty = true;

    // '<S19>:1:9'
    // '<S19>:1:10'
    for (i = 0; i < 6; i++) {
      imperix_control_DW.Tab2abc[i] = imperix_control_P.RFT.ab2abc[i];
      imperix_control_DW.Tabc2ab[i] = imperix_control_P.RFT.abc2ab[i];
    }

    // '<S19>:1:11'
    // '<S19>:1:12'
    memcpy(&imperix_control_DW.A[0], &imperix_control_P.M2C.A[0], 30U * sizeof
           (real_T));
    memcpy(&imperix_control_DW.pinvA[0], &imperix_control_P.M2C.pinvA[0], 30U *
           sizeof(real_T));

    // '<S19>:1:13'
    imperix_control_DW.Ts = imperix_control_P.CEMPC.Ts;

    // '<S19>:1:17'
    // '<S19>:1:18'
    memcpy(&imperix_control_DW.K[0], &imperix_control_P.CEMPC.K[0], 324U *
           sizeof(real_T));
    memcpy(&imperix_control_DW.MI[0], &imperix_control_P.CEMPC.MI[0], 324U *
           sizeof(real_T));

    // '<S19>:1:19'
    memcpy(&imperix_control_DW.NN[0], &imperix_control_P.CEMPC.NN[0], 108U *
           sizeof(real_T));

    // '<S19>:1:20'
    memcpy(&imperix_control_DW.ONE[0], &imperix_control_P.CEMPC.ONE[0], 54U *
           sizeof(real_T));

    // '<S19>:1:21'
    imperix_control_DW.Nl = imperix_control_P.CEMPC.Nl;

    // '<S19>:1:22'
    imperix_control_DW.is_max_h = imperix_control_P.M2C.is_max;

    // '<S19>:1:23'
    imperix_control_DW.is_max2_o = imperix_control_DW.is_max_h *
      imperix_control_DW.is_max_h;

    // '<S19>:1:24'
    imperix_control_DW.vo_max2 = imperix_control_P.M2C.vo_max *
      imperix_control_P.M2C.vo_max;

    // '<S19>:1:25'
    imperix_control_DW.Ec_ref2 = imperix_control_P.M2C.Ec_ref *
      imperix_control_P.M2C.Ec_ref;

    // '<S19>:1:26'
    memcpy(&imperix_control_DW.Hu_z[0], &imperix_control_P.CEMPC.Hu_z[0], 36U *
           sizeof(real_T));

    // '<S19>:1:27'
    memcpy(&imperix_control_DW.Aineq_z[0], &imperix_control_P.CEMPC.Aineq_z[0],
           216U * sizeof(real_T));

    // '<S19>:1:28'
    imperix_control_DW.lambda_z = imperix_control_P.CEMPC.lambda_z;

    // '<S19>:1:29'
    memcpy(&imperix_control_DW.Hu_o[0], &imperix_control_P.CEMPC.Hu_o[0], 9U *
           sizeof(real_T));

    // '<S19>:1:30'
    memcpy(&imperix_control_DW.Aineq_o[0], &imperix_control_P.CEMPC.Aineq_o[0],
           18U * sizeof(real_T));

    // '<S19>:1:31'
    imperix_control_DW.lambda_o = imperix_control_P.CEMPC.lambda_o;

    // '<S19>:1:32'
    imperix_control_DW.Ec_dev = imperix_control_P.M2C.Ec_dev;

    // '<S19>:1:37'
    imperix_control_DW.options_z.UseHessianAsInput = true;
    imperix_control_DW.options_z.IntegrityChecks = true;
    imperix_control_DW.options_z.MaxIterations = 20;
    imperix_control_DW.options_z.ConstraintTolerance = 0.0001;

    // '<S19>:1:40'
    imperix_control_DW.options_o.UseHessianAsInput = true;
    imperix_control_DW.options_o.IntegrityChecks = true;
    imperix_control_DW.options_o.MaxIterations = 10;
    imperix_control_DW.options_o.ConstraintTolerance = 0.0001;
  }

  // '<S19>:1:53'
  // '<S19>:1:54'
  // '<S19>:1:62'
  // '<S19>:1:63'
  // '<S19>:1:67'
  maxval = imperix_control_DW.TmpRTBAtEnergybalanceInport5_Bu *
    imperix_control_DW.Ts;

  // '<S19>:1:68'
  // '<S19>:1:69'
  // '<S19>:1:70'
  // '<S19>:1:73'
  // '<S19>:1:74'
  // '<S19>:1:79'
  // '<S19>:1:80'
  // '<S19>:1:83'
  // '<S19>:1:84'
  // '<S19>:1:90'
  tmp_8 = cos(maxval);
  a21 = sin(maxval);
  cos_vals[0] = tmp_8;
  cos_vals[1] = -a21;
  cos_vals[2] = a21;
  cos_vals[3] = tmp_8;
  a21 = 2.0 * maxval;
  tmp_8 = cos(a21);
  a21 = sin(a21);
  cos_vals[4] = tmp_8;
  cos_vals[5] = -a21;
  cos_vals[6] = a21;
  cos_vals[7] = tmp_8;
  for (r2 = 0; r2 < 3; r2++) {
    rtemp = r2 << 1;
    maxval = imperix_control_DW.Tabc2ab[rtemp + 1];
    tmp_8 = imperix_control_DW.Tabc2ab[rtemp];
    for (r3 = 0; r3 < 4; r3++) {
      rtemp = r3 << 1;
      VB_tmp[r3 + (r2 << 2)] = cos_vals[rtemp + 1] * maxval + cos_vals[rtemp] *
        tmp_8;
    }
  }

  imperix_control_repmat(&imperix_control_DW.TmpRTBAtEnergybalanceInport3_Bu[0],
    tmp_3);
  tmp_8 = 0.0;
  a21 = 0.0;
  VB_tmp_1 = 0.0;
  VB_tmp_2 = 0.0;
  for (r2 = 0; r2 < 3; r2++) {
    maxval = imperix_control_DW.TmpRTBAtEnergybalanceInport3_Bu[r2 + 2];
    rtemp = r2 << 2;
    tmp_8 += VB_tmp[rtemp] * maxval;
    a21 += VB_tmp[rtemp + 1] * maxval;
    VB_tmp_1 += VB_tmp[rtemp + 2] * maxval;
    VB_tmp_2 += VB_tmp[rtemp + 3] * maxval;
  }

  VB_tmp_0[3] = VB_tmp_2;
  VB_tmp_0[2] = VB_tmp_1;
  VB_tmp_0[1] = a21;
  VB_tmp_0[0] = tmp_8;
  for (r2 = 0; r2 < 2; r2++) {
    maxval = 0.0;
    tmp_8 = 0.0;
    a21 = 0.0;
    for (r3 = 0; r3 < 2; r3++) {
      VB_tmp_1 = VB_tmp_0[(r2 << 1) + r3];
      maxval += imperix_control_DW.Tab2abc[3 * r3] * VB_tmp_1;
      tmp_8 += imperix_control_DW.Tab2abc[3 * r3 + 1] * VB_tmp_1;
      a21 += imperix_control_DW.Tab2abc[3 * r3 + 2] * VB_tmp_1;
    }

    tmp_1[3 * r2 + 2] = a21;
    tmp_1[3 * r2 + 1] = tmp_8;
    tmp_1[3 * r2] = maxval;
  }

  for (r2 = 0; r2 < 5; r2++) {
    tmp_4[r2] = imperix_control_DW.TmpRTBAtEnergybalanceInport3_Bu[r2];
  }

  for (r2 = 0; r2 < 2; r2++) {
    r3 = r2 << 1;
    i = (r2 + 1) * 5;
    tmp_4[i] = tmp_3[r3];
    tmp_4[i + 1] = tmp_3[r3 + 1];
    tmp_4[i + 2] = tmp_1[3 * r2];
    tmp_4[i + 3] = tmp_1[3 * r2 + 1];
    tmp_4[i + 4] = tmp_1[3 * r2 + 2];
  }

  // '<S19>:1:91'
  imperix_control_repmat(&imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[0],
    tmp_3);
  VB_tmp_0[0] = 0.0;
  VB_tmp_0[1] = 0.0;
  VB_tmp_0[2] = 0.0;
  VB_tmp_0[3] = 0.0;
  for (r2 = 0; r2 < 3; r2++) {
    for (r3 = 0; r3 < 6; r3++) {
      maxval = 0.0;
      for (i = 0; i < 5; i++) {
        maxval += imperix_control_DW.A[5 * r3 + i] * tmp_4[5 * r2 + i];
      }

      VB[r3 + 6 * r2] = maxval;
    }

    maxval = imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[r2 + 2];
    rtemp = r2 << 2;
    VB_tmp_0[0] += VB_tmp[rtemp] * maxval;
    VB_tmp_0[1] += VB_tmp[rtemp + 1] * maxval;
    VB_tmp_0[2] += VB_tmp[rtemp + 2] * maxval;
    VB_tmp_0[3] += VB_tmp[rtemp + 3] * maxval;
  }

  for (r2 = 0; r2 < 2; r2++) {
    maxval = 0.0;
    tmp_8 = 0.0;
    a21 = 0.0;
    for (r3 = 0; r3 < 2; r3++) {
      VB_tmp_1 = VB_tmp_0[(r2 << 1) + r3];
      maxval += imperix_control_DW.Tab2abc[3 * r3] * VB_tmp_1;
      tmp_8 += imperix_control_DW.Tab2abc[3 * r3 + 1] * VB_tmp_1;
      a21 += imperix_control_DW.Tab2abc[3 * r3 + 2] * VB_tmp_1;
    }

    tmp_1[3 * r2 + 2] = a21;
    tmp_1[3 * r2 + 1] = tmp_8;
    tmp_1[3 * r2] = maxval;
  }

  for (r2 = 0; r2 < 5; r2++) {
    tmp_4[r2] = imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[r2];
  }

  for (r2 = 0; r2 < 2; r2++) {
    r3 = r2 << 1;
    i = (r2 + 1) * 5;
    tmp_4[i] = tmp_3[r3];
    tmp_4[i + 1] = tmp_3[r3 + 1];
    tmp_4[i + 2] = tmp_1[3 * r2];
    tmp_4[i + 3] = tmp_1[3 * r2 + 1];
    tmp_4[i + 4] = tmp_1[3 * r2 + 2];
  }

  for (r2 = 0; r2 < 6; r2++) {
    Kt[r2] = 0.0;
    Kt[r2 + 6] = 0.0;
    Kt[r2 + 12] = 0.0;
  }

  // '<S19>:1:94'
  // '<S19>:1:100'
  for (i = 0; i < 3; i++) {
    for (r2 = 0; r2 < 5; r2++) {
      maxval = tmp_4[5 * i + r2];
      for (r3 = 0; r3 < 6; r3++) {
        rtemp = 6 * i + r3;
        Kt[rtemp] += imperix_control_DW.pinvA[6 * r2 + r3] * maxval;
      }
    }

    vo_ref_temp[i] = 0.0;
  }

  // '<S19>:1:101'
  for (i = 0; i < 6; i++) {
    xt_est[i] = 0.0;
  }

  // '<S19>:1:102'
  // '<S19>:1:103'
  // '<S19>:1:105'
  rtemp = static_cast<int32_T>(imperix_control_DW.Nl);

  // '<S19>:1:107'
  if (static_cast<int32_T>(imperix_control_DW.Nl) - 1 >= 0) {
    rtb_IC = imperix_control_DW.Ec_dev * imperix_control_DW.Ec_dev *
      imperix_control_DW.Ec_ref2;
    tmp_6[0] = 0.0;
    tmp_6[1] = 0.0;
    tmp_6[2] = 0.0;
    tmp_6[3] = -imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[3];
    tmp_6[4] = -imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[4];
    tmp_6[5] = -imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[5];
    for (r2 = 0; r2 < 324; r2++) {
      E_tmp[r2] = imperix_control_DW.Ts * imperix_control_DW.K[r2];
    }

    for (r2 = 0; r2 < 18; r2++) {
      maxval = Kt[r2];
      tmp_5[r2] = imperix_control_DW.is_max_h - maxval;
      tmp_5[r2 + 18] = -(-imperix_control_DW.is_max_h - maxval);
    }
  }

  for (r1 = 0; r1 < rtemp; r1++) {
    // '<S19>:1:111'
    maxval = vo_ref_temp[1];
    tmp_8 = vo_ref_temp[0];
    a21 = vo_ref_temp[2];
    for (r2 = 0; r2 < 18; r2++) {
      is_temp[r2] = ((imperix_control_DW.ONE[r2 + 18] * maxval +
                      imperix_control_DW.ONE[r2] * tmp_8) +
                     imperix_control_DW.ONE[r2 + 36] * a21) + VB[r2];
    }

    // '<S19>:1:114'
    memset(&c_b[0], 0, 324U * sizeof(real_T));
    for (r2 = 0; r2 < 18; r2++) {
      c_b[r2 + 18 * r2] = is_temp[r2];
    }

    for (r2 = 0; r2 < 18; r2++) {
      memset(&E[r2 * 18], 0, 18U * sizeof(real_T));
      for (r3 = 0; r3 < 18; r3++) {
        maxval = c_b[18 * r2 + r3];
        for (i = 0; i < 18; i++) {
          Kt_tmp = 18 * r2 + i;
          E[Kt_tmp] += E_tmp[18 * r3 + i] * maxval;
        }
      }
    }

    // '<S19>:1:115'
    for (r2 = 0; r2 < 6; r2++) {
      memset(&B[r2 * 18], 0, 18U * sizeof(real_T));
      for (r3 = 0; r3 < 18; r3++) {
        maxval = imperix_control_DW.NN[18 * r2 + r3];
        for (i = 0; i < 18; i++) {
          Kt_tmp = 18 * r2 + i;
          B[Kt_tmp] += E[18 * r3 + i] * maxval;
        }
      }
    }

    // '<S19>:1:116'
    // '<S19>:1:119'
    // '<S19>:1:121'
    for (r2 = 0; r2 < 3; r2++) {
      r3 = r2 * 6;
      for (i = 0; i < 6; i++) {
        is_temp[r3 + i] = imperix_control_DW.TmpRTBAtGainOutport1_Buffer[i];
      }
    }

    // '<S19>:1:124'
    // '<S19>:1:127'
    // '<S19>:1:128'
    // '<S19>:1:131'
    // '<S19>:1:132'
    // '<S19>:1:133'
    // '<S19>:1:140'
    for (r2 = 0; r2 < 18; r2++) {
      for (r3 = 0; r3 < 6; r3++) {
        tmp[r3 + 6 * r2] = 0.0;
      }

      maxval = 0.0;
      for (r3 = 0; r3 < 18; r3++) {
        tmp_8 = imperix_control_DW.MI[18 * r2 + r3];
        for (i = 0; i < 6; i++) {
          Kt_tmp = 6 * r2 + i;
          tmp[Kt_tmp] += B[18 * i + r3] * 2.0 * tmp_8;
        }

        maxval += E[18 * r3 + r2] * Kt[r3];
      }

      Ec_pred[r2] = is_temp[r2] + maxval;
    }

    for (r2 = 0; r2 < 6; r2++) {
      maxval = 0.0;
      for (r3 = 0; r3 < 18; r3++) {
        maxval += imperix_control_DW.NN[18 * r2 + r3] * 2.0 * Kt[r3];
      }

      for (r3 = 0; r3 < 6; r3++) {
        tmp_8 = 0.0;
        for (i = 0; i < 18; i++) {
          tmp_8 += tmp[6 * i + r2] * B[18 * r3 + i];
        }

        i = 6 * r3 + r2;
        Ad[i] = imperix_control_DW.Hu_z[i] * imperix_control_DW.lambda_z + tmp_8
          / rtb_IC;
      }

      tmp_8 = 0.0;
      for (r3 = 0; r3 < 18; r3++) {
        tmp_8 += tmp[6 * r3 + r2] * Ec_pred[r3];
      }

      tmp_1[r2] = maxval / imperix_control_DW.is_max2_o *
        imperix_control_DW.lambda_z + tmp_8 / rtb_IC;
    }

    imperix_cont_mpcActiveSetSolver(Ad, tmp_1, imperix_control_DW.Aineq_z, tmp_5,
      imperix_control_DW.options_z.MaxIterations,
      imperix_control_DW.options_z.ConstraintTolerance,
      imperix_control_DW.options_z.UseHessianAsInput, xt_est, &r2, x);

    // '<S19>:1:140'
    // '<S19>:1:145'
    for (r2 = 0; r2 < 18; r2++) {
      maxval = 0.0;
      for (r3 = 0; r3 < 6; r3++) {
        maxval += imperix_control_DW.NN[18 * r3 + r2] * xt_est[r3];
      }

      is_temp[r2] = Kt[r2] + maxval;
    }

    // '<S19>:1:148'
    memset(&c_b[0], 0, 324U * sizeof(real_T));
    for (r3 = 0; r3 < 18; r3++) {
      c_b[r3 + 18 * r3] = is_temp[r3];
      memset(&E[r3 * 18], 0, 18U * sizeof(real_T));
    }

    for (r2 = 0; r2 < 18; r2++) {
      for (r3 = 0; r3 < 18; r3++) {
        maxval = c_b[18 * r2 + r3];
        for (i = 0; i < 18; i++) {
          Kt_tmp = 18 * r2 + i;
          E[Kt_tmp] += E_tmp[18 * r3 + i] * maxval;
        }
      }
    }

    // '<S19>:1:149'
    // '<S19>:1:150'
    // '<S19>:1:153'
    // '<S19>:1:154'
    // '<S19>:1:157'
    // '<S19>:1:160'
    // '<S19>:1:161'
    // '<S19>:1:164'
    for (i = 0; i < 3; i++) {
      memset(&b_B[i * 18], 0, 18U * sizeof(real_T));
      for (r2 = 0; r2 < 18; r2++) {
        maxval = imperix_control_DW.ONE[18 * i + r2];
        for (r3 = 0; r3 < 18; r3++) {
          Kt_tmp = 18 * i + r3;
          b_B[Kt_tmp] += E[18 * r2 + r3] * maxval;
        }
      }

      r2 = i * 6;
      for (r3 = 0; r3 < 6; r3++) {
        is_temp[r2 + r3] = imperix_control_DW.TmpRTBAtGainOutport1_Buffer[r3];
      }

      tmp_1[i] = imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[i];
    }

    tmp_1[3] = 0.0;
    tmp_1[4] = 0.0;
    tmp_1[5] = 0.0;
    for (r3 = 0; r3 < 3; r3++) {
      for (r2 = 0; r2 < 6; r2++) {
        i = 6 * r3 + r2;
        Ec_pred[i] = tmp_1[r2] - VB[i];
      }

      vo_ref_temp[r3] = Ec_pred[6 * r3];
      for (i = 0; i < 5; i++) {
        tmp_8 = Ec_pred[(6 * r3 + i) + 1];
        if (rtIsNaN(tmp_8)) {
          p = false;
        } else {
          maxval = vo_ref_temp[r3];
          if (rtIsNaN(maxval)) {
            p = true;
          } else {
            p = (maxval > tmp_8);
          }
        }

        if (p) {
          vo_ref_temp[r3] = tmp_8;
        }
      }
    }

    // '<S19>:1:165'
    for (r3 = 0; r3 < 3; r3++) {
      for (r2 = 0; r2 < 6; r2++) {
        i = 6 * r3 + r2;
        Ec_pred[i] = tmp_6[r2] - VB[i];
      }

      maxval_0[r3] = Ec_pred[6 * r3];
      for (r2 = 0; r2 < 5; r2++) {
        tmp_8 = Ec_pred[(6 * r3 + r2) + 1];
        if (rtIsNaN(tmp_8)) {
          p = false;
        } else {
          maxval = maxval_0[r3];
          if (rtIsNaN(maxval)) {
            p = true;
          } else {
            p = (maxval < tmp_8);
          }
        }

        if (p) {
          maxval_0[r3] = tmp_8;
        }
      }
    }

    // '<S19>:1:166'
    // '<S19>:1:171'
    for (r2 = 0; r2 < 18; r2++) {
      maxval = 0.0;
      tmp_8 = 0.0;
      a21 = 0.0;
      VB_tmp_1 = 0.0;
      for (r3 = 0; r3 < 18; r3++) {
        VB_tmp_2 = imperix_control_DW.MI[18 * r2 + r3];
        tmp_8 += 2.0 * b_B[r3] * VB_tmp_2;
        a21 += b_B[r3 + 18] * 2.0 * VB_tmp_2;
        VB_tmp_1 += b_B[r3 + 36] * 2.0 * VB_tmp_2;
        maxval += E[18 * r3 + r2] * VB[r3];
      }

      tmp_0[3 * r2 + 2] = VB_tmp_1;
      tmp_0[3 * r2 + 1] = a21;
      tmp_0[3 * r2] = tmp_8;
      Ec_pred[r2] = is_temp[r2] + maxval;
    }

    for (r2 = 0; r2 < 3; r2++) {
      for (r3 = 0; r3 < 3; r3++) {
        maxval = 0.0;
        for (i = 0; i < 18; i++) {
          maxval += tmp_0[3 * i + r2] * b_B[18 * r3 + i];
        }

        i = 3 * r3 + r2;
        A[i] = imperix_control_DW.Hu_o[i] * imperix_control_DW.lambda_o + maxval
          / rtb_IC;
      }

      maxval = 0.0;
      for (r3 = 0; r3 < 18; r3++) {
        maxval += tmp_0[3 * r3 + r2] * Ec_pred[r3];
      }

      tmp_7[r2] = 0.0 / imperix_control_DW.vo_max2 * imperix_control_DW.lambda_o
        + maxval / rtb_IC;
      Ad_0[r2] = vo_ref_temp[r2];
      Ad_0[r2 + 3] = -maxval_0[r2];
    }

    imperix_co_mpcActiveSetSolver_i(A, tmp_7, imperix_control_DW.Aineq_o, Ad_0,
      imperix_control_DW.options_o.MaxIterations,
      imperix_control_DW.options_o.ConstraintTolerance,
      imperix_control_DW.options_o.UseHessianAsInput, vo_ref_temp, &r2, b_x);

    // '<S19>:1:171'
  }

  // MATLAB Function: '<S26>/Input format'
  // '<S19>:1:178'
  // '<S19>:1:179'
  // '<S19>:1:187'
  // '<S19>:1:188'
  // '<S19>:1:189'
  // '<S19>:1:190'
  // '<S19>:1:191'
  // '<S19>:1:192'
  // '<S19>:1:193'
  // '<S19>:1:196'
  // '<S19>:1:197'
  // '<S19>:1:198'
  // '<S19>:1:201'
  // '<S19>:1:203'
  // MATLAB Function 'Closed_loop_control/NN CEC/Input format': '<S153>:1'
  if (!imperix_control_DW.Ec_ref_not_empty) {
    // '<S153>:1:5'
    // '<S153>:1:6'
    imperix_control_DW.Ec_ref_not_empty = true;

    // '<S153>:1:7'
  }

  // End of MATLAB Function: '<S26>/Input format'

  // MATLAB Function: '<S26>/White noise' incorporates:
  //   MATLAB Function: '<S1>/Energy balance'

  // '<S153>:1:11'
  // '<S153>:1:12'
  // '<S153>:1:13'
  // '<S153>:1:16'
  // '<S153>:1:19'
  // '<S153>:1:20'
  // '<S153>:1:23'
  // '<S153>:1:24'
  // '<S153>:1:25'
  // '<S153>:1:28'
  // MATLAB Function 'Closed_loop_control/NN CEC/FFNN/MLFB': '<S157>:1'
  // '<S157>:1:5'
  rtb_VectorConcatenate4[0] = xt_est[0];
  rtb_VectorConcatenate4[1] = xt_est[1];
  rtb_VectorConcatenate4[2] = vo_ref_temp[0];

  // MATLAB Function 'Closed_loop_control/NN CEC/White noise': '<S156>:1'
  if (!imperix_control_DW.is_max_not_empty) {
    // '<S156>:1:4'
    // '<S156>:1:5'
    imperix_control_DW.is_max_not_empty = true;

    // '<S156>:1:6'
  }

  // End of MATLAB Function: '<S26>/White noise'

  // RateTransition generated from: '<S26>/Saturation' incorporates:
  //   Concatenate: '<S26>/Vector Concatenate4'

  imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[0] =
    rtb_VectorConcatenate4[0];
  imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[1] =
    rtb_VectorConcatenate4[1];
  imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[2] =
    rtb_VectorConcatenate4[2];

  // InitialCondition: '<S54>/IC' incorporates:
  //   ComplexToMagnitudeAngle: '<S54>/Complex to Magnitude-Angle'
  //   MATLAB Function: '<S1>/Kalman Filter'

  if (imperix_control_DW.IC_FirstOutputTime) {
    imperix_control_DW.IC_FirstOutputTime = false;
    rtb_IC = imperix_control_P.IC_Value;
  } else {
    rtb_IC = rt_atan2d_snf(imperix_control_DW.xt_est_apriori[3],
      imperix_control_DW.xt_est_apriori[2]);
  }

  // End of InitialCondition: '<S54>/IC'

  // RateTransition generated from: '<S54>/IC'
  imperix_control_DW.TmpRTBAtICOutport1_Buffer0 = rtb_IC;

  // RateTransition generated from: '<S1>/Sum5'
  imperix_control_DW.TmpRTBAtSum5Inport2_Buffer0 =
    rtb_ComplextoMagnitudeAngle_o1;

  // RateTransition generated from: '<S1>/Sum7' incorporates:
  //   Constant: '<S1>/Constant5'

  imperix_control_DW.TmpRTBAtSum7Inport1_Buffer0 = imperix_control_P.M2C.Vc_ref;

  // RateTransition generated from: '<S1>/Unit Delay' incorporates:
  //   UnitDelay: '<S1>/Unit Delay'

  imperix_control_DW.UnitDelay_DSTATE[0] =
    imperix_control_DW.TmpRTBAtUnitDelayInport1_Buffer[0];
  imperix_control_DW.UnitDelay_DSTATE[1] =
    imperix_control_DW.TmpRTBAtUnitDelayInport1_Buffer[1];
}

// Model initialize function
void imperix_control_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // non-finite (run-time) assignments
  imperix_control_P.SFunction_P4_b = rtMinusInfF;
  imperix_control_P.SFunction_P5_o = rtInfF;

  // Set task counter limit used by the static main program
  (imperix_control_M)->Timing.TaskCounters.cLimit[0] = 1;
  (imperix_control_M)->Timing.TaskCounters.cLimit[1] = 10;

  {
    int32_T i;

    // Start for S-Function (ADC): '<S90>/ADC'
    Adc_ConfigureInput(0, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(0, 0, &ix_raw_adc_ptr_0_0);

    // Start for S-Function (ADC): '<S92>/ADC'
    Adc_ConfigureInput(1, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(1, 0, &ix_raw_adc_ptr_1_0);

    // Start for S-Function (ADC): '<S80>/ADC'
    Adc_ConfigureInput(2, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

    // Start for S-Function (ADC): '<S68>/ADC'
    Adc_ConfigureInput(3, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

    // Start for S-Function (ADC): '<S82>/ADC'
    Adc_ConfigureInput(4, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);

    // Start for S-Function (ADC): '<S84>/ADC'
    Adc_ConfigureInput(5, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

    // Start for S-Function (PROBE): '<S215>/S-Function'
    ConfigureProbe(&is1, 0);

    // Start for S-Function (PROBE): '<S217>/S-Function'
    ConfigureProbe(&is2, 0);

    // Start for S-Function (ADC): '<S76>/ADC'
    Adc_ConfigureInput(6, 0.027466F, 0.0F, 0);
    Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

    // Start for S-Function (ADC): '<S94>/ADC'
    Adc_ConfigureInput(7, 0.027466F, 0.0F, 0);
    Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

    // Start for S-Function (ADC): '<S70>/ADC'
    Adc_ConfigureInput(0, 0.027466F, 0.0F, 1);
    Adc_GetPointer(0, 1, &ix_raw_adc_ptr_0_1);

    // Start for S-Function (ADC): '<S78>/ADC'
    Adc_ConfigureInput(1, 0.027466F, 0.0F, 1);
    Adc_GetPointer(1, 1, &ix_raw_adc_ptr_1_1);

    // Start for S-Function (ADC): '<S72>/ADC'
    Adc_ConfigureInput(2, 0.027466F, 0.0F, 1);
    Adc_GetPointer(2, 1, &ix_raw_adc_ptr_2_1);

    // Start for S-Function (ADC): '<S74>/ADC'
    Adc_ConfigureInput(3, 0.027466F, 0.0F, 1);
    Adc_GetPointer(3, 1, &ix_raw_adc_ptr_3_1);

    // Start for S-Function (PROBE): '<S219>/S-Function'
    ConfigureProbe(&Vc5, 0);

    // Start for S-Function (PROBE): '<S221>/S-Function'
    ConfigureProbe(&Vc6, 0);

    // Start for S-Function (ADC): '<S86>/ADC'
    Adc_ConfigureInput(4, 0.012207F, 0.0F, 1);
    Adc_GetPointer(4, 1, &ix_raw_adc_ptr_4_1);

    // Start for S-Function (PROBE): '<S223>/S-Function'
    ConfigureProbe(&wm, 0);

    // Start for S-Function (PROBE): '<S225>/S-Function'
    ConfigureProbe(&ie1, 0);

    // Start for S-Function (PROBE): '<S227>/S-Function'
    ConfigureProbe(&ie2, 0);

    // Start for RateTransition generated from: '<S26>/Saturation'
    imperix_control_B.TmpRTBAtSaturationInport1[0] =
      imperix_control_P.TmpRTBAtSaturationInport1_Initi;
    imperix_control_B.TmpRTBAtSaturationInport1[1] =
      imperix_control_P.TmpRTBAtSaturationInport1_Initi;
    imperix_control_B.TmpRTBAtSaturationInport1[2] =
      imperix_control_P.TmpRTBAtSaturationInport1_Initi;

    // Start for RateTransition generated from: '<S1>/Sum7'
    imperix_control_B.TmpRTBAtSum7Inport1 =
      imperix_control_P.TmpRTBAtSum7Inport1_InitialCond;

    // Start for S-Function (TUNABLE_PARAM): '<S561>/S-Function'
    F_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S565>/S-Function'
    w_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

    // Start for RateTransition generated from: '<S1>/Sum5'
    imperix_control_B.TmpRTBAtSum5Inport2 =
      imperix_control_P.TmpRTBAtSum5Inport2_InitialCond;

    // Start for RateTransition generated from: '<S54>/IC'
    imperix_control_B.TmpRTBAtICOutport1 =
      imperix_control_P.TmpRTBAtICOutport1_InitialCondi;

    // Start for S-Function (PROBE): '<S229>/S-Function'
    ConfigureProbe(&ie_r1, 0);

    // Start for S-Function (PROBE): '<S231>/S-Function'
    ConfigureProbe(&ie_r2, 0);

    // Start for S-Function (PROBE): '<S233>/S-Function'
    ConfigureProbe(&vo_r, 0);

    // Start for S-Function (PROBE): '<S237>/S-Function'
    ConfigureProbe(&is3, 0);

    // Start for S-Function (PROBE): '<S239>/S-Function'
    ConfigureProbe(&is4, 0);

    // Start for S-Function (PROBE): '<S241>/S-Function'
    ConfigureProbe(&is5, 0);

    // Start for S-Function (PROBE): '<S243>/S-Function'
    ConfigureProbe(&is6, 0);

    // Start for S-Function (PROBE): '<S245>/S-Function'
    ConfigureProbe(&Vc1, 0);

    // Start for S-Function (PROBE): '<S247>/S-Function'
    ConfigureProbe(&Vc2, 0);

    // Start for S-Function (PROBE): '<S249>/S-Function'
    ConfigureProbe(&Vc3, 0);

    // Start for S-Function (PROBE): '<S251>/S-Function'
    ConfigureProbe(&Vc4, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S563>/S-Function'
    enable = 0.0F;                     // Tunable parameter initialization
    ConfigureTunable(&enable, 0, 0);

    // Start for S-Function (IRQ): '<S97>/S-Function' incorporates:
    //   Constant: '<S99>/clk_id'

    ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
      imperix_control_P.clk_id_Value, 0.5F, 0U);
    ConfigureReadTriggerDelayInNs(2000U);
    Adc_SetUserOversampling(0.0F);

    // Start for S-Function (CLK): '<S99>/CLK1'
    Clock_SetFrequency((tClock) 0, 6000.0F);

    // Start for Atomic SubSystem: '<S212>/generation'
    // Start for S-Function (CB_PWM): '<S213>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 8, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 8, 1.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 1);
    CbPwm_Activate((tPwmOutput) 8, 1);

    // End of Start for SubSystem: '<S212>/generation'

    // Start for Atomic SubSystem: '<S308>/generation'
    // Start for S-Function (CB_PWM): '<S309>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
    CbPwm_Activate((tPwmOutput) 0, 1);

    // End of Start for SubSystem: '<S308>/generation'

    // Start for Atomic SubSystem: '<S310>/generation'
    // Start for S-Function (CB_PWM): '<S311>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 1, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
    CbPwm_Activate((tPwmOutput) 1, 1);

    // End of Start for SubSystem: '<S310>/generation'

    // Start for Atomic SubSystem: '<S312>/generation'
    // Start for S-Function (CB_PWM): '<S313>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 2, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
    CbPwm_Activate((tPwmOutput) 2, 1);

    // End of Start for SubSystem: '<S312>/generation'

    // Start for Atomic SubSystem: '<S314>/generation'
    // Start for S-Function (CB_PWM): '<S315>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 3, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
    CbPwm_Activate((tPwmOutput) 3, 1);

    // End of Start for SubSystem: '<S314>/generation'

    // Start for Atomic SubSystem: '<S504>/generation'
    // Start for S-Function (CB_PWM): '<S505>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
    CbPwm_Activate((tPwmOutput) 8, 0);

    // End of Start for SubSystem: '<S504>/generation'

    // Start for Atomic SubSystem: '<S506>/generation'
    // Start for S-Function (CB_PWM): '<S507>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 9, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
    CbPwm_Activate((tPwmOutput) 9, 0);

    // End of Start for SubSystem: '<S506>/generation'

    // Start for Atomic SubSystem: '<S508>/generation'
    // Start for S-Function (CB_PWM): '<S509>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 10, (tClock)
                         imperix_control_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 10, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
    CbPwm_Activate((tPwmOutput) 10, 0);

    // End of Start for SubSystem: '<S508>/generation'

    // Start for Atomic SubSystem: '<S510>/generation'
    // Start for S-Function (CB_PWM): '<S511>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 11, (tClock)
                         imperix_control_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 11, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
    CbPwm_Activate((tPwmOutput) 11, 0);

    // End of Start for SubSystem: '<S510>/generation'

    // Start for Atomic SubSystem: '<S516>/generation'
    // Start for S-Function (CB_PWM): '<S517>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 4, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
    CbPwm_Activate((tPwmOutput) 4, 0);

    // End of Start for SubSystem: '<S516>/generation'

    // Start for Atomic SubSystem: '<S518>/generation'
    // Start for S-Function (CB_PWM): '<S519>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 5, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
    CbPwm_Activate((tPwmOutput) 5, 0);

    // End of Start for SubSystem: '<S518>/generation'

    // Start for Atomic SubSystem: '<S520>/generation'
    // Start for S-Function (CB_PWM): '<S521>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 6, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
    CbPwm_Activate((tPwmOutput) 6, 0);

    // End of Start for SubSystem: '<S520>/generation'

    // Start for Atomic SubSystem: '<S522>/generation'
    // Start for S-Function (CB_PWM): '<S523>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
    CbPwm_Activate((tPwmOutput) 7, 0);

    // End of Start for SubSystem: '<S522>/generation'

    // Start for Atomic SubSystem: '<S528>/generation'
    // Start for S-Function (CB_PWM): '<S529>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 4, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
    CbPwm_Activate((tPwmOutput) 4, 1);

    // End of Start for SubSystem: '<S528>/generation'

    // Start for Atomic SubSystem: '<S530>/generation'
    // Start for S-Function (CB_PWM): '<S531>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 5, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
    CbPwm_Activate((tPwmOutput) 5, 1);

    // End of Start for SubSystem: '<S530>/generation'

    // Start for Atomic SubSystem: '<S532>/generation'
    // Start for S-Function (CB_PWM): '<S533>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 6, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
    CbPwm_Activate((tPwmOutput) 6, 1);

    // End of Start for SubSystem: '<S532>/generation'

    // Start for Atomic SubSystem: '<S534>/generation'
    // Start for S-Function (CB_PWM): '<S535>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_control_P.clk_id_Value,
                         1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
    CbPwm_Activate((tPwmOutput) 7, 1);

    // End of Start for SubSystem: '<S534>/generation'

    // Start for Atomic SubSystem: '<S540>/generation'
    // Start for S-Function (CB_PWM): '<S541>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 12, (tClock)
                         imperix_control_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 12, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
    CbPwm_Activate((tPwmOutput) 12, 0);

    // End of Start for SubSystem: '<S540>/generation'

    // Start for Atomic SubSystem: '<S542>/generation'
    // Start for S-Function (CB_PWM): '<S543>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 13, (tClock)
                         imperix_control_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 13, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
    CbPwm_Activate((tPwmOutput) 13, 0);

    // End of Start for SubSystem: '<S542>/generation'

    // Start for Atomic SubSystem: '<S544>/generation'
    // Start for S-Function (CB_PWM): '<S545>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 14, (tClock)
                         imperix_control_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 14, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
    CbPwm_Activate((tPwmOutput) 14, 0);

    // End of Start for SubSystem: '<S544>/generation'

    // Start for Atomic SubSystem: '<S546>/generation'
    // Start for S-Function (CB_PWM): '<S547>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 15, (tClock)
                         imperix_control_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
    CbPwm_Activate((tPwmOutput) 15, 0);

    // End of Start for SubSystem: '<S546>/generation'

    // Start for Atomic SubSystem: '<S552>/generation'
    // Start for S-Function (CB_PWM): '<S553>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
    CbPwm_Activate((tPwmOutput) 0, 0);

    // End of Start for SubSystem: '<S552>/generation'

    // Start for Atomic SubSystem: '<S554>/generation'
    // Start for S-Function (CB_PWM): '<S555>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 1, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
    CbPwm_Activate((tPwmOutput) 1, 0);

    // End of Start for SubSystem: '<S554>/generation'

    // Start for Atomic SubSystem: '<S556>/generation'
    // Start for S-Function (CB_PWM): '<S557>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 2, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
    CbPwm_Activate((tPwmOutput) 2, 0);

    // End of Start for SubSystem: '<S556>/generation'

    // Start for Atomic SubSystem: '<S558>/generation'
    // Start for S-Function (CB_PWM): '<S559>/PWM' incorporates:
    //   Constant: '<S99>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_control_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 3, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
    CbPwm_Activate((tPwmOutput) 3, 0);

    // End of Start for SubSystem: '<S558>/generation'

    // Start for S-Function (ADC): '<S88>/ADC'
    Adc_ConfigureInput(0, 0.012207F, 0.0F, 2);
    Adc_GetPointer(0, 2, &ix_raw_adc_ptr_0_2);

    // Start for S-Function (PROBE): '<S235>/S-Function'
    ConfigureProbe(&Frd, 0);

    // Start for InitialCondition: '<S54>/IC'
    imperix_control_DW.IC_FirstOutputTime = true;

    // InitializeConditions for UnitDelay: '<S154>/Unit Delay1'
    imperix_control_DW.UnitDelay1_DSTATE[0] =
      imperix_control_P.UnitDelay1_InitialCondition;
    imperix_control_DW.UnitDelay1_DSTATE[1] =
      imperix_control_P.UnitDelay1_InitialCondition;

    // InitializeConditions for RateTransition generated from: '<S26>/Saturation' 
    imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[0] =
      imperix_control_P.TmpRTBAtSaturationInport1_Initi;
    imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[1] =
      imperix_control_P.TmpRTBAtSaturationInport1_Initi;
    imperix_control_DW.TmpRTBAtSaturationInport1_Buffe[2] =
      imperix_control_P.TmpRTBAtSaturationInport1_Initi;

    // InitializeConditions for RateTransition generated from: '<S1>/Sum7'
    imperix_control_DW.TmpRTBAtSum7Inport1_Buffer0 =
      imperix_control_P.TmpRTBAtSum7Inport1_InitialCond;

    // InitializeConditions for UnitDelay: '<S24>/Unit Delay1'
    imperix_control_DW.UnitDelay1_DSTATE_k = imperix_control_P.M2C.Vc_ref;

    // InitializeConditions for DiscreteIntegrator: '<S194>/Integrator'
    imperix_control_DW.Integrator_DSTATE =
      imperix_control_P.PIDController_InitialConditionF;

    // InitializeConditions for RateTransition generated from: '<S1>/Sum5'
    imperix_control_DW.TmpRTBAtSum5Inport2_Buffer0 =
      imperix_control_P.TmpRTBAtSum5Inport2_InitialCond;

    // InitializeConditions for DiscreteIntegrator: '<S134>/Integrator'
    imperix_control_DW.Integrator_DSTATE_h =
      imperix_control_P.FluxPI_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S286>/Integrator'
    imperix_control_DW.Integrator_DSTATE_e =
      imperix_control_P.SpeedPI_InitialConditionForInte;

    // InitializeConditions for RateTransition generated from: '<S54>/IC'
    imperix_control_DW.TmpRTBAtICOutport1_Buffer0 =
      imperix_control_P.TmpRTBAtICOutport1_InitialCondi;

    // InitializeConditions for DiscreteIntegrator: '<S360>/Integrator'
    imperix_control_DW.Integrator_DSTATE_b =
      imperix_control_P.MCCPId_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S412>/Integrator'
    imperix_control_DW.Integrator_DSTATE_k =
      imperix_control_P.MCCPIq_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S476>/Integrator'
    imperix_control_DW.Integrator_DSTATE_hg =
      imperix_control_P.PCCPI_InitialConditionForIntegr;

    // InitializeConditions for UnitDelay: '<S1>/Unit Delay'
    imperix_control_DW.UnitDelay_DSTATE[0] =
      imperix_control_P.UnitDelay_InitialCondition;
    imperix_control_DW.UnitDelay_DSTATE[1] =
      imperix_control_P.UnitDelay_InitialCondition;

    // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
    memset(&imperix_control_DW.Inx[0], 0, 36U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      imperix_control_DW.Inx[i + 6 * i] = 1.0;
    }

    // End of SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'

    // SystemInitialize for MATLAB Function: '<S26>/Saturation'
    imperix_control_DW.Ix[1] = 0.0;
    imperix_control_DW.Ix[2] = 0.0;
    imperix_control_DW.Ix[0] = 1.0;
    imperix_control_DW.Ix[3] = 1.0;
    imperix_control_DW.Tol = 0.001;

    // SystemInitialize for Enabled SubSystem: '<S317>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_control_B.Fcn_h,
      &imperix_control_B.Fcn1_a, &imperix_control_P.Subsystempi2delay);

    // End of SystemInitialize for SubSystem: '<S317>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S317>/Subsystem1'
    imperix_con_Subsystem1_Init(&imperix_control_B.Fcn_c,
      &imperix_control_B.Fcn1_f, &imperix_control_P.Subsystem1);

    // End of SystemInitialize for SubSystem: '<S317>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S325>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_control_B.Fcn_k,
      &imperix_control_B.Fcn1_l, &imperix_control_P.Subsystempi2delay_d);

    // End of SystemInitialize for SubSystem: '<S325>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S325>/Subsystem1'
    imperix_con_Subsystem1_Init(&imperix_control_B.Fcn_b,
      &imperix_control_B.Fcn1_o, &imperix_control_P.Subsystem1_f);

    // End of SystemInitialize for SubSystem: '<S325>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S494>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S498>/Fcn' incorporates:
    //   Outport: '<S498>/dq'

    imperix_control_B.Fcn_p = imperix_control_P.dq_Y0[0];

    // SystemInitialize for Fcn: '<S498>/Fcn1' incorporates:
    //   Outport: '<S498>/dq'

    imperix_control_B.Fcn1_h = imperix_control_P.dq_Y0[1];

    // End of SystemInitialize for SubSystem: '<S494>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S494>/Subsystem1'
    // SystemInitialize for Fcn: '<S499>/Fcn' incorporates:
    //   Outport: '<S499>/dq'

    imperix_control_B.Fcn = imperix_control_P.dq_Y0_e[0];

    // SystemInitialize for Fcn: '<S499>/Fcn1' incorporates:
    //   Outport: '<S499>/dq'

    imperix_control_B.Fcn1 = imperix_control_P.dq_Y0_e[1];

    // End of SystemInitialize for SubSystem: '<S494>/Subsystem1'
  }
}

// Model terminate function
void imperix_control_terminate(void)
{
  // (no terminate code required)
}

boolean_T RT_MODEL_imperix_control_T::StepTask(int32_T idx) const
{
  return (Timing.TaskCounters.TID[(idx)] == 0);
}

uint8_T &RT_MODEL_imperix_control_T::CounterLimit(int32_T idx)
{
  return (Timing.TaskCounters.cLimit[(idx)]);
}

const char_T* RT_MODEL_imperix_control_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_imperix_control_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

uint8_T &RT_MODEL_imperix_control_T::TaskCounter(int32_T idx)
{
  return (Timing.TaskCounters.TID[(idx)]);
}

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
