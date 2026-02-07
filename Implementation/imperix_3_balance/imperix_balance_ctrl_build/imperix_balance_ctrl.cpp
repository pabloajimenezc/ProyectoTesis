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
// Model version                  : 19.123
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Fri Feb  6 16:32:39 2026
//
#include "imperix_balance_ctrl.h"
#include "rtwtypes.h"
#include "imperix_balance_ctrl_types.h"
#include "imperix_balance_ctrl_private.h"
#include <math.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include <string.h>
#include "zero_crossing_types.h"
#include "rt_defines.h"

real32_T d1;                           // Tunable parameter
real32_T d2;                           // Tunable parameter
real32_T d3;                           // Tunable parameter
real32_T d4;                           // Tunable parameter
real32_T d5;                           // Tunable parameter
real32_T d6;                           // Tunable parameter
real32_T override;                     // Tunable parameter
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
real32_T F_ref;                        // Tunable parameter
real32_T w_ref;                        // Tunable parameter
int16_T* ix_raw_adc_ptr_3_0;
real32_T reset_mean;                   // Tunable parameter
real32_T reset_PI;                     // Tunable parameter
real32_T enable_KF;                    // Tunable parameter
real32_T reset_KF;                     // Tunable parameter
real32_T magnetize;                    // Tunable parameter
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
real32_T is4;                          // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe
real32_T wm;                           // Probe
int16_T* ix_raw_adc_ptr_2_0;
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
real32_T enable_FP;                    // Tunable parameter
real32_T Te;                           // Probe

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
static void imperix_balance_ctrl_trisolve_l(const real_T A[4], real_T B[4]);
static real_T imperix_balance_ctrl_norm_k(const real_T x[2]);
static real_T imperix_balance_ctrl_xnrm2_p(int32_T n, const real_T x[4], int32_T
  ix0);
static void imperix_balance_ctrl_xgemv_e(int32_T m, int32_T n, const real_T A[4],
  int32_T ia0, const real_T x[4], int32_T ix0, real_T y[2]);
static void imperix_balance_ctrl_xgerc_m(int32_T m, int32_T n, real_T alpha1,
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
static void imperix_balance_ctrl_trisolve_a(const real_T A[16], real_T B[16]);
static real_T imperix_balance_ctrl_norm_dl(const real_T x[4]);
static real_T imperix_balance_ctrl_maximum_p(const real_T x[4]);
static real_T imperix_balance_ctrl_xnrm2_l(int32_T n, const real_T x[16],
  int32_T ix0);
static void imperix_balance_ctrl_xgemv_j(int32_T m, int32_T n, const real_T A[16],
  int32_T ia0, const real_T x[16], int32_T ix0, real_T y[4]);
static void imperix_balance_ctrl_xgerc_i2(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[4], real_T A[16], int32_T ia0);
static real_T imperix_balance_ct_KWIKfactor_l(const real_T Ac[96], const int32_T
  iC[24], int32_T nA, const real_T Linv[16], real_T RLinv[16], real_T D[16],
  real_T H[16], int32_T n);
static void imperix_balanc_DropConstraint_g(int32_T kDrop, boolean_T iA[24],
  int32_T *nA, int32_T iC[24]);
static void imperix_balance_ctrl_qpkwik_n(const real_T Linv[16], const real_T
  Hinv[16], const real_T f[4], const real_T Ac[96], const real_T b[24],
  boolean_T iA[24], int32_T maxiter, real_T FeasTol, real_T x[4], real_T lambda
  [24], int32_T *status);
static void imperix_balance_ctrl_repmat(const real_T a[2], real_T b[8]);
static void imperix_balance_ctrl_trisolve(const real_T A[100], real_T B[100]);
static real_T imperix_balance_ctrl_norm(const real_T x[10]);
static real_T imperix_balance_ctrl_maximum(const real_T x[10]);
static real_T imperix_balance_ctrl_xnrm2(int32_T n, const real_T x[100], int32_T
  ix0);
static void imperix_balance_ctrl_xgemv(int32_T m, int32_T n, const real_T A[100],
  int32_T ia0, const real_T x[100], int32_T ix0, real_T y[10]);
static void imperix_balance_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[10], real_T A[100], int32_T ia0);
static real_T imperix_balance_ctrl_KWIKfactor(const real_T Ac[600], const
  int32_T iC[60], int32_T nA, const real_T Linv[100], real_T RLinv[100], real_T
  D[100], real_T H[100], int32_T n);
static void imperix_balance__DropConstraint(int32_T kDrop, boolean_T iA[60],
  int32_T *nA, int32_T iC[60]);
static void imperix_balance_ctrl_qpkwik(const real_T Linv[100], const real_T
  Hinv[100], const real_T f[10], const real_T Ac[600], const real_T b[60],
  boolean_T iA[60], int32_T maxiter, real_T FeasTol, real_T x[10], real_T
  lambda[60], int32_T *status);
static void imperix_bala_mpcActiveSetSolver(const real_T H[100], const real_T f
  [10], const real_T A[600], const real_T b[60], int32_T options_MaxIterations,
  real_T options_ConstraintTolerance, boolean_T options_UseHessianAsInput,
  real_T x[10], int32_T *exitflag, boolean_T iA[60]);
static void imperix_balance_ctrl_trisolve_i(const real_T A[25], real_T B[25]);
static real_T imperix_balance_ctrl_norm_d(const real_T x[5]);
static real_T imperix_balance_ctrl_maximum_m(const real_T x[5]);
static real_T imperix_balance_ctrl_xnrm2_c(int32_T n, const real_T x[25],
  int32_T ix0);
static void imperix_balance_ctrl_xgemv_o(int32_T m, int32_T n, const real_T A[25],
  int32_T ia0, const real_T x[25], int32_T ix0, real_T y[5]);
static void imperix_balance_ctrl_xgerc_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[5], real_T A[25], int32_T ia0);
static real_T imperix_balance_ct_KWIKfactor_i(const real_T Ac[50], const int32_T
  iC[10], int32_T nA, const real_T Linv[25], real_T RLinv[25], real_T D[25],
  real_T H[25], int32_T n);
static void imperix_balanc_DropConstraint_d(int32_T kDrop, boolean_T iA[10],
  int32_T *nA, int32_T iC[10]);
static void imperix_balance_ctrl_qpkwik_l(const real_T Linv[25], const real_T
  Hinv[25], const real_T f[5], const real_T Ac[50], const real_T b[10],
  boolean_T iA[10], int32_T maxiter, real_T FeasTol, real_T x[5], real_T lambda
  [10], int32_T *status);
static void imperix_ba_mpcActiveSetSolver_l(const real_T H[25], const real_T f[5],
  const real_T A[50], const real_T b[10], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[5],
  int32_T *exitflag, boolean_T iA[10]);
static void imperix_balanc_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj);
int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
}

//
// System initialize for enable system:
//    '<S420>/Subsystem - pi//2 delay'
//    '<S427>/Subsystem - pi//2 delay'
//
void impe_Subsystempi2delay_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_g, P_Subsystempi2delay_imperix_b_T *localP)
{
  // SystemInitialize for Outport: '<S423>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_g = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S420>/Subsystem - pi//2 delay'
//    '<S427>/Subsystem - pi//2 delay'
//
void imperix_b_Subsystempi2delay(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_m, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_g)
{
  // Outputs for Enabled SubSystem: '<S420>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S423>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S423>/Fcn' incorporates:
    //   Fcn: '<S423>/Fcn1'

    tmp = cos(rtu_wt);
    tmp_0 = sin(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 + rtu_dq_m * tmp;

    // Fcn: '<S423>/Fcn1'
    *rty_alpha_beta_g = -rtu_dq * tmp + rtu_dq_m * tmp_0;
  }

  // End of Outputs for SubSystem: '<S420>/Subsystem - pi//2 delay'
}

//
// System initialize for enable system:
//    '<S420>/Subsystem1'
//    '<S427>/Subsystem1'
//
void imperix_bal_Subsystem1_Init(real_T *rty_alpha_beta, real_T
  *rty_alpha_beta_n, P_Subsystem1_imperix_balance__T *localP)
{
  // SystemInitialize for Outport: '<S424>/alpha_beta'
  *rty_alpha_beta = localP->alpha_beta_Y0[0];
  *rty_alpha_beta_n = localP->alpha_beta_Y0[1];
}

//
// Output and update for enable system:
//    '<S420>/Subsystem1'
//    '<S427>/Subsystem1'
//
void imperix_balance__Subsystem1(uint8_T rtu_Enable, real_T rtu_dq, real_T
  rtu_dq_g, real_T rtu_wt, real_T *rty_alpha_beta, real_T *rty_alpha_beta_n)
{
  // Outputs for Enabled SubSystem: '<S420>/Subsystem1' incorporates:
  //   EnablePort: '<S424>/Enable'

  if (rtu_Enable > 0) {
    real_T tmp;
    real_T tmp_0;

    // Fcn: '<S424>/Fcn' incorporates:
    //   Fcn: '<S424>/Fcn1'

    tmp = sin(rtu_wt);
    tmp_0 = cos(rtu_wt);
    *rty_alpha_beta = rtu_dq * tmp_0 - rtu_dq_g * tmp;

    // Fcn: '<S424>/Fcn1'
    *rty_alpha_beta_n = rtu_dq * tmp + rtu_dq_g * tmp_0;
  }

  // End of Outputs for SubSystem: '<S420>/Subsystem1'
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

// Function for MATLAB Function: '<S31>/Saturation'
static void imperix_balance_ctrl_trisolve_l(const real_T A[4], real_T B[4])
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

// Function for MATLAB Function: '<S31>/Saturation'
static real_T imperix_balance_ctrl_norm_k(const real_T x[2])
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

// Function for MATLAB Function: '<S31>/Saturation'
static real_T imperix_balance_ctrl_xnrm2_p(int32_T n, const real_T x[4], int32_T
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

// Function for MATLAB Function: '<S31>/Saturation'
static void imperix_balance_ctrl_xgemv_e(int32_T m, int32_T n, const real_T A[4],
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

// Function for MATLAB Function: '<S31>/Saturation'
static void imperix_balance_ctrl_xgerc_m(int32_T m, int32_T n, real_T alpha1,
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

// Function for MATLAB Function: '<S31>/Saturation'
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
      xnorm = imperix_balance_ctrl_xnrm2_p(1, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_balance_ctrl_xnrm2_p(1, A, ii +
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
        imperix_balance_ctrl_xgemv_e(b_lastv, c_lastc, A, ii + 3, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_m(b_lastv, c_lastc, -tau[0], ii + 1, work, A,
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
        imperix_balance_ctrl_xgemv_e(b_lastv, c_lastc, A, ii + 3, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_m(b_lastv, c_lastc, -tau[k_i], ii + 1, work,
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

// Function for MATLAB Function: '<S31>/Saturation'
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

// Function for MATLAB Function: '<S31>/Saturation'
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
    Xnorm0 = imperix_balance_ctrl_norm_k(x);
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
            cMin = imperix_balance_ctrl_norm_k(x);
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
static void imperix_balance_ctrl_trisolve_a(const real_T A[16], real_T B[16])
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
static real_T imperix_balance_ctrl_norm_dl(const real_T x[4])
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
static real_T imperix_balance_ctrl_maximum_p(const real_T x[4])
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
static real_T imperix_balance_ctrl_xnrm2_l(int32_T n, const real_T x[16],
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
static void imperix_balance_ctrl_xgemv_j(int32_T m, int32_T n, const real_T A[16],
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
static void imperix_balance_ctrl_xgerc_i2(int32_T m, int32_T n, real_T alpha1,
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

// Function for MATLAB Function: '<S1>/LICCs control'
static real_T imperix_balance_ct_KWIKfactor_l(const real_T Ac[96], const int32_T
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
      xnorm = imperix_balance_ctrl_xnrm2_l(3 - k_i, A, ii + 2);
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

          xnorm = rt_hypotd_snf(RLinv_0, imperix_balance_ctrl_xnrm2_l(3 - k_i, A,
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
        imperix_balance_ctrl_xgemv_j(b_lastv, c_lastc, A, ii + 5, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i2(b_lastv, c_lastc, -tau[k_i], ii + 1, work,
          A, ii + 5);
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
        imperix_balance_ctrl_xgemv_j(b_lastv, c_lastc, A, ii + 5, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i2(b_lastv, c_lastc, -tau[k_i], ii + 1, work,
          A, ii + 5);
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
static void imperix_balance_ctrl_qpkwik_n(const real_T Linv[16], const real_T
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
        Xnorm0 = imperix_balance_ct_KWIKfactor_l(Ac, iC, nA, Linv, RLinv, D, H,
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
              imperix_balanc_DropConstraint_g(kDrop + 1, iA, &nA, iC);
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
    Xnorm0 = imperix_balance_ctrl_norm_dl(x);
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
          cVal = imperix_balance_ctrl_maximum_p(varargin_1);
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
              cMin = imperix_balance_ct_KWIKfactor_l(Ac, iC, nA, Linv, RLinv, D,
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
                  imperix_balanc_DropConstraint_g(kDrop, iA, &nA, iC);
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
            cMin = imperix_balance_ctrl_norm_dl(x);
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
static void imperix_balance_ctrl_repmat(const real_T a[2], real_T b[8])
{
  real_T a_0;
  real_T a_1;
  a_0 = a[0];
  a_1 = a[1];
  for (int32_T jtilecol = 0; jtilecol < 4; jtilecol++) {
    int32_T ibcol;
    ibcol = jtilecol << 1;
    b[ibcol] = a_0;
    b[ibcol + 1] = a_1;
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_balance_ctrl_trisolve(const real_T A[100], real_T B[100])
{
  for (int32_T j = 0; j < 10; j++) {
    int32_T jBcol;
    jBcol = 10 * j;
    for (int32_T b_k = 0; b_k < 10; b_k++) {
      real_T B_0;
      int32_T B_tmp;
      int32_T kAcol;
      kAcol = 10 * b_k;
      B_tmp = b_k + jBcol;
      B_0 = B[B_tmp];
      if (B_0 != 0.0) {
        B[B_tmp] = B_0 / A[b_k + kAcol];
        for (int32_T i = b_k + 2; i < 11; i++) {
          int32_T tmp;
          tmp = (i + jBcol) - 1;
          B[tmp] -= A[(i + kAcol) - 1] * B[B_tmp];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_balance_ctrl_norm(const real_T x[10])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k = 0; k < 10; k++) {
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
static real_T imperix_balance_ctrl_maximum(const real_T x[10])
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
    while ((!exitg1) && (k < 11)) {
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
    for (k = idx + 1; k < 11; k++) {
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
static real_T imperix_balance_ctrl_xnrm2(int32_T n, const real_T x[100], int32_T
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_balance_ctrl_xgemv(int32_T m, int32_T n, const real_T A[100],
  int32_T ia0, const real_T x[100], int32_T ix0, real_T y[10])
{
  if ((m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = (n - 1) * 10 + ia0;
    for (int32_T b_iy = ia0; b_iy <= b; b_iy += 10) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = b_iy + m;
      for (ia = b_iy; ia < d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * A[ia - 1];
      }

      ia = div_nde_s32_floor(b_iy - ia0, 10);
      y[ia] += c;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_balance_ctrl_xgerc(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[10], real_T A[100], int32_T ia0)
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

      jA += 10;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_balance_ctrl_KWIKfactor(const real_T Ac[600], const
  int32_T iC[60], int32_T nA, const real_T Linv[100], real_T RLinv[100], real_T
  D[100], real_T H[100], int32_T n)
{
  real_T A[100];
  real_T R[100];
  real_T TL[100];
  real_T tau[10];
  real_T work[10];
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
  memset(&RLinv[0], 0, 100U * sizeof(real_T));
  for (b_lastv = 0; b_lastv < nA; b_lastv++) {
    knt = iC[b_lastv];
    memset(&RLinv[b_lastv * 10], 0, 10U * sizeof(real_T));
    for (i = 0; i < 10; i++) {
      xnorm = Ac[(60 * i + knt) - 1];
      for (ii = 0; ii < 10; ii++) {
        c_lastc = 10 * b_lastv + ii;
        RLinv[c_lastc] += Linv[10 * i + ii] * xnorm;
      }
    }
  }

  memcpy(&A[0], &RLinv[0], 100U * sizeof(real_T));
  memset(&tau[0], 0, 10U * sizeof(real_T));
  memset(&work[0], 0, 10U * sizeof(real_T));
  for (i = 0; i < 10; i++) {
    ii = i * 10 + i;
    if (i + 1 < 10) {
      atmp = A[ii];
      b_lastv = ii + 2;
      tau[i] = 0.0;
      xnorm = imperix_balance_ctrl_xnrm2(9 - i, A, ii + 2);
      if (xnorm != 0.0) {
        A_0 = A[ii];
        xnorm = rt_hypotd_snf(A_0, xnorm);
        if (A_0 >= 0.0) {
          xnorm = -xnorm;
        }

        if (fabs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          f = (ii - i) + 10;
          do {
            knt++;
            for (c_lastc = b_lastv; c_lastc <= f; c_lastc++) {
              A[c_lastc - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(atmp, imperix_balance_ctrl_xnrm2(9 - i, A, ii +
            2));
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
          knt = (ii - i) + 10;
          for (c_lastc = b_lastv; c_lastc <= knt; c_lastc++) {
            A[c_lastc - 1] *= atmp;
          }

          atmp = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        b_lastv = 10 - i;
        c_lastc = (ii - i) + 9;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 9 - i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = ((c_lastc - 1) * 10 + ii) + 10;
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
        imperix_balance_ctrl_xgemv(b_lastv, c_lastc, A, ii + 11, A, ii + 1, work);
        imperix_balance_ctrl_xgerc(b_lastv, c_lastc, -tau[i], ii + 1, work, A,
          ii + 11);
      }

      A[ii] = atmp;
    } else {
      tau[9] = 0.0;
    }
  }

  for (i = 0; i < 10; i++) {
    for (ii = 0; ii <= i; ii++) {
      R[ii + 10 * i] = A[10 * i + ii];
    }

    for (ii = i + 2; ii < 11; ii++) {
      R[(ii + 10 * i) - 1] = 0.0;
    }

    work[i] = 0.0;
  }

  for (i = 9; i >= 0; i--) {
    ii = i * 10 + i;
    if (i + 1 < 10) {
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        b_lastv = 10 - i;
        c_lastc = (ii - i) + 9;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 9 - i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = ((c_lastc - 1) * 10 + ii) + 10;
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
        imperix_balance_ctrl_xgemv(b_lastv, c_lastc, A, ii + 11, A, ii + 1, work);
        imperix_balance_ctrl_xgerc(b_lastv, c_lastc, -tau[i], ii + 1, work, A,
          ii + 11);
      }

      c_lastc = (ii - i) + 10;
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
      if (fabs(R[10 * i + i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      for (ii = 0; ii < n; ii++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          xnorm = 0.0;
          for (i = 0; i < 10; i++) {
            xnorm += Linv[10 * ii + i] * A[10 * b_lastv + i];
          }

          TL[ii + 10 * b_lastv] = xnorm;
        }
      }

      memset(&RLinv[0], 0, 100U * sizeof(real_T));
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        i = (b_lastv - 1) * 10;
        ii = (b_lastv + i) - 1;
        RLinv[ii] = 1.0;
        for (knt = b_lastv; knt <= nA; knt++) {
          c_lastc = ((knt - 1) * 10 + b_lastv) - 1;
          RLinv[c_lastc] /= R[ii];
        }

        if (b_lastv > 1) {
          for (knt = 0; knt <= b_lastv - 2; knt++) {
            for (f = b_lastv; f <= nA; f++) {
              ii = (f - 1) * 10;
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
          i = (c_lastc - 1) * 10 + b_lastv;
          H[i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) * 10;
            H[i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + 10 * b_lastv) - 1] = H[i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          i = 10 * qY + b_lastv;
          D[i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) * 10;
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
static void imperix_balance__DropConstraint(int32_T kDrop, boolean_T iA[60],
  int32_T *nA, int32_T iC[60])
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
static void imperix_balance_ctrl_qpkwik(const real_T Linv[100], const real_T
  Hinv[100], const real_T f[10], const real_T Ac[600], const real_T b[60],
  boolean_T iA[60], int32_T maxiter, real_T FeasTol, real_T x[10], real_T
  lambda[60], int32_T *status)
{
  real_T D[100];
  real_T H[100];
  real_T RLinv[100];
  real_T U[100];
  real_T cTol[60];
  real_T Opt[20];
  real_T Rhs[20];
  real_T r[10];
  real_T z[10];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T t;
  int32_T iC[60];
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
  memset(&x[0], 0, 10U * sizeof(real_T));
  memset(&lambda[0], 0, 60U * sizeof(real_T));
  *status = 1;
  memset(&r[0], 0, 10U * sizeof(real_T));
  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 60; i++) {
    cTol[i] = 1.0;
    iC[i] = 0;
  }

  nA = 0;
  for (i = 0; i < 60; i++) {
    if (iA[i]) {
      nA++;
      iC[nA - 1] = i + 1;
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&Opt[0], 0, 20U * sizeof(real_T));
    for (i = 0; i < 10; i++) {
      Rhs[i] = f[i];
      Rhs[i + 10] = 0.0;
    }

    DualFeasible = false;
    tmp = static_cast<int32_T>(rt_roundd_snf(0.3 * static_cast<real_T>(nA)));
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_balance_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D, H,
          10);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            memset(&iC[0], 0, 60U * sizeof(int32_T));
            for (i = 0; i < 60; i++) {
              iA[i] = false;
            }

            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483637) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 11;
            }

            Rhs[i - 1] = b[iC[kDrop] - 1];
            for (i = kDrop + 1; i <= nA; i++) {
              U_tmp = (10 * kDrop + i) - 1;
              U[U_tmp] = 0.0;
              for (k = 0; k < nA; k++) {
                U[U_tmp] += RLinv[(10 * k + i) - 1] * RLinv[10 * k + kDrop];
              }

              U[kDrop + 10 * (i - 1)] = U[U_tmp];
            }
          }

          for (kDrop = 0; kDrop < 10; kDrop++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 10; i++) {
              Xnorm0 += H[10 * i + kDrop] * Rhs[i];
            }

            Opt[kDrop] = Xnorm0;
            for (k = 0; k < nA; k++) {
              if (k + 1 > 2147483637) {
                i = MAX_int32_T;
              } else {
                i = k + 11;
              }

              Opt[kDrop] += D[10 * k + kDrop] * Rhs[i - 1];
            }
          }

          for (k = 0; k < nA; k++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 10; i++) {
              Xnorm0 += D[10 * k + i] * Rhs[i];
            }

            if (k + 1 > 2147483637) {
              i = MAX_int32_T;
            } else {
              i = k + 11;
            }

            Opt[i - 1] = Xnorm0;
            if (k + 1 > 2147483637) {
              i = MAX_int32_T;
              kDrop = MAX_int32_T;
            } else {
              i = k + 11;
              kDrop = k + 11;
            }

            for (U_tmp = 0; U_tmp < nA; U_tmp++) {
              if (U_tmp + 1 > 2147483637) {
                tmp_0 = MAX_int32_T;
              } else {
                tmp_0 = U_tmp + 11;
              }

              Opt[i - 1] = U[10 * U_tmp + k] * Rhs[tmp_0 - 1] + Opt[kDrop - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (k = 0; k < nA; k++) {
            if (k + 1 > 2147483637) {
              i = MAX_int32_T;
            } else {
              i = k + 11;
            }

            lambda[iC[k] - 1] = Opt[i - 1];
            if (k + 1 > 2147483637) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              f_i = k + 11;
            }

            if ((Opt[f_i - 1] < Xnorm0) && (k + 1 <= nA)) {
              kDrop = k;
              if (k + 1 > 2147483637) {
                i = MAX_int32_T;
              } else {
                i = k + 11;
              }

              Xnorm0 = Opt[i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            memcpy(&x[0], &Opt[0], 10U * sizeof(real_T));
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
              memset(&iC[0], 0, 60U * sizeof(int32_T));
              for (i = 0; i < 60; i++) {
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
          memset(&lambda[0], 0, 60U * sizeof(real_T));
          for (tmp = 0; tmp < 10; tmp++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 10; i++) {
              Xnorm0 += -Hinv[10 * i + tmp] * f[i];
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
    for (tmp = 0; tmp < 10; tmp++) {
      Xnorm0 = 0.0;
      for (i = 0; i < 10; i++) {
        Xnorm0 += -Hinv[10 * i + tmp] * f[i];
      }

      x[tmp] = Xnorm0;
    }

    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_balance_ctrl_norm(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      tmp = -1;
      for (f_i = 0; f_i < 60; f_i++) {
        if (!cTolComputed) {
          for (i = 0; i < 10; i++) {
            z[i] = fabs(Ac[60 * i + f_i] * x[i]);
          }

          cVal = imperix_balance_ctrl_maximum(z);
          if ((cTol[f_i] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[f_i] = cVal;
          }
        }

        if (!iA[f_i]) {
          cVal = 0.0;
          for (i = 0; i < 10; i++) {
            cVal += Ac[60 * i + f_i] * x[i];
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
              memset(&z[0], 0, 10U * sizeof(real_T));
              for (i = 0; i < 10; i++) {
                cMin = Ac[60 * i + tmp];
                for (kDrop = 0; kDrop < 10; kDrop++) {
                  z[kDrop] += Hinv[10 * i + kDrop] * cMin;
                }
              }

              guard3 = true;
            } else {
              cMin = imperix_balance_ctrl_KWIKfactor(Ac, iC, nA, Linv, RLinv, D,
                H, 10);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                for (i = 0; i < 100; i++) {
                  U[i] = -H[i];
                }

                memset(&z[0], 0, 10U * sizeof(real_T));
                for (i = 0; i < 10; i++) {
                  cMin = Ac[60 * i + tmp];
                  for (kDrop = 0; kDrop < 10; kDrop++) {
                    z[kDrop] += U[10 * i + kDrop] * cMin;
                  }
                }

                for (f_i = 0; f_i < nA; f_i++) {
                  cVal = 0.0;
                  for (i = 0; i < 10; i++) {
                    cVal += Ac[60 * i + tmp] * D[10 * f_i + i];
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
              for (i = 0; i < 10; i++) {
                t += Ac[60 * i + tmp] * z[i];
              }

              if (t <= 0.0) {
                cVal = 0.0;
                ColdReset = true;
              } else {
                cVal = 0.0;
                for (i = 0; i < 10; i++) {
                  cVal += Ac[60 * i + tmp] * x[i];
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
                  if ((f_i <= 60) && (lambda[f_i - 1] < 0.0)) {
                    lambda[f_i - 1] = 0.0;
                  }
                }

                lambda[tmp] += t;
                frexp(1.0, &exponent);
                if (fabs(t - cMin) < 2.2204460492503131E-16) {
                  imperix_balance__DropConstraint(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  for (i = 0; i < 10; i++) {
                    x[i] += t * z[i];
                  }

                  frexp(1.0, &b_exponent);
                  if (fabs(t - cVal) < 2.2204460492503131E-16) {
                    if (nA == 10) {
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
            cMin = imperix_balance_ctrl_norm(x);
            if (fabs(cMin - Xnorm0) > 0.001) {
              Xnorm0 = cMin;
              for (i = 0; i < 60; i++) {
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
static void imperix_bala_mpcActiveSetSolver(const real_T H[100], const real_T f
  [10], const real_T A[600], const real_T b[60], int32_T options_MaxIterations,
  real_T options_ConstraintTolerance, boolean_T options_UseHessianAsInput,
  real_T x[10], int32_T *exitflag, boolean_T iA[60])
{
  real_T Linv[100];
  real_T b_A[100];
  real_T b_0[60];
  real_T lam[60];
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
  static const int8_T B[100] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1 };

  boolean_T exitg1;
  if (options_UseHessianAsInput) {
    memcpy(&b_A[0], &H[0], 100U * sizeof(real_T));
    jmax = 0;
    c_j = 0;
    exitg1 = false;
    while ((!exitg1) && (c_j < 10)) {
      idxAjj = c_j * 10 + c_j;
      ssq = 0.0;
      if (c_j >= 1) {
        for (b_k = 0; b_k < c_j; b_k++) {
          b_c = b_A[b_k * 10 + c_j];
          ssq += b_c * b_c;
        }
      }

      ssq = b_A[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        b_A[idxAjj] = ssq;
        if (c_j + 1 < 10) {
          if (c_j != 0) {
            b_k = ((c_j - 1) * 10 + c_j) + 2;
            for (iac = c_j + 2; iac <= b_k; iac += 10) {
              b_c_tmp = iac - c_j;
              b_c = -b_A[div_nde_s32_floor(b_c_tmp - 2, 10) * 10 + c_j];
              b_c_tmp += 8;
              for (ia = iac; ia <= b_c_tmp; ia++) {
                b_A_tmp = ((idxAjj + ia) - iac) + 1;
                b_A[b_A_tmp] += b_A[ia - 1] * b_c;
              }
            }
          }

          ssq = 1.0 / ssq;
          b_k = (idxAjj - c_j) + 10;
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
      jmax = 11;
    }

    for (c_j = 2; c_j < jmax; c_j++) {
      for (idxAjj = 0; idxAjj <= c_j - 2; idxAjj++) {
        b_A[idxAjj + 10 * (c_j - 1)] = 0.0;
      }
    }

    for (jmax = 0; jmax < 100; jmax++) {
      Linv[jmax] = B[jmax];
    }

    imperix_balance_ctrl_trisolve(b_A, Linv);
  } else {
    memcpy(&Linv[0], &H[0], 100U * sizeof(real_T));
  }

  for (idxAjj = 0; idxAjj < 60; idxAjj++) {
    iA[idxAjj] = false;
  }

  for (jmax = 0; jmax < 10; jmax++) {
    for (c_j = 0; c_j < 10; c_j++) {
      ssq = 0.0;
      for (idxAjj = 0; idxAjj < 10; idxAjj++) {
        ssq += Linv[10 * c_j + idxAjj] * Linv[10 * jmax + idxAjj];
      }

      b_A[c_j + 10 * jmax] = ssq;
    }
  }

  for (jmax = 0; jmax < 600; jmax++) {
    imperix_balance_ctrl_B.A[jmax] = -A[jmax];
  }

  for (jmax = 0; jmax < 60; jmax++) {
    b_0[jmax] = -b[jmax];
  }

  imperix_balance_ctrl_qpkwik(Linv, b_A, f, imperix_balance_ctrl_B.A, b_0, iA,
    options_MaxIterations, options_ConstraintTolerance, x, lam, exitflag);
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_balance_ctrl_trisolve_i(const real_T A[25], real_T B[25])
{
  for (int32_T j = 0; j < 5; j++) {
    int32_T jBcol;
    jBcol = 5 * j;
    for (int32_T b_k = 0; b_k < 5; b_k++) {
      real_T B_0;
      int32_T B_tmp;
      int32_T kAcol;
      kAcol = 5 * b_k;
      B_tmp = b_k + jBcol;
      B_0 = B[B_tmp];
      if (B_0 != 0.0) {
        B[B_tmp] = B_0 / A[b_k + kAcol];
        for (int32_T i = b_k + 2; i < 6; i++) {
          int32_T tmp;
          tmp = (i + jBcol) - 1;
          B[tmp] -= A[(i + kAcol) - 1] * B[B_tmp];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_balance_ctrl_norm_d(const real_T x[5])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k = 0; k < 5; k++) {
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
static real_T imperix_balance_ctrl_maximum_m(const real_T x[5])
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
    while ((!exitg1) && (k < 6)) {
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
    for (k = idx + 1; k < 6; k++) {
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
static real_T imperix_balance_ctrl_xnrm2_c(int32_T n, const real_T x[25],
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

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_balance_ctrl_xgemv_o(int32_T m, int32_T n, const real_T A[25],
  int32_T ia0, const real_T x[25], int32_T ix0, real_T y[5])
{
  if ((m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = (n - 1) * 5 + ia0;
    for (int32_T b_iy = ia0; b_iy <= b; b_iy += 5) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = b_iy + m;
      for (ia = b_iy; ia < d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * A[ia - 1];
      }

      ia = div_nde_s32_floor(b_iy - ia0, 5);
      y[ia] += c;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static void imperix_balance_ctrl_xgerc_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[5], real_T A[25], int32_T ia0)
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

      jA += 5;
    }
  }
}

// Function for MATLAB Function: '<S1>/Energy balance'
static real_T imperix_balance_ct_KWIKfactor_i(const real_T Ac[50], const int32_T
  iC[10], int32_T nA, const real_T Linv[25], real_T RLinv[25], real_T D[25],
  real_T H[25], int32_T n)
{
  real_T A[25];
  real_T R[25];
  real_T TL[25];
  real_T tau[5];
  real_T work[5];
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
  memset(&RLinv[0], 0, 25U * sizeof(real_T));
  for (b_lastv = 0; b_lastv < nA; b_lastv++) {
    knt = iC[b_lastv];
    for (i = 0; i < 5; i++) {
      RLinv[i + 5 * b_lastv] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      xnorm = Ac[(10 * i + knt) - 1];
      for (ii = 0; ii < 5; ii++) {
        c_lastc = 5 * b_lastv + ii;
        RLinv[c_lastc] += Linv[5 * i + ii] * xnorm;
      }
    }
  }

  memcpy(&A[0], &RLinv[0], 25U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    tau[i] = 0.0;
    work[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    ii = i * 5 + i;
    if (i + 1 < 5) {
      atmp = A[ii];
      b_lastv = ii + 2;
      tau[i] = 0.0;
      xnorm = imperix_balance_ctrl_xnrm2_c(4 - i, A, ii + 2);
      if (xnorm != 0.0) {
        A_0 = A[ii];
        xnorm = rt_hypotd_snf(A_0, xnorm);
        if (A_0 >= 0.0) {
          xnorm = -xnorm;
        }

        if (fabs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          f = (ii - i) + 5;
          do {
            knt++;
            for (c_lastc = b_lastv; c_lastc <= f; c_lastc++) {
              A[c_lastc - 1] *= 9.9792015476736E+291;
            }

            xnorm *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while ((fabs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

          xnorm = rt_hypotd_snf(atmp, imperix_balance_ctrl_xnrm2_c(4 - i, A, ii
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
          knt = (ii - i) + 5;
          for (c_lastc = b_lastv; c_lastc <= knt; c_lastc++) {
            A[c_lastc - 1] *= atmp;
          }

          atmp = xnorm;
        }
      }

      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        b_lastv = 5 - i;
        c_lastc = (ii - i) + 4;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 4 - i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = ((c_lastc - 1) * 5 + ii) + 5;
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
        imperix_balance_ctrl_xgemv_o(b_lastv, c_lastc, A, ii + 6, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i(b_lastv, c_lastc, -tau[i], ii + 1, work, A,
          ii + 6);
      }

      A[ii] = atmp;
    } else {
      tau[4] = 0.0;
    }
  }

  for (i = 0; i < 5; i++) {
    for (ii = 0; ii <= i; ii++) {
      R[ii + 5 * i] = A[5 * i + ii];
    }

    for (ii = i + 2; ii < 6; ii++) {
      R[(ii + 5 * i) - 1] = 0.0;
    }

    work[i] = 0.0;
  }

  for (i = 4; i >= 0; i--) {
    ii = i * 5 + i;
    if (i + 1 < 5) {
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        b_lastv = 5 - i;
        c_lastc = (ii - i) + 4;
        while ((b_lastv > 0) && (A[c_lastc] == 0.0)) {
          b_lastv--;
          c_lastc--;
        }

        c_lastc = 4 - i;
        exitg2 = false;
        while ((!exitg2) && (c_lastc > 0)) {
          knt = ((c_lastc - 1) * 5 + ii) + 5;
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
        imperix_balance_ctrl_xgemv_o(b_lastv, c_lastc, A, ii + 6, A, ii + 1,
          work);
        imperix_balance_ctrl_xgerc_i(b_lastv, c_lastc, -tau[i], ii + 1, work, A,
          ii + 6);
      }

      c_lastc = (ii - i) + 5;
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
      if (fabs(R[5 * i + i]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      for (ii = 0; ii < n; ii++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          xnorm = 0.0;
          for (i = 0; i < 5; i++) {
            xnorm += Linv[5 * ii + i] * A[5 * b_lastv + i];
          }

          TL[ii + 5 * b_lastv] = xnorm;
        }
      }

      memset(&RLinv[0], 0, 25U * sizeof(real_T));
      for (b_lastv = nA; b_lastv >= 1; b_lastv--) {
        i = (b_lastv - 1) * 5;
        ii = (b_lastv + i) - 1;
        RLinv[ii] = 1.0;
        for (knt = b_lastv; knt <= nA; knt++) {
          c_lastc = ((knt - 1) * 5 + b_lastv) - 1;
          RLinv[c_lastc] /= R[ii];
        }

        if (b_lastv > 1) {
          for (knt = 0; knt <= b_lastv - 2; knt++) {
            for (f = b_lastv; f <= nA; f++) {
              ii = (f - 1) * 5;
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
          i = (c_lastc - 1) * 5 + b_lastv;
          H[i] = 0.0;
          for (knt = qY; knt <= n; knt++) {
            ii = (knt - 1) * 5;
            H[i] -= TL[(ii + c_lastc) - 1] * TL[ii + b_lastv];
          }

          H[(c_lastc + 5 * b_lastv) - 1] = H[i];
        }
      }

      for (qY = 0; qY < nA; qY++) {
        for (b_lastv = 0; b_lastv < n; b_lastv++) {
          i = 5 * qY + b_lastv;
          D[i] = 0.0;
          for (c_lastc = qY + 1; c_lastc <= nA; c_lastc++) {
            ii = (c_lastc - 1) * 5;
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
static void imperix_balanc_DropConstraint_d(int32_T kDrop, boolean_T iA[10],
  int32_T *nA, int32_T iC[10])
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
static void imperix_balance_ctrl_qpkwik_l(const real_T Linv[25], const real_T
  Hinv[25], const real_T f[5], const real_T Ac[50], const real_T b[10],
  boolean_T iA[10], int32_T maxiter, real_T FeasTol, real_T x[5], real_T lambda
  [10], int32_T *status)
{
  real_T D[25];
  real_T H[25];
  real_T RLinv[25];
  real_T U[25];
  real_T Opt[10];
  real_T Rhs[10];
  real_T cTol[10];
  real_T r[5];
  real_T z[5];
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T rMin;
  real_T t;
  int32_T iC[10];
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
  for (i = 0; i < 5; i++) {
    x[i] = 0.0;
  }

  memset(&lambda[0], 0, 10U * sizeof(real_T));
  *status = 1;
  for (i = 0; i < 5; i++) {
    r[i] = 0.0;
  }

  rMin = 0.0;
  cTolComputed = false;
  for (i = 0; i < 10; i++) {
    cTol[i] = 1.0;
    iC[i] = 0;
  }

  nA = 0;
  for (i = 0; i < 10; i++) {
    if (iA[i]) {
      nA++;
      iC[nA - 1] = i + 1;
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&Opt[0], 0, 10U * sizeof(real_T));
    for (i = 0; i < 5; i++) {
      Rhs[i] = f[i];
      Rhs[i + 5] = 0.0;
    }

    DualFeasible = false;
    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (*status <= maxiter)) {
        Xnorm0 = imperix_balance_ct_KWIKfactor_i(Ac, iC, nA, Linv, RLinv, D, H,
          5);
        if (Xnorm0 < 0.0) {
          if (ColdReset) {
            *status = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            for (i = 0; i < 10; i++) {
              iA[i] = false;
              iC[i] = 0;
            }

            ColdReset = true;
          }
        } else {
          for (kDrop = 0; kDrop < nA; kDrop++) {
            if (kDrop + 1 > 2147483642) {
              i = MAX_int32_T;
            } else {
              i = kDrop + 6;
            }

            Rhs[i - 1] = b[iC[kDrop] - 1];
            for (i = kDrop + 1; i <= nA; i++) {
              U_tmp = (5 * kDrop + i) - 1;
              U[U_tmp] = 0.0;
              for (iSave = 0; iSave < nA; iSave++) {
                U[U_tmp] += RLinv[(5 * iSave + i) - 1] * RLinv[5 * iSave + kDrop];
              }

              U[kDrop + 5 * (i - 1)] = U[U_tmp];
            }
          }

          for (kDrop = 0; kDrop < 5; kDrop++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 5; i++) {
              Xnorm0 += H[5 * i + kDrop] * Rhs[i];
            }

            Opt[kDrop] = Xnorm0;
            for (iSave = 0; iSave < nA; iSave++) {
              if (iSave + 1 > 2147483642) {
                i = MAX_int32_T;
              } else {
                i = iSave + 6;
              }

              Opt[kDrop] += D[5 * iSave + kDrop] * Rhs[i - 1];
            }
          }

          for (iSave = 0; iSave < nA; iSave++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 5; i++) {
              Xnorm0 += D[5 * iSave + i] * Rhs[i];
            }

            if (iSave + 1 > 2147483642) {
              i = MAX_int32_T;
            } else {
              i = iSave + 6;
            }

            Opt[i - 1] = Xnorm0;
            if (iSave + 1 > 2147483642) {
              i = MAX_int32_T;
              kDrop = MAX_int32_T;
            } else {
              i = iSave + 6;
              kDrop = iSave + 6;
            }

            for (U_tmp = 0; U_tmp < nA; U_tmp++) {
              if (U_tmp + 1 > 2147483642) {
                tmp = MAX_int32_T;
              } else {
                tmp = U_tmp + 6;
              }

              Opt[i - 1] = U[5 * U_tmp + iSave] * Rhs[tmp - 1] + Opt[kDrop - 1];
            }
          }

          Xnorm0 = -1.0E-12;
          kDrop = -1;
          for (iSave = 0; iSave < nA; iSave++) {
            if (iSave + 1 > 2147483642) {
              i = MAX_int32_T;
            } else {
              i = iSave + 6;
            }

            lambda[iC[iSave] - 1] = Opt[i - 1];
            if (iSave + 1 > 2147483642) {
              // out-of-bounds matrix access would cause program termination and was eliminated 
            } else {
              kNext = iSave + 6;
            }

            if ((Opt[kNext - 1] < Xnorm0) && (iSave + 1 <= nA)) {
              kDrop = iSave;
              if (iSave + 1 > 2147483642) {
                i = MAX_int32_T;
              } else {
                i = iSave + 6;
              }

              Xnorm0 = Opt[i - 1];
            }
          }

          if (kDrop + 1 <= 0) {
            DualFeasible = true;
            for (i = 0; i < 5; i++) {
              x[i] = Opt[i];
            }
          } else {
            if (*status > 2147483646) {
              *status = MAX_int32_T;
            } else {
              (*status)++;
            }

            if (*status > 5) {
              nA = 0;
              for (i = 0; i < 10; i++) {
                iA[i] = false;
                iC[i] = 0;
              }

              ColdReset = true;
            } else {
              lambda[iC[kDrop] - 1] = 0.0;
              imperix_balanc_DropConstraint_d(kDrop + 1, iA, &nA, iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&lambda[0], 0, 10U * sizeof(real_T));
          for (kNext = 0; kNext < 5; kNext++) {
            Xnorm0 = 0.0;
            for (i = 0; i < 5; i++) {
              Xnorm0 += -Hinv[5 * i + kNext] * f[i];
            }

            x[kNext] = Xnorm0;
          }
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    for (kNext = 0; kNext < 5; kNext++) {
      Xnorm0 = 0.0;
      for (i = 0; i < 5; i++) {
        Xnorm0 += -Hinv[5 * i + kNext] * f[i];
      }

      x[kNext] = Xnorm0;
    }

    guard1 = true;
  }

  if (guard1) {
    Xnorm0 = imperix_balance_ctrl_norm_d(x);
    exitg2 = false;
    while ((!exitg2) && (*status <= maxiter)) {
      cMin = -FeasTol;
      kNext = -1;
      for (kDrop = 0; kDrop < 10; kDrop++) {
        if (!cTolComputed) {
          for (i = 0; i < 5; i++) {
            z[i] = fabs(Ac[10 * i + kDrop] * x[i]);
          }

          cVal = imperix_balance_ctrl_maximum_m(z);
          if ((cTol[kDrop] >= cVal) || rtIsNaN(cVal)) {
          } else {
            cTol[kDrop] = cVal;
          }
        }

        if (!iA[kDrop]) {
          cVal = 0.0;
          for (i = 0; i < 5; i++) {
            cVal += Ac[10 * i + kDrop] * x[i];
          }

          cVal = (cVal - b[kDrop]) / cTol[kDrop];
          if (cVal < cMin) {
            cMin = cVal;
            kNext = kDrop;
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
              for (i = 0; i < 5; i++) {
                z[i] = 0.0;
              }

              for (i = 0; i < 5; i++) {
                cMin = Ac[10 * i + kNext];
                for (kDrop = 0; kDrop < 5; kDrop++) {
                  z[kDrop] += Hinv[5 * i + kDrop] * cMin;
                }
              }

              guard3 = true;
            } else {
              cMin = imperix_balance_ct_KWIKfactor_i(Ac, iC, nA, Linv, RLinv, D,
                H, 5);
              if (cMin <= 0.0) {
                *status = -2;
                exitg1 = 1;
              } else {
                for (i = 0; i < 25; i++) {
                  U[i] = -H[i];
                }

                for (i = 0; i < 5; i++) {
                  z[i] = 0.0;
                }

                for (i = 0; i < 5; i++) {
                  cMin = Ac[10 * i + kNext];
                  for (kDrop = 0; kDrop < 5; kDrop++) {
                    z[kDrop] += U[5 * i + kDrop] * cMin;
                  }
                }

                for (kDrop = 0; kDrop < nA; kDrop++) {
                  cVal = 0.0;
                  for (i = 0; i < 5; i++) {
                    cVal += Ac[10 * i + kNext] * D[5 * kDrop + i];
                  }

                  r[kDrop] = cVal;
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
              for (i = 0; i < 5; i++) {
                t += Ac[10 * i + kNext] * z[i];
              }

              if (t <= 0.0) {
                cVal = 0.0;
                ColdReset = true;
              } else {
                cVal = 0.0;
                for (i = 0; i < 5; i++) {
                  cVal += Ac[10 * i + kNext] * x[i];
                }

                cVal = (b[kNext] - cVal) / t;
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
                  iSave = iC[i];
                  lambda[iSave - 1] -= t * r[i];
                  if ((iSave <= 10) && (lambda[iSave - 1] < 0.0)) {
                    lambda[iSave - 1] = 0.0;
                  }
                }

                lambda[kNext] += t;
                frexp(1.0, &exponent);
                if (fabs(t - cMin) < 2.2204460492503131E-16) {
                  imperix_balanc_DropConstraint_d(kDrop, iA, &nA, iC);
                }

                if (!ColdReset) {
                  for (i = 0; i < 5; i++) {
                    x[i] += t * z[i];
                  }

                  frexp(1.0, &b_exponent);
                  if (fabs(t - cVal) < 2.2204460492503131E-16) {
                    if (nA == 5) {
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
              for (i = 0; i < 10; i++) {
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
static void imperix_ba_mpcActiveSetSolver_l(const real_T H[25], const real_T f[5],
  const real_T A[50], const real_T b[10], int32_T options_MaxIterations, real_T
  options_ConstraintTolerance, boolean_T options_UseHessianAsInput, real_T x[5],
  int32_T *exitflag, boolean_T iA[10])
{
  real_T A_0[50];
  real_T Linv[25];
  real_T b_A[25];
  real_T b_0[10];
  real_T lam[10];
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
  static const int8_T B[25] = { 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 1 };

  boolean_T exitg1;
  if (options_UseHessianAsInput) {
    memcpy(&b_A[0], &H[0], 25U * sizeof(real_T));
    jmax = 0;
    c_j = 0;
    exitg1 = false;
    while ((!exitg1) && (c_j < 5)) {
      idxAjj = c_j * 5 + c_j;
      ssq = 0.0;
      if (c_j >= 1) {
        for (b_k = 0; b_k < c_j; b_k++) {
          b_c = b_A[b_k * 5 + c_j];
          ssq += b_c * b_c;
        }
      }

      ssq = b_A[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        b_A[idxAjj] = ssq;
        if (c_j + 1 < 5) {
          if (c_j != 0) {
            b_k = ((c_j - 1) * 5 + c_j) + 2;
            for (iac = c_j + 2; iac <= b_k; iac += 5) {
              b_c_tmp = iac - c_j;
              b_c = -b_A[div_nde_s32_floor(b_c_tmp - 2, 5) * 5 + c_j];
              b_c_tmp += 3;
              for (ia = iac; ia <= b_c_tmp; ia++) {
                b_A_tmp = ((idxAjj + ia) - iac) + 1;
                b_A[b_A_tmp] += b_A[ia - 1] * b_c;
              }
            }
          }

          ssq = 1.0 / ssq;
          b_k = (idxAjj - c_j) + 5;
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
      jmax = 6;
    }

    for (c_j = 2; c_j < jmax; c_j++) {
      for (idxAjj = 0; idxAjj <= c_j - 2; idxAjj++) {
        b_A[idxAjj + 5 * (c_j - 1)] = 0.0;
      }
    }

    for (jmax = 0; jmax < 25; jmax++) {
      Linv[jmax] = B[jmax];
    }

    imperix_balance_ctrl_trisolve_i(b_A, Linv);
  } else {
    memcpy(&Linv[0], &H[0], 25U * sizeof(real_T));
  }

  for (idxAjj = 0; idxAjj < 10; idxAjj++) {
    iA[idxAjj] = false;
  }

  for (jmax = 0; jmax < 5; jmax++) {
    for (c_j = 0; c_j < 5; c_j++) {
      ssq = 0.0;
      for (idxAjj = 0; idxAjj < 5; idxAjj++) {
        ssq += Linv[5 * c_j + idxAjj] * Linv[5 * jmax + idxAjj];
      }

      b_A[c_j + 5 * jmax] = ssq;
    }
  }

  for (jmax = 0; jmax < 50; jmax++) {
    A_0[jmax] = -A[jmax];
  }

  for (jmax = 0; jmax < 10; jmax++) {
    b_0[jmax] = -b[jmax];
  }

  imperix_balance_ctrl_qpkwik_l(Linv, b_A, f, A_0, b_0, iA,
    options_MaxIterations, options_ConstraintTolerance, x, lam, exitflag);
}

static void imperix_balanc_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S87>/Moving Average'
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
void imperix_balance_ctrl_step0(void)  // Sample time: [0.000166667s, 0.0s]
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
  real_T rtb_CastToDouble5[6];
  real_T rtb_Gain1_k[6];
  real_T rtb_Gain2_i[6];
  real_T rtb_Gain7[6];
  real_T tmp[6];
  real_T rtb_Gain1_a[5];
  real_T rtb_Sum13_0[5];
  real_T rtb_TmpSignalConversionAtGain2I[5];
  real_T u_ref[4];
  real_T xt_est[4];
  real_T xt_est_0[4];
  real_T rtb_Gain1_h[3];
  real_T rtb_Switch_j[2];
  real_T rtb_ie_sat[2];
  real_T tmp_1[2];
  real_T Mean_AccVal;
  real_T absxk;
  real_T csum;
  real_T cumRevIndex;
  real_T ie_idx_0;
  real_T ie_idx_1;
  real_T rtb_DeadZone;
  real_T rtb_DeadZone_o;
  real_T rtb_F;
  real_T rtb_Fr_idx_0;
  real_T rtb_Fr_idx_1;
  real_T rtb_Gain1_c_idx_0;
  real_T rtb_Gain1_c_idx_1;
  real_T rtb_Gain22;
  real_T rtb_Gain23;
  real_T rtb_Gain26;
  real_T rtb_Gain4_f;
  real_T rtb_Gain5;
  real_T rtb_Gain8;
  real_T rtb_IntegralGain_m;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_e;
  real_T rtb_Saturation_j;
  real_T rtb_Sum13;
  real_T rtb_Sum6;
  real_T rtb_Sum8;
  real_T rtb_Sum_b;
  real_T rtb_Sum_d;
  real_T rtb_Sum_l;
  real_T rtb_Sum_n;
  real_T rtb_Sum_nh;
  real_T rtb_Switch;
  real_T rtb_Switch_f_idx_0;
  real_T rtb_Switch_f_idx_1;
  real_T rtb_Te;
  real_T rtb_im_idx_0;
  real_T rtb_im_idx_1;
  real_T rtb_w;
  real_T t;
  real_T tmp_3;
  real_T tmp_4;
  real_T tmp_7;
  real_T tmp_8;
  real_T tmp_9;
  real_T tmp_a;
  real_T tmp_b;
  real_T tmp_c;
  real_T y_0;
  real_T z;
  int32_T A_tmp;
  int32_T b_a_tmp;
  int32_T c_tmp;
  int32_T e;
  int32_T i;
  int32_T idx_1;
  int32_T iindx;
  int32_T jmax;
  int8_T tmp_5;
  int8_T tmp_6;
  uint8_T rtb_Compare;
  boolean_T iA1_0[24];
  boolean_T iA1[12];
  boolean_T d_x[2];
  boolean_T tmp_d;
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

  // S-Function (TUNABLE_PARAM): '<S153>/S-Function'
  imperix_balance_ctrl_B.SFunction = d1;

  // S-Function (TUNABLE_PARAM): '<S155>/S-Function'
  imperix_balance_ctrl_B.SFunction_n = d2;

  // S-Function (TUNABLE_PARAM): '<S157>/S-Function'
  imperix_balance_ctrl_B.SFunction_a = d3;

  // S-Function (TUNABLE_PARAM): '<S159>/S-Function'
  imperix_balance_ctrl_B.SFunction_j = d4;

  // S-Function (TUNABLE_PARAM): '<S163>/S-Function'
  imperix_balance_ctrl_B.SFunction_j0 = d5;

  // S-Function (TUNABLE_PARAM): '<S165>/S-Function'
  imperix_balance_ctrl_B.SFunction_e = d6;

  // S-Function (TUNABLE_PARAM): '<S161>/S-Function'
  imperix_balance_ctrl_B.SFunction_g = override;

  // S-Function (ADC): '<S98>/ADC'
  imperix_balance_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_1_2) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S116>/ADC'
  imperix_balance_ctrl_B.ADC_o = (float)(*ix_raw_adc_ptr_0_2) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S120>/ADC'
  imperix_balance_ctrl_B.ADC_n = (float)(*ix_raw_adc_ptr_7_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S102>/ADC'
  imperix_balance_ctrl_B.ADC_m = (float)(*ix_raw_adc_ptr_6_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S122>/ADC'
  imperix_balance_ctrl_B.ADC_k = (float)(*ix_raw_adc_ptr_5_0) * 0.021362F + 0.0F;

  // S-Function (ADC): '<S124>/ADC'
  imperix_balance_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_4_0) * 0.021362F + 0.0F;

  // DataTypeConversion: '<S1>/Cast To Double5'
  rtb_CastToDouble5[0] = imperix_balance_ctrl_B.ADC;
  rtb_CastToDouble5[1] = imperix_balance_ctrl_B.ADC_o;
  rtb_CastToDouble5[2] = imperix_balance_ctrl_B.ADC_n;
  rtb_CastToDouble5[3] = imperix_balance_ctrl_B.ADC_m;
  rtb_CastToDouble5[4] = imperix_balance_ctrl_B.ADC_k;
  rtb_CastToDouble5[5] = imperix_balance_ctrl_B.ADC_f;

  // S-Function (sdspstatfcns): '<S81>/Mean' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  Mean_AccVal = imperix_balance_ctrl_B.ADC;
  for (i = 4; i >= 0; i--) {
    Mean_AccVal += rtb_CastToDouble5[5 - i];
  }

  rtb_Gain22 = Mean_AccVal / 6.0;

  // End of S-Function (sdspstatfcns): '<S81>/Mean'

  // Sum: '<S29>/Sum' incorporates:
  //   Gain: '<S29>/Gain1'
  //   Gain: '<S29>/Gain2'
  //   UnitDelay: '<S29>/Unit Delay1'

  imperix_balance_ctrl_DW.UnitDelay1_DSTATE = (1.0 -
    imperix_balance_ctrl_P.TEC.alpha) * rtb_Gain22 +
    imperix_balance_ctrl_P.TEC.alpha * imperix_balance_ctrl_DW.UnitDelay1_DSTATE;

  // Sum: '<S1>/Sum6' incorporates:
  //   Constant: '<S1>/Vc_m_ref'
  //   UnitDelay: '<S29>/Unit Delay1'

  Mean_AccVal = imperix_balance_ctrl_P.M2C.Vc_ref -
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE;

  // Sum: '<S214>/Sum' incorporates:
  //   DiscreteIntegrator: '<S205>/Integrator'
  //   Gain: '<S210>/Proportional Gain'

  rtb_DeadZone = imperix_balance_ctrl_P.TEC.kp * Mean_AccVal +
    imperix_balance_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S212>/Saturation'
  if (rtb_DeadZone > imperix_balance_ctrl_P.TEC.u_max) {
    rtb_Saturation_e = imperix_balance_ctrl_P.TEC.u_max;
  } else if (rtb_DeadZone < -imperix_balance_ctrl_P.TEC.u_max) {
    rtb_Saturation_e = -imperix_balance_ctrl_P.TEC.u_max;
  } else {
    rtb_Saturation_e = rtb_DeadZone;
  }

  // End of Saturate: '<S212>/Saturation'

  // S-Function (ADC): '<S112>/ADC'
  imperix_balance_ctrl_B.ADC_fp = (float)(*ix_raw_adc_ptr_7_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S114>/ADC'
  imperix_balance_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_6_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S104>/ADC'
  imperix_balance_ctrl_B.ADC_i = (float)(*ix_raw_adc_ptr_5_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S118>/ADC'
  imperix_balance_ctrl_B.ADC_d = (float)(*ix_raw_adc_ptr_4_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S106>/ADC'
  imperix_balance_ctrl_B.ADC_ib = (float)(*ix_raw_adc_ptr_3_2) * 0.00030518F +
    0.0F;

  // S-Function (ADC): '<S108>/ADC'
  imperix_balance_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_2_2) * 0.00030518F +
    0.0F;

  // DataTypeConversion: '<S1>/Cast To Double'
  rtb_Gain1_k[0] = imperix_balance_ctrl_B.ADC_fp;
  rtb_Gain1_k[1] = imperix_balance_ctrl_B.ADC_e;
  rtb_Gain1_k[2] = imperix_balance_ctrl_B.ADC_i;
  rtb_Gain1_k[3] = imperix_balance_ctrl_B.ADC_d;
  rtb_Gain1_k[4] = imperix_balance_ctrl_B.ADC_ib;
  rtb_Gain1_k[5] = imperix_balance_ctrl_B.ADC_p;

  // Gain: '<S86>/Gain1'
  for (i = 0; i < 5; i++) {
    rtb_Gain1_a[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    rtb_Switch = rtb_Gain1_k[i];
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Gain1_a[idx_1] += imperix_balance_ctrl_P.M2C.A[5 * i + idx_1] *
        rtb_Switch;
    }
  }

  // End of Gain: '<S86>/Gain1'

  // Sum: '<S80>/Sum3'
  rtb_IntegralGain_m = rtb_Saturation_e - rtb_Gain1_a[0];

  // Sum: '<S594>/Sum' incorporates:
  //   DiscreteIntegrator: '<S585>/Integrator'
  //   Gain: '<S590>/Proportional Gain'

  rtb_DeadZone_o = imperix_balance_ctrl_P.PCC.kp * rtb_IntegralGain_m +
    imperix_balance_ctrl_DW.Integrator_DSTATE_a;

  // Saturate: '<S592>/Saturation'
  if (rtb_DeadZone_o > imperix_balance_ctrl_P.PCC.u_max) {
    rtb_Switch = imperix_balance_ctrl_P.PCC.u_max;
  } else if (rtb_DeadZone_o < -imperix_balance_ctrl_P.PCC.u_max) {
    rtb_Switch = -imperix_balance_ctrl_P.PCC.u_max;
  } else {
    rtb_Switch = rtb_DeadZone_o;
  }

  // Sum: '<S80>/Sum13' incorporates:
  //   Constant: '<S80>/Constant1'
  //   Saturate: '<S592>/Saturation'

  rtb_Sum13 = rtb_Switch - 1.5 * imperix_balance_ctrl_P.M2C.Vdc;

  // S-Function (TUNABLE_PARAM): '<S659>/S-Function'
  imperix_balance_ctrl_B.SFunction_gn = F_ref;

  // S-Function (TUNABLE_PARAM): '<S667>/S-Function'
  imperix_balance_ctrl_B.SFunction_f = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'
  //   DataTypeConversion: '<S1>/Cast To Double4'

  rtb_F = imperix_balance_ctrl_B.SFunction_gn;
  rtb_w = imperix_balance_ctrl_B.SFunction_f;

  // MATLAB Function 'Closed_loop_control/IM references': '<S26>:1'
  if (!imperix_balance_ctrl_DW.F_max_not_empty) {
    // '<S26>:1:10'
    // '<S26>:1:11'
    imperix_balance_ctrl_DW.F_max = imperix_balance_ctrl_P.IM.FrN;
    imperix_balance_ctrl_DW.F_max_not_empty = true;

    // '<S26>:1:12'
    imperix_balance_ctrl_DW.w_max = imperix_balance_ctrl_P.IM.w_max;

    // '<S26>:1:13'
    // '<S26>:1:16'
    imperix_balance_ctrl_DW.dF = imperix_balance_ctrl_P.FOC.Ts / (3.0 *
      imperix_balance_ctrl_P.IM.tau_r);

    // '<S26>:1:17'
    imperix_balance_ctrl_DW.dw = imperix_balance_ctrl_P.FOC.Ts;
  }

  if (fabs(imperix_balance_ctrl_B.SFunction_gn - imperix_balance_ctrl_DW.F_prev)
      > imperix_balance_ctrl_DW.dF) {
    // '<S26>:1:21'
    // '<S26>:1:22'
    rtb_im_idx_0 = imperix_balance_ctrl_B.SFunction_gn -
      imperix_balance_ctrl_DW.F_prev;
    if (rtIsNaN(rtb_im_idx_0)) {
      rtb_Switch = (rtNaN);
    } else if (rtb_im_idx_0 < 0.0) {
      rtb_Switch = -1.0;
    } else {
      rtb_Switch = (rtb_im_idx_0 > 0.0);
    }

    rtb_F = rtb_Switch * imperix_balance_ctrl_DW.dF +
      imperix_balance_ctrl_DW.F_prev;
  }

  if (fabs(imperix_balance_ctrl_B.SFunction_f - imperix_balance_ctrl_DW.w_prev) >
      imperix_balance_ctrl_DW.dw) {
    // '<S26>:1:25'
    // '<S26>:1:26'
    rtb_im_idx_0 = imperix_balance_ctrl_B.SFunction_f -
      imperix_balance_ctrl_DW.w_prev;
    if (rtIsNaN(rtb_im_idx_0)) {
      rtb_Switch = (rtNaN);
    } else if (rtb_im_idx_0 < 0.0) {
      rtb_Switch = -1.0;
    } else {
      rtb_Switch = (rtb_im_idx_0 > 0.0);
    }

    rtb_w = rtb_Switch * imperix_balance_ctrl_DW.dw +
      imperix_balance_ctrl_DW.w_prev;
  }

  // '<S26>:1:29'
  imperix_balance_ctrl_DW.F_prev = rtb_F;

  // '<S26>:1:30'
  imperix_balance_ctrl_DW.w_prev = rtb_w;

  // '<S26>:1:32'
  rtb_F *= imperix_balance_ctrl_DW.F_max;

  // '<S26>:1:33'
  rtb_w *= imperix_balance_ctrl_DW.w_max;

  // End of MATLAB Function: '<S1>/IM references'

  // S-Function (ADC): '<S110>/ADC'
  imperix_balance_ctrl_B.ADC_g = (float)(*ix_raw_adc_ptr_3_0) * 0.0047937F +
    0.0F;

  // MATLABSystem: '<S87>/Moving Average' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double1'

  if (imperix_balance_ctrl_DW.obj.TunablePropsChanged) {
    imperix_balance_ctrl_DW.obj.TunablePropsChanged = false;
  }

  z = 0.0;
  rtb_Switch = 0.0;
  csum = imperix_balance_ctrl_DW.obj.pCumSum + imperix_balance_ctrl_B.ADC_g;
  if (imperix_balance_ctrl_DW.obj.pModValueRev == 0.0) {
    z = imperix_balance_ctrl_DW.obj.pCumSumRev[static_cast<int32_T>
      (imperix_balance_ctrl_DW.obj.pCumRevIndex) - 1] + csum;
  }

  imperix_balance_ctrl_DW.obj.pCumSumRev[static_cast<int32_T>
    (imperix_balance_ctrl_DW.obj.pCumRevIndex) - 1] =
    imperix_balance_ctrl_B.ADC_g;
  if (imperix_balance_ctrl_DW.obj.pCumRevIndex != 99.0) {
    cumRevIndex = imperix_balance_ctrl_DW.obj.pCumRevIndex + 1.0;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (idx_1 = 97; idx_1 >= 0; idx_1--) {
      imperix_balance_ctrl_DW.obj.pCumSumRev[idx_1] +=
        imperix_balance_ctrl_DW.obj.pCumSumRev[idx_1 + 1];
    }
  }

  if (imperix_balance_ctrl_DW.obj.pModValueRev == 0.0) {
    rtb_Switch = z / 100.0;
  }

  imperix_balance_ctrl_DW.obj.pCumSum = csum;
  imperix_balance_ctrl_DW.obj.pCumRevIndex = cumRevIndex;
  if (imperix_balance_ctrl_DW.obj.pModValueRev > 0.0) {
    imperix_balance_ctrl_DW.obj.pModValueRev--;
  } else {
    imperix_balance_ctrl_DW.obj.pModValueRev = 0.0;
  }

  // S-Function (TUNABLE_PARAM): '<S661>/S-Function'
  imperix_balance_ctrl_B.SFunction_k = reset_mean;

  // Outputs for Triggered SubSystem: '<S87>/Sample and Hold' incorporates:
  //   TriggerPort: '<S645>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE,
                        (imperix_balance_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S645>/In' incorporates:
    //   MATLABSystem: '<S87>/Moving Average'

    imperix_balance_ctrl_B.In = rtb_Switch;
  }

  // End of Outputs for SubSystem: '<S87>/Sample and Hold'

  // Sum: '<S87>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double1'

  rtb_Gain4_f = imperix_balance_ctrl_B.ADC_g - imperix_balance_ctrl_B.In;

  // Sum: '<S72>/Sum1'
  z = rtb_w - rtb_Gain4_f;

  // S-Function (TUNABLE_PARAM): '<S669>/S-Function'
  imperix_balance_ctrl_B.SFunction_c = reset_PI;

  // DiscreteIntegrator: '<S389>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_b =
      imperix_balance_ctrl_P.SpeedPI_InitialConditionForInte;
  }

  // Sum: '<S398>/Sum' incorporates:
  //   DiscreteIntegrator: '<S389>/Integrator'
  //   Gain: '<S394>/Proportional Gain'

  csum = imperix_balance_ctrl_P.FOC.kp_w * z +
    imperix_balance_ctrl_DW.Integrator_DSTATE_b;

  // Saturate: '<S396>/Saturation'
  if (csum > imperix_balance_ctrl_P.FOC.u_max) {
    cumRevIndex = imperix_balance_ctrl_P.FOC.u_max;
  } else if (csum < -imperix_balance_ctrl_P.FOC.u_max) {
    cumRevIndex = -imperix_balance_ctrl_P.FOC.u_max;
  } else {
    cumRevIndex = csum;
  }

  // End of Saturate: '<S396>/Saturation'

  // Gain: '<S1>/Gain5'
  rtb_Gain5 = imperix_balance_ctrl_P.IM.np * rtb_Gain4_f;

  // Sum: '<S1>/Sum' incorporates:
  //   Bias: '<S1>/Add Constant1'
  //   Gain: '<S1>/Gain10'
  //   Product: '<S1>/Divide'

  rtb_Sum_nh = cumRevIndex / (rtb_F + imperix_balance_ctrl_P.AddConstant1_Bias) *
    (imperix_balance_ctrl_P.IM.Lm / imperix_balance_ctrl_P.IM.tau_r) + rtb_Gain5;

  // Gain: '<S76>/Gain'
  rtb_Gain26 = imperix_balance_ctrl_P.IM.Lo * rtb_Sum_nh;

  // Gain: '<S604>/Gain3' incorporates:
  //   Gain: '<S82>/Gain2'

  absxk = 0.0;
  t = 0.0;
  tmp_4 = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_Switch = rtb_Gain1_a[i + 2] * imperix_balance_ctrl_P.Gain2_Gain;
    absxk += imperix_balance_ctrl_P.Gain3_Gain[3 * i] * rtb_Switch;
    t += imperix_balance_ctrl_P.Gain3_Gain[3 * i + 1] * rtb_Switch;
    tmp_4 += imperix_balance_ctrl_P.Gain3_Gain[3 * i + 2] * rtb_Switch;
  }

  // End of Gain: '<S604>/Gain3'

  // Gain: '<S604>/Gain1'
  rtb_Gain1_h[0] = imperix_balance_ctrl_P.Gain1_Gain * absxk;
  rtb_Gain1_h[1] = imperix_balance_ctrl_P.Gain1_Gain * t;
  rtb_Gain1_h[2] = imperix_balance_ctrl_P.Gain1_Gain * tmp_4;

  // S-Function (TUNABLE_PARAM): '<S671>/S-Function'
  imperix_balance_ctrl_B.SFunction_m = enable_KF;

  // S-Function (TUNABLE_PARAM): '<S673>/S-Function'
  imperix_balance_ctrl_B.SFunction_fs = reset_KF;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   UnitDelay: '<S76>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S27>:1'
  // '<S27>:1:12'
  // '<S27>:1:13'
  rtb_im_idx_0 = 0.0;
  rtb_Fr_idx_0 = 0.0;
  rtb_im_idx_1 = 0.0;
  rtb_Fr_idx_1 = 0.0;

  // '<S27>:1:14'
  rtb_Te = 0.0;
  if (imperix_balance_ctrl_B.SFunction_m != 0.0F) {
    if (imperix_balance_ctrl_B.SFunction_fs != 0.0F) {
      // '<S27>:1:21'
      imperix_balance_ctrl_DW.xt_est_apriori[0] =
        imperix_balance_ctrl_P.KF.x1_mu[0];
      imperix_balance_ctrl_DW.xt_est_apriori[1] =
        imperix_balance_ctrl_P.KF.x1_mu[1];
      imperix_balance_ctrl_DW.xt_est_apriori[2] =
        imperix_balance_ctrl_P.KF.x1_mu[2];
      imperix_balance_ctrl_DW.xt_est_apriori[3] =
        imperix_balance_ctrl_P.KF.x1_mu[3];
    }

    // '<S27>:1:25'
    memcpy(&A[0], &imperix_balance_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

    // '<S27>:1:26'
    A[12] = imperix_balance_ctrl_P.KF.A[12] * rtb_Gain5;

    // '<S27>:1:27'
    A[9] = imperix_balance_ctrl_P.KF.A[9] * rtb_Gain5;

    // '<S27>:1:28'
    A[14] = imperix_balance_ctrl_P.KF.A[14] * rtb_Gain5;

    // '<S27>:1:29'
    A[11] = imperix_balance_ctrl_P.KF.A[11] * rtb_Gain5;

    // '<S27>:1:30'
    ie_idx_0 = 0.5 * imperix_balance_ctrl_P.KF.Ts;
    for (i = 0; i < 16; i++) {
      M[i] = ie_idx_0 * A[i] + imperix_balance_ctrl_DW.Inx[i];
    }

    // '<S27>:1:31'
    // '<S27>:1:39'
    // '<S27>:1:69'
    // '<S27>:1:57'
    for (idx_1 = 0; idx_1 < 200; idx_1++) {
      varargin_1[idx_1] = fabs(imperix_balance_ctrl_P.KF.we_list[idx_1] -
        rtb_Gain5);
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
      rtb_Switch = varargin_1[i - 1];
      iindx = i;
      for (jmax = i + 1; jmax < 201; jmax++) {
        rtb_im_idx_0 = varargin_1[jmax - 1];
        if (rtb_Switch > rtb_im_idx_0) {
          rtb_Switch = rtb_im_idx_0;
          iindx = jmax;
        }
      }
    }

    // '<S27>:1:57'
    idx_1 = iindx - 1;

    // '<S27>:1:58'
    rtb_im_idx_0 = rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list[iindx - 1];
    if (rtIsNaN(rtb_im_idx_0)) {
      rtb_Switch = (rtNaN);
    } else if (rtb_im_idx_0 < 0.0) {
      rtb_Switch = -1.0;
    } else {
      rtb_Switch = (rtb_im_idx_0 > 0.0);
    }

    rtb_im_idx_0 = static_cast<real_T>(iindx) + rtb_Switch;

    // '<S27>:1:60'
    tmp_d = rtIsNaN(rtb_im_idx_0);
    if ((iindx <= rtb_im_idx_0) || tmp_d) {
      i = iindx;
    } else {
      i = static_cast<int32_T>(rtb_im_idx_0);
    }

    if (i == 0) {
      // '<S27>:1:61'
      // '<S27>:1:62'
      idx_1 = iindx;

      // '<S27>:1:63'
      rtb_im_idx_0++;
    } else {
      if ((iindx >= rtb_im_idx_0) || tmp_d) {
        i = iindx;
      } else {
        i = static_cast<int32_T>(rtb_im_idx_0);
      }

      if (i == 201) {
        // '<S27>:1:64'
        // '<S27>:1:65'
        idx_1 = iindx - 2;

        // '<S27>:1:66'
        rtb_im_idx_0--;
      }
    }

    // '<S27>:1:69'
    // '<S27>:1:70'
    // '<S27>:1:72'
    rtb_Fr_idx_0 = imperix_balance_ctrl_P.KF.we_list[1] -
      imperix_balance_ctrl_P.KF.we_list[0];

    // '<S27>:1:73'
    rtb_Switch = fabs(rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list[static_cast<
                      int32_T>(rtb_im_idx_0) - 1]) / rtb_Fr_idx_0;

    // '<S27>:1:74'
    rtb_Fr_idx_0 = fabs(rtb_Gain5 - imperix_balance_ctrl_P.KF.we_list[idx_1]) /
      rtb_Fr_idx_0;

    // '<S27>:1:76'
    // '<S27>:1:40'
    rtb_im_idx_1 = imperix_balance_ctrl_DW.xt_est_apriori[1];
    rtb_Fr_idx_1 = imperix_balance_ctrl_DW.xt_est_apriori[0];
    rtb_Te = imperix_balance_ctrl_DW.xt_est_apriori[2];
    rtb_Gain5 = imperix_balance_ctrl_DW.xt_est_apriori[3];
    for (i = 0; i < 2; i++) {
      jmax = i << 2;
      iindx = ((static_cast<int32_T>(rtb_im_idx_0) - 1) << 3) + jmax;
      b_a_tmp = (idx_1 << 3) + jmax;
      b_a[jmax] = imperix_balance_ctrl_P.KF.gain_schedule[iindx] * rtb_Fr_idx_0
        + imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp] * rtb_Switch;
      b_a[jmax + 1] = imperix_balance_ctrl_P.KF.gain_schedule[iindx + 1] *
        rtb_Fr_idx_0 + imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 1] *
        rtb_Switch;
      b_a[jmax + 2] = imperix_balance_ctrl_P.KF.gain_schedule[iindx + 2] *
        rtb_Fr_idx_0 + imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 2] *
        rtb_Switch;
      b_a[jmax + 3] = imperix_balance_ctrl_P.KF.gain_schedule[iindx + 3] *
        rtb_Fr_idx_0 + imperix_balance_ctrl_P.KF.gain_schedule[b_a_tmp + 3] *
        rtb_Switch;
      rtb_ie_sat[i] = rtb_Gain1_h[i] - (((imperix_balance_ctrl_P.KF.C[i + 2] *
        rtb_im_idx_1 + imperix_balance_ctrl_P.KF.C[i] * rtb_Fr_idx_1) +
        imperix_balance_ctrl_P.KF.C[i + 4] * rtb_Te) +
        imperix_balance_ctrl_P.KF.C[i + 6] * rtb_Gain5);
    }

    // '<S27>:1:43'
    // '<S27>:1:44'
    rtb_im_idx_0 = rtb_ie_sat[1];
    rtb_Fr_idx_0 = rtb_ie_sat[0];
    for (i = 0; i < 4; i++) {
      xt_est[i] = (b_a[i + 4] * rtb_im_idx_0 + b_a[i] * rtb_Fr_idx_0) +
        imperix_balance_ctrl_DW.xt_est_apriori[i];
    }

    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      jmax = idx_1 << 2;
      rtb_im_idx_0 = M[jmax + 1];
      rtb_Fr_idx_0 = M[jmax];
      rtb_im_idx_1 = M[jmax + 2];
      rtb_Fr_idx_1 = M[jmax + 3];
      for (i = 0; i < 4; i++) {
        iindx = jmax + i;
        tmp_0[iindx] = (((A[i + 4] * imperix_balance_ctrl_P.KF.Ts * rtb_im_idx_0
                          + imperix_balance_ctrl_P.KF.Ts * A[i] * rtb_Fr_idx_0)
                         + A[i + 8] * imperix_balance_ctrl_P.KF.Ts *
                         rtb_im_idx_1) + A[i + 12] *
                        imperix_balance_ctrl_P.KF.Ts * rtb_Fr_idx_1) +
          imperix_balance_ctrl_DW.Inx[iindx];
      }
    }

    for (i = 0; i < 2; i++) {
      rtb_im_idx_0 = 0.0;
      rtb_Fr_idx_0 = 0.0;
      rtb_im_idx_1 = 0.0;
      rtb_Fr_idx_1 = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        rtb_Switch = imperix_balance_ctrl_P.KF.B[(i << 2) + idx_1];
        jmax = idx_1 << 2;
        rtb_im_idx_0 += M[jmax] * rtb_Switch;
        rtb_Fr_idx_0 += M[jmax + 1] * rtb_Switch;
        rtb_im_idx_1 += M[jmax + 2] * rtb_Switch;
        rtb_Fr_idx_1 += M[jmax + 3] * rtb_Switch;
      }

      jmax = i << 2;
      b_a[jmax + 3] = rtb_Fr_idx_1;
      b_a[jmax + 2] = rtb_im_idx_1;
      b_a[jmax + 1] = rtb_Fr_idx_0;
      b_a[jmax] = rtb_im_idx_0;
    }

    for (i = 0; i < 8; i++) {
      M_0[i] = b_a[i] * imperix_balance_ctrl_P.KF.Ts;
    }

    absxk = 0.0;
    t = 0.0;
    tmp_4 = 0.0;
    rtb_Te = 0.0;
    for (i = 0; i < 4; i++) {
      rtb_Switch = xt_est[i];
      idx_1 = i << 2;
      absxk += tmp_0[idx_1] * rtb_Switch;
      t += tmp_0[idx_1 + 1] * rtb_Switch;
      tmp_4 += tmp_0[idx_1 + 2] * rtb_Switch;
      rtb_Te += tmp_0[idx_1 + 3] * rtb_Switch;
    }

    rtb_im_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    rtb_im_idx_1 = 0.0;
    rtb_Fr_idx_1 = 0.0;
    for (i = 0; i < 2; i++) {
      rtb_Switch = imperix_balance_ctrl_DW.UnitDelay_DSTATE[i];
      jmax = i << 2;
      rtb_im_idx_0 += M_0[jmax] * rtb_Switch;
      rtb_Fr_idx_0 += M_0[jmax + 1] * rtb_Switch;
      rtb_im_idx_1 += M_0[jmax + 2] * rtb_Switch;
      rtb_Fr_idx_1 += M_0[jmax + 3] * rtb_Switch;
    }

    imperix_balance_ctrl_DW.xt_est_apriori[0] = absxk + rtb_im_idx_0;
    imperix_balance_ctrl_DW.xt_est_apriori[1] = t + rtb_Fr_idx_0;
    imperix_balance_ctrl_DW.xt_est_apriori[2] = tmp_4 + rtb_im_idx_1;
    imperix_balance_ctrl_DW.xt_est_apriori[3] = rtb_Te + rtb_Fr_idx_1;

    // '<S27>:1:45'
    // '<S27>:1:48'
    // '<S27>:1:49'
    rtb_im_idx_0 = xt_est[0];
    rtb_Fr_idx_0 = xt_est[2];
    rtb_im_idx_1 = xt_est[1];
    rtb_Fr_idx_1 = xt_est[3];

    // '<S27>:1:50'
    rtb_Te = (xt_est[0] * xt_est[3] - xt_est[1] * xt_est[2]) *
      -imperix_balance_ctrl_P.IM.kT;
  } else {
    // '<S27>:1:16'
  }

  // End of MATLAB Function: '<S1>/Kalman Filter'

  // ComplexToMagnitudeAngle: '<S79>/Complex to Magnitude-Angle' incorporates:
  //   RealImagToComplex: '<S79>/Real-Imag to Complex'

  rtb_Gain23 = rt_hypotd_snf(rtb_Fr_idx_0, rtb_Fr_idx_1);

  // Sum: '<S72>/Sum2'
  rtb_Gain5 = rtb_F - rtb_Gain23;

  // DiscreteIntegrator: '<S337>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_h != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_k =
      imperix_balance_ctrl_P.FluxPI_InitialConditionForInteg;
  }

  // Sum: '<S346>/Sum' incorporates:
  //   DiscreteIntegrator: '<S337>/Integrator'
  //   Gain: '<S342>/Proportional Gain'

  rtb_Sum_l = imperix_balance_ctrl_P.FOC.kp_F * rtb_Gain5 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_k;

  // Saturate: '<S344>/Saturation'
  if (rtb_Sum_l > imperix_balance_ctrl_P.FOC.u_max) {
    rtb_Saturation_b = imperix_balance_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_l < -imperix_balance_ctrl_P.FOC.u_max) {
    rtb_Saturation_b = -imperix_balance_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_b = rtb_Sum_l;
  }

  // End of Saturate: '<S344>/Saturation'

  // S-Function (TUNABLE_PARAM): '<S663>/S-Function'
  imperix_balance_ctrl_B.SFunction_co = magnetize;

  // Switch: '<S79>/Switch' incorporates:
  //   ComplexToMagnitudeAngle: '<S79>/Complex to Magnitude-Angle'
  //   Constant: '<S79>/Constant'
  //   RealImagToComplex: '<S79>/Real-Imag to Complex'

  if (imperix_balance_ctrl_B.SFunction_co >
      imperix_balance_ctrl_P.Switch_Threshold) {
    rtb_Switch = imperix_balance_ctrl_P.Constant_Value;
  } else {
    rtb_Switch = rt_atan2d_snf(rtb_Fr_idx_1, rtb_Fr_idx_0);
  }

  // End of Switch: '<S79>/Switch'

  // RelationalOperator: '<S605>/Compare' incorporates:
  //   Constant: '<S603>/Constant'
  //   Constant: '<S605>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_balance_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S603>/Subsystem1' incorporates:
  //   EnablePort: '<S608>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S608>/Fcn' incorporates:
    //   Fcn: '<S608>/Fcn1'

    rtb_Sum6 = sin(rtb_Switch);
    rtb_Sum_n = cos(rtb_Switch);

    // Fcn: '<S608>/Fcn'
    imperix_balance_ctrl_B.Fcn = rtb_Gain1_h[0] * rtb_Sum_n + rtb_Gain1_h[1] *
      rtb_Sum6;

    // Fcn: '<S608>/Fcn1'
    imperix_balance_ctrl_B.Fcn1 = -rtb_Gain1_h[0] * rtb_Sum6 + rtb_Gain1_h[1] *
      rtb_Sum_n;
  }

  // End of Outputs for SubSystem: '<S603>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S603>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S607>/Enable'

  // RelationalOperator: '<S606>/Compare' incorporates:
  //   Constant: '<S603>/Constant'
  //   Constant: '<S606>/Constant'

  if (imperix_balance_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_balance_ctrl_P.CompareToConstant1_const) {
    // Fcn: '<S607>/Fcn' incorporates:
    //   Fcn: '<S607>/Fcn1'

    rtb_Sum6 = cos(rtb_Switch);
    rtb_Sum_n = sin(rtb_Switch);

    // Fcn: '<S607>/Fcn'
    imperix_balance_ctrl_B.Fcn_o = rtb_Gain1_h[0] * rtb_Sum_n - rtb_Gain1_h[1] *
      rtb_Sum6;

    // Fcn: '<S607>/Fcn1'
    imperix_balance_ctrl_B.Fcn1_l = rtb_Gain1_h[0] * rtb_Sum6 + rtb_Gain1_h[1] *
      rtb_Sum_n;
  }

  // End of RelationalOperator: '<S606>/Compare'
  // End of Outputs for SubSystem: '<S603>/Subsystem - pi//2 delay'

  // Switch: '<S603>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_f_idx_0 = imperix_balance_ctrl_B.Fcn;
    rtb_Switch_f_idx_1 = imperix_balance_ctrl_B.Fcn1;
  } else {
    rtb_Switch_f_idx_0 = imperix_balance_ctrl_B.Fcn_o;
    rtb_Switch_f_idx_1 = imperix_balance_ctrl_B.Fcn1_l;
  }

  // End of Switch: '<S603>/Switch'

  // Sum: '<S76>/Sum6'
  rtb_Sum6 = rtb_Saturation_b - rtb_Switch_f_idx_0;

  // DiscreteIntegrator: '<S462>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_p != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_h =
      imperix_balance_ctrl_P.MCCPId_InitialConditionForInteg;
  }

  // Sum: '<S471>/Sum' incorporates:
  //   DiscreteIntegrator: '<S462>/Integrator'
  //   Gain: '<S467>/Proportional Gain'

  rtb_Sum_n = imperix_balance_ctrl_P.MCC.kp * rtb_Sum6 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_h;

  // Saturate: '<S469>/Saturation'
  if (rtb_Sum_n > imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_j = imperix_balance_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_n < -imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Saturation_j = -imperix_balance_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_j = rtb_Sum_n;
  }

  // End of Saturate: '<S469>/Saturation'

  // Sum: '<S76>/Sum' incorporates:
  //   Product: '<S76>/Product1'

  rtb_Sum_b = rtb_Saturation_j - rtb_Gain26 * cumRevIndex;

  // Sum: '<S76>/Sum8'
  rtb_Sum8 = cumRevIndex - rtb_Switch_f_idx_1;

  // DiscreteIntegrator: '<S514>/Integrator'
  if ((imperix_balance_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_balance_ctrl_DW.Integrator_PrevResetState_b != 0)) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_m =
      imperix_balance_ctrl_P.MCCPIq_InitialConditionForInteg;
  }

  // Sum: '<S523>/Sum' incorporates:
  //   DiscreteIntegrator: '<S514>/Integrator'
  //   Gain: '<S519>/Proportional Gain'

  rtb_Sum_d = imperix_balance_ctrl_P.MCC.kp * rtb_Sum8 +
    imperix_balance_ctrl_DW.Integrator_DSTATE_m;

  // Saturate: '<S521>/Saturation'
  if (rtb_Sum_d > imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Gain8 = imperix_balance_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_d < -imperix_balance_ctrl_P.MCC.u_max) {
    rtb_Gain8 = -imperix_balance_ctrl_P.MCC.u_max;
  } else {
    rtb_Gain8 = rtb_Sum_d;
  }

  // End of Saturate: '<S521>/Saturation'

  // Sum: '<S76>/Sum1' incorporates:
  //   Product: '<S76>/Product'

  rtb_Gain26 = rtb_Saturation_b * rtb_Gain26 + rtb_Gain8;

  // RelationalOperator: '<S532>/Compare' incorporates:
  //   Constant: '<S427>/Constant'
  //   Constant: '<S532>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_balance_ctrl_P.CompareToConstant_const_d);

  // Outputs for Enabled SubSystem: '<S427>/Subsystem1'
  imperix_balance__Subsystem1(rtb_Compare, rtb_Sum_b, rtb_Gain26, rtb_Switch,
    &imperix_balance_ctrl_B.Fcn_ou, &imperix_balance_ctrl_B.Fcn1_f);

  // End of Outputs for SubSystem: '<S427>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S427>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S533>/Compare' incorporates:
  //   Constant: '<S427>/Constant'
  //   Constant: '<S533>/Constant'

  imperix_b_Subsystempi2delay(static_cast<uint8_T>
    (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment ==
     imperix_balance_ctrl_P.CompareToConstant1_const_j), rtb_Sum_b, rtb_Gain26,
    rtb_Switch, &imperix_balance_ctrl_B.Fcn_b, &imperix_balance_ctrl_B.Fcn1_i);

  // End of Outputs for SubSystem: '<S427>/Subsystem - pi//2 delay'

  // Switch: '<S427>/Switch' incorporates:
  //   UnitDelay: '<S76>/Unit Delay'

  if (rtb_Compare != 0) {
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[0] = imperix_balance_ctrl_B.Fcn_ou;
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[1] = imperix_balance_ctrl_B.Fcn1_f;
  } else {
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[0] = imperix_balance_ctrl_B.Fcn_b;
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[1] = imperix_balance_ctrl_B.Fcn1_i;
  }

  // End of Switch: '<S427>/Switch'

  // Gain: '<S76>/Gain1' incorporates:
  //   UnitDelay: '<S76>/Unit Delay'

  rtb_Gain1_c_idx_0 = imperix_balance_ctrl_P.Gain1_Gain_m *
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[0];
  rtb_Gain1_c_idx_1 = imperix_balance_ctrl_P.Gain1_Gain_m *
    imperix_balance_ctrl_DW.UnitDelay_DSTATE[1];

  // RateTransition generated from: '<S31>/Saturation' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'

  tmp_d = (imperix_balance_ctrl_M->Timing.RateInteraction.TID0_1 == 1);
  if (tmp_d) {
    // RateTransition generated from: '<S31>/Saturation'
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0] =
      imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0];
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1] =
      imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1];
    imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2] =
      imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2];
  }

  // End of RateTransition generated from: '<S31>/Saturation'

  // Gain: '<S31>/Gain3'
  rtb_TmpSignalConversionAtGain2I[0] = imperix_balance_ctrl_P.Gain3_Gain_f[0] *
    rtb_Saturation_e;
  rtb_TmpSignalConversionAtGain2I[1] = imperix_balance_ctrl_P.Gain3_Gain_f[1] *
    rtb_Saturation_e;

  // RelationalOperator: '<S421>/Compare' incorporates:
  //   Constant: '<S420>/Constant'
  //   Constant: '<S421>/Constant'

  rtb_Compare = (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment_j ==
                 imperix_balance_ctrl_P.CompareToConstant_const_b);

  // Outputs for Enabled SubSystem: '<S420>/Subsystem1'
  imperix_balance__Subsystem1(rtb_Compare, rtb_Saturation_b, cumRevIndex,
    rtb_Switch, &imperix_balance_ctrl_B.Fcn_br, &imperix_balance_ctrl_B.Fcn1_f3);

  // End of Outputs for SubSystem: '<S420>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S420>/Subsystem - pi//2 delay'
  // RelationalOperator: '<S422>/Compare' incorporates:
  //   Constant: '<S420>/Constant'
  //   Constant: '<S422>/Constant'

  imperix_b_Subsystempi2delay(static_cast<uint8_T>
    (imperix_balance_ctrl_P.dq0toAlphaBetaZero_Alignment_j ==
     imperix_balance_ctrl_P.CompareToConstant1_const_o), rtb_Saturation_b,
    cumRevIndex, rtb_Switch, &imperix_balance_ctrl_B.Fcn_m,
    &imperix_balance_ctrl_B.Fcn1_c);

  // End of Outputs for SubSystem: '<S420>/Subsystem - pi//2 delay'

  // Switch: '<S420>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_j[0] = imperix_balance_ctrl_B.Fcn_br;
    rtb_Switch_j[1] = imperix_balance_ctrl_B.Fcn1_f3;
  } else {
    rtb_Switch_j[0] = imperix_balance_ctrl_B.Fcn_m;
    rtb_Switch_j[1] = imperix_balance_ctrl_B.Fcn1_c;
  }

  // End of Switch: '<S420>/Switch'

  // Gain: '<S31>/Gain5'
  for (i = 0; i < 6; i++) {
    tmp[i] = -imperix_balance_ctrl_P.RFT.ab2abc[i];
  }

  tmp_4 = 0.0;
  ie_idx_0 = 0.0;
  ie_idx_1 = 0.0;
  for (i = 0; i < 2; i++) {
    rtb_Switch = rtb_Switch_j[i];
    tmp_4 += tmp[3 * i] * rtb_Switch;
    ie_idx_0 += tmp[3 * i + 1] * rtb_Switch;
    ie_idx_1 += tmp[3 * i + 2] * rtb_Switch;
  }

  rtb_TmpSignalConversionAtGain2I[4] = ie_idx_1;
  rtb_TmpSignalConversionAtGain2I[3] = ie_idx_0;
  rtb_TmpSignalConversionAtGain2I[2] = tmp_4;

  // End of Gain: '<S31>/Gain5'

  // Gain: '<S31>/Gain7'
  for (i = 0; i < 6; i++) {
    rtb_Gain7[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    rtb_Switch = rtb_TmpSignalConversionAtGain2I[i];
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      rtb_Gain7[idx_1] += imperix_balance_ctrl_P.M2C.pinvA[6 * i + idx_1] *
        rtb_Switch;
    }
  }

  // End of Gain: '<S31>/Gain7'

  // SignalConversion generated from: '<S75>/Gain2' incorporates:
  //   Constant: '<S75>/vx'

  ie_idx_0 = imperix_balance_ctrl_P.M2C.Vdc / 2.0;

  // Gain: '<S76>/Gain2' incorporates:
  //   UnitDelay: '<S76>/Unit Delay'

  absxk = 0.0;
  t = 0.0;
  tmp_4 = 0.0;
  for (i = 0; i < 2; i++) {
    rtb_Switch = imperix_balance_ctrl_DW.UnitDelay_DSTATE[i];
    absxk += imperix_balance_ctrl_P.RFT.ab2abc[3 * i] * rtb_Switch;
    t += imperix_balance_ctrl_P.RFT.ab2abc[3 * i + 1] * rtb_Switch;
    tmp_4 += imperix_balance_ctrl_P.RFT.ab2abc[3 * i + 2] * rtb_Switch;

    // SignalConversion generated from: '<S75>/Gain2' incorporates:
    //   Constant: '<S75>/vx'
    //   UnitDelay: '<S76>/Unit Delay'

    rtb_TmpSignalConversionAtGain2I[i] = ie_idx_0 *
      imperix_balance_ctrl_ConstP.vx_rtw_collapsed_sub_expr_yVo7x[i];
  }

  // End of Gain: '<S76>/Gain2'

  // SignalConversion generated from: '<S75>/Gain2'
  rtb_TmpSignalConversionAtGain2I[2] = absxk;
  rtb_TmpSignalConversionAtGain2I[3] = t;
  rtb_TmpSignalConversionAtGain2I[4] = tmp_4;

  // Gain: '<S75>/Gain2'
  for (i = 0; i < 6; i++) {
    rtb_Gain2_i[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    rtb_Switch = rtb_TmpSignalConversionAtGain2I[i];
    for (idx_1 = 0; idx_1 < 6; idx_1++) {
      rtb_Gain2_i[idx_1] += imperix_balance_ctrl_P.Gain2_Gain_i[6 * i + idx_1] *
        rtb_Switch;
    }
  }

  // End of Gain: '<S75>/Gain2'

  // MATLAB Function: '<S31>/Saturation' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   RateTransition generated from: '<S31>/Saturation'

  // MATLAB Function 'Closed_loop_control/NN CEC/Saturation': '<S167>:1'
  // '<S167>:1:44'
  // '<S167>:1:51'
  // '<S167>:1:4'
  // '<S167>:1:5'
  if (!imperix_balance_ctrl_DW.Ac_not_empty) {
    // '<S167>:1:10'
    // '<S167>:1:11'
    for (i = 0; i < 6; i++) {
      rtb_Switch = imperix_balance_ctrl_P.M2C.N[i];
      imperix_balance_ctrl_DW.Ac[i] = rtb_Switch;
      imperix_balance_ctrl_DW.Ac[i + 6] = -rtb_Switch;
      rtb_Switch = imperix_balance_ctrl_P.M2C.N[i + 6];
      imperix_balance_ctrl_DW.Ac[i + 12] = rtb_Switch;
      imperix_balance_ctrl_DW.Ac[i + 18] = -rtb_Switch;
    }

    imperix_balance_ctrl_DW.Ac_not_empty = true;

    // '<S167>:1:13'
    // '<S167>:1:17'
    imperix_balance_ctrl_DW.is_max = imperix_balance_ctrl_P.M2C.is_max;

    // '<S167>:1:18'
    imperix_balance_ctrl_DW.SolverOpts.UseHessianAsInput = true;
    imperix_balance_ctrl_DW.SolverOpts.IntegrityChecks = true;
    imperix_balance_ctrl_DW.SolverOpts.MaxIterations = 100;
    imperix_balance_ctrl_DW.SolverOpts.ConstraintTolerance =
      imperix_balance_ctrl_DW.Tol;
  }

  // '<S167>:1:23'
  for (i = 0; i < 6; i++) {
    tmp_4 = rtb_Gain7[i];
    bc[i] = imperix_balance_ctrl_DW.is_max - tmp_4;
    bc[i + 6] = imperix_balance_ctrl_DW.is_max + tmp_4;
  }

  // '<S167>:1:28'
  rtb_Switch = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1];
  tmp_4 = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0];
  for (i = 0; i < 12; i++) {
    lb[i] = (imperix_balance_ctrl_DW.Ac[i + 12] * rtb_Switch +
             imperix_balance_ctrl_DW.Ac[i] * tmp_4) - bc[i];
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
    rtb_Switch = lb[0];
  } else {
    rtb_Switch = lb[i - 1];
    for (idx_1 = i + 1; idx_1 < 13; idx_1++) {
      tmp_4 = lb[idx_1 - 1];
      if (rtb_Switch < tmp_4) {
        rtb_Switch = tmp_4;
      }
    }
  }

  if (imperix_balance_ctrl_DW.Tol < rtb_Switch) {
    // '<S167>:1:29'
    // '<S167>:1:31'
    if (imperix_balance_ctrl_DW.SolverOpts.UseHessianAsInput) {
      u_ref[0] = imperix_balance_ctrl_DW.Ix[0];
      u_ref[1] = imperix_balance_ctrl_DW.Ix[1];
      u_ref[2] = imperix_balance_ctrl_DW.Ix[2];
      u_ref[3] = imperix_balance_ctrl_DW.Ix[3];
      iindx = 0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 2)) {
        idx_1 = (i << 1) + i;
        rtb_Switch = 0.0;
        if (i >= 1) {
          for (jmax = 0; jmax < 1; jmax++) {
            rtb_Switch += u_ref[1] * u_ref[1];
          }
        }

        rtb_Switch = u_ref[idx_1] - rtb_Switch;
        if (rtb_Switch > 0.0) {
          rtb_Switch = sqrt(rtb_Switch);
          u_ref[idx_1] = rtb_Switch;
          if (i + 1 < 2) {
            ie_idx_0 = 1.0 / rtb_Switch;
            for (jmax = idx_1 + 2; jmax <= idx_1 + 2; jmax++) {
              u_ref[jmax - 1] *= ie_idx_0;
            }
          }

          i++;
        } else {
          u_ref[idx_1] = rtb_Switch;
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
      imperix_balance_ctrl_trisolve_l(u_ref, xt_est);
    } else {
      xt_est[0] = imperix_balance_ctrl_DW.Ix[0];
      xt_est[1] = imperix_balance_ctrl_DW.Ix[1];
      xt_est[2] = imperix_balance_ctrl_DW.Ix[2];
      xt_est[3] = imperix_balance_ctrl_DW.Ix[3];
    }

    for (i = 0; i < 12; i++) {
      iA1[i] = false;
    }

    for (i = 0; i < 2; i++) {
      idx_1 = i << 1;
      rtb_Switch = xt_est[idx_1 + 1];
      tmp_4 = xt_est[idx_1];
      xt_est_0[idx_1] = rtb_Switch * xt_est[1] + tmp_4 * xt_est[0];
      xt_est_0[idx_1 + 1] = rtb_Switch * xt_est[3] + tmp_4 * xt_est[2];
      tmp_1[i] = -imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[i];
    }

    for (i = 0; i < 24; i++) {
      bc_1[i] = -imperix_balance_ctrl_DW.Ac[i];
    }

    for (i = 0; i < 12; i++) {
      bc_0[i] = -bc[i];
    }

    imperix_balance_ctrl_qpkwik_o(xt_est, xt_est_0, tmp_1, bc_1, bc_0, iA1,
      imperix_balance_ctrl_DW.SolverOpts.MaxIterations,
      imperix_balance_ctrl_DW.SolverOpts.ConstraintTolerance, rtb_ie_sat, lb, &i);

    // '<S167>:1:31'
    // '<S167>:1:32'
  } else {
    // '<S167>:1:34'
    rtb_ie_sat[0] = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0];
    rtb_ie_sat[1] = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1];
  }

  // '<S167>:1:44'
  rtb_Gain7[0] = imperix_balance_ctrl_B.ADC - rtb_Gain2_i[0];
  rtb_Gain7[3] = -rtb_Gain2_i[3];
  rtb_Gain7[1] = imperix_balance_ctrl_B.ADC_o - rtb_Gain2_i[1];
  rtb_Gain7[4] = -rtb_Gain2_i[4];
  rtb_Gain7[2] = imperix_balance_ctrl_B.ADC_n - rtb_Gain2_i[2];
  rtb_Gain7[5] = -rtb_Gain2_i[5];
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
      tmp_4 = rtb_Gain7[iindx - 1];
      if (ie_idx_0 > tmp_4) {
        ie_idx_0 = tmp_4;
      }
    }
  }

  // '<S167>:1:45'
  rtb_Gain7[0] = -rtb_Gain2_i[0];
  rtb_Gain7[3] = -static_cast<real_T>(imperix_balance_ctrl_B.ADC_m) -
    rtb_Gain2_i[3];
  rtb_Gain7[1] = -rtb_Gain2_i[1];
  rtb_Gain7[4] = -static_cast<real_T>(imperix_balance_ctrl_B.ADC_k) -
    rtb_Gain2_i[4];
  rtb_Gain7[2] = -rtb_Gain2_i[2];
  rtb_Gain7[5] = -static_cast<real_T>(imperix_balance_ctrl_B.ADC_f) -
    rtb_Gain2_i[5];
  if (!rtIsNaN(-rtb_Gain2_i[0])) {
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
    rtb_Switch = -rtb_Gain2_i[0];
  } else {
    rtb_Switch = rtb_Gain7[i - 1];
    for (idx_1 = i + 1; idx_1 < 7; idx_1++) {
      tmp_4 = rtb_Gain7[idx_1 - 1];
      if (rtb_Switch < tmp_4) {
        rtb_Switch = tmp_4;
      }
    }
  }

  // '<S167>:1:46'
  if (imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2] > ie_idx_0 - 1.0) {
    tmp_4 = ie_idx_0 - 1.0;
  } else if (rtIsNaN(imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2])) {
    if (!rtIsNaN(ie_idx_0 - 1.0)) {
      tmp_4 = ie_idx_0 - 1.0;
    } else {
      tmp_4 = (rtNaN);
    }
  } else {
    tmp_4 = imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2];
  }

  if ((!(tmp_4 >= rtb_Switch + 1.0)) && (!rtIsNaN(rtb_Switch + 1.0))) {
    tmp_4 = rtb_Switch + 1.0;
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
    // '<S167>:1:51'
    rtb_ie_sat[0] = 0.0;
    rtb_ie_sat[1] = 0.0;
  }

  if (rtIsNaN(tmp_4)) {
    // '<S167>:1:54'
    // '<S167>:1:55'
    tmp_4 = 0.0;
  }

  // Sum: '<S166>/Sum' incorporates:
  //   Gain: '<S166>/Gain1'
  //   Gain: '<S166>/Gain2'
  //   UnitDelay: '<S166>/Unit Delay1'

  imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0] = (1.0 -
    imperix_balance_ctrl_P.CCC.alpha) * rtb_ie_sat[0] +
    imperix_balance_ctrl_P.CCC.alpha *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0];
  imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1] = (1.0 -
    imperix_balance_ctrl_P.CCC.alpha) * rtb_ie_sat[1] +
    imperix_balance_ctrl_P.CCC.alpha *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1];

  // Gain: '<S86>/Gain4'
  ie_idx_0 = 0.0;
  ie_idx_1 = 0.0;
  for (i = 0; i < 6; i++) {
    // Sum: '<S86>/Sum3' incorporates:
    //   Gain: '<S86>/Gain3'

    rtb_Switch = 0.0;
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Switch += imperix_balance_ctrl_P.M2C.pinvA[6 * idx_1 + i] *
        rtb_Gain1_a[idx_1];
    }

    rtb_Switch = rtb_Gain1_k[i] - rtb_Switch;

    // End of Sum: '<S86>/Sum3'

    // Gain: '<S86>/Gain4'
    idx_1 = i << 1;
    ie_idx_0 += imperix_balance_ctrl_P.M2C.pinvN[idx_1] * rtb_Switch;
    ie_idx_1 += imperix_balance_ctrl_P.M2C.pinvN[idx_1 + 1] * rtb_Switch;
  }

  // MATLAB Function: '<S1>/LICCs control' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   MATLAB Function: '<S31>/Saturation'
  //   UnitDelay: '<S166>/Unit Delay1'

  // MATLAB Function 'Closed_loop_control/LICCs control': '<S28>:1'
  // '<S28>:1:40'
  // '<S28>:1:53'
  if (!imperix_balance_ctrl_DW.A_not_empty) {
    // '<S28>:1:5'
    // '<S28>:1:6'
    memcpy(&imperix_balance_ctrl_DW.A[0], &imperix_balance_ctrl_P.CCC.A[0],
           sizeof(real_T) << 3U);
    imperix_balance_ctrl_DW.A_not_empty = true;

    // '<S28>:1:7'
    // '<S28>:1:8'
    // '<S28>:1:9'
    // '<S28>:1:10'
    memcpy(&imperix_balance_ctrl_DW.B[0], &imperix_balance_ctrl_P.CCC.B[0],
           sizeof(real_T) << 4U);
    memcpy(&imperix_balance_ctrl_DW.H[0], &imperix_balance_ctrl_P.CCC.H[0],
           sizeof(real_T) << 4U);
    memcpy(&imperix_balance_ctrl_DW.Q[0], &imperix_balance_ctrl_P.CCC.Q[0],
           sizeof(real_T) << 4U);
    memcpy(&imperix_balance_ctrl_DW.R[0], &imperix_balance_ctrl_P.CCC.R[0],
           sizeof(real_T) << 4U);

    // '<S28>:1:11'
    memcpy(&imperix_balance_ctrl_DW.Aineq[0], &imperix_balance_ctrl_P.CCC.Aineq
           [0], 96U * sizeof(real_T));

    // '<S28>:1:12'
    memcpy(&imperix_balance_ctrl_DW.pinvT[0], &imperix_balance_ctrl_P.CCC.pinvT
           [0], 30U * sizeof(real_T));

    // '<S28>:1:16'
    imperix_balance_ctrl_DW.options.UseHessianAsInput = true;
    imperix_balance_ctrl_DW.options.IntegrityChecks = true;
    imperix_balance_ctrl_DW.options.MaxIterations = 10;
    imperix_balance_ctrl_DW.options.ConstraintTolerance = 1.0E-5;
  }

  // '<S28>:1:22'
  // '<S28>:1:25'
  // '<S28>:1:28'
  // '<S28>:1:31'
  // '<S28>:1:34'
  // '<S28>:1:37'
  // '<S28>:1:40'
  xt_est[0] = imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0];
  u_ref[0] = imperix_balance_ctrl_DW.u_prev[0];
  xt_est[1] = imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1];
  u_ref[1] = imperix_balance_ctrl_DW.u_prev[1];
  xt_est[2] = imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0];
  u_ref[2] = imperix_balance_ctrl_DW.u_prev[0];
  xt_est[3] = imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1];
  u_ref[3] = imperix_balance_ctrl_DW.u_prev[1];
  for (i = 0; i < 6; i++) {
    rtb_Gain2_i[i] = ((imperix_balance_ctrl_DW.pinvT[i + 6] * rtb_Gain1_c_idx_0
                       + imperix_balance_ctrl_DW.pinvT[i] * rtb_Sum13) +
                      imperix_balance_ctrl_DW.pinvT[i + 12] * rtb_Gain1_c_idx_1)
      + tmp_4;
  }

  // '<S28>:1:41'
  rtb_Gain7[0] = imperix_balance_ctrl_B.ADC - rtb_Gain2_i[0];
  rtb_Gain7[1] = imperix_balance_ctrl_B.ADC_o - rtb_Gain2_i[1];
  rtb_Gain7[2] = imperix_balance_ctrl_B.ADC_n - rtb_Gain2_i[2];
  rtb_Gain7[3] = 0.0 - rtb_Gain2_i[3];
  rtb_Gain7[4] = 0.0 - rtb_Gain2_i[4];
  rtb_Gain7[5] = 0.0 - rtb_Gain2_i[5];
  for (i = 0; i < 2; i++) {
    idx_1 = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      bc[idx_1 + jmax] = rtb_Gain7[jmax];
    }
  }

  // '<S28>:1:42'
  rtb_Gain7[0] = 0.0 - rtb_Gain2_i[0];
  rtb_Gain7[1] = 0.0 - rtb_Gain2_i[1];
  rtb_Gain7[2] = 0.0 - rtb_Gain2_i[2];
  rtb_Gain7[3] = -static_cast<real_T>(imperix_balance_ctrl_B.ADC_m) -
    rtb_Gain2_i[3];
  rtb_Gain7[4] = -static_cast<real_T>(imperix_balance_ctrl_B.ADC_k) -
    rtb_Gain2_i[4];
  rtb_Gain7[5] = -static_cast<real_T>(imperix_balance_ctrl_B.ADC_f) -
    rtb_Gain2_i[5];
  for (i = 0; i < 2; i++) {
    idx_1 = i * 6;
    for (jmax = 0; jmax < 6; jmax++) {
      lb[idx_1 + jmax] = rtb_Gain7[jmax];
    }
  }

  // '<S28>:1:43'
  // '<S28>:1:48'
  if (imperix_balance_ctrl_DW.options.UseHessianAsInput) {
    memcpy(&A[0], &imperix_balance_ctrl_DW.H[0], sizeof(real_T) << 4U);
    jmax = 0;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 4)) {
      idx_1 = (i << 2) + i;
      rtb_Switch = 0.0;
      if (i >= 1) {
        for (iindx = 0; iindx < i; iindx++) {
          absxk = A[(iindx << 2) + i];
          rtb_Switch += absxk * absxk;
        }
      }

      rtb_Switch = A[idx_1] - rtb_Switch;
      if (rtb_Switch > 0.0) {
        rtb_Switch = sqrt(rtb_Switch);
        A[idx_1] = rtb_Switch;
        if (i + 1 < 4) {
          if (i != 0) {
            b_a_tmp = (((i - 1) << 2) + i) + 2;
            for (iindx = i + 2; iindx <= b_a_tmp; iindx += 4) {
              c_tmp = iindx - i;
              absxk = -A[(((c_tmp - 2) >> 2) << 2) + i];
              e = c_tmp + 2;
              for (c_tmp = iindx; c_tmp <= e; c_tmp++) {
                A_tmp = ((idx_1 + c_tmp) - iindx) + 1;
                A[A_tmp] += A[c_tmp - 1] * absxk;
              }
            }
          }

          rtb_Switch = 1.0 / rtb_Switch;
          b_a_tmp = (idx_1 - i) + 4;
          for (iindx = idx_1 + 2; iindx <= b_a_tmp; iindx++) {
            A[iindx - 1] *= rtb_Switch;
          }
        }

        i++;
      } else {
        A[idx_1] = rtb_Switch;
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

    imperix_balance_ctrl_trisolve_a(A, M);
  } else {
    memcpy(&M[0], &imperix_balance_ctrl_DW.H[0], sizeof(real_T) << 4U);
  }

  for (i = 0; i < 24; i++) {
    iA1_0[i] = false;
  }

  absxk = (imperix_balance_ctrl_DW.A[0] * ie_idx_0 + imperix_balance_ctrl_DW.A[4]
           * ie_idx_1) + (imperix_balance_ctrl_DW.B[0] *
    imperix_balance_ctrl_DW.u_prev[0] + imperix_balance_ctrl_DW.u_prev[1] *
    imperix_balance_ctrl_DW.B[4]);
  t = (imperix_balance_ctrl_DW.A[1] * ie_idx_0 + imperix_balance_ctrl_DW.A[5] *
       ie_idx_1) + (imperix_balance_ctrl_DW.u_prev[0] *
                    imperix_balance_ctrl_DW.B[1] +
                    imperix_balance_ctrl_DW.u_prev[1] *
                    imperix_balance_ctrl_DW.B[5]);
  rtb_Switch = 0.0;
  y_0 = 0.0;
  tmp_7 = 0.0;
  tmp_8 = 0.0;
  for (i = 0; i < 4; i++) {
    tmp_9 = 0.0;
    tmp_a = 0.0;
    tmp_b = 0.0;
    tmp_c = 0.0;
    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      tmp_3 = imperix_balance_ctrl_DW.Q[(i << 2) + idx_1];
      tmp_9 += 2.0 * imperix_balance_ctrl_DW.B[idx_1] * tmp_3;
      tmp_a += imperix_balance_ctrl_DW.B[idx_1 + 4] * 2.0 * tmp_3;
      tmp_b += imperix_balance_ctrl_DW.B[idx_1 + 8] * 2.0 * tmp_3;
      tmp_c += imperix_balance_ctrl_DW.B[idx_1 + 12] * 2.0 * tmp_3;
    }

    idx_1 = i << 2;
    tmp_0[idx_1 + 3] = tmp_c;
    tmp_0[idx_1 + 2] = tmp_b;
    tmp_0[idx_1 + 1] = tmp_a;
    tmp_0[idx_1] = tmp_9;
    xt_est_0[i] = (imperix_balance_ctrl_DW.A[i + 4] * t +
                   imperix_balance_ctrl_DW.A[i] * absxk) - xt_est[i];
    tmp_9 = xt_est_0[i];
    rtb_Switch += tmp_0[idx_1] * tmp_9;
    y_0 += tmp_0[idx_1 + 1] * tmp_9;
    tmp_7 += tmp_0[idx_1 + 2] * tmp_9;
    tmp_8 += tmp_0[idx_1 + 3] * tmp_9;
  }

  xt_est[0] = 0.0;
  xt_est[1] = 0.0;
  xt_est[2] = 0.0;
  xt_est[3] = 0.0;
  for (i = 0; i < 4; i++) {
    tmp_9 = u_ref[i];
    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      iindx = i << 2;
      b_a_tmp = iindx + idx_1;
      xt_est[idx_1] += imperix_balance_ctrl_DW.R[b_a_tmp] * -2.0 * tmp_9;
      jmax = idx_1 << 2;
      A[b_a_tmp] = ((M[jmax + 1] * M[iindx + 1] + M[jmax] * M[iindx]) + M[jmax +
                    2] * M[iindx + 2]) + M[jmax + 3] * M[iindx + 3];
    }
  }

  u_ref[0] = rtb_Switch + xt_est[0];
  u_ref[1] = y_0 + xt_est[1];
  u_ref[2] = tmp_7 + xt_est[2];
  u_ref[3] = tmp_8 + xt_est[3];
  for (i = 0; i < 96; i++) {
    tmp_2[i] = -imperix_balance_ctrl_DW.Aineq[i];
  }

  for (i = 0; i < 12; i++) {
    bc_1[i] = -bc[i];
    bc_1[i + 12] = lb[i];
  }

  imperix_balance_ctrl_qpkwik_n(M, A, u_ref, tmp_2, bc_1, iA1_0,
    imperix_balance_ctrl_DW.options.MaxIterations,
    imperix_balance_ctrl_DW.options.ConstraintTolerance, xt_est, lam, &i);

  // '<S28>:1:48'
  // '<S28>:1:50'
  rtb_Switch = 3.3121686421112381E-170;
  imperix_balance_ctrl_DW.u_prev[0] = xt_est[0];
  absxk = fabs(xt_est[0]);
  if (absxk > 3.3121686421112381E-170) {
    y_0 = 1.0;
    rtb_Switch = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y_0 = t * t;
  }

  imperix_balance_ctrl_DW.u_prev[1] = xt_est[1];
  absxk = fabs(xt_est[1]);
  if (absxk > rtb_Switch) {
    t = rtb_Switch / absxk;
    y_0 = y_0 * t * t + 1.0;
    rtb_Switch = absxk;
  } else {
    t = absxk / rtb_Switch;
    y_0 += t * t;
  }

  y_0 = rtb_Switch * sqrt(y_0);
  if (y_0 > 1000.0) {
    // '<S28>:1:52'
    // '<S28>:1:53'
    imperix_balance_ctrl_DW.u_prev[0] = 0.0;
    imperix_balance_ctrl_DW.u_prev[1] = 0.0;
  }

  // SignalConversion generated from: '<S30>/Gain' incorporates:
  //   MATLAB Function: '<S1>/LICCs control'

  // '<S28>:1:57'
  // '<S28>:1:60'
  rtb_Sum13_0[0] = rtb_Sum13;
  rtb_Sum13_0[1] = rtb_Gain1_c_idx_0;
  rtb_Sum13_0[3] = imperix_balance_ctrl_DW.u_prev[0];
  rtb_Sum13_0[2] = rtb_Gain1_c_idx_1;
  rtb_Sum13_0[4] = imperix_balance_ctrl_DW.u_prev[1];

  // Sum: '<S30>/Sum11' incorporates:
  //   Gain: '<S30>/Gain'
  //   MATLAB Function: '<S31>/Saturation'

  for (i = 0; i < 6; i++) {
    rtb_Switch = 0.0;
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Switch += imperix_balance_ctrl_P.CCC.pinvT[6 * idx_1 + i] *
        rtb_Sum13_0[idx_1];
    }

    rtb_Gain2_i[i] = rtb_Switch + tmp_4;
  }

  // End of Sum: '<S30>/Sum11'

  // MATLAB Function: '<S30>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation Index/Modulation index': '<S144>:1' 
  // '<S144>:1:4'
  rtb_Gain2_i[3] = -rtb_Gain2_i[3];
  rtb_Gain2_i[4] = -rtb_Gain2_i[4];
  rtb_Gain2_i[5] = -rtb_Gain2_i[5];

  // Switch: '<S30>/Switch'
  // '<S144>:1:9'
  y = (imperix_balance_ctrl_B.SFunction_g >
       imperix_balance_ctrl_P.Switch_Threshold_d);
  tmp[0] = imperix_balance_ctrl_B.SFunction;
  tmp[1] = imperix_balance_ctrl_B.SFunction_n;
  tmp[2] = imperix_balance_ctrl_B.SFunction_a;
  tmp[3] = imperix_balance_ctrl_B.SFunction_j;
  tmp[4] = imperix_balance_ctrl_B.SFunction_j0;
  tmp[5] = imperix_balance_ctrl_B.SFunction_e;
  for (idx_1 = 0; idx_1 < 6; idx_1++) {
    // MATLAB Function: '<S30>/Modulation index'
    rtb_Sum13 = rtb_Gain2_i[idx_1] / 520.0;
    if (!(rtb_Sum13 >= 0.0)) {
      rtb_Sum13 = 0.0;
    }

    // Switch: '<S30>/Switch' incorporates:
    //   MATLAB Function: '<S30>/Modulation index'

    if (y) {
      rtb_Sum13 = tmp[idx_1];
    } else if (!(rtb_Sum13 <= 1.0)) {
      rtb_Sum13 = 1.0;
    }

    rtb_Gain7[idx_1] = rtb_Sum13;

    // Gain: '<S1>/Gain' incorporates:
    //   Gain: '<S81>/Gain'
    //   Switch: '<S30>/Switch'

    rtb_Gain2_i[idx_1] = imperix_balance_ctrl_P.Gain_Gain * rtb_Sum13;
  }

  // DataTypeConversion: '<S133>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1 = static_cast<real32_T>
    (rtb_Gain2_i[4]);

  // S-Function (DAC): '<S133>/DAC'
  Dac_SetVoltage(1, imperix_balance_ctrl_B.DataTypeConversion1, 0);

  // DataTypeConversion: '<S135>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>
    (rtb_Gain2_i[5]);

  // S-Function (DAC): '<S135>/DAC'
  Dac_SetVoltage(2, imperix_balance_ctrl_B.DataTypeConversion1_l, 0);

  // DataTypeConversion: '<S137>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_la = static_cast<real32_T>
    (rtb_Gain2_i[0]);

  // S-Function (DAC): '<S137>/DAC'
  Dac_SetVoltage(0, imperix_balance_ctrl_B.DataTypeConversion1_la, 1);

  // DataTypeConversion: '<S139>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>
    (rtb_Gain2_i[1]);

  // S-Function (DAC): '<S139>/DAC'
  Dac_SetVoltage(1, imperix_balance_ctrl_B.DataTypeConversion1_p, 1);

  // DataTypeConversion: '<S141>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>
    (rtb_Gain2_i[2]);

  // S-Function (DAC): '<S141>/DAC'
  Dac_SetVoltage(2, imperix_balance_ctrl_B.DataTypeConversion1_a, 1);

  // DataTypeConversion: '<S143>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>
    (rtb_Gain2_i[3]);

  // S-Function (DAC): '<S143>/DAC'
  Dac_SetVoltage(3, imperix_balance_ctrl_B.DataTypeConversion1_e, 1);

  // Gain: '<S1>/Gain21'
  rtb_Switch = 1.0 / imperix_balance_ctrl_P.M2C.Vc_ref;
  for (i = 0; i < 6; i++) {
    rtb_Gain2_i[i] = rtb_Switch * rtb_CastToDouble5[i];
  }

  // End of Gain: '<S1>/Gain21'

  // DataTypeConversion: '<S226>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion = static_cast<real32_T>(rtb_Gain2_i
    [4]);

  // S-Function (PROBE): '<S226>/S-Function'
  Vc5 = imperix_balance_ctrl_B.DataTypeConversion;

  // DataTypeConversion: '<S228>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_k = static_cast<real32_T>
    (rtb_Gain2_i[5]);

  // S-Function (PROBE): '<S228>/S-Function'
  Vc6 = imperix_balance_ctrl_B.DataTypeConversion_k;

  // Gain: '<S1>/Gain25'
  rtb_Switch = 1.0 / imperix_balance_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S230>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain25'

  imperix_balance_ctrl_B.DataTypeConversion_kx = static_cast<real32_T>
    (rtb_Switch * ie_idx_0);

  // S-Function (PROBE): '<S230>/S-Function'
  ie1 = imperix_balance_ctrl_B.DataTypeConversion_kx;

  // Gain: '<S1>/Gain9'
  y_0 = 1.0 / (1.4142135623730951 * imperix_balance_ctrl_P.IM.IN);

  // DataTypeConversion: '<S232>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_balance_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(y_0 *
    rtb_Gain1_h[0]);

  // S-Function (PROBE): '<S232>/S-Function'
  im_alp = imperix_balance_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S234>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_balance_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(y_0 *
    rtb_Gain1_h[1]);

  // S-Function (PROBE): '<S234>/S-Function'
  im_bet = imperix_balance_ctrl_B.DataTypeConversion_i;

  // Gain: '<S1>/Gain24'
  y_0 = 1.0 / imperix_balance_ctrl_P.M2C.is_max;

  // DataTypeConversion: '<S236>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain24'
  //   UnitDelay: '<S166>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_m = static_cast<real32_T>(y_0 *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0]);

  // S-Function (PROBE): '<S236>/S-Function'
  ie1_r = imperix_balance_ctrl_B.DataTypeConversion_m;

  // DataTypeConversion: '<S238>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain26'
  //   MATLAB Function: '<S31>/Saturation'

  imperix_balance_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.vo_max * tmp_4);

  // S-Function (PROBE): '<S238>/S-Function'
  vo_r = imperix_balance_ctrl_B.DataTypeConversion_p;

  // DataTypeConversion: '<S240>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain24'
  //   UnitDelay: '<S166>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_iu = static_cast<real32_T>(y_0 *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1]);

  // S-Function (PROBE): '<S240>/S-Function'
  ie2_r = imperix_balance_ctrl_B.DataTypeConversion_iu;

  // DataTypeConversion: '<S242>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'

  imperix_balance_ctrl_B.DataTypeConversion_pe = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.FrN * rtb_Gain23);

  // S-Function (PROBE): '<S242>/S-Function'
  Frd = imperix_balance_ctrl_B.DataTypeConversion_pe;

  // DataTypeConversion: '<S244>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain25'

  imperix_balance_ctrl_B.DataTypeConversion_d = static_cast<real32_T>(rtb_Switch
    * ie_idx_1);

  // S-Function (PROBE): '<S244>/S-Function'
  ie2 = imperix_balance_ctrl_B.DataTypeConversion_d;

  // Gain: '<S1>/Gain1'
  rtb_Switch = 1.0 / imperix_balance_ctrl_P.M2C.is_max;
  for (i = 0; i < 6; i++) {
    rtb_Gain1_k[i] *= rtb_Switch;
  }

  // End of Gain: '<S1>/Gain1'

  // DataTypeConversion: '<S246>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_id = static_cast<real32_T>
    (rtb_Gain1_k[0]);

  // S-Function (PROBE): '<S246>/S-Function'
  is1 = imperix_balance_ctrl_B.DataTypeConversion_id;

  // DataTypeConversion: '<S248>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain22'

  imperix_balance_ctrl_B.DataTypeConversion_g = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.Vc_ref * rtb_Gain22);

  // S-Function (PROBE): '<S248>/S-Function'
  Vc_m = imperix_balance_ctrl_B.DataTypeConversion_g;

  // DataTypeConversion: '<S250>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain20'

  imperix_balance_ctrl_B.DataTypeConversion_gb = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.PCC.u_max * rtb_Saturation_e);

  // S-Function (PROBE): '<S250>/S-Function'
  iP_r = imperix_balance_ctrl_B.DataTypeConversion_gb;

  // DataTypeConversion: '<S252>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_balance_ctrl_B.DataTypeConversion_h = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.PCC.u_max * rtb_Gain1_a[0]);

  // S-Function (PROBE): '<S252>/S-Function'
  iP = imperix_balance_ctrl_B.DataTypeConversion_h;

  // Gain: '<S1>/Gain16'
  rtb_Switch = 1.0 / imperix_balance_ctrl_P.MCC.u_max;

  // DataTypeConversion: '<S254>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_balance_ctrl_B.DataTypeConversion_m1 = static_cast<real32_T>
    (rtb_Switch * rtb_Gain26);

  // S-Function (PROBE): '<S254>/S-Function'
  vm_q = imperix_balance_ctrl_B.DataTypeConversion_m1;

  // DataTypeConversion: '<S256>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'

  imperix_balance_ctrl_B.DataTypeConversion_dr = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.FrN * rtb_F);

  // S-Function (PROBE): '<S256>/S-Function'
  Frd_r = imperix_balance_ctrl_B.DataTypeConversion_dr;

  // DataTypeConversion: '<S258>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain7'

  imperix_balance_ctrl_B.DataTypeConversion_pw = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.wN * rtb_w);

  // S-Function (PROBE): '<S258>/S-Function'
  wm_r = imperix_balance_ctrl_B.DataTypeConversion_pw;

  // DataTypeConversion: '<S260>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'

  imperix_balance_ctrl_B.DataTypeConversion_mx = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isdN * rtb_Switch_f_idx_0);

  // S-Function (PROBE): '<S260>/S-Function'
  im_d = imperix_balance_ctrl_B.DataTypeConversion_mx;

  // DataTypeConversion: '<S262>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'

  imperix_balance_ctrl_B.DataTypeConversion_l = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isdN * rtb_Saturation_b);

  // S-Function (PROBE): '<S262>/S-Function'
  imd_r = imperix_balance_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S264>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain2'

  imperix_balance_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isqN * rtb_Switch_f_idx_1);

  // S-Function (PROBE): '<S264>/S-Function'
  im_q = imperix_balance_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S266>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain3'

  imperix_balance_ctrl_B.DataTypeConversion_d4 = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.isqN * cumRevIndex);

  // S-Function (PROBE): '<S266>/S-Function'
  imq_r = imperix_balance_ctrl_B.DataTypeConversion_d4;

  // DataTypeConversion: '<S268>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_pw0 = static_cast<real32_T>
    (rtb_Gain1_k[1]);

  // S-Function (PROBE): '<S268>/S-Function'
  is2 = imperix_balance_ctrl_B.DataTypeConversion_pw0;

  // DataTypeConversion: '<S270>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_balance_ctrl_B.DataTypeConversion_ez = static_cast<real32_T>
    (rtb_Switch * rtb_Sum_b);

  // S-Function (PROBE): '<S270>/S-Function'
  vm_d = imperix_balance_ctrl_B.DataTypeConversion_ez;

  // DataTypeConversion: '<S272>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain27'
  //   UnitDelay: '<S29>/Unit Delay1'

  imperix_balance_ctrl_B.DataTypeConversion_n = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.M2C.Vc_ref *
    imperix_balance_ctrl_DW.UnitDelay1_DSTATE);

  // S-Function (PROBE): '<S272>/S-Function'
  Vc_m_f = imperix_balance_ctrl_B.DataTypeConversion_n;

  // DataTypeConversion: '<S274>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_lu = static_cast<real32_T>
    (rtb_Gain2_i[0]);

  // S-Function (PROBE): '<S274>/S-Function'
  Vc1 = imperix_balance_ctrl_B.DataTypeConversion_lu;

  // Gain: '<S1>/Gain18'
  rtb_Switch = 1.0 / (imperix_balance_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S276>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_balance_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(rtb_Switch
    * rtb_im_idx_1);

  // S-Function (PROBE): '<S276>/S-Function'
  im_bet_KF = imperix_balance_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S278>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_balance_ctrl_B.DataTypeConversion_ir = static_cast<real32_T>
    (rtb_Switch * rtb_im_idx_0);

  // S-Function (PROBE): '<S278>/S-Function'
  im_alp_KF = imperix_balance_ctrl_B.DataTypeConversion_ir;

  // Gain: '<S1>/Gain19'
  rtb_Switch = 1.0 / imperix_balance_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S280>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_balance_ctrl_B.DataTypeConversion_d5 = static_cast<real32_T>
    (rtb_Switch * rtb_Fr_idx_1);

  // S-Function (PROBE): '<S280>/S-Function'
  Fr_bet = imperix_balance_ctrl_B.DataTypeConversion_d5;

  // DataTypeConversion: '<S282>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_balance_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(rtb_Switch
    * rtb_Fr_idx_0);

  // S-Function (PROBE): '<S282>/S-Function'
  Fr_alp = imperix_balance_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S284>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain23'

  imperix_balance_ctrl_B.DataTypeConversion_fy = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.TN * rtb_Te);

  // S-Function (PROBE): '<S284>/S-Function'
  Te_KF = imperix_balance_ctrl_B.DataTypeConversion_fy;

  // DataTypeConversion: '<S286>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_l5 = static_cast<real32_T>
    (rtb_Gain2_i[1]);

  // S-Function (PROBE): '<S286>/S-Function'
  Vc2 = imperix_balance_ctrl_B.DataTypeConversion_l5;

  // DataTypeConversion: '<S288>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_iw = static_cast<real32_T>
    (rtb_Gain2_i[2]);

  // S-Function (PROBE): '<S288>/S-Function'
  Vc3 = imperix_balance_ctrl_B.DataTypeConversion_iw;

  // DataTypeConversion: '<S290>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fo = static_cast<real32_T>
    (rtb_Gain1_k[2]);

  // S-Function (PROBE): '<S290>/S-Function'
  is3 = imperix_balance_ctrl_B.DataTypeConversion_fo;

  // DataTypeConversion: '<S292>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_a = static_cast<real32_T>
    (rtb_Gain2_i[3]);

  // S-Function (PROBE): '<S292>/S-Function'
  Vc4 = imperix_balance_ctrl_B.DataTypeConversion_a;

  // DataTypeConversion: '<S294>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fs = static_cast<real32_T>
    (rtb_Gain1_k[3]);

  // S-Function (PROBE): '<S294>/S-Function'
  is4 = imperix_balance_ctrl_B.DataTypeConversion_fs;

  // DataTypeConversion: '<S296>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_ba = static_cast<real32_T>
    (rtb_Gain1_k[4]);

  // S-Function (PROBE): '<S296>/S-Function'
  is5 = imperix_balance_ctrl_B.DataTypeConversion_ba;

  // DataTypeConversion: '<S298>/Data Type Conversion'
  imperix_balance_ctrl_B.DataTypeConversion_fz = static_cast<real32_T>
    (rtb_Gain1_k[5]);

  // S-Function (PROBE): '<S298>/S-Function'
  is6 = imperix_balance_ctrl_B.DataTypeConversion_fz;

  // DataTypeConversion: '<S300>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain4'

  imperix_balance_ctrl_B.DataTypeConversion_bg = static_cast<real32_T>(1.0 /
    imperix_balance_ctrl_P.IM.wN * rtb_Gain4_f);

  // S-Function (PROBE): '<S300>/S-Function'
  wm = imperix_balance_ctrl_B.DataTypeConversion_bg;

  // S-Function (ADC): '<S100>/ADC'
  imperix_balance_ctrl_B.ADC_gk = (float)(*ix_raw_adc_ptr_2_0) * 6.1035E-5F +
    0.0F;

  // Saturate: '<S126>/Saturation'
  if (imperix_balance_ctrl_P.Saturation_UpperSat < 0.0F) {
    // Saturate: '<S126>/Saturation'
    imperix_balance_ctrl_B.Saturation =
      imperix_balance_ctrl_P.Saturation_UpperSat;
  } else if (imperix_balance_ctrl_P.Saturation_LowerSat > 0.0F) {
    // Saturate: '<S126>/Saturation'
    imperix_balance_ctrl_B.Saturation =
      imperix_balance_ctrl_P.Saturation_LowerSat;
  } else {
    // Saturate: '<S126>/Saturation'
    imperix_balance_ctrl_B.Saturation = 0.0F;
  }

  // End of Saturate: '<S126>/Saturation'
  // DeadZone: '<S197>/DeadZone'
  if (rtb_DeadZone > imperix_balance_ctrl_P.TEC.u_max) {
    rtb_DeadZone -= imperix_balance_ctrl_P.TEC.u_max;
  } else if (rtb_DeadZone >= -imperix_balance_ctrl_P.TEC.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_balance_ctrl_P.TEC.u_max;
  }

  // End of DeadZone: '<S197>/DeadZone'

  // Gain: '<S202>/Integral Gain'
  Mean_AccVal *= imperix_balance_ctrl_P.TEC.ki;

  // DataTypeConversion: '<S407>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_le = static_cast<real32_T>
    (rtb_Gain7[1]);

  // DataTypeConversion: '<S407>/Data Type Conversion2' incorporates:
  //   Constant: '<S407>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value);

  // S-Function (TUNABLE_PARAM): '<S665>/S-Function'
  imperix_balance_ctrl_B.SFunction_c4 = enable_FP;

  // Outputs for Atomic SubSystem: '<S411>/generation'
  // S-Function (CB_PWM): '<S412>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2,
                     imperix_balance_ctrl_B.DataTypeConversion1_le, 1);

  // End of Outputs for SubSystem: '<S411>/generation'

  // DataTypeConversion: '<S408>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S407>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_pv = static_cast<real32_T>
    (rtb_Gain7[1]);

  // DataTypeConversion: '<S408>/Data Type Conversion2' incorporates:
  //   Constant: '<S408>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_o);

  // Outputs for Atomic SubSystem: '<S413>/generation'
  // S-Function (CB_PWM): '<S414>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6,
                     imperix_balance_ctrl_B.DataTypeConversion1_pv, 1);

  // End of Outputs for SubSystem: '<S413>/generation'

  // DataTypeConversion: '<S409>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S407>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_Gain7[1]);

  // DataTypeConversion: '<S409>/Data Type Conversion2' incorporates:
  //   Constant: '<S409>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_l);

  // Outputs for Atomic SubSystem: '<S415>/generation'
  // S-Function (CB_PWM): '<S416>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3,
                     imperix_balance_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S415>/generation'

  // DataTypeConversion: '<S410>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S407>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_Gain7[1]);

  // DataTypeConversion: '<S410>/Data Type Conversion2' incorporates:
  //   Constant: '<S410>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_oo);

  // Outputs for Atomic SubSystem: '<S417>/generation'
  // S-Function (CB_PWM): '<S418>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7,
                     imperix_balance_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S417>/generation'

  // DataTypeConversion: '<S536>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_Gain7[2]);

  // DataTypeConversion: '<S536>/Data Type Conversion2' incorporates:
  //   Constant: '<S536>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_p);

  // Outputs for Atomic SubSystem: '<S540>/generation'
  // S-Function (CB_PWM): '<S541>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_balance_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S540>/generation'

  // DataTypeConversion: '<S537>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S536>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_eo = static_cast<real32_T>
    (rtb_Gain7[2]);

  // DataTypeConversion: '<S537>/Data Type Conversion2' incorporates:
  //   Constant: '<S537>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_pr);

  // Outputs for Atomic SubSystem: '<S542>/generation'
  // S-Function (CB_PWM): '<S543>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4,
                     imperix_balance_ctrl_B.DataTypeConversion1_eo, 0);

  // End of Outputs for SubSystem: '<S542>/generation'

  // DataTypeConversion: '<S538>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S536>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (rtb_Gain7[2]);

  // DataTypeConversion: '<S538>/Data Type Conversion2' incorporates:
  //   Constant: '<S538>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_c);

  // Outputs for Atomic SubSystem: '<S544>/generation'
  // S-Function (CB_PWM): '<S545>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1,
                     imperix_balance_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S544>/generation'

  // DataTypeConversion: '<S539>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S536>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_Gain7[2]);

  // DataTypeConversion: '<S539>/Data Type Conversion2' incorporates:
  //   Constant: '<S539>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ll);

  // Outputs for Atomic SubSystem: '<S546>/generation'
  // S-Function (CB_PWM): '<S547>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5,
                     imperix_balance_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S546>/generation'

  // DeadZone: '<S577>/DeadZone'
  if (rtb_DeadZone_o > imperix_balance_ctrl_P.PCC.u_max) {
    rtb_DeadZone_o -= imperix_balance_ctrl_P.PCC.u_max;
  } else if (rtb_DeadZone_o >= -imperix_balance_ctrl_P.PCC.u_max) {
    rtb_DeadZone_o = 0.0;
  } else {
    rtb_DeadZone_o -= -imperix_balance_ctrl_P.PCC.u_max;
  }

  // End of DeadZone: '<S577>/DeadZone'

  // Gain: '<S582>/Integral Gain'
  rtb_IntegralGain_m *= imperix_balance_ctrl_P.PCC.ki;

  // Gain: '<S81>/Gain'
  rtb_Switch = imperix_balance_ctrl_P.M2C.C * 0.5;

  // DataTypeConversion: '<S609>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_Gain7[3]);

  // DataTypeConversion: '<S609>/Data Type Conversion2' incorporates:
  //   Constant: '<S609>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_n);

  // Outputs for Atomic SubSystem: '<S613>/generation'
  // S-Function (CB_PWM): '<S614>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2,
                     imperix_balance_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S613>/generation'

  // DataTypeConversion: '<S610>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S609>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_Gain7[3]);

  // DataTypeConversion: '<S610>/Data Type Conversion2' incorporates:
  //   Constant: '<S610>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_k);

  // Outputs for Atomic SubSystem: '<S615>/generation'
  // S-Function (CB_PWM): '<S616>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6,
                     imperix_balance_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S615>/generation'

  // DataTypeConversion: '<S611>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S609>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (rtb_Gain7[3]);

  // DataTypeConversion: '<S611>/Data Type Conversion2' incorporates:
  //   Constant: '<S611>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_py);

  // Outputs for Atomic SubSystem: '<S617>/generation'
  // S-Function (CB_PWM): '<S618>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3,
                     imperix_balance_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S617>/generation'

  // DataTypeConversion: '<S612>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S609>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_Gain7[3]);

  // DataTypeConversion: '<S612>/Data Type Conversion2' incorporates:
  //   Constant: '<S612>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ng);

  // Outputs for Atomic SubSystem: '<S619>/generation'
  // S-Function (CB_PWM): '<S620>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7,
                     imperix_balance_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S619>/generation'

  // DataTypeConversion: '<S621>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (rtb_Gain7[4]);

  // DataTypeConversion: '<S621>/Data Type Conversion2' incorporates:
  //   Constant: '<S621>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_j);

  // Outputs for Atomic SubSystem: '<S625>/generation'
  // S-Function (CB_PWM): '<S626>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8,
                     imperix_balance_ctrl_B.DataTypeConversion1_al, 0);

  // End of Outputs for SubSystem: '<S625>/generation'

  // DataTypeConversion: '<S622>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S621>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_Gain7[4]);

  // DataTypeConversion: '<S622>/Data Type Conversion2' incorporates:
  //   Constant: '<S622>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_of);

  // Outputs for Atomic SubSystem: '<S627>/generation'
  // S-Function (CB_PWM): '<S628>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12,
                     imperix_balance_ctrl_B.DataTypeConversion1_k, 0);

  // End of Outputs for SubSystem: '<S627>/generation'

  // DataTypeConversion: '<S623>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S621>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (rtb_Gain7[4]);

  // DataTypeConversion: '<S623>/Data Type Conversion2' incorporates:
  //   Constant: '<S623>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_h);

  // Outputs for Atomic SubSystem: '<S629>/generation'
  // S-Function (CB_PWM): '<S630>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9,
                     imperix_balance_ctrl_B.DataTypeConversion1_l4, 0);

  // End of Outputs for SubSystem: '<S629>/generation'

  // DataTypeConversion: '<S624>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S621>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (rtb_Gain7[4]);

  // DataTypeConversion: '<S624>/Data Type Conversion2' incorporates:
  //   Constant: '<S624>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_nc);

  // Outputs for Atomic SubSystem: '<S631>/generation'
  // S-Function (CB_PWM): '<S632>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13,
                     imperix_balance_ctrl_B.DataTypeConversion1_bg, 0);

  // End of Outputs for SubSystem: '<S631>/generation'

  // DataTypeConversion: '<S633>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_Gain7[5]);

  // DataTypeConversion: '<S633>/Data Type Conversion2' incorporates:
  //   Constant: '<S633>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_f);

  // Outputs for Atomic SubSystem: '<S637>/generation'
  // S-Function (CB_PWM): '<S638>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10,
                     imperix_balance_ctrl_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S637>/generation'

  // DataTypeConversion: '<S634>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S633>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (rtb_Gain7[5]);

  // DataTypeConversion: '<S634>/Data Type Conversion2' incorporates:
  //   Constant: '<S634>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_i);

  // Outputs for Atomic SubSystem: '<S639>/generation'
  // S-Function (CB_PWM): '<S640>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14,
                     imperix_balance_ctrl_B.DataTypeConversion1_o, 0);

  // End of Outputs for SubSystem: '<S639>/generation'

  // DataTypeConversion: '<S635>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S633>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (rtb_Gain7[5]);

  // DataTypeConversion: '<S635>/Data Type Conversion2' incorporates:
  //   Constant: '<S635>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_a);

  // Outputs for Atomic SubSystem: '<S641>/generation'
  // S-Function (CB_PWM): '<S642>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11,
                     imperix_balance_ctrl_B.DataTypeConversion1_ay, 0);

  // End of Outputs for SubSystem: '<S641>/generation'

  // DataTypeConversion: '<S636>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S633>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (rtb_Gain7[5]);

  // DataTypeConversion: '<S636>/Data Type Conversion2' incorporates:
  //   Constant: '<S636>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_ns);

  // Outputs for Atomic SubSystem: '<S643>/generation'
  // S-Function (CB_PWM): '<S644>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15,
                     imperix_balance_ctrl_B.DataTypeConversion1_pf, 0);

  // End of Outputs for SubSystem: '<S643>/generation'

  // DataTypeConversion: '<S646>/Data Type Conversion1'
  imperix_balance_ctrl_B.DataTypeConversion1_als = static_cast<real32_T>
    (rtb_Gain7[0]);

  // DataTypeConversion: '<S646>/Data Type Conversion2' incorporates:
  //   Constant: '<S646>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_fa);

  // Outputs for Atomic SubSystem: '<S650>/generation'
  // S-Function (CB_PWM): '<S651>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0,
                     imperix_balance_ctrl_B.DataTypeConversion1_als, 1);

  // End of Outputs for SubSystem: '<S650>/generation'

  // DataTypeConversion: '<S647>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S646>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (rtb_Gain7[0]);

  // DataTypeConversion: '<S647>/Data Type Conversion2' incorporates:
  //   Constant: '<S647>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_hr);

  // Outputs for Atomic SubSystem: '<S652>/generation'
  // S-Function (CB_PWM): '<S653>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4,
                     imperix_balance_ctrl_B.DataTypeConversion1_ig, 1);

  // End of Outputs for SubSystem: '<S652>/generation'

  // DataTypeConversion: '<S648>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S646>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_Gain7[0]);

  // DataTypeConversion: '<S648>/Data Type Conversion2' incorporates:
  //   Constant: '<S648>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_at);

  // Outputs for Atomic SubSystem: '<S654>/generation'
  // S-Function (CB_PWM): '<S655>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1,
                     imperix_balance_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S654>/generation'

  // DataTypeConversion: '<S649>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S646>/Data Type Conversion1'

  imperix_balance_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (rtb_Gain7[0]);

  // DataTypeConversion: '<S649>/Data Type Conversion2' incorporates:
  //   Constant: '<S649>/phase'

  imperix_balance_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_balance_ctrl_P.phase_Value_cq);

  // Outputs for Atomic SubSystem: '<S656>/generation'
  // S-Function (CB_PWM): '<S657>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

  if (imperix_balance_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5,
                     imperix_balance_ctrl_B.DataTypeConversion1_gw, 1);

  // End of Outputs for SubSystem: '<S656>/generation'

  // RateTransition generated from: '<S1>/Energy balance' incorporates:
  //   Gain: '<S81>/Gain'
  //   Math: '<S81>/Square'

  if (tmp_d) {
    for (i = 0; i < 6; i++) {
      // Math: '<S81>/Square'
      rtb_Gain22 = rtb_CastToDouble5[i];
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Bu[i] = rtb_Gain22 *
        rtb_Gain22 * rtb_Switch;
    }

    // RateTransition generated from: '<S1>/Energy balance' incorporates:
    //   Gain: '<S81>/Gain'
    //   Math: '<S81>/Square'

    for (i = 0; i < 6; i++) {
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[i] =
        rtb_CastToDouble5[i];
    }

    // End of RateTransition generated from: '<S1>/Energy balance'

    // RateTransition generated from: '<S1>/Energy balance'
    for (i = 0; i < 5; i++) {
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[i] =
        rtb_TmpSignalConversionAtGain2I[i];
    }

    // End of RateTransition generated from: '<S1>/Energy balance'

    // SignalConversion generated from: '<S419>/Gain3'
    rtb_Gain1_h[0] = rtb_Switch_j[0];
    rtb_Gain1_h[1] = rtb_Switch_j[1];
    rtb_Gain1_h[2] = 0.0;

    // Gain: '<S419>/Gain3'
    absxk = 0.0;
    t = 0.0;
    tmp_4 = 0.0;
    for (i = 0; i < 3; i++) {
      rtb_Switch = rtb_Gain1_h[i];
      absxk += imperix_balance_ctrl_P.Gain3_Gain_g[3 * i] * rtb_Switch;
      t += imperix_balance_ctrl_P.Gain3_Gain_g[3 * i + 1] * rtb_Switch;
      tmp_4 += imperix_balance_ctrl_P.Gain3_Gain_g[3 * i + 2] * rtb_Switch;
    }

    // End of Gain: '<S419>/Gain3'

    // RateTransition generated from: '<S1>/Energy balance' incorporates:
    //   Gain: '<S78>/Gain'
    //   Gain: '<S78>/Gain8'

    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[0] =
      rtb_Saturation_e;
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[1] =
      imperix_balance_ctrl_P.Gain8_Gain * rtb_Saturation_e;
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[2] =
      imperix_balance_ctrl_P.Gain_Gain_h * absxk;
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[3] =
      imperix_balance_ctrl_P.Gain_Gain_h * t;
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[4] =
      imperix_balance_ctrl_P.Gain_Gain_h * tmp_4;

    // RateTransition generated from: '<S1>/Energy balance'
    imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport5_Bu = rtb_Sum_nh;
  }

  // Gain: '<S1>/Gain11'
  imperix_balance_ctrl_B.Gain11 = imperix_balance_ctrl_P.Gain11_Gain * 0.0F;

  // S-Function (PROBE): '<S224>/S-Function'
  Te = imperix_balance_ctrl_B.Gain11;

  // Switch: '<S195>/Switch1' incorporates:
  //   Constant: '<S195>/Clamping_zero'
  //   Constant: '<S195>/Constant'
  //   Constant: '<S195>/Constant2'
  //   RelationalOperator: '<S195>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_balance_ctrl_P.Clamping_zero_Value) {
    tmp_5 = imperix_balance_ctrl_P.Constant_Value_g;
  } else {
    tmp_5 = imperix_balance_ctrl_P.Constant2_Value;
  }

  // Switch: '<S195>/Switch2' incorporates:
  //   Constant: '<S195>/Clamping_zero'
  //   Constant: '<S195>/Constant3'
  //   Constant: '<S195>/Constant4'
  //   RelationalOperator: '<S195>/fix for DT propagation issue1'

  if (Mean_AccVal > imperix_balance_ctrl_P.Clamping_zero_Value) {
    tmp_6 = imperix_balance_ctrl_P.Constant3_Value;
  } else {
    tmp_6 = imperix_balance_ctrl_P.Constant4_Value;
  }

  // Switch: '<S195>/Switch' incorporates:
  //   Constant: '<S195>/Clamping_zero'
  //   Constant: '<S195>/Constant1'
  //   Logic: '<S195>/AND3'
  //   RelationalOperator: '<S195>/Equal1'
  //   RelationalOperator: '<S195>/Relational Operator'
  //   Switch: '<S195>/Switch1'
  //   Switch: '<S195>/Switch2'

  if ((imperix_balance_ctrl_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_5 ==
       tmp_6)) {
    Mean_AccVal = imperix_balance_ctrl_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S205>/Integrator' incorporates:
  //   Switch: '<S195>/Switch'

  imperix_balance_ctrl_DW.Integrator_DSTATE +=
    imperix_balance_ctrl_P.Integrator_gainval * Mean_AccVal;

  // Switch: '<S575>/Switch1' incorporates:
  //   Constant: '<S575>/Clamping_zero'
  //   Constant: '<S575>/Constant'
  //   Constant: '<S575>/Constant2'
  //   RelationalOperator: '<S575>/fix for DT propagation issue'

  if (rtb_DeadZone_o > imperix_balance_ctrl_P.Clamping_zero_Value_p) {
    tmp_5 = imperix_balance_ctrl_P.Constant_Value_gx;
  } else {
    tmp_5 = imperix_balance_ctrl_P.Constant2_Value_c;
  }

  // Switch: '<S575>/Switch2' incorporates:
  //   Constant: '<S575>/Clamping_zero'
  //   Constant: '<S575>/Constant3'
  //   Constant: '<S575>/Constant4'
  //   RelationalOperator: '<S575>/fix for DT propagation issue1'

  if (rtb_IntegralGain_m > imperix_balance_ctrl_P.Clamping_zero_Value_p) {
    tmp_6 = imperix_balance_ctrl_P.Constant3_Value_f;
  } else {
    tmp_6 = imperix_balance_ctrl_P.Constant4_Value_a;
  }

  // Switch: '<S575>/Switch' incorporates:
  //   Constant: '<S575>/Clamping_zero'
  //   Constant: '<S575>/Constant1'
  //   Logic: '<S575>/AND3'
  //   RelationalOperator: '<S575>/Equal1'
  //   RelationalOperator: '<S575>/Relational Operator'
  //   Switch: '<S575>/Switch1'
  //   Switch: '<S575>/Switch2'

  if ((imperix_balance_ctrl_P.Clamping_zero_Value_p != rtb_DeadZone_o) && (tmp_5
       == tmp_6)) {
    rtb_IntegralGain_m = imperix_balance_ctrl_P.Constant1_Value_e;
  }

  // Update for DiscreteIntegrator: '<S585>/Integrator' incorporates:
  //   Switch: '<S575>/Switch'

  imperix_balance_ctrl_DW.Integrator_DSTATE_a +=
    imperix_balance_ctrl_P.Integrator_gainval_b * rtb_IntegralGain_m;

  // Update for DiscreteIntegrator: '<S389>/Integrator' incorporates:
  //   Gain: '<S381>/Kb'
  //   Gain: '<S386>/Integral Gain'
  //   Sum: '<S381>/SumI2'
  //   Sum: '<S381>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_b += (2.0 *
      imperix_balance_ctrl_P.FOC.kp_w * (cumRevIndex - csum) +
      imperix_balance_ctrl_P.FOC.ki_w * z) *
      imperix_balance_ctrl_P.Integrator_gainval_g;
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

  // End of Update for DiscreteIntegrator: '<S389>/Integrator'

  // Update for DiscreteIntegrator: '<S337>/Integrator' incorporates:
  //   Gain: '<S329>/Kb'
  //   Gain: '<S334>/Integral Gain'
  //   Sum: '<S329>/SumI2'
  //   Sum: '<S329>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_k += (2.0 *
      imperix_balance_ctrl_P.FOC.kp_F * (rtb_Saturation_b - rtb_Sum_l) +
      imperix_balance_ctrl_P.FOC.ki_F * rtb_Gain5) *
      imperix_balance_ctrl_P.Integrator_gainval_gz;
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

  // End of Update for DiscreteIntegrator: '<S337>/Integrator'

  // Update for DiscreteIntegrator: '<S462>/Integrator' incorporates:
  //   Gain: '<S454>/Kb'
  //   Gain: '<S459>/Integral Gain'
  //   Sum: '<S454>/SumI2'
  //   Sum: '<S454>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_h += ((rtb_Saturation_j -
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

  // End of Update for DiscreteIntegrator: '<S462>/Integrator'

  // Update for DiscreteIntegrator: '<S514>/Integrator' incorporates:
  //   Gain: '<S506>/Kb'
  //   Gain: '<S511>/Integral Gain'
  //   Sum: '<S506>/SumI2'
  //   Sum: '<S506>/SumI4'

  if (imperix_balance_ctrl_B.SFunction_c == 0.0F) {
    imperix_balance_ctrl_DW.Integrator_DSTATE_m += ((rtb_Gain8 - rtb_Sum_d) *
      imperix_balance_ctrl_P.MCC.kp + imperix_balance_ctrl_P.MCC.ki * rtb_Sum8) *
      imperix_balance_ctrl_P.Integrator_gainval_bo;
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

  // End of Update for DiscreteIntegrator: '<S514>/Integrator'
}

// Model step function for TID1
void imperix_balance_ctrl_step1(void)  // Sample time: [0.00166667s, 0.0s]
{
  real_T B[300];
  real_T tmp[300];
  real_T b_B[150];
  real_T tmp_0[150];
  real_T tmp_5[100];
  real_T tmp_6[60];
  real_T Ec_pred[30];
  real_T IB[30];
  real_T VB[30];
  real_T is_temp[30];
  real_T tmp_3[25];
  real_T VB_tmp[24];
  real_T cos_vals[16];
  real_T tmp_2[12];
  real_T ie_ref_temp[10];
  real_T vo_ref_temp_0[10];
  real_T VB_tmp_0[8];
  real_T tmp_1[8];
  real_T tmp_7[6];
  real_T tmp_8[6];
  real_T maxval[5];
  real_T tmp_9[5];
  real_T vo_ref_temp[5];
  real_T rtb_VectorConcatenate4[3];
  real_T angles;
  real_T b_b;
  real_T cos_vals_0;
  real_T tmp_4;
  real_T tmp_a;
  int32_T cos_vals_tmp;
  int32_T flag_z;
  int32_T i;
  int32_T ibcol;
  int32_T l;
  int32_T l_k;
  boolean_T x[60];
  boolean_T b_x[10];
  boolean_T p;

  // MATLAB Function: '<S1>/Energy balance' incorporates:
  //   RateTransition generated from: '<S1>/Energy balance'
  //
  // MATLAB Function 'Closed_loop_control/Energy balance': '<S25>:1'
  if (!imperix_balance_ctrl_DW.Ts_not_empty) {
    // '<S25>:1:5'
    // '<S25>:1:8'
    imperix_balance_ctrl_DW.Ts_not_empty = true;

    // '<S25>:1:9'
    // '<S25>:1:10'
    for (i = 0; i < 6; i++) {
      imperix_balance_ctrl_DW.Tab2abc[i] = imperix_balance_ctrl_P.RFT.ab2abc[i];
      imperix_balance_ctrl_DW.Tabc2ab[i] = imperix_balance_ctrl_P.RFT.abc2ab[i];
    }

    // '<S25>:1:11'
    // '<S25>:1:12'
    memcpy(&imperix_balance_ctrl_DW.A_b[0], &imperix_balance_ctrl_P.M2C.A[0],
           30U * sizeof(real_T));
    memcpy(&imperix_balance_ctrl_DW.pinvA[0], &imperix_balance_ctrl_P.M2C.pinvA
           [0], 30U * sizeof(real_T));

    // '<S25>:1:13'
    imperix_balance_ctrl_DW.Ts = imperix_balance_ctrl_P.IEC.Ts;

    // '<S25>:1:17'
    // '<S25>:1:18'
    memcpy(&imperix_balance_ctrl_DW.K[0], &imperix_balance_ctrl_P.IEC.K[0], 900U
           * sizeof(real_T));
    memcpy(&imperix_balance_ctrl_DW.MI[0], &imperix_balance_ctrl_P.IEC.MI[0],
           900U * sizeof(real_T));

    // '<S25>:1:19'
    memcpy(&imperix_balance_ctrl_DW.NN[0], &imperix_balance_ctrl_P.IEC.NN[0],
           300U * sizeof(real_T));

    // '<S25>:1:20'
    memcpy(&imperix_balance_ctrl_DW.ONE[0], &imperix_balance_ctrl_P.IEC.ONE[0],
           150U * sizeof(real_T));

    // '<S25>:1:21'
    imperix_balance_ctrl_DW.Nl = imperix_balance_ctrl_P.IEC.Nl;

    // '<S25>:1:22'
    imperix_balance_ctrl_DW.is_max_j = imperix_balance_ctrl_P.M2C.is_max;

    // '<S25>:1:23'
    imperix_balance_ctrl_DW.is_max2 = imperix_balance_ctrl_DW.is_max_j *
      imperix_balance_ctrl_DW.is_max_j;

    // '<S25>:1:24'
    imperix_balance_ctrl_DW.vo_max2 = imperix_balance_ctrl_P.M2C.vo_max *
      imperix_balance_ctrl_P.M2C.vo_max;

    // '<S25>:1:25'
    imperix_balance_ctrl_DW.Ec_ref2 = imperix_balance_ctrl_P.M2C.Ec_ref *
      imperix_balance_ctrl_P.M2C.Ec_ref;

    // '<S25>:1:26'
    memcpy(&imperix_balance_ctrl_DW.Hu_z[0], &imperix_balance_ctrl_P.IEC.Hu_z[0],
           100U * sizeof(real_T));

    // '<S25>:1:27'
    memcpy(&imperix_balance_ctrl_DW.Aineq_z[0],
           &imperix_balance_ctrl_P.IEC.Aineq_z[0], 600U * sizeof(real_T));

    // '<S25>:1:28'
    imperix_balance_ctrl_DW.lambda_z = imperix_balance_ctrl_P.IEC.lambda_z;

    // '<S25>:1:29'
    memcpy(&imperix_balance_ctrl_DW.Hu_o[0], &imperix_balance_ctrl_P.IEC.Hu_o[0],
           25U * sizeof(real_T));

    // '<S25>:1:30'
    memcpy(&imperix_balance_ctrl_DW.Aineq_o[0],
           &imperix_balance_ctrl_P.IEC.Aineq_o[0], 50U * sizeof(real_T));

    // '<S25>:1:31'
    imperix_balance_ctrl_DW.lambda_o = imperix_balance_ctrl_P.IEC.lambda_o;

    // '<S25>:1:32'
    imperix_balance_ctrl_DW.Ec_dev = imperix_balance_ctrl_P.M2C.Ec_dev;

    // '<S25>:1:37'
    imperix_balance_ctrl_DW.options_z.UseHessianAsInput = true;
    imperix_balance_ctrl_DW.options_z.IntegrityChecks = true;
    imperix_balance_ctrl_DW.options_z.MaxIterations = 20;
    imperix_balance_ctrl_DW.options_z.ConstraintTolerance = 0.0001;

    // '<S25>:1:40'
    imperix_balance_ctrl_DW.options_o.UseHessianAsInput = true;
    imperix_balance_ctrl_DW.options_o.IntegrityChecks = true;
    imperix_balance_ctrl_DW.options_o.MaxIterations = 10;
    imperix_balance_ctrl_DW.options_o.ConstraintTolerance = 0.0001;
  }

  // '<S25>:1:52'
  // '<S25>:1:53'
  // '<S25>:1:61'
  // '<S25>:1:62'
  // '<S25>:1:66'
  b_b = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport5_Bu *
    imperix_balance_ctrl_DW.Ts;

  // '<S25>:1:67'
  // '<S25>:1:68'
  // '<S25>:1:69'
  // '<S25>:1:72'
  // '<S25>:1:73'
  // '<S25>:1:78'
  // '<S25>:1:79'
  // '<S25>:1:82'
  // '<S25>:1:83'
  // '<S25>:1:89'
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
  angles = 4.0 * b_b;
  cos_vals_0 = cos(angles);
  angles = sin(angles);
  cos_vals[12] = cos_vals_0;
  cos_vals[13] = -angles;
  cos_vals[14] = angles;
  cos_vals[15] = cos_vals_0;
  imperix_balance_ctrl_repmat
    (&imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[0], tmp_1);
  for (flag_z = 0; flag_z < 8; flag_z++) {
    cos_vals_tmp = flag_z << 1;
    cos_vals_0 = cos_vals[cos_vals_tmp + 1];
    b_b = cos_vals[cos_vals_tmp];
    for (ibcol = 0; ibcol < 3; ibcol++) {
      cos_vals_tmp = ibcol << 1;
      VB_tmp[flag_z + (ibcol << 3)] =
        imperix_balance_ctrl_DW.Tabc2ab[cos_vals_tmp + 1] * cos_vals_0 + b_b *
        imperix_balance_ctrl_DW.Tabc2ab[cos_vals_tmp];
    }

    VB_tmp_0[flag_z] = 0.0;
  }

  for (flag_z = 0; flag_z < 3; flag_z++) {
    cos_vals_0 = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[flag_z
      + 2];
    for (ibcol = 0; ibcol < 8; ibcol++) {
      VB_tmp_0[ibcol] += VB_tmp[(flag_z << 3) + ibcol] * cos_vals_0;
    }
  }

  for (flag_z = 0; flag_z < 4; flag_z++) {
    cos_vals_0 = 0.0;
    b_b = 0.0;
    angles = 0.0;
    for (ibcol = 0; ibcol < 2; ibcol++) {
      tmp_a = VB_tmp_0[(flag_z << 1) + ibcol];
      cos_vals_0 += imperix_balance_ctrl_DW.Tab2abc[3 * ibcol] * tmp_a;
      b_b += imperix_balance_ctrl_DW.Tab2abc[3 * ibcol + 1] * tmp_a;
      angles += imperix_balance_ctrl_DW.Tab2abc[3 * ibcol + 2] * tmp_a;
    }

    tmp_2[3 * flag_z + 2] = angles;
    tmp_2[3 * flag_z + 1] = b_b;
    tmp_2[3 * flag_z] = cos_vals_0;
  }

  for (flag_z = 0; flag_z < 5; flag_z++) {
    tmp_3[flag_z] =
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport3_Bu[flag_z];
  }

  for (flag_z = 0; flag_z < 4; flag_z++) {
    ibcol = flag_z << 1;
    l_k = (flag_z + 1) * 5;
    tmp_3[l_k] = tmp_1[ibcol];
    tmp_3[l_k + 1] = tmp_1[ibcol + 1];
    tmp_3[l_k + 2] = tmp_2[3 * flag_z];
    tmp_3[l_k + 3] = tmp_2[3 * flag_z + 1];
    tmp_3[l_k + 4] = tmp_2[3 * flag_z + 2];
  }

  for (flag_z = 0; flag_z < 5; flag_z++) {
    for (ibcol = 0; ibcol < 6; ibcol++) {
      cos_vals_0 = 0.0;
      for (l_k = 0; l_k < 5; l_k++) {
        cos_vals_0 += imperix_balance_ctrl_DW.A_b[5 * ibcol + l_k] * tmp_3[5 *
          flag_z + l_k];
      }

      VB[ibcol + 6 * flag_z] = cos_vals_0;
    }
  }

  // '<S25>:1:90'
  imperix_balance_ctrl_repmat
    (&imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[0], tmp_1);
  memset(&VB_tmp_0[0], 0, sizeof(real_T) << 3U);
  for (flag_z = 0; flag_z < 3; flag_z++) {
    cos_vals_0 = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[flag_z
      + 2];
    for (ibcol = 0; ibcol < 8; ibcol++) {
      VB_tmp_0[ibcol] += VB_tmp[(flag_z << 3) + ibcol] * cos_vals_0;
    }
  }

  for (flag_z = 0; flag_z < 4; flag_z++) {
    cos_vals_0 = 0.0;
    b_b = 0.0;
    angles = 0.0;
    for (ibcol = 0; ibcol < 2; ibcol++) {
      tmp_a = VB_tmp_0[(flag_z << 1) + ibcol];
      cos_vals_0 += imperix_balance_ctrl_DW.Tab2abc[3 * ibcol] * tmp_a;
      b_b += imperix_balance_ctrl_DW.Tab2abc[3 * ibcol + 1] * tmp_a;
      angles += imperix_balance_ctrl_DW.Tab2abc[3 * ibcol + 2] * tmp_a;
    }

    tmp_2[3 * flag_z + 2] = angles;
    tmp_2[3 * flag_z + 1] = b_b;
    tmp_2[3 * flag_z] = cos_vals_0;
  }

  for (flag_z = 0; flag_z < 5; flag_z++) {
    tmp_3[flag_z] =
      imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport4_Bu[flag_z];
  }

  for (flag_z = 0; flag_z < 4; flag_z++) {
    ibcol = flag_z << 1;
    l_k = (flag_z + 1) * 5;
    tmp_3[l_k] = tmp_1[ibcol];
    tmp_3[l_k + 1] = tmp_1[ibcol + 1];
    tmp_3[l_k + 2] = tmp_2[3 * flag_z];
    tmp_3[l_k + 3] = tmp_2[3 * flag_z + 1];
    tmp_3[l_k + 4] = tmp_2[3 * flag_z + 2];
  }

  memset(&IB[0], 0, 30U * sizeof(real_T));

  // '<S25>:1:95'
  for (i = 0; i < 5; i++) {
    for (flag_z = 0; flag_z < 5; flag_z++) {
      cos_vals_0 = tmp_3[5 * i + flag_z];
      for (ibcol = 0; ibcol < 6; ibcol++) {
        cos_vals_tmp = 6 * i + ibcol;
        IB[cos_vals_tmp] += imperix_balance_ctrl_DW.pinvA[6 * flag_z + ibcol] *
          cos_vals_0;
      }
    }

    vo_ref_temp[i] = 0.0;
  }

  // '<S25>:1:96'
  memset(&ie_ref_temp[0], 0, 10U * sizeof(real_T));

  // '<S25>:1:97'
  // '<S25>:1:98'
  // '<S25>:1:100'
  cos_vals_tmp = static_cast<int32_T>(imperix_balance_ctrl_DW.Nl);

  // '<S25>:1:102'
  if (static_cast<int32_T>(imperix_balance_ctrl_DW.Nl) - 1 >= 0) {
    tmp_4 = imperix_balance_ctrl_DW.Ec_dev * imperix_balance_ctrl_DW.Ec_dev *
      imperix_balance_ctrl_DW.Ec_ref2;
    tmp_7[0] = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[0];
    tmp_7[1] = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[1];
    tmp_7[2] = imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[2];
    tmp_7[3] = 0.0;
    tmp_7[4] = 0.0;
    tmp_7[5] = 0.0;
    tmp_8[0] = 0.0;
    tmp_8[1] = 0.0;
    tmp_8[2] = 0.0;
    tmp_8[3] = -imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[3];
    tmp_8[4] = -imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[4];
    tmp_8[5] = -imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport2_Bu[5];
    for (flag_z = 0; flag_z < 900; flag_z++) {
      imperix_balance_ctrl_B.E_tmp[flag_z] = imperix_balance_ctrl_DW.Ts *
        imperix_balance_ctrl_DW.K[flag_z];
    }

    for (flag_z = 0; flag_z < 30; flag_z++) {
      cos_vals_0 = IB[flag_z];
      tmp_6[flag_z] = imperix_balance_ctrl_DW.is_max_j - cos_vals_0;
      tmp_6[flag_z + 30] = -(-imperix_balance_ctrl_DW.is_max_j - cos_vals_0);
    }
  }

  for (l = 0; l < cos_vals_tmp; l++) {
    // '<S25>:1:106'
    for (flag_z = 0; flag_z < 30; flag_z++) {
      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 5; ibcol++) {
        cos_vals_0 += imperix_balance_ctrl_DW.ONE[30 * ibcol + flag_z] *
          vo_ref_temp[ibcol];
      }

      is_temp[flag_z] = VB[flag_z] + cos_vals_0;
    }

    // '<S25>:1:109'
    memset(&imperix_balance_ctrl_B.c_b[0], 0, 900U * sizeof(real_T));
    for (flag_z = 0; flag_z < 30; flag_z++) {
      imperix_balance_ctrl_B.c_b[flag_z + 30 * flag_z] = is_temp[flag_z];
    }

    for (flag_z = 0; flag_z < 30; flag_z++) {
      memset(&imperix_balance_ctrl_B.E[flag_z * 30], 0, 30U * sizeof(real_T));
      for (ibcol = 0; ibcol < 30; ibcol++) {
        cos_vals_0 = imperix_balance_ctrl_B.c_b[30 * flag_z + ibcol];
        for (l_k = 0; l_k < 30; l_k++) {
          i = 30 * flag_z + l_k;
          imperix_balance_ctrl_B.E[i] += imperix_balance_ctrl_B.E_tmp[30 * ibcol
            + l_k] * cos_vals_0;
        }
      }
    }

    // '<S25>:1:110'
    for (flag_z = 0; flag_z < 10; flag_z++) {
      memset(&B[flag_z * 30], 0, 30U * sizeof(real_T));
      for (ibcol = 0; ibcol < 30; ibcol++) {
        cos_vals_0 = imperix_balance_ctrl_DW.NN[30 * flag_z + ibcol];
        for (l_k = 0; l_k < 30; l_k++) {
          i = 30 * flag_z + l_k;
          B[i] += imperix_balance_ctrl_B.E[30 * ibcol + l_k] * cos_vals_0;
        }
      }
    }

    // '<S25>:1:111'
    // '<S25>:1:114'
    // '<S25>:1:116'
    for (flag_z = 0; flag_z < 5; flag_z++) {
      ibcol = flag_z * 6;
      for (l_k = 0; l_k < 6; l_k++) {
        is_temp[ibcol + l_k] =
          imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Bu[l_k];
      }
    }

    // '<S25>:1:119'
    // '<S25>:1:122'
    // '<S25>:1:123'
    // '<S25>:1:126'
    // '<S25>:1:127'
    // '<S25>:1:128'
    // '<S25>:1:135'
    for (flag_z = 0; flag_z < 30; flag_z++) {
      memset(&tmp[flag_z * 10], 0, 10U * sizeof(real_T));
      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 30; ibcol++) {
        b_b = imperix_balance_ctrl_DW.MI[30 * flag_z + ibcol];
        for (l_k = 0; l_k < 10; l_k++) {
          i = 10 * flag_z + l_k;
          tmp[i] += B[30 * l_k + ibcol] * 2.0 * b_b;
        }

        cos_vals_0 += imperix_balance_ctrl_B.E[30 * ibcol + flag_z] * IB[ibcol];
      }

      Ec_pred[flag_z] = is_temp[flag_z] + cos_vals_0;
    }

    for (flag_z = 0; flag_z < 10; flag_z++) {
      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 30; ibcol++) {
        cos_vals_0 += imperix_balance_ctrl_DW.NN[30 * flag_z + ibcol] * 2.0 *
          IB[ibcol];
      }

      for (ibcol = 0; ibcol < 10; ibcol++) {
        b_b = 0.0;
        for (l_k = 0; l_k < 30; l_k++) {
          b_b += tmp[10 * l_k + flag_z] * B[30 * ibcol + l_k];
        }

        l_k = 10 * ibcol + flag_z;
        tmp_5[l_k] = imperix_balance_ctrl_DW.Hu_z[l_k] *
          imperix_balance_ctrl_DW.lambda_z + b_b / tmp_4;
      }

      b_b = 0.0;
      for (ibcol = 0; ibcol < 30; ibcol++) {
        b_b += tmp[10 * ibcol + flag_z] * Ec_pred[ibcol];
      }

      vo_ref_temp_0[flag_z] = cos_vals_0 / imperix_balance_ctrl_DW.is_max2 *
        imperix_balance_ctrl_DW.lambda_z + b_b / tmp_4;
    }

    imperix_bala_mpcActiveSetSolver(tmp_5, vo_ref_temp_0,
      imperix_balance_ctrl_DW.Aineq_z, tmp_6,
      imperix_balance_ctrl_DW.options_z.MaxIterations,
      imperix_balance_ctrl_DW.options_z.ConstraintTolerance,
      imperix_balance_ctrl_DW.options_z.UseHessianAsInput, ie_ref_temp, &flag_z,
      x);

    // '<S25>:1:135'
    // '<S25>:1:140'
    for (flag_z = 0; flag_z < 30; flag_z++) {
      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 10; ibcol++) {
        cos_vals_0 += imperix_balance_ctrl_DW.NN[30 * ibcol + flag_z] *
          ie_ref_temp[ibcol];
      }

      is_temp[flag_z] = IB[flag_z] + cos_vals_0;
    }

    // '<S25>:1:143'
    memset(&imperix_balance_ctrl_B.c_b[0], 0, 900U * sizeof(real_T));
    for (ibcol = 0; ibcol < 30; ibcol++) {
      imperix_balance_ctrl_B.c_b[ibcol + 30 * ibcol] = is_temp[ibcol];
      memset(&imperix_balance_ctrl_B.E[ibcol * 30], 0, 30U * sizeof(real_T));
    }

    for (flag_z = 0; flag_z < 30; flag_z++) {
      for (ibcol = 0; ibcol < 30; ibcol++) {
        cos_vals_0 = imperix_balance_ctrl_B.c_b[30 * flag_z + ibcol];
        for (l_k = 0; l_k < 30; l_k++) {
          i = 30 * flag_z + l_k;
          imperix_balance_ctrl_B.E[i] += imperix_balance_ctrl_B.E_tmp[30 * ibcol
            + l_k] * cos_vals_0;
        }
      }
    }

    // '<S25>:1:144'
    // '<S25>:1:145'
    // '<S25>:1:148'
    // '<S25>:1:149'
    // '<S25>:1:152'
    // '<S25>:1:155'
    // '<S25>:1:156'
    // '<S25>:1:159'
    for (l_k = 0; l_k < 5; l_k++) {
      memset(&b_B[l_k * 30], 0, 30U * sizeof(real_T));
      for (flag_z = 0; flag_z < 30; flag_z++) {
        cos_vals_0 = imperix_balance_ctrl_DW.ONE[30 * l_k + flag_z];
        for (ibcol = 0; ibcol < 30; ibcol++) {
          i = 30 * l_k + ibcol;
          b_B[i] += imperix_balance_ctrl_B.E[30 * flag_z + ibcol] * cos_vals_0;
        }
      }

      flag_z = l_k * 6;
      for (ibcol = 0; ibcol < 6; ibcol++) {
        i = flag_z + ibcol;
        is_temp[i] =
          imperix_balance_ctrl_DW.TmpRTBAtEnergybalanceInport1_Bu[ibcol];
        Ec_pred[i] = tmp_7[ibcol] - VB[i];
      }

      vo_ref_temp[l_k] = Ec_pred[6 * l_k];
      for (i = 0; i < 5; i++) {
        cos_vals_0 = Ec_pred[(6 * l_k + i) + 1];
        if (rtIsNaN(cos_vals_0)) {
          p = false;
        } else {
          b_b = vo_ref_temp[l_k];
          if (rtIsNaN(b_b)) {
            p = true;
          } else {
            p = (b_b > cos_vals_0);
          }
        }

        if (p) {
          vo_ref_temp[l_k] = cos_vals_0;
        }
      }
    }

    // '<S25>:1:160'
    for (ibcol = 0; ibcol < 5; ibcol++) {
      for (flag_z = 0; flag_z < 6; flag_z++) {
        l_k = 6 * ibcol + flag_z;
        Ec_pred[l_k] = tmp_8[flag_z] - VB[l_k];
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

    // '<S25>:1:161'
    // '<S25>:1:166'
    for (flag_z = 0; flag_z < 30; flag_z++) {
      for (ibcol = 0; ibcol < 5; ibcol++) {
        tmp_0[ibcol + 5 * flag_z] = 0.0;
      }

      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 30; ibcol++) {
        b_b = imperix_balance_ctrl_DW.MI[30 * flag_z + ibcol];
        for (l_k = 0; l_k < 5; l_k++) {
          i = 5 * flag_z + l_k;
          tmp_0[i] += b_B[30 * l_k + ibcol] * 2.0 * b_b;
        }

        cos_vals_0 += imperix_balance_ctrl_B.E[30 * ibcol + flag_z] * VB[ibcol];
      }

      Ec_pred[flag_z] = is_temp[flag_z] + cos_vals_0;
    }

    for (flag_z = 0; flag_z < 5; flag_z++) {
      for (ibcol = 0; ibcol < 5; ibcol++) {
        cos_vals_0 = 0.0;
        for (l_k = 0; l_k < 30; l_k++) {
          cos_vals_0 += tmp_0[5 * l_k + flag_z] * b_B[30 * ibcol + l_k];
        }

        l_k = 5 * ibcol + flag_z;
        tmp_3[l_k] = imperix_balance_ctrl_DW.Hu_o[l_k] *
          imperix_balance_ctrl_DW.lambda_o + cos_vals_0 / tmp_4;
      }

      cos_vals_0 = 0.0;
      for (ibcol = 0; ibcol < 30; ibcol++) {
        cos_vals_0 += tmp_0[5 * ibcol + flag_z] * Ec_pred[ibcol];
      }

      tmp_9[flag_z] = 0.0 / imperix_balance_ctrl_DW.vo_max2 *
        imperix_balance_ctrl_DW.lambda_o + cos_vals_0 / tmp_4;
      vo_ref_temp_0[flag_z] = vo_ref_temp[flag_z];
      vo_ref_temp_0[flag_z + 5] = -maxval[flag_z];
    }

    imperix_ba_mpcActiveSetSolver_l(tmp_3, tmp_9,
      imperix_balance_ctrl_DW.Aineq_o, vo_ref_temp_0,
      imperix_balance_ctrl_DW.options_o.MaxIterations,
      imperix_balance_ctrl_DW.options_o.ConstraintTolerance,
      imperix_balance_ctrl_DW.options_o.UseHessianAsInput, vo_ref_temp, &flag_z,
      b_x);

    // '<S25>:1:166'
  }

  // MATLAB Function: '<S31>/White noise' incorporates:
  //   MATLAB Function: '<S1>/Energy balance'

  // '<S25>:1:173'
  // '<S25>:1:174'
  // '<S25>:1:182'
  // '<S25>:1:183'
  // '<S25>:1:184'
  // '<S25>:1:185'
  // '<S25>:1:186'
  // '<S25>:1:187'
  // '<S25>:1:188'
  // '<S25>:1:191'
  // '<S25>:1:192'
  // '<S25>:1:193'
  rtb_VectorConcatenate4[0] = ie_ref_temp[0];
  rtb_VectorConcatenate4[1] = ie_ref_temp[1];
  rtb_VectorConcatenate4[2] = vo_ref_temp[0];

  // RateTransition generated from: '<S31>/Saturation' incorporates:
  //   Concatenate: '<S31>/Vector Concatenate4'

  // MATLAB Function 'Closed_loop_control/NN CEC/White noise': '<S168>:1'
  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0] =
    rtb_VectorConcatenate4[0];
  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1] =
    rtb_VectorConcatenate4[1];
  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2] =
    rtb_VectorConcatenate4[2];
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

  // Start for S-Function (TUNABLE_PARAM): '<S153>/S-Function'
  d1 = 0.0F;                           // Tunable parameter initialization
  ConfigureTunable(&d1, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S155>/S-Function'
  d2 = 0.0F;                           // Tunable parameter initialization
  ConfigureTunable(&d2, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S157>/S-Function'
  d3 = 0.0F;                           // Tunable parameter initialization
  ConfigureTunable(&d3, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S159>/S-Function'
  d4 = 0.0F;                           // Tunable parameter initialization
  ConfigureTunable(&d4, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S163>/S-Function'
  d5 = 0.0F;                           // Tunable parameter initialization
  ConfigureTunable(&d5, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S165>/S-Function'
  d6 = 0.0F;                           // Tunable parameter initialization
  ConfigureTunable(&d6, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S161>/S-Function'
  override = 0.0F;                     // Tunable parameter initialization
  ConfigureTunable(&override, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (ADC): '<S98>/ADC'
  Adc_ConfigureInput(1, 0.021362F, 0.0F, 2);
  Adc_GetPointer(1, 2, &ix_raw_adc_ptr_1_2);

  // Start for S-Function (ADC): '<S116>/ADC'
  Adc_ConfigureInput(0, 0.021362F, 0.0F, 2);
  Adc_GetPointer(0, 2, &ix_raw_adc_ptr_0_2);

  // Start for S-Function (ADC): '<S120>/ADC'
  Adc_ConfigureInput(7, 0.021362F, 0.0F, 0);
  Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

  // Start for S-Function (ADC): '<S102>/ADC'
  Adc_ConfigureInput(6, 0.021362F, 0.0F, 0);
  Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

  // Start for S-Function (ADC): '<S122>/ADC'
  Adc_ConfigureInput(5, 0.021362F, 0.0F, 0);
  Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

  // Start for S-Function (ADC): '<S124>/ADC'
  Adc_ConfigureInput(4, 0.021362F, 0.0F, 0);
  Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);

  // Start for S-Function (ADC): '<S112>/ADC'
  Adc_ConfigureInput(7, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

  // Start for S-Function (ADC): '<S114>/ADC'
  Adc_ConfigureInput(6, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

  // Start for S-Function (ADC): '<S104>/ADC'
  Adc_ConfigureInput(5, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

  // Start for S-Function (ADC): '<S118>/ADC'
  Adc_ConfigureInput(4, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

  // Start for S-Function (ADC): '<S106>/ADC'
  Adc_ConfigureInput(3, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

  // Start for S-Function (ADC): '<S108>/ADC'
  Adc_ConfigureInput(2, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);

  // Start for S-Function (TUNABLE_PARAM): '<S659>/S-Function'
  F_ref = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S667>/S-Function'
  w_ref = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

  // Start for S-Function (ADC): '<S110>/ADC'
  Adc_ConfigureInput(3, 0.0047937F, 0.0F, 0);
  Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

  // Start for MATLABSystem: '<S87>/Moving Average'
  imperix_balance_ctrl_DW.obj.isInitialized = 0;
  imperix_balance_ctrl_DW.obj.NumChannels = -1;
  imperix_balance_ctrl_DW.obj.FrameLength = -1;
  imperix_balance_ctrl_DW.obj.matlabCodegenIsDeleted = false;
  imperix_balanc_SystemCore_setup(&imperix_balance_ctrl_DW.obj);

  // Start for S-Function (TUNABLE_PARAM): '<S661>/S-Function'
  reset_mean = 0.0F;                   // Tunable parameter initialization
  ConfigureTunable(&reset_mean, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S669>/S-Function'
  reset_PI = 1.0F;                     // Tunable parameter initialization
  ConfigureTunable(&reset_PI, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S671>/S-Function'
  enable_KF = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_KF, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S673>/S-Function'
  reset_KF = 1.0F;                     // Tunable parameter initialization
  ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S663>/S-Function'
  magnetize = 1.0F;                    // Tunable parameter initialization
  ConfigureTunable(&magnetize, 0, 0, 0.0F, 1.0F);

  // Start for RateTransition generated from: '<S31>/Saturation'
  imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[0] =
    imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;
  imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[1] =
    imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;
  imperix_balance_ctrl_B.TmpRTBAtSaturationInport1[2] =
    imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;

  // Start for S-Function (PROBE): '<S226>/S-Function'
  ConfigureProbe(&Vc5, 0);

  // Start for S-Function (PROBE): '<S228>/S-Function'
  ConfigureProbe(&Vc6, 0);

  // Start for S-Function (PROBE): '<S230>/S-Function'
  ConfigureProbe(&ie1, 0);

  // Start for S-Function (PROBE): '<S232>/S-Function'
  ConfigureProbe(&im_alp, 0);

  // Start for S-Function (PROBE): '<S234>/S-Function'
  ConfigureProbe(&im_bet, 0);

  // Start for S-Function (PROBE): '<S236>/S-Function'
  ConfigureProbe(&ie1_r, 0);

  // Start for S-Function (PROBE): '<S238>/S-Function'
  ConfigureProbe(&vo_r, 0);

  // Start for S-Function (PROBE): '<S240>/S-Function'
  ConfigureProbe(&ie2_r, 0);

  // Start for S-Function (PROBE): '<S242>/S-Function'
  ConfigureProbe(&Frd, 0);

  // Start for S-Function (PROBE): '<S244>/S-Function'
  ConfigureProbe(&ie2, 0);

  // Start for S-Function (PROBE): '<S246>/S-Function'
  ConfigureProbe(&is1, 0);

  // Start for S-Function (PROBE): '<S248>/S-Function'
  ConfigureProbe(&Vc_m, 0);

  // Start for S-Function (PROBE): '<S250>/S-Function'
  ConfigureProbe(&iP_r, 0);

  // Start for S-Function (PROBE): '<S252>/S-Function'
  ConfigureProbe(&iP, 0);

  // Start for S-Function (PROBE): '<S254>/S-Function'
  ConfigureProbe(&vm_q, 0);

  // Start for S-Function (PROBE): '<S256>/S-Function'
  ConfigureProbe(&Frd_r, 0);

  // Start for S-Function (PROBE): '<S258>/S-Function'
  ConfigureProbe(&wm_r, 0);

  // Start for S-Function (PROBE): '<S260>/S-Function'
  ConfigureProbe(&im_d, 0);

  // Start for S-Function (PROBE): '<S262>/S-Function'
  ConfigureProbe(&imd_r, 0);

  // Start for S-Function (PROBE): '<S264>/S-Function'
  ConfigureProbe(&im_q, 0);

  // Start for S-Function (PROBE): '<S266>/S-Function'
  ConfigureProbe(&imq_r, 0);

  // Start for S-Function (PROBE): '<S268>/S-Function'
  ConfigureProbe(&is2, 0);

  // Start for S-Function (PROBE): '<S270>/S-Function'
  ConfigureProbe(&vm_d, 0);

  // Start for S-Function (PROBE): '<S272>/S-Function'
  ConfigureProbe(&Vc_m_f, 0);

  // Start for S-Function (PROBE): '<S274>/S-Function'
  ConfigureProbe(&Vc1, 0);

  // Start for S-Function (PROBE): '<S276>/S-Function'
  ConfigureProbe(&im_bet_KF, 0);

  // Start for S-Function (PROBE): '<S278>/S-Function'
  ConfigureProbe(&im_alp_KF, 0);

  // Start for S-Function (PROBE): '<S280>/S-Function'
  ConfigureProbe(&Fr_bet, 0);

  // Start for S-Function (PROBE): '<S282>/S-Function'
  ConfigureProbe(&Fr_alp, 0);

  // Start for S-Function (PROBE): '<S284>/S-Function'
  ConfigureProbe(&Te_KF, 0);

  // Start for S-Function (PROBE): '<S286>/S-Function'
  ConfigureProbe(&Vc2, 0);

  // Start for S-Function (PROBE): '<S288>/S-Function'
  ConfigureProbe(&Vc3, 0);

  // Start for S-Function (PROBE): '<S290>/S-Function'
  ConfigureProbe(&is3, 0);

  // Start for S-Function (PROBE): '<S292>/S-Function'
  ConfigureProbe(&Vc4, 0);

  // Start for S-Function (PROBE): '<S294>/S-Function'
  ConfigureProbe(&is4, 0);

  // Start for S-Function (PROBE): '<S296>/S-Function'
  ConfigureProbe(&is5, 0);

  // Start for S-Function (PROBE): '<S298>/S-Function'
  ConfigureProbe(&is6, 0);

  // Start for S-Function (PROBE): '<S300>/S-Function'
  ConfigureProbe(&wm, 0);

  // Start for S-Function (ADC): '<S100>/ADC'
  Adc_ConfigureInput(2, 6.1035E-5F, 0.0F, 0);
  Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

  // Start for S-Function (CLK): '<S126>/CLK1'
  Clock_SetFrequency((tClock) 1, 1500.0F);

  // Start for S-Function (IRQ): '<S129>/S-Function' incorporates:
  //   Constant: '<S131>/clk_id'

  ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
    imperix_balance_ctrl_P.clk_id_Value_o, 0.5F, 0U);
  ConfigureReadTriggerDelayInNs(2000U);
  Adc_SetUserOversampling(0.0F);

  // Start for S-Function (CLK): '<S131>/CLK1'
  Clock_SetFrequency((tClock) 0, 6000.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S665>/S-Function'
  enable_FP = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

  // Start for Atomic SubSystem: '<S411>/generation'

  // Start for S-Function (CB_PWM): '<S412>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S411>/generation'

  // Start for Atomic SubSystem: '<S413>/generation'

  // Start for S-Function (CB_PWM): '<S414>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S413>/generation'

  // Start for Atomic SubSystem: '<S415>/generation'

  // Start for S-Function (CB_PWM): '<S416>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S415>/generation'

  // Start for Atomic SubSystem: '<S417>/generation'

  // Start for S-Function (CB_PWM): '<S418>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S417>/generation'

  // Start for Atomic SubSystem: '<S540>/generation'

  // Start for S-Function (CB_PWM): '<S541>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S540>/generation'

  // Start for Atomic SubSystem: '<S542>/generation'

  // Start for S-Function (CB_PWM): '<S543>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S542>/generation'

  // Start for Atomic SubSystem: '<S544>/generation'

  // Start for S-Function (CB_PWM): '<S545>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S544>/generation'

  // Start for Atomic SubSystem: '<S546>/generation'

  // Start for S-Function (CB_PWM): '<S547>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S546>/generation'

  // Start for Atomic SubSystem: '<S613>/generation'

  // Start for S-Function (CB_PWM): '<S614>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S613>/generation'

  // Start for Atomic SubSystem: '<S615>/generation'

  // Start for S-Function (CB_PWM): '<S616>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S615>/generation'

  // Start for Atomic SubSystem: '<S617>/generation'

  // Start for S-Function (CB_PWM): '<S618>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S617>/generation'

  // Start for Atomic SubSystem: '<S619>/generation'

  // Start for S-Function (CB_PWM): '<S620>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S619>/generation'

  // Start for Atomic SubSystem: '<S625>/generation'

  // Start for S-Function (CB_PWM): '<S626>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S625>/generation'

  // Start for Atomic SubSystem: '<S627>/generation'

  // Start for S-Function (CB_PWM): '<S628>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S627>/generation'

  // Start for Atomic SubSystem: '<S629>/generation'

  // Start for S-Function (CB_PWM): '<S630>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S629>/generation'

  // Start for Atomic SubSystem: '<S631>/generation'

  // Start for S-Function (CB_PWM): '<S632>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S631>/generation'

  // Start for Atomic SubSystem: '<S637>/generation'

  // Start for S-Function (CB_PWM): '<S638>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S637>/generation'

  // Start for Atomic SubSystem: '<S639>/generation'

  // Start for S-Function (CB_PWM): '<S640>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S639>/generation'

  // Start for Atomic SubSystem: '<S641>/generation'

  // Start for S-Function (CB_PWM): '<S642>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S641>/generation'

  // Start for Atomic SubSystem: '<S643>/generation'

  // Start for S-Function (CB_PWM): '<S644>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S643>/generation'

  // Start for Atomic SubSystem: '<S650>/generation'

  // Start for S-Function (CB_PWM): '<S651>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S650>/generation'

  // Start for Atomic SubSystem: '<S652>/generation'

  // Start for S-Function (CB_PWM): '<S653>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S652>/generation'

  // Start for Atomic SubSystem: '<S654>/generation'

  // Start for S-Function (CB_PWM): '<S655>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S654>/generation'

  // Start for Atomic SubSystem: '<S656>/generation'

  // Start for S-Function (CB_PWM): '<S657>/PWM' incorporates:
  //   Constant: '<S126>/clk_id'

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

  // End of Start for SubSystem: '<S656>/generation'

  // Start for S-Function (PROBE): '<S224>/S-Function'
  ConfigureProbe(&Te, 0);
  imperix_balance_ctrl_PrevZCX.SampleandHold_Trig_ZCE = UNINITIALIZED_ZCSIG;

  // InitializeConditions for UnitDelay: '<S29>/Unit Delay1'
  imperix_balance_ctrl_DW.UnitDelay1_DSTATE = imperix_balance_ctrl_P.M2C.Vc_ref;

  // InitializeConditions for DiscreteIntegrator: '<S205>/Integrator'
  imperix_balance_ctrl_DW.Integrator_DSTATE =
    imperix_balance_ctrl_P.PIDController1_InitialCondition;

  // InitializeConditions for DiscreteIntegrator: '<S585>/Integrator'
  imperix_balance_ctrl_DW.Integrator_DSTATE_a =
    imperix_balance_ctrl_P.PCCPI_InitialConditionForIntegr;

  // InitializeConditions for DiscreteIntegrator: '<S389>/Integrator'
  imperix_balance_ctrl_DW.Integrator_DSTATE_b =
    imperix_balance_ctrl_P.SpeedPI_InitialConditionForInte;

  // InitializeConditions for DiscreteIntegrator: '<S337>/Integrator'
  imperix_balance_ctrl_DW.Integrator_DSTATE_k =
    imperix_balance_ctrl_P.FluxPI_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S462>/Integrator'
  imperix_balance_ctrl_DW.Integrator_DSTATE_h =
    imperix_balance_ctrl_P.MCCPId_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S514>/Integrator'
  imperix_balance_ctrl_DW.Integrator_DSTATE_m =
    imperix_balance_ctrl_P.MCCPIq_InitialConditionForInteg;

  // InitializeConditions for UnitDelay: '<S76>/Unit Delay'
  imperix_balance_ctrl_DW.UnitDelay_DSTATE[0] =
    imperix_balance_ctrl_P.UnitDelay_InitialCondition[0];

  // InitializeConditions for UnitDelay: '<S166>/Unit Delay1'
  imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[0] =
    imperix_balance_ctrl_P.UnitDelay1_InitialCondition;

  // InitializeConditions for UnitDelay: '<S76>/Unit Delay'
  imperix_balance_ctrl_DW.UnitDelay_DSTATE[1] =
    imperix_balance_ctrl_P.UnitDelay_InitialCondition[1];

  // InitializeConditions for UnitDelay: '<S166>/Unit Delay1'
  imperix_balance_ctrl_DW.UnitDelay1_DSTATE_f[1] =
    imperix_balance_ctrl_P.UnitDelay1_InitialCondition;

  // InitializeConditions for RateTransition generated from: '<S31>/Saturation'
  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[0] =
    imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;
  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[1] =
    imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;
  imperix_balance_ctrl_DW.TmpRTBAtSaturationInport1_Buffe[2] =
    imperix_balance_ctrl_P.TmpRTBAtSaturationInport1_Initi;

  // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
  memset(&imperix_balance_ctrl_DW.Inx[0], 0, sizeof(real_T) << 4U);
  imperix_balance_ctrl_DW.Inx[0] = 1.0;
  imperix_balance_ctrl_DW.Inx[5] = 1.0;
  imperix_balance_ctrl_DW.Inx[10] = 1.0;
  imperix_balance_ctrl_DW.Inx[15] = 1.0;

  // SystemInitialize for MATLAB Function: '<S31>/Saturation'
  imperix_balance_ctrl_DW.Ix[1] = 0.0;
  imperix_balance_ctrl_DW.Ix[2] = 0.0;
  imperix_balance_ctrl_DW.Ix[0] = 1.0;
  imperix_balance_ctrl_DW.Ix[3] = 1.0;
  imperix_balance_ctrl_DW.Tol = 0.001;

  // SystemInitialize for Enabled SubSystem: '<S420>/Subsystem - pi//2 delay'
  impe_Subsystempi2delay_Init(&imperix_balance_ctrl_B.Fcn_m,
    &imperix_balance_ctrl_B.Fcn1_c, &imperix_balance_ctrl_P.Subsystempi2delay);

  // End of SystemInitialize for SubSystem: '<S420>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S420>/Subsystem1'
  imperix_bal_Subsystem1_Init(&imperix_balance_ctrl_B.Fcn_br,
    &imperix_balance_ctrl_B.Fcn1_f3, &imperix_balance_ctrl_P.Subsystem1);

  // End of SystemInitialize for SubSystem: '<S420>/Subsystem1'

  // SystemInitialize for Enabled SubSystem: '<S427>/Subsystem - pi//2 delay'
  impe_Subsystempi2delay_Init(&imperix_balance_ctrl_B.Fcn_b,
    &imperix_balance_ctrl_B.Fcn1_i, &imperix_balance_ctrl_P.Subsystempi2delay_p);

  // End of SystemInitialize for SubSystem: '<S427>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S427>/Subsystem1'
  imperix_bal_Subsystem1_Init(&imperix_balance_ctrl_B.Fcn_ou,
    &imperix_balance_ctrl_B.Fcn1_f, &imperix_balance_ctrl_P.Subsystem1_e);

  // End of SystemInitialize for SubSystem: '<S427>/Subsystem1'

  // SystemInitialize for Enabled SubSystem: '<S603>/Subsystem - pi//2 delay'
  // SystemInitialize for Fcn: '<S607>/Fcn' incorporates:
  //   Outport: '<S607>/dq'

  imperix_balance_ctrl_B.Fcn_o = imperix_balance_ctrl_P.dq_Y0[0];

  // SystemInitialize for Fcn: '<S607>/Fcn1' incorporates:
  //   Outport: '<S607>/dq'

  imperix_balance_ctrl_B.Fcn1_l = imperix_balance_ctrl_P.dq_Y0[1];

  // End of SystemInitialize for SubSystem: '<S603>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S603>/Subsystem1'
  // SystemInitialize for Fcn: '<S608>/Fcn' incorporates:
  //   Outport: '<S608>/dq'

  imperix_balance_ctrl_B.Fcn = imperix_balance_ctrl_P.dq_Y0_c[0];

  // SystemInitialize for Fcn: '<S608>/Fcn1' incorporates:
  //   Outport: '<S608>/dq'

  imperix_balance_ctrl_B.Fcn1 = imperix_balance_ctrl_P.dq_Y0_c[1];

  // End of SystemInitialize for SubSystem: '<S603>/Subsystem1'

  // SystemInitialize for Triggered SubSystem: '<S87>/Sample and Hold'
  // SystemInitialize for SignalConversion generated from: '<S645>/In' incorporates:
  //   Outport: '<S645>/ '

  imperix_balance_ctrl_B.In = imperix_balance_ctrl_P._Y0;

  // End of SystemInitialize for SubSystem: '<S87>/Sample and Hold'

  // InitializeConditions for MATLABSystem: '<S87>/Moving Average'
  imperix_balance_ctrl_DW.obj.pCumSum = 0.0;
  memset(&imperix_balance_ctrl_DW.obj.pCumSumRev[0], 0, 99U * sizeof(real_T));
  imperix_balance_ctrl_DW.obj.pCumRevIndex = 1.0;
  imperix_balance_ctrl_DW.obj.pModValueRev = 0.0;
}

// Model terminate function
void imperix_balance_ctrl_terminate(void)
{
  // Terminate for MATLABSystem: '<S87>/Moving Average'
  if (!imperix_balance_ctrl_DW.obj.matlabCodegenIsDeleted) {
    imperix_balance_ctrl_DW.obj.matlabCodegenIsDeleted = true;
    if ((imperix_balance_ctrl_DW.obj.isInitialized == 1) &&
        imperix_balance_ctrl_DW.obj.isSetupComplete) {
      imperix_balance_ctrl_DW.obj.NumChannels = -1;
      imperix_balance_ctrl_DW.obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S87>/Moving Average'
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
