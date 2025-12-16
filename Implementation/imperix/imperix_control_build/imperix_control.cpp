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
// Model version                  : 19.18
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Mon Dec 15 17:17:56 2025
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
real32_T is3;                          // Probe
real32_T is4;                          // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe
real32_T Vc1;                          // Probe
real32_T Vc2;                          // Probe
real32_T Vc3;                          // Probe
real32_T Vc4;                          // Probe
real32_T F_ref;                        // Tunable parameter
real32_T w_ref;                        // Tunable parameter
real32_T do_control;                   // Tunable parameter
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
int16_T* ix_raw_adc_ptr_0_2;

// Block signals (default storage)
B_imperix_control_T imperix_control_B;

// Block states (default storage)
DW_imperix_control_T imperix_control_DW;

// Real-time model
RT_MODEL_imperix_control_T imperix_control_M_ = RT_MODEL_imperix_control_T();
RT_MODEL_imperix_control_T *const imperix_control_M = &imperix_control_M_;

// Forward declaration for local functions
static void imperix_control_trisolve(const real_T A[4], real_T B[4]);
static real_T imperix_control_norm(const real_T x[2]);
static real_T imperix_control_xnrm2(int32_T n, const real_T x[4], int32_T ix0);
static void imperix_control_xgemv(int32_T m, int32_T n, const real_T A[4],
  int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2]);
static void imperix_control_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T
  ix0, const real_T y[2], real_T A[4], int32_T ia0);
static real_T imperix_control_KWIKfactor(const real_T Ac[24], const int32_T iC
  [12], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
  H[4], int32_T n);
static void imperix_control_DropConstraint(int32_T kDrop, boolean_T iA[12],
  int32_T *nA, int32_T iC[12]);
static void imperix_control_qpkwik(const real_T Linv[4], const real_T Hinv[4],
  const real_T f[2], const real_T Ac[24], const real_T b[12], boolean_T iA[12],
  int32_T maxiter, real_T FeasTol, real_T x[2], real_T lambda[12], int32_T
  *status);
static void imperix_control_trisolve_j(const real_T A[16], real_T B[16]);
static real_T imperix_control_norm_j(const real_T x[4]);
static real_T imperix_control_maximum(const real_T x[4]);
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
static void imperix_cont_mpcActiveSetSolver(const real_T H[4], const real_T f[2],
  const real_T A[24], const real_T b[12], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[2],
  int32_T *exitflag, boolean_T iA[12]);
static void imperix_control_trisolve_a(real_T A, real_T *B);
static real_T imperix_control_KWIKfactor_b(const real_T Ac[2], const int32_T iC
  [2], int32_T nA, real_T Linv, real_T *RLinv, real_T *D, real_T *H, int32_T n);
static void imperix_contro_DropConstraint_n(int32_T kDrop, boolean_T iA[2],
  int32_T *nA, int32_T iC[2]);
static void imperix_control_qpkwik_n(real_T Linv, real_T Hinv, real_T f, const
  real_T Ac[2], const real_T b[2], boolean_T iA[2], int32_T maxiter, real_T
  FeasTol, real_T *x, real_T lambda[2], int32_T *status);
static void imperix_control_predict(const real32_T inputsT_0_f1[14], real32_T
  outputs_0_f1[3]);
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
//    '<S299>/Subsystem - pi//2 delay'
//    '<S307>/Subsystem - pi//2 delay'
//
void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_j, P_Subsystempi2delay_imperix_c_T *localP)
{
  // SystemInitialize for Outport: '<S302>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_j = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S299>/Subsystem - pi//2 delay'
//    '<S307>/Subsystem - pi//2 delay'
//
void imperix_c_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_j)
{
  // Outputs for Enabled SubSystem: '<S299>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S302>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S302>/Fcn' incorporates:
    //   Fcn: '<S302>/Fcn1'

    tmp = cos(rtu_wt);
    tmp_0 = sin(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 + rtu_dq_m * tmp;

    // Fcn: '<S302>/Fcn1'
    *rty_alpha_beta_j = -rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S299>/Subsystem - pi//2 delay'
}

//
// System initialize for enable system:
//    '<S299>/Subsystem1'
//    '<S307>/Subsystem1'
//
void imperix_con_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_k, P_Subsystem1_imperix_control_T *localP)
{
  // SystemInitialize for Outport: '<S303>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_k = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S299>/Subsystem1'
//    '<S307>/Subsystem1'
//
void imperix_control_Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_k)
{
  // Outputs for Enabled SubSystem: '<S299>/Subsystem1' incorporates:
  //   EnablePort: '<S303>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S303>/Fcn' incorporates:
    //   Fcn: '<S303>/Fcn1'

    tmp = sin(rtu_wt);
    tmp_0 = cos(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 - rtu_dq_m * tmp;

    // Fcn: '<S303>/Fcn1'
    *rty_alpha_beta_k = rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S299>/Subsystem1'
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_control_trisolve(const real_T A[4], real_T B[4])
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

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_control_norm(const real_T x[2])
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

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_control_xnrm2(int32_T n, const real_T x[4], int32_T ix0)
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_control_xgemv(int32_T m, int32_T n, const real_T A[4],
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_control_xgerc(int32_T m, int32_T n, real_T alpha1, int32_T
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

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_control_KWIKfactor(const real_T Ac[24], const int32_T iC
  [12], int32_T nA, const real_T Linv[4], real_T RLinv[4], real_T D[4], real_T
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
      xnorm = imperix_control_xnrm2(1, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_control_xnrm2(1, A, ii + 2));
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
        imperix_control_xgemv(b_lastv, c_lastc, A, ii + 3, A, ii + 1, work);
        imperix_control_xgerc(b_lastv, c_lastc, -tau[0], ii + 1, work, A, ii + 3);
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
        imperix_control_xgemv(b_lastv, c_lastc, A, ii + 3, A, ii + 1, work);
        imperix_control_xgerc(b_lastv, c_lastc, -tau[k_i], ii + 1, work, A, ii +
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_control_DropConstraint(int32_T kDrop, boolean_T iA[12],
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_control_qpkwik(const real_T Linv[4], const real_T Hinv[4],
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
        Xnorm0 = imperix_control_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H, 2);
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
              imperix_control_DropConstraint(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_control_norm(x);
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
              cMin = imperix_control_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H, 2);
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
                  imperix_control_DropConstraint(kDrop, iA, &nA, iC);
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
            cMin = imperix_control_norm(x);
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
static real_T imperix_control_maximum(const real_T x[4])
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
          cVal = imperix_control_maximum(varargin_1);
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
static void imperix_cont_mpcActiveSetSolver(const real_T H[4], const real_T f[2],
  const real_T A[24], const real_T b[12], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[2],
  int32_T *exitflag, boolean_T iA[12])
{
  real_T A_0[24];
  real_T b_0[12];
  real_T lam[12];
  real_T Linv[4];
  real_T b_A[4];
  real_T Linv_tmp;
  real_T ssq;
  int32_T b_k;
  int32_T c_j;
  int32_T i;
  int32_T idxAjj;
  boolean_T exitg1;
  if (options_UseHessianAsInput) {
    b_A[0] = H[0];
    b_A[1] = H[1];
    b_A[2] = H[2];
    b_A[3] = H[3];
    i = 0;
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
        i = c_j + 1;
        exitg1 = true;
      }
    }

    if (i == 0) {
      b_A[2] = 0.0;
    }

    Linv[0] = 1.0;
    Linv[1] = 0.0;
    Linv[2] = 0.0;
    Linv[3] = 1.0;
    imperix_control_trisolve(b_A, Linv);
  } else {
    Linv[0] = H[0];
    Linv[1] = H[1];
    Linv[2] = H[2];
    Linv[3] = H[3];
  }

  for (i = 0; i < 12; i++) {
    iA[i] = false;
  }

  for (i = 0; i < 2; i++) {
    c_j = i << 1;
    ssq = Linv[c_j + 1];
    Linv_tmp = Linv[c_j];
    b_A[c_j] = ssq * Linv[1] + Linv_tmp * Linv[0];
    b_A[c_j + 1] = ssq * Linv[3] + Linv_tmp * Linv[2];
  }

  for (i = 0; i < 24; i++) {
    A_0[i] = -A[i];
  }

  for (i = 0; i < 12; i++) {
    b_0[i] = -b[i];
  }

  imperix_control_qpkwik(Linv, b_A, f, A_0, b_0, iA, options_MaxIterations,
    options_ConstraintTolerance, x, lam, exitflag);
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_control_trisolve_a(real_T A, real_T *B)
{
  if (*B != 0.0) {
    *B /= A;
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_control_KWIKfactor_b(const real_T Ac[2], const int32_T iC
  [2], int32_T nA, real_T Linv, real_T *RLinv, real_T *D, real_T *H, int32_T n)
{
  real_T A;
  real_T Status;
  int32_T i;
  int32_T qY;
  Status = 1.0;
  *RLinv = 0.0;
  for (i = 0; i < nA; i++) {
    *RLinv = Ac[iC[i] - 1] * Linv;
  }

  A = *RLinv;
  i = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (i <= nA - 1) {
      if (fabs(*RLinv) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      *RLinv = 0.0;
      for (i = nA; i >= 1; i--) {
        *RLinv = 1.0;
        for (int32_T k = i; k <= nA; k++) {
          *RLinv /= A;
        }

        if (i > 1) {
          for (int32_T k = 0; k <= i - 2; k++) {
            for (int32_T b_k = i; b_k <= nA; b_k++) {
              *RLinv -= A * *RLinv;
            }
          }
        }
      }

      for (i = 0; i < n; i++) {
        if (i + 1 <= n) {
          if (nA > 2147483646) {
            qY = MAX_int32_T;
          } else {
            qY = nA + 1;
          }
        }

        for (int32_T k = i + 1; k <= n; k++) {
          *H = 0.0;
          for (int32_T b_k = qY; b_k <= n; b_k++) {
            *H -= Linv * Linv;
          }
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (i = 0; i < n; i++) {
          *D = 0.0;
          for (int32_T k = qY + 1; k <= nA; k++) {
            *D += Linv * *RLinv;
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_contro_DropConstraint_n(int32_T kDrop, boolean_T iA[2],
  int32_T *nA, int32_T iC[2])
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
static void imperix_control_qpkwik_n(real_T Linv, real_T Hinv, real_T f, const
  real_T Ac[2], const real_T b[2], boolean_T iA[2], int32_T maxiter, real_T
  FeasTol, real_T *x, real_T lambda[2], int32_T *status)
{
  real_T Opt[2];
  real_T Rhs[2];
  real_T D;
  real_T H;
  real_T RLinv;
  real_T U;
  real_T cTol_idx_0;
  real_T cTol_idx_1;
  real_T cVal;
  real_T r;
  real_T rMin;
  real_T rVal;
  real_T t;
  int32_T iC[2];
  int32_T b_exponent;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exponent;
  int32_T f_i;
  int32_T iSave;
  int32_T kDrop;
  int32_T kNext;
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
  *x = 0.0;
  *status = 1;
  r = 0.0;
  rMin = 0.0;
  cTolComputed = false;
  lambda[0] = 0.0;
  cTol_idx_0 = 1.0;
  iC[0] = 0;
  lambda[1] = 0.0;
  cTol_idx_1 = 1.0;
  iC[1] = 0;
  nA = 0;
  if (iA[0]) {
    nA = 1;
    iC[0] = 1;
  }

  if (iA[1]) {
    nA++;
    iC[nA - 1] = 2;
  }

  guard1 = false;
  if (nA > 0) {
    Opt[1] = 0.0;
    Rhs[0] = f;
    Rhs[1] = 0.0;
    DualFeasible = false;
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        cVal = imperix_control_KWIKfactor_b(Ac, iC, nA, Linv, &RLinv, &D, &H, 1);
        if (cVal < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            iA[0] = false;
            iC[0] = 0;
            iA[1] = false;
            iC[1] = 0;
            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483646) {
              f_i = MAX_int32_T;
            } else {
              f_i = kDrop + 2;
            }

            Rhs[f_i - 1] = b[iC[kDrop] - 1];
            for (f_i = kDrop + 1; f_i <= nA; f_i++) {
              U = 0.0;
              for (iSave = 0; iSave < nA; iSave++) {
                U += RLinv * RLinv;
              }
            }
          }

          Opt[0] = H * Rhs[0];
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483646) {
              f_i = MAX_int32_T;
            } else {
              f_i = kDrop + 2;
            }

            Opt[0] += Rhs[f_i - 1] * D;
          }

          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483646) {
              f_i = MAX_int32_T;
            } else {
              f_i = kDrop + 2;
            }

            Opt[f_i - 1] = D * Rhs[0];
            if (kDrop + 1 > 2147483646) {
              f_i = MAX_int32_T;
              tmp = MAX_int32_T;
            } else {
              f_i = kDrop + 2;
              tmp = kDrop + 2;
            }

            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483646) {
                tmp_0 = MAX_int32_T;
              } else {
                tmp_0 = iSave + 2;
              }

              Opt[f_i - 1] = Rhs[tmp_0 - 1] * U + Opt[tmp - 1];
            }
          }

          RLinv = -1.0E-12;
          kDrop = -1;
          for (iSave = 0; iSave < nA; iSave++) {
            if (iSave + 1 > 2147483646) {
              f_i = MAX_int32_T;
            } else {
              f_i = iSave + 2;
            }

            lambda[iC[iSave] - 1] = Opt[f_i - 1];
            if (iSave + 1 > 2147483646) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              kNext = iSave + 2;
            }

            if ((Opt[kNext - 1] < RLinv) && (iSave + 1 <= nA)) {
              kDrop = iSave;
              if (iSave + 1 > 2147483646) {
                f_i = MAX_int32_T;
              } else {
                f_i = iSave + 2;
              }

              RLinv = Opt[f_i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            *x = Opt[0];
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
              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_contro_DropConstraint_n(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          lambda[0] = 0.0;
          lambda[1] = 0.0;
          *x = -Hinv * f;
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    *x = -Hinv * f;
    guard1 = true;
  }

  if (guard1) {
    U = fabs(*x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      RLinv = -FeasTol;
      kNext = -1;
      cTolComputed = !cTolComputed;
      if (cTolComputed) {
        cVal = fabs(Ac[0] * *x);
        if ((!(cTol_idx_0 >= cVal)) && (!rtIsNaN(cVal))) {
          cTol_idx_0 = cVal;
        }
      }

      if (!iA[0]) {
        cVal = (Ac[0] * *x - b[0]) / cTol_idx_0;
        if (cVal < -FeasTol) {
          RLinv = cVal;
          kNext = 0;
        }
      }

      if (cTolComputed) {
        cVal = fabs(Ac[1] * *x);
        if ((!(cTol_idx_1 >= cVal)) && (!rtIsNaN(cVal))) {
          cTol_idx_1 = cVal;
        }
      }

      if ((!iA[1]) && ((Ac[1] * *x - b[1]) / cTol_idx_1 < RLinv)) {
        kNext = 1;
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
              RLinv = Hinv * Ac[kNext];
              guard3 = true;
            } else {
              cVal = imperix_control_KWIKfactor_b(Ac, iC, nA, Linv, &RLinv, &D,
                &H, 1);
              if (cVal <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                RLinv = -H * Ac[kNext];
                for (f_i = 0; f_i < nA; f_i++) {
                  r = Ac[kNext] * D;
                }

                guard3 = true;
              }
            }

            if (guard3) {
              kDrop = 0;
              cVal = 0.0;
              DualFeasible = true;
              ColdReset = true;
              if (nA > 0) {
                f_i = 0;
                exitg4 = false;
                while ((!exitg4) && (f_i <= nA - 1)) {
                  if (r >= 1.0E-12) {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    f_i++;
                  }
                }
              }

              if ((nA != 0) && (!ColdReset)) {
                if (r > 1.0E-12) {
                  for (f_i = 0; f_i < nA; f_i++) {
                    rVal = lambda[iC[f_i] - 1] / r;
                    if ((kDrop == 0) || (rVal < rMin)) {
                      rMin = rVal;
                      kDrop = f_i + 1;
                    }
                  }
                }

                if (kDrop > 0) {
                  cVal = rMin;
                  DualFeasible = false;
                }
              }

              rVal = RLinv * Ac[kNext];
              if (rVal <= 0.0) {
                rVal = 0.0;
                ColdReset = true;
              } else {
                rVal = (b[kNext] - Ac[kNext] * *x) / rVal;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                *status = -1;
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  t = cVal;
                } else if (DualFeasible) {
                  t = rVal;
                } else if (cVal < rVal) {
                  t = cVal;
                } else {
                  t = rVal;
                }

                for (f_i = 0; f_i < nA; f_i++) {
                  iSave = iC[f_i];
                  lambda[iSave - 1] -= t * r;
                  if ((iSave <= 2) && (lambda[iSave - 1] < 0.0)) {
                    lambda[iSave - 1] = 0.0;
                  }
                }

                lambda[kNext] += t;
                frexp(1.0, &exponent);
                if (fabs(t - cVal) < 2.2204460492503131E-16) {
                  imperix_contro_DropConstraint_n(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  *x += t * RLinv;
                  frexp(1.0, &b_exponent);
                  if (fabs(t - rVal) < 2.2204460492503131E-16) {
                    if (nA == 1) {
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
            RLinv = fabs(*x);
            if (fabs(RLinv - U) > 0.001) {
              U = RLinv;
              cTol_idx_1 = fabs(b[0]);
              if (cTol_idx_1 >= 1.0) {
                cTol_idx_0 = cTol_idx_1;
              } else {
                cTol_idx_0 = 1.0;
              }

              cTol_idx_1 = fabs(b[1]);
              if (!(cTol_idx_1 >= 1.0)) {
                cTol_idx_1 = 1.0;
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

void microKernel18374138742484343125(int32_T K, const real32_T *A, int32_T LDA,
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

void microKernel17337926646955518060(int32_T K, const real32_T *A, int32_T LDA,
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

void macroKernel17233443566231932563(int32_T M, int32_T K, int32_T N, const
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
      microKernel17337926646955518060(K, &A[idxA], LDA, &B[idxB], &C[idxC]);
      idxA += 7;
      idxC += 7;
      i += 7;
    }

    while (i <= M - 1) {
      microKernel18374138742484343125(K, &A[idxA], LDA, &B[idxB], &C[idxC]);
      idxA++;
      idxC++;
      i++;
    }

    idxB += LDB;
    j++;
  }
}

void matrixMultiply17233443566231932563(int32_T M, int32_T K, int32_T N, int32_T
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

        macroKernel17233443566231932563(tmp, K2, N2, &A[i + M * k], M, &B[k + K *
          j1], K, &C[i + M * j1], M);
      }
    }
  }
}

// Function for MATLAB Function: '<S146>/MLFB'
static void imperix_control_predict(const real32_T inputsT_0_f1[14], real32_T
  outputs_0_f1[3])
{
  int32_T c_dim1;
  real32_T outT_f5_0_f1[70];
  real32_T outT_f7_0_f1[70];
  real32_T tmp[70];
  real32_T outT_f7_0_f1_0;
  static const real32_T tmp_0[980] = { 1.1668F, -1.35219479F, 0.117692553F,
    0.191753879F, 0.995080113F, -3.97338939F, 1.29130101F, 4.05301332F,
    0.809212089F, -0.695282757F, 0.135112017F, 1.13365948F, 2.1107204F,
    -0.84511131F, 1.1125567F, -1.71447873F, 1.43453443F, -4.93925714F,
    0.83390063F, 1.90736F, -1.15439832F, -1.34732187F, 4.36610556F, 2.8426044F,
    -0.639158666F, 2.69555688F, -1.06925809F, 0.986805F, -0.270876497F,
    0.0910660401F, 0.500035286F, -3.0876317F, -0.937718809F, 0.110392854F,
    1.66610193F, 2.38883972F, -0.252864957F, 0.0906734765F, -0.923624337F,
    -1.18651736F, -0.239793196F, 1.47072136F, -0.150536239F, 1.0365535F,
    0.142041072F, -0.0977550298F, -0.363693684F, -0.832972348F, 0.14967306F,
    2.97776079F, -1.41990888F, 0.40298152F, 4.12783527F, -1.23734808F,
    -0.95396167F, -0.402003258F, -2.44814658F, 2.35459971F, -0.174854204F,
    -1.71287906F, 1.33400977F, -6.17737389F, 0.172159389F, -0.935603738F,
    2.49007511F, 2.02944708F, -1.8297137F, 1.15056789F, -2.65965939F,
    -1.06539118F, 2.31008F, -1.9928571F, 0.964252F, -2.21289778F, 2.53831434F,
    3.62759113F, 0.404848456F, -2.43292594F, -0.114638068F, -0.289477527F,
    0.091423668F, 0.843665063F, -0.305012673F, 0.0674110055F, 1.40712798F,
    0.513522744F, 1.55226386F, -0.995935321F, -0.246940106F, -1.15178263F,
    -1.44841754F, -1.40206385F, -1.54245746F, -0.770036161F, 4.89937353F,
    -5.56472301F, -0.154955387F, 1.72171414F, 0.771397F, 1.34624851F,
    -3.33262944F, -2.40369749F, -0.441802502F, 1.46883178F, -0.111071095F,
    -1.88237584F, 0.808556259F, -0.503636658F, 0.982874393F, 0.113528825F,
    -1.68291223F, -0.737988234F, -0.729913354F, 1.66254103F, -3.09258819F,
    0.911298156F, 2.1558516F, 0.362851858F, -1.3633163F, 1.16516435F,
    -3.84612179F, -0.763963044F, -3.87194824F, 4.20440483F, 3.30062962F,
    -0.998328447F, -2.76722407F, 0.702582777F, -0.752557516F, 1.63842964F,
    -2.79491448F, 2.87539649F, -4.59640741F, -0.114935294F, -3.388551F,
    -0.829830587F, 0.190455779F, -1.92921185F, 1.40020478F, 1.58705747F,
    1.89334941F, -0.956914485F, -2.0800395F, -0.253419191F, -1.3358444F,
    0.303707302F, -2.28535676F, -1.27052104F, -0.99328661F, 1.60835373F,
    -0.230249047F, -1.28062427F, -0.375880182F, 2.26390457F, 0.929896414F,
    1.11830628F, -0.632260799F, 3.6419158F, -1.92959428F, -0.35808754F,
    2.25263071F, 1.70210946F, -3.30442834F, -1.23620343F, -3.88989949F,
    -0.589750826F, 0.906374812F, 3.16051531F, 0.462903053F, -0.271431923F,
    0.741471291F, -1.2527858F, 2.03559875F, -0.566545546F, -5.84266424F,
    -1.08661366F, 1.13968754F, -0.971565783F, 0.630453706F, 0.889308453F,
    1.50715435F, -0.960194F, 0.9125247F, -1.69045103F, 3.95298362F, -2.26945686F,
    -2.64407897F, -3.11239052F, 1.09931052F, -3.76189399F, 4.96608686F,
    -0.60793066F, 1.30044556F, -2.54820943F, -2.37335491F, 1.26369476F,
    0.527548075F, -1.08716393F, 2.27960157F, 0.537877142F, -0.644981444F,
    1.44713652F, 2.39578F, -1.39273989F, 0.0831473693F, 2.3220737F, 1.74112225F,
    -0.375646353F, -1.09259927F, 3.19769311F, -3.24694204F, 0.220294163F,
    -1.13327873F, 0.752845645F, -0.757965446F, -4.66948128F, -1.96351683F,
    -0.965348482F, 0.0793794841F, 0.125549689F, 0.403271824F, -0.144409209F,
    -1.48415053F, 0.0690173209F, 0.75969553F, 1.45237982F, 0.000932297145F,
    -1.81762326F, -0.584551275F, 0.134078071F, -1.76478291F, -2.08365536F,
    2.05325055F, -0.439545512F, -1.07056081F, 0.494996607F, 0.290949494F,
    -1.82311594F, -0.472233236F, 2.87513161F, 1.32224107F, 2.17697048F,
    1.54795587F, -3.10512805F, 2.72547412F, -0.320084333F, 1.12326145F,
    0.418143034F, -0.0810073465F, 1.87728965F, 0.693032563F, -2.70252395F,
    -0.42670244F, -0.593773782F, 0.383952737F, 2.16673326F, 1.47087395F,
    1.68154347F, -0.386797428F, 4.26796484F, -2.82563138F, 4.18612F, 4.49284363F,
    0.250313431F, -0.715671182F, -2.83830976F, 1.31467354F, 3.19664645F,
    -0.315663248F, -0.45429495F, -0.828799069F, -2.89815664F, 0.601593077F,
    0.0214942526F, -0.0243522413F, 2.08617544F, 0.405732095F, 0.217850938F,
    0.0670053F, -3.71130943F, -2.32021236F, 4.45815134F, -0.203199759F,
    1.98608136F, -0.35735032F, 4.4078517F, 1.11278272F, -1.45253897F,
    -0.947627306F, 0.710715055F, -0.271266818F, -1.71672904F, 2.05695915F,
    -1.73146236F, -0.477182031F, -2.25182581F, 2.40066123F, 0.76037389F,
    0.307334155F, -0.499102145F, -2.26976299F, 1.5401988F, -1.49796987F,
    -1.36233687F, 4.13325F, -1.10884738F, 0.68584F, -2.38012838F, -1.00422847F,
    -3.09964752F, 0.243723661F, 2.63163233F, -0.92116183F, 2.20457578F,
    1.1039387F, -0.821698725F, -0.585850596F, 0.984963F, 0.160056785F,
    0.543219447F, -2.4557538F, 0.971387148F, 0.843184F, 0.368627489F,
    -4.4021287F, -1.25005352F, -0.339424968F, 0.792060733F, 2.02492785F,
    1.13324642F, -2.53078771F, -2.60761499F, -4.54701328F, -0.772713482F,
    -0.906049669F, 1.64695203F, 1.10795307F, -2.96494269F, -0.629574299F,
    -1.54559827F, 2.34480166F, 1.39857697F, -0.696645319F, -0.0663960576F,
    -1.56332707F, -3.25271964F, -0.172421724F, 1.14147055F, 0.301790297F,
    -0.898759902F, -0.0281016417F, 0.109279476F, 2.12564397F, -0.953225732F,
    0.18896164F, 0.126172543F, 0.339091241F, -0.213367566F, 1.48716199F,
    -2.22019696F, -1.32683539F, 1.56169784F, -0.515068412F, 0.360960245F,
    -2.86258698F, 0.78597647F, -5.14376831F, 2.05926871F, 1.01769984F,
    0.770053327F, 5.45567846F, 0.754453123F, -2.7653017F, -0.435227573F,
    -4.06151867F, 1.58444548F, -0.996429205F, -1.92097116F, 0.167776972F,
    -1.29850698F, -0.447880208F, 1.23436761F, -0.902464747F, 0.334319174F,
    -0.647762179F, 1.5861994F, -2.07912731F, -0.714549661F, -0.804289043F,
    -2.29149199F, 3.05070376F, 1.67249048F, -0.809377193F, -1.5798496F,
    4.76796532F, 0.0694673061F, -0.632766F, 0.98135823F, -1.44957936F,
    -4.34711123F, 3.50253654F, 0.200809762F, 0.730107546F, -0.953588545F,
    -0.224308088F, 1.75782168F, 1.19383419F, -1.70235789F, -0.768018842F,
    1.09704089F, 2.05699277F, 1.25108516F, 0.623522758F, 2.50257802F,
    0.678408623F, 0.536068261F, -0.0966360867F, -0.753261685F, 1.65548825F,
    2.78443575F, 4.05516624F, -2.16774082F, -0.359194607F, 1.09041643F,
    -0.0161356293F, 0.559412897F, -0.193033144F, -1.70670557F, -0.967832506F,
    0.1865004F, -0.552476168F, -0.330358744F, 1.20699096F, -1.27215266F,
    2.46575451F, -0.501525223F, 1.51912129F, 0.823794305F, -0.790380299F,
    0.755888343F, -0.743451893F, 0.284205586F, -1.07254839F, 0.176564589F,
    0.189998239F, 0.650841F, 0.241015106F, -4.01282835F, -0.582845211F,
    -0.160185531F, 2.28104472F, -3.80080128F, 0.803871512F, 0.981919587F,
    0.644025087F, 0.983297706F, 0.0277248174F, -0.563290179F, -0.683555484F,
    -0.668072879F, -1.08985651F, -0.840706527F, -0.696328759F, 0.0946506187F,
    0.498241633F, 0.257837117F, 0.316114217F, 3.27420688F, 0.0540839061F,
    -0.625738561F, -0.325031877F, -1.11115837F, -0.374751061F, -0.305396289F,
    0.096416682F, -0.863004327F, 2.40214109F, 1.74860907F, 0.330734968F,
    0.628553748F, 0.404674351F, -0.760926723F, -0.0422211F, 0.236187637F,
    -1.41012704F, 0.741222441F, -0.872551F, -0.442748904F, -0.0658171847F,
    1.2721225F, -0.279756308F, 1.00145304F, 2.44396853F, -2.72352362F,
    2.38668656F, 0.0420784168F, 3.38402367F, 0.0326338336F, 1.10320687F,
    0.891091943F, 1.2847321F, 0.858906329F, 2.27277374F, -0.0133050308F,
    -2.23939657F, -3.18319225F, 1.47217679F, -1.55926251F, -1.69595087F,
    0.280004889F, 0.196397215F, 1.61238348F, 0.195635885F, -0.737379968F,
    -0.360727698F, 2.25774622F, 0.962186F, -0.486013144F, -2.09443069F,
    -1.26675797F, -1.06852233F, -1.18680751F, -1.97865438F, 1.66183853F,
    1.4796406F, 2.46719646F, 2.00983024F, 2.23188329F, -2.68452215F,
    -2.78284836F, -0.803003192F, -1.39641941F, -2.51675797F, -0.436922789F,
    0.259591132F, 0.283596635F, -0.894030213F, -0.127167046F, 0.657994211F,
    -0.133776188F, -0.276536793F, 0.141267568F, 0.0792145059F, -0.569971681F,
    -1.84756517F, 3.10794187F, 0.670680225F, -1.64858305F, 2.72219467F,
    -2.22936964F, -0.741434216F, -1.35424173F, -0.182793662F, 2.08910775F,
    1.08893251F, -2.67185426F, 0.349568456F, -1.27772355F, -1.26207566F,
    0.786887F, 0.287200719F, -1.67979538F, 2.09255552F, -0.350646734F,
    0.894750595F, 0.0262124911F, 0.883457243F, 0.473552197F, -0.182250008F,
    -0.318172872F, 1.81017673F, 3.04441738F, -1.05597961F, -0.0276942588F,
    -0.532410145F, 1.68984067F, 0.421468F, -0.68599F, 0.187175527F, 2.64125752F,
    -0.0210758559F, 2.20958924F, 0.146788031F, -1.63293612F, 0.195973337F,
    -1.06577229F, 1.54630816F, 0.118416809F, 0.328348756F, 1.10467422F,
    -1.13548946F, -0.329409689F, -1.75517142F, -1.00831556F, 0.709573269F,
    0.791538477F, -1.57818413F, 1.55117357F, -0.52422297F, -1.97902811F,
    1.16471338F, -1.55541992F, 1.2322824F, 0.88701576F, 0.029154757F,
    -1.78197622F, 2.57331848F, 0.0873267576F, -2.88519764F, -0.0554038435F,
    -0.0233442392F, 1.32996118F, -0.00597885763F, 0.368082702F, 1.33650184F,
    -1.16621292F, -0.257521391F, -0.652785897F, -0.838001311F, -0.586627185F,
    1.94289291F, 0.4473463F, -1.86425674F, -0.921156585F, -1.14442825F,
    1.03918517F, -0.926937342F, 0.960104465F, 1.60095394F, 1.3147918F,
    -1.94813132F, -2.10168529F, 2.96048474F, 2.46540284F, -2.21788192F,
    -0.386375278F, 0.641536474F, 2.7977035F, 3.97075152F, -5.18505F,
    0.166517511F, -1.15967667F, -2.34659576F, -0.0945255F, -1.36562824F,
    -1.13514185F, 2.30778551F, -2.81694508F, -1.83795202F, -0.133431271F,
    -2.83422208F, -4.10982084F, -6.41470623F, 1.8425771F, -0.228582084F,
    1.04028153F, 3.40394545F, 0.59017843F, -2.68764663F, -4.49023819F,
    -2.58310795F, 0.97143805F, 4.00745964F, 4.76131248F, 1.40544224F,
    -2.79718423F, 3.1524241F, 1.64750564F, 1.96575296F, -2.58057189F,
    4.18524885F, -1.74F, -3.19069099F, 0.282258272F, -2.2998805F, -1.41601062F,
    2.28196478F, -1.83408988F, 0.749705315F, 2.83936071F, 2.22430253F,
    -1.97564912F, 1.58111215F, 4.7042675F, -1.50802946F, 2.56860042F,
    2.64758182F, 1.50058854F, -2.16927624F, 3.55993128F, -1.17116547F,
    -2.02887273F, 3.19601321F, -3.78747964F, -3.41488F, -0.391613424F,
    -1.00028336F, 4.29793644F, -3.62945342F, 3.18579531F, 0.86477387F,
    3.67697692F, -0.935686588F, 2.05463171F, -2.63770247F, 3.02742672F,
    2.30129647F, -0.203989118F, 1.88976049F, -2.62665677F, 3.35896182F,
    1.85828793F, 2.49323463F, 4.93991137F, -5.41628456F, 0.830112696F,
    2.15151572F, 4.09569073F, 1.72531772F, -3.49628186F, -4.95816708F,
    -1.7076993F, 0.356169045F, 3.18352795F, -3.16026068F, -3.44868398F,
    -1.73291326F, -0.163982764F, 1.0379498F, 3.24592066F, 4.18215895F,
    -1.11801064F, 1.02116835F, 3.08699942F, 5.7139225F, -2.59731579F,
    -0.284367651F, -1.0053457F, -4.56719875F, -1.25472403F, 4.6408453F,
    -2.84288049F, -0.871090531F, -5.17837429F, -0.202775523F, -1.31291175F,
    1.47577477F, -2.42036462F, -0.601167679F, -2.903759F, 2.99728155F,
    -3.09639859F, 1.25247848F, -3.27377152F, -1.24541676F, -3.058002F,
    -3.33095145F, -4.09455061F, 2.7302537F, 0.0420798212F, 3.50379539F,
    -3.55514646F, -4.01568747F, 1.33727145F, -2.38063955F, 6.30952072F,
    -5.28191805F, -0.857099891F, -2.42925406F, -4.17955494F, 2.852705F,
    0.0941913575F, -0.319911242F, -0.230896294F, 0.035588745F, 0.072412692F,
    0.239940047F, 1.89212871F, 1.77689123F, 0.550449252F, 0.18548429F,
    -0.0419669561F, -0.812819779F, -1.0300101F, 1.83442962F, -0.49859789F,
    0.936670899F, 0.182580099F, -1.31705832F, 0.518433094F, 1.39670432F,
    0.663671911F, 1.6129086F, 1.15674877F, -0.484970301F, -0.248762771F,
    -0.17357488F, -2.82324862F, 1.980883F, 0.395804703F, -0.695552826F,
    -2.01254702F, -0.297290206F, 0.347418576F, -0.51253134F, -0.679642677F,
    -0.745067656F, 0.266180038F, -0.151624054F, -0.520406723F, 1.69685972F,
    -0.532017708F, 0.220366716F, 0.531060755F, -0.717952669F, -1.56992888F,
    -0.426409602F, 0.79477191F, -0.0837065279F, 1.73232222F, -0.698787808F,
    1.12243593F, 0.230375201F, 0.457246423F, 0.104433075F, -0.986362755F,
    -0.0330583453F, -1.74999702F, -0.370962948F, 0.155394033F, 0.971673667F,
    0.416641325F, -0.646688342F, -0.513570905F, 0.415282309F, 0.973920166F,
    0.584535837F, -0.202584237F, -0.139519393F, -0.624686599F, -0.543466032F,
    0.0378220789F, 0.89362812F, 0.679105F, 1.26761973F, 0.826062202F,
    -0.486098081F, -0.81766969F, 0.179654822F, 0.372493714F, -0.0407647118F,
    -0.564679623F, -0.143489778F, 1.05511522F, -0.0562119149F, 0.669289052F,
    -1.28302205F, 0.846213162F, 0.290784329F, -0.27168113F, -0.757064939F,
    -0.559158444F, 0.214668572F, 0.604206741F, -2.83550453F, -0.825645387F,
    -0.357112944F, -0.475364327F, -1.96928132F, -1.06912875F, -0.283796102F,
    -0.384568334F, -0.352858841F, -0.20151183F, 0.397349715F, -0.0358347781F,
    0.15586628F, -0.837136328F, 0.0455373153F, 0.317228138F, 0.702394187F,
    -0.589426696F, 0.0926273614F, -0.0637229756F, 0.586727858F, 1.06726217F,
    0.953284681F, -0.153406903F, -0.097481057F, -0.166360572F, 1.2078321F,
    1.99997127F, -0.112928472F, 0.77456224F, -0.321059942F, 0.131509081F,
    -0.582375348F, -0.841134608F, -0.904621661F, -1.24995637F, 1.22494495F,
    -1.40728629F, 1.10274053F, 0.236263096F, -0.805897951F, -0.269550234F,
    1.13554811F, 0.176837325F, -0.291915119F, 0.653156638F, -0.0881665125F,
    -1.18706095F, 0.60112828F, 4.46262503F, 5.07694578F, 1.00982022F,
    6.25027824E-5F, 0.117458582F, 3.64144492F, 2.01546884F, 5.41433907F,
    -0.0381656F, 0.567763209F, -0.863246858F, -0.239826798F, 0.0501136556F,
    -0.397988439F, 1.53298974F, -3.79803681F, -3.96056914F, -0.956977189F,
    -4.15500689F, -0.609668255F, 3.91656947F, -0.806755126F, 2.37354445F,
    3.97436905F, 0.175846666F, -4.91237926F, 0.835295F, -0.767931104F,
    0.208231628F, -0.237413168F, -1.08854938F, -0.729497612F, -0.394952416F,
    -4.94851828F, -4.66723251F, 2.97440314F, -0.539800584F, -1.55106533F,
    4.20258093F, 5.55775213F, -3.91078949F, 2.02511144F, -4.49401855F,
    0.9645046F, -0.395587653F, 0.0198585764F, 0.0333228707F, 1.62198639F,
    2.29637861F, -1.03116465F, 0.851607502F, -0.952968478F, -0.153016657F,
    -0.775745094F, -0.432858676F, -4.8889451F, -5.23703861F, -2.58500147F,
    1.23461986F, -0.566096842F, 4.28927946F, -0.209904611F, 0.605993F,
    -3.34439754F, -3.23630261F, -0.480798393F, 0.702352285F };

  static const real32_T b[70] = { -1.98527694F, -2.04555702F, -0.898917198F,
    -2.30218887F, -2.97343731F, 0.402849257F, -0.781921446F, -1.72389245F,
    -0.893683136F, -1.21078289F, -2.53438377F, -0.686229527F, -1.43290532F,
    -0.395349801F, -2.179811F, -0.343945324F, -2.20018506F, -1.47895491F,
    -1.77095568F, -3.38521266F, 0.272904217F, -2.77419F, 0.313986152F,
    -3.19055223F, 0.6283409F, -1.43138981F, -1.95839584F, -1.29579163F,
    -2.83821607F, -2.64860344F, -1.70704198F, -1.6333698F, -1.62955439F,
    -2.3184967F, -1.29101872F, -1.36047268F, -2.76898432F, -2.50689F,
    -2.24676228F, -0.769305766F, -1.68119681F, -2.75199509F, -3.0093677F,
    -1.59465969F, 0.223299578F, -2.37505794F, -0.428298056F, -1.59431052F,
    -0.742746055F, 0.20429939F, 0.394232929F, -1.44089806F, 0.426520944F,
    -1.08596706F, -2.49977827F, -1.13228488F, -0.780774951F, -1.26190841F,
    -3.17499256F, -1.83301759F, -2.58222342F, -1.10787988F, -1.37764323F,
    -2.35532355F, -2.07099223F, -1.77054584F, -2.25872326F, -2.21452403F,
    -0.407011092F, -0.897951126F };

  static const real32_T tmp_1[4900] = { -1.48239195F, -1.01746762F, -1.59776223F,
    -0.101686724F, 1.19287241F, 0.191957116F, 0.733184397F, -2.07839179F,
    -0.0590009801F, 2.26790118F, -3.92385197F, 0.120615922F, 1.14471292F,
    1.52027917F, 0.194425136F, -0.732948184F, -0.441702F, -0.318683952F,
    -2.13183F, 0.629176795F, 0.0867915824F, 0.328795731F, 0.895852208F,
    -1.34372187F, -0.153350905F, 2.81400847F, 0.096631974F, 0.857813537F,
    -0.934847772F, -0.0741323829F, -1.08751237F, 2.40954685F, -4.15335417F,
    0.902864754F, 1.95292354F, 1.6940341F, 1.20745599F, 0.917621255F, 0.500357F,
    0.458589315F, 0.512308717F, 0.576512754F, 0.107435234F, -2.08345771F,
    -2.00577855F, -0.612160444F, -0.525035739F, 0.0209112205F, -2.47605562F,
    -1.01250291F, 1.78804421F, -1.96312487F, 0.322779447F, -0.212774888F,
    -0.539493084F, 0.996430159F, -0.121410593F, 0.628353357F, -0.323583603F,
    -1.30054677F, -0.367779553F, 0.903186142F, 0.0281695276F, -1.73462486F,
    0.0572487749F, -1.41328311F, -0.597193837F, -0.328100711F, -0.452021807F,
    1.15734673F, -0.542787969F, -10.8086138F, 0.80141747F, -0.115137972F,
    -0.648380756F, -0.218027323F, -0.0762317479F, 0.604726791F, 0.412700683F,
    1.63396585F, -3.30529881F, 0.493432075F, -1.95818961F, 0.677684546F,
    -0.116266154F, -1.04650283F, -0.123023018F, 0.364795297F, -0.986971676F,
    -1.6369921F, -0.256549299F, -0.311187029F, 0.839099884F, -1.87712753F,
    -0.359658897F, -1.2704283F, 0.326630801F, 0.809560061F, -5.46350384F,
    -0.587533295F, -1.52878642F, 0.568919599F, -9.82394123F, 0.0686648563F,
    0.732099175F, 1.5183326F, -2.00930333F, -1.52322805F, 0.11078006F,
    -0.245217606F, 1.10028577F, -2.11106205F, -0.884020507F, -1.65359819F,
    0.499940395F, 0.095042713F, -0.231322318F, -0.00696923118F, -0.382593781F,
    -1.42214823F, -9.13568687F, 4.2149353F, -1.82360423F, -0.705350101F,
    -0.334361732F, 2.2318809F, 0.56232506F, 1.02935815F, 0.707766056F,
    -1.0179162F, -1.20742369F, 1.56047356F, 0.98454994F, -0.448251337F,
    -0.0320166275F, -1.29079378F, -3.27956796F, -2.78155518F, 1.57465053F,
    0.619351625F, -0.392124921F, -2.08230019F, 1.79341829F, 0.993954241F,
    -3.19529343F, -0.461798579F, 2.39075017F, -1.43182564F, -0.291670382F,
    0.319797695F, -0.753744721F, 1.41748345F, -2.99749136F, -17.922245F,
    -1.42624724F, 0.497607291F, -0.00138080993F, -11.7850981F, -3.58101368F,
    -5.67870235F, 1.08006024F, -0.52654773F, 1.45025253F, 1.00065804F,
    -0.320607573F, 0.953452051F, 1.53363359F, -0.310653299F, 0.99134779F,
    -0.553703308F, -2.38260698F, -3.57482862F, 1.83008909F, -2.14117718F,
    -5.88473368F, 0.092571415F, -1.53528285F, 1.15293896F, -0.497316182F,
    -0.439416498F, 1.45035052F, -4.20801115F, 0.0240885559F, -8.76954269F,
    1.96146953F, -0.288380802F, 1.69272947F, -0.717357635F, -3.66094518F,
    3.14053774F, 0.0661173F, 0.0580693334F, -0.150852725F, 1.42563939F,
    -0.406127632F, -0.345009685F, -0.782555521F, 1.92798293F, 0.478279173F,
    -9.33573818F, 0.729914784F, 0.227232784F, -1.67664158F, -1.13623095F,
    -1.67000508F, 0.83519721F, 0.523011506F, -1.91663182F, -6.00968647F,
    -0.607157528F, -1.63082528F, -5.75983667F, 0.483652651F, 0.337120861F,
    -3.22144151F, -0.132024676F, -5.53224421F, -2.61283827F, -0.277806282F,
    -3.55671573F, 2.4455502F, -0.523610055F, -0.649214327F, -0.219339386F,
    -1.24315548F, -2.82133031F, 0.181641147F, -0.262729F, 1.5604856F,
    0.305293828F, -0.52426523F, 0.382928669F, 0.205578744F, -3.14695382F,
    -0.404691696F, -2.61144161F, -1.67562497F, -1.9385215F, -8.4296484F,
    -0.428488523F, 3.46711278F, -1.15456522F, -0.961441159F, 1.40283358F,
    2.3584373F, -1.17793357F, 0.0447434261F, -1.50203526F, -0.454108F,
    -1.47565532F, -2.24559307F, 1.59453046F, 0.175018281F, 2.61735964F,
    -0.0893974751F, -0.288112223F, -7.82015657F, 0.255847663F, -1.11609423F,
    -3.41855145F, -8.90378475F, -0.957310319F, -2.14358878F, -0.42167002F,
    0.22655873F, -1.28018332F, -0.457241476F, -0.401899755F, -4.54942608F,
    2.03763F, -1.97693503F, -6.47602606F, -1.31692564F, -1.98009157F,
    0.345156133F, -0.885553241F, 1.83844352F, 1.03825903F, 2.42036128F,
    0.127050787F, -0.0811927095F, -0.494523019F, 0.316564679F, -0.851827502F,
    -3.23239446F, -0.514579952F, 0.261765301F, -2.03780699F, 0.283431292F,
    -0.0293545723F, 3.16798472F, -0.154811054F, -17.6620636F, -11.6834822F,
    0.0223640855F, 0.130009249F, -1.75535297F, -0.213100582F, -12.6669254F,
    -15.7958813F, 0.290811747F, 0.223670244F, -0.851445496F, 1.03690898F,
    -0.15083383F, -5.07220697F, 0.717452765F, -3.69024587F, -0.44393006F,
    -0.0777736902F, -0.817859471F, 1.72181582F, -2.1857276F, -0.566931903F,
    -3.85641932F, 1.47497821F, -1.59315205F, 0.166541457F, 0.189351782F,
    -0.0521907732F, 0.249006122F, 2.31869793F, 1.30110312F, -16.5831547F,
    -0.796389103F, 0.059639845F, -0.557274759F, -0.222653717F, 1.25679243F,
    0.216100752F, 2.03029037F, -1.40460682F, -1.73285866F, 0.152803853F,
    -1.23487103F, -7.67036152F, -0.148423016F, -6.21133804F, -0.420720339F,
    -2.75874209F, -1.88474965F, 2.89900947F, -2.3598125F, 0.659959078F,
    -1.78360426F, 0.213151559F, 2.5125587F, 2.71223044F, 3.01677179F,
    0.707111835F, -0.466727674F, 1.61053431F, 0.606818259F, -0.117759407F,
    -1.6565243F, -0.0954186171F, 1.12481797F, 0.624807239F, 0.0984613448F,
    -0.479355305F, -3.78878069F, -0.211303934F, -7.19149971F, -1.53867722F,
    -1.1539942F, -0.590281665F, -0.20747076F, -0.310917437F, -0.675024927F,
    -2.47388601F, -0.234278738F, -0.435020298F, 0.165135652F, -1.96770966F,
    -0.513452172F, 1.67328489F, 0.00651776278F, 1.1486485F, -0.142170861F,
    -1.51320767F, -2.04554963F, -1.5707252F, -6.70876074F, -5.97779F,
    0.280963242F, -0.498225302F, -0.795024335F, -0.662565112F, 0.246242657F,
    -3.07237649F, -0.233788356F, -4.26682329F, -0.0133585948F, -1.65481007F,
    -0.813789785F, -0.106545806F, -0.11672508F, 0.0936497152F, 0.0517561249F,
    -3.21019197F, -0.456272274F, 0.867108822F, -0.156621188F, -1.00996447F,
    -0.0563627966F, 0.962295771F, 0.407828867F, 2.05422688F, 0.124022879F,
    -2.64973783F, 0.561005056F, -2.20156074F, 0.229669601F, 1.87879097F,
    -0.917889118F, 0.547937453F, -1.09546888F, -0.607115567F, -0.618773282F,
    -0.062693581F, -3.46243501F, -0.389631063F, -2.93555117F, -0.0845849067F,
    -0.469747633F, 1.84045017F, -0.828427613F, -7.45590925F, 0.282899797F,
    0.522836745F, 0.992892504F, 1.05001545F, -0.577776432F, -0.804436803F,
    0.293951839F, 1.00658071F, 0.586069226F, -0.750283301F, -6.06168795F,
    -2.68463254F, 2.42847753F, -0.419569165F, -1.47497594F, -0.506357193F,
    -0.563116968F, 1.53392982F, -0.164744824F, 1.30394375F, -0.0918122604F,
    -0.863121033F, 1.57980025F, -5.77202797F, -0.95038569F, 0.408912778F,
    -0.479101866F, -2.5767076F, -2.53276443F, -0.284602821F, -0.920996726F,
    -1.75572145F, 0.0544933043F, -0.0644480288F, -1.07269359F, -3.40883827F,
    0.794308782F, 0.00459200377F, -0.268623203F, -1.76109099F, -3.55306101F,
    0.979753F, -3.21209049F, -1.97292876F, 0.407733411F, -2.94581628F,
    0.417182058F, 0.421277583F, 0.882959604F, 0.717728317F, -1.8694669F,
    -3.76139164F, 1.30832434F, -4.5695653F, 0.133477032F, -0.338891387F,
    -1.07369506F, -0.144831225F, 1.14689255F, 0.617149F, -2.38765979F,
    -5.8449707F, 1.82615519F, -9.37682533F, -1.4054451F, -0.167141229F,
    -6.26736593F, -0.542065263F, -0.661186934F, 0.759993792F, -0.0289908368F,
    -2.46823382F, -0.69244504F, -0.18083787F, -2.98445559F, -6.61894894F,
    -0.789801F, 0.74222827F, -0.804207861F, -1.48519981F, -0.455022246F,
    -2.93453956F, -0.0712423548F, -0.377498448F, -3.25814056F, 0.170860603F,
    -0.083484292F, 1.23553729F, -0.108306825F, 0.842467606F, -0.776504755F,
    -1.41763484F, -0.756501555F, -6.11220694F, 0.119427346F, -2.56773281F,
    -4.26340294F, -0.50310266F, 1.12563455F, -0.553785086F, -1.12378907F,
    -2.8737185F, -0.923802137F, -1.07996047F, -0.29074198F, -4.78438234F,
    1.08789432F, -0.20834592F, -1.20844471F, -0.00959897693F, -8.81838322F,
    -0.478299707F, -2.86023402F, -9.77636147F, -0.187387362F, -1.96280408F,
    -0.669350743F, -0.861390829F, -0.52729553F, 2.28382254F, 0.956613719F,
    0.650902033F, 1.36937058F, -1.05751348F, -1.26621485F, -4.64473438F,
    -2.65323496F, 1.18711734F, -0.743528068F, -0.483078212F, -1.87462115F,
    -2.37997699F, -3.98290968F, -4.13912106F, -2.29741144F, -0.996817F,
    -2.61245155F, -0.00524725532F, 1.75363421F, -4.07341099F, -0.139965817F,
    -0.830815494F, 0.156745762F, 0.437286347F, -0.48910293F, 0.374012381F,
    -1.11589777F, -0.0167395826F, -0.765420437F, -0.204168767F, 0.409166753F,
    -3.69428897F, 0.245387644F, 0.325149238F, -1.25323582F, 0.171482787F,
    -0.481664389F, 0.870395F, 0.013963664F, 0.922830701F, 1.77954781F,
    -1.22912085F, -2.55654597F, 0.0888484046F, 2.58939958F, 0.611186087F,
    -4.41467094F, 0.520565748F, -0.855113268F, 0.402454138F, 0.766406834F,
    -1.37594748F, 0.349802315F, 2.02463722F, 0.613393128F, 0.709964395F,
    -1.45253217F, -0.761930883F, -1.4633801F, -1.94925141F, 2.57293677F,
    0.611900568F, -2.82021308F, -1.83624041F, -1.54679215F, -1.78888941F,
    -0.885598063F, -0.926961064F, 0.622554421F, -1.20470989F, -0.465547413F,
    2.48295045F, 0.129915774F, 2.10781288F, -0.687084496F, -7.57786083F,
    -0.194959581F, 0.87613821F, -0.0958093479F, 0.0892579332F, -0.932795346F,
    -7.95405483F, -1.68965411F, -6.94778395F, -1.10127103F, -0.408243805F,
    -4.58239269F, -0.390617102F, -1.13559937F, -2.53437614F, -0.248245761F,
    0.86597544F, -0.295498192F, -0.23152557F, -2.12151837F, 1.26654756F,
    0.0787405148F, -1.88859081F, -0.142149627F, 0.220739678F, -2.50661516F,
    1.82879961F, -0.331328034F, 0.481806785F, -2.18929529F, -1.64661241F,
    -0.666644454F, -0.170023084F, -0.142549008F, -0.336274028F, 1.23967302F,
    0.772151113F, -2.58591819F, -0.811164F, -2.98493218F, -1.872334F,
    0.846413553F, -1.72332942F, -3.04985189F, -1.58204663F, 0.147519976F,
    -1.47983086F, 0.496296227F, 0.211022317F, 0.18748495F, 0.239069968F,
    0.74489826F, -0.118366145F, -0.624370694F, -1.07980335F, -1.67681313F,
    0.280485123F, -2.48318386F, 0.651103675F, -0.129586026F, -0.784527481F,
    -0.249150828F, 2.26893067F, 0.694723129F, -1.11482739F, -2.1229074F,
    -1.41967368F, -2.15396261F, -0.834250867F, -0.860764503F, -2.0410111F,
    -2.78152919F, 0.00139547617F, 1.67921054F, 0.95855087F, -3.14145875F,
    0.727331519F, 0.459676653F, 4.29332F, 0.191700801F, -0.775791764F,
    -3.52635932F, -0.761240184F, -3.20895386F, 2.06449032F, 0.787603259F,
    0.50025022F, -2.2141304F, -1.77683568F, -3.23128986F, -4.13748932F,
    -0.76990366F, -0.259235352F, -0.426891655F, -3.57851553F, -0.372331113F,
    -0.615694582F, -1.11219919F, 0.631486893F, -1.05145919F, -0.142558277F,
    -0.544240355F, 2.46478796F, 0.0294172876F, -0.00649804296F, -0.784081399F,
    0.194728032F, 0.403265446F, 0.191150546F, -0.949531198F, 0.14187786F,
    -1.69116652F, 0.983840764F, -6.3745966F, -1.18394971F, 0.221709117F,
    -2.2449317F, 0.0452392586F, -4.26352644F, -0.256190032F, -3.99562836F,
    -6.78828859F, -0.238318399F, 0.0450125262F, 0.699981928F, -5.13113976F,
    -1.56294775F, -1.80388808F, -3.32152534F, 0.325792491F, -0.216622174F,
    -0.289719939F, 1.89990735F, 0.0317922197F, 0.0387342051F, 2.71692538F,
    -5.24072218F, -2.7136457F, -1.87831581F, 0.429863393F, 0.677505732F,
    -2.696455F, 2.20825267F, 0.512108624F, -2.01806259F, 1.59582567F,
    1.73251176F, -8.08591747F, -1.53312206F, -6.73974085F, -2.95213294F,
    -1.55099511F, -1.27038145F, 0.618442893F, -8.95879078F, -0.360987067F,
    0.71148175F, 1.31902695F, 1.11167586F, -0.392307848F, -3.43943167F,
    -1.99032283F, 1.67956674F, 1.60751057F, -3.13200164F, -8.34776306F,
    -1.06518304F, 0.699524879F, 0.0283894837F, 1.26930797F, 0.000936596654F,
    -0.230639815F, -1.87713861F, 2.71275926F, -5.06306F, 1.47933853F,
    0.388932437F, 0.567533433F, 1.80975389F, 1.48832238F, -3.3636055F,
    -5.07963419F, -1.42110622F, -2.17626524F, 1.45539069F, -0.650936246F,
    0.489436865F, 1.97803879F, -1.27308261F, 0.589416F, -7.2916255F,
    -0.732582927F, -0.0650924593F, 2.28189564F, 0.446843088F, -1.77753794F,
    -0.28579998F, 1.64646184F, 0.656089902F, -0.312277883F, -4.72537661F,
    -0.38275677F, -14.4587955F, -0.849292278F, -1.84401906F, -0.200133696F,
    -13.5651293F, 0.251291573F, 0.905153871F, 1.71656907F, -4.74166203F,
    -1.78575754F, 1.15473342F, 1.57236898F, 1.74691236F, -0.258905053F,
    -9.60150433F, -2.47043371F, -5.14570761F, -1.901052F, 0.387954384F,
    3.13988495F, 0.668810964F, -3.88670063F, -7.18241215F, -0.0634498522F,
    -1.02206874F, 1.47765839F, 1.51074445F, 0.362972289F, 0.214138299F,
    0.16498065F, 0.75383234F, 1.82183957F, 1.47041237F, -2.11478376F,
    -0.809163809F, 0.341693431F, 0.00419657351F, -1.56001043F, -3.83352184F,
    -0.569534421F, 0.494088024F, -0.152668253F, 1.59699607F, -5.67111969F,
    -0.41104427F, 2.15700173F, -6.00464201F, -6.71035051F, 0.667335927F,
    -1.32541513F, 1.3545835F, 0.040417023F, -2.76544046F, -1.11442161F,
    -3.06366849F, -0.903570831F, 0.832972109F, -0.781928957F, -2.4684546F,
    0.217884272F, -0.197728798F, 0.754457295F, -0.249731779F, -4.87321854F,
    -0.915527463F, -4.05848837F, 1.98021305F, -0.381598353F, 0.0860926434F,
    0.253794432F, 0.926734388F, -0.286833197F, 0.867079198F, -3.32264686F,
    -0.447407901F, 0.47138679F, -6.19513512F, -0.873574555F, -11.6474228F,
    -0.522154F, -1.32331562F, 0.375083059F, 0.438542F, -7.43931103F, 1.79149854F,
    0.0252922717F, -0.554467678F, 1.64319432F, -0.797546625F, -2.03389025F,
    -0.536429465F, 1.18451452F, 1.71625292F, -0.268671542F, 1.55526304F,
    -0.680235386F, 0.15715827F, 0.746607065F, -1.32985592F, -0.670261562F,
    -0.252104342F, -0.0773002207F, 0.305490345F, 1.15232086F, -0.837609529F,
    -0.144480035F, 0.168663248F, 1.17777133F, -1.48699021F, -0.120936073F,
    -0.094542332F, -0.0901444256F, 0.196315885F, -2.5754962F, 0.0426800363F,
    -0.585661471F, 0.111446701F, -3.86479497F, -1.42694831F, -4.18728209F,
    -0.357936889F, -0.222914204F, 0.562611103F, 0.164461806F, 0.302993357F,
    -0.203359783F, -0.994346917F, 0.549979508F, 0.748223F, -0.244442075F,
    -0.488749683F, -0.788797736F, -0.316191375F, -0.878160954F, 0.657521188F,
    0.749785304F, -2.6819005F, -0.51616466F, -0.424926668F, -0.679735F,
    -0.367049783F, -0.161243305F, -0.955589592F, -0.106591545F, -0.615016699F,
    1.1740967F, -1.44817734F, -0.237283662F, 0.745428622F, 0.365812898F,
    -1.47465181F, 0.177364126F, -6.64511299F, -0.810392439F, -0.283669531F,
    -2.53681374F, -1.31716967F, -0.526526809F, -0.327022463F, 0.55964F,
    0.227313846F, 1.02903461F, -0.575973392F, -0.00621085614F, 0.353797019F,
    -10.1231251F, 0.0030997016F, -0.325800896F, 0.563108087F, -0.0949530527F,
    -1.08830786F, 0.725437641F, -2.69390798F, -1.99399245F, 1.63300216F,
    -0.183953166F, -0.211211473F, -7.99101639F, -0.945369959F, -0.282638878F,
    1.35768342F, 0.174930498F, 0.531293929F, -2.50830626F, -0.690162599F,
    -6.85274649F, 0.758936524F, -0.776459277F, 0.82163173F, 1.14019799F,
    -3.91345596F, -1.53335559F, -2.81345558F, -0.0707289502F, -0.984520733F,
    -0.745665908F, -0.889800489F, -0.637568772F, -4.28185606F, 0.590242088F,
    0.0168695468F, 0.0728571042F, 0.157189459F, -0.0940763056F, -0.124811336F,
    -5.56495619F, -2.24279404F, -0.789713502F, -1.20093334F, -0.264866263F,
    1.27097285F, 0.169785216F, 1.19866467F, -0.338018298F, -1.44242501F,
    -0.339942694F, 0.109806687F, -0.446189404F, 0.520361125F, -0.116324618F,
    0.804779F, 2.33318877F, -1.32271838F, -0.919824779F, 3.53616023F,
    -0.507584095F, 1.06945717F, 1.69287574F, -0.626408935F, 1.62396562F,
    -6.11421537F, -1.45112419F, 1.3289212F, 2.9435637F, -1.27953041F,
    1.56190252F, -0.412012368F, 1.66228318F, -1.73742616F, -1.09746349F,
    0.628129125F, 1.79117036F, -2.23514485F, -4.31257629F, -0.869183362F,
    -0.148256794F, -0.180332035F, 0.00563031714F, -1.38470364F, 0.0507969F,
    -5.84800291F, 1.28411674F, -0.6955809F, -2.64921832F, -0.407144159F,
    -4.25308132F, 1.0894289F, -0.972362101F, 1.59889185F, -4.44738913F,
    -5.15522671F, -8.164361F, -1.16604602F, -1.05831635F, -0.0688716695F,
    1.17957067F, -3.12904811F, -0.109605335F, -6.73711395F, 0.978313923F,
    -0.246085972F, 0.346399516F, 0.166917354F, -0.931405485F, -0.942193627F,
    -0.416889161F, -0.314638048F, -1.62458551F, -2.47949457F, -0.919697225F,
    -11.6944113F, -0.610106885F, -3.06703854F, 0.795998752F, -5.10604811F,
    0.42588833F, 1.46865559F, 0.193013623F, 1.37011111F, 1.36852932F,
    -4.40720892F, -10.1515703F, 4.15511751F, 1.37356102F, -4.74654102F,
    2.8399868F, -2.29553318F, -0.65270716F, 0.0509463884F, 1.48227918F,
    0.0179551151F, 0.0594074205F, 0.280517459F, -0.0945240483F, 0.737824678F,
    -0.449773341F, 0.644342184F, -0.606529474F, 4.7321353F, 0.0159677602F,
    -0.731636882F, 0.318017364F, -1.26441848F, 0.183658615F, -0.700988352F,
    0.227093309F, 0.0879177302F, 0.255154669F, -0.399474263F, -0.581171036F,
    1.83475876F, -0.602045119F, 1.56514454F, -2.77143288F, -0.322559088F,
    -2.26538014F, 3.58954167F, -8.827775F, -0.280199498F, 1.86084545F,
    0.40504384F, -2.84472013F, 1.27922618F, 0.511648F, -1.44403815F,
    -0.510412097F, -1.36641455F, -0.0184044819F, 0.0797272399F, -2.39111066F,
    0.0841527805F, 0.152067587F, 0.366350293F, -1.24267626F, 0.0977662802F,
    2.5064187F, 0.116055161F, -0.22093372F, -0.872137427F, 0.24586305F,
    -0.0148255331F, 0.340820402F, 0.469179511F, 0.122660324F, -0.771675467F,
    1.023175F, -3.67897964F, 1.06462204F, -3.04972792F, 0.130404964F,
    -0.755730271F, -2.9879415F, 0.48592338F, 1.17201042F, 0.585909426F,
    1.75391734F, 1.77578282F, 1.10476565F, 0.140032649F, -4.12165785F,
    0.601920903F, -1.09166098F, 0.41726464F, -0.532784224F, -0.935628355F,
    -3.76272035F, 0.00146885891F, -4.96965599F, -2.35485172F, -0.829644561F,
    0.779449284F, 0.221427813F, -0.96157068F, 1.95961249F, -3.13120365F,
    0.161027864F, -0.454498321F, -0.563532054F, 0.427500129F, -0.454856217F,
    -4.1614151F, 0.0370825827F, -0.270671457F, -1.95029712F, -0.324226737F,
    0.0833176F, -1.74541807F, -0.987726152F, -5.49116373F, -1.84954691F,
    -0.498616964F, 2.59882474F, -0.702638149F, -0.170809537F, -1.45968294F,
    -0.538433075F, -1.47595966F, 0.167272881F, 0.212841213F, 2.31106114F,
    -1.02648497F, -0.765736282F, 0.0211336017F, 0.715559F, -0.492875934F,
    -4.16260195F, -1.99498522F, -1.07273424F, -0.682799697F, -0.462246954F,
    -2.05212116F, -0.338304698F, -8.35571098F, 0.0975648761F, 0.0317975655F,
    -0.100278832F, -2.66374373F, -1.07481015F, 0.876070261F, -1.61398351F,
    2.15290713F, -0.231940031F, 0.836343169F, -1.67459679F, -1.24147069F,
    0.723095715F, -4.04078436F, 2.00097346F, -1.17788291F, -2.07889771F,
    -0.377803117F, -0.0120776491F, -0.319427609F, 0.016757559F, 0.595674455F,
    -8.53598F, 0.500274241F, -1.98565757F, -3.39345193F, -2.02961326F,
    0.494339436F, -1.44252229F, -2.0948143F, -1.40133798F, -1.24359989F,
    0.534180343F, 0.0776088312F, 1.01246071F, 0.589653075F, -0.376926512F,
    -0.662074804F, 0.84100157F, -0.609131515F, 2.89237928F, 0.026665695F,
    -0.418524146F, 1.36235702F, -0.644325793F, -0.648048341F, -4.71401453F,
    -1.3925575F, -1.44859195F, -1.87873209F, 0.145043403F, 0.318002015F,
    1.86895192F, -3.84750772F, 1.00403893F, -0.161294475F, 1.32142568F,
    -0.250572562F, 0.517050624F, -1.18951678F, 0.492975533F, -5.52316713F,
    1.55450308F, -4.56431437F, -0.942329586F, -1.15499771F, -0.861425519F,
    1.56562614F, -0.479756474F, -2.19058275F, -0.261728555F, -3.46388888F,
    -3.70654964F, 0.0862483531F, 0.649566054F, -0.692429781F, -7.39829683F,
    -0.60114646F, -2.15963793F, 0.696654499F, -1.41937888F, -0.624123216F,
    -2.41095829F, -3.77700877F, -0.634496331F, -0.080745168F, -6.75446749F,
    0.74789083F, -0.441952318F, 0.781254828F, -0.870781481F, 0.344001681F,
    -0.789859891F, 1.29293346F, -1.51512361F, -5.72869062F, -0.831248641F,
    2.08355451F, 0.248935878F, -0.985057294F, -5.10544157F, -1.10848236F,
    0.694327176F, -0.491581947F, -0.281449825F, -1.74714231F, -0.17665337F,
    2.8612F, 0.674620628F, 0.492722124F, 1.83919561F, -0.055232998F,
    -1.07693732F, 0.519453347F, 2.21688771F, -1.73561823F, -1.70555556F,
    -6.15284109F, -0.379317552F, 1.76737022F, -0.394319862F, -0.953787327F,
    0.638578534F, -1.87079787F, 0.702016771F, -3.59492493F, 2.25755811F,
    0.0601933524F, 0.341909468F, 0.0170830395F, -10.9536476F, 1.5467546F,
    -1.04046381F, -2.97209954F, 0.243884772F, 0.817629457F, -0.0313209035F,
    3.2161293F, -1.1096164F, 1.63941991F, -2.13221836F, -6.05315399F,
    -1.57282317F, -1.04850733F, 0.330534428F, 2.95892763F, -1.84928334F,
    2.45858645F, 0.649195F, 0.894126296F, -3.59082508F, -2.5641036F, 0.44375512F,
    -2.01416183F, -0.440845966F, 0.0173022076F, 1.13196313F, -0.107737616F,
    1.05477619F, 1.48051608F, -0.0555883572F, -0.674950421F, -2.22655058F,
    -0.702402115F, 0.172034889F, -0.614684045F, -0.579466701F, -1.22278965F,
    -0.293579727F, -0.155639902F, 0.202712521F, -3.43541956F, -0.190000355F,
    0.00535266846F, 2.02734828F, -2.8884F, -0.846899569F, 2.22042441F,
    0.382163018F, 0.486581385F, -4.35058832F, -0.823377609F, -0.419808537F,
    -1.61266065F, -1.22484696F, -1.49813771F, -0.971188188F, -1.38362992F,
    -1.44329584F, 1.62270308F, 0.291314662F, -2.23037195F, 0.0945596F,
    0.491823167F, 1.01771522F, 2.3432312F, -1.528368F, -0.237368092F,
    -0.880477488F, -0.166874766F, -1.69500351F, -1.58810031F, 1.36625695F,
    -2.92560315F, -0.668313086F, -1.77387965F, -1.10612321F, -0.214236349F,
    -0.0913513675F, -0.215777054F, -1.63677037F, 2.19015384F, 1.76374066F,
    0.32266438F, 0.122350566F, -1.43015039F, 0.222221136F, -3.32889581F,
    -3.03987956F, -0.754641771F, -6.05470085F, -0.99203527F, -1.7154212F,
    -8.0286274F, -0.0173461977F, 0.362477064F, -8.21200943F, 0.159059092F,
    3.05531478F, -6.98624706F, -1.20875299F, -1.61347973F, -1.52386212F,
    0.486063331F, -11.7935753F, -2.47416067F, 0.399068803F, -3.97704887F,
    -0.477125645F, -0.665409505F, 1.92005372F, -6.78362513F, 0.607824385F,
    0.102942333F, 1.70056093F, -2.40840411F, -0.738505F, -1.56300199F,
    -0.621662736F, -0.0154782254F, -8.40740395F, -0.313527048F, 0.892112374F,
    3.5559F, -3.62422466F, -2.9096005F, 3.36723185F, -1.13471448F, -0.640206575F,
    -0.727172375F, -0.302279592F, -1.28807F, 0.0834864601F, 1.95828414F,
    0.238417625F, -1.21477354F, -4.14286375F, -0.0538178384F, 0.171088979F,
    -0.672911108F, -0.991565645F, -7.58112574F, 1.54730034F, -3.92892575F,
    0.0868337825F, -0.683391809F, -0.953100502F, -1.21640623F, -0.313490361F,
    0.566013634F, -0.985093534F, 0.927118897F, -0.950849652F, -1.23551559F,
    0.431345761F, -2.30045438F, -7.62161827F, -5.65873F, -0.858314753F,
    -0.432994843F, 0.94357425F, 0.201793388F, -1.25695968F, -2.18235564F,
    0.000959710509F, 0.161670879F, -0.21192573F, 0.0708152577F, -1.8925184F,
    -1.85785031F, -0.19743143F, -2.21288228F, 3.28548074F, -0.171821222F,
    0.218608961F, 1.11250138F, -0.418675959F, -0.230395392F, -0.256854475F,
    -0.504671574F, -1.6103338F, 1.89790082F, -0.0830228105F, 0.606666803F,
    -0.712434769F, -1.0506475F, -0.404898226F, -4.60716629F, -0.143628702F,
    -2.18283701F, 0.801575899F, 0.0151796946F, 1.21378493F, 0.550151885F,
    0.532929957F, -0.166105554F, 0.346203238F, -0.463421762F, -0.149949133F,
    -3.61366773F, 0.124855228F, -0.893258154F, -0.746758163F, 0.503341615F,
    -0.0948435292F, -0.962163508F, 1.111251F, -0.148766756F, -0.50545609F,
    -0.273222685F, -2.17817F, -2.8763926F, -0.160039306F, -1.63995624F,
    -1.5313834F, -0.859607875F, -0.326233387F, -1.45121443F, 0.169778422F,
    -5.01912737F, -2.97290754F, 1.09632099F, -5.51055241F, 0.799143314F,
    0.0136945564F, -1.79571474F, -0.315416455F, 1.64838326F, 3.22369289F,
    0.666220486F, 0.0971841589F, 1.92891765F, 2.44887042F, 0.358827561F,
    2.53744364F, 0.451143354F, 2.62612534F, 0.778036892F, 2.01918316F,
    1.35810304F, -0.932351947F, 1.88329339F, -3.39964986F, 0.865405142F,
    -2.67963362F, -1.42169428F, -1.03677499F, 0.400049955F, 0.205459744F,
    -0.941399455F, 1.350811F, -3.60614777F, 0.386294663F, -0.786519527F,
    -15.5820932F, -2.27867746F, -0.0948903263F, 2.56144643F, -0.108738087F,
    2.33384776F, -11.8823948F, -0.606374681F, -1.14609134F, -2.82596231F,
    -1.80388F, -4.94204092F, -3.22223449F, -4.51146F, 1.05652463F, -2.13817644F,
    0.257973552F, -3.61253405F, -1.03280687F, 0.671842456F, -0.0348131F,
    0.650520742F, -7.26324224F, -0.287677824F, 1.13181114F, -0.147739768F,
    -2.50205827F, -0.130632535F, -12.4334984F, -0.0248072539F, 0.506947F,
    -0.0934280828F, 0.23271434F, 0.0834651F, -0.0612131804F, 3.14159036F,
    -0.162540853F, 0.231474936F, 0.540898502F, -5.23953581F, -1.80099225F,
    -6.89918852F, -0.879490256F, -0.0105439536F, -1.26526725F, 0.486857563F,
    -5.30286217F, -1.92012F, -0.897676528F, 1.69836771F, 0.0139418552F,
    -0.0287590865F, -2.28558469F, -0.195525423F, 0.00465461425F, -0.295489311F,
    0.278705359F, -1.01560855F, -2.01247954F, -0.219123721F, -4.11829376F,
    -1.04591978F, -2.37995124F, 0.466119081F, 0.134487584F, -0.24045226F,
    -2.05120873F, 1.84963953F, -0.0918850824F, 0.0572536401F, -1.20392656F,
    -0.651801229F, -0.537435532F, -0.520675F, 0.0759477466F, 0.073322F,
    1.76542258F, -0.145208329F, -0.734954655F, -3.16041613F, -0.166146934F,
    -0.561212122F, 0.151943043F, 0.422212452F, -5.32892704F, -5.78849077F,
    -0.130843401F, -3.83760452F, 0.15030089F, -1.03663075F, -0.454861611F,
    -3.00375724F, -0.175203085F, 0.0543717332F, 0.434282809F, -0.140026808F,
    -1.31460512F, -0.527325809F, -3.46004605F, 2.49851322F, -0.376440138F,
    -1.30908167F, -0.352452487F, 0.85373F, 1.25629973F, 1.6427381F, -0.3100923F,
    -2.18842316F, -0.303431571F, -2.50193715F, -1.31500304F, 0.879032373F,
    -0.0869360417F, 0.123129465F, -0.0688091293F, 0.375362486F, -0.343668312F,
    0.482204199F, 1.02565694F, -1.03559113F, 0.0252041873F, -0.325511724F,
    -0.55743444F, 0.169469312F, 0.85575664F, -4.12237F, -0.402388424F,
    1.02453077F, 0.327345431F, 0.491139084F, 1.8707515F, -1.79903972F,
    -2.17676449F, 0.408012062F, -0.653628588F, 0.848865211F, 1.95782304F,
    -5.80007887F, 0.347127318F, 0.0176328532F, -2.18354392F, 1.16283631F,
    -0.143418446F, -0.328806341F, 0.0706006512F, -0.651161551F, -1.47007191F,
    0.00220671576F, 0.553391F, -6.4128232F, -0.469695181F, 2.39590645F,
    -2.6897347F, -3.35039115F, -1.2975564F, -1.53995442F, -0.382166594F,
    1.33297205F, 0.12321832F, 0.959985316F, 0.26060015F, 1.95176542F,
    -1.19821286F, -0.615565658F, 0.453831315F, -0.290782332F, -1.23014855F,
    1.0789876F, -3.73190641F, -3.13815475F, -0.477783591F, -3.45847535F,
    -0.492241979F, -1.08867168F, -0.723550797F, -1.13318408F, 0.609916866F,
    1.95662904F, -0.923334241F, 1.22164071F, -0.533572316F, 1.98142624F,
    -0.274092615F, -1.10307181F, 0.349343449F, 1.0242449F, 1.12221074F,
    -7.87008572F, -0.598019838F, -3.95571613F, 0.087545909F, -0.477246016F,
    0.346267074F, -1.08167064F, 1.77215576F, -2.26881528F, 0.324061781F,
    0.9761464F, -3.66913462F, -0.821329892F, -1.72091115F, -2.88967752F,
    -0.436144084F, -0.202225864F, 0.739268124F, -2.89357829F, -0.473623395F,
    -3.32377267F, -0.796682596F, -0.108440518F, -6.7881403F, -0.435368448F,
    -0.41381827F, -1.62232685F, -0.0896171927F, 1.26151764F, -5.15845728F,
    -0.0373953506F, 1.40649176F, -1.08686769F, -0.601475716F, -2.77490854F,
    -0.431686848F, 0.187932104F, -3.31717038F, -2.96286964F, 0.614815652F,
    -2.05289125F, -1.36630833F, -0.199307144F, -0.416802764F, -1.05376017F,
    -1.21055591F, -0.228755936F, -1.63589263F, 0.459602356F, -0.043188069F,
    -0.0949922055F, -4.61459875F, -2.85094976F, -0.825258076F, 0.0997965F,
    -0.721806467F, -3.06505466F, 0.824652791F, -5.40041733F, 1.27177942F,
    1.36089182F, 0.112179458F, 0.0231298171F, -7.53126717F, 0.696614F,
    -0.0911961943F, -1.65092814F, -2.54175663F, -2.41858125F, -1.15411913F,
    -3.07820964F, 1.5907F, 1.52699959F, 0.500097811F, 0.165058121F, -1.36360168F,
    -0.0254522394F, -2.63445354F, 0.477482438F, -0.27029F, -1.46218479F,
    0.148257971F, -0.745250881F, -1.99486268F, -1.81369817F, -1.06219697F,
    0.36512813F, -0.435191572F, -0.0435752757F, 2.98833776F, -1.76004088F,
    -0.0988874882F, -0.330600709F, -1.30058718F, -1.88198555F, -0.0667174309F,
    -1.83582294F, -0.106246918F, -1.17171192F, 1.66833401F, -0.204868436F,
    1.63405943F, -1.5582912F, 2.80929255F, -1.12821198F, -0.197785586F,
    -2.61754036F, 1.05873251F, 0.263276905F, -0.518465638F, -0.444594562F,
    -0.782345653F, 1.678491F, -0.552416563F, 1.14873981F, 2.06404352F,
    -0.356180668F, 0.118867263F, -0.0927954689F, 0.716144502F, -0.605094671F,
    -2.04522228F, 0.501136F, -0.26892674F, -2.46382689F, 0.258676618F,
    -2.39318442F, -0.177785933F, 0.241933405F, 1.64423275F, 1.42326534F,
    0.18150124F, -0.881533563F, 0.0174584258F, 1.97725689F, -0.00162868714F,
    1.08831799F, 1.63654768F, 2.30449581F, -1.70427358F, -0.623668F,
    -0.176926658F, -2.10934544F, 1.28706849F, -1.24362576F, 1.19597304F,
    -0.793294549F, 0.728745639F, 1.08737373F, -0.0978184268F, 1.27235639F,
    -6.06059647F, -1.77790654F, -2.77817106F, 1.65562618F, -1.59340334F,
    0.311042875F, -0.228865415F, -4.99150562F, -3.19938779F, -2.42717505F,
    0.126326919F, -0.0331246145F, 0.426535457F, -0.765593708F, 0.146684125F,
    -3.2375164F, 0.241915166F, 0.687952F, -1.38435924F, -0.316756457F,
    1.01514387F, 0.312822878F, -1.16905463F, -1.70733654F, 5.48392916F,
    -0.748417556F, 0.313319117F, -0.379919648F, 0.173280045F, -1.29221642F,
    -0.23614718F, -3.19347167F, -0.393660307F, -1.96187961F, 1.46790743F,
    -0.146118075F, -0.0486286245F, -0.25831002F, 0.494740427F, -1.42077231F,
    -1.15238774F, -0.893882334F, -1.03047204F, -0.844525933F, -0.957285106F,
    1.90151596F, 0.333419F, 2.22619057F, -2.64357352F, -7.42877626F,
    -9.19905663F, -3.06105399F, 1.76143837F, 0.767519295F, -0.20798023F,
    -1.67081177F, -0.0116352113F, 1.56732023F, -6.86372328F, 1.20181787F,
    1.85242188F, -1.93828237F, -0.482336134F, 0.143843502F, -0.0240068119F,
    -0.476908237F, 0.187846825F, -0.254103124F, -0.287023306F, 1.77916574F,
    -8.52063465F, -0.602247417F, 1.00045788F, -0.370928556F, -1.36918759F,
    -2.04524636F, 0.363618374F, -2.65592623F, -1.69101F, -3.8277936F,
    0.0404712334F, -0.114086688F, 0.769352794F, -2.46708727F, -0.138714671F,
    -1.64308023F, -0.460327506F, 0.567699909F, -1.43136799F, -1.16650271F,
    -4.39348698F, 1.32010317F, -3.77780461F, 0.999895871F, -2.63668323F,
    0.719813347F, -3.02595448F, -4.64686966F, -0.0307892915F, 0.00827592425F,
    0.815469F, -1.98227179F, 0.508211613F, 3.30505586F, -1.22507977F,
    -0.290664315F, -0.985166F, 0.0217103437F, 1.33914292F, -0.0959166512F,
    2.37677908F, -2.4851265F, -0.678153753F, -0.89354533F, -1.24021888F,
    0.816926062F, -0.372959822F, -7.86047792F, -5.47821283F, 2.44381428F,
    -11.665309F, 1.14725578F, -1.65474808F, -0.114784725F, -3.94711256F,
    -1.93326712F, -5.85691738F, 1.35566592F, 2.10626078F, -1.76301277F,
    -0.780644417F, -9.0563221F, 0.510847867F, 0.291630745F, -2.67481208F,
    0.051130563F, -6.2225318F, 1.54825068F, -0.240122929F, -1.34143591F,
    -5.30140972F, 1.048558F, -4.65414715F, 0.100623064F, 0.349389285F,
    -1.80562532F, 0.24928464F, 0.157165036F, 0.875315666F, 0.53637749F,
    -0.518522084F, -0.300790548F, -3.64634871F, -2.34858F, -0.165274724F,
    1.00528014F, -0.828828633F, 0.127284363F, -5.90221405F, -0.556393325F,
    -2.60322165F, -6.5258708F, -0.0139989238F, -1.5885433F, 0.00872270111F,
    1.51454377F, -6.33710051F, -1.48054457F, -0.0907805F, -4.26455736F,
    -2.6098752F, -1.39736247F, -0.151200786F, -1.07776761F, 0.113883503F,
    -0.323425621F, -5.05204535F, 0.263872415F, 2.62223625F, -8.49795246F,
    -10.4748144F, -9.50338936F, -0.385955572F, 0.864088118F, -0.166289523F,
    1.27512312F, 0.714193761F, -2.25647163F, -0.954819322F, -1.01827466F,
    -0.592076421F, -5.94145155F, 0.724751532F, 0.60615921F, -1.54355073F,
    0.188060194F, -2.88769269F, -0.419608861F, -2.24116397F, 1.45594108F,
    -0.966533601F, -3.72726297F, -1.77895558F, 0.163889498F, 2.97395515F,
    0.165391088F, 2.44496632F, -0.973786235F, -0.0524938256F, -5.54228258F,
    -2.98504376F, 0.146209553F, -1.9807198F, 1.9890269F, -0.213729143F,
    -0.82821852F, 0.419041246F, 0.26088205F, -2.38795018F, 1.61788476F,
    -0.291031599F, 0.232463732F, -0.0930965841F, 0.233754918F, -0.243908778F,
    0.799852848F, 0.0500987545F, 0.454312384F, -7.81872416F, -0.198148623F,
    -5.69406748F, 1.02794671F, -1.19542658F, 1.49842918F, 1.61270154F,
    1.12162197F, -1.09689176F, 0.949998498F, 0.319856763F, 0.923759162F,
    0.836346924F, -1.92907608F, 0.354799509F, -3.74099278F, -1.73753786F,
    -0.241216034F, -0.347330958F, 0.0626655F, -0.921159267F, 1.85165441F,
    1.44456387F, -2.13204789F, -0.756909F, -1.23051918F, -0.123404138F,
    1.48193324F, -0.0368556753F, -2.76497769F, -3.1009829F, -1.00615311F,
    -1.59718359F, 1.87072074F, -0.509101093F, -1.4385426F, 0.0115298415F,
    -1.33920348F, -1.04011035F, -2.44932461F, 1.74707425F, -2.58762741F,
    1.05411923F, -4.72785521F, -1.60744309F, -0.0153477956F, 0.82275039F,
    -0.134697795F, -1.75575674F, 0.743730843F, -0.0360442027F, -1.61194229F,
    -2.44600892F, -1.7822336F, -3.77257633F, 1.37333953F, -0.378712654F,
    -0.553703487F, 0.779192F, -0.471456707F, 2.03627563F, 0.638516903F,
    -0.182382748F, 0.00156353065F, -0.910744905F, -1.96540082F, -0.0663648844F,
    -8.13914394F, 0.0500263683F, -1.76367426F, -8.52951908F, 0.239278585F,
    -4.19547749F, 0.186047852F, -8.77562523F, 0.414931834F, 0.893437266F,
    -2.14289737F, 0.73861295F, 1.5293293F, -0.589552343F, -1.1327275F,
    1.52750468F, -1.84095383F, 0.393326133F, 1.2920512F, -3.38375378F,
    -0.312441289F, -5.52581692F, 1.04126287F, 2.85207224F, -4.31224298F,
    -2.21562219F, -1.05915236F, -0.346373916F, -1.14545143F, -0.033688616F,
    -3.49912238F, -1.10849893F, -4.73096371F, -2.5976069F, -0.378434628F,
    -0.0381864123F, 1.43078232F, -0.685276449F, -3.91794086F, 0.169911683F,
    -2.27381754F, -5.93005276F, 2.10041356F, 3.63087511F, -1.39020991F,
    -3.54174352F, -5.0565896F, 2.54742265F, -0.671708107F, 2.1075089F,
    -0.308825612F, -0.470670283F, 3.12440777F, 0.120957784F, -0.481291354F,
    -3.83034635F, 0.0749705806F, -2.27526569F, -2.83565044F, 0.294012338F,
    -0.42176351F, -0.370875806F, 1.73512173F, 0.116832949F, -0.394267827F,
    -0.991407812F, -0.238905504F, -1.50459266F, -1.24214077F, 0.459442407F,
    0.812238872F, -0.112482592F, -0.255117387F, -5.29268F, -0.829948545F,
    -0.535223901F, 0.689696252F, -2.52782273F, -3.98649192F, 0.0362804681F,
    1.3455137F, -4.79277754F, -4.27646255F, 0.236108556F, -0.755305827F,
    -0.511650801F, -2.26107669F, 0.0497629158F, -2.70183945F, 3.68711352F,
    -0.188473463F, -0.496843517F, 0.0461457334F, 0.264712185F, 0.930620909F,
    0.928483F, -1.46935785F, -0.489503473F, 0.224115F, -0.553767681F,
    2.13456368F, -0.134813443F, 1.85191274F, 0.600922883F, 0.293227464F,
    0.408202857F, -2.76865482F, 0.00451060291F, 0.750824451F, -0.245673075F,
    -2.73301435F, -2.13796425F, -2.80065608F, -0.862982035F, 0.375653356F,
    -1.46014726F, -0.158808574F, 0.765075445F, 0.262585F, -1.52429557F,
    -0.376462191F, -2.68598986F, 0.37816751F, 0.0595062561F, -0.924158931F,
    -0.371549904F, -0.652528286F, -2.50964212F, -0.553036511F, 0.312674046F,
    1.08379304F, 0.0290772412F, -1.48887789F, -0.71475476F, 2.66520214F,
    -0.313738406F, 0.349638343F, 0.0564246662F, -0.782148182F, -0.76226759F,
    -2.26261783F, -0.648026F, -1.50468552F, 2.18677306F, 0.0400244556F,
    -0.595004618F, -1.61883128F, 1.56455636F, -0.203292921F, -1.47539079F,
    0.927390814F, -6.60017157F, -4.89709902F, -0.18996112F, -2.9193275F,
    -0.794308305F, 0.476012766F, -1.07710242F, -1.62953568F, 0.231520861F,
    0.162326425F, 0.151190519F, 0.0685641542F, -0.708606303F, -2.58406973F,
    -3.63703299F, 0.56681186F, -0.000280209671F, -0.422069103F, -0.142948657F,
    0.167972982F, 0.552096426F, -3.33398F, 0.210243091F, -1.54043674F,
    -2.95666385F, -1.47173584F, -0.276666641F, 2.26373029F, 0.663679659F,
    1.48302805F, 1.18052757F, -3.74836183F, 0.499453723F, -8.12764549F,
    -2.7148056F, -6.20479F, -1.92921567F, -0.00210260204F, 1.3297075F,
    0.0860917345F, 1.35806549F, -2.43316F, -0.184510604F, 0.378013F,
    0.718486071F, 0.164089859F, -1.14098167F, -2.93532443F, -2.59661865F,
    0.982352436F, -0.994612813F, 0.515820503F, -4.58311939F, -6.7940383F,
    0.556565046F, 0.0966330245F, 1.29612672F, 0.203537181F, -0.107204691F,
    -0.726031899F, 0.253930897F, -1.58694863F, -0.492798895F, -1.03016269F,
    1.22666717F, -2.0710876F, -3.46209884F, -1.3673116F, -4.00710678F,
    -2.72775817F, -1.21731114F, -0.650468409F, -0.697816F, -0.292778105F,
    0.892847955F, 1.44174814F, 0.120512307F, -8.28714371F, -1.76861727F,
    -0.236590207F, -0.0793446F, -0.0521003269F, 3.07292461F, 0.264799148F,
    -0.657821894F, -2.41736937F, -0.278257191F, -2.58019376F, -0.783999801F,
    -2.64974284F, -1.67633104F, -1.02593851F, -3.66070175F, 1.61069918F,
    0.28118667F, -0.0642187148F, -2.86427879F, -7.61341572F, 1.54272044F,
    -0.00469377963F, 0.674583793F, 0.938475F, -2.10975981F, -6.71453667F,
    -0.595456779F, 2.00536156F, 0.76118052F, 0.472198397F, -1.22476864F,
    -0.301781178F, -1.08237922F, -0.279454172F, 0.203105778F, 0.988779545F,
    -4.14371109F, -0.283787906F, -1.13744628F, -2.62537527F, -0.8757388F,
    -2.57672262F, -0.224186361F, -2.30056739F, 1.32100487F, -0.0202930514F,
    -1.29982853F, -0.545112491F, -9.80798531F, -0.839527309F, -0.222531453F,
    1.4861238F, -0.984547257F, 1.1286912F, -3.96353078F, 0.00466527278F,
    -2.83552527F, -8.47702312F, -4.27999496F, -2.01575565F, -1.33586192F,
    1.81529605F, -2.70067477F, 3.42230964F, -0.40728274F, -1.34212768F,
    -2.55932164F, -3.71055794F, 0.80582F, -1.45103836F, -0.055916518F,
    -0.322805196F, 0.252637237F, 0.385962903F, 1.3854959F, -5.30500221F,
    -2.30462074F, -2.34347296F, 0.14995797F, 0.0827764422F, -0.572026432F,
    1.63231611F, -0.765530348F, -0.00245658751F, 1.94144177F, -0.6467731F,
    2.8129735F, -0.813082457F, 1.07842124F, 1.90270472F, -0.539123595F,
    -4.52037621F, -4.59597254F, -4.49991F, -2.3259666F, -1.18546009F,
    0.471316725F, -6.72390604F, -1.51639879F, 0.336897254F, -6.46187782F,
    0.277196646F, 0.580046773F, -1.35056007F, -1.2242204F, 0.783355117F,
    -0.919498861F, 0.260016173F, -2.35100412F, 1.57890296F, -0.414429516F,
    -0.559093297F, 0.412564456F, -4.62297297F, 0.0107884612F, -0.0555312745F,
    -0.171178505F, 0.182932287F, -1.36397147F, -1.47309279F, -0.154263839F,
    2.46122265F, -1.13742447F, 1.10245144F, 1.28509402F, -0.739772499F,
    -0.749783278F, -3.33450723F, 1.29166472F, -6.04090405F, -3.85473609F,
    -1.16644692F, -1.50697565F, -1.33386314F, -0.230853081F, -1.27979791F,
    -1.72825289F, 0.860931277F, -0.0479493551F, -6.12102509F, -1.10118353F,
    -0.288798213F, -1.32777679F, 0.15627265F, -2.01725078F, -4.25825167F,
    -4.23410511F, -1.27238727F, 0.707372844F, 0.489170372F, -1.05061448F,
    1.78908575F, 0.123764716F, 2.00922227F, 2.82138848F, 0.432265341F,
    0.598590612F, -2.60555911F, -3.57386661F, 1.03293252F, -0.0482666157F,
    3.44595766F, 1.14060926F, -2.3256135F, -0.517130315F, -1.33959413F,
    -0.0357971676F, 0.297110438F, 0.464325935F, 0.405494392F, -1.72530186F,
    -0.187844664F, -0.667194307F, 0.873658121F, -0.589715421F, -5.34194279F,
    2.01804352F, -1.21536124F, -2.03118F, 1.90379751F, 0.266304791F,
    0.999422371F, -0.562889695F, 0.16449748F, -0.640372753F, 0.357010573F,
    -0.27888459F, 0.411582023F, -9.85220814F, -2.24465132F, -0.496498436F,
    -5.38703728F, -1.12806308F, -0.2318957F, -8.11588383F, -0.251826167F,
    -2.00651813F, -1.9513216F, -2.10919929F, 0.0144111067F, 2.2550211F,
    0.690994442F, -0.129089981F, -0.806131F, 0.301745325F, -2.87569547F,
    -1.66117454F, 1.75040495F, -0.17113699F, -2.96938229F, -3.07851982F,
    0.0303864609F, -1.37846839F, -0.224660501F, -0.584674895F, -2.98773479F,
    -8.52104473F, -3.5219171F, -0.532914937F, -0.924488306F, -0.0430848971F,
    2.09070206F, 0.23490265F, -3.11384797F, 1.6200366F, -0.706122637F,
    0.00283261226F, -4.52953863F, -4.07268333F, 1.37997258F, 0.836233616F,
    -4.58282518F, 1.7445569F, -2.19554806F, 0.291089535F, -5.26199245F,
    1.49538398F, -1.71057916F, 1.10887396F, -0.356794417F, -2.34567404F,
    -0.536063135F, -2.30084372F, 0.829774141F, 0.535237253F, -3.70972919F,
    -13.8483582F, 0.0858182386F, -1.94605768F, 2.12204719F, -0.405910552F,
    -2.68779254F, 1.49861228F, 0.360640883F, -0.238791555F, 1.05692315F,
    -1.42164767F, -0.484364629F, -6.52672958F, -2.47489905F, -0.205722645F,
    -5.90149212F, -0.546785593F, -1.75635719F, -0.0716909319F, -0.511310935F,
    -10.9611168F, -4.89748526F, -9.04121F, 0.108308069F, 0.765404761F,
    0.365993083F, -1.72460198F, 0.897285342F, -1.47817206F, -0.786321F,
    -1.50095892F, -7.04017925F, -0.853522658F, -1.92613804F, -0.835118F,
    -0.189365178F, -1.86970127F, 2.68906474F, -0.108739965F, -3.30093765F,
    -7.37617874F, -0.967354596F, -1.22574818F, 0.430071384F, -1.28163803F,
    0.242540076F, -0.0753911063F, -8.49857426F, -4.84666348F, -3.50566339F,
    1.5881716F, -2.54792023F, 0.0340590216F, -1.27530015F, 0.091847688F,
    -0.741322279F, -2.81391525F, -4.4537425F, -0.309102207F, 1.81954336F,
    -6.42204762F, -2.70630097F, -1.44069803F, 0.0952769071F, 1.15539801F,
    0.366143882F, 0.416151315F, -4.58845F, -0.467605233F, -0.969307423F,
    -1.16931605F, 0.622915864F, 0.25518018F, -1.58716786F, -0.765677035F,
    0.595536292F, -0.443480134F, 0.574250817F, -1.04533458F, -0.319499761F,
    -0.0265701693F, 0.321290642F, 0.574002802F, -0.764708221F, -0.75738281F,
    -0.363161057F, 0.0500347763F, 0.99944F, -0.431672037F, -0.407658547F,
    1.9014045F, 2.68329215F, 1.89684725F, -2.57090783F, -2.52088261F,
    -0.630517066F, -8.95597076F, -3.59339166F, 0.663892865F, -0.223269835F,
    -0.239974707F, 1.11365783F, -0.12048693F, -14.4154367F, -1.01259363F,
    -0.702073634F, -0.409900278F, -0.0959177241F, -5.21183825F, 1.0335418F,
    1.58378124F, -0.40309158F, -1.39065945F, -0.606470764F, -0.600914776F,
    2.52267981F, 0.72021389F, -8.38356495F, 0.532111049F, -3.10997462F,
    -2.82565808F, 0.558642507F, 0.222372398F, -2.17870235F, -6.09414F,
    1.38103902F, 2.29108453F, -2.55620527F, 0.0109786382F, -3.50986719F,
    -2.4684732F, -9.88296127F, -1.19937384F, 0.228704765F, 0.678031147F,
    0.711198747F, -0.891785204F, -5.0341692F, -1.38772643F, -1.38944137F,
    -13.7888088F, 0.456456095F, 1.9155587F, -1.30912805F, -0.757634223F,
    -0.371718228F, 0.878191888F, 1.60656977F, -0.600031853F, -14.8725538F,
    0.43003881F, 0.346033931F, -1.73211598F, -0.140195727F, -0.397523284F,
    -0.221625119F, -0.89784503F, 0.21394223F, -1.3325665F, -0.288446218F,
    -5.10700321F, -10.9981041F, -3.53067231F, -1.49141872F, 1.28505933F,
    -9.33792686F, -1.37948501F, -4.32589769F, -0.346206188F, -2.16435981F,
    -1.00511467F, 0.6263327F, -0.614453852F, -1.85955906F, -5.67576933F,
    0.0314258114F, -0.540094078F, -0.319710374F, 1.41532F, 2.21931243F,
    -1.01780808F, 2.61373091F, -0.387854487F, -1.71814585F, -0.56338793F,
    1.8101505F, 0.154293105F, -3.52992439F, -1.71949577F, -1.54449368F, 1.25118F,
    -1.63300312F, -2.96054149F, -0.634059846F, -0.413928539F, -0.542615235F,
    -1.87662101F, 0.283234F, -3.26417708F, -2.23628473F, 2.83145237F,
    -1.35533845F, 0.615574121F, 0.630739868F, -3.1239078F, -0.0525536388F,
    0.385045856F, -0.757455826F, -0.198834851F, 2.05252481F, -3.94256449F,
    -0.192806542F, -0.739075899F, -2.9600029F, -0.40024963F, -1.43567789F,
    0.0910029709F, -0.70275861F, -2.36019516F, -2.51280189F, -0.99672389F,
    -0.546442866F, 3.04604602F, -2.76588511F, -0.231530532F, -7.32673025F,
    -1.64160967F, -0.203024715F, -1.75717986F, -0.759343266F, -0.793470681F,
    2.83017778F, 2.00926208F, -4.65520144F, 0.369077772F, 2.31479239F,
    -2.58774185F, -2.51643968F, 0.152179062F, -3.53304648F, -1.3538425F,
    -1.21846056F, -0.208101422F, 0.860440552F, -0.642539859F, -0.180879816F,
    -0.736408174F, 0.580711067F, 0.61507535F, -2.30609131F, 2.88705182F,
    -0.718379557F, -1.51030219F, -0.38468641F, -0.982162416F, 0.835521221F,
    0.532987177F, -5.74141121F, -1.00757182F, -3.75238681F, -4.30715322F,
    -0.942913473F, -7.00562382F, -0.267752171F, -1.00055373F, -5.00717306F,
    -3.15541387F, -2.11595416F, 0.587114513F, -2.16522384F, -4.09610939F,
    -1.61330783F, -0.553681314F, -0.530441284F, -1.44451439F, 0.110225759F,
    0.33682543F, -4.45033836F, -0.186650097F, -1.4911226F, 0.968823373F,
    -0.0775135159F, -1.57751143F, 0.851527929F, -1.85309243F, -0.386889875F,
    -1.08112264F, -0.43930608F, -0.25028044F, -10.6269178F, 0.190731719F,
    0.182922482F, -0.540174F, -0.933411896F, 0.207242757F, 2.58282471F,
    0.144974649F, 1.66475856F, 0.40290466F, -0.244682789F, -0.825520813F,
    -4.05648947F, 1.20802402F, -3.53431082F, -4.22280169F, -0.178676233F,
    -1.75871623F, 0.962147355F, 0.474604785F, -1.45792174F, -0.44931F,
    -0.420579344F, -0.420781434F, -8.27973747F, 2.2420392F, 0.262535661F,
    0.0856800154F, -0.966600597F, -2.88973093F, -0.601397336F, -0.889139473F,
    1.6924696F, -0.0926807895F, 0.0588262789F, 0.00952623226F, 0.553345382F,
    0.784102261F, 0.359893233F, -2.24038363F, 2.68763947F, 2.59246206F,
    -2.08352733F, 0.666645169F, -0.187626034F, -0.210327774F, 0.449375659F,
    -1.54432321F, 0.0238548107F, -3.20141482F, 0.0888805464F, 0.250385255F,
    -3.1839025F, 0.122213222F, 0.227750272F, 0.189158946F, 0.37977162F,
    1.3825773F, 0.360476226F, -0.164762661F, -0.558413923F, -0.744825304F,
    -0.0549802631F, -0.364202559F, -0.268998295F, -2.17494702F, -0.323793977F,
    0.0276199225F, -0.227566302F, 0.968985379F, -5.52023125F, -0.239573762F,
    0.0923172683F, -0.450066507F, -0.498741448F, -0.166561469F, -0.998274386F,
    0.281643093F, -0.443333477F, -2.79487681F, -0.898623347F, -0.130237699F,
    -0.0846393183F, -6.3344779F, -0.0182282F, -0.0915546492F, -2.11204171F,
    -2.53064585F, 1.64405382F, -0.186083958F, 0.742685556F, -0.00957017206F,
    -0.565755785F, 0.444503665F, 1.39331508F, -1.63978982F, -0.594877422F,
    -0.296592146F, 0.180916339F, 0.265797943F, 0.777179301F, 2.02498865F,
    -6.31948F, -1.32517612F, -2.53641582F, -0.830307782F, 0.216978F,
    -0.508145869F, -3.4034245F, -0.926814556F, -0.170572817F, -0.285137832F,
    2.03987026F, -0.288078129F, -0.649605334F, 0.514976621F, -0.982565165F,
    -1.47391474F, -0.930263042F, -1.59900773F, -2.24774742F, -1.06727278F,
    -1.00072515F, -0.31300348F, -0.832232773F, 0.119778559F, -0.721719325F,
    1.78978801F, 2.37218571F, 0.81140548F, -5.2433362F, -3.53388906F,
    -0.93814528F, -2.1678195F, 2.64137101F, -2.36245227F, -0.78573072F,
    0.31050384F, -1.59454036F, -3.68879032F, 0.0327921547F, -1.11700201F,
    0.632620454F, 1.80540478F, -2.75919819F, -0.0725888163F, -0.687321544F,
    -0.00264949817F, -1.54070139F, -2.77614F, -0.3507F, -3.74744725F,
    1.19235134F, -1.4077028F, 0.0927939117F, -2.54436517F, 2.3916347F,
    -3.07583809F, 1.45019305F, 0.64995563F, -1.15375626F, -0.452759773F,
    0.70901823F, 0.0449947F, -1.96042013F, -1.50594723F, -0.164155886F,
    -0.213750839F, 0.317228258F, -1.61033213F, -4.958992F, 1.09779477F,
    -4.97210693F, -0.419213742F, 0.29448393F, 0.105019018F, -0.0403279401F,
    0.467636943F, -0.0575386174F, -8.67839432F, -0.946611404F, -1.06100476F,
    -1.03618681F, -0.0207667835F, 0.532435417F, -0.241859406F, -1.65244043F,
    -0.376348108F, -0.513012F, -3.87577295F, -1.26386F, -8.34706211F,
    0.23006846F, -1.68513036F, 0.0605447553F, 1.33007264F, -0.118450172F,
    -2.46204519F, -3.21074319F, 0.637278914F, -1.71317017F, -4.40264893F,
    -1.4369719F, 0.974095106F, 0.364256144F, -1.53568041F, 0.985462368F,
    0.833858F, -2.48306012F, -2.56187892F, -2.06244469F, -0.70545733F,
    -0.0638401583F, -1.74884701F, -0.836261809F, -0.430147797F, -10.6326094F,
    1.63192773F, -2.72153211F, 1.28565109F, 0.0338092744F, -8.14331913F,
    0.312115788F, 0.810323775F, 0.409893185F, -4.17059326F, -0.776092231F,
    -7.3209486F, -1.64274848F, -1.13151276F, -0.114234231F, 0.312882721F,
    -4.79840326F, -0.807268381F, -7.1080265F, -0.864479244F, -0.0406202041F,
    -0.71768409F, 0.121080428F, -5.04588079F, -1.9523766F, 0.225292265F,
    0.970276475F, -1.31727839F, -1.14294505F, -0.800082445F, -1.21362007F,
    0.77892381F, -7.98728275F, 2.58886695F, -4.09202957F, -3.35832906F,
    -0.121839263F, 0.521332F, 0.613336265F, -4.1921258F, 1.49960363F,
    -1.78561676F, -2.87006092F, 0.233150169F, -3.53246975F, 2.46446347F,
    -2.68026376F, 1.17222703F, 0.178693F, -1.28726864F, -0.177297667F,
    0.0761324465F, -1.97143805F, -0.35161379F, -2.51217723F, -3.17735839F,
    0.812615812F, -2.03905416F, -2.55223584F, -1.11618507F, 0.184379816F,
    -1.10048616F, -0.71379745F, -0.439569265F, -6.91465712F, 0.865327954F,
    -0.194212481F, -0.649980903F, -1.33408546F, -0.0510883108F, -2.73345494F,
    0.398388237F, -1.10296571F, -0.516712725F, -0.2300632F, 1.83665526F,
    -1.37982249F, 0.509105623F, -0.202737287F, -3.47436905F, -0.665872395F,
    -0.470867336F, -3.19696879F, -0.267201394F, -0.805044591F, -0.714565039F,
    2.08887768F, 0.234521657F, -0.652582824F, -0.551380217F, -0.399944216F,
    0.316768885F, -0.467583239F, 1.2731303F, -1.17553759F, 0.0846881643F,
    -0.143593326F, -0.273976386F, -0.495286196F, -0.397318125F, -1.25431025F,
    -0.315151423F, -2.82422709F, -1.28588676F, 1.84375572F, -3.29692817F,
    -1.261127F, -0.621445715F, 2.13137603F, -2.31275082F, 2.29772162F,
    -0.68860203F, 0.602558136F, -1.89690864F, -3.36198187F, -2.11184311F,
    -5.55073F, -4.24839926F, 4.3646431F, -7.61078739F, 2.45850229F, -4.93700171F,
    -3.73718238F, 0.074008815F, -7.37914848F, -1.01127899F, 2.33522916F,
    1.11274862F, -1.93705451F, 0.111818179F, -2.45297861F, 2.73132372F,
    2.5969038F, 0.600145817F, 0.795344F, 0.00251997286F, -0.776968479F,
    -10.8578405F, -3.88650322F, -0.119636849F, -1.82211459F, -10.3299646F,
    -1.25492311F, -6.44623184F, -0.366200596F, -2.10776687F, -3.19286108F,
    -3.83050323F, -3.69669294F, 0.540254831F, 2.54326963F, 0.927058041F,
    0.736805558F, -1.95046425F, -1.98606443F, -1.82581019F, -0.457403749F,
    -0.485192895F, 1.32361722F, -6.34257126F, -0.0993767F, -1.10234869F,
    1.14812779F, -0.193870679F, -6.90577698F, -5.77177525F, 2.57251763F,
    -0.30785954F, 0.22264348F, -0.692025363F, 1.74344099F, 0.108714037F,
    0.641488254F, -3.56740499F, 0.755346775F, -3.62676978F, -3.36500931F,
    0.212415546F, -13.7900124F, 2.70486426F, -7.4549284F, -7.15520239F,
    -1.38423419F, -2.82545638F, 1.39395869F, -5.92436123F, -1.08740866F,
    -1.21649361F, -0.15200673F, 1.66758323F, -0.0156875718F, -0.648878038F,
    -3.82060075F, 0.0942058116F, -0.815898836F, 0.989917F, 0.178373232F,
    -2.35085154F, 1.33656585F, 0.562634647F, -0.59932375F, 0.195640713F,
    -0.309079736F, 0.228852272F, 1.8132304F, 0.110595807F, 0.494987756F,
    -2.40888643F, -0.716847599F, -0.808947F, -0.967782676F, 0.15791446F,
    -0.720568955F, 0.886701345F, 0.017289646F, 1.18711662F, -1.02327597F,
    -0.547551095F, 1.32097304F, 1.92207193F, 0.864151716F, 1.12022507F,
    -6.09008074F, 0.154474348F, -2.23729634F, 0.110986628F, 1.62522352F,
    -0.0593540408F, -1.34274471F, -1.66914678F, -0.208648235F, 0.29831937F,
    0.115669906F, -1.41479862F, -0.577124F, -2.01578116F, 0.0826678574F,
    -1.15553105F, -1.78541315F, -0.34198451F, 0.147212625F, -0.00181418902F,
    -1.2047528F, -1.3205359F, 0.0672266483F, -4.59534788F, -1.15600371F,
    -0.856928F, -2.63322091F, 0.16275458F, -1.37895238F, 1.4501574F, 1.14752412F,
    0.407889336F, -0.231616765F, 2.42889118F, -0.784245789F, 0.0769960061F,
    0.179497182F, -1.47030437F, -0.288017869F, -1.18189502F, -1.00517631F,
    0.103326082F, 0.191255987F, -2.1369741F, -0.156305835F, -0.474919856F,
    -0.955974877F, -1.73941052F, -0.0766121F, 0.184829637F, 0.750097513F,
    -0.74162668F, -3.67731595F, 0.219484538F, -0.223012283F, 0.79181993F,
    -3.19855261F, -0.361708283F, 1.53657579F, -0.201589912F, 0.533181965F,
    -6.69461966F, -0.0211765449F, -0.689270556F, -1.34497249F, -2.76260018F,
    -1.31137705F, -2.36346817F, -1.34097552F, 1.63625813F, 1.04013669F,
    -0.247379035F, -0.616876304F, -0.265322298F, -0.213775828F, 0.828783095F,
    1.906317F, -1.48430455F, 0.0867285505F, 0.868023157F, 0.302165657F,
    -0.292302519F, 1.11275291F, 1.75745821F, -3.19710732F, -0.402752846F,
    -3.06062603F, -0.252633572F, -0.59919405F, -0.729100287F, -0.171060443F,
    0.225738049F, 0.625987828F, 1.61621606F, -0.4123528F, 0.951091766F,
    0.919920385F, -0.957226634F, -1.69651735F, -1.95507884F, -0.0761567131F,
    -1.21485162F, -3.17611599F, 1.38439322F, 1.12124336F, 1.40455306F,
    -0.508223712F, 1.04124796F, 0.70692575F, 1.21928966F, -0.607420266F,
    0.0430417731F, 2.52278233F, -3.41830301F, 1.58132088F, 0.0790519938F,
    0.227759525F, -1.05870652F, -0.773605049F, -0.338280559F, -0.294833273F,
    -1.23830175F, -9.1520977F, 0.365620822F, -0.096202381F, 0.878212571F,
    0.856725216F, 0.190237507F, -6.51402521F, 0.0999647379F, 1.28714752F,
    -3.78174162F, -0.692374766F, -5.27524424F, 1.4003675F, -1.68107927F,
    0.302735448F, 1.41768777F, -6.64417124F, -6.1689024F, -4.3339138F,
    0.114213444F, -0.611476421F, 0.816884637F, -2.69210529F, -0.0439290553F,
    -6.75922108F, 0.272627026F, 0.0254975203F, -0.212468475F, -0.156934142F,
    1.92739189F, 3.28066683F, 1.72937477F, -0.49175638F, -1.5831759F,
    -0.522370458F, -0.837384224F, 1.98332429F, -0.269513488F, -0.77772814F,
    -0.374517977F, -3.62081361F, -1.35717869F, 1.88614643F, -1.40987849F,
    1.27483547F, 0.430421144F, -2.09073639F, -5.92834139F, -3.00875878F,
    -0.256988019F, -13.2867193F, -0.609068036F, -8.01693916F, -2.39646626F,
    0.338509291F, 0.316621095F, 0.682321429F, 0.149115115F, -3.9120357F,
    0.315330863F, 0.726880848F, 1.39635348F, 0.111395583F, 2.220366F,
    0.144463211F, -0.179665834F, -0.738488495F, -0.1092536F, -2.37657547F,
    -0.947185874F, -1.70421314F, 0.158036113F, 0.0872781351F, -0.932067335F,
    -0.390818089F, -0.50468868F, -1.86927867F, -0.0263278149F, -1.14609313F,
    -1.03926122F, -0.266204834F, 1.95003986F, 0.975722671F, -0.966066837F,
    2.21892667F, -1.51348197F, -0.702872396F, 0.717275441F, -0.026443759F,
    -0.38800323F, 0.0263436846F, -0.273328155F, 1.05848825F, 0.521346748F,
    1.64666283F, -0.198640361F, -0.722315431F, 0.107881024F, -0.247258052F,
    -2.28578758F, -0.498741508F, 1.35015094F, -4.23348379F, -0.667195261F,
    -0.598611951F, -0.669273078F, -1.20465994F, -0.642539382F, -3.05686879F,
    -1.71820045F, 0.309733629F, -2.04147291F, -0.331691414F, -0.00659705186F,
    -5.28205442F, 0.327504426F, -1.24317551F, 0.263201088F, 0.266257703F,
    0.291594028F, -0.893500388F, -4.30596685F, 1.04677F, -0.880842388F,
    0.0327533819F, -1.48932445F, -0.268234193F, -0.893671095F, 0.490978777F,
    -0.318206906F, -2.0556531F, 0.437154859F, -0.539099097F, -0.628704F,
    0.680130422F, -0.774807394F, 0.296430498F, -0.257705152F, -0.352647841F,
    -0.184797794F, 2.23113036F, -0.272757679F, -0.0514878F, -6.90247202F,
    -0.908480883F, -0.972393453F, -1.47131836F, -0.537728131F, 0.380417258F,
    2.14855886F, -0.532094836F, 1.16698396F, -2.0958755F, 0.718928933F,
    -1.51236033F, 0.556115508F, -1.11176693F, -1.67879033F, -0.882811129F,
    -0.0269332F, -1.16622937F, -2.05821514F, 1.09786594F, -0.000690058223F,
    -2.74784684F, 1.67307091F, -0.353335649F, -0.914741755F, -0.16531305F,
    1.3520112F, -1.18700063F, -2.77532983F, 2.84376049F, -1.41548383F,
    0.00674179755F, -0.309718609F, -0.436342597F, 0.409214824F, -4.814044F,
    0.914643347F, -0.255374521F, -1.61705172F, -1.57083035F, -0.911401093F,
    -0.125670537F, -1.00535822F, 1.33451033F, 1.08290887F, 0.0309580155F,
    0.0731253F, -6.6953249F, 4.30688095F, 0.208827943F, 1.72773039F,
    0.828780651F, -1.9677037F, 0.433419943F, 0.154596433F, -1.52761757F,
    0.649629772F, 2.50508952F, -0.76729995F, 1.73336077F, -0.558688581F,
    -4.48966694F, 0.409249902F, 1.72506225F, 1.09355F, -1.39791846F,
    -7.42639732F, -0.92080009F, 0.452013701F, -1.0330441F, 0.29300195F,
    0.953909457F, -0.256780148F, -3.04388809F, -0.256462544F, -2.67509389F,
    0.177997053F, -0.471179277F, -0.943121433F, 0.233941913F, 1.17358816F,
    -0.662145078F, -0.886069417F, -9.91419506F, -0.330973893F, -0.176449805F,
    -1.93257749F, 0.875796318F, 0.753684163F, -11.2909117F, -0.113275848F,
    -0.211950317F, 2.6722517F, -0.147307724F, 0.942083955F, -0.468438745F,
    -11.3828306F, 3.10936451F, 1.20586109F, 1.06152225F, -0.148157835F,
    -1.47558892F, -0.604546964F, -2.73852682F, 1.03423929F, 0.368158847F,
    -0.632444084F, -3.96340299F, -7.55386114F, -0.546279132F, -1.445382F,
    0.41325748F, -2.99770355F, -3.14797378F, -2.87823224F, -0.575337827F,
    -1.70599723F, -12.102026F, -4.87000656F, -16.3124733F, 1.46040714F,
    -0.166523024F, -1.65748894F, 1.80290186F, 1.34275329F, -5.22609043F,
    -0.131482512F, -1.38900864F, -0.920863926F, 1.23967099F, 0.496623307F,
    -6.94415569F, -2.01943302F, -1.91508234F, 0.930049598F, -1.36616921F,
    1.08313704F, -0.0670917779F, 0.246612266F, -0.51263839F, 1.37448585F,
    -0.353187501F, -0.443973511F, 1.0100497F, -0.372097194F, 0.797338724F,
    -4.8364625F, -0.652749121F, -1.04164875F, -4.00879812F, -6.87139797F,
    1.36382651F, -2.70012236F, -1.51414466F, -1.17607033F, -1.28343093F,
    -0.944823503F, -0.843639553F, 1.45444226F, 0.726911306F, 0.512199163F,
    -1.15503132F, -4.08267879F, -0.567085266F, 0.334097624F, 0.390827507F,
    -0.142003536F, 0.611364722F, -4.62592888F, -0.666399956F, -0.31152457F,
    -2.84715486F, -0.281107485F, 0.235608816F, -1.47681355F, 1.17196858F,
    -4.5201211F, 0.401631176F, -0.180188924F, -7.69224358F, -4.43576574F,
    -4.92815685F, 0.246198922F, -4.32843304F, -3.57852864F, 1.15315926F,
    0.982155859F, -0.862132192F, 0.954526365F, 0.499320716F, 1.84294176F,
    -0.480106652F, 0.746334612F, -0.519850373F, -1.44842815F, -0.217015177F,
    0.525641203F, -1.15720093F, 1.86723232F, -1.1502955F, 1.3321135F,
    0.387969524F, 0.165865734F, 0.545060694F, -0.417987078F, 0.398720682F,
    -0.728534758F, -1.25416899F, -0.888431072F, 0.0288706459F, -1.91547275F,
    -0.514186144F, -0.219455838F, -1.83944249F, 0.0405336358F, -1.39164662F,
    -0.00768239F, -0.692349732F, 1.58022118F, -1.73932111F, -0.232043058F,
    -0.879049361F, -1.86016715F, -1.51521993F, 0.34049648F, 1.32871449F,
    -0.315809101F, -1.21262264F, -0.335318208F, 0.375652343F, 0.48914656F,
    0.530359566F, 1.56024671F, -0.411881685F, -0.23362866F, -0.180302754F,
    0.761676311F, 0.638807237F, -1.78843105F, -3.22091126F, -0.362192F,
    -0.570109725F, -0.140184462F, -0.893250465F, -0.989070833F, -2.29832244F,
    1.01131332F, 2.10476565F, 0.50118041F, -1.32490504F, -0.992367089F,
    -0.356865704F, -0.267314851F, 2.79675722F, 2.06804299F, -0.126016244F,
    -1.40366411F, 0.394786894F, -1.16069233F, 1.90666759F, -0.175833523F,
    -0.102145784F, 1.64871502F, -0.0550430082F, -0.728836417F, -2.23611116F,
    0.392649293F, 1.97179937F, 1.56499124F, -0.0925436169F, 0.362079978F,
    1.05634868F, -0.795980573F, 0.525105357F, 0.600006163F, -4.80522156F,
    -3.69754F, 0.989485443F, -0.0696381852F, 0.442761064F, -4.43607092F,
    0.50458777F, -0.233393267F, 2.0237143F, 0.293044418F, -0.270951927F,
    0.641646385F, -0.746867657F, -4.242F, 1.81546772F, 1.52985644F, 1.45173419F,
    1.72536397F, 1.33295524F, -1.21479094F, -3.02776098F, 0.013889364F,
    -0.566509545F, 1.26307964F, -2.23238015F, -0.446929723F, -3.23714519F,
    0.808325112F, -0.214731902F, 0.105131894F, 0.180309296F, -4.24601698F,
    2.22509289F, -0.0303587187F, -1.30164397F, -0.213440761F, -0.388114333F,
    0.118941255F, -3.54520607F, 0.460432976F, -7.06681156F, 0.891188323F,
    -3.8496244F, -2.06221199F, 1.1204474F, 0.84373641F, 1.09302104F,
    -0.158985287F, -0.479939222F, -1.73449707F, -0.219427511F, 0.663764119F,
    0.945035815F, -0.543141842F, -4.54228735F, -0.0589065887F, 0.548592031F,
    -0.963335931F, 0.279643446F, -5.41029692F, -1.50365877F, -0.255958736F,
    -1.69769669F, 0.154579639F, -0.0250743702F, 0.392288923F, 1.34299159F,
    -0.541257143F, 0.259206F, 0.345953584F, -0.944429278F, -0.965684414F,
    0.259729117F, -0.364437312F, -0.00467983121F, -5.75852251F, -2.09975958F,
    -0.361297071F, -2.77343369F, -1.28953063F, -2.31505346F, -7.74561882F,
    -0.221409187F, 2.76643848F, -3.92817569F, -1.46799994F, 1.09203959F,
    1.11075044F, 1.25334048F, -2.65515685F, -0.79068172F, 0.219594792F,
    -1.09912157F, -1.98252201F, 2.33932185F, -0.2274106F, -1.45594144F,
    -4.41815615F, 0.00388381467F, -2.99711752F, 0.457377851F, -1.77930248F,
    -4.67818499F, -9.53895473F, 0.839732766F, 0.242865577F, 0.729940593F,
    -0.331344694F, -1.2744354F, 0.772390842F, -2.55196261F, -6.26385069F,
    0.222623318F, -1.41318154F, -1.54510558F, -0.340399235F, -6.25079727F,
    1.15752625F, -0.140961587F, 1.51474059F, -0.281044513F, 0.378322333F,
    1.67650068F, -0.879819155F, -0.488090307F, 0.000807152712F, -0.39362F,
    2.11194682F, -0.966730297F, -3.01172519F, 0.720542848F, 0.356679916F,
    -0.656566799F, -2.05688238F, -1.43017817F, 1.62347782F, -0.872530639F,
    -2.15312457F, 0.160373688F, 0.526276648F, 0.278792173F, 1.8282851F,
    -3.51352715F, 0.0798628926F, -0.213178113F, 0.0286243297F, -1.39447403F,
    -0.584182739F, -2.40302801F, 0.152357802F, -0.39539057F, -1.3915087F,
    -0.749567926F, -2.80110717F, 1.69077671F, 0.80127883F, -1.38230824F,
    -5.12855244F, -7.30671F, -3.24881029F, -1.49018F, -0.267286092F,
    -0.898591459F, 0.103000276F, -0.801076591F, -0.167281464F, -1.39538515F,
    -0.85147655F, -0.241043791F, 0.517076135F, 0.0940890536F, 3.58022F,
    -3.40265036F, -1.3118192F, -0.362403601F, -1.77020216F, -3.12067986F,
    -0.51769F, -6.98004675F, -0.0743865818F, -5.25150585F, -0.525472879F,
    0.800595164F, -1.72259045F, -4.67935181F, 0.977791548F, -0.454355329F,
    -1.08572304F, 0.837554F, 2.24351215F, -2.54200959F, -1.88113821F,
    -2.48040414F, 0.171636045F, 1.88389611F, -1.5281204F, -0.371841758F,
    -0.21469754F, 0.426186174F, 1.01979256F, -3.52624846F, -0.362149209F,
    0.649827242F, 0.928603768F, -0.557666898F, -2.66043115F, -4.48111582F,
    -0.607105792F, 0.0431105271F, 0.000422376324F, -8.71328831F, -2.09526753F,
    0.79811883F, -0.00489136809F, 0.214263678F, 0.123580575F, -0.552224874F,
    0.0230350923F, -3.72739148F, 0.104070544F, 0.40839678F, 1.66799676F,
    -0.92044878F, 0.409052193F, -2.07368207F, 0.885874689F, -1.32495034F,
    -5.66868305F, 0.176786274F, -0.493590891F, -1.54093015F, 0.115351394F,
    -1.844558F, -0.535916746F, 1.38475513F, 0.0814915746F, 0.838517427F,
    -3.50835061F, 0.0280954428F, -0.805279315F, -0.294780314F, 0.893407345F,
    0.290249467F, -1.90669298F, 2.00044274F, -0.346941322F, -2.18965173F,
    -0.295897F, -0.896213531F, -0.0421618782F, 1.05966711F, 1.40285599F,
    3.05378771F, -1.33466971F, 0.5052616F, -1.28629148F, 0.212001011F,
    -1.3676554F, 1.41366744F, 1.88138831F, -0.856875539F, -2.93042803F,
    -8.33732891F, 1.10088778F, 0.880902946F, 0.892046571F, -0.0120883705F,
    -0.690743148F, -0.248431116F, -2.09461641F, 1.23626149F, 0.334455758F,
    -2.19165587F, -5.31546F, -0.291303366F, -5.04385567F, -1.3020252F,
    -0.334184527F, 1.04417324F, 0.0375758559F, 0.231518105F, 0.275693804F,
    -2.20317674F, 0.288420975F, -0.130504787F, -2.84144187F, -0.384855568F,
    -0.800136387F, -3.90523171F, 0.109079033F, 1.08577323F, -2.17444849F,
    -0.661338747F, 0.54066366F, -1.83773148F, -1.09556115F, -5.00725222F,
    0.25475648F, 1.44826567F, -0.978209138F, -2.60801697F, -0.331599921F,
    -3.89215302F, -0.387097478F, -0.282835335F, -0.220419452F, -5.91004562F,
    1.14180136F, -0.516306937F, -0.141279832F, 0.269966602F, -0.621870279F,
    -0.717099845F, -3.56934357F, -1.8300097F, -0.132767394F, -1.14060712F,
    -0.633696795F, 0.324467F, -0.601855338F, -1.43689764F, 1.68630075F,
    1.13237107F, 0.190120488F, -4.47109175F, -0.0777270272F, 0.326003F,
    0.851443887F, 1.55500102F, 1.9134165F, 0.508364439F, -0.260597318F,
    -1.52090204F, 0.199269712F, -3.10997152F, -0.197425455F, -0.0660874844F,
    1.32326126F, -1.13476455F, -2.33789802F, -3.21322107F, -0.113573954F,
    -3.53337693F, -10.2583036F, -1.44822729F, 0.850444853F, -0.642904401F,
    -0.0909619927F, 1.40709352F, -0.406480551F, -2.53010249F, 1.41930807F,
    -0.851390243F, -0.310852528F, 0.352464616F, -9.74723244F, -0.544501126F,
    -0.369460374F, -2.4593761F, -0.115796864F, -2.93226552F, -8.25717831F,
    -0.23744452F, -2.34598041F, -1.71449542F, -1.37118864F, -3.09363079F,
    -0.708111048F, -1.38078892F, -0.167288527F, 0.108033061F, 0.132170945F,
    -2.31956363F, -1.28593194F, 0.224343523F, 0.634516597F, 1.02130008F,
    -0.143472508F, -0.276488632F, -1.88105178F, -0.455629885F, -0.313622534F,
    -1.53281844F, 0.203761607F, -2.06750512F, -1.04536676F, -1.18350554F,
    -0.418104738F, -2.76789284F, 0.0193343535F, -4.08104F, 0.57242924F,
    1.30880082F, -1.14828634F, -2.51212287F, -1.0491221F, -2.2775979F,
    -0.610048592F, -1.48791099F, -2.04410839F, 1.57656384F, -0.20528847F,
    -1.17983413F, -2.63384652F, -1.75067234F, 0.059312176F, -1.01659977F,
    -3.26886821F, -0.246240392F, -0.20016332F, -11.324995F, -0.189923421F,
    -0.545570672F, -1.23203182F, -0.098992914F, -2.87804031F, 1.38861477F,
    -1.76145101F, 0.419522434F, -0.799590111F, -0.62930721F, -4.7815609F,
    -9.26724815F, 0.382542163F, 0.193092197F, -0.0445068479F, -0.794303656F,
    -0.440089732F, 0.441803724F, 0.0912188888F, 1.52508557F, 1.43548751F,
    -0.630253F, 0.95047605F, 0.494058549F, -2.10736465F, 0.301096231F,
    2.55901885F, -5.29872036F, -1.2867409F, -0.118379258F, 0.616997242F,
    -0.522405386F, 0.227036849F, -2.02653933F, -0.439232767F, -4.44218969F,
    -2.98333549F, -0.320398182F, -0.636020958F, -1.21813452F, -1.58971334F,
    0.195605889F, -2.13716459F, -1.49593401F, 0.0818112791F, -3.57629132F,
    -0.637353778F, 1.65709019F, 0.779195249F, -2.06515503F, -2.07891178F,
    -5.09578F, 0.322667837F, -1.88371634F, -0.660588503F, -1.81185937F,
    -2.46566057F, 1.53193879F, 1.91590273F, -0.923915565F, -2.70358276F,
    -2.07612467F, 0.328477174F, 0.872598231F, 0.0897728726F, 0.263142943F,
    1.4373225F, -0.986156523F, -3.87868118F, -0.180477411F, 0.0286509115F,
    -0.589630246F, -0.728349328F, -0.510359F, 0.884183288F, 0.465239525F,
    -0.562099159F, -1.85391879F, 0.877355874F, 0.525718629F, 0.832812846F,
    -1.37506723F, -0.991283F, -0.170408279F, -2.1060586F, -2.19872427F,
    -0.404534668F, -2.53094506F, -0.490570843F, -0.373988181F, -9.51179886F,
    -0.268502831F, -0.566780031F, -5.01195526F, -0.295738727F, -8.19007301F,
    0.314652652F, 1.79316318F, 0.573977649F, -1.14299822F, -0.104839422F,
    -3.35124922F, -1.54335523F, 2.4753232F, -0.0186186545F, -0.617379427F,
    -2.73665977F, -0.233585432F, -1.4973073F, 0.551153123F, 1.3760246F,
    -3.16435933F, -9.63324356F, -1.17614007F, -1.12689757F, 0.520100772F,
    0.0144636091F, -0.644090474F, 0.00915268436F, -2.75858641F, 1.10874355F,
    0.851646185F, -2.24137449F, -3.73483658F, -0.305939347F, 3.03142738F,
    -0.440892816F, -1.93182957F, 0.541710794F, 0.475847304F, 2.34493828F,
    0.240730897F, 1.25011015F, -2.04155421F, -0.322353572F, 0.154883981F,
    1.90068686F, -0.484440595F, 0.872973263F, 0.610813737F, 0.39448753F,
    -0.252768576F, -1.5299381F, -0.576975524F, 2.47374415F, -0.806061268F,
    -0.805225968F, -0.734900177F, 0.00416910322F, -4.0594573F, 1.17779F,
    0.469854444F, -0.136215806F, 0.167229325F, -0.475748062F, -1.48026443F,
    -0.113259383F, 1.30341744F, -0.540031314F, -1.06708062F, -4.17874241F,
    -0.37467584F, -0.783910871F, 1.94020903F, -5.87243605F, 0.647072852F,
    -0.263553917F, -0.431538492F, -1.94252288F, -1.50637782F, 0.0687884092F,
    -0.309174716F, 1.368361F, 0.403953F, 0.744048774F, 1.93505907F, -2.89566231F,
    -0.270088673F, 0.0404728837F, -0.16818893F, 2.15107203F, -2.02407551F,
    1.86920357F, -4.38540125F, -0.405393332F, -1.22935748F, -1.37987769F,
    -1.67735779F, -1.03427219F, 0.471491456F, -0.758051276F, -2.56421638F,
    1.23327649F, 0.768862963F, 0.0454941653F, -1.8638047F, -0.282198787F,
    -0.861754656F, -0.983014822F, -1.62988031F, 0.751117766F, -5.02544F,
    -2.40491748F, -3.43823814F, -0.897598624F, 0.408517331F, 1.35142303F,
    -0.967376828F, -2.30846334F, -2.04845119F, -0.0473545119F, -4.41360378F,
    -4.89576817F, -1.44223022F, -4.11503649F, 1.97557294F, -1.86099172F,
    1.0934149F, 0.646503747F, -0.672594666F, 1.83994579F, 0.741916F,
    -0.29415831F, 0.39106214F, -3.55095363F, -0.649591804F, -0.0525062755F,
    -4.52114916F, -0.787759602F, -1.79146838F, -7.89656782F, -0.53379178F,
    -1.98124278F, -4.86881924F, -3.84514427F, 0.580920219F, 1.06499064F,
    -0.0200938601F, -2.828794F, -3.0132916F, 0.275587052F, -3.05178308F,
    -0.081453748F, -0.00943349F, -0.206187636F, -1.00411296F, -0.533488274F,
    -0.415059835F, -1.64930701F, 0.415069252F, 0.958499789F, -1.6046499F,
    -1.51227093F, -3.50048852F, -0.76250869F, -1.66700459F, -0.212414131F,
    -3.04309225F, -0.0814803168F, -3.87986493F, 1.43540764F, -0.0365054049F,
    -1.90239918F, -3.60446596F, -1.89307463F, 0.11052195F, -0.93710047F,
    -5.78000927F, 2.96390271F, -2.77574635F, -10.2387695F, -0.103996545F,
    4.0942688F, -2.86152124F, -1.20419168F, -0.460943133F, 1.38251233F,
    0.146966F, -0.582539082F, -0.70117265F, -0.861427665F, -0.113976724F,
    3.17468572F, 1.00848794F, 1.36920679F, 0.105488971F, -0.62599051F,
    -0.795651197F, -0.303776711F, -2.36808419F, 0.807666361F, -2.01283145F,
    0.611948F, 0.419292182F, -0.460161626F, -2.53652954F, 0.037914753F,
    -1.2964592F, -0.104275599F, 0.923339546F, -3.41505718F, -1.23753953F,
    1.08831453F, -2.22829914F, 0.189851552F, 0.392316639F, -4.45979261F,
    -1.29344177F, -2.61087537F, -0.475091F, 0.687702417F, -2.05984116F,
    -0.901165724F, 1.0380075F, -0.590054929F, -7.99516392F, -0.00510942F,
    -0.300622016F, -0.555825651F, -1.0010761F, -1.89489627F, -0.127328157F,
    1.58854091F, -4.01828909F, -0.523048162F, -0.388675123F, -0.256770462F,
    2.58654284F, 0.969928741F, -0.974507093F, -1.93577325F, -1.1749531F,
    0.434705943F, -2.4014883F, 0.022261478F, -3.16971302F, -1.41569507F,
    1.55913138F, -0.694973826F, -6.9023385F, -3.14359617F, -3.74854636F,
    -1.67025852F, 0.926649034F, 1.26634955F, 0.314727217F, -1.77890694F,
    0.14348945F, 1.81730986F, 2.09156919F, -0.0256083012F, 3.55315614F,
    -2.44244099F, 1.07855678F, 0.213155821F, -3.56639338F, -1.30197883F,
    0.115669645F, 0.117281713F, 0.544420719F, 0.424301505F, -3.90446806F,
    -0.211091056F, -1.18153691F, 1.74187708F, -0.205498502F, -0.108557791F,
    0.798597634F, -0.0239486098F, 2.41293931F, -0.329564601F, -1.04322684F,
    -3.51524782F, -0.969686091F, 0.0423131846F, -2.05429029F, -6.69408941F,
    -2.74498558F, -0.626728237F, 1.71857238F, 0.106656194F, -0.526649773F,
    0.325637221F, -2.50231123F, 0.2417707F, -2.72238946F, 1.38657618F,
    0.0187492F, 0.341522068F, -0.329764336F, 2.45149279F, 2.02922797F,
    0.630008936F, 0.72587055F, 0.162442386F, -4.33971262F, -1.71844184F,
    -0.199584261F, 0.0914127231F, -0.165905342F, 0.116634905F, -5.51081419F,
    -0.84643352F, 0.36008808F, -0.282335579F, 1.37857401F, -3.09654784F,
    -0.313321859F, -4.61388F, -1.83084249F, -2.25372076F, -2.64358497F,
    -1.93347263F, 1.61689305F, 0.120635651F, -0.291050822F, -1.6313138F,
    0.153425202F, 0.687029123F, 0.050491523F, 0.375333726F, 1.75079191F,
    -2.20012879F, 1.28937399F, -2.30801535F, 1.26937354F, -1.14275503F,
    0.241750121F, 0.359897643F, -7.5101881F, -1.18270993F, -5.98100853F,
    0.497231334F, -0.464577675F, 1.85292637F, -1.14408696F, -0.420850486F,
    1.75866258F, 0.343396187F, 0.70599854F, -1.64372528F, 0.353810102F,
    -2.40968156F, -0.850319326F, 0.163355857F, -3.96196485F, 2.33740067F,
    0.33809945F, -4.81903219F, 0.94491446F, 0.375844657F, -0.336356163F,
    1.00073802F, -4.5150609F, -0.458066672F, -13.8175497F, 0.520404458F,
    -0.00433071F, -0.0604492687F, 0.0778945535F, -0.377447248F, -0.813179493F,
    0.925896108F, 0.377777874F, 0.274808228F, -0.518063128F, -0.551708F,
    0.346678436F, 0.496285081F, 1.22008801F, 1.19916117F, -4.115417F,
    1.17933846F, -0.0584629439F, 1.95264256F, 1.68565476F, -0.470753402F,
    -1.49348676F, -3.08503723F, -1.18980455F, 0.979870141F, 1.94581628F };

  static const real32_T c[70] = { 0.567360163F, 1.10541534F, -5.83212185F,
    -2.28251123F, -2.53886843F, -2.88471031F, -7.57448626F, -0.957746923F,
    -4.13842916F, -1.51253104F, 0.376624614F, -13.5207605F, 1.07419896F,
    -2.73620439F, -1.04439867F, -11.5191212F, -12.206728F, -2.88475728F,
    -5.2391119F, 0.944110334F, -3.01598454F, 3.86771393F, -3.03584385F,
    -2.64904594F, -0.638983428F, -2.94009328F, -4.67546129F, -1.92096937F,
    0.530676901F, -0.412931591F, -1.96484137F, -3.64617443F, -2.20699F,
    1.03482187F, -1.29782009F, -2.80641055F, -0.581031501F, 1.38806212F,
    8.84835F, -0.805025876F, -12.0844793F, -1.02151906F, -0.0322732702F,
    -1.00647366F, -5.68445921F, -0.562073529F, -1.44982529F, -1.20459497F,
    -3.48988533F, -5.27656746F, -2.43701124F, 0.669958949F, -0.327422142F,
    -1.84394848F, -0.811333835F, -2.25018096F, 1.53335333F, 0.72250253F,
    -7.25813F, -2.97703862F, 0.642756701F, -0.952064216F, -4.27074957F,
    -0.84210515F, -1.65909731F, -3.18009472F, -1.50623691F, -4.16948128F,
    -1.92636371F, -3.51530528F };

  static const real32_T tmp_2[4900] = { -0.706155062F, -0.537974536F,
    -0.156268552F, -0.271117449F, -0.216241777F, -1.00767946F, -0.252159476F,
    -1.11386251F, 0.0192055851F, 0.0280597862F, -1.25899673F, -0.0537129F,
    -0.248249561F, -0.208308101F, -0.3830055F, -1.27194202F, -0.00128001045F,
    0.0461776555F, -0.567575395F, -0.1272012F, -1.43897879F, -0.200551659F,
    -0.108328149F, -0.611833F, -0.162677556F, -0.463667393F, -0.0789272487F,
    -0.152145F, -0.0730910078F, 0.0140794488F, 0.00176215929F, -0.101717971F,
    0.135513872F, -0.169170275F, -0.360544384F, -0.260516673F, -0.477497935F,
    0.0112003423F, -0.538107216F, 0.0321732312F, -0.155511752F, -0.0438187383F,
    -0.180553734F, -0.166606843F, -0.713361681F, -1.63802803F, 0.028290946F,
    -0.376257479F, -2.09470177F, -0.883373618F, -0.0668173879F, -0.396488219F,
    -0.21854341F, -0.0145957926F, -0.471486568F, -0.016205363F, -0.38725847F,
    -0.670718074F, -0.0451432802F, -0.239041522F, -0.227612063F, -1.16846645F,
    -0.131624356F, -0.526859164F, -0.269859076F, -0.0553506874F, -0.282571018F,
    -0.134067252F, -0.238026127F, -0.206406459F, -0.17383863F, -0.614179F,
    -0.519117117F, -2.03492188F, -0.199864417F, -1.20426309F, 0.0198193584F,
    0.14129442F, -0.16077964F, -0.342447847F, -2.17158961F, -0.352847248F,
    -0.352252334F, -0.243064523F, -0.578970492F, -0.612329185F, -0.0875993147F,
    -1.78155601F, -1.22608125F, -0.0366167687F, 0.155054539F, -1.19992125F,
    -0.093649976F, -0.945110202F, 0.264784932F, -0.62236923F, -0.886815786F,
    0.0728736371F, -0.62374121F, 0.0268672258F, -1.16552258F, 0.0523033328F,
    -0.666381121F, -0.237500027F, 0.15747121F, -0.505691F, -1.58637857F,
    0.0489200279F, -0.290142149F, -0.351022243F, -0.157302469F, 0.0239267219F,
    -1.53548241F, -0.074951455F, 0.0244916137F, -0.198356986F, -0.672575F,
    -0.113542773F, 0.0189877544F, -1.34746516F, -0.0227655414F, -1.18846393F,
    -0.816434145F, 0.0075344569F, -0.382812232F, 0.013111352F, -0.265691489F,
    -0.16435881F, -0.0250448938F, -0.163149536F, -0.0889822543F, -0.061100781F,
    -0.435223609F, -0.393794F, -0.631342113F, -0.101349317F, 0.0163307507F,
    -0.296681225F, -0.741614759F, 0.0501490273F, -0.086965479F, -0.346958667F,
    -0.13977927F, -0.554555357F, -0.218404338F, -0.998686969F, -0.413299233F,
    -0.214877263F, -0.110422969F, -0.98378849F, -0.533443451F, -0.449665129F,
    -0.194081336F, -0.314079225F, -0.974633455F, -0.278744936F, -0.707038164F,
    -0.0287774354F, -0.250237167F, -0.229401F, -0.793069482F, -0.384834886F,
    -0.238077447F, -0.923937678F, -0.168974757F, -0.0818260685F, -0.798213065F,
    -0.118927956F, -0.174049258F, 0.0664310828F, -0.181767106F, -0.539977F,
    -0.924972594F, -0.146851867F, -0.347122222F, -0.252005488F, -0.0372634269F,
    -0.128394172F, -0.26309979F, -0.0248665847F, -0.308724284F, -0.134125546F,
    -1.01357543F, -0.0958628133F, -0.636518478F, -1.248649F, -0.268104911F,
    -0.335418046F, -0.128537714F, -0.508216143F, 0.0351623F, -0.0219061673F,
    -0.556352854F, -0.130250379F, -0.757084429F, 0.0119272936F, -0.00806770194F,
    -0.127592489F, -0.100475617F, -0.263800204F, -0.347199202F, -0.130355403F,
    -0.326620072F, -0.965861559F, -0.338783175F, -0.0827749521F, -0.283075422F,
    -0.037949279F, -0.43869859F, -0.192815244F, 0.336292028F, -0.00643246761F,
    -0.31806007F, -0.0528571866F, -0.101062842F, -0.203864798F, -0.592263103F,
    0.010830597F, -0.0711431131F, -0.699227512F, -1.5920378F, 0.0223879199F,
    -0.183710635F, -0.702242494F, -0.830780566F, -1.3335799F, -0.322401226F,
    0.393288463F, -0.975783646F, -0.0955457538F, -0.195743233F, -0.499396175F,
    -0.301816911F, 0.128956795F, -0.449947715F, -0.118792742F, -0.224806845F,
    -0.0872141197F, -0.170792058F, -0.111203589F, -0.162205324F, -0.662968278F,
    -0.807790577F, -0.265998602F, -0.37940833F, -0.148470536F, -0.146678627F,
    -6.02659082F, -0.336166292F, 0.297724307F, -0.13923189F, 0.0393669792F,
    -1.3000071F, 0.0428668596F, -0.105773434F, -0.300458699F, -0.379303157F,
    -0.10631714F, 0.41124177F, -0.252234221F, 0.354553759F, -0.521548748F,
    -0.35042569F, 0.109803F, -0.165352389F, -0.0661872476F, -0.159236237F,
    -0.371159106F, 0.12045633F, -0.324344367F, -0.073250249F, -0.0192108527F,
    -0.273370802F, -0.177581072F, -0.322998703F, -0.0192308929F, -0.237059444F,
    -1.27595103F, -0.237174824F, -0.238241047F, -0.797630966F, -0.417387128F,
    -0.22256422F, 0.0526515394F, -0.417464405F, -2.22356939F, -0.177618623F,
    -0.648584783F, -0.848951876F, -0.702871263F, -0.0224300511F, -0.504438818F,
    -0.383618832F, -1.34290469F, -1.08779311F, -0.804742217F, -0.332568973F,
    0.0198282544F, -0.489128411F, -0.767309964F, -0.0774931908F, -0.402657866F,
    -0.0195675436F, 0.00684423465F, -0.0883931518F, -0.189757153F, -0.706478834F,
    0.0205959678F, -0.241418704F, -0.960974276F, -0.314503103F, -0.1081293F,
    -0.451228976F, -0.537272513F, -0.0355260484F, -0.457649171F, -0.0267437547F,
    -1.68064821F, -0.120532438F, -0.0174341612F, -0.223592445F, -0.994266F,
    -0.564494848F, -0.23922497F, -0.267252028F, -0.648937106F, -0.236457661F,
    -0.133132517F, 0.0212334599F, -0.499614954F, -1.20595586F, -0.222375587F,
    -0.279465258F, -2.07281613F, -0.839957833F, 0.00713365898F, -0.641337514F,
    -0.199171886F, -0.73582226F, -0.0408567749F, 0.0216437988F, -0.0138299605F,
    -0.0934122428F, -0.120917261F, -0.0668754652F, -0.929742694F, -0.859701F,
    -1.46827948F, -0.235013247F, -0.39432767F, 0.267985731F, -0.268852115F,
    -0.143752307F, 0.354050666F, -0.365248442F, -0.117916495F, -0.422291607F,
    -0.462707907F, -0.430142552F, -0.709047377F, 0.0885775462F, -0.000451542903F,
    -0.381237894F, -0.0079468647F, -1.40959299F, 0.0128722843F, -0.978006661F,
    -0.199686453F, -1.70467556F, -0.239361539F, -0.0782630667F, -0.634312809F,
    0.0513974428F, -0.366189361F, -0.487080872F, -0.2299335F, -0.307395F,
    -0.602413654F, -0.147992432F, -0.0934546664F, -0.299145937F, -0.998735428F,
    -0.93675679F, -0.161385253F, -0.149476111F, -0.335948497F, -0.651982307F,
    -3.91787601F, -0.856977105F, 0.437875748F, -0.200471014F, -0.674084723F,
    -1.82187986F, -0.499611557F, -0.743545F, -0.281512618F, -0.234015688F,
    -1.24607992F, 0.208377346F, -0.0166295432F, 0.215413257F, -0.742309928F,
    -0.57594192F, -0.0985463038F, -0.377294809F, 0.405651599F, -0.536949515F,
    -0.581227839F, -0.363452107F, -0.232724562F, -0.0991090164F, -0.031986855F,
    -0.571475F, -0.287408F, -0.213427454F, -0.147034392F, -0.332334191F,
    -0.222351208F, -0.445092559F, -0.22727485F, -0.579113543F, -0.382017285F,
    -0.149114758F, -0.00475488976F, -0.244409472F, -0.72555536F, -0.0468379818F,
    -1.13069069F, -0.270574301F, -0.28569904F, -0.0463629253F, -0.841039538F,
    -0.534701049F, -0.553905129F, -0.538506806F, -0.338792235F, -0.355778396F,
    0.0630537048F, -0.579370141F, -0.623308122F, -0.615933657F, -0.409848928F,
    -0.31918171F, -0.514257491F, -0.325470448F, -0.00339627196F, -0.746229112F,
    0.00610940251F, -0.255543381F, 0.00527149206F, -0.44200322F, -0.0624543056F,
    -0.404887706F, -0.700438499F, -0.333654225F, -0.356467247F, -0.449899971F,
    -0.657949746F, -0.812044203F, -0.436761469F, -0.297564864F, -0.587118685F,
    -0.458407402F, -0.443422467F, -0.253698677F, -0.808880031F, -0.417836785F,
    -1.30465388F, 0.00684589241F, -1.11286104F, -0.322959274F, -1.18870986F,
    -0.933186233F, -1.97630799F, -0.452882379F, 0.0255390722F, -0.284873605F,
    -0.952241063F, -1.18875349F, -0.614596486F, -0.34323284F, -1.10326993F,
    -0.222329244F, -0.709289789F, -0.240885198F, -0.696178F, -0.396686554F,
    -0.313184559F, -0.360934198F, -0.0271594618F, -2.18439269F, -0.865094602F,
    -0.762283921F, -1.58656383F, -0.102230646F, -1.35972285F, -0.907109857F,
    -1.18107307F, -0.533496737F, -0.372154385F, -0.67173022F, -0.158422053F,
    -0.369345635F, -0.603328049F, -0.506336689F, -1.10359609F, -0.338299453F,
    -0.0117731467F, -0.803477168F, 0.117846526F, -1.08424187F, 0.0358029827F,
    -0.216536596F, -0.315682381F, -0.449233949F, -0.0390331186F, -0.486017466F,
    -0.529764354F, -0.315986156F, -0.00488924282F, -0.364160895F, -0.257558882F,
    -0.246012866F, -0.680962503F, -0.411490023F, 0.0649958774F, -0.678832114F,
    0.0393017158F, -1.04121828F, -0.0101541113F, 0.0545234233F, -0.380174398F,
    -1.1077491F, -0.579093277F, -1.01022124F, -0.311955631F, -0.952641F,
    -1.0843389F, -1.05411696F, -0.923705459F, -0.0228342135F, -0.683208108F,
    -0.577956736F, -0.0593011F, -0.198709443F, 0.0173257831F, -0.172239855F,
    -0.280478448F, -0.673615813F, -0.235162228F, -0.0785526F, -0.580756307F,
    -0.113891736F, -0.0578991659F, -0.111176334F, -0.810055077F, -0.353442609F,
    -0.324454874F, -0.283703834F, -0.645993412F, -2.29169798F, -1.11967134F,
    -0.310703456F, 0.526795328F, -0.332565606F, -3.65534377F, -0.23424983F,
    -2.79505062F, -0.314738363F, -0.527393639F, 0.445485979F, -0.372267932F,
    -0.476503044F, -0.0522104651F, -0.0566927902F, -0.0348540284F, 0.127008349F,
    -0.158340558F, -0.003094916F, -0.463967025F, 0.124244951F, -0.414540291F,
    -0.897652745F, -0.0567735918F, -0.610568821F, -0.533253789F, -0.463761777F,
    -0.771240652F, -0.778405547F, 0.23645322F, -0.76858151F, -0.688576818F,
    -0.983408213F, -0.526514411F, -0.82566452F, -0.301370203F, -0.172814459F,
    0.362549663F, -1.03532279F, -0.113366149F, -0.265980542F, -0.481392413F,
    -0.0482187234F, -0.521182299F, -0.251114577F, -0.427742541F, -0.32895264F,
    -1.09747422F, -0.117573477F, -0.0060414006F, 0.336230487F, -0.500810504F,
    -0.369136661F, -0.101530179F, 0.0514575206F, -0.0633616894F, -0.37943846F,
    -1.04750311F, -0.482077092F, -0.181310847F, -0.746259212F, -0.179260686F,
    -0.360874385F, -0.905346692F, -0.235939935F, -0.493597239F, -0.128491253F,
    0.0816488117F, -0.476697147F, -0.589761555F, -0.86644423F, -0.339725792F,
    -0.105216727F, 0.0302559268F, -0.102908872F, -0.459484339F, -0.273455739F,
    -0.207886815F, -0.125892103F, -0.0595980361F, -0.0408910476F, -0.719710886F,
    -0.290213287F, -0.0485802852F, 0.1089129F, -0.0390238166F, -0.194125712F,
    0.0810214579F, 0.143335268F, -0.289520115F, -0.368799299F, -0.968674719F,
    0.00315381493F, -0.202446848F, 0.0333323106F, -0.214887396F, -0.0832343921F,
    -0.619486F, -0.500452757F, -0.0821219161F, -0.574059248F, 0.00216016F,
    -0.314018041F, -0.0532160103F, 0.0284913909F, -0.122849621F, -0.525631547F,
    -0.472696483F, -0.0296191499F, -0.00790604763F, -0.225169957F, 0.0048323F,
    0.0195908397F, -0.0144611895F, -0.468348861F, -0.266750276F, -0.450795889F,
    -0.408848047F, -0.00815081876F, -0.29891175F, -0.408905029F, -0.23224467F,
    -0.157776982F, -0.59114176F, -0.0815149099F, 0.000381720078F, 0.10654559F,
    0.183643222F, -0.340455681F, -0.31606698F, -0.129353419F, -0.493122578F,
    -0.309547633F, -0.145431012F, -0.266374856F, -0.157394379F, -0.248176783F,
    -0.0105748363F, -0.318831056F, -0.206468344F, -0.578756213F, -0.438150555F,
    -0.0832552314F, -0.0146085862F, 0.00769080361F, -0.931625068F, 0.13985765F,
    -0.78455013F, -0.205609396F, -0.342084855F, -0.711742699F, -0.22789517F,
    -0.315380812F, -1.1764245F, 0.458702087F, -0.033000607F, 0.205137432F,
    -0.88285476F, -0.0199570823F, -0.170387462F, -0.47792545F, -0.0550763F,
    0.033224564F, 0.245503902F, -0.301913887F, 0.0241921917F, -0.0818311051F,
    -0.439229608F, -1.28466523F, -2.15797043F, -0.69588989F, -0.0549852625F,
    -0.894338369F, -0.102474369F, -0.186232612F, -0.184345365F, -0.468293726F,
    -0.0281292498F, -0.252933651F, 0.000276319624F, -0.0642746612F,
    -0.163584188F, -0.039138183F, 0.0538479835F, -0.349462569F, -0.69200176F,
    0.201121256F, 0.014223706F, -0.807099581F, -0.221139058F, 0.0462891683F,
    -0.439202607F, -0.192292303F, 0.0457466953F, 0.00167441799F, -2.31732202F,
    -0.0297400411F, -0.364894599F, 0.146609724F, -0.252334356F, -0.257425964F,
    0.0102785388F, 0.0590607524F, -0.528490424F, -0.085858725F, -0.441174299F,
    -0.304743677F, -0.422669679F, -0.120310165F, 0.0335048139F, -0.458590508F,
    -0.925376177F, -0.149017468F, -0.107194193F, -0.177413166F, -0.126068458F,
    0.130608335F, -0.862549305F, 0.0454887524F, 0.335549325F, -3.0805428F,
    -0.82816577F, -0.420431733F, -0.408265769F, -0.272587359F, -0.120771654F,
    -0.0633231625F, -0.381979138F, -0.393404275F, -0.338774204F, -1.39362144F,
    -0.456247896F, -0.37255612F, -1.10523748F, -0.498522311F, 0.253516436F,
    -0.3625229F, 0.118605882F, -1.05232394F, 0.179843903F, -0.313498706F,
    -0.173659384F, -0.916373193F, -0.204718262F, -0.177968591F, 0.186569303F,
    -0.477413237F, -1.19461668F, -0.106466085F, -0.252479047F, -0.282852322F,
    -0.256871611F, -0.130612686F, -0.166522279F, -0.324559897F, -0.352649391F,
    -0.225375772F, -0.264511079F, -0.207480013F, -0.898871601F, -0.194303766F,
    -0.584000468F, -0.157822907F, -0.148305193F, -0.143448323F, -0.440276921F,
    0.204715833F, -0.188439518F, -0.935220599F, -0.558966398F, -0.252131194F,
    -0.242629319F, -0.52236855F, -1.10646641F, -0.279057741F, 0.0529211387F,
    -0.681511104F, -0.112575419F, -0.221347168F, -0.04598248F, -1.39013731F,
    -0.546711683F, 0.0590394586F, 0.0132403113F, -0.0995684564F, -0.354554385F,
    -0.0746285543F, -1.26152921F, -1.42861307F, 0.218453154F, 0.0685457662F,
    -0.113470659F, 0.0337493718F, -1.3689748F, -1.2934258F, -0.166103363F,
    -0.152259231F, -0.00526856212F, -0.0654152781F, -0.204906911F,
    -0.0288472697F, -0.317758441F, -0.151365101F, -0.451356947F, -0.0433446839F,
    -0.0172944069F, -0.857343674F, -0.528887391F, -1.0354234F, -1.60883081F,
    -0.50273F, 0.106550686F, -0.211486593F, -0.437821686F, -0.349793762F,
    -0.0968725532F, -0.712025821F, -1.55926692F, -0.372065812F, 0.0119315572F,
    -0.045899462F, -0.500745296F, -0.759258926F, -0.223872468F, -0.499177784F,
    -0.282514125F, 0.167012542F, -0.116505F, -2.64062881F, -0.637245119F,
    -2.26531863F, -0.119384058F, -0.27426964F, 0.0547073111F, -0.799136579F,
    -2.28148127F, -0.7008636F, 0.194145977F, -0.158008173F, -0.386250854F,
    -0.340702593F, -0.0658894852F, 0.0371916853F, -1.3697809F, -0.146054536F,
    -1.2019527F, -0.345107436F, -0.591266036F, 0.0301844943F, -0.25424996F,
    -1.71905208F, -0.559298873F, -0.116833463F, 0.0365748629F, -0.186023608F,
    -1.92012787F, -0.815920889F, -0.317278266F, -0.117940135F, -0.126582175F,
    -0.0220148284F, -1.06228828F, 0.0475634821F, 0.117843717F, -0.570874393F,
    -0.169836417F, -0.23752597F, -0.555809379F, -0.722118497F, -0.206094161F,
    -0.0717688501F, -0.136023715F, -0.45190537F, 0.101503067F, -0.453777909F,
    -0.443489015F, -0.0669856071F, -0.473197907F, -1.12917852F, -1.08608305F,
    0.0372764431F, -0.416413963F, -0.831727147F, -0.246902049F, 0.122439809F,
    -0.16539003F, -0.0723705068F, -1.11429691F, -0.789535701F, -0.471816957F,
    -0.0949950293F, -0.475002587F, -0.00924936775F, -0.345345348F, -0.402121454F,
    -0.120272033F, -0.247002259F, -1.08584905F, 0.0274069607F, -0.387434602F,
    -0.024984397F, -0.250533879F, -0.143379509F, -0.984859705F, -0.300693244F,
    -0.0260346923F, 0.0121457102F, -0.306729972F, -0.197650522F, -0.451338738F,
    -0.287252128F, 0.00528420042F, -0.280444652F, -0.495675951F, -0.326256305F,
    -0.576181352F, 0.0731313899F, -0.153562427F, -0.248076335F, -0.155247182F,
    0.0409589559F, 0.0849454254F, 0.186193332F, -0.110877052F, -0.221263424F,
    -0.737900734F, -0.527058482F, -0.610264957F, 0.25344497F, -0.384274691F,
    -0.112393014F, -0.289886326F, -0.00899051782F, 0.133330062F, -0.0556942895F,
    -0.145936087F, -0.677755594F, -0.0919158161F, -0.298821449F, -0.118605807F,
    0.590756476F, 0.094079785F, -0.437740356F, -0.0539704151F, -0.055200398F,
    0.0919959173F, -0.201439157F, -0.0359603167F, -0.683009386F, -0.259415835F,
    -0.0546142198F, -0.176485896F, -0.108538657F, 0.271276534F, -0.159437701F,
    -0.0475065559F, 0.179511771F, -0.193435967F, -0.0866405293F, -0.806350291F,
    -0.0712731F, -0.341676861F, -0.000291734614F, -0.0743665397F, -0.313129276F,
    -0.643588662F, -0.0307523478F, -0.427279294F, 0.309775442F, -0.0459892452F,
    0.127278656F, -0.242892742F, -0.264307618F, 0.427264661F, 0.156830296F,
    -0.140653417F, -0.233783558F, -0.0327276923F, -0.540415287F, -0.429129899F,
    -0.110163443F, 0.0375414938F, 0.073874183F, -0.137814939F, -0.0439472459F,
    0.158401385F, -0.154464498F, -0.363250732F, -0.0554587133F, -0.22293283F,
    -1.49269331F, -0.319190145F, -0.561826885F, 0.0542625F, -0.466576427F,
    -0.207433969F, -0.394068509F, -1.77468216F, -0.850803F, -0.79612416F,
    0.0256583504F, 0.0614883862F, -0.756430566F, -0.798292F, -0.214975044F,
    -0.652823F, -0.755429566F, -0.048981566F, -0.621639192F, -0.124821253F,
    -1.46417248F, -0.743516624F, -0.27167812F, -0.323821247F, -0.251572281F,
    -0.202859387F, -0.983772635F, -0.725581825F, -0.62724483F, 0.0393604897F,
    -0.152431473F, -0.778786659F, -0.516034842F, -0.337493F, -0.396809459F,
    -0.620157659F, -0.724221349F, -0.427168697F, -0.634310782F, -0.00892613F,
    -1.02644706F, -0.377657592F, -0.0519321859F, -0.285620391F, -0.692231417F,
    -0.549888968F, -0.259216875F, -0.389315873F, 0.121100895F, -0.134369478F,
    -0.247223035F, -0.772996426F, -0.677392304F, -0.0471764915F, -0.338220656F,
    -0.0635173544F, -0.342948169F, -0.362755954F, -0.446129501F, -0.267861813F,
    -0.658757448F, -0.471616954F, -1.14287329F, -1.06056738F, -0.0438972563F,
    -0.794591248F, -0.632056594F, -0.436264515F, -0.175580919F, -0.202991039F,
    -0.290171891F, -0.281426966F, -0.187115863F, -0.275848776F, -0.0493614152F,
    -0.617835224F, 0.0226591378F, 0.0634895265F, 0.0218643248F, -0.700096488F,
    -0.380494595F, -0.0254939776F, -0.040788155F, -0.410578698F, 0.287697136F,
    -0.33866176F, -0.234332606F, 0.0215727352F, -0.0109830452F, -0.208961278F,
    -0.349898636F, -0.140748456F, -0.197826207F, -0.291790634F, -0.340568483F,
    -0.203671783F, -0.423846751F, -0.997324526F, -0.501662374F, -0.223069713F,
    -0.212423325F, -0.990405202F, -0.716664374F, -0.00456833793F, -0.110689946F,
    -0.338941F, -0.592348754F, -0.177675307F, -0.45461902F, -0.144958764F,
    -0.565285F, -1.17578828F, -0.389087468F, 0.198276654F, -0.0630800277F,
    -1.0452348F, -0.0999139622F, 0.100076161F, -0.374740362F, 0.0209024232F,
    -0.286829114F, -0.18205075F, -0.370317072F, -0.493576199F, -0.608248651F,
    -0.0588873774F, -0.578442216F, -0.468067378F, 0.00683035934F, 0.0358312912F,
    0.21864219F, -0.0465460271F, -0.121987723F, -0.469698161F, -0.0964182F,
    -0.194777384F, -0.210407525F, -0.22696647F, -0.0469529964F, -0.237054229F,
    -0.0650333837F, -0.247868404F, -0.820260227F, -0.0674594045F, -0.113628857F,
    -0.185354054F, -0.263143808F, -0.150659725F, -0.593547165F, -0.59876436F,
    -0.235033497F, -0.231250644F, -0.00489213876F, -0.775283098F, 0.054020375F,
    -0.0818408206F, -0.678494632F, -0.184934378F, 0.0814635754F, -0.124169871F,
    0.263664931F, -0.0490267426F, -0.249503374F, -0.311632395F, -0.099448964F,
    -0.418172717F, -0.357269853F, -0.524087131F, 0.0156900827F, -0.312162727F,
    -0.654054821F, 0.0605566613F, -0.938898742F, -0.153138772F, -0.0525788292F,
    -0.244694874F, -0.302137196F, -0.874127388F, -0.0928527638F, -0.0772204101F,
    -0.190540031F, -0.465009272F, -0.51972723F, 0.0399322696F, -0.0761950687F,
    0.469786227F, 0.0369877554F, -0.21684207F, 0.202918485F, 0.0100236936F,
    0.0572331399F, -0.507390678F, -0.375555664F, 0.149606943F, -0.0514997244F,
    0.188848779F, -0.209324464F, -0.401416183F, -0.114676043F, -0.779362619F,
    -0.193587616F, -0.0122979684F, -0.295633763F, -0.219368473F, -0.056196332F,
    -0.502835095F, -0.499150276F, -0.539291739F, -0.0450370051F, -0.293519825F,
    -0.784290731F, -0.15417254F, -0.128986284F, -0.060364414F, -0.346746713F,
    -2.49487019F, -0.515406907F, -0.949598253F, -0.357723892F, -0.895368F,
    0.0321917273F, -0.363670558F, -0.0822950453F, -0.249760047F, -0.629789829F,
    -0.540477753F, -0.0582249537F, 0.019318046F, -0.0929869562F, -0.30492267F,
    -1.91028786F, -0.269021571F, -0.107754312F, -0.30089736F, -0.836524963F,
    -0.788849175F, -0.11597304F, -0.291578203F, -0.304689169F, 0.0458546132F,
    -0.468816906F, -0.112775311F, -0.519575F, -0.053757824F, -0.229190588F,
    -0.0465887859F, -0.778932571F, 0.0195030235F, -0.322509825F, 0.0155390594F,
    -0.0529030338F, -0.356319845F, -0.320969164F, -0.356405556F, -0.00431442726F,
    -0.317034423F, -0.0552952401F, -0.328751385F, -1.1350987F, -0.0886079296F,
    -0.340572327F, -0.335049868F, 0.00615560031F, -0.319829971F, -0.327014923F,
    -0.0235383604F, -0.972595274F, -0.290520161F, -0.337210715F, -0.330114931F,
    -0.567394F, -0.312394291F, -0.254691124F, 0.000558172702F, -0.361707687F,
    -0.630270481F, 0.0303043723F, -0.467523038F, -0.150291681F, -0.0801520571F,
    -3.63566828F, -0.243032053F, -0.339117497F, -0.000808866462F, 0.0370668843F,
    -0.49403134F, -0.879139245F, -0.800131559F, -0.00682521844F, -0.980652452F,
    0.0211965647F, -0.410049319F, -0.541782498F, -0.789657533F, -0.775682688F,
    -0.455001414F, -0.927205145F, -2.03718972F, 0.101855628F, -0.595424175F,
    0.043464765F, -1.12714684F, -0.759297907F, -0.55863297F, -0.385143101F,
    -0.357653886F, -0.531550467F, -0.682856917F, -0.0244377572F, -2.43751025F,
    -0.494377673F, -0.49217695F, -0.512654901F, -0.310146451F, -0.230460718F,
    -0.497476876F, -0.0603852384F, -1.66705191F, -0.243752435F, -2.03644729F,
    -0.763078392F, -0.858741879F, -0.818455935F, 0.0308846794F, -0.152808204F,
    -0.00517827505F, -0.380895972F, -0.563710868F, 0.00371240429F, -0.634384632F,
    -0.0344555F, -0.661443651F, -0.1299299F, -1.97526908F, -0.159112498F,
    0.00379339745F, -1.13358366F, -0.58107692F, 0.135458946F, -0.556171834F,
    -0.561765909F, 0.0223117F, 0.01628704F, -0.560617F, -0.0589338392F,
    0.0281590056F, -0.14105773F, -0.48158434F, -0.0529893748F, -0.182182103F,
    -0.0692292F, -0.643228829F, -0.775562108F, -0.103268586F, -0.532840073F,
    -0.266263187F, -0.473293334F, -0.768128514F, -0.494243234F, -0.453203768F,
    -0.112020262F, -1.21069467F, -0.0691579655F, -0.289708078F, -0.824152231F,
    -0.694156945F, -0.579985857F, 0.206111267F, -1.00789952F, -0.255404919F,
    0.0846695378F, -0.883132875F, -0.391844064F, -0.653867185F, -0.157549277F,
    -0.803717554F, -0.603204489F, -0.650018692F, -0.242722943F, -0.0639954582F,
    -0.502214491F, -0.637681484F, -0.0420663096F, -0.603877783F, -0.386711389F,
    -0.178735733F, -0.631225824F, -0.242709F, -0.43352586F, 0.0844687223F,
    -0.370376617F, -0.336289912F, -1.17653334F, -0.599756777F, -0.435994953F,
    -1.97257507F, -0.554441F, -1.08427119F, -0.0329228379F, -0.489942193F,
    -0.223283991F, -0.284501642F, -0.523758829F, -5.10237F, -1.41859829F,
    0.3654055F, -0.400100678F, -0.325051814F, -0.570023417F, -0.703412294F,
    -0.996159613F, 0.520463288F, -0.564825654F, -0.209024236F, -0.493271589F,
    -0.215991482F, -0.598412514F, -0.97430867F, -0.0787662119F, -0.393354654F,
    -0.0615236722F, -0.567579389F, -0.279404432F, 0.222799048F, -0.299742728F,
    -0.282261F, -1.0837115F, -0.371090442F, -0.386181802F, -1.05565012F,
    -0.15027009F, -0.406807065F, -0.316300899F, -0.2630229F, -1.07376301F,
    -1.03702557F, -1.09286094F, -0.0365393236F, -0.62020129F, -0.455998957F,
    -0.0509731807F, -0.793150544F, -0.834331393F, -0.86188519F, -0.507100403F,
    -1.03828537F, -0.522633672F, -0.737388909F, -0.554553807F, -0.185633302F,
    -0.274311841F, -0.767107427F, -0.370575964F, -0.540641248F, -1.28074694F,
    -0.554963708F, -0.955490947F, -0.120996632F, -0.485141963F, 0.0403162688F,
    -0.830704093F, -1.20579243F, -1.23076534F, -0.531959414F, -0.678522F,
    -0.932186723F, -0.294856638F, -1.39645934F, 0.0499554F, -0.149969086F,
    -0.210539788F, -0.271657586F, -0.731782675F, -0.122412749F, -0.566818833F,
    -0.131511346F, -0.474796772F, -0.86069417F, -0.711372077F, -0.74984473F,
    -0.768688917F, 0.196057722F, -0.392383456F, -0.994072914F, -0.214734659F,
    -0.577151179F, -0.411756128F, -1.4199723F, -0.800823927F, -0.468839794F,
    -0.268858522F, -0.274745226F, -0.182326421F, -0.00267662713F, -0.188896909F,
    -0.279544085F, 0.0498720594F, -0.432336748F, -0.300915033F, -0.56752795F,
    0.0143276034F, -0.237714604F, 0.0357456096F, -0.172416165F, -1.01185143F,
    -0.160516262F, -0.197735637F, 0.0375487581F, -0.000912433839F, -0.285733223F,
    -1.11924028F, -0.308909118F, -0.0469467491F, -0.0501881801F, -0.157290354F,
    0.00347380759F, -0.0442436188F, -0.244139329F, -0.811739862F, -0.0227024704F,
    -0.0592713393F, -0.53069979F, -0.0118309287F, 0.0984505117F, -0.205837294F,
    -0.296823531F, -0.067139253F, -0.348473102F, -0.176156133F, -0.0451777838F,
    -0.0278478768F, -0.0374823697F, -0.52399677F, -0.0535628684F, -0.154777959F,
    -0.9018F, -0.331114858F, 0.158960789F, 0.0666344091F, -1.04850173F,
    -0.657274783F, -0.0394351147F, 0.119272292F, -0.530667961F, 0.0416854657F,
    0.0402518474F, 0.115280926F, 0.132269174F, -0.0832765624F, -0.198187724F,
    0.0269769244F, -1.00956738F, 0.019276F, 0.039560169F, -0.102482356F,
    0.18063046F, -0.681395531F, -0.384144664F, -0.234519973F, -0.171658337F,
    -0.119364627F, -0.138362646F, -0.141826361F, 0.0761795864F, 0.0085324F,
    -0.518553197F, -0.31460315F, -0.0229635295F, -0.117487267F, -0.105285399F,
    -0.812134504F, -0.341084F, 0.0930293128F, -0.151707098F, -0.313827932F,
    0.121066466F, 0.196032569F, -0.000357523968F, -0.121490687F, 0.321973592F,
    -0.171299651F, -0.2726776F, -0.149935827F, 0.0453503467F, 0.100884356F,
    -0.0026398981F, -0.159820035F, -0.455731541F, -0.105374F, -0.734541833F,
    0.155377269F, -0.00827839226F, -0.437211186F, -0.0399752744F, -0.165380627F,
    0.0331077F, -0.0583592393F, 0.28172043F, -0.510481119F, -0.579205394F,
    0.145493478F, -0.0520073771F, -0.270832807F, 0.0759242773F, 0.0189123247F,
    0.459563494F, -0.331384093F, -0.311999619F, 0.0357257463F, 0.144560203F,
    0.100523F, -0.0516833365F, -0.139645085F, -0.0317328125F, -0.170450792F,
    -0.013353155F, 0.127834F, 0.00977193471F, 0.143522188F, 0.147684917F,
    -0.350089371F, -0.487718165F, 0.0353534408F, -1.02574122F, -0.135476485F,
    -0.12394423F, -0.346839F, -0.603774369F, -0.150628179F, -0.00277872127F,
    0.0173408594F, -0.561612606F, -0.266072273F, -0.0077750273F, -0.128586948F,
    -0.185535371F, -0.589439809F, -0.180754185F, 0.0420177728F, -0.257498235F,
    0.0612844303F, -0.218569517F, -0.22157602F, 0.368299276F, -0.0965949222F,
    0.397665888F, -0.175400808F, -0.149659738F, 0.0016936285F, 0.296453F,
    -0.0692977458F, 0.108805992F, -0.229023188F, -0.282759F, -0.0304525774F,
    -0.0601891167F, -0.469557285F, -0.438778579F, 0.175793976F, 0.218738124F,
    -0.148262262F, -0.364242822F, 0.231611833F, -0.284619063F, -0.147701144F,
    -0.168699622F, -0.056455832F, 0.0280733537F, -0.721473396F, -0.226122648F,
    -0.311917096F, -0.228770316F, -0.0491962358F, -0.327238292F, -0.472245544F,
    0.338864386F, 0.0509344824F, -0.534270942F, -0.0995613411F, 0.000737330702F,
    -0.230799392F, -0.222363621F, -0.136645168F, 0.280966282F, -0.102691948F,
    -0.488952458F, 0.167499542F, -0.2224112F, 0.0505542457F, 0.13448064F,
    -0.266705453F, -0.184569657F, 0.0441727079F, -0.00962362625F, -0.0804840475F,
    0.109373704F, 0.212556764F, 0.0699247792F, -0.362678707F, -0.118517637F,
    -1.98999369F, -0.563683689F, -0.722668588F, -0.793762505F, -0.0139990831F,
    -1.61426866F, -0.0443723239F, -1.02475142F, -0.33196947F, -0.546631F,
    -0.00604773173F, -0.330647469F, -0.110405713F, -0.149365902F, -1.54687917F,
    -0.187404141F, -0.270896226F, 0.0160069447F, -0.310323924F, -0.0696389154F,
    -0.566643119F, -0.214007363F, -0.0819850713F, -0.252751499F, -0.373731583F,
    -0.367968708F, -0.197758943F, -0.236042991F, -0.29147172F, -0.00738770282F,
    -0.235081047F, -0.243886366F, -0.637662828F, -0.102767609F, -0.00503597641F,
    -0.108827382F, -0.567968607F, -3.01442146F, -1.25938475F, -1.6814357F,
    -0.142771751F, -0.302020699F, -0.614477336F, -0.257881F, -0.285155773F,
    -1.03060615F, -0.340136677F, -0.678682327F, 0.00603004685F, -0.579256F,
    -0.0186636131F, -0.929410815F, -0.333964646F, -2.05512643F, -0.0685798153F,
    0.0100974301F, -0.368530601F, -0.228236496F, -0.0715268403F, -0.225470901F,
    -0.726217F, -1.91104388F, -0.167732894F, -0.337820411F, -0.285013497F,
    0.0859875083F, -0.367560208F, -0.453963846F, -0.0937015861F, -0.275460511F,
    -2.18055487F, -0.55662477F, -0.437338263F, 0.0186281521F, -0.155793086F,
    -0.058134295F, -0.142932728F, -1.01994967F, -0.274818391F, -0.270772427F,
    0.39417F, -0.0701508746F, -0.549711466F, -0.793310046F, -0.314684659F,
    -0.1520392F, -0.193724349F, 0.511182487F, -0.52108705F, -0.397565275F,
    -0.135442734F, 0.00282017514F, -0.16358611F, -0.945022821F, -0.21182932F,
    -0.00760575477F, -0.1066425F, -0.363525063F, -2.08332753F, -0.159074664F,
    -0.91591078F, -0.392505944F, -0.119614676F, -0.430386782F, -0.16030243F,
    -0.430241048F, -0.0643504187F, 0.24693954F, -0.341239691F, -0.0987459496F,
    -0.186988011F, -0.62152791F, -0.657802761F, 0.0619511381F, -0.182171106F,
    -0.456631184F, -0.513154745F, -0.630003035F, -0.0847885087F, -0.300024152F,
    0.457138926F, -0.508879662F, -0.323973864F, -1.91802609F, -0.0946064293F,
    -0.0444701053F, -0.0305668619F, -0.227758318F, -0.39410767F, -0.00222309818F,
    -0.324230403F, 0.229828566F, -0.0426513627F, -0.829771578F, -0.495377153F,
    -0.52615279F, -0.364072889F, -0.364177763F, -0.180842817F, -0.544948578F,
    -1.62135065F, -0.985785544F, -0.505870581F, -0.851138949F, -0.32090649F,
    -1.10726476F, 0.00521016866F, -0.0349636637F, -0.473327726F, -0.777606726F,
    0.000120107172F, -0.610805392F, -0.398460716F, -0.710878372F, -0.915498614F,
    -0.87334609F, -1.20109868F, -0.0351709649F, -0.231647283F, -1.01016438F,
    -1.73601389F, -0.437241971F, -0.456754476F, -0.231819198F, -0.123660453F,
    -0.640471935F, -0.0624565259F, -0.62749964F, -0.890435338F, -0.000439307769F,
    -0.734819055F, -0.400113672F, -0.159512714F, -0.43229273F, -0.757204533F,
    -0.724704325F, -0.548723936F, -0.00498886826F, -0.381812871F, -1.27537024F,
    -0.195097178F, -0.385177553F, -0.547746241F, -0.182187915F, -0.632902145F,
    -1.44091451F, -0.468841106F, -0.754099488F, -0.0180318858F, -1.43559F,
    0.0301482938F, -1.33341992F, -0.373519063F, 0.013164592F, -0.87678653F,
    0.0596306249F, -0.484437346F, -0.559058368F, -1.18353701F, -0.819283605F,
    -0.338583082F, -0.310472518F, -0.667161107F, -0.267579317F, -0.0748112947F,
    -0.473217249F, -0.613289297F, -0.5590868F, -0.115669467F, -0.381738484F,
    -1.15686202F, -0.134613097F, -0.665358067F, -0.440446794F, -0.471025795F,
    -0.632730067F, -0.537506521F, -0.601128817F, -0.12014319F, -0.934082866F,
    -1.39881778F, -0.494673908F, 0.110083632F, -0.567788601F, -0.238513261F,
    -1.13801968F, -0.361161947F, -2.72852254F, -0.775950432F, -0.230700687F,
    -0.0105860131F, -1.59434414F, -0.596262634F, -0.436875403F, -0.189060077F,
    -0.423340678F, -0.664144635F, -0.596568167F, -0.54977864F, -0.0120508354F,
    -0.389523864F, -0.528652132F, -0.85939163F, -0.499728471F, -0.33087337F,
    -0.40337041F, -1.00978279F, 0.0188964363F, -0.446020305F, 0.0188427456F,
    -0.550502181F, -0.546986461F, -0.270149857F, -0.0218190253F, 0.151503831F,
    0.27366668F, -0.0977695957F, -0.193005443F, -0.00249089487F, -0.676858425F,
    0.0174932946F, -0.395298302F, -0.501697659F, 0.0489624403F, -0.401477575F,
    -1.21905899F, -0.634350061F, -0.325477183F, -0.139040053F, -0.954904139F,
    -1.2206347F, 0.00151909888F, -0.800839484F, -0.410807192F, -0.0545386821F,
    -0.0790610164F, -0.926136792F, -0.942214191F, 0.0278933346F, -0.054463502F,
    0.127377898F, -0.256775975F, 0.138080537F, 0.285706311F, 0.0803293437F,
    -0.0114823012F, 0.186606348F, 0.252743244F, 0.498235077F, 0.0333971977F,
    0.235029116F, 0.053060919F, 0.111116722F, 0.402897894F, 0.167053938F,
    0.22099936F, 0.12960887F, 0.26359579F, 0.347804964F, -0.0517025292F,
    0.204188392F, 0.356836081F, -0.372544229F, -0.27403155F, 0.0501459651F,
    -0.10958799F, 0.228702456F, 0.0346872099F, 0.0714848191F, 0.211530238F,
    0.188794747F, -0.432306588F, -0.0595262907F, -0.0585651435F, -0.0287933964F,
    0.0680866F, 0.294433594F, -0.0981785655F, 0.357061148F, 0.029299669F,
    0.0739166066F, -0.209635213F, -0.0231282171F, 0.112342477F, -0.632297933F,
    0.191432685F, 0.0609001592F, 0.0486200564F, -0.408242345F, 0.201721042F,
    -0.0750755295F, 0.431298971F, 0.0294715222F, 0.14902018F, 0.0700267F,
    -0.392845899F, 0.434265494F, 0.053333886F, 0.154019177F, 0.236810058F,
    0.623535693F, -0.148789197F, 0.195779756F, 0.113336168F, -0.0541893579F,
    -0.205485716F, -0.621920645F, 0.201280624F, 0.16066125F, -0.0247897133F,
    -0.161515385F, -0.0057273563F, -0.180924028F, 0.0079290485F, -0.144616917F,
    -0.274888396F, -0.336687952F, 0.0255070105F, -0.285010248F, -0.397673965F,
    0.113643728F, -0.47819078F, 0.0063842074F, -0.407933474F, -0.83026582F,
    -0.205018237F, 0.11163535F, -0.100595422F, -1.23852885F, -0.040599864F,
    -0.520421743F, -0.0495154F, -0.182863086F, -0.498345F, -0.226283878F,
    -0.122671731F, -0.070098348F, -0.216795117F, -1.50203562F, -0.0693616718F,
    -0.174339354F, 0.048433248F, -0.401005954F, 0.0143816937F, -0.0245435834F,
    -0.181368738F, 0.15232344F, -1.1214627F, -0.228736848F, 0.0488399789F,
    -0.110786095F, 0.144050851F, -0.464199185F, -0.12004149F, -0.146266907F,
    -1.04973257F, -0.121874265F, -0.478194982F, -0.464702278F, -0.334135056F,
    -0.619573534F, -0.247533411F, 0.0469359756F, 0.153040677F, -0.51883316F,
    -1.54932463F, -0.145293072F, -0.0441365428F, -0.373780757F, -0.213320985F,
    -0.405002087F, -0.0143729262F, -0.24898237F, -0.600339592F, -0.154782653F,
    -0.316463053F, -0.483813494F, -0.141935393F, -0.246371716F, -0.0832993612F,
    -0.773521185F, -0.0485193767F, -0.648610473F, 0.0225039274F, -0.246023223F,
    -0.343419552F, -0.209148884F, -0.312001526F, -0.848427773F, -0.760966659F,
    -0.0627377927F, -0.138223454F, -0.197745189F, -1.73708653F, -1.82869351F,
    -0.499781251F, -0.229682133F, 0.0398281515F, -0.364083201F, -0.625154495F,
    -0.0752161369F, -0.645971119F, -0.374626577F, -0.111396477F, -0.890179396F,
    -0.280902475F, -0.740315557F, -0.654127538F, -0.157456979F, -0.597107828F,
    -0.142526746F, -0.0837309211F, -0.603555739F, -0.846803784F, -0.209589481F,
    -0.422248781F, -0.0203668028F, -1.81618035F, -0.554015756F, 0.017727714F,
    -0.549375594F, -1.05609655F, -0.19592F, -0.46325475F, -0.0572019257F,
    -0.123813562F, -0.535244286F, -1.16916275F, -0.00220794207F, -0.411078185F,
    -2.00248051F, -1.21851158F, -0.203599F, -3.98198152F, -0.868651628F,
    -0.0410291478F, -0.653020799F, -0.367317349F, -0.846253216F, 0.0134454966F,
    -0.690737903F, -1.26543152F, -0.322407454F, -1.10028577F, -0.386810154F,
    -1.36296654F, 0.0312380847F, -1.23581409F, -0.388813317F, -0.100772679F,
    -0.178946197F, 0.17065011F, -0.475603729F, -0.791961849F, -0.494571984F,
    -0.397982389F, -0.0798216835F, -0.131099924F, -0.568442822F, -0.116593674F,
    -0.81739527F, -0.0768937096F, -0.156068742F, -0.027962843F, -0.304656267F,
    -0.517671525F, -0.635735035F, -1.8130362F, -0.7548244F, -0.112326838F,
    -1.0387702F, -0.601143897F, -0.384181172F, -0.26067847F, -0.297412664F,
    -0.489929199F, -0.345880479F, 0.113683157F, 0.207764223F, -0.160190448F,
    -0.116553992F, -0.31228286F, -0.639354885F, -0.6481601F, -0.144815028F,
    -0.21873875F, -1.04665458F, 0.0159892086F, -0.316859514F, -0.0114695542F,
    -0.0165987648F, -0.574648738F, -0.11996606F, -0.267674476F, -0.216489077F,
    -0.161300033F, -0.213611469F, -0.345208168F, 0.00311604957F, -0.579854786F,
    -0.0337660722F, -0.160183653F, -0.153459445F, -1.30008745F, -0.794814646F,
    -0.706963F, -0.309197843F, -0.392512321F, -0.285948575F, -0.915851593F,
    -1.27465987F, 0.0191005096F, -0.417702F, -0.312062651F, -0.204749316F,
    -0.13165468F, -0.408484221F, -0.790834606F, -0.144209966F, -0.177890882F,
    -0.0377104096F, 0.1569103F, -0.0814778507F, -0.00896973722F, -0.275568932F,
    -0.366746545F, -0.327910423F, -0.214826211F, -1.13517106F, -1.03157616F,
    -0.0179410372F, -0.174569502F, -0.146569133F, -2.00365877F, -1.37994039F,
    -0.139429435F, -0.490662336F, -0.0253106188F, -0.160043657F, -0.182538465F,
    0.0629142746F, -0.309563041F, -0.382486612F, -0.2712515F, -0.296723276F,
    -0.129840538F, -0.345354468F, 0.0564805493F, -1.02026546F, -1.70078683F,
    -0.016790228F, -0.259651542F, -1.63539743F, -0.145118475F, -0.508264422F,
    -0.368729591F, -0.393292934F, -0.789367676F, -0.569340289F, -0.0222361106F,
    -0.659435809F, -0.546453774F, -0.718015492F, 0.0474027097F, 0.0695452914F,
    0.0442863926F, -0.473317474F, 0.00259558926F, -0.0389611237F, -0.17805545F,
    -1.10369122F, -0.221562102F, -0.456047893F, -0.910209656F, -1.34783316F,
    -1.67783868F, -1.05636752F, -0.58910507F, 0.0932890326F, -0.952452F,
    -0.817023F, -0.00872251671F, -0.323607892F, -1.08231986F, -0.226283848F,
    -0.686634779F, -0.57351923F, -1.56528139F, -0.399383307F, -0.0423444919F,
    -1.77343059F, -0.555385828F, -0.39842689F, -0.00623408752F, -0.193781465F,
    -1.04881072F, -0.423863977F, -0.525392F, -0.0591182858F, -0.721486032F,
    -2.51509929F, -0.771001756F, 0.00817732699F, -0.510814846F, -0.559547186F,
    -0.137673542F, -0.981529236F, -0.959268689F, -0.521887F, -0.289424866F,
    -0.0912734196F, -0.31666705F, -0.3128407F, -0.272381306F, -0.348036289F,
    -0.0368833877F, -0.870917082F, -1.35159802F, -0.4708018F, -0.639502406F,
    -0.385925114F, 0.0886895582F, -0.0607829355F, -0.160058245F, -0.252490133F,
    -0.336517036F, -0.195097908F, -0.430799246F, -0.031161176F, -0.496500731F,
    -0.620763302F, -0.385134727F, -0.147485942F, -0.522009F, -0.412022859F,
    -0.291058719F, -0.0537680164F, -0.685505509F, 0.0343588367F, -0.495156318F,
    -0.0149626555F, -0.501732409F, -0.674239516F, -1.02368188F, -0.558157F,
    0.00329771684F, -0.936904F, -0.514041901F, -0.0925687F, -0.325612098F,
    -0.10773851F, 0.0149124209F, -0.169093177F, -0.45099774F, -0.375312537F,
    0.161806986F, -0.322340608F, -0.851097643F, -0.216406718F, -0.0510566644F,
    -1.11754394F, -0.526302814F, -0.762848139F, -0.0897349566F, 0.0725007877F,
    -0.562336624F, -0.333563685F, -0.471938759F, -0.142906219F, -0.115555786F,
    -0.632016957F, -1.46307933F, 0.00169563154F, -0.307414591F, -0.0636677146F,
    -0.714568555F, -0.854413688F, -0.693534F, -0.162985757F, -0.277942747F,
    -0.0162319653F, -0.737150908F, -0.948503196F, -0.11046201F, -0.393787116F,
    -0.0768810064F, 0.0029771449F, -0.330814898F, 0.0982636511F, -0.183161512F,
    -0.667369962F, 0.131165579F, -0.0378098935F, -0.420119256F, -0.0803862289F,
    -0.264321238F, -0.0493228398F, -0.560267687F, -0.2275417F, -0.790637314F,
    -0.0311242584F, -0.269373417F, 0.125791952F, -0.131649435F, -0.906315446F,
    -0.0154789817F, -0.157671541F, -0.686519623F, 0.0727232769F, -0.685737729F,
    0.0200135633F, -0.626871467F, 0.0994437411F, -0.627279F, -0.284350872F,
    -0.00904613F, -0.392296582F, -0.229515404F, -0.498273015F, -0.295273453F,
    -0.552180529F, 0.0184087828F, -0.0872079F, -0.101145782F, 0.0196093097F,
    -0.115016855F, -0.196091831F, -0.514400184F, -0.205467314F, -0.583058655F,
    -1.08546066F, -0.729759812F, -0.512174785F, -0.104093082F, -0.156346798F,
    0.0354392044F, -0.0704386F, -0.686201096F, -0.288454384F, 0.14896296F,
    0.562770188F, -0.597301781F, -0.189024463F, 0.0249935258F, -0.447332025F,
    0.282549292F, -0.186154366F, 0.128311604F, -0.333067477F, -0.0999529138F,
    -0.0108804964F, -0.186110511F, -0.266600162F, -0.62851882F, 0.34961012F,
    -0.0490732864F, 0.0240488108F, -0.367816955F, -0.35435155F, 0.00235766522F,
    -0.270850331F, -0.0574165322F, 0.0939847454F, -0.100098647F, -0.210672647F,
    0.176392913F, -0.290406197F, -0.416181594F, 0.172234595F, 0.245429516F,
    0.0929393098F, -0.140837833F, 0.523539424F, -0.236515984F, -0.175335988F,
    0.228158176F, -0.133769989F, -0.117694691F, -2.31926084F, 0.0617686547F,
    -1.44529128F, 0.212303445F, 0.269107193F, -0.103409506F, -0.305441707F,
    -0.453628153F, -0.18134585F, -0.460612714F, -0.433472127F, 0.215262383F,
    -0.334784836F, -0.322821438F, -0.294964015F, -0.851837754F, -0.201866016F,
    -0.453993469F, -0.424180895F, 0.350309163F, 0.209577262F, 0.0848206729F,
    -1.0583663F, -0.879004419F, -0.490374684F, -0.0565360077F, -0.0411984101F,
    -1.24338782F, -0.517797709F, -1.36930192F, -0.552983403F, -0.184587702F,
    -0.0025436508F, -0.647395F, -0.246749893F, -0.736069322F, 0.0529916696F,
    -0.421090215F, -0.519053221F, 0.0152468598F, 0.000247088057F, -0.107032977F,
    -1.68460202F, -0.211827219F, -0.773717403F, -0.110668838F, -0.879266F,
    -0.385517329F, -0.76079905F, -0.82834959F, -0.414501846F, -0.000832588761F,
    -0.877275527F, -0.656770945F, -0.453901321F, -0.973193944F, 0.0166739933F,
    -0.0502044335F, -1.263942F, -0.0697160885F, -1.52129531F, -0.0166749F,
    -0.712406635F, 0.0790213197F, -0.201766223F, -0.753290772F, -1.33351696F,
    -0.443273485F, -0.412766099F, -1.35649955F, -3.41881967F, -0.043233186F,
    -1.32464576F, -1.60178542F, -0.934901416F, 0.0283274502F, -0.535226703F,
    -0.0171281323F, -0.256991863F, -1.20028901F, -0.737959266F, -0.398573428F,
    -0.467530042F, -2.73646426F, 0.0232453924F, -0.517081082F, -0.710086286F,
    -0.937696457F, -0.780142128F, -0.37611264F, -0.555739105F, -0.100883521F,
    -0.245920092F, -1.27232444F, -0.36230281F, -0.102823436F, -0.816322327F,
    -0.357221395F, -1.10436821F, -0.724084914F, -0.893511057F, -1.31329811F,
    -0.0823771283F, -1.27623022F, -0.548824906F, -0.821286619F, -0.930267751F,
    -0.750689209F, -1.34194565F, -0.0529571F, -0.523714542F, -0.957693458F,
    -0.390152037F, -1.22273064F, -0.931006551F, -1.58920455F, -1.23724949F,
    -1.33629513F, -1.54481721F, -0.747158945F, -0.87541306F, 0.0137289595F,
    -0.970965207F, -1.25052929F, -1.40751398F, -1.6139425F, -0.784908533F,
    -0.893762231F, -1.30476892F, -0.405999035F, -1.4809916F, -0.151810691F,
    -0.874273956F, -0.618236721F, -0.60604614F, -1.07882512F, -0.703060329F,
    -1.44865549F, -0.652655F, -1.589939F, -0.0286728945F, -1.48325527F,
    -0.0628208295F, -2.41145086F, -0.918631196F, -0.473510593F, -0.513628066F,
    0.0164314192F, -0.974521041F, -0.648280382F, -1.49111962F, -0.543941796F,
    -1.63164246F, -0.10701514F, -1.17721248F, -2.52723932F, -1.2873795F,
    -1.30537188F, -1.18158185F, -0.78247261F, -0.46709916F, -1.00351954F,
    -0.326131F, 0.226592809F, -0.0530224331F, -0.0253291186F, -0.0511173792F,
    -1.050179F, -0.544620931F, -0.936160624F, -0.633821666F, -0.664377213F,
    -0.197230041F, -0.234819233F, -0.00823882781F, -0.795841157F, -0.5555951F,
    -0.797317088F, -0.40285933F, 0.294997156F, -0.270986736F, -0.202229619F,
    -0.0877049938F, -0.734358191F, -0.240836307F, -0.121646687F, -0.624859691F,
    -0.551448226F, -0.40342173F, -0.193957448F, -0.354972869F, -0.0733451918F,
    -0.251837F, -0.542340875F, -0.230981037F, -0.42055133F, 0.151712909F,
    0.0110620046F, -0.511810958F, -1.28118408F, -1.00417697F, -0.106421992F,
    -0.420809209F, -0.250085771F, -0.370806307F, -0.298742473F, 0.0963890105F,
    -0.0194930062F, -0.585037947F, -1.08024716F, -0.0853778943F, -0.955631435F,
    -2.26390982F, -0.453876525F, -0.51867485F, -1.64713693F, -0.919138312F,
    -0.0276856944F, -0.0952619091F, -0.180322021F, -0.386234581F, -0.392175913F,
    -0.249188513F, -1.4577682F, -0.244013548F, -0.209780261F, -0.303782821F,
    -1.24250865F, -0.301444918F, -0.545768142F, -0.349902F, -0.096168831F,
    0.329819918F, 0.0921736285F, 0.139582619F, -0.116025954F, -0.534494042F,
    -0.000484939083F, -0.281852514F, 0.669168413F, -0.103655718F, -0.397621602F,
    -0.582937241F, -0.19403775F, -0.10144908F, 0.0836213529F, -0.103438467F,
    -0.50775063F, -0.431609392F, -0.366010875F, -0.613676667F, -0.101038352F,
    -0.543183446F, -0.218681231F, -0.516482711F, -0.591503143F, -0.570680141F,
    -0.552205145F, -0.154521808F, -0.322084844F, 0.276386082F, 0.154608592F,
    -0.272577614F, -0.197623327F, -0.321890682F, -0.365141362F, -0.120200768F,
    -0.00203517824F, -0.0778656229F, -0.0593534596F, -0.701300561F, 0.102984682F,
    -0.150657505F, -0.338025302F, 0.00547738746F, -0.0501295961F, -0.0786104202F,
    -0.173948392F, -0.263376504F, -1.47055399F, -0.174263805F, -0.97247833F,
    -0.0449089259F, -1.62925148F, -0.718430281F, 0.181575641F, 0.176104844F,
    -0.097053729F, -0.178240389F, -0.723040402F, 0.513828695F, -0.501624525F,
    -0.545413315F, -0.081787169F, 0.207046628F, 0.0864388794F, 0.029833205F,
    -0.615598142F, -0.504009366F, -0.490060657F, -0.314646065F, -0.0158276316F,
    -0.382241338F, -0.573736727F, -0.630757868F, 0.024660876F, -0.130132481F,
    -0.420483112F, -0.729395866F, -1.4002558F, -0.50215435F, -0.403914303F,
    -0.910122871F, -0.41912353F, -0.695173383F, -0.499082059F, -0.664680302F,
    -0.595106602F, -0.0565971024F, -0.0331858397F, -0.794872642F, -0.336984605F,
    -1.10625923F, -0.0718293041F, -0.226424009F, -0.258648664F, -0.0233645216F,
    -0.24280645F, -0.290899336F, -0.8467471F, -0.702960908F, -0.0427258201F,
    -0.766656697F, -0.138810158F, -0.416084766F, -0.574029565F, -0.226043925F,
    -0.219985932F, -0.380384326F, -2.237957F, -0.707286596F, 0.0644714162F,
    -0.290008F, -0.3609505F, 0.0459937342F, -0.050606057F, -0.0505974591F,
    -1.1921382F, -0.463587701F, -0.150188908F, -0.406754822F, -1.32536685F,
    -0.598855257F, -0.647193134F, -0.256562412F, -0.128600627F, -0.444798112F,
    -1.05275774F, -0.355737805F, -0.810013115F, -0.414944053F, -0.663546801F,
    -0.156657755F, -0.00938370172F, -0.295479536F, -1.11472702F, -0.293641657F,
    -0.613215327F, -0.692456543F, -0.458816528F, -0.201062962F, -0.0960098878F,
    -0.0664607137F, -1.21477127F, -0.849387228F, 0.0263984483F, -0.29078263F,
    -0.542187274F, -0.478782773F, -2.12544298F, -0.273090839F, -0.761079729F,
    -0.0998712853F, -0.72926F, -0.276808381F, -0.456661642F, -0.575961888F,
    -0.59831357F, -0.527277F, 0.225926444F, -0.344345391F, -0.678499222F,
    0.0463225283F, -0.775267065F, -0.756763756F, -0.394707739F, -0.565081477F,
    -0.525853872F, -0.291094422F, -0.834566057F, -0.818939269F, 0.0413930193F,
    -0.666177511F, -0.403012604F, -1.02252233F, -0.798837602F, -0.0452260263F,
    -0.0847132578F, -0.48747769F, -0.465959251F, -0.969748199F, 0.0589156F,
    -0.512212873F, -0.184140578F, -0.251569271F, -0.935383201F, -0.773424208F,
    -1.19388056F, -1.04128993F, -0.667864859F, -0.145286903F, -0.555796742F,
    -0.116528191F, -1.38676822F, -0.249960929F, -0.0757544786F, -1.21757078F,
    -0.0270267762F, -0.354566723F, -0.253332227F, -1.0778023F, -0.528756F,
    -0.703796F, -0.0372387022F, -0.358260602F, -1.0148313F, -0.323655665F,
    -0.466692537F, -0.185394108F, -1.16996992F, -0.317955017F, -0.188179091F,
    -1.37178814F, -0.914938509F, -0.134270027F, 0.0207215697F, -0.151086673F,
    -0.0392427035F, -0.198959485F, -1.44738209F, -1.09242749F, -0.403138757F,
    -1.30003214F, -1.68916273F, -0.173961207F, -0.477208346F, -0.126874015F,
    -0.324823052F, -0.337512076F, -0.00387581973F, -0.160286412F,
    0.000405457424F, -1.01782238F, -0.940559328F, 0.0698197186F, -0.317438245F,
    0.0570773184F, -1.17002773F, -0.689372897F, -0.293155F, -1.2166239F,
    -0.0500078201F, -0.399506748F, -0.324938744F, -0.71818465F, -0.904684722F,
    -0.327870607F, 0.0206943452F, -1.37375176F, -0.523766279F, -0.0304620247F,
    0.0256969649F, -0.431777984F, -0.283227772F, -0.405500054F, -0.698451459F,
    -0.00885792449F, -1.24945629F, -0.313961238F, -0.219330922F, -3.40631628F,
    -0.659647524F, -2.26448369F, -0.565375924F, -0.879390299F, 0.0586067103F,
    -0.645357251F, -1.37536514F, -0.150006816F, -0.719762087F, -1.21595716F,
    -0.83569634F, -0.665325761F, -1.06759691F, -0.537305534F, -0.828615725F,
    -0.793316782F, -1.71140349F, 0.122284696F, -1.41094887F, -0.110939644F,
    0.0184714478F, -0.804295182F, -0.0656874627F, -0.60460341F, -0.39388F,
    -0.233480796F, -0.449638277F, -0.172567174F, -0.901006579F, -0.275268972F,
    -0.408543825F, -1.26849318F, -0.701640546F, -0.24386476F, -0.134688139F,
    -0.420703024F, -0.689495623F, -0.302100152F, -0.5502159F, -0.110791959F,
    0.0539098345F, -0.38471809F, -0.884226382F, 0.00169050577F, -1.04963565F,
    -0.0823055804F, -0.355037F, -0.339774519F, -0.123614766F, -0.456683517F,
    -0.0293338802F, -0.123721726F, 0.00865032803F, 0.0216303039F, -0.308284849F,
    -0.578701198F, -0.101657875F, -0.50876689F, -0.268064171F, -0.1116639F,
    -0.000486547244F, -1.04436588F, -0.381911159F, -0.245783493F, -0.185585275F,
    -0.869338512F, -0.636427F, -0.19311893F, -0.823103249F, -0.0769962668F,
    -0.699053F, 0.122730635F, -0.227935404F, -0.342512161F, -0.399141669F,
    -0.414307714F, -0.0350540392F, -0.070687674F, -0.19675912F, -0.525816858F,
    -0.520586729F, -0.593152702F, 0.0402602814F, -0.585716367F, -0.56599313F,
    -0.29153648F, 0.0080949F, -0.188899651F, -0.40369612F, -1.00389373F,
    -0.180040076F, -0.268194914F, -0.371538073F, -0.276265889F, 0.0723795444F,
    0.0348483101F, -0.197040111F, -0.37881434F, 0.0374207646F, 0.00704249926F,
    0.146953195F, 0.160901919F, -0.0705254227F, -0.113854222F, -0.136698529F,
    0.150129855F, 0.15850161F, 0.118867673F, 0.126443371F, 0.0608449169F,
    -0.111674063F, 0.0133190528F, -0.0125541817F, -0.414801061F, 0.100383252F,
    -0.0890791416F, 0.0893268064F, -0.285779417F, -0.434932888F, -0.511312068F,
    -0.564301729F, -0.0863188505F, -0.225687414F, -0.0402694046F, 0.0367597453F,
    -0.0369784124F, 0.110413112F, -0.203651294F, 0.116750829F, -0.222387627F,
    -0.465961546F, -0.196588933F, -0.286947221F, 0.0345343612F, -0.0864820182F,
    -0.333555669F, 0.0394344106F, 0.141465187F, -0.191743508F, -0.231161043F,
    -0.00588352745F, 0.254746556F, -0.0523703396F, 0.0386338755F, -0.0319132209F,
    0.182586029F, 0.118499227F, 0.0416632F, -0.309663445F, -0.0824668556F,
    -0.0746424273F, 0.0815152898F, 0.123930752F, -0.0414497443F, 0.2328742F,
    -0.464574426F, 0.103204645F, -0.294861883F, 0.155936211F, -0.0727407113F,
    0.0310643688F, -0.339562953F, -0.748550653F, 0.0774153769F, -0.11135675F,
    -0.148777872F, -0.0776439533F, -0.236240342F, -0.886079967F, -0.481544256F,
    -0.361518532F, 0.0810195431F, -0.641965508F, -0.467716187F, -0.18144536F,
    -0.525927901F, -0.399382323F, -0.561360776F, 0.481601268F, -0.413641185F,
    -0.00449707266F, -1.03838563F, -0.157475471F, -0.07700596F, -0.18027629F,
    -0.325347692F, -0.11517293F, -0.262255549F, -0.503201F, -0.678598762F,
    -0.284345806F, -0.512850285F, -0.386277974F, -0.0496784709F, -0.105531275F,
    -0.380678356F, -0.0508357622F, -0.112799115F, -0.0164763387F, -0.0738839507F,
    0.0272925217F, -0.421759069F, -0.229556173F, -0.243038729F, -0.532176435F,
    -0.156337157F, -0.558233738F, -0.444685161F, -0.433639556F, -0.014069221F,
    -0.686366916F, 0.0539799333F, 0.129340261F, 0.210757434F, -1.74105883F,
    -0.406125128F, 0.197774678F, -0.274975F, -0.142603233F, -0.64389807F,
    -0.382842451F, -0.14388065F, 0.548224151F, -0.124888018F, -0.440077633F,
    -0.226995319F, -0.231883422F, 0.114581101F, 0.0929065198F, -0.151724488F,
    0.0747439265F, 0.190201402F, -0.366021901F, -0.319301933F, 0.0356908031F,
    -0.179352388F, -0.645738721F, 0.0536881424F, -0.186282367F, -0.2755512F,
    -0.285210252F, -0.0827233046F, -0.0334450155F, -0.0506458655F, -0.172814906F,
    -0.544669449F, -0.246370479F, -0.605371952F, 0.0743455365F, -0.540026248F,
    -0.19482471F, 0.483652145F, -1.26193631F, -0.211567879F, -0.337342918F,
    -0.47109282F, -0.255537808F, 0.0563310534F, 0.0335600078F, -0.715709686F,
    0.417357296F, -0.0327609032F, -0.228330597F, -1.14522171F, -0.236596599F,
    -0.23120223F, 0.0196246766F, -0.370790899F, -0.0802880153F, -1.15633845F,
    -0.0553556308F, -0.208262831F, -0.0203274619F, -1.11170983F, -0.469935089F,
    -0.0269287527F, -0.328050524F, -0.277709126F, -0.118311085F, 0.346268952F,
    -0.471632361F, -0.137147456F, -0.786543071F, -0.31122309F, 0.502838075F,
    -0.217578664F, -0.05185562F, -0.201099217F, -0.213490233F, -0.565506637F,
    -0.739537239F, -0.0973974541F, 0.229869515F, -0.170374751F, -0.337198973F,
    -0.16700618F, -0.293713778F, -0.0521722212F, -0.314796388F, -0.19178842F,
    -0.614034295F, -0.390070379F, -0.0895079598F, -0.0831591189F, -0.586685121F,
    -0.195534647F, -2.0957818F, -0.85557878F, -0.266955435F, -0.186622649F,
    -0.529776096F, -0.876558065F, -0.799489915F, -0.194860756F, -0.0853011608F,
    0.124229148F, -0.326882392F, -0.130052492F, -0.0207227059F, -0.130631968F,
    0.0262568668F, -1.16231751F, -1.12745285F, 0.0646703765F, -0.891165F,
    -0.0389829837F, -1.23932278F, -0.282173246F, -0.408834249F, -0.435883611F,
    0.0736603886F, 0.00725204404F, -0.173237756F, -0.85783571F, -0.0687545687F,
    -0.805631161F, -0.0283679031F, -1.1618495F, -0.0429245681F, -0.604563534F,
    0.0104781669F, -0.134110525F, -0.0378076471F, -0.357422948F, -0.389280468F,
    -0.709323883F, -0.47932F, -0.70072031F, -0.126832515F, -0.89874804F,
    0.126366138F, -0.0117969895F, 0.0730003119F, -0.348982215F, -0.0670909435F,
    -0.764860094F, -0.0332972482F, -0.204640925F, -0.0130156325F, -0.32174167F,
    -0.04414244F, -0.863505483F, -0.406663358F, -0.119142957F, -0.436217636F,
    -0.219648108F, -0.697676599F, -0.0478478335F, 0.045722995F, -0.242640913F,
    -0.402453035F, -0.744584799F, 0.1136375F, 0.13898702F, 0.018768888F,
    -0.325466543F, -0.741142869F, -0.187145114F, -0.0350183286F, -0.221624643F,
    -0.361872911F, -0.0520609021F, -0.666820824F, -0.292512864F, -0.343883693F,
    0.0267628692F, -0.209023833F, -0.775626659F, 0.0643315613F, 0.355891317F,
    -0.0748512F, -1.18662405F, 0.0866107121F, -0.498665601F, 0.245714977F,
    -0.145470127F, -0.11139033F, -0.116812907F, -0.262404203F, 0.152831331F,
    -0.0370621309F, -0.204355076F, -0.551978946F, 0.0436950065F, 0.00797544792F,
    -0.0652406F, -0.461207598F, 0.23379907F, -0.840444F, -0.406244785F,
    -0.229723439F, -0.620493174F, -0.329919845F, 0.106787488F, -0.102593705F,
    -0.565150738F, -0.291329026F, 0.135513574F, -0.711709082F, 0.0237039644F,
    -0.570571482F, -0.660261095F, -0.903114796F, -0.40894565F, -0.985686719F,
    -0.144910872F, -0.0204090066F, -0.148221791F, -0.138878956F, -0.47852087F,
    -0.565826476F, 0.0251646359F, -0.677067F, -0.418599725F, -0.625290036F,
    -0.142280772F, -0.163090423F, 0.0580452979F, -0.339634985F, -0.252683699F,
    0.0297331568F, -0.935745478F, -0.153404415F, -0.284067452F, -0.0248063467F,
    -0.320541918F, -1.00294471F, -0.535790145F, 0.113631137F, -0.799374878F,
    -0.858179688F, 0.008637839F, -0.747174144F, -0.0284229778F, -1.10851347F,
    -0.362421602F, -0.495841205F, -0.489797711F, 0.0182699952F, 0.0468144268F,
    -0.0324793383F, -0.999739707F, -0.721737623F, -0.366040915F, -0.100663468F,
    -0.592283607F, -0.524679363F, -1.00319612F, -0.0287024714F, -0.142941922F,
    -0.0273414329F, -0.187085643F, -0.340375811F, -0.408448964F, -0.731819093F,
    -0.262785882F, -0.259408981F, -0.449577361F, -1.59841835F, -1.09776771F,
    -0.00759559404F, -0.581635535F, -0.389545292F, -0.729572117F, -0.711795092F,
    -0.111475438F, -0.886898339F, -0.274253815F, -1.55765951F, -0.344754875F,
    -0.0979032069F, -2.05647874F, -0.781111181F, -0.289984375F, -2.41229653F,
    -1.38970983F, -0.0264657065F, -0.388185233F, -0.533388436F, -1.04606152F,
    -0.357144654F, -0.677393794F, -2.29932213F, -0.362221718F, -0.947165906F,
    -0.351931393F, -1.5179038F, -0.56709826F, -0.473872185F, -0.353946775F,
    -0.235996008F, -3.14554524F, -0.0128211565F, -0.374603331F, -1.23311269F,
    -0.468529582F, 0.0681869686F, -0.657731593F, -0.729974866F, 0.1411587F,
    -0.0183764827F, -2.20467567F, -1.3213954F, -0.047550641F, -0.509082139F,
    -0.776020586F, -1.61853898F, -0.540403247F, -2.36191273F, -1.48095739F,
    -0.0828188956F, -0.0549028926F, -2.15463424F, -0.847302139F, -0.591646671F,
    0.0173392259F, -0.515280724F, -0.757919669F, -0.0718041807F, -0.104352623F,
    -0.0652874708F, -0.405411273F, -0.104719549F, 0.0876458F, -0.397170126F,
    -0.0895414874F, -0.0913094878F, -0.229059666F, 0.0310871545F, -0.232445046F,
    -3.74999213F, -1.0909394F, -0.580077648F, -0.144980639F, -0.938399315F,
    -0.885054946F, -0.185920939F, 0.088028878F, -0.479399741F, -0.00641386956F,
    -2.12080431F, 0.0235293228F, 0.0768237039F, -0.0781724751F, -0.491651803F,
    -0.737773657F, -0.0242606904F, 0.00287138298F, -0.577020109F, -0.529168308F,
    -1.3801F, -1.54090047F, -0.00843488052F, -1.44552183F, -0.256851256F,
    0.0214468725F, -0.224702865F, -0.257240295F, -0.534145653F, -0.595127F,
    0.030332664F, 0.121267326F, 0.0476102866F, 0.0692626238F, -0.144313544F,
    -0.199786603F, 0.360025495F, -0.3124201F, 0.138327464F, 0.271631211F,
    0.227872461F, 0.0550379194F, -0.878420234F, 0.122032478F, 0.284540057F,
    -0.298156381F, -0.233881965F, -0.344915271F, -0.277445823F, 0.158564776F,
    0.215573728F, -0.210978821F, -0.434484273F, 0.130890056F, -0.460150927F,
    0.0477659926F, 0.205801502F, 0.0525011569F, -0.154474914F, -0.275977463F,
    -1.07813692F, 0.338433772F, 0.387943745F, 0.527574241F, -0.0779718682F,
    0.0201748908F, 0.0720950961F, 0.220586136F, 0.0210254937F, 0.237982675F,
    -0.384263575F, 0.189469337F, -0.181570515F, 0.0160622578F, -0.291614F,
    -0.59440577F, 0.197162926F, 0.0458003432F, -0.0523525216F, -0.00369526935F,
    0.185734943F, -0.0206370242F, 0.2881F, 0.216004297F, -0.305491298F,
    -0.59149462F, 0.175224081F, -0.0728539228F, 0.474493951F, -0.629336476F,
    -0.354118139F, 0.0864738449F, 0.258150905F, 0.0192007478F, 0.173313916F,
    -0.113007084F, 0.0569588467F, 0.103170484F, -0.0309238099F, -0.462102413F,
    -0.115732819F, -0.303250134F, -0.0509998277F, -0.0920344591F, -0.122082189F,
    -0.197975039F, -0.264419258F, -0.232672259F, -0.373145401F, 0.0580105372F,
    -0.293160051F, -0.937765241F, -0.47009486F, -0.198276937F, -0.328715295F,
    -0.450605094F, 0.0534747951F, -0.827132404F, -0.621031761F, -0.128858134F,
    0.0927186087F, 0.137640446F, -0.133137748F, -0.32383433F, -0.0973347276F,
    0.0390452407F, -0.202207267F, -0.313674182F, -0.757459581F, -0.378609478F,
    -0.715401113F, -0.189348429F, 0.202125102F, -0.370974064F, 0.130447686F,
    0.175524637F, -0.0952993259F, -0.198389038F, -0.354569316F, -0.372621626F,
    -0.58263725F, -0.133431107F, -0.448359221F, 0.00283956015F, -0.253582239F,
    -0.215548173F, -0.414011359F, 0.138453901F, -0.0559053458F, 0.281616122F,
    -0.315113F, -0.223204225F, 0.01784507F, -0.244521588F, 0.19988656F,
    -0.0531270765F, -0.119891971F, -0.613080859F, -0.446336985F, 0.201168671F,
    -0.604526281F, 0.0973517299F, 0.289383084F, 0.134908661F, -0.626166821F,
    -0.14784883F, 0.027923245F, -0.351374954F, -0.454202324F, -0.0933920369F,
    -0.0388036147F, -0.446063191F, -0.385666162F, -0.40587014F, -0.245443F,
    0.0286308434F, 0.186108261F, -0.346557319F, -0.304460436F, -0.374669671F,
    -0.209957942F, -0.177085623F, -0.402645677F, -0.3026914F, 0.130958959F,
    -0.498549759F, -0.448431253F, -0.239490628F, 0.0781533271F, -0.344896287F,
    0.000871059834F, -0.421872318F, 0.0276416242F, -0.0342503227F, -0.323457867F,
    -0.08977741F, -0.383825272F, 0.0414935052F, -0.0523195341F, 0.0879856944F,
    0.142882019F, -0.522388279F, 0.0791445598F, 0.165214568F, -0.280318F,
    -0.116905488F, -0.206140682F, -0.384315848F, 0.348596156F, -0.0265608318F,
    -0.52014786F, -0.374498844F, -0.246811137F, -0.760289073F, -0.544567704F,
    -0.0144791789F, -0.241212174F, -0.310588807F, -0.436291188F, -0.172882572F,
    -0.078659676F, 0.0368730053F, 0.000366913213F, -0.163282692F, -0.434937865F,
    -0.692222297F, 0.232343361F, 0.0965700671F, -0.0166414827F, -0.521956146F,
    -0.435829967F, -0.48674804F, -0.126131102F, -0.162209228F, 0.0823847577F,
    0.082353346F, 0.052696079F, -0.362121075F, -0.826394439F, -0.892023623F,
    -0.287944734F, -1.04586482F, -0.37755242F, -0.739995718F, -0.369136184F,
    -0.131670788F, -0.554496527F, -0.457356602F, -0.430003524F, -0.324566394F,
    -0.0889707357F, -1.5899874F, -0.0524134748F, 0.0084999986F, -0.0753347278F,
    -0.757139921F, -0.077791959F, -1.19552743F, -0.590688884F, -0.288829029F,
    -0.753368795F, -0.0584624112F, -0.239959955F, -1.16966975F, -0.127764076F,
    -0.491717249F, -0.229512632F, -0.398723304F, -0.624070406F, -0.596122086F,
    -0.0550759F, -0.294726819F, -0.98606354F, -1.30550194F, -0.360876143F,
    -0.304712385F, -0.403262258F, -0.197325781F, -2.57167578F, -0.32676813F,
    -0.980868101F, -0.202448294F, -0.556599736F, -0.845594347F, -0.259189665F,
    -0.00823173113F, -0.815464199F, -0.130042791F, -0.320680737F, 0.036461629F,
    -0.511641145F, 0.0288765319F, -0.0783901736F, -0.466164291F, -0.631300151F,
    -0.218741149F, 0.00474802172F, -0.103175327F, -0.588608563F, -0.278537244F,
    -0.419536293F, -0.0948298126F, -0.0347010568F, -0.0798743F, -0.216645688F,
    -0.351536661F, 0.0147956349F, -0.740724F, -0.146834582F, -0.280187875F,
    -0.321805298F, -0.44255355F, -0.524304211F, -0.990240633F, -0.0878416598F,
    -0.486050785F, -0.199878F, -0.180311292F, -0.401483953F, -0.485456F,
    -0.963982642F, -0.0332951695F, -0.679766655F, -0.279829562F, -0.75028193F,
    -0.860809445F, -1.19379199F, -0.220090225F, -0.0534676276F, -1.21797383F,
    -0.485289484F, 0.00266494323F, -1.60168946F, -0.422811866F, -0.346556187F,
    -0.749123871F, -0.718173504F, -0.610330522F, -0.2046002F, -0.158071503F,
    -0.0713562146F, -0.615968049F, -0.615365803F, -0.555259824F, -0.748068571F,
    -0.480819255F, -0.347161233F, -1.01372373F, -0.0453447737F, -0.386814058F,
    -0.051433567F, -0.264952898F, -0.59793514F, -1.15848303F, -0.728365481F,
    -0.246806324F, -0.481004864F, -0.894986272F, -0.575054646F, 0.0882257894F,
    -0.564508557F, 0.18918851F, -0.95746237F, -0.190941885F, -0.14095436F,
    -0.415752351F, -0.0157939382F, -0.395926863F, -0.349841535F, -0.36134854F,
    -0.876606107F, -0.196800366F, 0.0713347495F, -0.934919178F, -0.424797982F,
    -0.675575376F, -0.497861356F, -0.828122556F, -1.20974648F, -0.157926455F,
    -0.773957551F, -3.23950124F, -0.115836687F, 0.272540808F, -1.65466452F,
    -0.293400258F, -0.685408533F, -0.167360902F, -0.672232747F, 0.0946982428F,
    -0.346524179F, 0.0255071111F, -1.14992881F, -0.05066F, -0.150945053F,
    -0.606266797F, -0.368901789F, -0.28790018F, -0.0446546935F, -0.446586847F,
    -0.71361059F, 0.0467634723F, -0.759665787F, -0.706285179F, -0.0701568052F,
    -0.019658586F, 0.338585854F, -0.13914527F, -0.259737521F, -0.136418819F,
    -0.0313610025F, 0.311084181F, 0.140205309F, -0.192575097F, -0.713347316F,
    -0.134315029F, -0.29873839F, 0.0596390814F, -0.253446817F, -0.523532569F,
    -3.14582467F, -0.636559486F, -0.463465691F, -0.0809273347F, -0.340373605F,
    -0.378796399F, -0.215035453F, 0.0431547835F, -0.250270337F, 0.00534620555F,
    -1.22508597F, 0.0194819458F, -0.72334367F, -0.630449355F, -0.471450657F,
    -0.116603345F, 0.00556944171F, 0.276222855F, -0.647800863F, 0.00688771624F,
    -0.762667656F, -0.504252613F, -1.41591406F, -0.297988951F, -0.286823273F,
    -0.280528069F, 0.115443856F, -0.0780223235F, -0.886144042F, -0.119342662F,
    0.0157376118F, -0.607057035F, -0.150074393F, -0.043059241F, -0.493033648F,
    -0.440422863F, -0.598494768F, -0.170571089F, -0.00371985068F,
    -0.00747530768F, -0.021297263F, -0.703814924F, -0.644203842F, -0.0919510722F,
    -0.11205519F, -0.253056824F, -1.42215741F, -0.775227189F, -0.839667916F,
    -0.725943565F, -0.132381469F, -2.86680508F, -0.095490396F, -0.223454311F,
    -0.30242157F, -0.322187F, -0.194987148F, -0.0683569F, -0.221101016F,
    -0.452435851F, 0.043145787F, -0.0149445673F, -0.00544645498F, -0.101020299F,
    -0.151652F, -0.0830258057F, -0.222398713F, 0.034121111F, -0.0496146157F,
    -0.356766403F, -1.24026895F, -0.309695691F, -0.382953852F, -0.175561771F,
    -0.390012115F, -0.466555119F, -0.518810451F, -0.0916169509F, -0.339074016F,
    -0.0630464F, -0.374362856F, 0.124297462F, -0.435864896F, -0.183842167F,
    0.0677382573F, -0.35409373F, -0.0527471192F, -0.31345126F, 0.0160394311F,
    0.0318373665F, -0.325994074F, -0.743753493F, -0.0186321717F, -0.317008793F,
    -0.319951743F, -0.47231859F, 0.110472225F, -0.0105970483F, -0.312733501F,
    -0.0859326348F, -0.103788912F, -1.09968674F, -0.780282855F, -0.0830072388F,
    -0.0111282142F, -0.392062873F, -0.44619F, -0.155916229F, -0.992211461F,
    -1.30708301F, 0.0285372026F, -1.00112414F, -0.605487227F, -0.174987391F,
    -1.37948847F, -0.769911F, -0.0893241838F, -0.338344544F, -0.00078415F,
    -1.80189753F, -0.416879982F, -0.202427059F, -0.487297297F, 0.0816340521F,
    -0.30555144F, -0.782682896F, -0.890114665F, -0.113319404F, -0.265574396F,
    -1.32824492F, -0.0195806138F, -0.330927521F, -0.0885010734F, -0.43240869F,
    -0.365172148F, -0.154858023F, -0.154118404F, -1.32269418F, -1.05481577F,
    -0.841629505F, 0.00958344247F, -0.186653301F, -0.161028132F, -0.210369423F,
    -0.730302274F, -0.0111832013F, -1.19229507F, -0.767527401F, -0.775093138F,
    -1.97489679F, -0.588104784F, -2.18210888F, -0.502436757F, -0.368169904F,
    -0.00757023F, -0.483978897F, -1.16775334F, 0.0807369128F, -0.53040427F,
    -0.754818082F, -0.331775486F, -0.176110983F, -0.0399485752F, -0.478940278F,
    -0.222877026F, -0.310706645F, -1.71860123F, -0.25991112F, -0.243532032F,
    -0.16052562F, 0.000861793233F, -0.121200994F, -0.845944822F, -0.479815155F,
    -0.514612079F, -0.342745483F, -1.22714102F, -0.282176F, -1.24565303F,
    -0.022217039F, 0.0385682285F, -0.0544512235F, -0.114126861F, -0.211558983F,
    -0.359967F, 0.0989656448F, -0.458524406F, -0.312920779F, 0.00283951685F,
    -0.563016772F, -0.897728264F, -2.32434368F, -0.201391414F, -0.57462132F,
    -0.782070696F, -0.469040453F, -0.970337391F, -0.754630148F, -0.499595195F,
    0.0984159037F, 0.0253057182F, -1.05955F, -0.181835249F, -0.114678033F,
    -0.6601156F, -0.25163132F, -0.282709956F, -0.799002349F, 0.0238572434F,
    -1.37303984F, -0.0886847675F, -0.728685081F, -0.279023826F, -0.74844569F,
    -0.336653739F, -0.927698F, -1.71787381F, -0.504328728F, -1.37608993F,
    -0.0196547881F, -1.06288278F, -0.0225000326F, -1.96017826F, -0.833574712F,
    0.0887440518F, 0.106427394F, 0.0019591786F, -0.346668422F, -1.13803208F,
    -0.0190802608F, -0.353867561F, -0.0716789216F, -2.48455834F, -0.826208293F,
    -0.0923267305F, -0.696392715F, -0.24509339F, -0.610465825F, -0.257168412F,
    -0.665195048F, 0.0952103734F, -0.113520868F, -0.361930579F, -0.334795177F,
    0.0787993744F, 0.0996669531F, -0.910198569F, -0.0335771665F, -0.682739317F,
    -0.79076755F, 0.0440488122F, 0.0211469121F, 0.194025248F, -0.146150425F,
    -0.797025919F, -0.054334674F, -0.355924547F, -0.628604829F, -0.0143814264F,
    -0.583573878F, -0.464293569F, 0.0621837713F, -0.357938349F, -0.421611369F,
    -0.0337930471F, -0.490614146F, -0.314577F, -0.629442513F, -0.315459222F,
    -0.328273475F, -0.239021957F, -0.171062261F, -0.187752411F, -0.391006231F,
    -0.576992214F, -0.137464032F, -0.258889347F, -0.392499715F, -0.178207412F,
    -0.45138523F, 0.0145868119F, -0.543600559F, -0.316729128F, -0.721610725F,
    -0.59365809F, -0.0551058911F, 0.164803475F, -0.0228936858F, 0.282157183F,
    0.00894513354F, -0.287032902F, -0.919769585F, 0.236165509F, -0.358869433F,
    -1.27089179F, -0.512058139F, -0.0422396138F, -0.290774733F, -0.304309279F,
    -0.124757F, -0.779098392F, -0.439821064F, -0.447006911F, -0.0918902606F,
    -0.286911368F, -0.128991812F, -1.58742416F, -0.618019521F, -1.50842178F,
    -0.373185128F, -0.546564162F, -0.374987721F, -0.436250746F, -0.255269945F,
    0.0443362147F, -0.0625980422F, -0.369110733F, -0.245274246F, -0.668929636F,
    -0.244272232F, -0.195706666F, -0.00135975168F, -0.0692020208F, -0.736564517F,
    -0.365405262F, -0.447223783F, 0.0173292719F, -0.237294719F, 0.141626313F,
    -0.232648358F, -0.718108594F, -0.825903177F, 0.0161904581F, -0.122598231F,
    5.95149759E-5F, -0.0795554742F, -0.047605291F, -0.159321323F, -0.814287066F,
    -1.18548226F, -0.0538752414F, -0.514528811F, -0.613573909F, -0.390226841F,
    -0.087902151F, -0.118586056F, -0.141433954F, -0.616825F, -0.118776388F,
    -0.340874463F, 0.0285869185F, 0.0291111618F, -1.07586479F, 0.0538110361F,
    -0.280747503F, 0.00793887302F, -0.660670161F, -0.234233111F, -0.0678696111F,
    -0.0988692716F, -0.190880135F, -0.175879061F, -0.207473829F, -0.284169555F,
    -0.308637172F, 0.0579128489F, -0.00383568951F, 0.00314126629F, -0.323246866F,
    0.0576331802F, -0.0758152828F, 0.00767924357F, -0.0298232362F,
    -0.0812195539F, -0.176524624F, -0.319935858F, 0.00537393289F, -0.788277566F,
    -0.261666656F, -0.135557443F, -0.234597132F, -0.591757655F, 0.129225522F,
    -0.35904637F, -1.53235519F, -0.156371534F, -1.57236874F, -0.794167F,
    -0.721366405F, -0.491088599F, -0.148290917F, -1.71342468F, -0.699066401F,
    -0.0139142172F, -0.0608999133F, -0.731198192F, -0.845309496F, -0.667230248F,
    -0.128499508F, -1.93165302F, -0.262894481F, -1.7065233F, -1.05504525F,
    -0.113354087F, -1.83004522F, -0.254491031F, -0.53742522F, -1.02986419F,
    -0.362030774F, -0.438140452F, 0.0169587F, -0.216353595F, -0.709430516F,
    -0.367851734F, -0.673273F, -0.242640376F, -0.0767040104F, -0.910149395F,
    -0.0287660901F, -1.26711869F, -2.42496705F, -0.131139889F, -0.0909256935F,
    -1.12528336F, -0.114101753F, -0.339281917F, -0.423257172F, -0.31137687F,
    -1.2038976F, -0.0368905477F, -0.728615284F, 0.0267824922F, -0.3137407F,
    -0.611949801F, -0.00440419232F, -0.821386933F, 0.00248677F, -0.0957775041F,
    -0.397035122F, -0.662843645F, -0.483489335F, -0.297939837F, -0.00257977541F,
    -0.827601194F, -1.39500451F, -1.1617142F, -0.253195107F, -0.226898193F,
    -0.561040044F, -0.333363593F, -0.0735471919F, 0.156022742F, -0.433638096F,
    -0.382170796F, -0.115000412F, 0.0843271241F, -0.306110591F, -0.341384709F,
    -0.962859452F, -0.257879585F, -0.313111246F, 0.393786F, -0.287687093F,
    -0.154416248F, -0.564684689F, 0.0243848581F, -0.339996874F, -0.299452662F,
    0.442501068F, -0.652213633F, -0.0407805517F, 0.1232237F, -0.0350740142F,
    -0.0782177523F, -0.376837641F, -0.238518849F, 0.210211501F, -0.245911494F,
    -0.927949548F, 0.0352748744F, -0.309978694F, -0.272091508F, -0.363853127F,
    -0.056502562F, -0.183344066F, 0.13537392F, -0.000187740021F, -0.388116896F,
    -0.229088262F, -0.140224069F, 0.401183456F, -0.0823587179F, -0.41032061F,
    -0.335514724F, -0.379848301F, -0.0317908525F, -0.479154259F, -0.193340629F,
    -0.493745416F, 0.34754613F, -0.525859237F, 0.390810728F, -0.141073138F,
    -0.418490708F, -0.193753675F, -0.475208104F, 0.00878028665F, -0.524071336F,
    -0.144188F, -0.449897856F, -0.326830685F, -0.22756505F, 0.0393825844F,
    -0.0974745825F, -0.386989206F, -0.321218789F, -0.135932013F, 0.0156025F,
    -0.206570625F, 0.304397285F, -0.0128831556F, -0.468607277F, -0.664788604F,
    -0.0882668421F, -0.0548877F, -0.546733499F, -0.175347179F, -0.444540262F,
    -0.80098778F, -0.86593616F, -0.0731888562F, -0.593353808F, -0.437513381F,
    -0.516448498F, -0.42332387F, -0.870336294F, -1.14832556F, 0.0416723415F,
    -1.21730769F, -0.211595103F, -0.165252432F, -2.01688337F, -0.897524357F,
    -0.0694678798F, -0.486702621F, -0.231990159F, -0.573134184F, -0.971782207F,
    -0.57124871F, -0.346572489F, -0.00346708205F, -0.249081F, -0.238039598F,
    -0.867229581F, -0.756565392F, 0.0351422168F, -0.274418175F, -0.790569901F,
    -0.0450564176F, -0.291398406F, -0.0133585464F, -0.506222546F, -0.0254422631F,
    -0.203371227F, -0.0469647162F, -0.318713367F, -0.247362971F, -0.701613665F,
    -0.326639324F, 0.000497117231F, -0.356107205F, 0.0483188629F, -0.711785495F,
    -0.187463939F, -0.0504367091F, -1.06716037F, -0.160170257F, -0.702924252F,
    -0.181852907F, -0.491408676F, -0.586646378F, -0.855909F, 0.0446204841F,
    -0.821798146F, -0.202229008F, -0.0588418171F, -0.250367731F, -0.249753281F,
    0.0505454466F, -0.162191644F, -0.05801991F, -1.35222185F, 0.0540800393F,
    -0.19296217F, -0.00121236907F, -0.819786966F, -0.822900057F, -0.149489745F,
    -0.497147352F, -0.600205362F, -0.0434634835F, -0.553503394F, -0.360810429F,
    -0.473852575F, -0.897379279F, -1.00228512F, -0.673359871F, -0.629662633F,
    -2.56071901F, -0.129076332F, -0.327464104F, -0.391139776F, -1.29003084F,
    -0.0357660688F, -1.03675818F, -0.260430872F, -0.439493984F, -0.491475016F,
    -0.421097308F, -0.701888F, 0.0124869542F, -0.0616634488F, -0.819775403F,
    -1.65420592F, -0.68154484F, -0.130170822F, -0.114577733F, -0.736801744F,
    0.030864805F, -0.241718888F, -0.00950096641F, -0.592025816F, -0.205802411F,
    -1.19083214F, -0.158486858F, -0.330512583F, -1.10712981F, -0.205636322F,
    -0.68001765F, -0.0191633571F, -0.387981057F, -0.0156394951F, -0.440594584F,
    -0.80084908F, -1.87869418F, -1.19585299F, -1.50783741F, -0.985316753F,
    -0.223642603F, -0.211717665F, -0.589652717F, -1.10271943F, 0.0221512467F,
    -0.329406947F, -1.56345475F, -0.300245434F, 0.0272850525F, -0.997616172F,
    -1.00901401F, -0.177552387F, -0.185800046F, -0.0501254238F, -0.200348079F,
    -0.377420157F, -0.0187971834F, -0.0942371115F, -0.148270682F,
    -0.000596095633F, -0.239184082F, -0.748959303F, -0.0706692636F,
    -0.0637958571F, 0.152538568F, -0.0992755368F, -0.862463534F, 0.0249639023F,
    -0.3676368F, 0.0194969941F, -0.279529095F, 0.071586147F, -0.00632242719F,
    -1.78444195F, -0.128326088F, -0.10039594F, 0.23321721F, -0.416922361F,
    -0.312954217F, 0.060417302F, -0.129567489F, -0.296173602F, 0.00345011614F,
    -0.259852171F, -0.115962714F, -0.463155657F, -0.370103866F, -0.173280492F,
    -0.0806272328F, -0.0916130468F, 0.0937630609F, -0.569880188F, -0.0124027096F,
    -0.468102455F, -0.0555833355F, -0.171097785F, -0.747961879F, -0.121258922F,
    -0.417408824F, 0.0278458204F, -0.271615952F, -0.219423801F, -0.129078209F,
    -1.64218836E-5F, -0.288928896F, -0.414523214F, -3.65344715F, 0.151143298F,
    -0.407057106F, -0.404939413F, -0.344929457F, -0.430627018F, -0.594105601F,
    0.00895264F, 0.0619777367F, -0.184925169F, -1.25371945F, 0.0108766304F,
    -0.95107311F, 0.0384702F, -0.02938761F, -0.13413018F, -0.213103101F,
    -0.925367236F, -0.151038647F, -0.406426191F, 0.0395290889F, -0.188008711F,
    -1.80030501F, -0.28799963F, -0.10885442F, -0.458971381F, -0.226219356F,
    -0.0395955F, -0.297426492F, 0.0585935488F, -0.31229949F, -1.34602165F,
    -0.493984491F, -1.06879914F, -0.0455008261F, -0.538124323F, -0.243405297F,
    -0.0403542F, -0.0646821931F, 0.156050891F, 0.054116603F, -0.126514912F,
    -0.160734817F, -0.0106541943F, -0.266052276F, -0.267614156F, -0.318463624F,
    0.061974097F, 0.0801148117F, 0.0808921158F, 0.101672739F, -0.239373058F,
    -0.4910734F, 0.213993326F, -0.699470937F, 0.0784570053F, -0.079995878F,
    -0.199252442F, -0.487347156F, -0.538725078F, -0.0710188523F, -0.228780478F,
    -0.336320132F, -0.365736604F, 0.0490683429F, 0.0910397619F, -1.04418731F,
    -0.317870528F, 0.173821256F, 0.056103617F, -0.952621579F, -0.258097172F,
    -0.00440365821F, -0.0887517557F, -0.205776498F, -0.00779622234F,
    -0.27986443F, -0.276968569F, 0.028169075F, -0.147757933F, -0.269189239F,
    -0.109127223F, -0.367678761F, -0.064573735F, -0.386110842F, -0.21721305F,
    -0.288886786F, -2.38822579F, 0.112478845F, -0.196420342F, 0.0123877348F,
    0.0774532259F, -0.783381641F, -0.734661579F, -0.714025915F, -0.282286435F,
    -0.437109262F, -1.33654964F, 0.006352128F, -0.58837676F, -0.571629047F,
    -0.0837626457F, -0.683004797F, -0.410970598F, -1.25280929F, -0.712439775F,
    -0.275917768F, 0.0426896028F, -0.436764926F, -0.257656693F, -1.28388417F,
    -0.204108328F, -0.428746F, -0.505117F, -0.893472791F, -0.07125F, -1.0974431F,
    -0.157533497F, -0.547282159F, -0.225286171F, -0.289222151F, -0.553736508F,
    -0.15888679F, 0.0481311493F, -0.475113064F, -0.160605296F, -1.15819442F,
    -0.450304508F, -0.827656925F, -0.169250265F, -0.342520803F, -0.343623102F,
    -0.0604558699F, -0.217018485F, 0.0428283736F, 0.0264647529F, -1.05977893F,
    -0.0311389882F, -0.228936985F, -0.592095375F, -1.83217847F, -0.22412698F,
    -0.0438233316F, -0.0749266446F, -0.275868267F, -0.655441523F, -0.463491082F,
    -0.490101F, -0.00192411873F, -0.68331629F, -0.82240361F, -0.267970562F,
    -0.174489275F, -0.346259475F, -1.05566108F, -0.184395775F, -0.0139816217F };

  static const real32_T d[70] = { -0.404973984F, -1.47924876F, -1.40520477F,
    -0.0440349F, -0.925639927F, -0.046220772F, -1.04991841F, -0.948830962F,
    -0.708744705F, -0.840083718F, -0.47821933F, -0.780094445F, -0.81076926F,
    -2.6739862F, -1.75114095F, -0.683524847F, -2.10880399F, 0.195187032F,
    -0.591424644F, -0.705788851F, -0.0124170445F, -0.700080454F, -0.695897043F,
    -1.91887164F, -0.890337706F, -0.991529F, -0.696184754F, -0.969457328F,
    -0.933917224F, 0.58626312F, -0.670015216F, -1.47565269F, -0.492990971F,
    -0.500559807F, -0.863719583F, -0.980582595F, -3.21613693F, 0.999653697F,
    -0.870139241F, 0.663882375F, -1.02493083F, -1.67620337F, -0.656298637F,
    -0.83158505F, -1.27333891F, -0.255669445F, -0.809606552F, -0.86629051F,
    -0.0935821459F, -0.760834515F, 1.00589597F, -1.33294129F, -1.1591723F,
    0.891729414F, -0.861029506F, 0.540840089F, -1.01101267F, -0.987861F,
    -1.42436039F, -0.835255682F, -1.07609713F, -0.221193343F, -0.477842748F,
    -0.637709F, -1.19599533F, -2.50319433F, -1.03111386F, -0.710698724F,
    -0.664940953F, -1.31152451F };

  static const real32_T tmp_3[210] = { -0.110586576F, 0.0627880245F,
    0.145417109F, 0.00340546528F, 0.199529365F, -0.00929894298F, -0.117914692F,
    0.0348620228F, 0.438828F, -0.0477494597F, -0.0156335104F, -0.0678266436F,
    0.290247351F, -0.147663414F, -0.301633179F, 0.0206734147F, -0.0160285383F,
    0.0411477163F, -0.0614527725F, 0.0849306583F, -0.0426418148F, -0.0362203978F,
    0.0239641052F, 0.0512236468F, 0.056956552F, -0.035348881F, -0.120414935F,
    -0.105338402F, -0.275239557F, -0.565455437F, -0.0593605414F, 0.0248394292F,
    -0.10575527F, 0.176141962F, -0.1639698F, 0.025287699F, -0.0342838876F,
    -0.194304109F, 0.0398150235F, 0.0603175648F, -0.138021499F, 0.0638984367F,
    -0.325708598F, -0.102882326F, -0.254600257F, -0.0198164191F, 0.0395614281F,
    0.205806315F, -0.0607803725F, 0.0891101584F, -0.191796169F, -0.0331937857F,
    0.048548732F, -0.0422916636F, 0.34867844F, 0.218777984F, -0.224035F,
    0.165845141F, 0.0157193486F, 0.272766232F, 0.000577727857F, -0.0627065673F,
    -0.122146979F, 0.0495768599F, -0.178397179F, 0.200756222F, 0.0898674205F,
    -0.130210742F, 0.302105218F, -0.0871252343F, -0.0897635743F, 0.108531274F,
    0.0832175314F, -0.113356821F, -0.386467248F, 0.228953928F, -0.168689474F,
    0.010363183F, 0.254321188F, 0.0401255749F, 0.0534948F, 0.041618824F,
    -0.0855883732F, -0.0186037645F, 0.0352267101F, 0.00295574707F, -0.355695277F,
    0.0157564711F, 0.050728213F, 0.089194417F, 0.26282689F, 0.293535799F,
    0.41378653F, -0.089883104F, 0.13659595F, 0.0143485451F, -0.0984489918F,
    -0.0615825579F, -0.0289000329F, 0.275962353F, 0.0925754756F, 0.596027792F,
    -0.0307608806F, -0.266941398F, -0.33978F, 0.142934456F, -0.245918676F,
    -0.246534318F, -0.0606276281F, -0.453087777F, 0.436971217F, 0.0614344105F,
    -0.013082738F, 0.114258111F, 0.115400754F, -0.102752417F, -0.086609371F,
    -0.0521171391F, 0.0140326237F, 0.151992798F, -0.0885927603F, 0.146448746F,
    0.394646913F, 0.0105409576F, 0.0967787057F, -0.0618231483F, 0.146649465F,
    -0.0399737619F, 0.0457415357F, 0.0645732656F, 0.0686997548F, -0.0556177348F,
    0.0976867899F, 0.0890454724F, 0.665554583F, -0.0795137808F, -0.199928835F,
    -0.108599827F, -0.0668131337F, -0.125348553F, -0.176712394F, -0.315377414F,
    0.12028449F, -0.13994886F, 0.0337638259F, -0.0391025618F, -0.134521931F,
    -0.0521359406F, 0.162205413F, 0.0843734667F, 0.0501529761F, -0.0220856797F,
    0.0359951332F, 0.11360161F, 0.0822823122F, -0.145930424F, -0.140800923F,
    0.101738892F, -0.0664420202F, -0.0254443213F, 0.0629865453F, 0.105178401F,
    -0.165498063F, -0.0141767031F, -0.409941822F, 0.0390714072F, 0.0411840454F,
    -0.110241219F, 0.0421753675F, 0.0347978324F, -0.0478148721F, 0.0241782106F,
    -0.251796693F, 0.141261175F, -0.106650822F, -0.185782328F, 0.201081961F,
    -0.299131095F, 0.139556631F, -0.00762522221F, -0.260250181F, -0.131001815F,
    0.0542340726F, 0.00473049656F, -0.0634959191F, 0.0751764402F, 0.00257256604F,
    0.0748829F, -0.222466543F, 0.0538471863F, -0.160035565F, -0.208204672F,
    0.306367069F, -0.00500211259F, -0.233434245F, -0.136094451F, 0.21009393F,
    -0.0778888389F, -0.0533066578F, 0.166733623F, -0.122574806F, -0.425351292F,
    -0.0908551F, -0.185799614F, -0.297011405F, -0.0939965695F, -0.572619677F,
    -0.136740908F, -0.0739596635F, 0.438300371F };

  matrixMultiply17233443566231932563(70, 14, 1, 64, 64, 64, &(&tmp_0[0])[0],
    &inputsT_0_f1[0], &outT_f7_0_f1[0]);
  for (c_dim1 = 0; c_dim1 < 70; c_dim1++) {
    outT_f7_0_f1_0 = outT_f7_0_f1[c_dim1] + b[c_dim1];
    if ((outT_f7_0_f1_0 <= 0.0F) || rtIsNaNF(outT_f7_0_f1_0)) {
      outT_f7_0_f1[c_dim1] = 0.0F;
    } else {
      outT_f7_0_f1[c_dim1] = outT_f7_0_f1_0;
    }
  }

  matrixMultiply17233443566231932563(70, 70, 1, 64, 64, 64, &(&tmp_1[0])[0],
    &outT_f7_0_f1[0], &outT_f5_0_f1[0]);
  for (c_dim1 = 0; c_dim1 < 70; c_dim1++) {
    outT_f7_0_f1_0 = outT_f5_0_f1[c_dim1] + c[c_dim1];
    if ((outT_f7_0_f1_0 <= 0.0F) || rtIsNaNF(outT_f7_0_f1_0)) {
      outT_f5_0_f1[c_dim1] = 0.0F;
    } else {
      outT_f5_0_f1[c_dim1] = outT_f7_0_f1_0;
    }
  }

  matrixMultiply17233443566231932563(70, 70, 1, 64, 64, 64, &(&tmp_2[0])[0],
    &outT_f5_0_f1[0], &tmp[0]);
  for (c_dim1 = 0; c_dim1 < 70; c_dim1++) {
    outT_f7_0_f1_0 = tmp[c_dim1] + d[c_dim1];
    if ((outT_f7_0_f1_0 <= 0.0F) || rtIsNaNF(outT_f7_0_f1_0)) {
      outT_f7_0_f1[c_dim1] = 0.0F;
    } else {
      outT_f7_0_f1[c_dim1] = outT_f7_0_f1_0;
    }
  }

  matrixMultiply17233443566231932563(3, 70, 1, 64, 64, 64, &(&tmp_3[0])[0],
    &outT_f7_0_f1[0], &outputs_0_f1[0]);
  outputs_0_f1[0] = static_cast<real32_T>(tanh(static_cast<real_T>(outputs_0_f1
    [0] - 0.00562550034F)));
  outputs_0_f1[1] = static_cast<real32_T>(tanh(static_cast<real_T>(outputs_0_f1
    [1] + 0.00332334777F)));
  outputs_0_f1[2] = static_cast<real32_T>(tanh(static_cast<real_T>(outputs_0_f1
    [2] + 0.00973049458F)));
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
  real_T tmp_0[96];
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
  real_T rtb_Gain_m[6];
  real_T rtb_Gain1_g[5];
  real_T rtb_TmpSignalConversionAtGain2I[5];
  real_T rtb_VectorConcatenate[5];
  real_T A[4];
  real_T Linv[4];
  real_T Linv_1[4];
  real_T rtb_Switch[3];
  real_T rtb_Switch_h_0[3];
  real_T rtb_Switch_1[2];
  real_T rtb_Switch_f[2];
  real_T rtb_ie_sat[2];
  real_T Mean_AccVal;
  real_T a;
  real_T rtb_DeadZone;
  real_T rtb_DeadZone_g;
  real_T rtb_F;
  real_T rtb_Gain1_c_0;
  real_T rtb_Gain1_c_idx_0;
  real_T rtb_Gain1_e_idx_0;
  real_T rtb_Gain1_e_idx_1;
  real_T rtb_Gain2_d;
  real_T rtb_Gain3;
  real_T rtb_Gain8;
  real_T rtb_IntegralGain_n;
  real_T rtb_MaxofElements;
  real_T rtb_Saturation;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_e;
  real_T rtb_Saturation_gb;
  real_T rtb_Sum13;
  real_T rtb_Sum3;
  real_T rtb_Sum4;
  real_T rtb_Sum6;
  real_T rtb_Sum8;
  real_T rtb_Sum_d;
  real_T rtb_Sum_h;
  real_T rtb_Sum_p;
  real_T rtb_Switch_h_idx_0;
  real_T rtb_Switch_h_idx_1;
  real_T ssq;
  real_T tmp_1;
  real_T tmp_2;
  int32_T A_tmp;
  int32_T b_c_tmp;
  int32_T d;
  int32_T e;
  int32_T i;
  int32_T idx;
  int32_T info;
  int32_T jmax;
  int8_T tmp_3;
  int8_T tmp_4;
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

  // S-Function (ADC): '<S84>/ADC'
  imperix_control_B.ADC = (float)(*ix_raw_adc_ptr_0_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S86>/ADC'
  imperix_control_B.ADC_c = (float)(*ix_raw_adc_ptr_1_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S74>/ADC'
  imperix_control_B.ADC_o = (float)(*ix_raw_adc_ptr_2_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S62>/ADC'
  imperix_control_B.ADC_g = (float)(*ix_raw_adc_ptr_3_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S76>/ADC'
  imperix_control_B.ADC_p = (float)(*ix_raw_adc_ptr_4_0) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S78>/ADC'
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

  // S-Function (PROBE): '<S209>/S-Function'
  is1 = imperix_control_B.DataTypeConversion3[0];

  // S-Function (PROBE): '<S211>/S-Function'
  is2 = imperix_control_B.DataTypeConversion3[1];

  // S-Function (ADC): '<S70>/ADC'
  imperix_control_B.ADC_b = (float)(*ix_raw_adc_ptr_6_0) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S88>/ADC'
  imperix_control_B.ADC_n = (float)(*ix_raw_adc_ptr_7_0) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S64>/ADC'
  imperix_control_B.ADC_cr = (float)(*ix_raw_adc_ptr_0_1) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S72>/ADC'
  imperix_control_B.ADC_ge = (float)(*ix_raw_adc_ptr_1_1) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S66>/ADC'
  imperix_control_B.ADC_p2 = (float)(*ix_raw_adc_ptr_2_1) * 0.027466F + 0.0F;

  // S-Function (ADC): '<S68>/ADC'
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

  // S-Function (PROBE): '<S213>/S-Function'
  Vc5 = imperix_control_B.DataTypeConversion4[4];

  // S-Function (PROBE): '<S215>/S-Function'
  Vc6 = imperix_control_B.DataTypeConversion4[5];

  // S-Function (ADC): '<S80>/ADC'
  imperix_control_B.ADC_bz = (float)(*ix_raw_adc_ptr_4_1) * 0.012207F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion5' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  imperix_control_B.DataTypeConversion5 = imperix_control_B.ADC_bz;

  // S-Function (PROBE): '<S217>/S-Function'
  wm = imperix_control_B.DataTypeConversion5;

  // S-Function (PROBE): '<S219>/S-Function'
  is3 = imperix_control_B.DataTypeConversion3[2];

  // S-Function (PROBE): '<S221>/S-Function'
  is4 = imperix_control_B.DataTypeConversion3[3];

  // S-Function (PROBE): '<S223>/S-Function'
  is5 = imperix_control_B.DataTypeConversion3[4];

  // S-Function (PROBE): '<S225>/S-Function'
  is6 = imperix_control_B.DataTypeConversion3[5];

  // S-Function (PROBE): '<S227>/S-Function'
  Vc1 = imperix_control_B.DataTypeConversion4[0];

  // S-Function (PROBE): '<S229>/S-Function'
  Vc2 = imperix_control_B.DataTypeConversion4[1];

  // S-Function (PROBE): '<S231>/S-Function'
  Vc3 = imperix_control_B.DataTypeConversion4[2];

  // S-Function (PROBE): '<S233>/S-Function'
  Vc4 = imperix_control_B.DataTypeConversion4[3];

  // S-Function (TUNABLE_PARAM): '<S543>/S-Function'
  imperix_control_B.SFunction = F_ref;

  // S-Function (TUNABLE_PARAM): '<S547>/S-Function'
  imperix_control_B.SFunction_k = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double'
  //   DataTypeConversion: '<S1>/Cast To Double1'

  Mean_AccVal = imperix_control_B.SFunction;
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
    rtb_DeadZone = imperix_control_B.SFunction - imperix_control_DW.F_prev;
    if (rtIsNaN(rtb_DeadZone)) {
      ssq = (rtNaN);
    } else if (rtb_DeadZone < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (rtb_DeadZone > 0.0);
    }

    Mean_AccVal = ssq * imperix_control_DW.dF + imperix_control_DW.F_prev;
  }

  if (fabs(imperix_control_B.SFunction_k - imperix_control_DW.w_prev) >
      imperix_control_DW.dw) {
    // '<S21>:1:25'
    // '<S21>:1:26'
    rtb_DeadZone = imperix_control_B.SFunction_k - imperix_control_DW.w_prev;
    if (rtIsNaN(rtb_DeadZone)) {
      ssq = (rtNaN);
    } else if (rtb_DeadZone < 0.0) {
      ssq = -1.0;
    } else {
      ssq = (rtb_DeadZone > 0.0);
    }

    rtb_Sum4 = ssq * imperix_control_DW.dw + imperix_control_DW.w_prev;
  }

  // '<S21>:1:29'
  imperix_control_DW.F_prev = Mean_AccVal;

  // '<S21>:1:30'
  imperix_control_DW.w_prev = rtb_Sum4;

  // '<S21>:1:32'
  rtb_F = imperix_control_DW.F_max * Mean_AccVal;

  // S-Function (TUNABLE_PARAM): '<S545>/S-Function'
  // '<S21>:1:33'
  imperix_control_B.SFunction_kx = do_control;

  // RateTransition generated from: '<S1>/Sum7' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'
  //   RateTransition generated from: '<S1>/Sum5'
  //   RateTransition generated from: '<S26>/Input format'
  //   RateTransition generated from: '<S26>/Switch'
  //   RateTransition generated from: '<S48>/IC'
  //   RateTransition generated from: '<S50>/Gain'
  //
  tmp = (imperix_control_M->Timing.RateInteraction.TID0_1 == 1);
  if (tmp) {
    // RateTransition generated from: '<S1>/Sum7'
    imperix_control_B.TmpRTBAtSum7Inport1 =
      imperix_control_DW.TmpRTBAtSum7Inport1_Buffer0;
  }

  // End of RateTransition generated from: '<S1>/Sum7'

  // S-Function (sdspstatfcns): '<S50>/Mean' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  Mean_AccVal = imperix_control_B.ADC_b;
  for (i = 4; i >= 0; i--) {
    Mean_AccVal += rtb_DataTypeConversion1[5 - i];
  }

  // Sum: '<S24>/Sum' incorporates:
  //   Gain: '<S24>/Gain1'
  //   Gain: '<S24>/Gain2'
  //   S-Function (sdspstatfcns): '<S50>/Mean'
  //   UnitDelay: '<S24>/Unit Delay1'

  imperix_control_DW.UnitDelay1_DSTATE = (1.0 - imperix_control_P.TEB.alpha) *
    (Mean_AccVal / 6.0) + imperix_control_P.TEB.alpha *
    imperix_control_DW.UnitDelay1_DSTATE;

  // Sum: '<S1>/Sum7' incorporates:
  //   UnitDelay: '<S24>/Unit Delay1'

  Mean_AccVal = imperix_control_B.TmpRTBAtSum7Inport1 -
    imperix_control_DW.UnitDelay1_DSTATE;

  // Sum: '<S197>/Sum' incorporates:
  //   DiscreteIntegrator: '<S188>/Integrator'
  //   Gain: '<S193>/Proportional Gain'

  rtb_DeadZone = imperix_control_P.TEB.kp * Mean_AccVal +
    imperix_control_DW.Integrator_DSTATE;

  // Saturate: '<S195>/Saturation'
  if (rtb_DeadZone > imperix_control_P.TEB.u_max) {
    rtb_Saturation_gb = imperix_control_P.TEB.u_max;
  } else if (rtb_DeadZone < -imperix_control_P.TEB.u_max) {
    rtb_Saturation_gb = -imperix_control_P.TEB.u_max;
  } else {
    rtb_Saturation_gb = rtb_DeadZone;
  }

  // End of Saturate: '<S195>/Saturation'

  // Gain: '<S56>/Gain1'
  for (i = 0; i < 5; i++) {
    rtb_Gain1_g[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    ssq = rtb_DataTypeConversion2[i];
    for (idx = 0; idx < 5; idx++) {
      rtb_Gain1_g[idx] += imperix_control_P.M2C.A[5 * i + idx] * ssq;
    }
  }

  // End of Gain: '<S56>/Gain1'

  // Sum: '<S49>/Sum3'
  rtb_IntegralGain_n = rtb_Saturation_gb - rtb_Gain1_g[0];

  // Sum: '<S467>/Sum' incorporates:
  //   DiscreteIntegrator: '<S458>/Integrator'
  //   Gain: '<S463>/Proportional Gain'

  rtb_DeadZone_g = imperix_control_P.PCC.kp * rtb_IntegralGain_n +
    imperix_control_DW.Integrator_DSTATE_h;

  // Saturate: '<S465>/Saturation'
  if (rtb_DeadZone_g > imperix_control_P.PCC.u_max) {
    ssq = imperix_control_P.PCC.u_max;
  } else if (rtb_DeadZone_g < -imperix_control_P.PCC.u_max) {
    ssq = -imperix_control_P.PCC.u_max;
  } else {
    ssq = rtb_DeadZone_g;
  }

  // Sum: '<S49>/Sum13' incorporates:
  //   Constant: '<S49>/Constant1'
  //   Saturate: '<S465>/Saturation'

  rtb_Sum13 = ssq - 1.5 * imperix_control_P.M2C.Vdc;

  // SignalConversion generated from: '<S17>/Vector Concatenate'
  rtb_VectorConcatenate[0] = rtb_Sum13;

  // Sum: '<S1>/Sum4' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'
  //   MATLAB Function: '<S1>/IM references'

  rtb_Sum4 = imperix_control_DW.w_max * rtb_Sum4 - imperix_control_B.ADC_bz;

  // Sum: '<S277>/Sum' incorporates:
  //   DiscreteIntegrator: '<S268>/Integrator'
  //   Gain: '<S273>/Proportional Gain'

  rtb_Sum_d = imperix_control_P.FOC.kp_w * rtb_Sum4 +
    imperix_control_DW.Integrator_DSTATE_e;

  // Saturate: '<S275>/Saturation'
  if (rtb_Sum_d > imperix_control_P.FOC.u_max) {
    rtb_Saturation = imperix_control_P.FOC.u_max;
  } else if (rtb_Sum_d < -imperix_control_P.FOC.u_max) {
    rtb_Saturation = -imperix_control_P.FOC.u_max;
  } else {
    rtb_Saturation = rtb_Sum_d;
  }

  // End of Saturate: '<S275>/Saturation'

  // Gain: '<S1>/Gain2' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  rtb_Gain2_d = imperix_control_P.IM.np * imperix_control_B.ADC_bz;

  // Sum: '<S1>/Sum3' incorporates:
  //   Bias: '<S1>/Add Constant'
  //   Gain: '<S1>/Gain4'
  //   Product: '<S1>/Divide1'

  rtb_Sum3 = rtb_Saturation / (rtb_F + imperix_control_P.AddConstant_Bias) *
    (imperix_control_P.IM.Lm / imperix_control_P.IM.tau_r) + rtb_Gain2_d;

  // Gain: '<S47>/Gain'
  rtb_MaxofElements = imperix_control_P.IM.Lo * rtb_Sum3;

  // RateTransition generated from: '<S1>/Sum5'
  if (tmp) {
    // RateTransition generated from: '<S1>/Sum5'
    imperix_control_B.TmpRTBAtSum5Inport2 =
      imperix_control_DW.TmpRTBAtSum5Inport2_Buffer0;
  }

  // Sum: '<S1>/Sum5'
  rtb_F -= imperix_control_B.TmpRTBAtSum5Inport2;

  // Sum: '<S137>/Sum' incorporates:
  //   DiscreteIntegrator: '<S128>/Integrator'
  //   Gain: '<S133>/Proportional Gain'

  rtb_Gain8 = imperix_control_P.FOC.kp_F * rtb_F +
    imperix_control_DW.Integrator_DSTATE_hf;

  // Saturate: '<S135>/Saturation'
  if (rtb_Gain8 > imperix_control_P.FOC.u_max) {
    rtb_Saturation_b = imperix_control_P.FOC.u_max;
  } else if (rtb_Gain8 < -imperix_control_P.FOC.u_max) {
    rtb_Saturation_b = -imperix_control_P.FOC.u_max;
  } else {
    rtb_Saturation_b = rtb_Gain8;
  }

  // End of Saturate: '<S135>/Saturation'

  // Gain: '<S477>/Gain3' incorporates:
  //   Gain: '<S51>/Gain2'

  tmp_1 = 0.0;
  tmp_2 = 0.0;
  for (i = 0; i < 3; i++) {
    ssq = rtb_Gain1_g[i + 2] * imperix_control_P.Gain2_Gain;
    tmp_1 += imperix_control_P.Gain3_Gain[3 * i] * ssq;
    tmp_2 += imperix_control_P.Gain3_Gain[3 * i + 1] * ssq;
  }

  // End of Gain: '<S477>/Gain3'

  // Gain: '<S477>/Gain1'
  rtb_Gain1_e_idx_0 = imperix_control_P.Gain1_Gain * tmp_1;
  rtb_Gain1_e_idx_1 = imperix_control_P.Gain1_Gain * tmp_2;

  // RateTransition generated from: '<S48>/IC'
  if (tmp) {
    // RateTransition generated from: '<S48>/IC'
    imperix_control_B.TmpRTBAtICOutport1 =
      imperix_control_DW.TmpRTBAtICOutport1_Buffer0;
  }

  // RelationalOperator: '<S478>/Compare' incorporates:
  //   Constant: '<S476>/Constant'
  //   Constant: '<S478>/Constant'

  rtb_Compare = (imperix_control_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_control_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S476>/Subsystem1' incorporates:
  //   EnablePort: '<S481>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S481>/Fcn'
    imperix_control_B.Fcn = rtb_Gain1_e_idx_0 * cos
      (imperix_control_B.TmpRTBAtICOutport1) + rtb_Gain1_e_idx_1 * sin
      (imperix_control_B.TmpRTBAtICOutport1);

    // Fcn: '<S481>/Fcn1'
    imperix_control_B.Fcn1 = -rtb_Gain1_e_idx_0 * sin
      (imperix_control_B.TmpRTBAtICOutport1) + rtb_Gain1_e_idx_1 * cos
      (imperix_control_B.TmpRTBAtICOutport1);
  }

  // End of Outputs for SubSystem: '<S476>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S476>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S480>/Enable'

  // RelationalOperator: '<S479>/Compare' incorporates:
  //   Constant: '<S476>/Constant'
  //   Constant: '<S479>/Constant'

  if (imperix_control_P.AlphaBetaZerotodq0_Alignment ==
      imperix_control_P.CompareToConstant1_const) {
    // Fcn: '<S480>/Fcn'
    imperix_control_B.Fcn_p = rtb_Gain1_e_idx_0 * sin
      (imperix_control_B.TmpRTBAtICOutport1) - rtb_Gain1_e_idx_1 * cos
      (imperix_control_B.TmpRTBAtICOutport1);

    // Fcn: '<S480>/Fcn1'
    imperix_control_B.Fcn1_h = rtb_Gain1_e_idx_0 * cos
      (imperix_control_B.TmpRTBAtICOutport1) + rtb_Gain1_e_idx_1 * sin
      (imperix_control_B.TmpRTBAtICOutport1);
  }

  // End of RelationalOperator: '<S479>/Compare'
  // End of Outputs for SubSystem: '<S476>/Subsystem - pi//2 delay'

  // Switch: '<S476>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_h_idx_0 = imperix_control_B.Fcn;
    rtb_Switch_h_idx_1 = imperix_control_B.Fcn1;
  } else {
    rtb_Switch_h_idx_0 = imperix_control_B.Fcn_p;
    rtb_Switch_h_idx_1 = imperix_control_B.Fcn1_h;
  }

  // End of Switch: '<S476>/Switch'

  // Sum: '<S47>/Sum6'
  rtb_Sum6 = rtb_Saturation_b - rtb_Switch_h_idx_0;

  // Sum: '<S351>/Sum' incorporates:
  //   DiscreteIntegrator: '<S342>/Integrator'
  //   Gain: '<S347>/Proportional Gain'

  rtb_Sum_p = imperix_control_P.MCC.kp * rtb_Sum6 +
    imperix_control_DW.Integrator_DSTATE_b;

  // Saturate: '<S349>/Saturation'
  if (rtb_Sum_p > imperix_control_P.MCC.u_max) {
    rtb_Saturation_e = imperix_control_P.MCC.u_max;
  } else if (rtb_Sum_p < -imperix_control_P.MCC.u_max) {
    rtb_Saturation_e = -imperix_control_P.MCC.u_max;
  } else {
    rtb_Saturation_e = rtb_Sum_p;
  }

  // End of Saturate: '<S349>/Saturation'

  // Sum: '<S47>/Sum' incorporates:
  //   Product: '<S47>/Product1'

  rtb_Switch_h_idx_0 = rtb_Saturation_e - rtb_MaxofElements * rtb_Saturation;

  // Sum: '<S47>/Sum8'
  rtb_Sum8 = rtb_Saturation - rtb_Switch_h_idx_1;

  // Sum: '<S403>/Sum' incorporates:
  //   DiscreteIntegrator: '<S394>/Integrator'
  //   Gain: '<S399>/Proportional Gain'

  rtb_Sum_h = imperix_control_P.MCC.kp * rtb_Sum8 +
    imperix_control_DW.Integrator_DSTATE_k;

  // Saturate: '<S401>/Saturation'
  if (rtb_Sum_h > imperix_control_P.MCC.u_max) {
    rtb_Gain3 = imperix_control_P.MCC.u_max;
  } else if (rtb_Sum_h < -imperix_control_P.MCC.u_max) {
    rtb_Gain3 = -imperix_control_P.MCC.u_max;
  } else {
    rtb_Gain3 = rtb_Sum_h;
  }

  // End of Saturate: '<S401>/Saturation'

  // Sum: '<S47>/Sum1' incorporates:
  //   Product: '<S47>/Product'

  rtb_Switch_h_idx_1 = rtb_Saturation_b * rtb_MaxofElements + rtb_Gain3;

  // RelationalOperator: '<S412>/Compare' incorporates:
  //   Constant: '<S307>/Constant'
  //   Constant: '<S412>/Constant'

  rtb_Compare = (imperix_control_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_control_P.CompareToConstant_const_h);

  // Outputs for Enabled SubSystem: '<S307>/Subsystem1'
  imperix_control_Subsystem1(rtb_Compare, rtb_Switch_h_idx_0, rtb_Switch_h_idx_1,
    imperix_control_B.TmpRTBAtICOutport1, &imperix_control_B.Fcn_b,
    &imperix_control_B.Fcn1_o);

  // End of Outputs for SubSystem: '<S307>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S307>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S413>/Compare' incorporates:
  //   Constant: '<S307>/Constant'
  //   Constant: '<S413>/Constant'

  imperix_c_Subsystempi2delay(static_cast<uint8_T>
    (imperix_control_P.dq0toAlphaBetaZero_Alignment ==
     imperix_control_P.CompareToConstant1_const_f), rtb_Switch_h_idx_0,
    rtb_Switch_h_idx_1, imperix_control_B.TmpRTBAtICOutport1,
    &imperix_control_B.Fcn_k, &imperix_control_B.Fcn1_l);

  // End of Outputs for SubSystem: '<S307>/Subsystem - pi//2 delay'

  // Switch: '<S307>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_h_idx_0 = imperix_control_B.Fcn_b;
    rtb_Switch_h_idx_1 = imperix_control_B.Fcn1_o;
  } else {
    rtb_Switch_h_idx_0 = imperix_control_B.Fcn_k;
    rtb_Switch_h_idx_1 = imperix_control_B.Fcn1_l;
  }

  // End of Switch: '<S307>/Switch'

  // Gain: '<S47>/Gain1'
  rtb_Gain1_c_0 = imperix_control_P.Gain1_Gain_p * rtb_Switch_h_idx_0;
  rtb_Gain1_c_idx_0 = rtb_Gain1_c_0;

  // SignalConversion generated from: '<S17>/Vector Concatenate' incorporates:
  //   Gain: '<S47>/Gain1'

  rtb_VectorConcatenate[1] = rtb_Gain1_c_0;

  // Gain: '<S47>/Gain1'
  rtb_Gain1_c_0 = imperix_control_P.Gain1_Gain_p * rtb_Switch_h_idx_1;

  // SignalConversion generated from: '<S17>/Vector Concatenate' incorporates:
  //   Gain: '<S47>/Gain1'

  rtb_VectorConcatenate[2] = rtb_Gain1_c_0;

  // RateTransition generated from: '<S26>/Switch'
  if (tmp) {
    // RateTransition generated from: '<S26>/Switch'
    imperix_control_B.TmpRTBAtSwitchInport1[0] =
      imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[0];
    imperix_control_B.TmpRTBAtSwitchInport1[1] =
      imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[1];
    imperix_control_B.TmpRTBAtSwitchInport1[2] =
      imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[2];
  }

  // S-Function (sdspstatfcns): '<S26>/Mean' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  rtb_MaxofElements = imperix_control_B.ADC_b;
  for (i = 4; i >= 0; i--) {
    rtb_MaxofElements += rtb_DataTypeConversion1[5 - i];
  }

  rtb_MaxofElements /= 6.0;

  // End of S-Function (sdspstatfcns): '<S26>/Mean'

  // Abs: '<S26>/Abs' incorporates:
  //   Sum: '<S26>/Sum'

  for (i = 0; i < 6; i++) {
    rtb_Gain_m[i] = fabs(rtb_DataTypeConversion1[i] - rtb_MaxofElements);
  }

  // End of Abs: '<S26>/Abs'

  // MinMax: '<S26>/Max of Elements'
  rtb_MaxofElements = rtb_Gain_m[0];
  for (i = 0; i < 5; i++) {
    ssq = rtb_Gain_m[i + 1];
    if ((!(rtb_MaxofElements >= ssq)) && (!rtIsNaN(ssq))) {
      rtb_MaxofElements = ssq;
    }
  }

  // RateTransition generated from: '<S26>/Switch'
  if (tmp) {
    // RateTransition generated from: '<S26>/Switch'
    imperix_control_B.TmpRTBAtSwitchInport3[0] =
      imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[0];
    imperix_control_B.TmpRTBAtSwitchInport3[1] =
      imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[1];
    imperix_control_B.TmpRTBAtSwitchInport3[2] =
      imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[2];
  }

  // Switch: '<S26>/Switch' incorporates:
  //   MinMax: '<S26>/Max of Elements'
  //   RateTransition generated from: '<S26>/Switch'
  //
  if (rtb_MaxofElements >= imperix_control_P.Switch_Threshold) {
    rtb_Switch[0] = imperix_control_B.TmpRTBAtSwitchInport1[0];
    rtb_Switch[1] = imperix_control_B.TmpRTBAtSwitchInport1[1];
    rtb_Switch[2] = imperix_control_B.TmpRTBAtSwitchInport1[2];
  } else {
    rtb_Switch[0] = imperix_control_B.TmpRTBAtSwitchInport3[0];
    rtb_Switch[1] = imperix_control_B.TmpRTBAtSwitchInport3[1];
    rtb_Switch[2] = imperix_control_B.TmpRTBAtSwitchInport3[2];
  }

  // End of Switch: '<S26>/Switch'

  // Gain: '<S26>/Gain3'
  rtb_TmpSignalConversionAtGain2I[0] = imperix_control_P.Gain3_Gain_j[0] *
    rtb_Saturation_gb;
  rtb_TmpSignalConversionAtGain2I[1] = imperix_control_P.Gain3_Gain_j[1] *
    rtb_Saturation_gb;

  // RelationalOperator: '<S300>/Compare' incorporates:
  //   Constant: '<S299>/Constant'
  //   Constant: '<S300>/Constant'

  rtb_Compare = (imperix_control_P.dq0toAlphaBetaZero_Alignment_k ==
                 imperix_control_P.CompareToConstant_const_m);

  // Outputs for Enabled SubSystem: '<S299>/Subsystem1'
  imperix_control_Subsystem1(rtb_Compare, rtb_Saturation_b, rtb_Saturation,
    imperix_control_B.TmpRTBAtICOutport1, &imperix_control_B.Fcn_c,
    &imperix_control_B.Fcn1_f);

  // End of Outputs for SubSystem: '<S299>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S299>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S301>/Compare' incorporates:
  //   Constant: '<S299>/Constant'
  //   Constant: '<S301>/Constant'

  imperix_c_Subsystempi2delay(static_cast<uint8_T>
    (imperix_control_P.dq0toAlphaBetaZero_Alignment_k ==
     imperix_control_P.CompareToConstant1_const_p), rtb_Saturation_b,
    rtb_Saturation, imperix_control_B.TmpRTBAtICOutport1,
    &imperix_control_B.Fcn_h, &imperix_control_B.Fcn1_a);

  // End of Outputs for SubSystem: '<S299>/Subsystem - pi//2 delay'

  // Switch: '<S299>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_f[0] = imperix_control_B.Fcn_c;
    rtb_Switch_f[1] = imperix_control_B.Fcn1_f;
  } else {
    rtb_Switch_f[0] = imperix_control_B.Fcn_h;
    rtb_Switch_f[1] = imperix_control_B.Fcn1_a;
  }

  // End of Switch: '<S299>/Switch'

  // Gain: '<S26>/Gain5'
  for (i = 0; i < 6; i++) {
    rtb_Gain_m[i] = -imperix_control_P.RFT.ab2abc[i];
  }

  rtb_MaxofElements = 0.0;
  tmp_1 = 0.0;
  tmp_2 = 0.0;
  for (i = 0; i < 2; i++) {
    ssq = rtb_Switch_f[i];
    rtb_MaxofElements += rtb_Gain_m[3 * i] * ssq;
    tmp_1 += rtb_Gain_m[3 * i + 1] * ssq;
    tmp_2 += rtb_Gain_m[3 * i + 2] * ssq;
  }

  rtb_TmpSignalConversionAtGain2I[4] = tmp_2;
  rtb_TmpSignalConversionAtGain2I[3] = tmp_1;
  rtb_TmpSignalConversionAtGain2I[2] = rtb_MaxofElements;

  // End of Gain: '<S26>/Gain5'

  // Gain: '<S26>/Gain7'
  for (i = 0; i < 6; i++) {
    rtb_Gain7[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    ssq = rtb_TmpSignalConversionAtGain2I[i];
    for (idx = 0; idx < 6; idx++) {
      rtb_Gain7[idx] += imperix_control_P.M2C.pinvA[6 * i + idx] * ssq;
    }
  }

  // End of Gain: '<S26>/Gain7'

  // SignalConversion generated from: '<S46>/Gain2' incorporates:
  //   Constant: '<S46>/vx'

  a = imperix_control_P.M2C.Vdc / 2.0;

  // SignalConversion generated from: '<S304>/Gain3'
  rtb_Switch_h_0[0] = rtb_Switch_h_idx_0;
  rtb_Switch_h_0[1] = rtb_Switch_h_idx_1;
  rtb_Switch_h_0[2] = 0.0;

  // Gain: '<S304>/Gain3'
  tmp_1 = 0.0;
  tmp_2 = 0.0;
  rtb_MaxofElements = 0.0;
  for (i = 0; i < 3; i++) {
    ssq = rtb_Switch_h_0[i];
    tmp_1 += imperix_control_P.Gain3_Gain_o[3 * i] * ssq;
    tmp_2 += imperix_control_P.Gain3_Gain_o[3 * i + 1] * ssq;
    rtb_MaxofElements += imperix_control_P.Gain3_Gain_o[3 * i + 2] * ssq;
  }

  // End of Gain: '<S304>/Gain3'

  // SignalConversion generated from: '<S46>/Gain2' incorporates:
  //   Constant: '<S46>/vx'

  rtb_TmpSignalConversionAtGain2I[0] = a;
  rtb_TmpSignalConversionAtGain2I[1] = -a;
  rtb_TmpSignalConversionAtGain2I[2] = tmp_1;
  rtb_TmpSignalConversionAtGain2I[3] = tmp_2;
  rtb_TmpSignalConversionAtGain2I[4] = rtb_MaxofElements;

  // Gain: '<S46>/Gain2'
  for (i = 0; i < 6; i++) {
    rtb_Gain_m[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    ssq = rtb_TmpSignalConversionAtGain2I[i];
    for (idx = 0; idx < 6; idx++) {
      rtb_Gain_m[idx] += imperix_control_P.Gain2_Gain_k[6 * i + idx] * ssq;
    }
  }

  // End of Gain: '<S46>/Gain2'

  // MATLAB Function: '<S26>/Saturation' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'

  // MATLAB Function 'Closed_loop_control/NN CEC/Saturation': '<S149>:1'
  // '<S149>:1:49'
  // '<S149>:1:4'
  // '<S149>:1:5'
  if (!imperix_control_DW.Ac_not_empty) {
    // '<S149>:1:10'
    // '<S149>:1:11'
    for (i = 0; i < 6; i++) {
      rtb_MaxofElements = imperix_control_P.M2C.N[i];
      imperix_control_DW.Ac[i] = rtb_MaxofElements;
      imperix_control_DW.Ac[i + 6] = -rtb_MaxofElements;
      rtb_MaxofElements = imperix_control_P.M2C.N[i + 6];
      imperix_control_DW.Ac[i + 12] = rtb_MaxofElements;
      imperix_control_DW.Ac[i + 18] = -rtb_MaxofElements;
    }

    imperix_control_DW.Ac_not_empty = true;

    // '<S149>:1:13'
    // '<S149>:1:17'
    imperix_control_DW.is_max = imperix_control_P.M2C.is_max;

    // '<S149>:1:18'
    imperix_control_DW.SolverOpts.UseHessianAsInput = true;
    imperix_control_DW.SolverOpts.IntegrityChecks = true;
    imperix_control_DW.SolverOpts.MaxIterations = 100;
    imperix_control_DW.SolverOpts.ConstraintTolerance = imperix_control_DW.Tol;
  }

  // '<S149>:1:23'
  for (i = 0; i < 6; i++) {
    rtb_MaxofElements = rtb_Gain7[i];
    bc[i] = imperix_control_DW.is_max - rtb_MaxofElements;
    bc[i + 6] = imperix_control_DW.is_max + rtb_MaxofElements;
  }

  // '<S149>:1:30'
  rtb_MaxofElements = rtb_Switch[1];
  ssq = rtb_Switch[0];
  for (i = 0; i < 12; i++) {
    lb[i] = (imperix_control_DW.Ac[i + 12] * rtb_MaxofElements +
             imperix_control_DW.Ac[i] * ssq) - bc[i];
  }

  if (!rtIsNaN(lb[0])) {
    idx = 1;
  } else {
    idx = 0;
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i < 13)) {
      if (!rtIsNaN(lb[i - 1])) {
        idx = i;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  if (idx == 0) {
    rtb_MaxofElements = lb[0];
  } else {
    rtb_MaxofElements = lb[idx - 1];
    for (i = idx + 1; i < 13; i++) {
      ssq = lb[i - 1];
      if (rtb_MaxofElements < ssq) {
        rtb_MaxofElements = ssq;
      }
    }
  }

  if (imperix_control_DW.Tol < rtb_MaxofElements) {
    // '<S149>:1:31'
    // '<S149>:1:33'
    if (imperix_control_DW.SolverOpts.UseHessianAsInput) {
      A[0] = imperix_control_DW.Ix[0];
      A[1] = imperix_control_DW.Ix[1];
      A[2] = imperix_control_DW.Ix[2];
      A[3] = imperix_control_DW.Ix[3];
      info = 0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 2)) {
        idx = (i << 1) + i;
        ssq = 0.0;
        if (i >= 1) {
          for (jmax = 0; jmax < 1; jmax++) {
            ssq += A[1] * A[1];
          }
        }

        ssq = A[idx] - ssq;
        if (ssq > 0.0) {
          ssq = sqrt(ssq);
          A[idx] = ssq;
          if (i + 1 < 2) {
            a = 1.0 / ssq;
            for (jmax = idx + 2; jmax <= idx + 2; jmax++) {
              A[jmax - 1] *= a;
            }
          }

          i++;
        } else {
          A[idx] = ssq;
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
      imperix_control_trisolve(A, Linv);
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
      rtb_MaxofElements = Linv[jmax + 1];
      ssq = Linv[jmax];
      Linv_1[jmax] = rtb_MaxofElements * Linv[1] + ssq * Linv[0];
      Linv_1[jmax + 1] = rtb_MaxofElements * Linv[3] + ssq * Linv[2];
      rtb_Switch_1[i] = -rtb_Switch[i];
    }

    for (i = 0; i < 24; i++) {
      bc_1[i] = -imperix_control_DW.Ac[i];
    }

    for (i = 0; i < 12; i++) {
      bc_0[i] = -bc[i];
    }

    imperix_control_qpkwik(Linv, Linv_1, rtb_Switch_1, bc_1, bc_0, iA1,
      imperix_control_DW.SolverOpts.MaxIterations,
      imperix_control_DW.SolverOpts.ConstraintTolerance, rtb_ie_sat, lb, &i);

    // '<S149>:1:33'
    // '<S149>:1:34'
  } else {
    // '<S149>:1:36'
    rtb_ie_sat[0] = rtb_Switch[0];
    rtb_ie_sat[1] = rtb_Switch[1];
  }

  // '<S149>:1:40'
  // '<S149>:1:49'
  rtb_Gain7[0] = imperix_control_B.ADC_b - rtb_Gain_m[0];
  rtb_Gain7[3] = -rtb_Gain_m[3];
  rtb_Gain7[1] = imperix_control_B.ADC_n - rtb_Gain_m[1];
  rtb_Gain7[4] = -rtb_Gain_m[4];
  rtb_Gain7[2] = imperix_control_B.ADC_cr - rtb_Gain_m[2];
  rtb_Gain7[5] = -rtb_Gain_m[5];
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
    tmp_1 = rtb_Gain7[0];
  } else {
    tmp_1 = rtb_Gain7[i - 1];
    for (info = i + 1; info < 7; info++) {
      rtb_MaxofElements = rtb_Gain7[info - 1];
      if (tmp_1 > rtb_MaxofElements) {
        tmp_1 = rtb_MaxofElements;
      }
    }
  }

  // '<S149>:1:50'
  rtb_Gain7[0] = -rtb_Gain_m[0];
  rtb_Gain7[3] = -static_cast<real_T>(imperix_control_B.ADC_ge) - rtb_Gain_m[3];
  rtb_Gain7[1] = -rtb_Gain_m[1];
  rtb_Gain7[4] = -static_cast<real_T>(imperix_control_B.ADC_p2) - rtb_Gain_m[4];
  rtb_Gain7[2] = -rtb_Gain_m[2];
  rtb_Gain7[5] = -static_cast<real_T>(imperix_control_B.ADC_h) - rtb_Gain_m[5];
  if (!rtIsNaN(-rtb_Gain_m[0])) {
    i = 1;
  } else {
    i = 0;
    idx = 2;
    exitg1 = false;
    while ((!exitg1) && (idx < 7)) {
      if (!rtIsNaN(rtb_Gain7[idx - 1])) {
        i = idx;
        exitg1 = true;
      } else {
        idx++;
      }
    }
  }

  if (i == 0) {
    ssq = -rtb_Gain_m[0];
  } else {
    ssq = rtb_Gain7[i - 1];
    for (idx = i + 1; idx < 7; idx++) {
      rtb_MaxofElements = rtb_Gain7[idx - 1];
      if (ssq < rtb_MaxofElements) {
        ssq = rtb_MaxofElements;
      }
    }
  }

  // '<S149>:1:51'
  if (rtb_Switch[2] > tmp_1 - 1.0) {
    rtb_MaxofElements = tmp_1 - 1.0;
  } else if (rtIsNaN(rtb_Switch[2])) {
    if (!rtIsNaN(tmp_1 - 1.0)) {
      rtb_MaxofElements = tmp_1 - 1.0;
    } else {
      rtb_MaxofElements = (rtNaN);
    }
  } else {
    rtb_MaxofElements = rtb_Switch[2];
  }

  if ((!(rtb_MaxofElements >= ssq + 1.0)) && (!rtIsNaN(ssq + 1.0))) {
    rtb_MaxofElements = ssq + 1.0;
  }

  // End of MATLAB Function: '<S26>/Saturation'

  // Sum: '<S148>/Sum' incorporates:
  //   Gain: '<S148>/Gain1'
  //   Gain: '<S148>/Gain2'
  //   UnitDelay: '<S148>/Unit Delay1'

  imperix_control_DW.UnitDelay1_DSTATE_a[0] = (1.0 -
    imperix_control_P.CCMPC.alpha) * rtb_ie_sat[0] +
    imperix_control_P.CCMPC.alpha * imperix_control_DW.UnitDelay1_DSTATE_a[0];
  imperix_control_DW.UnitDelay1_DSTATE_a[1] = (1.0 -
    imperix_control_P.CCMPC.alpha) * rtb_ie_sat[1] +
    imperix_control_P.CCMPC.alpha * imperix_control_DW.UnitDelay1_DSTATE_a[1];

  // MATLAB Function: '<S1>/LICCs control' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion1'
  //   Gain: '<S47>/Gain1'
  //   Sum: '<S148>/Sum'
  //   UnitDelay: '<S148>/Unit Delay1'

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
  Linv[0] = imperix_control_DW.UnitDelay1_DSTATE_a[0];
  A[0] = imperix_control_DW.u_prev[0];
  Linv[1] = imperix_control_DW.UnitDelay1_DSTATE_a[1];
  A[1] = imperix_control_DW.u_prev[1];
  Linv[2] = imperix_control_DW.UnitDelay1_DSTATE_a[0];
  A[2] = imperix_control_DW.u_prev[0];
  Linv[3] = imperix_control_DW.UnitDelay1_DSTATE_a[1];
  A[3] = imperix_control_DW.u_prev[1];
  for (i = 0; i < 6; i++) {
    rtb_Gain_m[i] = ((imperix_control_DW.pinvT[i + 6] * rtb_Gain1_c_idx_0 +
                      imperix_control_DW.pinvT[i] * rtb_Sum13) +
                     imperix_control_DW.pinvT[i + 12] * rtb_Gain1_c_0) +
      rtb_MaxofElements;
  }

  // '<S23>:1:49'
  rtb_Gain7[0] = imperix_control_B.ADC_b - rtb_Gain_m[0];
  rtb_Gain7[1] = imperix_control_B.ADC_n - rtb_Gain_m[1];
  rtb_Gain7[2] = imperix_control_B.ADC_cr - rtb_Gain_m[2];
  rtb_Gain7[3] = 0.0 - rtb_Gain_m[3];
  rtb_Gain7[4] = 0.0 - rtb_Gain_m[4];
  rtb_Gain7[5] = 0.0 - rtb_Gain_m[5];
  for (i = 0; i < 2; i++) {
    idx = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      bc[idx + jmax] = rtb_Gain7[jmax];
    }
  }

  // '<S23>:1:50'
  rtb_Gain7[0] = 0.0 - rtb_Gain_m[0];
  rtb_Gain7[1] = 0.0 - rtb_Gain_m[1];
  rtb_Gain7[2] = 0.0 - rtb_Gain_m[2];
  rtb_Gain7[3] = -static_cast<real_T>(imperix_control_B.ADC_ge) - rtb_Gain_m[3];
  rtb_Gain7[4] = -static_cast<real_T>(imperix_control_B.ADC_p2) - rtb_Gain_m[4];
  rtb_Gain7[5] = -static_cast<real_T>(imperix_control_B.ADC_h) - rtb_Gain_m[5];
  for (i = 0; i < 2; i++) {
    idx = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      lb[idx + jmax] = rtb_Gain7[jmax];
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
      idx = (i << 2) + i;
      ssq = 0.0;
      if (i >= 1) {
        for (info = 0; info < i; info++) {
          rtb_Sum13 = A_0[(info << 2) + i];
          ssq += rtb_Sum13 * rtb_Sum13;
        }
      }

      ssq = A_0[idx] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        A_0[idx] = ssq;
        if (i + 1 < 4) {
          if (i != 0) {
            d = (((i - 1) << 2) + i) + 2;
            for (info = i + 2; info <= d; info += 4) {
              b_c_tmp = info - i;
              rtb_Sum13 = -A_0[(((b_c_tmp - 2) >> 2) << 2) + i];
              e = b_c_tmp + 2;
              for (b_c_tmp = info; b_c_tmp <= e; b_c_tmp++) {
                A_tmp = ((idx + b_c_tmp) - info) + 1;
                A_0[A_tmp] += A_0[b_c_tmp - 1] * rtb_Sum13;
              }
            }
          }

          rtb_Sum13 = 1.0 / ssq;
          d = (idx - i) + 4;
          for (info = idx + 2; info <= d; info++) {
            A_0[info - 1] *= rtb_Sum13;
          }
        }

        i++;
      } else {
        A_0[idx] = ssq;
        jmax = i + 1;
        exitg1 = true;
      }
    }

    if (jmax == 0) {
      jmax = 5;
    }

    for (idx = 2; idx < jmax; idx++) {
      for (i = 0; i <= idx - 2; i++) {
        A_0[i + ((idx - 1) << 2)] = 0.0;
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

  // Gain: '<S56>/Gain4'
  tmp_1 = 0.0;
  tmp_2 = 0.0;
  for (i = 0; i < 6; i++) {
    // Sum: '<S56>/Sum3' incorporates:
    //   Gain: '<S56>/Gain3'

    ssq = 0.0;
    for (idx = 0; idx < 5; idx++) {
      ssq += imperix_control_P.M2C.pinvA[6 * idx + i] * rtb_Gain1_g[idx];
    }

    rtb_Sum13 = rtb_DataTypeConversion2[i] - ssq;

    // End of Sum: '<S56>/Sum3'

    // Gain: '<S56>/Gain4'
    idx = i << 1;
    tmp_1 += imperix_control_P.M2C.pinvN[idx] * rtb_Sum13;
    tmp_2 += imperix_control_P.M2C.pinvN[idx + 1] * rtb_Sum13;
  }

  // MATLAB Function: '<S1>/LICCs control'
  rtb_Sum13 = (imperix_control_DW.Ad[0] * tmp_1 + imperix_control_DW.Ad[4] *
               tmp_2) + (imperix_control_DW.Bd[0] * imperix_control_DW.u_prev[0]
    + imperix_control_DW.u_prev[1] * imperix_control_DW.Bd[4]);
  tmp_2 = (imperix_control_DW.Ad[1] * tmp_1 + imperix_control_DW.Ad[5] * tmp_2)
    + (imperix_control_DW.u_prev[0] * imperix_control_DW.Bd[1] +
       imperix_control_DW.u_prev[1] * imperix_control_DW.Bd[5]);
  for (i = 0; i < 4; i++) {
    Linv_1[i] = (imperix_control_DW.Ad[i + 4] * tmp_2 + imperix_control_DW.Ad[i]
                 * rtb_Sum13) - Linv[i];
    for (idx = 0; idx < 4; idx++) {
      jmax = idx << 2;
      info = i << 2;
      A_0[idx + info] = ((Linv_0[jmax + 1] * Linv_0[info + 1] + Linv_0[jmax] *
                          Linv_0[info]) + Linv_0[jmax + 2] * Linv_0[info + 2]) +
        Linv_0[jmax + 3] * Linv_0[info + 3];
    }
  }

  rtb_Sum13 = Linv_1[1];
  rtb_Gain1_c_0 = Linv_1[0];
  rtb_Gain1_c_idx_0 = Linv_1[2];
  ssq = Linv_1[3];
  for (i = 0; i < 4; i++) {
    idx = i << 2;
    Linv_1[i] = (((imperix_control_DW.Bd[idx + 1] * 2.0 * rtb_Sum13 +
                   imperix_control_DW.Bd[idx] * 2.0 * rtb_Gain1_c_0) +
                  imperix_control_DW.Bd[idx + 2] * 2.0 * rtb_Gain1_c_idx_0) +
                 imperix_control_DW.Bd[idx + 3] * 2.0 * ssq) /
      imperix_control_DW.is_max2 + 2.0 * A[i] / imperix_control_DW.Vc_ref2 *
      imperix_control_DW.lambda;
  }

  for (i = 0; i < 96; i++) {
    tmp_0[i] = -imperix_control_DW.Aineq[i];
  }

  for (i = 0; i < 12; i++) {
    bc_1[i] = -bc[i];
    bc_1[i + 12] = lb[i];
  }

  imperix_control_qpkwik_a(Linv_0, A_0, Linv_1, tmp_0, bc_1, iA1_0,
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
  rtb_VectorConcatenate[3] = Linv[0];
  imperix_control_DW.u_prev[0] = Linv[0];
  rtb_VectorConcatenate[4] = Linv[1];
  imperix_control_DW.u_prev[1] = Linv[1];

  // Sum: '<S17>/Sum11' incorporates:
  //   Gain: '<S17>/Gain'

  for (i = 0; i < 6; i++) {
    ssq = 0.0;
    for (idx = 0; idx < 5; idx++) {
      ssq += imperix_control_P.CCMPC.pinvT[6 * idx + i] *
        rtb_VectorConcatenate[idx];
    }

    rtb_DataTypeConversion2[i] = ssq + rtb_MaxofElements;
  }

  // End of Sum: '<S17>/Sum11'
  // MATLAB Function: '<S1>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation index': '<S25>:1'
  // '<S25>:1:4'
  rtb_DataTypeConversion2[3] = -rtb_DataTypeConversion2[3];
  rtb_DataTypeConversion2[4] = -rtb_DataTypeConversion2[4];
  rtb_DataTypeConversion2[5] = -rtb_DataTypeConversion2[5];

  // '<S25>:1:8'
  for (i = 0; i < 6; i++) {
    rtb_Sum13 = rtb_DataTypeConversion2[i] / rtb_DataTypeConversion1[i];
    if (!(rtb_Sum13 >= 0.0)) {
      rtb_Sum13 = 0.0;
    }

    if (rtb_Sum13 <= 1.0) {
      rtb_DataTypeConversion2[i] = rtb_Sum13;
    } else {
      rtb_DataTypeConversion2[i] = 1.0;
    }
  }

  // End of MATLAB Function: '<S1>/Modulation index'

  // RateTransition generated from: '<S26>/Input format'
  if (tmp) {
    imperix_control_DW.TmpRTBAtInputformatInport2_Buff = rtb_Saturation_gb;

    // RateTransition generated from: '<S26>/Input format'
    imperix_control_DW.TmpRTBAtInputformatInport3_Buff[0] = rtb_Switch_f[0];
    imperix_control_DW.TmpRTBAtInputformatInport3_Buff[1] = rtb_Switch_f[1];

    // RateTransition generated from: '<S26>/Input format'
    imperix_control_DW.TmpRTBAtInputformatInport4_Buff[0] = rtb_Switch_h_idx_0;
    imperix_control_DW.TmpRTBAtInputformatInport4_Buff[1] = rtb_Switch_h_idx_1;

    // RateTransition generated from: '<S26>/Input format'
    imperix_control_DW.TmpRTBAtInputformatInport5_Buff = rtb_Sum3;
  }

  // DeadZone: '<S180>/DeadZone'
  if (rtb_DeadZone > imperix_control_P.TEB.u_max) {
    rtb_DeadZone -= imperix_control_P.TEB.u_max;
  } else if (rtb_DeadZone >= -imperix_control_P.TEB.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_control_P.TEB.u_max;
  }

  // End of DeadZone: '<S180>/DeadZone'

  // Gain: '<S185>/Integral Gain'
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

  // Outputs for Atomic SubSystem: '<S206>/generation'
  // S-Function (CB_PWM): '<S207>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_d > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_control_B.DataTypeConversion1, 1);

  // End of Outputs for SubSystem: '<S206>/generation'

  // DataTypeConversion: '<S286>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_n = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S286>/Data Type Conversion2' incorporates:
  //   Constant: '<S286>/phase'

  imperix_control_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_control_P.phase_Value_a);

  // DataTypeConversion: '<S286>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_o = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S290>/generation'
  // S-Function (CB_PWM): '<S291>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_o > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_control_B.DataTypeConversion1_n, 1);

  // End of Outputs for SubSystem: '<S290>/generation'

  // DataTypeConversion: '<S287>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S286>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S287>/Data Type Conversion2' incorporates:
  //   Constant: '<S287>/phase'

  imperix_control_B.DataTypeConversion2_e = static_cast<real32_T>
    (imperix_control_P.phase_Value_p);

  // DataTypeConversion: '<S287>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_e = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S292>/generation'
  // S-Function (CB_PWM): '<S293>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_e > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_control_B.DataTypeConversion1_i, 1);

  // End of Outputs for SubSystem: '<S292>/generation'

  // DataTypeConversion: '<S288>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S286>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_nb = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S288>/Data Type Conversion2' incorporates:
  //   Constant: '<S288>/phase'

  imperix_control_B.DataTypeConversion2_h = static_cast<real32_T>
    (imperix_control_P.phase_Value_m);

  // DataTypeConversion: '<S288>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_n = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S294>/generation'
  // S-Function (CB_PWM): '<S295>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_n > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_control_B.DataTypeConversion1_nb, 1);

  // End of Outputs for SubSystem: '<S294>/generation'

  // DataTypeConversion: '<S289>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S286>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_DataTypeConversion2[1]);

  // DataTypeConversion: '<S289>/Data Type Conversion2' incorporates:
  //   Constant: '<S289>/phase'

  imperix_control_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_control_P.phase_Value_n);

  // DataTypeConversion: '<S289>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_p = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S296>/generation'
  // S-Function (CB_PWM): '<S297>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_p > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_control_B.DataTypeConversion1_k, 1);

  // End of Outputs for SubSystem: '<S296>/generation'

  // Gain: '<S386>/Kb' incorporates:
  //   Sum: '<S386>/SumI2'

  rtb_Sum3 = (rtb_Gain3 - rtb_Sum_h) * imperix_control_P.MCC.kp;

  // DeadZone: '<S450>/DeadZone'
  if (rtb_DeadZone_g > imperix_control_P.PCC.u_max) {
    rtb_DeadZone_g -= imperix_control_P.PCC.u_max;
  } else if (rtb_DeadZone_g >= -imperix_control_P.PCC.u_max) {
    rtb_DeadZone_g = 0.0;
  } else {
    rtb_DeadZone_g -= -imperix_control_P.PCC.u_max;
  }

  // End of DeadZone: '<S450>/DeadZone'

  // Gain: '<S455>/Integral Gain'
  rtb_IntegralGain_n *= imperix_control_P.PCC.ki;

  // Gain: '<S50>/Gain'
  ssq = imperix_control_P.M2C.C * 0.5;

  // RateTransition generated from: '<S50>/Gain' incorporates:
  //   Gain: '<S50>/Gain'
  //   Math: '<S50>/Square'

  if (tmp) {
    for (i = 0; i < 6; i++) {
      // Math: '<S50>/Square'
      rtb_Gain3 = rtb_DataTypeConversion1[i];
      imperix_control_DW.TmpRTBAtGainOutport1_Buffer[i] = rtb_Gain3 * rtb_Gain3 *
        ssq;
    }
  }

  // DataTypeConversion: '<S482>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_e = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S482>/Data Type Conversion2' incorporates:
  //   Constant: '<S482>/phase'

  imperix_control_B.DataTypeConversion2_ka = static_cast<real32_T>
    (imperix_control_P.phase_Value_c);

  // DataTypeConversion: '<S482>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_k = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S486>/generation'
  // S-Function (CB_PWM): '<S487>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_k > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_control_B.DataTypeConversion1_e, 0);

  // End of Outputs for SubSystem: '<S486>/generation'

  // DataTypeConversion: '<S483>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S482>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_ii = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S483>/Data Type Conversion2' incorporates:
  //   Constant: '<S483>/phase'

  imperix_control_B.DataTypeConversion2_hr = static_cast<real32_T>
    (imperix_control_P.phase_Value_cq);

  // DataTypeConversion: '<S483>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_a = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S488>/generation'
  // S-Function (CB_PWM): '<S489>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_a > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_control_B.DataTypeConversion1_ii, 0);

  // End of Outputs for SubSystem: '<S488>/generation'

  // DataTypeConversion: '<S484>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S482>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S484>/Data Type Conversion2' incorporates:
  //   Constant: '<S484>/phase'

  imperix_control_B.DataTypeConversion2_m = static_cast<real32_T>
    (imperix_control_P.phase_Value_a4);

  // DataTypeConversion: '<S484>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_na = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S490>/generation'
  // S-Function (CB_PWM): '<S491>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_na > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_control_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S490>/generation'

  // DataTypeConversion: '<S485>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S482>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_DataTypeConversion2[2]);

  // DataTypeConversion: '<S485>/Data Type Conversion2' incorporates:
  //   Constant: '<S485>/phase'

  imperix_control_B.DataTypeConversion2_ht = static_cast<real32_T>
    (imperix_control_P.phase_Value_n4);

  // DataTypeConversion: '<S485>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_b = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S492>/generation'
  // S-Function (CB_PWM): '<S493>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_b > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_control_B.DataTypeConversion1_h, 0);

  // End of Outputs for SubSystem: '<S492>/generation'

  // Gain: '<S53>/Gain1'
  rtb_Gain3 = imperix_control_P.Gain1_Gain_p0 * rtb_DataTypeConversion2[3];

  // DataTypeConversion: '<S494>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_c = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S494>/Data Type Conversion2' incorporates:
  //   Constant: '<S494>/phase'

  imperix_control_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_control_P.phase_Value_c0);

  // DataTypeConversion: '<S494>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_aq = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S498>/generation'
  // S-Function (CB_PWM): '<S499>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_aq > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_control_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S498>/generation'

  // DataTypeConversion: '<S495>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S494>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_m = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S495>/Data Type Conversion2' incorporates:
  //   Constant: '<S495>/phase'

  imperix_control_B.DataTypeConversion2_kf = static_cast<real32_T>
    (imperix_control_P.phase_Value_i);

  // DataTypeConversion: '<S495>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_pq = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S500>/generation'
  // S-Function (CB_PWM): '<S501>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_pq > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_control_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S500>/generation'

  // DataTypeConversion: '<S496>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S494>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_g = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S496>/Data Type Conversion2' incorporates:
  //   Constant: '<S496>/phase'

  imperix_control_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_control_P.phase_Value_md);

  // DataTypeConversion: '<S496>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_g = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S502>/generation'
  // S-Function (CB_PWM): '<S503>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_g > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_control_B.DataTypeConversion1_g, 0);

  // End of Outputs for SubSystem: '<S502>/generation'

  // DataTypeConversion: '<S497>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S494>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_mx = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S497>/Data Type Conversion2' incorporates:
  //   Constant: '<S497>/phase'

  imperix_control_B.DataTypeConversion2_kr = static_cast<real32_T>
    (imperix_control_P.phase_Value_ab);

  // DataTypeConversion: '<S497>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_nh = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S504>/generation'
  // S-Function (CB_PWM): '<S505>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_nh > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_control_B.DataTypeConversion1_mx, 0);

  // End of Outputs for SubSystem: '<S504>/generation'

  // Gain: '<S54>/Gain3'
  rtb_Gain3 = imperix_control_P.Gain3_Gain_l * rtb_DataTypeConversion2[4];

  // DataTypeConversion: '<S506>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_eq = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S506>/Data Type Conversion2' incorporates:
  //   Constant: '<S506>/phase'

  imperix_control_B.DataTypeConversion2_kfv = static_cast<real32_T>
    (imperix_control_P.phase_Value_j);

  // DataTypeConversion: '<S506>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_h = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S510>/generation'
  // S-Function (CB_PWM): '<S511>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_h > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_control_B.DataTypeConversion1_eq, 1);

  // End of Outputs for SubSystem: '<S510>/generation'

  // DataTypeConversion: '<S507>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S506>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_gn = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S507>/Data Type Conversion2' incorporates:
  //   Constant: '<S507>/phase'

  imperix_control_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_control_P.phase_Value_f);

  // DataTypeConversion: '<S507>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_e3 = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S512>/generation'
  // S-Function (CB_PWM): '<S513>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_e3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_control_B.DataTypeConversion1_gn, 1);

  // End of Outputs for SubSystem: '<S512>/generation'

  // DataTypeConversion: '<S508>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S506>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_gj = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S508>/Data Type Conversion2' incorporates:
  //   Constant: '<S508>/phase'

  imperix_control_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_control_P.phase_Value_o);

  // DataTypeConversion: '<S508>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_j = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S514>/generation'
  // S-Function (CB_PWM): '<S515>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_j > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_control_B.DataTypeConversion1_gj, 1);

  // End of Outputs for SubSystem: '<S514>/generation'

  // DataTypeConversion: '<S509>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S506>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_l = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S509>/Data Type Conversion2' incorporates:
  //   Constant: '<S509>/phase'

  imperix_control_B.DataTypeConversion2_d1 = static_cast<real32_T>
    (imperix_control_P.phase_Value_nf);

  // DataTypeConversion: '<S509>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_f = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S516>/generation'
  // S-Function (CB_PWM): '<S517>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_f > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_control_B.DataTypeConversion1_l, 1);

  // End of Outputs for SubSystem: '<S516>/generation'

  // Gain: '<S55>/Gain3'
  rtb_Gain3 = imperix_control_P.Gain3_Gain_k * rtb_DataTypeConversion2[5];

  // DataTypeConversion: '<S518>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_hk = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S518>/Data Type Conversion2' incorporates:
  //   Constant: '<S518>/phase'

  imperix_control_B.DataTypeConversion2_dy = static_cast<real32_T>
    (imperix_control_P.phase_Value_b);

  // DataTypeConversion: '<S518>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_a1 = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S522>/generation'
  // S-Function (CB_PWM): '<S523>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_a1 > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_control_B.DataTypeConversion1_hk,
                     0);

  // End of Outputs for SubSystem: '<S522>/generation'

  // DataTypeConversion: '<S519>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S518>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_gf = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S519>/Data Type Conversion2' incorporates:
  //   Constant: '<S519>/phase'

  imperix_control_B.DataTypeConversion2_l = static_cast<real32_T>
    (imperix_control_P.phase_Value_jt);

  // DataTypeConversion: '<S519>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_i = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S524>/generation'
  // S-Function (CB_PWM): '<S525>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_i > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_control_B.DataTypeConversion1_gf,
                     0);

  // End of Outputs for SubSystem: '<S524>/generation'

  // DataTypeConversion: '<S520>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S518>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_cz = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S520>/Data Type Conversion2' incorporates:
  //   Constant: '<S520>/phase'

  imperix_control_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_control_P.phase_Value_o0);

  // DataTypeConversion: '<S520>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_l = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S526>/generation'
  // S-Function (CB_PWM): '<S527>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_l > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_control_B.DataTypeConversion1_cz,
                     0);

  // End of Outputs for SubSystem: '<S526>/generation'

  // DataTypeConversion: '<S521>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S518>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_le = static_cast<real32_T>(rtb_Gain3);

  // DataTypeConversion: '<S521>/Data Type Conversion2' incorporates:
  //   Constant: '<S521>/phase'

  imperix_control_B.DataTypeConversion2_lo = static_cast<real32_T>
    (imperix_control_P.phase_Value_jo);

  // DataTypeConversion: '<S521>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_o4 = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S528>/generation'
  // S-Function (CB_PWM): '<S529>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_o4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_control_B.DataTypeConversion1_le,
                     0);

  // End of Outputs for SubSystem: '<S528>/generation'

  // DataTypeConversion: '<S530>/Data Type Conversion1'
  imperix_control_B.DataTypeConversion1_iz = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S530>/Data Type Conversion2' incorporates:
  //   Constant: '<S530>/phase'

  imperix_control_B.DataTypeConversion2_mh = static_cast<real32_T>
    (imperix_control_P.phase_Value_jb);

  // DataTypeConversion: '<S530>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_ax = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S534>/generation'
  // S-Function (CB_PWM): '<S535>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_ax > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_control_B.DataTypeConversion1_iz, 0);

  // End of Outputs for SubSystem: '<S534>/generation'

  // DataTypeConversion: '<S531>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S530>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S531>/Data Type Conversion2' incorporates:
  //   Constant: '<S531>/phase'

  imperix_control_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_control_P.phase_Value_l);

  // DataTypeConversion: '<S531>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_p3 = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S536>/generation'
  // S-Function (CB_PWM): '<S537>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_p3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_control_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S536>/generation'

  // DataTypeConversion: '<S532>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S530>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_kz = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S532>/Data Type Conversion2' incorporates:
  //   Constant: '<S532>/phase'

  imperix_control_B.DataTypeConversion2_m4 = static_cast<real32_T>
    (imperix_control_P.phase_Value_lk);

  // DataTypeConversion: '<S532>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_c = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S538>/generation'
  // S-Function (CB_PWM): '<S539>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_c > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_control_B.DataTypeConversion1_kz, 0);

  // End of Outputs for SubSystem: '<S538>/generation'

  // DataTypeConversion: '<S533>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S530>/Data Type Conversion1'

  imperix_control_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_DataTypeConversion2[0]);

  // DataTypeConversion: '<S533>/Data Type Conversion2' incorporates:
  //   Constant: '<S533>/phase'

  imperix_control_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_control_P.phase_Value_nl);

  // DataTypeConversion: '<S533>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_control_B.DataTypeConversion3_bc = imperix_control_B.SFunction_kx;

  // Outputs for Atomic SubSystem: '<S540>/generation'
  // S-Function (CB_PWM): '<S541>/PWM' incorporates:
  //   Constant: '<S93>/clk_id'

  if (imperix_control_B.DataTypeConversion3_bc > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_control_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S540>/generation'

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

    // SignalConversion generated from: '<S298>/Gain3'
    rtb_Switch[0] = rtb_Switch_f[0];
    rtb_Switch[1] = rtb_Switch_f[1];
    rtb_Switch[2] = 0.0;

    // Gain: '<S298>/Gain3'
    tmp_1 = 0.0;
    tmp_2 = 0.0;
    rtb_MaxofElements = 0.0;
    for (i = 0; i < 3; i++) {
      ssq = rtb_Switch[i];
      tmp_1 += imperix_control_P.Gain3_Gain_d[3 * i] * ssq;
      tmp_2 += imperix_control_P.Gain3_Gain_d[3 * i + 1] * ssq;
      rtb_MaxofElements += imperix_control_P.Gain3_Gain_d[3 * i + 2] * ssq;
    }

    // End of Gain: '<S298>/Gain3'

    // RateTransition generated from: '<S1>/Energy balance' incorporates:
    //   Gain: '<S45>/Gain'
    //   Gain: '<S45>/Gain8'

    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[0] = rtb_Saturation_gb;
    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[1] =
      imperix_control_P.Gain8_Gain * rtb_Saturation_gb;
    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[2] =
      imperix_control_P.Gain_Gain * tmp_1;
    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[3] =
      imperix_control_P.Gain_Gain * tmp_2;
    imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[4] =
      imperix_control_P.Gain_Gain * rtb_MaxofElements;

    // RateTransition generated from: '<S1>/Kalman Filter'
    imperix_control_DW.TmpRTBAtKalmanFilterInport1_Buf[0] = rtb_Gain1_e_idx_0;
    imperix_control_DW.TmpRTBAtKalmanFilterInport1_Buf[1] = rtb_Gain1_e_idx_1;

    // RateTransition generated from: '<S1>/Kalman Filter'
    imperix_control_DW.TmpRTBAtKalmanFilterInport2_Buf = rtb_Gain2_d;

    // RateTransition generated from: '<S1>/Unit Delay'
    imperix_control_DW.TmpRTBAtUnitDelayInport1_Buffer[0] = rtb_Switch_h_idx_0;
    imperix_control_DW.TmpRTBAtUnitDelayInport1_Buffer[1] = rtb_Switch_h_idx_1;
  }

  // S-Function (ADC): '<S82>/ADC'
  imperix_control_B.ADC_j = (float)(*ix_raw_adc_ptr_0_2) * 0.012207F + 0.0F;

  // Switch: '<S178>/Switch1' incorporates:
  //   Constant: '<S178>/Clamping_zero'
  //   Constant: '<S178>/Constant'
  //   Constant: '<S178>/Constant2'
  //   RelationalOperator: '<S178>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_control_P.Clamping_zero_Value) {
    tmp_3 = imperix_control_P.Constant_Value;
  } else {
    tmp_3 = imperix_control_P.Constant2_Value;
  }

  // Switch: '<S178>/Switch2' incorporates:
  //   Constant: '<S178>/Clamping_zero'
  //   Constant: '<S178>/Constant3'
  //   Constant: '<S178>/Constant4'
  //   RelationalOperator: '<S178>/fix for DT propagation issue1'

  if (Mean_AccVal > imperix_control_P.Clamping_zero_Value) {
    tmp_4 = imperix_control_P.Constant3_Value;
  } else {
    tmp_4 = imperix_control_P.Constant4_Value_j;
  }

  // Switch: '<S178>/Switch' incorporates:
  //   Constant: '<S178>/Clamping_zero'
  //   Constant: '<S178>/Constant1'
  //   Logic: '<S178>/AND3'
  //   RelationalOperator: '<S178>/Equal1'
  //   RelationalOperator: '<S178>/Relational Operator'
  //   Switch: '<S178>/Switch1'
  //   Switch: '<S178>/Switch2'

  if ((imperix_control_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_3 == tmp_4))
  {
    Mean_AccVal = imperix_control_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S188>/Integrator' incorporates:
  //   Switch: '<S178>/Switch'

  imperix_control_DW.Integrator_DSTATE += imperix_control_P.Integrator_gainval *
    Mean_AccVal;

  // Switch: '<S448>/Switch1' incorporates:
  //   Constant: '<S448>/Clamping_zero'
  //   Constant: '<S448>/Constant'
  //   Constant: '<S448>/Constant2'
  //   RelationalOperator: '<S448>/fix for DT propagation issue'

  if (rtb_DeadZone_g > imperix_control_P.Clamping_zero_Value_e) {
    tmp_3 = imperix_control_P.Constant_Value_i;
  } else {
    tmp_3 = imperix_control_P.Constant2_Value_p;
  }

  // Switch: '<S448>/Switch2' incorporates:
  //   Constant: '<S448>/Clamping_zero'
  //   Constant: '<S448>/Constant3'
  //   Constant: '<S448>/Constant4'
  //   RelationalOperator: '<S448>/fix for DT propagation issue1'

  if (rtb_IntegralGain_n > imperix_control_P.Clamping_zero_Value_e) {
    tmp_4 = imperix_control_P.Constant3_Value_g;
  } else {
    tmp_4 = imperix_control_P.Constant4_Value_c;
  }

  // Switch: '<S448>/Switch' incorporates:
  //   Constant: '<S448>/Clamping_zero'
  //   Constant: '<S448>/Constant1'
  //   Logic: '<S448>/AND3'
  //   RelationalOperator: '<S448>/Equal1'
  //   RelationalOperator: '<S448>/Relational Operator'
  //   Switch: '<S448>/Switch1'
  //   Switch: '<S448>/Switch2'

  if ((imperix_control_P.Clamping_zero_Value_e != rtb_DeadZone_g) && (tmp_3 ==
       tmp_4)) {
    rtb_IntegralGain_n = imperix_control_P.Constant1_Value_i;
  }

  // Update for DiscreteIntegrator: '<S458>/Integrator' incorporates:
  //   Switch: '<S448>/Switch'

  imperix_control_DW.Integrator_DSTATE_h +=
    imperix_control_P.Integrator_gainval_m * rtb_IntegralGain_n;

  // Update for DiscreteIntegrator: '<S268>/Integrator' incorporates:
  //   Gain: '<S260>/Kb'
  //   Gain: '<S265>/Integral Gain'
  //   Sum: '<S260>/SumI2'
  //   Sum: '<S260>/SumI4'

  imperix_control_DW.Integrator_DSTATE_e += (2.0 * imperix_control_P.FOC.kp_w *
    (rtb_Saturation - rtb_Sum_d) + imperix_control_P.FOC.ki_w * rtb_Sum4) *
    imperix_control_P.Integrator_gainval_k;

  // Update for DiscreteIntegrator: '<S128>/Integrator' incorporates:
  //   Gain: '<S120>/Kb'
  //   Gain: '<S125>/Integral Gain'
  //   Sum: '<S120>/SumI2'
  //   Sum: '<S120>/SumI4'

  imperix_control_DW.Integrator_DSTATE_hf += (2.0 * imperix_control_P.FOC.kp_F *
    (rtb_Saturation_b - rtb_Gain8) + imperix_control_P.FOC.ki_F * rtb_F) *
    imperix_control_P.Integrator_gainval_o;

  // Update for DiscreteIntegrator: '<S342>/Integrator' incorporates:
  //   Gain: '<S334>/Kb'
  //   Gain: '<S339>/Integral Gain'
  //   Sum: '<S334>/SumI2'
  //   Sum: '<S334>/SumI4'

  imperix_control_DW.Integrator_DSTATE_b += ((rtb_Saturation_e - rtb_Sum_p) *
    imperix_control_P.MCC.kp + imperix_control_P.MCC.ki * rtb_Sum6) *
    imperix_control_P.Integrator_gainval_c;

  // Update for DiscreteIntegrator: '<S394>/Integrator' incorporates:
  //   Gain: '<S391>/Integral Gain'
  //   Sum: '<S386>/SumI4'

  imperix_control_DW.Integrator_DSTATE_k += (imperix_control_P.MCC.ki * rtb_Sum8
    + rtb_Sum3) * imperix_control_P.Integrator_gainval_p;
}

// Model step function for TID1
void imperix_control_step1(void)       // Sample time: [0.00166667s, 0.0s]
{
  real_T Ad[36];
  real_T Adt[36];
  real_T Adt_0[36];
  real_T E[36];
  real_T B_0[18];
  real_T Kt[18];
  real_T tmp_0[18];
  real_T rtb_obs[14];
  real_T B[12];
  real_T tmp[12];
  real_T tmp_2[12];
  real_T A[9];
  real_T IB[6];
  real_T VB[6];
  real_T b_B[6];
  real_T is_temp[6];
  real_T tmp_1[4];
  real_T rtb_VectorConcatenate4[3];
  real_T rtb_VectorConcatenate5[3];
  real_T ie_ref_temp[2];
  real_T lam[2];
  real_T tmp_3[2];
  real_T ub[2];
  real_T H_tmp;
  real_T Linv;
  real_T a21;
  real_T is_temp_0;
  real_T maxval;
  real_T rtb_Constant5;
  real_T vo_ref_temp;
  int32_T E_tmp;
  int32_T Kt_tmp;
  int32_T Kt_tmp_0;
  int32_T i;
  int32_T r1;
  int32_T r2;
  int32_T rtemp;
  real32_T tmp_4[14];
  real32_T tmp_5[3];
  boolean_T x[12];
  boolean_T iA1[2];
  boolean_T exitg1;

  // Constant: '<S1>/Constant5'
  rtb_Constant5 = imperix_control_P.M2C.Vc_ref;

  // MATLAB Function: '<S1>/Energy balance' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'
  //   RateTransition generated from: '<S50>/Gain'
  //
  // MATLAB Function 'Closed_loop_control/Energy balance': '<S19>:1'
  if (!imperix_control_DW.Ts_not_empty) {
    // '<S19>:1:5'
    // '<S19>:1:8'
    imperix_control_DW.Ts_not_empty = true;

    // '<S19>:1:9'
    // '<S19>:1:10'
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
    memcpy(&imperix_control_DW.K[0], &imperix_control_P.CEMPC.K[0], 36U * sizeof
           (real_T));
    memcpy(&imperix_control_DW.MI[0], &imperix_control_P.CEMPC.MI[0], 36U *
           sizeof(real_T));

    // '<S19>:1:19'
    memcpy(&imperix_control_DW.NN[0], &imperix_control_P.CEMPC.NN[0], 12U *
           sizeof(real_T));

    // '<S19>:1:20'
    for (i = 0; i < 6; i++) {
      imperix_control_DW.ONE[i] = imperix_control_P.CEMPC.ONE[i];
    }

    // '<S19>:1:21'
    imperix_control_DW.Nl = imperix_control_P.CEMPC.Nl;

    // '<S19>:1:22'
    imperix_control_DW.is_max_c = imperix_control_P.M2C.is_max;

    // '<S19>:1:23'
    imperix_control_DW.is_max2_f = imperix_control_DW.is_max_c *
      imperix_control_DW.is_max_c;

    // '<S19>:1:24'
    imperix_control_DW.vo_max2 = imperix_control_P.M2C.vo_max *
      imperix_control_P.M2C.vo_max;

    // '<S19>:1:25'
    imperix_control_DW.Ec_ref2 = imperix_control_P.M2C.Ec_ref *
      imperix_control_P.M2C.Ec_ref;

    // '<S19>:1:26'
    imperix_control_DW.Hu_z[0] = imperix_control_P.CEMPC.Hu_z[0];
    imperix_control_DW.Hu_z[1] = imperix_control_P.CEMPC.Hu_z[1];
    imperix_control_DW.Hu_z[2] = imperix_control_P.CEMPC.Hu_z[2];
    imperix_control_DW.Hu_z[3] = imperix_control_P.CEMPC.Hu_z[3];

    // '<S19>:1:27'
    memcpy(&imperix_control_DW.Aineq_z[0], &imperix_control_P.CEMPC.Aineq_z[0],
           24U * sizeof(real_T));

    // '<S19>:1:28'
    imperix_control_DW.lambda_z = imperix_control_P.CEMPC.lambda_z;

    // '<S19>:1:29'
    imperix_control_DW.Hu_o = imperix_control_P.CEMPC.Hu_o;

    // '<S19>:1:30'
    imperix_control_DW.Aineq_o[0] = imperix_control_P.CEMPC.Aineq_o[0];
    imperix_control_DW.Aineq_o[1] = imperix_control_P.CEMPC.Aineq_o[1];

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
  // '<S19>:1:90'
  // '<S19>:1:91'
  for (i = 0; i < 6; i++) {
    a21 = 0.0;
    for (rtemp = 0; rtemp < 5; rtemp++) {
      a21 += imperix_control_DW.A[5 * i + rtemp] *
        imperix_control_DW.TmpRTBAtEnergybalanceInport3_Bu[rtemp];
    }

    VB[i] = a21;
    IB[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    a21 = imperix_control_DW.TmpRTBAtEnergybalanceInport4_Bu[i];
    for (rtemp = 0; rtemp < 6; rtemp++) {
      IB[rtemp] += imperix_control_DW.pinvA[6 * i + rtemp] * a21;
    }
  }

  // '<S19>:1:94'
  // '<S19>:1:100'
  vo_ref_temp = 0.0;

  // '<S19>:1:101'
  ie_ref_temp[0] = 0.0;
  ie_ref_temp[1] = 0.0;

  // '<S19>:1:102'
  // '<S19>:1:103'
  // '<S19>:1:105'
  r1 = static_cast<int32_T>(imperix_control_DW.Nl);

  // '<S19>:1:107'
  if (static_cast<int32_T>(imperix_control_DW.Nl) - 1 >= 0) {
    maxval = imperix_control_DW.Ec_dev * imperix_control_DW.Ec_dev *
      imperix_control_DW.Ec_ref2;
    tmp_3[0] = -imperix_control_DW.Aineq_o[0];
    tmp_3[1] = -imperix_control_DW.Aineq_o[1];
    for (i = 0; i < 36; i++) {
      Adt[i] = imperix_control_DW.Ts * imperix_control_DW.K[i];
    }

    for (i = 0; i < 6; i++) {
      a21 = IB[i];
      tmp_2[i] = imperix_control_DW.is_max_c - a21;
      tmp_2[i + 6] = -(-imperix_control_DW.is_max_c - a21);
    }
  }

  for (r2 = 0; r2 < r1; r2++) {
    // '<S19>:1:111'
    for (i = 0; i < 6; i++) {
      b_B[i] = imperix_control_DW.ONE[i] * vo_ref_temp + VB[i];
    }

    // '<S19>:1:114'
    memset(&Ad[0], 0, 36U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      Ad[i + 6 * i] = b_B[i];
    }

    for (i = 0; i < 6; i++) {
      for (rtemp = 0; rtemp < 6; rtemp++) {
        E[rtemp + 6 * i] = 0.0;
      }

      for (rtemp = 0; rtemp < 6; rtemp++) {
        a21 = Ad[6 * i + rtemp];
        for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
          E_tmp = 6 * i + Kt_tmp;
          E[E_tmp] += Adt[6 * rtemp + Kt_tmp] * a21;
        }
      }
    }

    // '<S19>:1:115'
    for (i = 0; i < 2; i++) {
      for (rtemp = 0; rtemp < 6; rtemp++) {
        B[rtemp + 6 * i] = 0.0;
      }

      for (rtemp = 0; rtemp < 6; rtemp++) {
        a21 = imperix_control_DW.NN[6 * i + rtemp];
        for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
          E_tmp = 6 * i + Kt_tmp;
          B[E_tmp] += E[6 * rtemp + Kt_tmp] * a21;
        }
      }
    }

    // '<S19>:1:119'
    // '<S19>:1:121'
    // '<S19>:1:124'
    // '<S19>:1:127'
    // '<S19>:1:128'
    // '<S19>:1:131'
    // '<S19>:1:132'
    // '<S19>:1:133'
    // '<S19>:1:140'
    for (i = 0; i < 6; i++) {
      a21 = 0.0;
      H_tmp = 0.0;
      is_temp_0 = 0.0;
      for (rtemp = 0; rtemp < 6; rtemp++) {
        vo_ref_temp = imperix_control_DW.MI[6 * i + rtemp];
        H_tmp += 2.0 * B[rtemp] * vo_ref_temp;
        is_temp_0 += B[rtemp + 6] * 2.0 * vo_ref_temp;
        a21 += E[6 * rtemp + i] * IB[rtemp];
      }

      rtemp = i << 1;
      tmp[rtemp + 1] = is_temp_0;
      tmp[rtemp] = H_tmp;
      b_B[i] = imperix_control_DW.TmpRTBAtGainOutport1_Buffer[i] + a21;
    }

    for (i = 0; i < 2; i++) {
      a21 = 0.0;
      for (rtemp = 0; rtemp < 6; rtemp++) {
        a21 += imperix_control_DW.NN[6 * i + rtemp] * 2.0 * IB[rtemp];
      }

      for (rtemp = 0; rtemp < 2; rtemp++) {
        H_tmp = 0.0;
        for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
          H_tmp += tmp[(Kt_tmp << 1) + i] * B[6 * rtemp + Kt_tmp];
        }

        Kt_tmp = (rtemp << 1) + i;
        tmp_1[Kt_tmp] = imperix_control_DW.Hu_z[Kt_tmp] *
          imperix_control_DW.lambda_z + H_tmp / maxval;
      }

      H_tmp = 0.0;
      for (rtemp = 0; rtemp < 6; rtemp++) {
        H_tmp += tmp[(rtemp << 1) + i] * b_B[rtemp];
      }

      lam[i] = a21 / imperix_control_DW.is_max2_f * imperix_control_DW.lambda_z
        + H_tmp / maxval;
    }

    imperix_cont_mpcActiveSetSolver(tmp_1, lam, imperix_control_DW.Aineq_z,
      tmp_2, imperix_control_DW.options_z.MaxIterations,
      imperix_control_DW.options_z.ConstraintTolerance,
      imperix_control_DW.options_z.UseHessianAsInput, ie_ref_temp, &i, x);

    // '<S19>:1:140'
    // '<S19>:1:145'
    vo_ref_temp = ie_ref_temp[1];
    a21 = ie_ref_temp[0];
    for (i = 0; i < 6; i++) {
      is_temp[i] = (imperix_control_DW.NN[i + 6] * vo_ref_temp +
                    imperix_control_DW.NN[i] * a21) + IB[i];
    }

    // '<S19>:1:148'
    memset(&Ad[0], 0, 36U * sizeof(real_T));
    for (rtemp = 0; rtemp < 6; rtemp++) {
      Ad[rtemp + 6 * rtemp] = is_temp[rtemp];
      for (i = 0; i < 6; i++) {
        E[i + 6 * rtemp] = 0.0;
      }
    }

    // '<S19>:1:149'
    for (i = 0; i < 6; i++) {
      for (rtemp = 0; rtemp < 6; rtemp++) {
        a21 = Ad[6 * i + rtemp];
        for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
          E_tmp = 6 * i + Kt_tmp;
          E[E_tmp] += Adt[6 * rtemp + Kt_tmp] * a21;
        }
      }

      b_B[i] = 0.0;
    }

    // '<S19>:1:153'
    // '<S19>:1:154'
    // '<S19>:1:157'
    // '<S19>:1:160'
    for (i = 0; i < 6; i++) {
      a21 = imperix_control_DW.ONE[i];
      for (rtemp = 0; rtemp < 6; rtemp++) {
        b_B[rtemp] += E[6 * i + rtemp] * a21;
      }

      is_temp[i] = 0.0;
    }

    is_temp_0 = 0.0;
    for (i = 0; i < 6; i++) {
      vo_ref_temp = is_temp[i];
      for (rtemp = 0; rtemp < 6; rtemp++) {
        vo_ref_temp += imperix_control_DW.MI[6 * i + rtemp] * (2.0 * b_B[rtemp]);
      }

      is_temp[i] = vo_ref_temp;
      is_temp_0 += vo_ref_temp * b_B[i];
    }

    H_tmp = imperix_control_DW.Ec_dev * imperix_control_DW.Ec_dev *
      imperix_control_DW.Ec_ref2;
    a21 = is_temp_0 / H_tmp + imperix_control_DW.lambda_o *
      imperix_control_DW.Hu_o;

    // '<S19>:1:161'
    // '<S19>:1:164'
    b_B[0] = imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[0] - VB[0];
    b_B[1] = imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[1] - VB[1];
    b_B[2] = imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[2] - VB[2];
    b_B[3] = 0.0 - VB[3];
    b_B[4] = 0.0 - VB[4];
    b_B[5] = 0.0 - VB[5];
    if (!rtIsNaN(b_B[0])) {
      i = 1;
    } else {
      i = 0;
      rtemp = 2;
      exitg1 = false;
      while ((!exitg1) && (rtemp < 7)) {
        if (!rtIsNaN(b_B[rtemp - 1])) {
          i = rtemp;
          exitg1 = true;
        } else {
          rtemp++;
        }
      }
    }

    if (i == 0) {
      vo_ref_temp = b_B[0];
    } else {
      vo_ref_temp = b_B[i - 1];
      for (rtemp = i + 1; rtemp < 7; rtemp++) {
        is_temp_0 = b_B[rtemp - 1];
        if (vo_ref_temp > is_temp_0) {
          vo_ref_temp = is_temp_0;
        }
      }
    }

    // '<S19>:1:165'
    b_B[0] = 0.0 - VB[0];
    b_B[1] = 0.0 - VB[1];
    b_B[2] = 0.0 - VB[2];
    b_B[3] = -imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[3] - VB[3];
    b_B[4] = -imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[4] - VB[4];
    b_B[5] = -imperix_control_DW.TmpRTBAtEnergybalanceInport2_Bu[5] - VB[5];
    if (!rtIsNaN(0.0 - VB[0])) {
      i = 1;
    } else {
      i = 0;
      rtemp = 2;
      exitg1 = false;
      while ((!exitg1) && (rtemp < 7)) {
        if (!rtIsNaN(b_B[rtemp - 1])) {
          i = rtemp;
          exitg1 = true;
        } else {
          rtemp++;
        }
      }
    }

    if (i == 0) {
      ub[1] = 0.0 - VB[0];
    } else {
      Linv = b_B[i - 1];
      for (rtemp = i + 1; rtemp < 7; rtemp++) {
        is_temp_0 = b_B[rtemp - 1];
        if (Linv < is_temp_0) {
          Linv = is_temp_0;
        }
      }

      ub[1] = Linv;
    }

    // '<S19>:1:166'
    // '<S19>:1:171'
    if (imperix_control_DW.options_o.UseHessianAsInput) {
      Linv = 1.0;
      if (a21 > 0.0) {
        a21 = sqrt(a21);
      }

      imperix_control_trisolve_a(a21, &Linv);
    } else {
      Linv = a21;
    }

    iA1[0] = false;
    iA1[1] = false;
    is_temp_0 = 0.0;
    for (i = 0; i < 6; i++) {
      a21 = 0.0;
      for (rtemp = 0; rtemp < 6; rtemp++) {
        a21 += E[6 * rtemp + i] * VB[rtemp];
      }

      is_temp_0 += (imperix_control_DW.TmpRTBAtGainOutport1_Buffer[i] + a21) *
        is_temp[i];
    }

    ub[0] = -vo_ref_temp;
    imperix_control_qpkwik_n(Linv, Linv * Linv, is_temp_0 / H_tmp +
      imperix_control_DW.lambda_o * (0.0 / imperix_control_DW.vo_max2), tmp_3,
      ub, iA1, imperix_control_DW.options_o.MaxIterations,
      imperix_control_DW.options_o.ConstraintTolerance, &vo_ref_temp, lam, &i);

    // '<S19>:1:171'
  }

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   RateTransition generated from: '<S1>/Kalman Filter'
  //   UnitDelay: '<S1>/Unit Delay'
  //
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
  for (i = 0; i < 6; i++) {
    Kt[i] = imperix_control_DW.C[3 * i];
    B_0[i] = 0.0;
    Kt[i + 6] = imperix_control_DW.C[3 * i + 1];
    B_0[i + 6] = 0.0;
    Kt[i + 12] = imperix_control_DW.C[3 * i + 2];
    B_0[i + 12] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    for (rtemp = 0; rtemp < 6; rtemp++) {
      a21 = Kt[6 * i + rtemp];
      for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
        E_tmp = 6 * i + Kt_tmp;
        B_0[E_tmp] += imperix_control_DW.SIGt_apriori[6 * rtemp + Kt_tmp] * a21;
      }
    }
  }

  for (i = 0; i < 6; i++) {
    a21 = 0.0;
    maxval = 0.0;
    H_tmp = 0.0;
    for (rtemp = 0; rtemp < 6; rtemp++) {
      is_temp_0 = imperix_control_DW.SIGt_apriori[6 * i + rtemp];
      a21 += imperix_control_DW.C[3 * rtemp] * is_temp_0;
      maxval += imperix_control_DW.C[3 * rtemp + 1] * is_temp_0;
      H_tmp += imperix_control_DW.C[3 * rtemp + 2] * is_temp_0;
    }

    tmp_0[3 * i + 2] = H_tmp;
    tmp_0[3 * i + 1] = maxval;
    tmp_0[3 * i] = a21;
  }

  for (i = 0; i < 3; i++) {
    for (rtemp = 0; rtemp < 3; rtemp++) {
      a21 = 0.0;
      for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
        a21 += tmp_0[3 * Kt_tmp + i] * Kt[6 * rtemp + Kt_tmp];
      }

      r1 = 3 * rtemp + i;
      A[r1] = imperix_control_DW.R[r1] + a21;
    }
  }

  r1 = 0;
  r2 = 1;
  i = 2;
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
    i = 0;
  }

  A[r2] /= A[r1];
  A[i] /= A[r1];
  A[r2 + 3] -= A[r1 + 3] * A[r2];
  A[i + 3] -= A[r1 + 3] * A[i];
  A[r2 + 6] -= A[r1 + 6] * A[r2];
  A[i + 6] -= A[r1 + 6] * A[i];
  if (fabs(A[i + 3]) > fabs(A[r2 + 3])) {
    rtemp = r2;
    r2 = i;
    i = rtemp;
  }

  A[i + 3] /= A[r2 + 3];
  A[i + 6] -= A[i + 3] * A[r2 + 6];

  // '<S22>:1:29'
  // '<S22>:1:30'
  maxval = 0.0;
  H_tmp = 0.0;
  is_temp_0 = 0.0;
  for (rtemp = 0; rtemp < 6; rtemp++) {
    Kt_tmp = 6 * r1 + rtemp;
    Kt[Kt_tmp] = B_0[rtemp] / A[r1];
    E_tmp = 6 * r2 + rtemp;
    Kt[E_tmp] = B_0[rtemp + 6] - A[r1 + 3] * Kt[Kt_tmp];
    Kt_tmp_0 = 6 * i + rtemp;
    Kt[Kt_tmp_0] = B_0[rtemp + 12] - A[r1 + 6] * Kt[Kt_tmp];
    Kt[E_tmp] /= A[r2 + 3];
    Kt[Kt_tmp_0] -= A[r2 + 6] * Kt[E_tmp];
    Kt[Kt_tmp_0] /= A[i + 6];
    Kt[E_tmp] -= A[i + 3] * Kt[Kt_tmp_0];
    Kt[Kt_tmp] -= Kt[Kt_tmp_0] * A[i];
    Kt[Kt_tmp] -= Kt[E_tmp] * A[r2];
    a21 = imperix_control_DW.xt_est_apriori[rtemp];
    maxval += imperix_control_DW.C[3 * rtemp] * a21;
    H_tmp += imperix_control_DW.C[3 * rtemp + 1] * a21;
    is_temp_0 += imperix_control_DW.C[3 * rtemp + 2] * a21;
  }

  maxval = imperix_control_DW.TmpRTBAtKalmanFilterInport1_Buf[0] - maxval;
  H_tmp = imperix_control_DW.TmpRTBAtKalmanFilterInport1_Buf[1] - H_tmp;
  is_temp_0 = imperix_control_DW.TmpRTBAtKalmanFilterInport2_Buf - is_temp_0;
  for (i = 0; i < 6; i++) {
    VB[i] = ((Kt[i + 6] * H_tmp + Kt[i] * maxval) + Kt[i + 12] * is_temp_0) +
      imperix_control_DW.xt_est_apriori[i];
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
  Ad[18] = VB[4] * imperix_control_P.KF.Ad[18];
  Ad[13] = VB[4] * imperix_control_P.KF.Ad[13];
  Ad[20] = VB[4] * imperix_control_P.KF.Ad[20];
  Ad[15] = VB[4] * imperix_control_P.KF.Ad[15];
  Ad[4] = VB[3] * imperix_control_P.KF.Ad[4];
  Ad[10] = VB[2] * imperix_control_P.KF.Ad[10];

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
  Adt[24] = VB[3] * imperix_control_P.KF.Adt[24];

  // '<S22>:1:59'
  Adt[25] = VB[2] * imperix_control_P.KF.Adt[25];

  // '<S22>:1:60'
  Adt[26] = VB[3] * imperix_control_P.KF.Adt[26];

  // '<S22>:1:61'
  Adt[27] = VB[2] * imperix_control_P.KF.Adt[27];

  // '<S22>:1:62'
  Adt[16] = VB[1] * imperix_control_P.KF.Adt[16];

  // '<S22>:1:63'
  Adt[22] = VB[0] * imperix_control_P.KF.Adt[22];

  // '<S22>:1:66'
  for (i = 0; i < 6; i++) {
    IB[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    a21 = VB[i];
    for (rtemp = 0; rtemp < 6; rtemp++) {
      IB[rtemp] += Ad[6 * i + rtemp] * a21;
    }

    b_B[i] = 0.0;
  }

  for (i = 0; i < 2; i++) {
    a21 = imperix_control_DW.UnitDelay_DSTATE[i];
    for (rtemp = 0; rtemp < 6; rtemp++) {
      b_B[rtemp] += imperix_control_DW.Bd_m[6 * i + rtemp] * a21;
    }
  }

  // '<S22>:1:68'
  for (i = 0; i < 6; i++) {
    imperix_control_DW.xt_est_apriori[i] = IB[i] + b_B[i];
  }

  for (rtemp = 0; rtemp < 6; rtemp++) {
    maxval = imperix_control_DW.C[3 * rtemp + 1];
    a21 = imperix_control_DW.C[3 * rtemp];
    H_tmp = imperix_control_DW.C[3 * rtemp + 2];
    for (i = 0; i < 6; i++) {
      Kt_tmp = 6 * rtemp + i;
      Ad[Kt_tmp] = imperix_control_DW.Inx[Kt_tmp] - ((Kt[i + 6] * maxval + a21 *
        Kt[i]) + Kt[i + 12] * H_tmp);
      E[rtemp + 6 * i] = 0.0;
    }
  }

  for (i = 0; i < 6; i++) {
    for (rtemp = 0; rtemp < 6; rtemp++) {
      Kt_tmp = 6 * i + rtemp;
      a21 = imperix_control_DW.SIGt_apriori[Kt_tmp];
      for (r1 = 0; r1 < 6; r1++) {
        r2 = 6 * i + r1;
        E[r2] += Ad[6 * rtemp + r1] * a21;
      }

      Adt_0[Kt_tmp] = 0.0;
    }

    for (rtemp = 0; rtemp < 6; rtemp++) {
      a21 = E[6 * i + rtemp];
      for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
        r1 = 6 * i + Kt_tmp;
        Adt_0[r1] += Adt[6 * rtemp + Kt_tmp] * a21;
      }
    }
  }

  for (i = 0; i < 6; i++) {
    for (rtemp = 0; rtemp < 6; rtemp++) {
      a21 = 0.0;
      for (Kt_tmp = 0; Kt_tmp < 6; Kt_tmp++) {
        a21 += Adt_0[6 * Kt_tmp + i] * Adt[6 * Kt_tmp + rtemp];
      }

      r1 = 6 * rtemp + i;
      imperix_control_DW.SIGt_apriori[r1] = imperix_control_DW.Q[r1] + a21;
    }
  }

  // MATLAB Function: '<S26>/Input format' incorporates:
  //   RateTransition generated from: '<S26>/Input format'
  //   RateTransition generated from: '<S50>/Gain'
  //
  // '<S22>:1:69'
  // '<S22>:1:70'
  // '<S22>:1:73'
  // '<S22>:1:74'
  // '<S22>:1:75'
  // '<S22>:1:76'
  // '<S22>:1:77'
  // '<S22>:1:79'
  // MATLAB Function 'Closed_loop_control/NN CEC/Input format': '<S147>:1'
  if (!imperix_control_DW.Ec_ref_not_empty) {
    // '<S147>:1:5'
    // '<S147>:1:6'
    imperix_control_DW.Ec_ref_not_empty = true;

    // '<S147>:1:7'
  }

  // '<S147>:1:11'
  // '<S147>:1:12'
  // '<S147>:1:13'
  // '<S147>:1:16'
  memset(&rtb_obs[0], 0, 14U * sizeof(real_T));

  // '<S147>:1:19'
  maxval = imperix_control_DW.TmpRTBAtGainOutport1_Buffer[0];
  for (rtemp = 0; rtemp < 5; rtemp++) {
    maxval += imperix_control_DW.TmpRTBAtGainOutport1_Buffer[rtemp + 1];
  }

  maxval /= 6.0;
  for (i = 0; i < 6; i++) {
    rtb_obs[i] = imperix_control_DW.TmpRTBAtGainOutport1_Buffer[i] - maxval;
  }

  // '<S147>:1:20'
  rtb_obs[6] = imperix_control_DW.TmpRTBAtInputformatInport2_Buff;

  // '<S147>:1:23'
  // '<S147>:1:24'
  rtb_obs[7] = imperix_control_DW.TmpRTBAtInputformatInport3_Buff[0];
  rtb_obs[9] = imperix_control_DW.TmpRTBAtInputformatInport4_Buff[0];
  rtb_obs[8] = imperix_control_DW.TmpRTBAtInputformatInport3_Buff[1];
  rtb_obs[10] = imperix_control_DW.TmpRTBAtInputformatInport4_Buff[1];

  // '<S147>:1:25'
  rtb_obs[11] = (imperix_control_DW.TmpRTBAtInputformatInport4_Buff[0] *
                 imperix_control_DW.TmpRTBAtInputformatInport3_Buff[0] +
                 imperix_control_DW.TmpRTBAtInputformatInport4_Buff[1] *
                 imperix_control_DW.TmpRTBAtInputformatInport3_Buff[1]) * 1.5;
  rtb_obs[12] = (imperix_control_DW.TmpRTBAtInputformatInport3_Buff[0] *
                 imperix_control_DW.TmpRTBAtInputformatInport4_Buff[1] -
                 imperix_control_DW.TmpRTBAtInputformatInport4_Buff[0] *
                 imperix_control_DW.TmpRTBAtInputformatInport3_Buff[1]) * 1.5;

  // '<S147>:1:28'
  rtb_obs[13] = imperix_control_DW.TmpRTBAtInputformatInport5_Buff;

  // End of MATLAB Function: '<S26>/Input format'

  // DataTypeConversion: '<S26>/Cast To Double' incorporates:
  //   Gain: '<S26>/Gain'

  // MATLAB Function 'Closed_loop_control/NN CEC/FFNN/MLFB': '<S151>:1'
  // '<S151>:1:5'
  for (i = 0; i < 14; i++) {
    tmp_4[i] = static_cast<real32_T>(1.0 / imperix_control_P.Xmax[i] * rtb_obs[i]);
  }

  // End of DataTypeConversion: '<S26>/Cast To Double'

  // MATLAB Function: '<S146>/MLFB'
  imperix_control_predict(tmp_4, tmp_5);

  // SignalConversion generated from: '<S26>/Vector Concatenate5' incorporates:
  //   DataTypeConversion: '<S26>/Cast To Double1'
  //   Gain: '<S26>/Gain4'
  //   MATLAB Function: '<S146>/MLFB'

  rtb_VectorConcatenate5[2] = imperix_control_P.Ymax[2] * tmp_5[2];

  // SignalConversion generated from: '<S26>/Vector Concatenate5' incorporates:
  //   DataTypeConversion: '<S26>/Cast To Double1'
  //   Gain: '<S26>/Gain4'
  //   MATLAB Function: '<S146>/MLFB'

  rtb_VectorConcatenate5[0] = imperix_control_P.Ymax[0] * tmp_5[0];

  // MATLAB Function: '<S26>/White noise' incorporates:
  //   MATLAB Function: '<S1>/Energy balance'

  rtb_VectorConcatenate4[0] = ie_ref_temp[0];

  // SignalConversion generated from: '<S26>/Vector Concatenate5' incorporates:
  //   DataTypeConversion: '<S26>/Cast To Double1'
  //   Gain: '<S26>/Gain4'
  //   MATLAB Function: '<S146>/MLFB'

  rtb_VectorConcatenate5[1] = imperix_control_P.Ymax[1] * tmp_5[1];

  // MATLAB Function: '<S26>/White noise' incorporates:
  //   MATLAB Function: '<S1>/Energy balance'

  rtb_VectorConcatenate4[1] = ie_ref_temp[1];
  rtb_VectorConcatenate4[2] = vo_ref_temp;

  // MATLAB Function 'Closed_loop_control/NN CEC/White noise': '<S150>:1'
  if (!imperix_control_DW.is_max_not_empty) {
    // '<S150>:1:4'
    // '<S150>:1:5'
    imperix_control_DW.is_max_not_empty = true;

    // '<S150>:1:6'
  }

  // RateTransition generated from: '<S26>/Switch' incorporates:
  //   Concatenate: '<S26>/Vector Concatenate4'

  imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[0] = rtb_VectorConcatenate4[0];
  imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[1] = rtb_VectorConcatenate4[1];
  imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[2] = rtb_VectorConcatenate4[2];

  // RateTransition generated from: '<S26>/Switch' incorporates:
  //   Concatenate: '<S26>/Vector Concatenate5'

  imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[0] = rtb_VectorConcatenate5[0];
  imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[1] = rtb_VectorConcatenate5[1];
  imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[2] = rtb_VectorConcatenate5[2];

  // InitialCondition: '<S48>/IC' incorporates:
  //   ComplexToMagnitudeAngle: '<S48>/Complex to Magnitude-Angle'
  //   MATLAB Function: '<S1>/Kalman Filter'

  if (imperix_control_DW.IC_FirstOutputTime) {
    imperix_control_DW.IC_FirstOutputTime = false;
    maxval = imperix_control_P.IC_Value;
  } else {
    maxval = rt_atan2d_snf(imperix_control_DW.xt_est_apriori[3],
      imperix_control_DW.xt_est_apriori[2]);
  }

  // End of InitialCondition: '<S48>/IC'

  // RateTransition generated from: '<S48>/IC'
  imperix_control_DW.TmpRTBAtICOutport1_Buffer0 = maxval;

  // RateTransition generated from: '<S1>/Sum5' incorporates:
  //   ComplexToMagnitudeAngle: '<S48>/Complex to Magnitude-Angle'
  //   MATLAB Function: '<S1>/Kalman Filter'

  imperix_control_DW.TmpRTBAtSum5Inport2_Buffer0 = rt_hypotd_snf
    (imperix_control_DW.xt_est_apriori[2], imperix_control_DW.xt_est_apriori[3]);

  // RateTransition generated from: '<S1>/Sum7'
  imperix_control_DW.TmpRTBAtSum7Inport1_Buffer0 = rtb_Constant5;

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

    // Start for S-Function (ADC): '<S84>/ADC'
    Adc_ConfigureInput(0, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(0, 0, &ix_raw_adc_ptr_0_0);

    // Start for S-Function (ADC): '<S86>/ADC'
    Adc_ConfigureInput(1, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(1, 0, &ix_raw_adc_ptr_1_0);

    // Start for S-Function (ADC): '<S74>/ADC'
    Adc_ConfigureInput(2, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

    // Start for S-Function (ADC): '<S62>/ADC'
    Adc_ConfigureInput(3, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

    // Start for S-Function (ADC): '<S76>/ADC'
    Adc_ConfigureInput(4, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);

    // Start for S-Function (ADC): '<S78>/ADC'
    Adc_ConfigureInput(5, 0.00045776F, 0.0F, 0);
    Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

    // Start for S-Function (PROBE): '<S209>/S-Function'
    ConfigureProbe(&is1, 0);

    // Start for S-Function (PROBE): '<S211>/S-Function'
    ConfigureProbe(&is2, 0);

    // Start for S-Function (ADC): '<S70>/ADC'
    Adc_ConfigureInput(6, 0.027466F, 0.0F, 0);
    Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

    // Start for S-Function (ADC): '<S88>/ADC'
    Adc_ConfigureInput(7, 0.027466F, 0.0F, 0);
    Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

    // Start for S-Function (ADC): '<S64>/ADC'
    Adc_ConfigureInput(0, 0.027466F, 0.0F, 1);
    Adc_GetPointer(0, 1, &ix_raw_adc_ptr_0_1);

    // Start for S-Function (ADC): '<S72>/ADC'
    Adc_ConfigureInput(1, 0.027466F, 0.0F, 1);
    Adc_GetPointer(1, 1, &ix_raw_adc_ptr_1_1);

    // Start for S-Function (ADC): '<S66>/ADC'
    Adc_ConfigureInput(2, 0.027466F, 0.0F, 1);
    Adc_GetPointer(2, 1, &ix_raw_adc_ptr_2_1);

    // Start for S-Function (ADC): '<S68>/ADC'
    Adc_ConfigureInput(3, 0.027466F, 0.0F, 1);
    Adc_GetPointer(3, 1, &ix_raw_adc_ptr_3_1);

    // Start for S-Function (PROBE): '<S213>/S-Function'
    ConfigureProbe(&Vc5, 0);

    // Start for S-Function (PROBE): '<S215>/S-Function'
    ConfigureProbe(&Vc6, 0);

    // Start for S-Function (ADC): '<S80>/ADC'
    Adc_ConfigureInput(4, 0.012207F, 0.0F, 1);
    Adc_GetPointer(4, 1, &ix_raw_adc_ptr_4_1);

    // Start for S-Function (PROBE): '<S217>/S-Function'
    ConfigureProbe(&wm, 0);

    // Start for S-Function (PROBE): '<S219>/S-Function'
    ConfigureProbe(&is3, 0);

    // Start for S-Function (PROBE): '<S221>/S-Function'
    ConfigureProbe(&is4, 0);

    // Start for S-Function (PROBE): '<S223>/S-Function'
    ConfigureProbe(&is5, 0);

    // Start for S-Function (PROBE): '<S225>/S-Function'
    ConfigureProbe(&is6, 0);

    // Start for S-Function (PROBE): '<S227>/S-Function'
    ConfigureProbe(&Vc1, 0);

    // Start for S-Function (PROBE): '<S229>/S-Function'
    ConfigureProbe(&Vc2, 0);

    // Start for S-Function (PROBE): '<S231>/S-Function'
    ConfigureProbe(&Vc3, 0);

    // Start for S-Function (PROBE): '<S233>/S-Function'
    ConfigureProbe(&Vc4, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S543>/S-Function'
    F_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S547>/S-Function'
    w_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S545>/S-Function'
    do_control = 0.0F;                 // Tunable parameter initialization
    ConfigureTunable(&do_control, 0, 0);

    // Start for RateTransition generated from: '<S1>/Sum7'
    imperix_control_B.TmpRTBAtSum7Inport1 =
      imperix_control_P.TmpRTBAtSum7Inport1_InitialCond;

    // Start for RateTransition generated from: '<S1>/Sum5'
    imperix_control_B.TmpRTBAtSum5Inport2 =
      imperix_control_P.TmpRTBAtSum5Inport2_InitialCond;

    // Start for RateTransition generated from: '<S48>/IC'
    imperix_control_B.TmpRTBAtICOutport1 =
      imperix_control_P.TmpRTBAtICOutport1_InitialCondi;

    // Start for RateTransition generated from: '<S26>/Switch'
    imperix_control_B.TmpRTBAtSwitchInport1[0] =
      imperix_control_P.TmpRTBAtSwitchInport1_InitialCo;

    // Start for RateTransition generated from: '<S26>/Switch'
    imperix_control_B.TmpRTBAtSwitchInport3[0] =
      imperix_control_P.TmpRTBAtSwitchInport3_InitialCo;

    // Start for RateTransition generated from: '<S26>/Switch'
    imperix_control_B.TmpRTBAtSwitchInport1[1] =
      imperix_control_P.TmpRTBAtSwitchInport1_InitialCo;

    // Start for RateTransition generated from: '<S26>/Switch'
    imperix_control_B.TmpRTBAtSwitchInport3[1] =
      imperix_control_P.TmpRTBAtSwitchInport3_InitialCo;

    // Start for RateTransition generated from: '<S26>/Switch'
    imperix_control_B.TmpRTBAtSwitchInport1[2] =
      imperix_control_P.TmpRTBAtSwitchInport1_InitialCo;

    // Start for RateTransition generated from: '<S26>/Switch'
    imperix_control_B.TmpRTBAtSwitchInport3[2] =
      imperix_control_P.TmpRTBAtSwitchInport3_InitialCo;

    // Start for S-Function (IRQ): '<S91>/S-Function' incorporates:
    //   Constant: '<S93>/clk_id'

    ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
      imperix_control_P.clk_id_Value, 0.5F, 0U);
    ConfigureReadTriggerDelayInNs(2000U);
    Adc_SetUserOversampling(0.0F);

    // Start for S-Function (CLK): '<S93>/CLK1'
    Clock_SetFrequency((tClock) 0, 6000.0F);

    // Start for Atomic SubSystem: '<S206>/generation'
    // Start for S-Function (CB_PWM): '<S207>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S206>/generation'

    // Start for Atomic SubSystem: '<S290>/generation'
    // Start for S-Function (CB_PWM): '<S291>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S290>/generation'

    // Start for Atomic SubSystem: '<S292>/generation'
    // Start for S-Function (CB_PWM): '<S293>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S292>/generation'

    // Start for Atomic SubSystem: '<S294>/generation'
    // Start for S-Function (CB_PWM): '<S295>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S294>/generation'

    // Start for Atomic SubSystem: '<S296>/generation'
    // Start for S-Function (CB_PWM): '<S297>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S296>/generation'

    // Start for Atomic SubSystem: '<S486>/generation'
    // Start for S-Function (CB_PWM): '<S487>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S486>/generation'

    // Start for Atomic SubSystem: '<S488>/generation'
    // Start for S-Function (CB_PWM): '<S489>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S488>/generation'

    // Start for Atomic SubSystem: '<S490>/generation'
    // Start for S-Function (CB_PWM): '<S491>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S490>/generation'

    // Start for Atomic SubSystem: '<S492>/generation'
    // Start for S-Function (CB_PWM): '<S493>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S492>/generation'

    // Start for Atomic SubSystem: '<S498>/generation'
    // Start for S-Function (CB_PWM): '<S499>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S498>/generation'

    // Start for Atomic SubSystem: '<S500>/generation'
    // Start for S-Function (CB_PWM): '<S501>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S500>/generation'

    // Start for Atomic SubSystem: '<S502>/generation'
    // Start for S-Function (CB_PWM): '<S503>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S502>/generation'

    // Start for Atomic SubSystem: '<S504>/generation'
    // Start for S-Function (CB_PWM): '<S505>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S504>/generation'

    // Start for Atomic SubSystem: '<S510>/generation'
    // Start for S-Function (CB_PWM): '<S511>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S510>/generation'

    // Start for Atomic SubSystem: '<S512>/generation'
    // Start for S-Function (CB_PWM): '<S513>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S512>/generation'

    // Start for Atomic SubSystem: '<S514>/generation'
    // Start for S-Function (CB_PWM): '<S515>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S514>/generation'

    // Start for Atomic SubSystem: '<S516>/generation'
    // Start for S-Function (CB_PWM): '<S517>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S516>/generation'

    // Start for Atomic SubSystem: '<S522>/generation'
    // Start for S-Function (CB_PWM): '<S523>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S522>/generation'

    // Start for Atomic SubSystem: '<S524>/generation'
    // Start for S-Function (CB_PWM): '<S525>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S524>/generation'

    // Start for Atomic SubSystem: '<S526>/generation'
    // Start for S-Function (CB_PWM): '<S527>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S526>/generation'

    // Start for Atomic SubSystem: '<S528>/generation'
    // Start for S-Function (CB_PWM): '<S529>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S528>/generation'

    // Start for Atomic SubSystem: '<S534>/generation'
    // Start for S-Function (CB_PWM): '<S535>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S534>/generation'

    // Start for Atomic SubSystem: '<S536>/generation'
    // Start for S-Function (CB_PWM): '<S537>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S536>/generation'

    // Start for Atomic SubSystem: '<S538>/generation'
    // Start for S-Function (CB_PWM): '<S539>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S538>/generation'

    // Start for Atomic SubSystem: '<S540>/generation'
    // Start for S-Function (CB_PWM): '<S541>/PWM' incorporates:
    //   Constant: '<S93>/clk_id'

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

    // End of Start for SubSystem: '<S540>/generation'

    // Start for S-Function (ADC): '<S82>/ADC'
    Adc_ConfigureInput(0, 0.012207F, 0.0F, 2);
    Adc_GetPointer(0, 2, &ix_raw_adc_ptr_0_2);

    // Start for InitialCondition: '<S48>/IC'
    imperix_control_DW.IC_FirstOutputTime = true;

    // InitializeConditions for RateTransition generated from: '<S1>/Sum7'
    imperix_control_DW.TmpRTBAtSum7Inport1_Buffer0 =
      imperix_control_P.TmpRTBAtSum7Inport1_InitialCond;

    // InitializeConditions for UnitDelay: '<S24>/Unit Delay1'
    imperix_control_DW.UnitDelay1_DSTATE = imperix_control_P.M2C.Vc_ref;

    // InitializeConditions for DiscreteIntegrator: '<S188>/Integrator'
    imperix_control_DW.Integrator_DSTATE =
      imperix_control_P.PIDController_InitialConditionF;

    // InitializeConditions for DiscreteIntegrator: '<S458>/Integrator'
    imperix_control_DW.Integrator_DSTATE_h =
      imperix_control_P.PCCPI_InitialConditionForIntegr;

    // InitializeConditions for DiscreteIntegrator: '<S268>/Integrator'
    imperix_control_DW.Integrator_DSTATE_e =
      imperix_control_P.SpeedPI_InitialConditionForInte;

    // InitializeConditions for RateTransition generated from: '<S1>/Sum5'
    imperix_control_DW.TmpRTBAtSum5Inport2_Buffer0 =
      imperix_control_P.TmpRTBAtSum5Inport2_InitialCond;

    // InitializeConditions for DiscreteIntegrator: '<S128>/Integrator'
    imperix_control_DW.Integrator_DSTATE_hf =
      imperix_control_P.FluxPI_InitialConditionForInteg;

    // InitializeConditions for RateTransition generated from: '<S48>/IC'
    imperix_control_DW.TmpRTBAtICOutport1_Buffer0 =
      imperix_control_P.TmpRTBAtICOutport1_InitialCondi;

    // InitializeConditions for DiscreteIntegrator: '<S342>/Integrator'
    imperix_control_DW.Integrator_DSTATE_b =
      imperix_control_P.MCCPId_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S394>/Integrator'
    imperix_control_DW.Integrator_DSTATE_k =
      imperix_control_P.MCCPIq_InitialConditionForInteg;

    // InitializeConditions for UnitDelay: '<S148>/Unit Delay1'
    imperix_control_DW.UnitDelay1_DSTATE_a[0] =
      imperix_control_P.UnitDelay1_InitialCondition;
    imperix_control_DW.UnitDelay1_DSTATE_a[1] =
      imperix_control_P.UnitDelay1_InitialCondition;

    // InitializeConditions for RateTransition generated from: '<S26>/Switch'
    imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[0] =
      imperix_control_P.TmpRTBAtSwitchInport1_InitialCo;

    // InitializeConditions for RateTransition generated from: '<S26>/Switch'
    imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[0] =
      imperix_control_P.TmpRTBAtSwitchInport3_InitialCo;

    // InitializeConditions for RateTransition generated from: '<S26>/Switch'
    imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[1] =
      imperix_control_P.TmpRTBAtSwitchInport1_InitialCo;

    // InitializeConditions for RateTransition generated from: '<S26>/Switch'
    imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[1] =
      imperix_control_P.TmpRTBAtSwitchInport3_InitialCo;

    // InitializeConditions for RateTransition generated from: '<S26>/Switch'
    imperix_control_DW.TmpRTBAtSwitchInport1_Buffer0[2] =
      imperix_control_P.TmpRTBAtSwitchInport1_InitialCo;

    // InitializeConditions for RateTransition generated from: '<S26>/Switch'
    imperix_control_DW.TmpRTBAtSwitchInport3_Buffer0[2] =
      imperix_control_P.TmpRTBAtSwitchInport3_InitialCo;

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

    // SystemInitialize for Enabled SubSystem: '<S299>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_control_B.Fcn_h,
      &imperix_control_B.Fcn1_a, &imperix_control_P.Subsystempi2delay);

    // End of SystemInitialize for SubSystem: '<S299>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S299>/Subsystem1'
    imperix_con_Subsystem1_Init(&imperix_control_B.Fcn_c,
      &imperix_control_B.Fcn1_f, &imperix_control_P.Subsystem1);

    // End of SystemInitialize for SubSystem: '<S299>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S307>/Subsystem - pi//2 delay'
    impe_Subsystempi2delay_Init(&imperix_control_B.Fcn_k,
      &imperix_control_B.Fcn1_l, &imperix_control_P.Subsystempi2delay_d);

    // End of SystemInitialize for SubSystem: '<S307>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S307>/Subsystem1'
    imperix_con_Subsystem1_Init(&imperix_control_B.Fcn_b,
      &imperix_control_B.Fcn1_o, &imperix_control_P.Subsystem1_f);

    // End of SystemInitialize for SubSystem: '<S307>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S476>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S480>/Fcn' incorporates:
    //   Outport: '<S480>/dq'

    imperix_control_B.Fcn_p = imperix_control_P.dq_Y0[0];

    // SystemInitialize for Fcn: '<S480>/Fcn1' incorporates:
    //   Outport: '<S480>/dq'

    imperix_control_B.Fcn1_h = imperix_control_P.dq_Y0[1];

    // End of SystemInitialize for SubSystem: '<S476>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S476>/Subsystem1'
    // SystemInitialize for Fcn: '<S481>/Fcn' incorporates:
    //   Outport: '<S481>/dq'

    imperix_control_B.Fcn = imperix_control_P.dq_Y0_e[0];

    // SystemInitialize for Fcn: '<S481>/Fcn1' incorporates:
    //   Outport: '<S481>/dq'

    imperix_control_B.Fcn1 = imperix_control_P.dq_Y0_e[1];

    // End of SystemInitialize for SubSystem: '<S476>/Subsystem1'
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
