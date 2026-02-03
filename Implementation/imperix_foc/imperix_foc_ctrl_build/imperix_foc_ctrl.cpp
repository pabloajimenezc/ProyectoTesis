//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: imperix_foc_ctrl.cpp
//
// Code generated for Simulink model 'imperix_foc_ctrl'.
// To be implemented on the B-Box RCP or the B-Board PRO.
//
// Model version                  : 19.103
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Feb  3 19:36:59 2026
//
#include "imperix_foc_ctrl.h"
#include "rtwtypes.h"
#include "imperix_foc_ctrl_types.h"
#include "imperix_foc_ctrl_private.h"
#include <string.h>
#include <math.h>

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
real32_T enable_KF;                    // Tunable parameter
real32_T reset_KF;                     // Tunable parameter
int16_T* ix_raw_adc_ptr_2_0;
real32_T Te;                           // Probe
real32_T im_alp;                       // Probe
real32_T im_bet;                       // Probe
real32_T Frd;                          // Probe
real32_T is1;                          // Probe
real32_T vm_q;                         // Probe
real32_T Frd_r;                        // Probe
real32_T wm_r;                         // Probe
real32_T im_d;                         // Probe
real32_T imd_r;                        // Probe
real32_T im_q;                         // Probe
real32_T imq_r;                        // Probe
real32_T is2;                          // Probe
real32_T vm_d;                         // Probe
real32_T im_bet_KF;                    // Probe
real32_T im_alp_KF;                    // Probe
real32_T Fr_bet;                       // Probe
real32_T Fr_alp;                       // Probe
real32_T Te_KF;                        // Probe
real32_T is3;                          // Probe
real32_T is4;                          // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe
real32_T wm;                           // Probe
real32_T iP;                           // Probe
unsigned char __attribute__ ((section ("devicescount"))) __attribute__((used))
  ____DEVICES_COUNT = (2U+1);
real32_T enable_FP;                    // Tunable parameter

// Block signals (default storage)
B_imperix_foc_ctrl_T imperix_foc_ctrl_B;

// Block states (default storage)
DW_imperix_foc_ctrl_T imperix_foc_ctrl_DW;

// Previous zero-crossings (trigger) states
PrevZCX_imperix_foc_ctrl_T imperix_foc_ctrl_PrevZCX;

// Real-time model
RT_MODEL_imperix_foc_ctrl_T imperix_foc_ctrl_M_ = RT_MODEL_imperix_foc_ctrl_T();
RT_MODEL_imperix_foc_ctrl_T *const imperix_foc_ctrl_M = &imperix_foc_ctrl_M_;

// Forward declaration for local functions
static void imperix_foc_ct_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj);
static void imperix_foc_ct_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S51>/Moving Average'
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
void imperix_foc__MovingAverage_Init(DW_MovingAverage_imperix_foc__T *localDW)
{
  // InitializeConditions for MATLABSystem: '<S51>/Moving Average'
  localDW->obj.pCumSum = 0.0;
  memset(&localDW->obj.pCumSumRev[0], 0, 99U * sizeof(real_T));
  localDW->obj.pCumRevIndex = 1.0;
  localDW->obj.pModValueRev = 0.0;
}

// Start for atomic system:
void imperix_foc_MovingAverage_Start(DW_MovingAverage_imperix_foc__T *localDW)
{
  // Start for MATLABSystem: '<S51>/Moving Average'
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1;
  localDW->obj.FrameLength = -1;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  imperix_foc_ct_SystemCore_setup(&localDW->obj);
}

// Output and update for atomic system:
void imperix_foc_ctrl_MovingAverage(real_T rtu_0,
  B_MovingAverage_imperix_foc_c_T *localB, DW_MovingAverage_imperix_foc__T
  *localDW)
{
  real_T csum;
  real_T cumRevIndex;
  real_T z;

  // MATLABSystem: '<S51>/Moving Average'
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  z = 0.0;

  // MATLABSystem: '<S51>/Moving Average'
  localB->MovingAverage = 0.0;

  // MATLABSystem: '<S51>/Moving Average'
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
    // MATLABSystem: '<S51>/Moving Average'
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
void imperix_foc__MovingAverage_Term(DW_MovingAverage_imperix_foc__T *localDW)
{
  // Terminate for MATLABSystem: '<S51>/Moving Average'
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      localDW->obj.NumChannels = -1;
      localDW->obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S51>/Moving Average'
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

// Model step function
void imperix_foc_ctrl_step(void)
{
  real_T varargin_1[200];
  real_T A[16];
  real_T M[16];
  real_T tmp_0[16];
  real_T M_0[8];
  real_T b_a[8];
  real_T rtb_Gain[6];
  real_T rtb_Gain1_k[6];
  real_T rtb_VectorConcatenate2[6];
  real_T rtb_Gain1_a[5];
  real_T xt_est[4];
  real_T rtb_Gain1[3];
  real_T tmp[3];
  real_T rtb_Gain1_0[2];
  real_T idx_2;
  real_T rtb_F;
  real_T rtb_Fr_idx_0;
  real_T rtb_Fr_idx_1;
  real_T rtb_Gain11;
  real_T rtb_Gain3_idx_0;
  real_T rtb_Gain3_idx_1;
  real_T rtb_Gain3_idx_2;
  real_T rtb_Gain4;
  real_T rtb_Gain5;
  real_T rtb_Saturation;
  real_T rtb_Saturation_hi;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_o;
  real_T rtb_Sum1_od;
  real_T rtb_Sum2;
  real_T rtb_Sum6;
  real_T rtb_Sum8;
  real_T rtb_Sum_g;
  real_T rtb_Sum_i;
  real_T rtb_Sum_j;
  real_T rtb_Sum_k;
  real_T rtb_Sum_o;
  real_T rtb_Switch_f_idx_0;
  real_T rtb_Switch_f_idx_1;
  real_T rtb_Te;
  real_T rtb_im_idx_0;
  real_T rtb_im_idx_1;
  real_T rtb_w;
  int32_T b_a_tmp;
  int32_T b_a_tmp_0;
  int32_T idx_1;
  int32_T iindx;
  int32_T k;
  uint8_T rtb_Compare;
  boolean_T exitg1;
  boolean_T tmp_1;
  ZCEventType zcEvent;

  // S-Function (TUNABLE_PARAM): '<S459>/S-Function'
  imperix_foc_ctrl_B.SFunction = F_ref;

  // S-Function (TUNABLE_PARAM): '<S465>/S-Function'
  imperix_foc_ctrl_B.SFunction_f = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'
  //   DataTypeConversion: '<S1>/Cast To Double4'

  rtb_F = imperix_foc_ctrl_B.SFunction;
  rtb_w = imperix_foc_ctrl_B.SFunction_f;

  // MATLAB Function 'Closed_loop_control/IM references': '<S20>:1'
  if (!imperix_foc_ctrl_DW.F_max_not_empty) {
    // '<S20>:1:10'
    // '<S20>:1:11'
    imperix_foc_ctrl_DW.F_max = imperix_foc_ctrl_P.IM.FrN;
    imperix_foc_ctrl_DW.F_max_not_empty = true;

    // '<S20>:1:12'
    imperix_foc_ctrl_DW.w_max = imperix_foc_ctrl_P.IM.w_max;

    // '<S20>:1:13'
    // '<S20>:1:16'
    imperix_foc_ctrl_DW.dF = imperix_foc_ctrl_P.FOC.Ts / (3.0 *
      imperix_foc_ctrl_P.IM.tau_r);

    // '<S20>:1:17'
    imperix_foc_ctrl_DW.dw = imperix_foc_ctrl_P.FOC.Ts;
  }

  if (fabs(imperix_foc_ctrl_B.SFunction - imperix_foc_ctrl_DW.F_prev) >
      imperix_foc_ctrl_DW.dF) {
    // '<S20>:1:21'
    // '<S20>:1:22'
    idx_2 = imperix_foc_ctrl_B.SFunction - imperix_foc_ctrl_DW.F_prev;
    if (rtIsNaN(idx_2)) {
      idx_2 = (rtNaN);
    } else if (idx_2 < 0.0) {
      idx_2 = -1.0;
    } else {
      idx_2 = (idx_2 > 0.0);
    }

    rtb_F = idx_2 * imperix_foc_ctrl_DW.dF + imperix_foc_ctrl_DW.F_prev;
  }

  if (fabs(imperix_foc_ctrl_B.SFunction_f - imperix_foc_ctrl_DW.w_prev) >
      imperix_foc_ctrl_DW.dw) {
    // '<S20>:1:25'
    // '<S20>:1:26'
    idx_2 = imperix_foc_ctrl_B.SFunction_f - imperix_foc_ctrl_DW.w_prev;
    if (rtIsNaN(idx_2)) {
      idx_2 = (rtNaN);
    } else if (idx_2 < 0.0) {
      idx_2 = -1.0;
    } else {
      idx_2 = (idx_2 > 0.0);
    }

    rtb_w = idx_2 * imperix_foc_ctrl_DW.dw + imperix_foc_ctrl_DW.w_prev;
  }

  // '<S20>:1:29'
  imperix_foc_ctrl_DW.F_prev = rtb_F;

  // '<S20>:1:30'
  imperix_foc_ctrl_DW.w_prev = rtb_w;

  // '<S20>:1:32'
  rtb_F *= imperix_foc_ctrl_DW.F_max;

  // '<S20>:1:33'
  rtb_w *= imperix_foc_ctrl_DW.w_max;

  // End of MATLAB Function: '<S1>/IM references'

  // S-Function (ADC): '<S78>/ADC'
  imperix_foc_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_3_0) * 0.0047937F + 0.0F;

  // DataTypeConversion: '<S1>/Cast To Double1'
  imperix_foc_ctrl_MovingAverage(static_cast<real_T>(imperix_foc_ctrl_B.ADC),
    &imperix_foc_ctrl_B.MovingAverage_p, &imperix_foc_ctrl_DW.MovingAverage_p);

  // S-Function (TUNABLE_PARAM): '<S461>/S-Function'
  imperix_foc_ctrl_B.SFunction_k = reset_mean;

  // Outputs for Triggered SubSystem: '<S60>/Sample and Hold' incorporates:
  //   TriggerPort: '<S445>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_foc_ctrl_PrevZCX.SampleandHold_Trig_ZCE,
                        (imperix_foc_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S445>/In'
    imperix_foc_ctrl_B.In = imperix_foc_ctrl_B.MovingAverage_p.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S60>/Sample and Hold'

  // Sum: '<S60>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double1'

  rtb_Gain4 = imperix_foc_ctrl_B.ADC - imperix_foc_ctrl_B.In;

  // Sum: '<S48>/Sum1'
  rtb_Sum1_od = rtb_w - rtb_Gain4;

  // S-Function (TUNABLE_PARAM): '<S467>/S-Function'
  imperix_foc_ctrl_B.SFunction_c = reset_PI;

  // DiscreteIntegrator: '<S242>/Integrator'
  if ((imperix_foc_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_foc_ctrl_DW.Integrator_PrevResetState != 0)) {
    imperix_foc_ctrl_DW.Integrator_DSTATE =
      imperix_foc_ctrl_P.SpeedPI_InitialConditionForInte;
  }

  // Sum: '<S251>/Sum' incorporates:
  //   DiscreteIntegrator: '<S242>/Integrator'
  //   Gain: '<S247>/Proportional Gain'

  rtb_Sum_j = imperix_foc_ctrl_P.FOC.kp_w * rtb_Sum1_od +
    imperix_foc_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S249>/Saturation'
  if (rtb_Sum_j > imperix_foc_ctrl_P.FOC.u_max) {
    rtb_Saturation = imperix_foc_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_j < -imperix_foc_ctrl_P.FOC.u_max) {
    rtb_Saturation = -imperix_foc_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation = rtb_Sum_j;
  }

  // End of Saturate: '<S249>/Saturation'

  // Gain: '<S1>/Gain5'
  rtb_Gain5 = imperix_foc_ctrl_P.IM.np * rtb_Gain4;

  // Gain: '<S52>/Gain' incorporates:
  //   Bias: '<S1>/Add Constant1'
  //   Gain: '<S1>/Gain10'
  //   Product: '<S1>/Divide'
  //   Sum: '<S1>/Sum'

  rtb_Gain11 = (rtb_Saturation / (rtb_F + imperix_foc_ctrl_P.AddConstant1_Bias) *
                (imperix_foc_ctrl_P.IM.Lm / imperix_foc_ctrl_P.IM.tau_r) +
                rtb_Gain5) * imperix_foc_ctrl_P.IM.Lo;

  // S-Function (ADC): '<S80>/ADC'
  imperix_foc_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_7_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S82>/ADC'
  imperix_foc_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_6_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S72>/ADC'
  imperix_foc_ctrl_B.ADC_i = (float)(*ix_raw_adc_ptr_5_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S84>/ADC'
  imperix_foc_ctrl_B.ADC_d = (float)(*ix_raw_adc_ptr_4_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S74>/ADC'
  imperix_foc_ctrl_B.ADC_ib = (float)(*ix_raw_adc_ptr_3_2) * 0.00030518F + 0.0F;

  // S-Function (ADC): '<S76>/ADC'
  imperix_foc_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_2_2) * 0.00030518F + 0.0F;

  // DataTypeConversion: '<S1>/Cast To Double'
  rtb_Gain1_k[0] = imperix_foc_ctrl_B.ADC_f;
  rtb_Gain1_k[1] = imperix_foc_ctrl_B.ADC_e;
  rtb_Gain1_k[2] = imperix_foc_ctrl_B.ADC_i;
  rtb_Gain1_k[3] = imperix_foc_ctrl_B.ADC_d;
  rtb_Gain1_k[4] = imperix_foc_ctrl_B.ADC_ib;
  rtb_Gain1_k[5] = imperix_foc_ctrl_B.ADC_p;

  // Gain: '<S59>/Gain1'
  for (k = 0; k < 5; k++) {
    rtb_Gain1_a[k] = 0.0;
  }

  for (k = 0; k < 6; k++) {
    idx_2 = rtb_Gain1_k[k];
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Gain1_a[idx_1] += imperix_foc_ctrl_P.M2C.A[5 * k + idx_1] * idx_2;
    }
  }

  // End of Gain: '<S59>/Gain1'

  // Gain: '<S404>/Gain3' incorporates:
  //   Gain: '<S55>/Gain2'

  rtb_im_idx_0 = 0.0;
  rtb_Fr_idx_0 = 0.0;
  rtb_im_idx_1 = 0.0;
  for (k = 0; k < 3; k++) {
    idx_2 = rtb_Gain1_a[k + 2] * imperix_foc_ctrl_P.Gain2_Gain;
    rtb_im_idx_0 += imperix_foc_ctrl_P.Gain3_Gain[3 * k] * idx_2;
    rtb_Fr_idx_0 += imperix_foc_ctrl_P.Gain3_Gain[3 * k + 1] * idx_2;
    rtb_im_idx_1 += imperix_foc_ctrl_P.Gain3_Gain[3 * k + 2] * idx_2;
  }

  // End of Gain: '<S404>/Gain3'

  // Gain: '<S404>/Gain1'
  rtb_Gain1[0] = imperix_foc_ctrl_P.Gain1_Gain * rtb_im_idx_0;
  rtb_Gain1[1] = imperix_foc_ctrl_P.Gain1_Gain * rtb_Fr_idx_0;
  rtb_Gain1[2] = imperix_foc_ctrl_P.Gain1_Gain * rtb_im_idx_1;

  // S-Function (TUNABLE_PARAM): '<S469>/S-Function'
  imperix_foc_ctrl_B.SFunction_m = enable_KF;

  // S-Function (TUNABLE_PARAM): '<S471>/S-Function'
  imperix_foc_ctrl_B.SFunction_fs = reset_KF;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   UnitDelay: '<S52>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S21>:1'
  // '<S21>:1:12'
  // '<S21>:1:13'
  rtb_im_idx_0 = 0.0;
  rtb_Fr_idx_0 = 0.0;
  rtb_im_idx_1 = 0.0;
  rtb_Fr_idx_1 = 0.0;

  // '<S21>:1:14'
  rtb_Te = 0.0;
  if (imperix_foc_ctrl_B.SFunction_m != 0.0F) {
    if (imperix_foc_ctrl_B.SFunction_fs != 0.0F) {
      // '<S21>:1:21'
      imperix_foc_ctrl_DW.xt_est_apriori[0] = imperix_foc_ctrl_P.KF.x1_mu[0];
      imperix_foc_ctrl_DW.xt_est_apriori[1] = imperix_foc_ctrl_P.KF.x1_mu[1];
      imperix_foc_ctrl_DW.xt_est_apriori[2] = imperix_foc_ctrl_P.KF.x1_mu[2];
      imperix_foc_ctrl_DW.xt_est_apriori[3] = imperix_foc_ctrl_P.KF.x1_mu[3];
    }

    // '<S21>:1:25'
    memcpy(&A[0], &imperix_foc_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

    // '<S21>:1:26'
    A[12] = imperix_foc_ctrl_P.KF.A[12] * rtb_Gain5;

    // '<S21>:1:27'
    A[9] = imperix_foc_ctrl_P.KF.A[9] * rtb_Gain5;

    // '<S21>:1:28'
    A[14] = imperix_foc_ctrl_P.KF.A[14] * rtb_Gain5;

    // '<S21>:1:29'
    A[11] = imperix_foc_ctrl_P.KF.A[11] * rtb_Gain5;

    // '<S21>:1:30'
    idx_2 = 0.5 * imperix_foc_ctrl_P.KF.Ts;
    for (k = 0; k < 16; k++) {
      M[k] = idx_2 * A[k] + imperix_foc_ctrl_DW.Inx[k];
    }

    // '<S21>:1:31'
    // '<S21>:1:39'
    // '<S21>:1:69'
    // '<S21>:1:57'
    for (k = 0; k < 200; k++) {
      varargin_1[k] = fabs(imperix_foc_ctrl_P.KF.we_list[k] - rtb_Gain5);
    }

    if (!rtIsNaN(varargin_1[0])) {
      k = 1;
    } else {
      k = 0;
      idx_1 = 2;
      exitg1 = false;
      while ((!exitg1) && (idx_1 < 201)) {
        if (!rtIsNaN(varargin_1[idx_1 - 1])) {
          k = idx_1;
          exitg1 = true;
        } else {
          idx_1++;
        }
      }
    }

    if (k == 0) {
      iindx = 1;
    } else {
      idx_2 = varargin_1[k - 1];
      iindx = k;
      for (idx_1 = k + 1; idx_1 < 201; idx_1++) {
        rtb_im_idx_0 = varargin_1[idx_1 - 1];
        if (idx_2 > rtb_im_idx_0) {
          idx_2 = rtb_im_idx_0;
          iindx = idx_1;
        }
      }
    }

    // '<S21>:1:57'
    idx_1 = iindx - 1;

    // '<S21>:1:58'
    idx_2 = rtb_Gain5 - imperix_foc_ctrl_P.KF.we_list[iindx - 1];
    if (rtIsNaN(idx_2)) {
      idx_2 = (rtNaN);
    } else if (idx_2 < 0.0) {
      idx_2 = -1.0;
    } else {
      idx_2 = (idx_2 > 0.0);
    }

    idx_2 += static_cast<real_T>(iindx);

    // '<S21>:1:60'
    tmp_1 = rtIsNaN(idx_2);
    if ((iindx <= idx_2) || tmp_1) {
      k = iindx;
    } else {
      k = static_cast<int32_T>(idx_2);
    }

    if (k == 0) {
      // '<S21>:1:61'
      // '<S21>:1:62'
      idx_1 = iindx;

      // '<S21>:1:63'
      idx_2++;
    } else {
      if ((iindx >= idx_2) || tmp_1) {
        k = iindx;
      } else {
        k = static_cast<int32_T>(idx_2);
      }

      if (k == 201) {
        // '<S21>:1:64'
        // '<S21>:1:65'
        idx_1 = iindx - 2;

        // '<S21>:1:66'
        idx_2--;
      }
    }

    // '<S21>:1:69'
    // '<S21>:1:70'
    // '<S21>:1:72'
    rtb_Fr_idx_0 = imperix_foc_ctrl_P.KF.we_list[1] -
      imperix_foc_ctrl_P.KF.we_list[0];

    // '<S21>:1:73'
    rtb_im_idx_0 = fabs(rtb_Gain5 - imperix_foc_ctrl_P.KF.we_list[static_cast<
                        int32_T>(idx_2) - 1]) / rtb_Fr_idx_0;

    // '<S21>:1:74'
    rtb_Fr_idx_0 = fabs(rtb_Gain5 - imperix_foc_ctrl_P.KF.we_list[idx_1]) /
      rtb_Fr_idx_0;

    // '<S21>:1:76'
    // '<S21>:1:40'
    rtb_im_idx_1 = imperix_foc_ctrl_DW.xt_est_apriori[1];
    rtb_Fr_idx_1 = imperix_foc_ctrl_DW.xt_est_apriori[0];
    rtb_Te = imperix_foc_ctrl_DW.xt_est_apriori[2];
    rtb_Gain5 = imperix_foc_ctrl_DW.xt_est_apriori[3];
    for (k = 0; k < 2; k++) {
      iindx = k << 2;
      b_a_tmp = ((static_cast<int32_T>(idx_2) - 1) << 3) + iindx;
      b_a_tmp_0 = (idx_1 << 3) + iindx;
      b_a[iindx] = imperix_foc_ctrl_P.KF.gain_schedule[b_a_tmp] * rtb_Fr_idx_0 +
        imperix_foc_ctrl_P.KF.gain_schedule[b_a_tmp_0] * rtb_im_idx_0;
      b_a[iindx + 1] = imperix_foc_ctrl_P.KF.gain_schedule[b_a_tmp + 1] *
        rtb_Fr_idx_0 + imperix_foc_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 1] *
        rtb_im_idx_0;
      b_a[iindx + 2] = imperix_foc_ctrl_P.KF.gain_schedule[b_a_tmp + 2] *
        rtb_Fr_idx_0 + imperix_foc_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 2] *
        rtb_im_idx_0;
      b_a[iindx + 3] = imperix_foc_ctrl_P.KF.gain_schedule[b_a_tmp + 3] *
        rtb_Fr_idx_0 + imperix_foc_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 3] *
        rtb_im_idx_0;
      rtb_Gain1_0[k] = rtb_Gain1[k] - (((imperix_foc_ctrl_P.KF.C[k + 2] *
        rtb_im_idx_1 + imperix_foc_ctrl_P.KF.C[k] * rtb_Fr_idx_1) +
        imperix_foc_ctrl_P.KF.C[k + 4] * rtb_Te) + imperix_foc_ctrl_P.KF.C[k + 6]
        * rtb_Gain5);
    }

    // '<S21>:1:43'
    // '<S21>:1:44'
    idx_2 = rtb_Gain1_0[1];
    rtb_im_idx_0 = rtb_Gain1_0[0];
    for (k = 0; k < 4; k++) {
      xt_est[k] = (b_a[k + 4] * idx_2 + b_a[k] * rtb_im_idx_0) +
        imperix_foc_ctrl_DW.xt_est_apriori[k];
    }

    for (idx_1 = 0; idx_1 < 4; idx_1++) {
      iindx = idx_1 << 2;
      rtb_Fr_idx_1 = M[iindx + 1];
      rtb_Te = M[iindx];
      rtb_Gain5 = M[iindx + 2];
      rtb_Sum2 = M[iindx + 3];
      for (k = 0; k < 4; k++) {
        b_a_tmp = iindx + k;
        tmp_0[b_a_tmp] = (((A[k + 4] * imperix_foc_ctrl_P.KF.Ts * rtb_Fr_idx_1 +
                            imperix_foc_ctrl_P.KF.Ts * A[k] * rtb_Te) + A[k + 8]
                           * imperix_foc_ctrl_P.KF.Ts * rtb_Gain5) + A[k + 12] *
                          imperix_foc_ctrl_P.KF.Ts * rtb_Sum2) +
          imperix_foc_ctrl_DW.Inx[b_a_tmp];
      }
    }

    for (k = 0; k < 2; k++) {
      rtb_Fr_idx_1 = 0.0;
      rtb_Te = 0.0;
      rtb_Gain5 = 0.0;
      rtb_Sum2 = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        idx_2 = imperix_foc_ctrl_P.KF.B[(k << 2) + idx_1];
        iindx = idx_1 << 2;
        rtb_Fr_idx_1 += M[iindx] * idx_2;
        rtb_Te += M[iindx + 1] * idx_2;
        rtb_Gain5 += M[iindx + 2] * idx_2;
        rtb_Sum2 += M[iindx + 3] * idx_2;
      }

      iindx = k << 2;
      b_a[iindx + 3] = rtb_Sum2;
      b_a[iindx + 2] = rtb_Gain5;
      b_a[iindx + 1] = rtb_Te;
      b_a[iindx] = rtb_Fr_idx_1;
    }

    for (k = 0; k < 8; k++) {
      M_0[k] = b_a[k] * imperix_foc_ctrl_P.KF.Ts;
    }

    rtb_im_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    rtb_im_idx_1 = 0.0;
    rtb_Sum_g = 0.0;
    for (k = 0; k < 4; k++) {
      idx_2 = xt_est[k];
      idx_1 = k << 2;
      rtb_im_idx_0 += tmp_0[idx_1] * idx_2;
      rtb_Fr_idx_0 += tmp_0[idx_1 + 1] * idx_2;
      rtb_im_idx_1 += tmp_0[idx_1 + 2] * idx_2;
      rtb_Sum_g += tmp_0[idx_1 + 3] * idx_2;
    }

    rtb_Fr_idx_1 = 0.0;
    rtb_Te = 0.0;
    rtb_Gain5 = 0.0;
    rtb_Sum2 = 0.0;
    for (k = 0; k < 2; k++) {
      idx_2 = imperix_foc_ctrl_DW.UnitDelay_DSTATE[k];
      iindx = k << 2;
      rtb_Fr_idx_1 += M_0[iindx] * idx_2;
      rtb_Te += M_0[iindx + 1] * idx_2;
      rtb_Gain5 += M_0[iindx + 2] * idx_2;
      rtb_Sum2 += M_0[iindx + 3] * idx_2;
    }

    imperix_foc_ctrl_DW.xt_est_apriori[0] = rtb_im_idx_0 + rtb_Fr_idx_1;
    imperix_foc_ctrl_DW.xt_est_apriori[1] = rtb_Fr_idx_0 + rtb_Te;
    imperix_foc_ctrl_DW.xt_est_apriori[2] = rtb_im_idx_1 + rtb_Gain5;
    imperix_foc_ctrl_DW.xt_est_apriori[3] = rtb_Sum_g + rtb_Sum2;

    // '<S21>:1:45'
    // '<S21>:1:48'
    // '<S21>:1:49'
    rtb_im_idx_0 = xt_est[0];
    rtb_Fr_idx_0 = xt_est[2];
    rtb_im_idx_1 = xt_est[1];
    rtb_Fr_idx_1 = xt_est[3];

    // '<S21>:1:50'
    rtb_Te = (xt_est[0] * xt_est[3] - xt_est[1] * xt_est[2]) *
      -imperix_foc_ctrl_P.IM.kT;
  } else {
    // '<S21>:1:16'
  }

  // End of MATLAB Function: '<S1>/Kalman Filter'

  // ComplexToMagnitudeAngle: '<S54>/Complex to Magnitude-Angle' incorporates:
  //   RealImagToComplex: '<S54>/Real-Imag to Complex'

  rtb_Gain5 = rt_hypotd_snf(rtb_Fr_idx_0, rtb_Fr_idx_1);
  idx_2 = rt_atan2d_snf(rtb_Fr_idx_1, rtb_Fr_idx_0);

  // Sum: '<S48>/Sum2'
  rtb_Sum2 = rtb_F - rtb_Gain5;

  // DiscreteIntegrator: '<S190>/Integrator'
  if ((imperix_foc_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_foc_ctrl_DW.Integrator_PrevResetState_h != 0)) {
    imperix_foc_ctrl_DW.Integrator_DSTATE_k =
      imperix_foc_ctrl_P.FluxPI_InitialConditionForInteg;
  }

  // Sum: '<S199>/Sum' incorporates:
  //   DiscreteIntegrator: '<S190>/Integrator'
  //   Gain: '<S195>/Proportional Gain'

  rtb_Sum_g = imperix_foc_ctrl_P.FOC.kp_F * rtb_Sum2 +
    imperix_foc_ctrl_DW.Integrator_DSTATE_k;

  // Saturate: '<S197>/Saturation'
  if (rtb_Sum_g > imperix_foc_ctrl_P.FOC.u_max) {
    rtb_Saturation_j = imperix_foc_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_g < -imperix_foc_ctrl_P.FOC.u_max) {
    rtb_Saturation_j = -imperix_foc_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_j = rtb_Sum_g;
  }

  // End of Saturate: '<S197>/Saturation'

  // RelationalOperator: '<S405>/Compare' incorporates:
  //   Constant: '<S403>/Constant'
  //   Constant: '<S405>/Constant'

  rtb_Compare = (imperix_foc_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_foc_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S403>/Subsystem1' incorporates:
  //   EnablePort: '<S408>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S408>/Fcn' incorporates:
    //   Fcn: '<S408>/Fcn1'

    rtb_Switch_f_idx_0 = sin(idx_2);
    rtb_Switch_f_idx_1 = cos(idx_2);

    // Fcn: '<S408>/Fcn'
    imperix_foc_ctrl_B.Fcn = rtb_Gain1[0] * rtb_Switch_f_idx_1 + rtb_Gain1[1] *
      rtb_Switch_f_idx_0;

    // Fcn: '<S408>/Fcn1'
    imperix_foc_ctrl_B.Fcn1 = -rtb_Gain1[0] * rtb_Switch_f_idx_0 + rtb_Gain1[1] *
      rtb_Switch_f_idx_1;
  }

  // End of Outputs for SubSystem: '<S403>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S403>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S407>/Enable'

  // RelationalOperator: '<S406>/Compare' incorporates:
  //   Constant: '<S403>/Constant'
  //   Constant: '<S406>/Constant'

  if (imperix_foc_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_foc_ctrl_P.CompareToConstant1_const) {
    // Fcn: '<S407>/Fcn' incorporates:
    //   Fcn: '<S407>/Fcn1'

    rtb_Switch_f_idx_0 = cos(idx_2);
    rtb_Switch_f_idx_1 = sin(idx_2);

    // Fcn: '<S407>/Fcn'
    imperix_foc_ctrl_B.Fcn_o = rtb_Gain1[0] * rtb_Switch_f_idx_1 - rtb_Gain1[1] *
      rtb_Switch_f_idx_0;

    // Fcn: '<S407>/Fcn1'
    imperix_foc_ctrl_B.Fcn1_l = rtb_Gain1[0] * rtb_Switch_f_idx_0 + rtb_Gain1[1]
      * rtb_Switch_f_idx_1;
  }

  // End of RelationalOperator: '<S406>/Compare'
  // End of Outputs for SubSystem: '<S403>/Subsystem - pi//2 delay'

  // Switch: '<S403>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_f_idx_0 = imperix_foc_ctrl_B.Fcn;
    rtb_Switch_f_idx_1 = imperix_foc_ctrl_B.Fcn1;
  } else {
    rtb_Switch_f_idx_0 = imperix_foc_ctrl_B.Fcn_o;
    rtb_Switch_f_idx_1 = imperix_foc_ctrl_B.Fcn1_l;
  }

  // End of Switch: '<S403>/Switch'

  // Sum: '<S52>/Sum6'
  rtb_Sum6 = rtb_Saturation_j - rtb_Switch_f_idx_0;

  // DiscreteIntegrator: '<S317>/Integrator'
  if ((imperix_foc_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_foc_ctrl_DW.Integrator_PrevResetState_p != 0)) {
    imperix_foc_ctrl_DW.Integrator_DSTATE_h =
      imperix_foc_ctrl_P.MCCPId_InitialConditionForInteg;
  }

  // Sum: '<S326>/Sum' incorporates:
  //   DiscreteIntegrator: '<S317>/Integrator'
  //   Gain: '<S322>/Proportional Gain'

  rtb_Sum_o = imperix_foc_ctrl_P.MCC.kp * rtb_Sum6 +
    imperix_foc_ctrl_DW.Integrator_DSTATE_h;

  // Saturate: '<S324>/Saturation'
  if (rtb_Sum_o > imperix_foc_ctrl_P.MCC.u_max) {
    rtb_Saturation_o = imperix_foc_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_o < -imperix_foc_ctrl_P.MCC.u_max) {
    rtb_Saturation_o = -imperix_foc_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_o = rtb_Sum_o;
  }

  // End of Saturate: '<S324>/Saturation'

  // Sum: '<S52>/Sum' incorporates:
  //   Product: '<S52>/Product1'

  rtb_Sum_i = rtb_Saturation_o - rtb_Gain11 * rtb_Saturation;

  // Sum: '<S52>/Sum8'
  rtb_Sum8 = rtb_Saturation - rtb_Switch_f_idx_1;

  // DiscreteIntegrator: '<S369>/Integrator'
  if ((imperix_foc_ctrl_B.SFunction_c != 0.0F) ||
      (imperix_foc_ctrl_DW.Integrator_PrevResetState_b != 0)) {
    imperix_foc_ctrl_DW.Integrator_DSTATE_m =
      imperix_foc_ctrl_P.MCCPIq_InitialConditionForInteg;
  }

  // Sum: '<S378>/Sum' incorporates:
  //   DiscreteIntegrator: '<S369>/Integrator'
  //   Gain: '<S374>/Proportional Gain'

  rtb_Sum_k = imperix_foc_ctrl_P.MCC.kp * rtb_Sum8 +
    imperix_foc_ctrl_DW.Integrator_DSTATE_m;

  // Saturate: '<S376>/Saturation'
  if (rtb_Sum_k > imperix_foc_ctrl_P.MCC.u_max) {
    rtb_Saturation_hi = imperix_foc_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_k < -imperix_foc_ctrl_P.MCC.u_max) {
    rtb_Saturation_hi = -imperix_foc_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_hi = rtb_Sum_k;
  }

  // End of Saturate: '<S376>/Saturation'

  // Sum: '<S52>/Sum1' incorporates:
  //   Product: '<S52>/Product'

  rtb_Gain11 = rtb_Saturation_j * rtb_Gain11 + rtb_Saturation_hi;

  // RelationalOperator: '<S387>/Compare' incorporates:
  //   Constant: '<S282>/Constant'
  //   Constant: '<S387>/Constant'

  rtb_Compare = (imperix_foc_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_foc_ctrl_P.CompareToConstant_const_d);

  // Outputs for Enabled SubSystem: '<S282>/Subsystem1' incorporates:
  //   EnablePort: '<S390>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S390>/Fcn' incorporates:
    //   Fcn: '<S390>/Fcn1'

    rtb_Gain3_idx_0 = sin(idx_2);
    rtb_Gain3_idx_1 = cos(idx_2);

    // Fcn: '<S390>/Fcn'
    imperix_foc_ctrl_B.Fcn_ou = rtb_Sum_i * rtb_Gain3_idx_1 - rtb_Gain11 *
      rtb_Gain3_idx_0;

    // Fcn: '<S390>/Fcn1'
    imperix_foc_ctrl_B.Fcn1_f = rtb_Sum_i * rtb_Gain3_idx_0 + rtb_Gain11 *
      rtb_Gain3_idx_1;
  }

  // End of Outputs for SubSystem: '<S282>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S282>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S389>/Enable'

  // RelationalOperator: '<S388>/Compare' incorporates:
  //   Constant: '<S282>/Constant'
  //   Constant: '<S388>/Constant'

  if (imperix_foc_ctrl_P.dq0toAlphaBetaZero_Alignment ==
      imperix_foc_ctrl_P.CompareToConstant1_const_j) {
    // Fcn: '<S389>/Fcn' incorporates:
    //   Fcn: '<S389>/Fcn1'

    rtb_Gain3_idx_0 = cos(idx_2);
    idx_2 = sin(idx_2);

    // Fcn: '<S389>/Fcn'
    imperix_foc_ctrl_B.Fcn_b = rtb_Sum_i * idx_2 + rtb_Gain11 * rtb_Gain3_idx_0;

    // Fcn: '<S389>/Fcn1'
    imperix_foc_ctrl_B.Fcn1_i = -rtb_Sum_i * rtb_Gain3_idx_0 + rtb_Gain11 *
      idx_2;
  }

  // End of RelationalOperator: '<S388>/Compare'
  // End of Outputs for SubSystem: '<S282>/Subsystem - pi//2 delay'

  // Switch: '<S282>/Switch' incorporates:
  //   UnitDelay: '<S52>/Unit Delay'

  if (rtb_Compare != 0) {
    imperix_foc_ctrl_DW.UnitDelay_DSTATE[0] = imperix_foc_ctrl_B.Fcn_ou;
    imperix_foc_ctrl_DW.UnitDelay_DSTATE[1] = imperix_foc_ctrl_B.Fcn1_f;
  } else {
    imperix_foc_ctrl_DW.UnitDelay_DSTATE[0] = imperix_foc_ctrl_B.Fcn_b;
    imperix_foc_ctrl_DW.UnitDelay_DSTATE[1] = imperix_foc_ctrl_B.Fcn1_i;
  }

  // End of Switch: '<S282>/Switch'

  // SignalConversion generated from: '<S279>/Gain3' incorporates:
  //   UnitDelay: '<S52>/Unit Delay'

  tmp[0] = imperix_foc_ctrl_DW.UnitDelay_DSTATE[0];
  tmp[1] = imperix_foc_ctrl_DW.UnitDelay_DSTATE[1];
  tmp[2] = 0.0;

  // Gain: '<S279>/Gain3'
  rtb_Gain3_idx_0 = 0.0;
  rtb_Gain3_idx_1 = 0.0;
  rtb_Gain3_idx_2 = 0.0;
  for (k = 0; k < 3; k++) {
    idx_2 = tmp[k];
    rtb_Gain3_idx_0 += imperix_foc_ctrl_P.Gain3_Gain_b[3 * k] * idx_2;
    rtb_Gain3_idx_1 += imperix_foc_ctrl_P.Gain3_Gain_b[3 * k + 1] * idx_2;
    rtb_Gain3_idx_2 += imperix_foc_ctrl_P.Gain3_Gain_b[3 * k + 2] * idx_2;
  }

  // End of Gain: '<S279>/Gain3'

  // Sum: '<S12>/Sum1' incorporates:
  //   Constant: '<S12>/vP'

  // MATLAB Function 'Closed_loop_control/Modulation index': '<S22>:1'
  // '<S22>:1:4'
  rtb_VectorConcatenate2[0] = imperix_foc_ctrl_P.M2C.Ax_max - rtb_Gain3_idx_0;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S12>/vP'
  //   Sum: '<S12>/Sum1'
  //   Sum: '<S12>/Sum2'

  rtb_VectorConcatenate2[3] = -((0.0 - imperix_foc_ctrl_P.M2C.Ax_max) -
    rtb_Gain3_idx_0);

  // Sum: '<S12>/Sum1' incorporates:
  //   Constant: '<S12>/vP'

  rtb_VectorConcatenate2[1] = imperix_foc_ctrl_P.M2C.Ax_max - rtb_Gain3_idx_1;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S12>/vP'
  //   Sum: '<S12>/Sum1'
  //   Sum: '<S12>/Sum2'

  rtb_VectorConcatenate2[4] = -((0.0 - imperix_foc_ctrl_P.M2C.Ax_max) -
    rtb_Gain3_idx_1);

  // Sum: '<S12>/Sum1' incorporates:
  //   Constant: '<S12>/vP'

  rtb_VectorConcatenate2[2] = imperix_foc_ctrl_P.M2C.Ax_max - rtb_Gain3_idx_2;

  // MATLAB Function: '<S1>/Modulation index' incorporates:
  //   Constant: '<S12>/vP'
  //   Sum: '<S12>/Sum1'
  //   Sum: '<S12>/Sum2'

  rtb_VectorConcatenate2[5] = -((0.0 - imperix_foc_ctrl_P.M2C.Ax_max) -
    rtb_Gain3_idx_2);

  // '<S22>:1:8'
  for (k = 0; k < 6; k++) {
    idx_2 = rtb_VectorConcatenate2[k] / 520.0;
    if (!(idx_2 >= 0.0)) {
      idx_2 = 0.0;
    }

    if (!(idx_2 <= 1.0)) {
      idx_2 = 1.0;
    }

    rtb_VectorConcatenate2[k] = idx_2;

    // Gain: '<S1>/Gain'
    rtb_Gain[k] = imperix_foc_ctrl_P.Gain_Gain * idx_2;
  }

  // DataTypeConversion: '<S93>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1 = static_cast<real32_T>(rtb_Gain[4]);

  // S-Function (DAC): '<S93>/DAC'
  Dac_SetVoltage(1, imperix_foc_ctrl_B.DataTypeConversion1, 0);

  // DataTypeConversion: '<S95>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>(rtb_Gain[5]);

  // S-Function (DAC): '<S95>/DAC'
  Dac_SetVoltage(2, imperix_foc_ctrl_B.DataTypeConversion1_l, 0);

  // DataTypeConversion: '<S97>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_la = static_cast<real32_T>(rtb_Gain[0]);

  // S-Function (DAC): '<S97>/DAC'
  Dac_SetVoltage(0, imperix_foc_ctrl_B.DataTypeConversion1_la, 1);

  // DataTypeConversion: '<S99>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>(rtb_Gain[1]);

  // S-Function (DAC): '<S99>/DAC'
  Dac_SetVoltage(1, imperix_foc_ctrl_B.DataTypeConversion1_p, 1);

  // DataTypeConversion: '<S101>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>(rtb_Gain[2]);

  // S-Function (DAC): '<S101>/DAC'
  Dac_SetVoltage(2, imperix_foc_ctrl_B.DataTypeConversion1_a, 1);

  // DataTypeConversion: '<S103>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>(rtb_Gain[3]);

  // S-Function (DAC): '<S103>/DAC'
  Dac_SetVoltage(3, imperix_foc_ctrl_B.DataTypeConversion1_e, 1);

  // S-Function (ADC): '<S70>/ADC'
  imperix_foc_ctrl_B.ADC_g = (float)(*ix_raw_adc_ptr_2_0) * 6.1035E-5F + 0.0F;

  // DataTypeConversion: '<S1>/Cast To Double3'
  imperix_foc_ctrl_MovingAverage(static_cast<real_T>(imperix_foc_ctrl_B.ADC_g),
    &imperix_foc_ctrl_B.MovingAverage, &imperix_foc_ctrl_DW.MovingAverage);

  // Outputs for Triggered SubSystem: '<S51>/Sample and Hold' incorporates:
  //   TriggerPort: '<S278>/Trigger'

  zcEvent = rt_R32ZCFcn(RISING_ZERO_CROSSING,
                        &imperix_foc_ctrl_PrevZCX.SampleandHold_Trig_ZCE_h,
                        (imperix_foc_ctrl_B.SFunction_k));
  if (zcEvent != NO_ZCEVENT) {
    // SignalConversion generated from: '<S278>/In'
    imperix_foc_ctrl_B.In_g = imperix_foc_ctrl_B.MovingAverage.MovingAverage;
  }

  // End of Outputs for SubSystem: '<S51>/Sample and Hold'

  // DataTypeConversion: '<S105>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double3'
  //   Gain: '<S1>/Gain11'
  //   Sum: '<S51>/Sum1'

  imperix_foc_ctrl_B.DataTypeConversion = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.TN * (imperix_foc_ctrl_B.ADC_g -
    imperix_foc_ctrl_B.In_g));

  // S-Function (PROBE): '<S105>/S-Function'
  Te = imperix_foc_ctrl_B.DataTypeConversion;

  // Gain: '<S1>/Gain9'
  idx_2 = 1.0 / (1.4142135623730951 * imperix_foc_ctrl_P.IM.IN);

  // DataTypeConversion: '<S107>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_foc_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(idx_2 *
    rtb_Gain1[0]);

  // S-Function (PROBE): '<S107>/S-Function'
  im_alp = imperix_foc_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S109>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_foc_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(idx_2 *
    rtb_Gain1[1]);

  // S-Function (PROBE): '<S109>/S-Function'
  im_bet = imperix_foc_ctrl_B.DataTypeConversion_i;

  // DataTypeConversion: '<S111>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'

  imperix_foc_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.FrN * rtb_Gain5);

  // S-Function (PROBE): '<S111>/S-Function'
  Frd = imperix_foc_ctrl_B.DataTypeConversion_p;

  // Gain: '<S1>/Gain1'
  idx_2 = 1.0 / imperix_foc_ctrl_P.M2C.is_max;
  for (k = 0; k < 6; k++) {
    rtb_Gain1_k[k] *= idx_2;
  }

  // End of Gain: '<S1>/Gain1'

  // DataTypeConversion: '<S113>/Data Type Conversion'
  imperix_foc_ctrl_B.DataTypeConversion_id = static_cast<real32_T>(rtb_Gain1_k[0]);

  // S-Function (PROBE): '<S113>/S-Function'
  is1 = imperix_foc_ctrl_B.DataTypeConversion_id;

  // Gain: '<S1>/Gain16'
  idx_2 = 1.0 / imperix_foc_ctrl_P.MCC.u_max;

  // DataTypeConversion: '<S115>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_foc_ctrl_B.DataTypeConversion_m = static_cast<real32_T>(idx_2 *
    rtb_Gain11);

  // S-Function (PROBE): '<S115>/S-Function'
  vm_q = imperix_foc_ctrl_B.DataTypeConversion_m;

  // DataTypeConversion: '<S117>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'

  imperix_foc_ctrl_B.DataTypeConversion_d = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.FrN * rtb_F);

  // S-Function (PROBE): '<S117>/S-Function'
  Frd_r = imperix_foc_ctrl_B.DataTypeConversion_d;

  // DataTypeConversion: '<S119>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain7'

  imperix_foc_ctrl_B.DataTypeConversion_pw = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.wN * rtb_w);

  // S-Function (PROBE): '<S119>/S-Function'
  wm_r = imperix_foc_ctrl_B.DataTypeConversion_pw;

  // DataTypeConversion: '<S121>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'

  imperix_foc_ctrl_B.DataTypeConversion_mx = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.isdN * rtb_Switch_f_idx_0);

  // S-Function (PROBE): '<S121>/S-Function'
  im_d = imperix_foc_ctrl_B.DataTypeConversion_mx;

  // DataTypeConversion: '<S123>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'

  imperix_foc_ctrl_B.DataTypeConversion_l = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.isdN * rtb_Saturation_j);

  // S-Function (PROBE): '<S123>/S-Function'
  imd_r = imperix_foc_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S125>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain2'

  imperix_foc_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.isqN * rtb_Switch_f_idx_1);

  // S-Function (PROBE): '<S125>/S-Function'
  im_q = imperix_foc_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S127>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain3'

  imperix_foc_ctrl_B.DataTypeConversion_d4 = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.isqN * rtb_Saturation);

  // S-Function (PROBE): '<S127>/S-Function'
  imq_r = imperix_foc_ctrl_B.DataTypeConversion_d4;

  // DataTypeConversion: '<S129>/Data Type Conversion'
  imperix_foc_ctrl_B.DataTypeConversion_pw0 = static_cast<real32_T>(rtb_Gain1_k
    [1]);

  // S-Function (PROBE): '<S129>/S-Function'
  is2 = imperix_foc_ctrl_B.DataTypeConversion_pw0;

  // DataTypeConversion: '<S131>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_foc_ctrl_B.DataTypeConversion_ez = static_cast<real32_T>(idx_2 *
    rtb_Sum_i);

  // S-Function (PROBE): '<S131>/S-Function'
  vm_d = imperix_foc_ctrl_B.DataTypeConversion_ez;

  // Gain: '<S1>/Gain18'
  idx_2 = 1.0 / (imperix_foc_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S133>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_foc_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(idx_2 *
    rtb_im_idx_1);

  // S-Function (PROBE): '<S133>/S-Function'
  im_bet_KF = imperix_foc_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S135>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_foc_ctrl_B.DataTypeConversion_ir = static_cast<real32_T>(idx_2 *
    rtb_im_idx_0);

  // S-Function (PROBE): '<S135>/S-Function'
  im_alp_KF = imperix_foc_ctrl_B.DataTypeConversion_ir;

  // Gain: '<S1>/Gain19'
  idx_2 = 1.0 / imperix_foc_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S137>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_foc_ctrl_B.DataTypeConversion_d5 = static_cast<real32_T>(idx_2 *
    rtb_Fr_idx_1);

  // S-Function (PROBE): '<S137>/S-Function'
  Fr_bet = imperix_foc_ctrl_B.DataTypeConversion_d5;

  // DataTypeConversion: '<S139>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_foc_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(idx_2 *
    rtb_Fr_idx_0);

  // S-Function (PROBE): '<S139>/S-Function'
  Fr_alp = imperix_foc_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S141>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain23'

  imperix_foc_ctrl_B.DataTypeConversion_fy = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.TN * rtb_Te);

  // S-Function (PROBE): '<S141>/S-Function'
  Te_KF = imperix_foc_ctrl_B.DataTypeConversion_fy;

  // DataTypeConversion: '<S143>/Data Type Conversion'
  imperix_foc_ctrl_B.DataTypeConversion_fo = static_cast<real32_T>(rtb_Gain1_k[2]);

  // S-Function (PROBE): '<S143>/S-Function'
  is3 = imperix_foc_ctrl_B.DataTypeConversion_fo;

  // DataTypeConversion: '<S145>/Data Type Conversion'
  imperix_foc_ctrl_B.DataTypeConversion_fs = static_cast<real32_T>(rtb_Gain1_k[3]);

  // S-Function (PROBE): '<S145>/S-Function'
  is4 = imperix_foc_ctrl_B.DataTypeConversion_fs;

  // DataTypeConversion: '<S147>/Data Type Conversion'
  imperix_foc_ctrl_B.DataTypeConversion_ba = static_cast<real32_T>(rtb_Gain1_k[4]);

  // S-Function (PROBE): '<S147>/S-Function'
  is5 = imperix_foc_ctrl_B.DataTypeConversion_ba;

  // DataTypeConversion: '<S149>/Data Type Conversion'
  imperix_foc_ctrl_B.DataTypeConversion_fz = static_cast<real32_T>(rtb_Gain1_k[5]);

  // S-Function (PROBE): '<S149>/S-Function'
  is6 = imperix_foc_ctrl_B.DataTypeConversion_fz;

  // DataTypeConversion: '<S151>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain4'

  imperix_foc_ctrl_B.DataTypeConversion_bg = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.IM.wN * rtb_Gain4);

  // S-Function (PROBE): '<S151>/S-Function'
  wm = imperix_foc_ctrl_B.DataTypeConversion_bg;

  // DataTypeConversion: '<S153>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain6'

  imperix_foc_ctrl_B.DataTypeConversion_pq = static_cast<real32_T>(1.0 /
    imperix_foc_ctrl_P.M2C.ix_max * rtb_Gain1_a[0]);

  // S-Function (PROBE): '<S153>/S-Function'
  iP = imperix_foc_ctrl_B.DataTypeConversion_pq;

  // Saturate: '<S86>/Saturation'
  if (imperix_foc_ctrl_P.Saturation_UpperSat < 0.0F) {
    // Saturate: '<S86>/Saturation'
    imperix_foc_ctrl_B.Saturation = imperix_foc_ctrl_P.Saturation_UpperSat;
  } else if (imperix_foc_ctrl_P.Saturation_LowerSat > 0.0F) {
    // Saturate: '<S86>/Saturation'
    imperix_foc_ctrl_B.Saturation = imperix_foc_ctrl_P.Saturation_LowerSat;
  } else {
    // Saturate: '<S86>/Saturation'
    imperix_foc_ctrl_B.Saturation = 0.0F;
  }

  // End of Saturate: '<S86>/Saturation'
  // DataTypeConversion: '<S260>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_le = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S260>/Data Type Conversion2' incorporates:
  //   Constant: '<S260>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2 = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value);

  // S-Function (TUNABLE_PARAM): '<S463>/S-Function'
  imperix_foc_ctrl_B.SFunction_c4 = enable_FP;

  // Outputs for Atomic SubSystem: '<S264>/generation'
  // S-Function (CB_PWM): '<S265>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_foc_ctrl_B.DataTypeConversion1_le,
                     1);

  // End of Outputs for SubSystem: '<S264>/generation'

  // DataTypeConversion: '<S261>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S260>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_pv = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S261>/Data Type Conversion2' incorporates:
  //   Constant: '<S261>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_o);

  // Outputs for Atomic SubSystem: '<S266>/generation'
  // S-Function (CB_PWM): '<S267>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_foc_ctrl_B.DataTypeConversion1_pv,
                     1);

  // End of Outputs for SubSystem: '<S266>/generation'

  // DataTypeConversion: '<S262>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S260>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S262>/Data Type Conversion2' incorporates:
  //   Constant: '<S262>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_l);

  // Outputs for Atomic SubSystem: '<S268>/generation'
  // S-Function (CB_PWM): '<S269>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_foc_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S268>/generation'

  // DataTypeConversion: '<S263>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S260>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (rtb_VectorConcatenate2[1]);

  // DataTypeConversion: '<S263>/Data Type Conversion2' incorporates:
  //   Constant: '<S263>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_oo);

  // Outputs for Atomic SubSystem: '<S270>/generation'
  // S-Function (CB_PWM): '<S271>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_foc_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S270>/generation'

  // DataTypeConversion: '<S391>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S391>/Data Type Conversion2' incorporates:
  //   Constant: '<S391>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_p);

  // Outputs for Atomic SubSystem: '<S395>/generation'
  // S-Function (CB_PWM): '<S396>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_foc_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S395>/generation'

  // DataTypeConversion: '<S392>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S391>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_eo = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S392>/Data Type Conversion2' incorporates:
  //   Constant: '<S392>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_pr);

  // Outputs for Atomic SubSystem: '<S397>/generation'
  // S-Function (CB_PWM): '<S398>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_foc_ctrl_B.DataTypeConversion1_eo,
                     0);

  // End of Outputs for SubSystem: '<S397>/generation'

  // DataTypeConversion: '<S393>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S391>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S393>/Data Type Conversion2' incorporates:
  //   Constant: '<S393>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_c);

  // Outputs for Atomic SubSystem: '<S399>/generation'
  // S-Function (CB_PWM): '<S400>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_foc_ctrl_B.DataTypeConversion1_po,
                     0);

  // End of Outputs for SubSystem: '<S399>/generation'

  // DataTypeConversion: '<S394>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S391>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (rtb_VectorConcatenate2[2]);

  // DataTypeConversion: '<S394>/Data Type Conversion2' incorporates:
  //   Constant: '<S394>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_ll);

  // Outputs for Atomic SubSystem: '<S401>/generation'
  // S-Function (CB_PWM): '<S402>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_foc_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S401>/generation'

  // DataTypeConversion: '<S409>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S409>/Data Type Conversion2' incorporates:
  //   Constant: '<S409>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_n);

  // Outputs for Atomic SubSystem: '<S413>/generation'
  // S-Function (CB_PWM): '<S414>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_foc_ctrl_B.DataTypeConversion1_h3,
                     0);

  // End of Outputs for SubSystem: '<S413>/generation'

  // DataTypeConversion: '<S410>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S409>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S410>/Data Type Conversion2' incorporates:
  //   Constant: '<S410>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_k);

  // Outputs for Atomic SubSystem: '<S415>/generation'
  // S-Function (CB_PWM): '<S416>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_foc_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S415>/generation'

  // DataTypeConversion: '<S411>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S409>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S411>/Data Type Conversion2' incorporates:
  //   Constant: '<S411>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_py);

  // Outputs for Atomic SubSystem: '<S417>/generation'
  // S-Function (CB_PWM): '<S418>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_foc_ctrl_B.DataTypeConversion1_fz,
                     0);

  // End of Outputs for SubSystem: '<S417>/generation'

  // DataTypeConversion: '<S412>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S409>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (rtb_VectorConcatenate2[3]);

  // DataTypeConversion: '<S412>/Data Type Conversion2' incorporates:
  //   Constant: '<S412>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_ng);

  // Outputs for Atomic SubSystem: '<S419>/generation'
  // S-Function (CB_PWM): '<S420>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_foc_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S419>/generation'

  // DataTypeConversion: '<S421>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S421>/Data Type Conversion2' incorporates:
  //   Constant: '<S421>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_j);

  // Outputs for Atomic SubSystem: '<S425>/generation'
  // S-Function (CB_PWM): '<S426>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_foc_ctrl_B.DataTypeConversion1_al,
                     0);

  // End of Outputs for SubSystem: '<S425>/generation'

  // DataTypeConversion: '<S422>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S421>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S422>/Data Type Conversion2' incorporates:
  //   Constant: '<S422>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_of);

  // Outputs for Atomic SubSystem: '<S427>/generation'
  // S-Function (CB_PWM): '<S428>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_foc_ctrl_B.DataTypeConversion1_k,
                     0);

  // End of Outputs for SubSystem: '<S427>/generation'

  // DataTypeConversion: '<S423>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S421>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S423>/Data Type Conversion2' incorporates:
  //   Constant: '<S423>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_h);

  // Outputs for Atomic SubSystem: '<S429>/generation'
  // S-Function (CB_PWM): '<S430>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_foc_ctrl_B.DataTypeConversion1_l4,
                     0);

  // End of Outputs for SubSystem: '<S429>/generation'

  // DataTypeConversion: '<S424>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S421>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (rtb_VectorConcatenate2[4]);

  // DataTypeConversion: '<S424>/Data Type Conversion2' incorporates:
  //   Constant: '<S424>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_nc);

  // Outputs for Atomic SubSystem: '<S431>/generation'
  // S-Function (CB_PWM): '<S432>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_foc_ctrl_B.DataTypeConversion1_bg,
                     0);

  // End of Outputs for SubSystem: '<S431>/generation'

  // DataTypeConversion: '<S433>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S433>/Data Type Conversion2' incorporates:
  //   Constant: '<S433>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_f);

  // Outputs for Atomic SubSystem: '<S437>/generation'
  // S-Function (CB_PWM): '<S438>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_foc_ctrl_B.DataTypeConversion1_d,
                     0);

  // End of Outputs for SubSystem: '<S437>/generation'

  // DataTypeConversion: '<S434>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S433>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S434>/Data Type Conversion2' incorporates:
  //   Constant: '<S434>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_i);

  // Outputs for Atomic SubSystem: '<S439>/generation'
  // S-Function (CB_PWM): '<S440>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_foc_ctrl_B.DataTypeConversion1_o,
                     0);

  // End of Outputs for SubSystem: '<S439>/generation'

  // DataTypeConversion: '<S435>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S433>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S435>/Data Type Conversion2' incorporates:
  //   Constant: '<S435>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_a);

  // Outputs for Atomic SubSystem: '<S441>/generation'
  // S-Function (CB_PWM): '<S442>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_foc_ctrl_B.DataTypeConversion1_ay,
                     0);

  // End of Outputs for SubSystem: '<S441>/generation'

  // DataTypeConversion: '<S436>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S433>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (rtb_VectorConcatenate2[5]);

  // DataTypeConversion: '<S436>/Data Type Conversion2' incorporates:
  //   Constant: '<S436>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_ns);

  // Outputs for Atomic SubSystem: '<S443>/generation'
  // S-Function (CB_PWM): '<S444>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_foc_ctrl_B.DataTypeConversion1_pf,
                     0);

  // End of Outputs for SubSystem: '<S443>/generation'

  // DataTypeConversion: '<S446>/Data Type Conversion1'
  imperix_foc_ctrl_B.DataTypeConversion1_als = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S446>/Data Type Conversion2' incorporates:
  //   Constant: '<S446>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_fa);

  // Outputs for Atomic SubSystem: '<S450>/generation'
  // S-Function (CB_PWM): '<S451>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_foc_ctrl_B.DataTypeConversion1_als,
                     1);

  // End of Outputs for SubSystem: '<S450>/generation'

  // DataTypeConversion: '<S447>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S446>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S447>/Data Type Conversion2' incorporates:
  //   Constant: '<S447>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_hr);

  // Outputs for Atomic SubSystem: '<S452>/generation'
  // S-Function (CB_PWM): '<S453>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_foc_ctrl_B.DataTypeConversion1_ig,
                     1);

  // End of Outputs for SubSystem: '<S452>/generation'

  // DataTypeConversion: '<S448>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S446>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S448>/Data Type Conversion2' incorporates:
  //   Constant: '<S448>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_at);

  // Outputs for Atomic SubSystem: '<S454>/generation'
  // S-Function (CB_PWM): '<S455>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_foc_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S454>/generation'

  // DataTypeConversion: '<S449>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S446>/Data Type Conversion1'

  imperix_foc_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (rtb_VectorConcatenate2[0]);

  // DataTypeConversion: '<S449>/Data Type Conversion2' incorporates:
  //   Constant: '<S449>/phase'

  imperix_foc_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_foc_ctrl_P.phase_Value_cq);

  // Outputs for Atomic SubSystem: '<S456>/generation'
  // S-Function (CB_PWM): '<S457>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  if (imperix_foc_ctrl_B.SFunction_c4 > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_foc_ctrl_B.DataTypeConversion1_gw,
                     1);

  // End of Outputs for SubSystem: '<S456>/generation'

  // Update for DiscreteIntegrator: '<S242>/Integrator' incorporates:
  //   Gain: '<S234>/Kb'
  //   Gain: '<S239>/Integral Gain'
  //   Sum: '<S234>/SumI2'
  //   Sum: '<S234>/SumI4'

  if (imperix_foc_ctrl_B.SFunction_c == 0.0F) {
    imperix_foc_ctrl_DW.Integrator_DSTATE += (2.0 * imperix_foc_ctrl_P.FOC.kp_w *
      (rtb_Saturation - rtb_Sum_j) + imperix_foc_ctrl_P.FOC.ki_w * rtb_Sum1_od) *
      imperix_foc_ctrl_P.Integrator_gainval;
  }

  if (imperix_foc_ctrl_B.SFunction_c > 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState = 1;
  } else if (imperix_foc_ctrl_B.SFunction_c < 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState = -1;
  } else if (imperix_foc_ctrl_B.SFunction_c == 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState = 0;
  } else {
    imperix_foc_ctrl_DW.Integrator_PrevResetState = 2;
  }

  // End of Update for DiscreteIntegrator: '<S242>/Integrator'

  // Update for DiscreteIntegrator: '<S190>/Integrator' incorporates:
  //   Gain: '<S182>/Kb'
  //   Gain: '<S187>/Integral Gain'
  //   Sum: '<S182>/SumI2'
  //   Sum: '<S182>/SumI4'

  if (imperix_foc_ctrl_B.SFunction_c == 0.0F) {
    imperix_foc_ctrl_DW.Integrator_DSTATE_k += (2.0 *
      imperix_foc_ctrl_P.FOC.kp_F * (rtb_Saturation_j - rtb_Sum_g) +
      imperix_foc_ctrl_P.FOC.ki_F * rtb_Sum2) *
      imperix_foc_ctrl_P.Integrator_gainval_g;
  }

  if (imperix_foc_ctrl_B.SFunction_c > 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_h = 1;
  } else if (imperix_foc_ctrl_B.SFunction_c < 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_h = -1;
  } else if (imperix_foc_ctrl_B.SFunction_c == 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_h = 0;
  } else {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_h = 2;
  }

  // End of Update for DiscreteIntegrator: '<S190>/Integrator'

  // Update for DiscreteIntegrator: '<S317>/Integrator' incorporates:
  //   Gain: '<S309>/Kb'
  //   Gain: '<S314>/Integral Gain'
  //   Sum: '<S309>/SumI2'
  //   Sum: '<S309>/SumI4'

  if (imperix_foc_ctrl_B.SFunction_c == 0.0F) {
    imperix_foc_ctrl_DW.Integrator_DSTATE_h += ((rtb_Saturation_o - rtb_Sum_o) *
      imperix_foc_ctrl_P.MCC.kp + imperix_foc_ctrl_P.MCC.ki * rtb_Sum6) *
      imperix_foc_ctrl_P.Integrator_gainval_h;
  }

  if (imperix_foc_ctrl_B.SFunction_c > 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_p = 1;
  } else if (imperix_foc_ctrl_B.SFunction_c < 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_p = -1;
  } else if (imperix_foc_ctrl_B.SFunction_c == 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_p = 0;
  } else {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_p = 2;
  }

  // End of Update for DiscreteIntegrator: '<S317>/Integrator'

  // Update for DiscreteIntegrator: '<S369>/Integrator' incorporates:
  //   Gain: '<S361>/Kb'
  //   Gain: '<S366>/Integral Gain'
  //   Sum: '<S361>/SumI2'
  //   Sum: '<S361>/SumI4'

  if (imperix_foc_ctrl_B.SFunction_c == 0.0F) {
    imperix_foc_ctrl_DW.Integrator_DSTATE_m += ((rtb_Saturation_hi - rtb_Sum_k) *
      imperix_foc_ctrl_P.MCC.kp + imperix_foc_ctrl_P.MCC.ki * rtb_Sum8) *
      imperix_foc_ctrl_P.Integrator_gainval_b;
  }

  if (imperix_foc_ctrl_B.SFunction_c > 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_b = 1;
  } else if (imperix_foc_ctrl_B.SFunction_c < 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_b = -1;
  } else if (imperix_foc_ctrl_B.SFunction_c == 0.0F) {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_b = 0;
  } else {
    imperix_foc_ctrl_DW.Integrator_PrevResetState_b = 2;
  }

  // End of Update for DiscreteIntegrator: '<S369>/Integrator'
}

// Model initialize function
void imperix_foc_ctrl_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // Start for S-Function (TUNABLE_PARAM): '<S459>/S-Function'
  F_ref = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S465>/S-Function'
  w_ref = 0.0F;                        // Tunable parameter initialization
  ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

  // Start for S-Function (ADC): '<S78>/ADC'
  Adc_ConfigureInput(3, 0.0047937F, 0.0F, 0);
  Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);
  imperix_foc_MovingAverage_Start(&imperix_foc_ctrl_DW.MovingAverage_p);

  // Start for S-Function (TUNABLE_PARAM): '<S461>/S-Function'
  reset_mean = 0.0F;                   // Tunable parameter initialization
  ConfigureTunable(&reset_mean, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S467>/S-Function'
  reset_PI = 1.0F;                     // Tunable parameter initialization
  ConfigureTunable(&reset_PI, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (ADC): '<S80>/ADC'
  Adc_ConfigureInput(7, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

  // Start for S-Function (ADC): '<S82>/ADC'
  Adc_ConfigureInput(6, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

  // Start for S-Function (ADC): '<S72>/ADC'
  Adc_ConfigureInput(5, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

  // Start for S-Function (ADC): '<S84>/ADC'
  Adc_ConfigureInput(4, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

  // Start for S-Function (ADC): '<S74>/ADC'
  Adc_ConfigureInput(3, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

  // Start for S-Function (ADC): '<S76>/ADC'
  Adc_ConfigureInput(2, 0.00030518F, 0.0F, 2);
  Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);

  // Start for S-Function (TUNABLE_PARAM): '<S469>/S-Function'
  enable_KF = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_KF, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S471>/S-Function'
  reset_KF = 1.0F;                     // Tunable parameter initialization
  ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

  // Start for S-Function (ADC): '<S70>/ADC'
  Adc_ConfigureInput(2, 6.1035E-5F, 0.0F, 0);
  Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);
  imperix_foc_MovingAverage_Start(&imperix_foc_ctrl_DW.MovingAverage);

  // Start for S-Function (PROBE): '<S105>/S-Function'
  ConfigureProbe(&Te, 0);

  // Start for S-Function (PROBE): '<S107>/S-Function'
  ConfigureProbe(&im_alp, 0);

  // Start for S-Function (PROBE): '<S109>/S-Function'
  ConfigureProbe(&im_bet, 0);

  // Start for S-Function (PROBE): '<S111>/S-Function'
  ConfigureProbe(&Frd, 0);

  // Start for S-Function (PROBE): '<S113>/S-Function'
  ConfigureProbe(&is1, 0);

  // Start for S-Function (PROBE): '<S115>/S-Function'
  ConfigureProbe(&vm_q, 0);

  // Start for S-Function (PROBE): '<S117>/S-Function'
  ConfigureProbe(&Frd_r, 0);

  // Start for S-Function (PROBE): '<S119>/S-Function'
  ConfigureProbe(&wm_r, 0);

  // Start for S-Function (PROBE): '<S121>/S-Function'
  ConfigureProbe(&im_d, 0);

  // Start for S-Function (PROBE): '<S123>/S-Function'
  ConfigureProbe(&imd_r, 0);

  // Start for S-Function (PROBE): '<S125>/S-Function'
  ConfigureProbe(&im_q, 0);

  // Start for S-Function (PROBE): '<S127>/S-Function'
  ConfigureProbe(&imq_r, 0);

  // Start for S-Function (PROBE): '<S129>/S-Function'
  ConfigureProbe(&is2, 0);

  // Start for S-Function (PROBE): '<S131>/S-Function'
  ConfigureProbe(&vm_d, 0);

  // Start for S-Function (PROBE): '<S133>/S-Function'
  ConfigureProbe(&im_bet_KF, 0);

  // Start for S-Function (PROBE): '<S135>/S-Function'
  ConfigureProbe(&im_alp_KF, 0);

  // Start for S-Function (PROBE): '<S137>/S-Function'
  ConfigureProbe(&Fr_bet, 0);

  // Start for S-Function (PROBE): '<S139>/S-Function'
  ConfigureProbe(&Fr_alp, 0);

  // Start for S-Function (PROBE): '<S141>/S-Function'
  ConfigureProbe(&Te_KF, 0);

  // Start for S-Function (PROBE): '<S143>/S-Function'
  ConfigureProbe(&is3, 0);

  // Start for S-Function (PROBE): '<S145>/S-Function'
  ConfigureProbe(&is4, 0);

  // Start for S-Function (PROBE): '<S147>/S-Function'
  ConfigureProbe(&is5, 0);

  // Start for S-Function (PROBE): '<S149>/S-Function'
  ConfigureProbe(&is6, 0);

  // Start for S-Function (PROBE): '<S151>/S-Function'
  ConfigureProbe(&wm, 0);

  // Start for S-Function (PROBE): '<S153>/S-Function'
  ConfigureProbe(&iP, 0);

  // Start for S-Function (CLK): '<S86>/CLK1'
  Clock_SetFrequency((tClock) 1, 1500.0F);

  // Start for S-Function (IRQ): '<S89>/S-Function' incorporates:
  //   Constant: '<S91>/clk_id'

  ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
    imperix_foc_ctrl_P.clk_id_Value_o, 0.5F, 0U);
  ConfigureReadTriggerDelayInNs(2000U);
  Adc_SetUserOversampling(0.0F);

  // Start for S-Function (CLK): '<S91>/CLK1'
  Clock_SetFrequency((tClock) 0, 6000.0F);

  // Start for S-Function (TUNABLE_PARAM): '<S463>/S-Function'
  enable_FP = 0.0F;                    // Tunable parameter initialization
  ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

  // Start for Atomic SubSystem: '<S264>/generation'

  // Start for S-Function (CB_PWM): '<S265>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
  CbPwm_Activate((tPwmOutput) 2, 1);

  // End of Start for SubSystem: '<S264>/generation'

  // Start for Atomic SubSystem: '<S266>/generation'

  // Start for S-Function (CB_PWM): '<S267>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
  CbPwm_Activate((tPwmOutput) 6, 1);

  // End of Start for SubSystem: '<S266>/generation'

  // Start for Atomic SubSystem: '<S268>/generation'

  // Start for S-Function (CB_PWM): '<S269>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
  CbPwm_Activate((tPwmOutput) 3, 1);

  // End of Start for SubSystem: '<S268>/generation'

  // Start for Atomic SubSystem: '<S270>/generation'

  // Start for S-Function (CB_PWM): '<S271>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
  CbPwm_Activate((tPwmOutput) 7, 1);

  // End of Start for SubSystem: '<S270>/generation'

  // Start for Atomic SubSystem: '<S395>/generation'

  // Start for S-Function (CB_PWM): '<S396>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
  CbPwm_Activate((tPwmOutput) 0, 0);

  // End of Start for SubSystem: '<S395>/generation'

  // Start for Atomic SubSystem: '<S397>/generation'

  // Start for S-Function (CB_PWM): '<S398>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
  CbPwm_Activate((tPwmOutput) 4, 0);

  // End of Start for SubSystem: '<S397>/generation'

  // Start for Atomic SubSystem: '<S399>/generation'

  // Start for S-Function (CB_PWM): '<S400>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
  CbPwm_Activate((tPwmOutput) 1, 0);

  // End of Start for SubSystem: '<S399>/generation'

  // Start for Atomic SubSystem: '<S401>/generation'

  // Start for S-Function (CB_PWM): '<S402>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
  CbPwm_Activate((tPwmOutput) 5, 0);

  // End of Start for SubSystem: '<S401>/generation'

  // Start for Atomic SubSystem: '<S413>/generation'

  // Start for S-Function (CB_PWM): '<S414>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
  CbPwm_Activate((tPwmOutput) 2, 0);

  // End of Start for SubSystem: '<S413>/generation'

  // Start for Atomic SubSystem: '<S415>/generation'

  // Start for S-Function (CB_PWM): '<S416>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
  CbPwm_Activate((tPwmOutput) 6, 0);

  // End of Start for SubSystem: '<S415>/generation'

  // Start for Atomic SubSystem: '<S417>/generation'

  // Start for S-Function (CB_PWM): '<S418>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
  CbPwm_Activate((tPwmOutput) 3, 0);

  // End of Start for SubSystem: '<S417>/generation'

  // Start for Atomic SubSystem: '<S419>/generation'

  // Start for S-Function (CB_PWM): '<S420>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
  CbPwm_Activate((tPwmOutput) 7, 0);

  // End of Start for SubSystem: '<S419>/generation'

  // Start for Atomic SubSystem: '<S425>/generation'

  // Start for S-Function (CB_PWM): '<S426>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
  CbPwm_Activate((tPwmOutput) 8, 0);

  // End of Start for SubSystem: '<S425>/generation'

  // Start for Atomic SubSystem: '<S427>/generation'

  // Start for S-Function (CB_PWM): '<S428>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 12, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 12, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
  CbPwm_Activate((tPwmOutput) 12, 0);

  // End of Start for SubSystem: '<S427>/generation'

  // Start for Atomic SubSystem: '<S429>/generation'

  // Start for S-Function (CB_PWM): '<S430>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 9, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
  CbPwm_Activate((tPwmOutput) 9, 0);

  // End of Start for SubSystem: '<S429>/generation'

  // Start for Atomic SubSystem: '<S431>/generation'

  // Start for S-Function (CB_PWM): '<S432>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 13, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
  CbPwm_Activate((tPwmOutput) 13, 0);

  // End of Start for SubSystem: '<S431>/generation'

  // Start for Atomic SubSystem: '<S437>/generation'

  // Start for S-Function (CB_PWM): '<S438>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 10, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 10, 0.75F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
  CbPwm_Activate((tPwmOutput) 10, 0);

  // End of Start for SubSystem: '<S437>/generation'

  // Start for Atomic SubSystem: '<S439>/generation'

  // Start for S-Function (CB_PWM): '<S440>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 14, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 14, 0.5F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
  CbPwm_Activate((tPwmOutput) 14, 0);

  // End of Start for SubSystem: '<S439>/generation'

  // Start for Atomic SubSystem: '<S441>/generation'

  // Start for S-Function (CB_PWM): '<S442>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 11, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 11, 0.25F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
  CbPwm_Activate((tPwmOutput) 11, 0);

  // End of Start for SubSystem: '<S441>/generation'

  // Start for Atomic SubSystem: '<S443>/generation'

  // Start for S-Function (CB_PWM): '<S444>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 15, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       0);
  CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
  CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 1, 0);
  CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
  CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
  CbPwm_Activate((tPwmOutput) 15, 0);

  // End of Start for SubSystem: '<S443>/generation'

  // Start for Atomic SubSystem: '<S450>/generation'

  // Start for S-Function (CB_PWM): '<S451>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
  CbPwm_Activate((tPwmOutput) 0, 1);

  // End of Start for SubSystem: '<S450>/generation'

  // Start for Atomic SubSystem: '<S452>/generation'

  // Start for S-Function (CB_PWM): '<S453>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
  CbPwm_Activate((tPwmOutput) 4, 1);

  // End of Start for SubSystem: '<S452>/generation'

  // Start for Atomic SubSystem: '<S454>/generation'

  // Start for S-Function (CB_PWM): '<S455>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
  CbPwm_Activate((tPwmOutput) 1, 1);

  // End of Start for SubSystem: '<S454>/generation'

  // Start for Atomic SubSystem: '<S456>/generation'

  // Start for S-Function (CB_PWM): '<S457>/PWM' incorporates:
  //   Constant: '<S86>/clk_id'

  CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_foc_ctrl_P.clk_id_Value,
                       1);
  CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
  CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
  CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 1, 1);
  CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 1);
  CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
  CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
  CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
  CbPwm_Activate((tPwmOutput) 5, 1);

  // End of Start for SubSystem: '<S456>/generation'
  imperix_foc_ctrl_PrevZCX.SampleandHold_Trig_ZCE_h = UNINITIALIZED_ZCSIG;
  imperix_foc_ctrl_PrevZCX.SampleandHold_Trig_ZCE = UNINITIALIZED_ZCSIG;

  // InitializeConditions for DiscreteIntegrator: '<S242>/Integrator'
  imperix_foc_ctrl_DW.Integrator_DSTATE =
    imperix_foc_ctrl_P.SpeedPI_InitialConditionForInte;

  // InitializeConditions for UnitDelay: '<S52>/Unit Delay'
  imperix_foc_ctrl_DW.UnitDelay_DSTATE[0] =
    imperix_foc_ctrl_P.UnitDelay_InitialCondition[0];
  imperix_foc_ctrl_DW.UnitDelay_DSTATE[1] =
    imperix_foc_ctrl_P.UnitDelay_InitialCondition[1];

  // InitializeConditions for DiscreteIntegrator: '<S190>/Integrator'
  imperix_foc_ctrl_DW.Integrator_DSTATE_k =
    imperix_foc_ctrl_P.FluxPI_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S317>/Integrator'
  imperix_foc_ctrl_DW.Integrator_DSTATE_h =
    imperix_foc_ctrl_P.MCCPId_InitialConditionForInteg;

  // InitializeConditions for DiscreteIntegrator: '<S369>/Integrator'
  imperix_foc_ctrl_DW.Integrator_DSTATE_m =
    imperix_foc_ctrl_P.MCCPIq_InitialConditionForInteg;

  // SystemInitialize for Triggered SubSystem: '<S60>/Sample and Hold'
  // SystemInitialize for SignalConversion generated from: '<S445>/In' incorporates:
  //   Outport: '<S445>/ '

  imperix_foc_ctrl_B.In = imperix_foc_ctrl_P._Y0_b;

  // End of SystemInitialize for SubSystem: '<S60>/Sample and Hold'

  // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
  memset(&imperix_foc_ctrl_DW.Inx[0], 0, sizeof(real_T) << 4U);
  imperix_foc_ctrl_DW.Inx[0] = 1.0;
  imperix_foc_ctrl_DW.Inx[5] = 1.0;
  imperix_foc_ctrl_DW.Inx[10] = 1.0;
  imperix_foc_ctrl_DW.Inx[15] = 1.0;

  // SystemInitialize for Enabled SubSystem: '<S403>/Subsystem1'
  // SystemInitialize for Fcn: '<S408>/Fcn' incorporates:
  //   Outport: '<S408>/dq'

  imperix_foc_ctrl_B.Fcn = imperix_foc_ctrl_P.dq_Y0_c[0];

  // SystemInitialize for Fcn: '<S408>/Fcn1' incorporates:
  //   Outport: '<S408>/dq'

  imperix_foc_ctrl_B.Fcn1 = imperix_foc_ctrl_P.dq_Y0_c[1];

  // End of SystemInitialize for SubSystem: '<S403>/Subsystem1'

  // SystemInitialize for Enabled SubSystem: '<S403>/Subsystem - pi//2 delay'
  // SystemInitialize for Fcn: '<S407>/Fcn' incorporates:
  //   Outport: '<S407>/dq'

  imperix_foc_ctrl_B.Fcn_o = imperix_foc_ctrl_P.dq_Y0[0];

  // SystemInitialize for Fcn: '<S407>/Fcn1' incorporates:
  //   Outport: '<S407>/dq'

  imperix_foc_ctrl_B.Fcn1_l = imperix_foc_ctrl_P.dq_Y0[1];

  // End of SystemInitialize for SubSystem: '<S403>/Subsystem - pi//2 delay'

  // SystemInitialize for Enabled SubSystem: '<S282>/Subsystem1'
  // SystemInitialize for Fcn: '<S390>/Fcn' incorporates:
  //   Outport: '<S390>/alpha_beta'

  imperix_foc_ctrl_B.Fcn_ou = imperix_foc_ctrl_P.alpha_beta_Y0_g[0];

  // SystemInitialize for Fcn: '<S390>/Fcn1' incorporates:
  //   Outport: '<S390>/alpha_beta'

  imperix_foc_ctrl_B.Fcn1_f = imperix_foc_ctrl_P.alpha_beta_Y0_g[1];

  // End of SystemInitialize for SubSystem: '<S282>/Subsystem1'

  // SystemInitialize for Enabled SubSystem: '<S282>/Subsystem - pi//2 delay'
  // SystemInitialize for Fcn: '<S389>/Fcn' incorporates:
  //   Outport: '<S389>/alpha_beta'

  imperix_foc_ctrl_B.Fcn_b = imperix_foc_ctrl_P.alpha_beta_Y0_i[0];

  // SystemInitialize for Fcn: '<S389>/Fcn1' incorporates:
  //   Outport: '<S389>/alpha_beta'

  imperix_foc_ctrl_B.Fcn1_i = imperix_foc_ctrl_P.alpha_beta_Y0_i[1];

  // End of SystemInitialize for SubSystem: '<S282>/Subsystem - pi//2 delay'

  // SystemInitialize for Triggered SubSystem: '<S51>/Sample and Hold'
  // SystemInitialize for SignalConversion generated from: '<S278>/In' incorporates:
  //   Outport: '<S278>/ '

  imperix_foc_ctrl_B.In_g = imperix_foc_ctrl_P._Y0;

  // End of SystemInitialize for SubSystem: '<S51>/Sample and Hold'
  imperix_foc__MovingAverage_Init(&imperix_foc_ctrl_DW.MovingAverage_p);
  imperix_foc__MovingAverage_Init(&imperix_foc_ctrl_DW.MovingAverage);
}

// Model terminate function
void imperix_foc_ctrl_terminate(void)
{
  imperix_foc__MovingAverage_Term(&imperix_foc_ctrl_DW.MovingAverage_p);
  imperix_foc__MovingAverage_Term(&imperix_foc_ctrl_DW.MovingAverage);
}

const char_T* RT_MODEL_imperix_foc_ctrl_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_imperix_foc_ctrl_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// End of automatically generated code
// Copyright imperix ltd. Switzerland 2021
// [EOF]
//
