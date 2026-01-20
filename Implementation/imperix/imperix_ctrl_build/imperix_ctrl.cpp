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
// Model version                  : 19.67
// Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
// C/C++ source code generated on : Tue Jan 20 15:15:51 2026
//
#include "imperix_ctrl.h"
#include "rtwtypes.h"
#include "imperix_ctrl_types.h"
#include "imperix_ctrl_private.h"
#include <string.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include <math.h>
#include "zero_crossing_types.h"
#include "rt_defines.h"

int16_T* ix_raw_adc_ptr_7_2;
int16_T* ix_raw_adc_ptr_6_2;
int16_T* ix_raw_adc_ptr_5_2;
int16_T* ix_raw_adc_ptr_4_2;
int16_T* ix_raw_adc_ptr_3_2;
int16_T* ix_raw_adc_ptr_2_2;
real32_T reset_mean;                   // Tunable parameter
real32_T is1;                          // Probe
real32_T is2;                          // Probe
int16_T* ix_raw_adc_ptr_1_2;
int16_T* ix_raw_adc_ptr_0_2;
int16_T* ix_raw_adc_ptr_7_0;
int16_T* ix_raw_adc_ptr_6_0;
int16_T* ix_raw_adc_ptr_5_0;
int16_T* ix_raw_adc_ptr_4_0;
real32_T Vc5;                          // Probe
real32_T Vc6;                          // Probe
int16_T* ix_raw_adc_ptr_3_0;
real32_T wm;                           // Probe
real32_T enable_KF;                    // Tunable parameter
real32_T reset_KF;                     // Tunable parameter
real32_T Frd;                          // Probe
real32_T Vc_m;                         // Probe
real32_T is3;                          // Probe
real32_T Vc_m_f;                       // Probe
real32_T iP_r;                         // Probe
real32_T iP;                           // Probe
real32_T F_ref;                        // Tunable parameter
real32_T w_ref;                        // Tunable parameter
real32_T reset_PI;                     // Tunable parameter
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
real32_T ws;                           // Probe
real32_T gF;                           // Probe
int16_T* ix_raw_adc_ptr_2_0;
real32_T Te;                           // Probe
real32_T is5;                          // Probe
real32_T is6;                          // Probe
real32_T Vc1;                          // Probe
real32_T Vc2;                          // Probe
real32_T Vc3;                          // Probe
real32_T Vc4;                          // Probe
real32_T enable_FP;                    // Tunable parameter
real32_T V_mag;                        // Tunable parameter
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
static void imperix_ctrl_SystemCore_setup_m(dsp_simulink_MovingAverage_im_T *obj);
static void imperix_ctrl_SystemCore_setup(dsp_simulink_MovingAverage_im_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S61>/Moving Average'
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
  // InitializeConditions for MATLABSystem: '<S61>/Moving Average'
  localDW->obj.pCumSum = 0.0;
  memset(&localDW->obj.pCumSumRev[0], 0, 99U * sizeof(real_T));
  localDW->obj.pCumRevIndex = 1.0;
  localDW->obj.pModValueRev = 0.0;
}

// Start for atomic system:
void imperix_MovingAverage_Start(DW_MovingAverage_imperix_ctrl_T *localDW)
{
  // Start for MATLABSystem: '<S61>/Moving Average'
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

  // MATLABSystem: '<S61>/Moving Average'
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  cumRevIndex = localDW->obj.pCumRevIndex;
  csum = localDW->obj.pCumSum;
  modValueRev = localDW->obj.pModValueRev;
  modIndex = 1;
  z = 0.0;
  for (int32_T i = 0; i < 6; i++) {
    // MATLABSystem: '<S61>/Moving Average'
    localB->MovingAverage[i] = 0.0;
  }

  // MATLABSystem: '<S61>/Moving Average'
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
  // Terminate for MATLABSystem: '<S61>/Moving Average'
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      localDW->obj.NumChannels = -1;
      localDW->obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S61>/Moving Average'
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

static void imperix_ctrl_SystemCore_setup_m(dsp_simulink_MovingAverage_im_T *obj)
{
  obj->isInitialized = 1;

  // Start for MATLABSystem: '<S74>/Moving Average'
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
  real_T A[16];
  real_T M[16];
  real_T tmp[16];
  real_T M_0[8];
  real_T b_a[8];
  real_T DataTypeConversion1[6];
  real_T DataTypeConversion2[6];
  real_T rtb_Gain[6];
  real_T rtb_Gain1_e[6];
  real_T rtb_Gain1_o[5];
  real_T xt_est[4];
  real_T rtb_Gain1[3];
  real_T rtb_Gain1_0[2];
  real_T D;
  real_T csum;
  real_T cumRevIndex;
  real_T idx_2;
  real_T rtb_DeadZone;
  real_T rtb_F;
  real_T rtb_Fr_idx_0;
  real_T rtb_Fr_idx_1;
  real_T rtb_IntegralGain_dr;
  real_T rtb_IntegralGain_k;
  real_T rtb_Saturation;
  real_T rtb_Saturation_f;
  real_T rtb_Saturation_h;
  real_T rtb_Saturation_i;
  real_T rtb_Sum1_c;
  real_T rtb_Sum6;
  real_T rtb_Sum8;
  real_T rtb_Sum_b;
  real_T rtb_Sum_h;
  real_T rtb_Sum_j;
  real_T rtb_Sum_m;
  real_T rtb_Sum_p;
  real_T rtb_Switch_g_idx_0;
  real_T rtb_Switch_g_idx_1;
  real_T rtb_im_idx_0;
  real_T rtb_im_idx_1;
  real_T rtb_w;
  real_T z;
  int32_T M_tmp;
  int32_T b_a_tmp;
  int32_T b_a_tmp_0;
  int32_T i;
  int32_T idx_1;
  real32_T rtb_Product2[3];
  real32_T rtb_Bias1;
  real32_T tmp_0;
  real32_T tmp_1;
  real32_T tmp_2;
  int8_T tmp_3;
  int8_T tmp_4;
  uint8_T rtb_Compare;
  boolean_T exitg1;
  boolean_T tmp_5;

  // Update the flag to indicate when data transfers from
  //   Sample time: [0.00016666666666666666s, 0.0s] to Sample time: [0.0016666666666666668s, 0.0s]  
  (imperix_ctrl_M->Timing.RateInteraction.TID0_1)++;
  if ((imperix_ctrl_M->Timing.RateInteraction.TID0_1) > 9) {
    imperix_ctrl_M->Timing.RateInteraction.TID0_1 = 0;
  }

  // S-Function (ADC): '<S106>/ADC'
  imperix_ctrl_B.ADC = (float)(*ix_raw_adc_ptr_7_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S108>/ADC'
  imperix_ctrl_B.ADC_m = (float)(*ix_raw_adc_ptr_6_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S98>/ADC'
  imperix_ctrl_B.ADC_c = (float)(*ix_raw_adc_ptr_5_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S86>/ADC'
  imperix_ctrl_B.ADC_n = (float)(*ix_raw_adc_ptr_4_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S100>/ADC'
  imperix_ctrl_B.ADC_g = (float)(*ix_raw_adc_ptr_3_2) * 0.00045776F + 0.0F;

  // S-Function (ADC): '<S102>/ADC'
  imperix_ctrl_B.ADC_p = (float)(*ix_raw_adc_ptr_2_2) * 0.00045776F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion2'
  DataTypeConversion2[0] = imperix_ctrl_B.ADC;
  DataTypeConversion2[1] = imperix_ctrl_B.ADC_m;
  DataTypeConversion2[2] = imperix_ctrl_B.ADC_c;
  DataTypeConversion2[3] = imperix_ctrl_B.ADC_n;
  DataTypeConversion2[4] = imperix_ctrl_B.ADC_g;
  DataTypeConversion2[5] = imperix_ctrl_B.ADC_p;
  imperix_ctrl_MovingAverage(DataTypeConversion2,
    &imperix_ctrl_B.MovingAverage_p, &imperix_ctrl_DW.MovingAverage_p);

  // S-Function (TUNABLE_PARAM): '<S616>/S-Function'
  imperix_ctrl_B.SFunction = reset_mean;

  // Outputs for Triggered SubSystem: '<S62>/Sample and Hold' incorporates:
  //   TriggerPort: '<S372>/Trigger'

  // DataTypeConversion: '<S1>/Cast To Double4'
  if ((imperix_ctrl_B.SFunction != 0.0F) &&
      (imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_i != POS_ZCSIG)) {
    for (i = 0; i < 6; i++) {
      // SignalConversion generated from: '<S372>/In' incorporates:
      //   MATLABSystem: '<S62>/Moving Average'

      imperix_ctrl_B.In_h[i] = imperix_ctrl_B.MovingAverage_p.MovingAverage[i];
    }
  }

  imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_i = (imperix_ctrl_B.SFunction !=
    0.0F);

  // End of Outputs for SubSystem: '<S62>/Sample and Hold'

  // Gain: '<S1>/Gain'
  idx_2 = 1.0 / imperix_ctrl_P.M2C.is_max;
  for (i = 0; i < 6; i++) {
    // Sum: '<S62>/Sum1' incorporates:
    //   SignalConversion generated from: '<S372>/In'

    D = DataTypeConversion2[i] - imperix_ctrl_B.In_h[i];
    DataTypeConversion2[i] = D;

    // Gain: '<S1>/Gain' incorporates:
    //   Sum: '<S62>/Sum1'

    rtb_Gain[i] = idx_2 * D;
  }

  // DataTypeConversion: '<S184>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion = static_cast<real32_T>(rtb_Gain[0]);

  // S-Function (PROBE): '<S184>/S-Function'
  is1 = imperix_ctrl_B.DataTypeConversion;

  // DataTypeConversion: '<S186>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_h = static_cast<real32_T>(rtb_Gain[1]);

  // S-Function (PROBE): '<S186>/S-Function'
  is2 = imperix_ctrl_B.DataTypeConversion_h;

  // S-Function (ADC): '<S94>/ADC'
  imperix_ctrl_B.ADC_o = (float)(*ix_raw_adc_ptr_1_2) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S110>/ADC'
  imperix_ctrl_B.ADC_e = (float)(*ix_raw_adc_ptr_0_2) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S88>/ADC'
  imperix_ctrl_B.ADC_l = (float)(*ix_raw_adc_ptr_7_0) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S96>/ADC'
  imperix_ctrl_B.ADC_nj = (float)(*ix_raw_adc_ptr_6_0) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S90>/ADC'
  imperix_ctrl_B.ADC_mz = (float)(*ix_raw_adc_ptr_5_0) * 0.030518F + 0.0F;

  // S-Function (ADC): '<S92>/ADC'
  imperix_ctrl_B.ADC_k = (float)(*ix_raw_adc_ptr_4_0) * 0.030518F + 0.0F;

  // DataTypeConversion: '<S1>/Data Type Conversion1'
  DataTypeConversion1[0] = imperix_ctrl_B.ADC_o;
  DataTypeConversion1[1] = imperix_ctrl_B.ADC_e;
  DataTypeConversion1[2] = imperix_ctrl_B.ADC_l;
  DataTypeConversion1[3] = imperix_ctrl_B.ADC_nj;
  DataTypeConversion1[4] = imperix_ctrl_B.ADC_mz;
  DataTypeConversion1[5] = imperix_ctrl_B.ADC_k;
  imperix_ctrl_MovingAverage(DataTypeConversion1, &imperix_ctrl_B.MovingAverage,
    &imperix_ctrl_DW.MovingAverage);

  // Outputs for Triggered SubSystem: '<S61>/Sample and Hold' incorporates:
  //   TriggerPort: '<S371>/Trigger'

  // DataTypeConversion: '<S1>/Cast To Double4'
  if ((imperix_ctrl_B.SFunction != 0.0F) &&
      (imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_f != POS_ZCSIG)) {
    for (i = 0; i < 6; i++) {
      // SignalConversion generated from: '<S371>/In' incorporates:
      //   MATLABSystem: '<S61>/Moving Average'

      imperix_ctrl_B.In_c[i] = imperix_ctrl_B.MovingAverage.MovingAverage[i];
    }
  }

  imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_f = (imperix_ctrl_B.SFunction !=
    0.0F);

  // End of Outputs for SubSystem: '<S61>/Sample and Hold'

  // Gain: '<S1>/Gain1'
  idx_2 = 1.0 / imperix_ctrl_P.M2C.Vc_ref;
  for (i = 0; i < 6; i++) {
    // Sum: '<S61>/Sum1' incorporates:
    //   SignalConversion generated from: '<S371>/In'

    z = DataTypeConversion1[i] - imperix_ctrl_B.In_c[i];
    DataTypeConversion1[i] = z;

    // Gain: '<S1>/Gain1' incorporates:
    //   Sum: '<S61>/Sum1'

    rtb_Gain1_e[i] = idx_2 * z;
  }

  // DataTypeConversion: '<S188>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_c = static_cast<real32_T>(rtb_Gain1_e[4]);

  // S-Function (PROBE): '<S188>/S-Function'
  Vc5 = imperix_ctrl_B.DataTypeConversion_c;

  // DataTypeConversion: '<S190>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_k = static_cast<real32_T>(rtb_Gain1_e[5]);

  // S-Function (PROBE): '<S190>/S-Function'
  Vc6 = imperix_ctrl_B.DataTypeConversion_k;

  // S-Function (ADC): '<S104>/ADC'
  imperix_ctrl_B.ADC_f = (float)(*ix_raw_adc_ptr_3_0) * 0.0061035F + 0.0F;

  // MATLABSystem: '<S74>/Moving Average' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  if (imperix_ctrl_DW.obj.TunablePropsChanged) {
    imperix_ctrl_DW.obj.TunablePropsChanged = false;
  }

  z = 0.0;
  idx_2 = 0.0;
  csum = imperix_ctrl_DW.obj.pCumSum + imperix_ctrl_B.ADC_f;
  if (imperix_ctrl_DW.obj.pModValueRev == 0.0) {
    z = imperix_ctrl_DW.obj.pCumSumRev[static_cast<int32_T>
      (imperix_ctrl_DW.obj.pCumRevIndex) - 1] + csum;
  }

  imperix_ctrl_DW.obj.pCumSumRev[static_cast<int32_T>
    (imperix_ctrl_DW.obj.pCumRevIndex) - 1] = imperix_ctrl_B.ADC_f;
  if (imperix_ctrl_DW.obj.pCumRevIndex != 99.0) {
    cumRevIndex = imperix_ctrl_DW.obj.pCumRevIndex + 1.0;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (i = 97; i >= 0; i--) {
      imperix_ctrl_DW.obj.pCumSumRev[i] += imperix_ctrl_DW.obj.pCumSumRev[i + 1];
    }
  }

  if (imperix_ctrl_DW.obj.pModValueRev == 0.0) {
    idx_2 = z / 100.0;
  }

  imperix_ctrl_DW.obj.pCumSum = csum;
  imperix_ctrl_DW.obj.pCumRevIndex = cumRevIndex;
  if (imperix_ctrl_DW.obj.pModValueRev > 0.0) {
    imperix_ctrl_DW.obj.pModValueRev--;
  } else {
    imperix_ctrl_DW.obj.pModValueRev = 0.0;
  }

  // Outputs for Triggered SubSystem: '<S74>/Sample and Hold' incorporates:
  //   TriggerPort: '<S600>/Trigger'

  // DataTypeConversion: '<S1>/Cast To Double4'
  if ((imperix_ctrl_B.SFunction != 0.0F) &&
      (imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE != POS_ZCSIG)) {
    // SignalConversion generated from: '<S600>/In' incorporates:
    //   MATLABSystem: '<S74>/Moving Average'

    imperix_ctrl_B.In = idx_2;
  }

  imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE = (imperix_ctrl_B.SFunction !=
    0.0F);

  // End of Outputs for SubSystem: '<S74>/Sample and Hold'

  // Sum: '<S74>/Sum1' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion36'

  z = imperix_ctrl_B.ADC_f - imperix_ctrl_B.In;

  // DataTypeConversion: '<S192>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain8'

  imperix_ctrl_B.DataTypeConversion_a = static_cast<real32_T>
    (imperix_ctrl_P.Gain8_Gain * z);

  // S-Function (PROBE): '<S192>/S-Function'
  wm = imperix_ctrl_B.DataTypeConversion_a;

  // Gain: '<S65>/Gain1'
  for (i = 0; i < 5; i++) {
    rtb_Gain1_o[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    idx_2 = DataTypeConversion2[i];
    for (idx_1 = 0; idx_1 < 5; idx_1++) {
      rtb_Gain1_o[idx_1] += imperix_ctrl_P.M2C.A[5 * i + idx_1] * idx_2;
    }
  }

  // End of Gain: '<S65>/Gain1'

  // Gain: '<S553>/Gain3' incorporates:
  //   Gain: '<S69>/Gain2'

  cumRevIndex = 0.0;
  D = 0.0;
  rtb_IntegralGain_k = 0.0;
  for (i = 0; i < 3; i++) {
    idx_2 = rtb_Gain1_o[i + 2] * imperix_ctrl_P.Gain2_Gain;
    cumRevIndex += imperix_ctrl_P.Gain3_Gain[3 * i] * idx_2;
    D += imperix_ctrl_P.Gain3_Gain[3 * i + 1] * idx_2;
    rtb_IntegralGain_k += imperix_ctrl_P.Gain3_Gain[3 * i + 2] * idx_2;
  }

  // End of Gain: '<S553>/Gain3'

  // Gain: '<S553>/Gain1'
  rtb_Gain1[0] = imperix_ctrl_P.Gain1_Gain * cumRevIndex;
  rtb_Gain1[1] = imperix_ctrl_P.Gain1_Gain * D;
  rtb_Gain1[2] = imperix_ctrl_P.Gain1_Gain * rtb_IntegralGain_k;

  // Gain: '<S1>/Gain3'
  csum = imperix_ctrl_P.IM.np * z;

  // S-Function (TUNABLE_PARAM): '<S622>/S-Function'
  imperix_ctrl_B.SFunction_e = enable_KF;

  // S-Function (TUNABLE_PARAM): '<S626>/S-Function'
  imperix_ctrl_B.SFunction_o = reset_KF;

  // MATLAB Function: '<S1>/Kalman Filter' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double3'
  //   DataTypeConversion: '<S1>/Cast To Double6'
  //   UnitDelay: '<S63>/Unit Delay'

  // MATLAB Function 'Closed_loop_control/Kalman Filter': '<S20>:1'
  // '<S20>:1:14'
  if (!imperix_ctrl_DW.xt_est_apriori_not_empty) {
    // '<S20>:1:7'
    // '<S20>:1:8'
    imperix_ctrl_DW.xt_est_apriori[0] = imperix_ctrl_P.KF.x1_mu[0];
    imperix_ctrl_DW.xt_est_apriori[1] = imperix_ctrl_P.KF.x1_mu[1];
    imperix_ctrl_DW.xt_est_apriori[2] = imperix_ctrl_P.KF.x1_mu[2];
    imperix_ctrl_DW.xt_est_apriori[3] = imperix_ctrl_P.KF.x1_mu[3];
    imperix_ctrl_DW.xt_est_apriori_not_empty = true;

    // '<S20>:1:9'
    memcpy(&imperix_ctrl_DW.C[0], &imperix_ctrl_P.KF.C[0], sizeof(real_T) << 3U);

    // '<S20>:1:10'
  }

  // '<S20>:1:14'
  // '<S20>:1:15'
  rtb_im_idx_0 = 0.0;
  rtb_Fr_idx_0 = 0.0;
  rtb_im_idx_1 = 0.0;
  rtb_Fr_idx_1 = 0.0;

  // '<S20>:1:16'
  if (imperix_ctrl_B.SFunction_e != 0.0F) {
    if (imperix_ctrl_B.SFunction_o != 0.0F) {
      // '<S20>:1:22'
      // '<S20>:1:23'
      imperix_ctrl_DW.xt_est_apriori[0] = imperix_ctrl_P.KF.x1_mu[0];
      imperix_ctrl_DW.xt_est_apriori[1] = imperix_ctrl_P.KF.x1_mu[1];
      imperix_ctrl_DW.xt_est_apriori[2] = imperix_ctrl_P.KF.x1_mu[2];
      imperix_ctrl_DW.xt_est_apriori[3] = imperix_ctrl_P.KF.x1_mu[3];
    }

    // '<S20>:1:27'
    memcpy(&A[0], &imperix_ctrl_P.KF.A[0], sizeof(real_T) << 4U);

    // '<S20>:1:28'
    A[12] = imperix_ctrl_P.KF.A[12] * csum;

    // '<S20>:1:29'
    A[9] = imperix_ctrl_P.KF.A[9] * csum;

    // '<S20>:1:30'
    A[14] = imperix_ctrl_P.KF.A[14] * csum;

    // '<S20>:1:31'
    A[11] = imperix_ctrl_P.KF.A[11] * csum;

    // '<S20>:1:32'
    idx_2 = 0.5 * imperix_ctrl_P.KF.Ts;
    cumRevIndex = imperix_ctrl_DW.Inx[0];
    D = imperix_ctrl_DW.Inx[1];
    rtb_IntegralGain_k = imperix_ctrl_DW.Inx[2];
    rtb_DeadZone = imperix_ctrl_DW.Inx[3];
    for (i = 0; i < 4; i++) {
      M_tmp = i << 2;
      M[M_tmp] = A[M_tmp] * idx_2 + cumRevIndex;
      M[M_tmp + 1] = A[M_tmp + 1] * idx_2 + D;
      M[M_tmp + 2] = A[M_tmp + 2] * idx_2 + rtb_IntegralGain_k;
      M[M_tmp + 3] = A[M_tmp + 3] * idx_2 + rtb_DeadZone;
    }

    // '<S20>:1:33'
    // '<S20>:1:41'
    // '<S20>:1:72'
    // '<S20>:1:60'
    for (i = 0; i < 200; i++) {
      varargin_1[i] = fabs(imperix_ctrl_P.KF.we_list[i] - csum);
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
      M_tmp = 1;
    } else {
      idx_2 = varargin_1[i - 1];
      M_tmp = i;
      for (idx_1 = i + 1; idx_1 < 201; idx_1++) {
        cumRevIndex = varargin_1[idx_1 - 1];
        if (idx_2 > cumRevIndex) {
          idx_2 = cumRevIndex;
          M_tmp = idx_1;
        }
      }
    }

    // '<S20>:1:60'
    idx_1 = M_tmp - 1;

    // '<S20>:1:61'
    idx_2 = csum - imperix_ctrl_P.KF.we_list[M_tmp - 1];
    if (rtIsNaN(idx_2)) {
      idx_2 = (rtNaN);
    } else if (idx_2 < 0.0) {
      idx_2 = -1.0;
    } else {
      idx_2 = (idx_2 > 0.0);
    }

    idx_2 += static_cast<real_T>(M_tmp);

    // '<S20>:1:63'
    tmp_5 = rtIsNaN(idx_2);
    if ((M_tmp <= idx_2) || tmp_5) {
      i = M_tmp;
    } else {
      i = static_cast<int32_T>(idx_2);
    }

    if (i == 0) {
      // '<S20>:1:64'
      // '<S20>:1:65'
      idx_1 = M_tmp;

      // '<S20>:1:66'
      idx_2++;
    } else {
      if ((M_tmp >= idx_2) || tmp_5) {
        i = M_tmp;
      } else {
        i = static_cast<int32_T>(idx_2);
      }

      if (i == 201) {
        // '<S20>:1:67'
        // '<S20>:1:68'
        idx_1 = M_tmp - 2;

        // '<S20>:1:69'
        idx_2--;
      }
    }

    // '<S20>:1:72'
    // '<S20>:1:73'
    // '<S20>:1:75'
    D = imperix_ctrl_P.KF.we_list[1] - imperix_ctrl_P.KF.we_list[0];

    // '<S20>:1:76'
    cumRevIndex = fabs(csum - imperix_ctrl_P.KF.we_list[static_cast<int32_T>
                       (idx_2) - 1]) / D;

    // '<S20>:1:77'
    D = fabs(csum - imperix_ctrl_P.KF.we_list[idx_1]) / D;

    // '<S20>:1:79'
    // '<S20>:1:42'
    rtb_IntegralGain_k = imperix_ctrl_DW.xt_est_apriori[1];
    rtb_DeadZone = imperix_ctrl_DW.xt_est_apriori[0];
    rtb_IntegralGain_dr = imperix_ctrl_DW.xt_est_apriori[2];
    rtb_im_idx_0 = imperix_ctrl_DW.xt_est_apriori[3];
    for (i = 0; i < 2; i++) {
      M_tmp = i << 2;
      b_a_tmp = ((static_cast<int32_T>(idx_2) - 1) << 3) + M_tmp;
      b_a_tmp_0 = (idx_1 << 3) + M_tmp;
      b_a[M_tmp] = imperix_ctrl_P.KF.gain_schedule[b_a_tmp] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp_0] * cumRevIndex;
      b_a[M_tmp + 1] = imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 1] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 1] * cumRevIndex;
      b_a[M_tmp + 2] = imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 2] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 2] * cumRevIndex;
      b_a[M_tmp + 3] = imperix_ctrl_P.KF.gain_schedule[b_a_tmp + 3] * D +
        imperix_ctrl_P.KF.gain_schedule[b_a_tmp_0 + 3] * cumRevIndex;
      rtb_Gain1_0[i] = rtb_Gain1[i] - (((imperix_ctrl_DW.C[i + 2] *
        rtb_IntegralGain_k + imperix_ctrl_DW.C[i] * rtb_DeadZone) +
        imperix_ctrl_DW.C[i + 4] * rtb_IntegralGain_dr) + imperix_ctrl_DW.C[i +
        6] * rtb_im_idx_0);
    }

    // '<S20>:1:45'
    // '<S20>:1:46'
    for (i = 0; i < 4; i++) {
      xt_est[i] = (b_a[i + 4] * rtb_Gain1_0[1] + b_a[i] * rtb_Gain1_0[0]) +
        imperix_ctrl_DW.xt_est_apriori[i];
      idx_2 = 0.0;
      cumRevIndex = 0.0;
      D = 0.0;
      rtb_IntegralGain_k = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        rtb_DeadZone = M[(i << 2) + idx_1];
        M_tmp = idx_1 << 2;
        idx_2 += A[M_tmp] * imperix_ctrl_P.KF.Ts * rtb_DeadZone;
        cumRevIndex += A[M_tmp + 1] * imperix_ctrl_P.KF.Ts * rtb_DeadZone;
        D += A[M_tmp + 2] * imperix_ctrl_P.KF.Ts * rtb_DeadZone;
        rtb_IntegralGain_k += A[M_tmp + 3] * imperix_ctrl_P.KF.Ts * rtb_DeadZone;
      }

      idx_1 = i << 2;
      tmp[idx_1] = idx_2 + imperix_ctrl_DW.Inx[0];
      tmp[idx_1 + 1] = cumRevIndex + imperix_ctrl_DW.Inx[1];
      tmp[idx_1 + 2] = D + imperix_ctrl_DW.Inx[2];
      tmp[idx_1 + 3] = rtb_IntegralGain_k + imperix_ctrl_DW.Inx[3];
    }

    for (i = 0; i < 2; i++) {
      rtb_DeadZone = 0.0;
      rtb_IntegralGain_dr = 0.0;
      rtb_im_idx_0 = 0.0;
      rtb_Fr_idx_0 = 0.0;
      for (idx_1 = 0; idx_1 < 4; idx_1++) {
        idx_2 = imperix_ctrl_P.KF.B[(i << 2) + idx_1];
        M_tmp = idx_1 << 2;
        rtb_DeadZone += M[M_tmp] * idx_2;
        rtb_IntegralGain_dr += M[M_tmp + 1] * idx_2;
        rtb_im_idx_0 += M[M_tmp + 2] * idx_2;
        rtb_Fr_idx_0 += M[M_tmp + 3] * idx_2;
      }

      M_tmp = i << 2;
      b_a[M_tmp + 3] = rtb_Fr_idx_0;
      b_a[M_tmp + 2] = rtb_im_idx_0;
      b_a[M_tmp + 1] = rtb_IntegralGain_dr;
      b_a[M_tmp] = rtb_DeadZone;
    }

    for (i = 0; i < 8; i++) {
      M_0[i] = b_a[i] * imperix_ctrl_P.KF.Ts;
    }

    cumRevIndex = 0.0;
    D = 0.0;
    rtb_IntegralGain_k = 0.0;
    rtb_im_idx_1 = 0.0;
    for (i = 0; i < 4; i++) {
      idx_2 = xt_est[i];
      idx_1 = i << 2;
      cumRevIndex += tmp[idx_1] * idx_2;
      D += tmp[idx_1 + 1] * idx_2;
      rtb_IntegralGain_k += tmp[idx_1 + 2] * idx_2;
      rtb_im_idx_1 += tmp[idx_1 + 3] * idx_2;
    }

    rtb_DeadZone = 0.0;
    rtb_IntegralGain_dr = 0.0;
    rtb_im_idx_0 = 0.0;
    rtb_Fr_idx_0 = 0.0;
    for (i = 0; i < 2; i++) {
      idx_2 = imperix_ctrl_DW.UnitDelay_DSTATE[i];
      M_tmp = i << 2;
      rtb_DeadZone += M_0[M_tmp] * idx_2;
      rtb_IntegralGain_dr += M_0[M_tmp + 1] * idx_2;
      rtb_im_idx_0 += M_0[M_tmp + 2] * idx_2;
      rtb_Fr_idx_0 += M_0[M_tmp + 3] * idx_2;
    }

    imperix_ctrl_DW.xt_est_apriori[0] = cumRevIndex + rtb_DeadZone;
    imperix_ctrl_DW.xt_est_apriori[1] = D + rtb_IntegralGain_dr;
    imperix_ctrl_DW.xt_est_apriori[2] = rtb_IntegralGain_k + rtb_im_idx_0;
    imperix_ctrl_DW.xt_est_apriori[3] = rtb_im_idx_1 + rtb_Fr_idx_0;

    // '<S20>:1:47'
    // '<S20>:1:50'
    // '<S20>:1:51'
    rtb_im_idx_0 = xt_est[0];
    rtb_Fr_idx_0 = xt_est[2];
    rtb_im_idx_1 = xt_est[1];
    rtb_Fr_idx_1 = xt_est[3];

    // '<S20>:1:52'
  } else {
    // '<S20>:1:18'
  }

  // End of MATLAB Function: '<S1>/Kalman Filter'

  // ComplexToMagnitudeAngle: '<S66>/Complex to Magnitude-Angle' incorporates:
  //   RealImagToComplex: '<S66>/Real-Imag to Complex'

  cumRevIndex = rt_hypotd_snf(rtb_Fr_idx_0, rtb_Fr_idx_1);
  D = rt_atan2d_snf(rtb_Fr_idx_1, rtb_Fr_idx_0);

  // DataTypeConversion: '<S194>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain14'

  imperix_ctrl_B.DataTypeConversion_cf = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.FrN * cumRevIndex);

  // S-Function (PROBE): '<S194>/S-Function'
  Frd = imperix_ctrl_B.DataTypeConversion_cf;

  // S-Function (sdspstatfcns): '<S68>/Mean' incorporates:
  //   Sum: '<S61>/Sum1'

  idx_2 = DataTypeConversion1[0];
  for (i = 4; i >= 0; i--) {
    idx_2 += DataTypeConversion1[5 - i];
  }

  idx_2 /= 6.0;

  // End of S-Function (sdspstatfcns): '<S68>/Mean'

  // DataTypeConversion: '<S196>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain2'

  imperix_ctrl_B.DataTypeConversion_e = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.M2C.Vc_ref * idx_2);

  // S-Function (PROBE): '<S196>/S-Function'
  Vc_m = imperix_ctrl_B.DataTypeConversion_e;

  // DataTypeConversion: '<S198>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_p = static_cast<real32_T>(rtb_Gain[2]);

  // S-Function (PROBE): '<S198>/S-Function'
  is3 = imperix_ctrl_B.DataTypeConversion_p;

  // Sum: '<S21>/Sum' incorporates:
  //   Gain: '<S21>/Gain1'
  //   Gain: '<S21>/Gain2'
  //   UnitDelay: '<S21>/Unit Delay1'

  imperix_ctrl_DW.UnitDelay1_DSTATE = (1.0 - imperix_ctrl_P.TEB.alpha) * idx_2 +
    imperix_ctrl_P.TEB.alpha * imperix_ctrl_DW.UnitDelay1_DSTATE;

  // DataTypeConversion: '<S200>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain4'
  //   UnitDelay: '<S21>/Unit Delay1'

  imperix_ctrl_B.DataTypeConversion_o = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.M2C.Vc_ref * imperix_ctrl_DW.UnitDelay1_DSTATE);

  // S-Function (PROBE): '<S200>/S-Function'
  Vc_m_f = imperix_ctrl_B.DataTypeConversion_o;

  // RateTransition generated from: '<S1>/Sum6'
  if (imperix_ctrl_M->Timing.RateInteraction.TID0_1 == 1) {
    // RateTransition generated from: '<S1>/Sum6'
    imperix_ctrl_B.TmpRTBAtSum6Inport1 =
      imperix_ctrl_DW.TmpRTBAtSum6Inport1_Buffer0;
  }

  // End of RateTransition generated from: '<S1>/Sum6'

  // Sum: '<S1>/Sum6' incorporates:
  //   UnitDelay: '<S21>/Unit Delay1'

  rtb_IntegralGain_k = imperix_ctrl_B.TmpRTBAtSum6Inport1 -
    imperix_ctrl_DW.UnitDelay1_DSTATE;

  // Sum: '<S174>/Sum' incorporates:
  //   DiscreteIntegrator: '<S165>/Integrator'
  //   Gain: '<S170>/Proportional Gain'

  rtb_DeadZone = imperix_ctrl_P.TEB.kp * rtb_IntegralGain_k +
    imperix_ctrl_DW.Integrator_DSTATE;

  // Saturate: '<S172>/Saturation'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_IntegralGain_dr = imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone < -imperix_ctrl_P.TEB.u_max) {
    rtb_IntegralGain_dr = -imperix_ctrl_P.TEB.u_max;
  } else {
    rtb_IntegralGain_dr = rtb_DeadZone;
  }

  // End of Saturate: '<S172>/Saturation'

  // DataTypeConversion: '<S202>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain7'

  imperix_ctrl_B.DataTypeConversion_k1 = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.PCC.u_max * rtb_IntegralGain_dr);

  // S-Function (PROBE): '<S202>/S-Function'
  iP_r = imperix_ctrl_B.DataTypeConversion_k1;

  // DataTypeConversion: '<S204>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain6'

  imperix_ctrl_B.DataTypeConversion_n = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.PCC.u_max * rtb_Gain1_o[0]);

  // S-Function (PROBE): '<S204>/S-Function'
  iP = imperix_ctrl_B.DataTypeConversion_n;

  // S-Function (TUNABLE_PARAM): '<S614>/S-Function'
  imperix_ctrl_B.SFunction_i = F_ref;

  // S-Function (TUNABLE_PARAM): '<S620>/S-Function'
  imperix_ctrl_B.SFunction_p = w_ref;

  // MATLAB Function: '<S1>/IM references' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double'
  //   DataTypeConversion: '<S1>/Cast To Double1'

  rtb_Saturation = imperix_ctrl_B.SFunction_i;
  rtb_Sum_p = imperix_ctrl_B.SFunction_p;

  // MATLAB Function 'Closed_loop_control/IM references': '<S19>:1'
  if (!imperix_ctrl_DW.F_max_not_empty) {
    // '<S19>:1:10'
    // '<S19>:1:11'
    imperix_ctrl_DW.F_max = imperix_ctrl_P.IM.FrN;
    imperix_ctrl_DW.F_max_not_empty = true;

    // '<S19>:1:12'
    imperix_ctrl_DW.w_max = imperix_ctrl_P.IM.w_max;

    // '<S19>:1:13'
    // '<S19>:1:16'
    imperix_ctrl_DW.dF = imperix_ctrl_P.FOC.Ts / (3.0 * imperix_ctrl_P.IM.tau_r);

    // '<S19>:1:17'
    imperix_ctrl_DW.dw = imperix_ctrl_P.FOC.Ts;
  }

  if (fabs(imperix_ctrl_B.SFunction_i - imperix_ctrl_DW.F_prev) >
      imperix_ctrl_DW.dF) {
    // '<S19>:1:21'
    // '<S19>:1:22'
    idx_2 = imperix_ctrl_B.SFunction_i - imperix_ctrl_DW.F_prev;
    if (rtIsNaN(idx_2)) {
      idx_2 = (rtNaN);
    } else if (idx_2 < 0.0) {
      idx_2 = -1.0;
    } else {
      idx_2 = (idx_2 > 0.0);
    }

    rtb_Saturation = idx_2 * imperix_ctrl_DW.dF + imperix_ctrl_DW.F_prev;
  }

  if (fabs(imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev) >
      imperix_ctrl_DW.dw) {
    // '<S19>:1:25'
    // '<S19>:1:26'
    idx_2 = imperix_ctrl_B.SFunction_p - imperix_ctrl_DW.w_prev;
    if (rtIsNaN(idx_2)) {
      idx_2 = (rtNaN);
    } else if (idx_2 < 0.0) {
      idx_2 = -1.0;
    } else {
      idx_2 = (idx_2 > 0.0);
    }

    rtb_Sum_p = idx_2 * imperix_ctrl_DW.dw + imperix_ctrl_DW.w_prev;
  }

  // '<S19>:1:29'
  imperix_ctrl_DW.F_prev = rtb_Saturation;

  // '<S19>:1:30'
  imperix_ctrl_DW.w_prev = rtb_Sum_p;

  // '<S19>:1:32'
  rtb_F = imperix_ctrl_DW.F_max * rtb_Saturation;

  // '<S19>:1:33'
  rtb_w = imperix_ctrl_DW.w_max * rtb_Sum_p;

  // End of MATLAB Function: '<S1>/IM references'

  // Sum: '<S59>/Sum1'
  z = rtb_w - z;

  // S-Function (TUNABLE_PARAM): '<S624>/S-Function'
  imperix_ctrl_B.SFunction_h = reset_PI;

  // DiscreteIntegrator: '<S341>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_d =
      imperix_ctrl_P.SpeedPI_InitialConditionForInte;
  }

  // Sum: '<S350>/Sum' incorporates:
  //   DiscreteIntegrator: '<S341>/Integrator'
  //   Gain: '<S346>/Proportional Gain'

  rtb_Sum_p = imperix_ctrl_P.FOC.kp_w * z + imperix_ctrl_DW.Integrator_DSTATE_d;

  // Saturate: '<S348>/Saturation'
  if (rtb_Sum_p > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation = imperix_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_p < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation = rtb_Sum_p;
  }

  // End of Saturate: '<S348>/Saturation'

  // Sum: '<S1>/Sum' incorporates:
  //   Bias: '<S1>/Add Constant1'
  //   Gain: '<S1>/Gain5'
  //   Product: '<S1>/Divide'

  csum += rtb_Saturation / (rtb_F + imperix_ctrl_P.AddConstant1_Bias) *
    (imperix_ctrl_P.IM.Lm / imperix_ctrl_P.IM.tau_r);

  // Gain: '<S63>/Gain'
  idx_2 = imperix_ctrl_P.IM.Lo * csum;

  // Sum: '<S59>/Sum2'
  cumRevIndex = rtb_F - cumRevIndex;

  // DiscreteIntegrator: '<S289>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_b != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_i =
      imperix_ctrl_P.FluxPI_InitialConditionForInteg;
  }

  // Sum: '<S298>/Sum' incorporates:
  //   DiscreteIntegrator: '<S289>/Integrator'
  //   Gain: '<S294>/Proportional Gain'

  rtb_Sum_b = imperix_ctrl_P.FOC.kp_F * cumRevIndex +
    imperix_ctrl_DW.Integrator_DSTATE_i;

  // Saturate: '<S296>/Saturation'
  if (rtb_Sum_b > imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_i = imperix_ctrl_P.FOC.u_max;
  } else if (rtb_Sum_b < -imperix_ctrl_P.FOC.u_max) {
    rtb_Saturation_i = -imperix_ctrl_P.FOC.u_max;
  } else {
    rtb_Saturation_i = rtb_Sum_b;
  }

  // End of Saturate: '<S296>/Saturation'

  // RelationalOperator: '<S554>/Compare' incorporates:
  //   Constant: '<S552>/Constant'
  //   Constant: '<S554>/Constant'

  rtb_Compare = (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const);

  // Outputs for Enabled SubSystem: '<S552>/Subsystem1' incorporates:
  //   EnablePort: '<S557>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S557>/Fcn' incorporates:
    //   Fcn: '<S557>/Fcn1'

    rtb_Sum6 = sin(D);
    rtb_Sum_m = cos(D);

    // Fcn: '<S557>/Fcn'
    imperix_ctrl_B.Fcn = rtb_Gain1[0] * rtb_Sum_m + rtb_Gain1[1] * rtb_Sum6;

    // Fcn: '<S557>/Fcn1'
    imperix_ctrl_B.Fcn1 = -rtb_Gain1[0] * rtb_Sum6 + rtb_Gain1[1] * rtb_Sum_m;
  }

  // End of Outputs for SubSystem: '<S552>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S552>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S556>/Enable'

  // RelationalOperator: '<S555>/Compare' incorporates:
  //   Constant: '<S552>/Constant'
  //   Constant: '<S555>/Constant'

  if (imperix_ctrl_P.AlphaBetaZerotodq0_Alignment ==
      imperix_ctrl_P.CompareToConstant1_const) {
    // Fcn: '<S556>/Fcn' incorporates:
    //   Fcn: '<S556>/Fcn1'

    rtb_Sum6 = cos(D);
    rtb_Sum_m = sin(D);

    // Fcn: '<S556>/Fcn'
    imperix_ctrl_B.Fcn_c = rtb_Gain1[0] * rtb_Sum_m - rtb_Gain1[1] * rtb_Sum6;

    // Fcn: '<S556>/Fcn1'
    imperix_ctrl_B.Fcn1_p = rtb_Gain1[0] * rtb_Sum6 + rtb_Gain1[1] * rtb_Sum_m;
  }

  // End of RelationalOperator: '<S555>/Compare'
  // End of Outputs for SubSystem: '<S552>/Subsystem - pi//2 delay'

  // Switch: '<S552>/Switch'
  if (rtb_Compare != 0) {
    rtb_Switch_g_idx_0 = imperix_ctrl_B.Fcn;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1;
  } else {
    rtb_Switch_g_idx_0 = imperix_ctrl_B.Fcn_c;
    rtb_Switch_g_idx_1 = imperix_ctrl_B.Fcn1_p;
  }

  // End of Switch: '<S552>/Switch'

  // Sum: '<S63>/Sum6'
  rtb_Sum6 = rtb_Saturation_i - rtb_Switch_g_idx_0;

  // DiscreteIntegrator: '<S411>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_n != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_j =
      imperix_ctrl_P.MCCPId_InitialConditionForInteg;
  }

  // Sum: '<S420>/Sum' incorporates:
  //   DiscreteIntegrator: '<S411>/Integrator'
  //   Gain: '<S416>/Proportional Gain'

  rtb_Sum_m = imperix_ctrl_P.MCC.kp * rtb_Sum6 +
    imperix_ctrl_DW.Integrator_DSTATE_j;

  // Saturate: '<S418>/Saturation'
  if (rtb_Sum_m > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_h = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_m < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_h = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_h = rtb_Sum_m;
  }

  // End of Saturate: '<S418>/Saturation'

  // Sum: '<S63>/Sum' incorporates:
  //   Product: '<S63>/Product1'

  rtb_Sum_j = rtb_Saturation_h - idx_2 * rtb_Saturation;

  // Sum: '<S63>/Sum8'
  rtb_Sum8 = rtb_Saturation - rtb_Switch_g_idx_1;

  // DiscreteIntegrator: '<S463>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'

  if ((imperix_ctrl_B.SFunction_h != 0.0F) ||
      (imperix_ctrl_DW.Integrator_PrevResetState_i != 0)) {
    imperix_ctrl_DW.Integrator_DSTATE_e =
      imperix_ctrl_P.MCCPIq_InitialConditionForInteg;
  }

  // Sum: '<S472>/Sum' incorporates:
  //   DiscreteIntegrator: '<S463>/Integrator'
  //   Gain: '<S468>/Proportional Gain'

  rtb_Sum_h = imperix_ctrl_P.MCC.kp * rtb_Sum8 +
    imperix_ctrl_DW.Integrator_DSTATE_e;

  // Saturate: '<S470>/Saturation'
  if (rtb_Sum_h > imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_f = imperix_ctrl_P.MCC.u_max;
  } else if (rtb_Sum_h < -imperix_ctrl_P.MCC.u_max) {
    rtb_Saturation_f = -imperix_ctrl_P.MCC.u_max;
  } else {
    rtb_Saturation_f = rtb_Sum_h;
  }

  // End of Saturate: '<S470>/Saturation'

  // Sum: '<S63>/Sum1' incorporates:
  //   Product: '<S63>/Product'

  rtb_Sum1_c = rtb_Saturation_i * idx_2 + rtb_Saturation_f;

  // Gain: '<S1>/Gain16'
  idx_2 = 1.0 / imperix_ctrl_P.MCC.u_max;

  // DataTypeConversion: '<S206>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_ctrl_B.DataTypeConversion_i = static_cast<real32_T>(idx_2 * rtb_Sum1_c);

  // S-Function (PROBE): '<S206>/S-Function'
  vm_q = imperix_ctrl_B.DataTypeConversion_i;

  // DataTypeConversion: '<S208>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain15'

  imperix_ctrl_B.DataTypeConversion_l = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.FrN * rtb_F);

  // S-Function (PROBE): '<S208>/S-Function'
  Frd_r = imperix_ctrl_B.DataTypeConversion_l;

  // DataTypeConversion: '<S210>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain9'

  imperix_ctrl_B.DataTypeConversion_hg = static_cast<real32_T>
    (imperix_ctrl_P.Gain9_Gain * rtb_w);

  // S-Function (PROBE): '<S210>/S-Function'
  wm_r = imperix_ctrl_B.DataTypeConversion_hg;

  // DataTypeConversion: '<S212>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain12'

  imperix_ctrl_B.DataTypeConversion_as = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isdN * rtb_Switch_g_idx_0);

  // S-Function (PROBE): '<S212>/S-Function'
  im_d = imperix_ctrl_B.DataTypeConversion_as;

  // DataTypeConversion: '<S214>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain13'

  imperix_ctrl_B.DataTypeConversion_f = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isdN * rtb_Saturation_i);

  // S-Function (PROBE): '<S214>/S-Function'
  imd_r = imperix_ctrl_B.DataTypeConversion_f;

  // DataTypeConversion: '<S216>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain10'

  imperix_ctrl_B.DataTypeConversion_il = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isqN * rtb_Switch_g_idx_1);

  // S-Function (PROBE): '<S216>/S-Function'
  im_q = imperix_ctrl_B.DataTypeConversion_il;

  // DataTypeConversion: '<S218>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain11'

  imperix_ctrl_B.DataTypeConversion_ep = static_cast<real32_T>(1.0 /
    imperix_ctrl_P.IM.isqN * rtb_Saturation);

  // S-Function (PROBE): '<S218>/S-Function'
  imq_r = imperix_ctrl_B.DataTypeConversion_ep;

  // DataTypeConversion: '<S220>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ly = static_cast<real32_T>(rtb_Gain[3]);

  // S-Function (PROBE): '<S220>/S-Function'
  is4 = imperix_ctrl_B.DataTypeConversion_ly;

  // DataTypeConversion: '<S222>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain16'

  imperix_ctrl_B.DataTypeConversion_hm = static_cast<real32_T>(idx_2 * rtb_Sum_j);

  // S-Function (PROBE): '<S222>/S-Function'
  vm_d = imperix_ctrl_B.DataTypeConversion_hm;

  // Gain: '<S1>/Gain17'
  idx_2 = 1.0 / (imperix_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S224>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_ctrl_B.DataTypeConversion_fv = static_cast<real32_T>(idx_2 *
    rtb_Gain1[1]);

  // S-Function (PROBE): '<S224>/S-Function'
  im_bet = imperix_ctrl_B.DataTypeConversion_fv;

  // DataTypeConversion: '<S226>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain17'

  imperix_ctrl_B.DataTypeConversion_nx = static_cast<real32_T>(idx_2 *
    rtb_Gain1[0]);

  // S-Function (PROBE): '<S226>/S-Function'
  im_alp = imperix_ctrl_B.DataTypeConversion_nx;

  // Gain: '<S1>/Gain18'
  idx_2 = 1.0 / (imperix_ctrl_P.IM.IN * 1.4142135623730951);

  // DataTypeConversion: '<S228>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_ctrl_B.DataTypeConversion_b = static_cast<real32_T>(idx_2 *
    rtb_im_idx_1);

  // S-Function (PROBE): '<S228>/S-Function'
  im_bet_KF = imperix_ctrl_B.DataTypeConversion_b;

  // DataTypeConversion: '<S230>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain18'

  imperix_ctrl_B.DataTypeConversion_of = static_cast<real32_T>(idx_2 *
    rtb_im_idx_0);

  // S-Function (PROBE): '<S230>/S-Function'
  im_alp_KF = imperix_ctrl_B.DataTypeConversion_of;

  // Gain: '<S1>/Gain19'
  idx_2 = 1.0 / imperix_ctrl_P.IM.FrN;

  // DataTypeConversion: '<S232>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_ctrl_B.DataTypeConversion_ch = static_cast<real32_T>(idx_2 *
    rtb_Fr_idx_1);

  // S-Function (PROBE): '<S232>/S-Function'
  Fr_bet = imperix_ctrl_B.DataTypeConversion_ch;

  // DataTypeConversion: '<S234>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain19'

  imperix_ctrl_B.DataTypeConversion_cz = static_cast<real32_T>(idx_2 *
    rtb_Fr_idx_0);

  // S-Function (PROBE): '<S234>/S-Function'
  Fr_alp = imperix_ctrl_B.DataTypeConversion_cz;

  // DataTypeConversion: '<S236>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain20'

  imperix_ctrl_B.DataTypeConversion_ci = static_cast<real32_T>
    (imperix_ctrl_P.Gain20_Gain * csum);

  // S-Function (PROBE): '<S236>/S-Function'
  ws = imperix_ctrl_B.DataTypeConversion_ci;

  // DataTypeConversion: '<S238>/Data Type Conversion' incorporates:
  //   Gain: '<S1>/Gain21'

  imperix_ctrl_B.DataTypeConversion_k2 = static_cast<real32_T>
    (imperix_ctrl_P.Gain21_Gain * D);

  // S-Function (PROBE): '<S238>/S-Function'
  gF = imperix_ctrl_B.DataTypeConversion_k2;

  // S-Function (ADC): '<S84>/ADC'
  imperix_ctrl_B.ADC_h = (float)(*ix_raw_adc_ptr_2_0) * 6.1035E-5F + 0.0F;

  // DataTypeConversion: '<S240>/Data Type Conversion' incorporates:
  //   DataTypeConversion: '<S1>/Data Type Conversion3'

  imperix_ctrl_B.DataTypeConversion_nc = imperix_ctrl_B.ADC_h;

  // S-Function (PROBE): '<S240>/S-Function'
  Te = imperix_ctrl_B.DataTypeConversion_nc;

  // DataTypeConversion: '<S242>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_lx = static_cast<real32_T>(rtb_Gain[4]);

  // S-Function (PROBE): '<S242>/S-Function'
  is5 = imperix_ctrl_B.DataTypeConversion_lx;

  // DataTypeConversion: '<S244>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_kf = static_cast<real32_T>(rtb_Gain[5]);

  // S-Function (PROBE): '<S244>/S-Function'
  is6 = imperix_ctrl_B.DataTypeConversion_kf;

  // DataTypeConversion: '<S246>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ex = static_cast<real32_T>(rtb_Gain1_e[0]);

  // S-Function (PROBE): '<S246>/S-Function'
  Vc1 = imperix_ctrl_B.DataTypeConversion_ex;

  // DataTypeConversion: '<S248>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_p2 = static_cast<real32_T>(rtb_Gain1_e[1]);

  // S-Function (PROBE): '<S248>/S-Function'
  Vc2 = imperix_ctrl_B.DataTypeConversion_p2;

  // DataTypeConversion: '<S250>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_ok = static_cast<real32_T>(rtb_Gain1_e[2]);

  // S-Function (PROBE): '<S250>/S-Function'
  Vc3 = imperix_ctrl_B.DataTypeConversion_ok;

  // DataTypeConversion: '<S252>/Data Type Conversion'
  imperix_ctrl_B.DataTypeConversion_j = static_cast<real32_T>(rtb_Gain1_e[3]);

  // S-Function (PROBE): '<S252>/S-Function'
  Vc4 = imperix_ctrl_B.DataTypeConversion_j;

  // S-Function (TUNABLE_PARAM): '<S618>/S-Function'
  imperix_ctrl_B.SFunction_c = enable_FP;

  // S-Function (TUNABLE_PARAM): '<S123>/S-Function'
  imperix_ctrl_B.SFunction_a = V_mag;

  // Bias: '<S17>/Bias1' incorporates:
  //   Gain: '<S17>/Gain23'

  rtb_Bias1 = imperix_ctrl_P.Gain23_Gain * imperix_ctrl_B.SFunction_a +
    imperix_ctrl_P.Bias1_Bias;

  // Product: '<S17>/Product2' incorporates:
  //   DiscreteIntegrator: '<S17>/Discrete-Time Integrator1'
  //   Fcn: '<S17>/Fcn3'
  //   Fcn: '<S17>/Fcn4'
  //   Fcn: '<S17>/Fcn5'

  rtb_Product2[0] = rtb_Bias1 * static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE)));
  rtb_Product2[1] = static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE - 2.09439516F))) * rtb_Bias1;
  rtb_Product2[2] = static_cast<real32_T>(cos(static_cast<real_T>
    (imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE + 2.09439516F))) * rtb_Bias1;

  // Gain: '<S115>/Gain3'
  rtb_Bias1 = 0.0F;
  tmp_1 = 0.0F;
  tmp_2 = 0.0F;
  for (i = 0; i < 3; i++) {
    tmp_0 = rtb_Product2[i];
    rtb_Bias1 += imperix_ctrl_P.Gain3_Gain_p[3 * i] * tmp_0;
    tmp_1 += imperix_ctrl_P.Gain3_Gain_p[3 * i + 1] * tmp_0;
    tmp_2 += imperix_ctrl_P.Gain3_Gain_p[3 * i + 2] * tmp_0;
  }

  // End of Gain: '<S115>/Gain3'

  // Gain: '<S115>/Gain1'
  imperix_ctrl_B.Gain1[0] = imperix_ctrl_P.Gain1_Gain_k * rtb_Bias1;
  imperix_ctrl_B.Gain1[1] = imperix_ctrl_P.Gain1_Gain_k * tmp_1;
  imperix_ctrl_B.Gain1[2] = imperix_ctrl_P.Gain1_Gain_k * tmp_2;

  // S-Function (PROBE): '<S117>/S-Function'
  v_alp = imperix_ctrl_B.Gain1[0];

  // S-Function (PROBE): '<S119>/S-Function'
  v_bet = imperix_ctrl_B.Gain1[1];

  // S-Function (TUNABLE_PARAM): '<S121>/S-Function'
  imperix_ctrl_B.SFunction_em = f_mag;

  // Sum: '<S17>/Sum1' incorporates:
  //   Constant: '<S17>/Constant3'

  DataTypeConversion2[0] = imperix_ctrl_P.Constant3_Value - rtb_Product2[0];

  // Sum: '<S17>/Sum2' incorporates:
  //   Constant: '<S17>/Constant3'
  //   Sum: '<S17>/Sum1'

  DataTypeConversion2[3] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[0];

  // Sum: '<S17>/Sum1' incorporates:
  //   Constant: '<S17>/Constant3'

  DataTypeConversion2[1] = imperix_ctrl_P.Constant3_Value - rtb_Product2[1];

  // Sum: '<S17>/Sum2' incorporates:
  //   Constant: '<S17>/Constant3'
  //   Sum: '<S17>/Sum1'

  DataTypeConversion2[4] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[1];

  // Sum: '<S17>/Sum1' incorporates:
  //   Constant: '<S17>/Constant3'

  DataTypeConversion2[2] = imperix_ctrl_P.Constant3_Value - rtb_Product2[2];

  // Sum: '<S17>/Sum2' incorporates:
  //   Constant: '<S17>/Constant3'
  //   Sum: '<S17>/Sum1'

  DataTypeConversion2[5] = (0.0 - imperix_ctrl_P.Constant3_Value) -
    rtb_Product2[2];

  // Sum: '<S67>/Sum3'
  rtb_IntegralGain_dr -= rtb_Gain1_o[0];

  // Sum: '<S543>/Sum' incorporates:
  //   DiscreteIntegrator: '<S534>/Integrator'
  //   Gain: '<S539>/Proportional Gain'

  csum = imperix_ctrl_P.PCC.kp * rtb_IntegralGain_dr +
    imperix_ctrl_DW.Integrator_DSTATE_p;

  // RelationalOperator: '<S481>/Compare' incorporates:
  //   Constant: '<S376>/Constant'
  //   Constant: '<S481>/Constant'

  rtb_Compare = (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
                 imperix_ctrl_P.CompareToConstant_const_l);

  // Outputs for Enabled SubSystem: '<S376>/Subsystem1' incorporates:
  //   EnablePort: '<S484>/Enable'

  if (rtb_Compare > 0) {
    // Fcn: '<S484>/Fcn' incorporates:
    //   Fcn: '<S484>/Fcn1'

    idx_2 = sin(D);
    rtb_im_idx_0 = cos(D);

    // Fcn: '<S484>/Fcn'
    imperix_ctrl_B.Fcn_b = rtb_Sum_j * rtb_im_idx_0 - rtb_Sum1_c * idx_2;

    // Fcn: '<S484>/Fcn1'
    imperix_ctrl_B.Fcn1_i = rtb_Sum_j * idx_2 + rtb_Sum1_c * rtb_im_idx_0;
  }

  // End of Outputs for SubSystem: '<S376>/Subsystem1'

  // Outputs for Enabled SubSystem: '<S376>/Subsystem - pi//2 delay' incorporates:
  //   EnablePort: '<S483>/Enable'

  // RelationalOperator: '<S482>/Compare' incorporates:
  //   Constant: '<S376>/Constant'
  //   Constant: '<S482>/Constant'

  if (imperix_ctrl_P.dq0toAlphaBetaZero_Alignment ==
      imperix_ctrl_P.CompareToConstant1_const_l) {
    // Fcn: '<S483>/Fcn' incorporates:
    //   Fcn: '<S483>/Fcn1'

    idx_2 = cos(D);
    D = sin(D);

    // Fcn: '<S483>/Fcn'
    imperix_ctrl_B.Fcn_d = rtb_Sum_j * D + rtb_Sum1_c * idx_2;

    // Fcn: '<S483>/Fcn1'
    imperix_ctrl_B.Fcn1_d = -rtb_Sum_j * idx_2 + rtb_Sum1_c * D;
  }

  // End of RelationalOperator: '<S482>/Compare'
  // End of Outputs for SubSystem: '<S376>/Subsystem - pi//2 delay'

  // Switch: '<S376>/Switch' incorporates:
  //   UnitDelay: '<S63>/Unit Delay'

  if (rtb_Compare != 0) {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_b;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_i;
  } else {
    imperix_ctrl_DW.UnitDelay_DSTATE[0] = imperix_ctrl_B.Fcn_d;
    imperix_ctrl_DW.UnitDelay_DSTATE[1] = imperix_ctrl_B.Fcn1_d;
  }

  // End of Switch: '<S376>/Switch'
  // MATLAB Function: '<S1>/Modulation index'
  // MATLAB Function 'Closed_loop_control/Modulation index': '<S22>:1'
  // '<S22>:1:10'
  // '<S22>:1:4'
  DataTypeConversion2[3] = -DataTypeConversion2[3];
  DataTypeConversion2[4] = -DataTypeConversion2[4];
  DataTypeConversion2[5] = -DataTypeConversion2[5];

  // '<S22>:1:10'
  for (i = 0; i < 6; i++) {
    D = DataTypeConversion2[i] / 520.0;
    if (!(D >= 0.0)) {
      D = 0.0;
    }

    if (D <= 1.0) {
      DataTypeConversion2[i] = D;
    } else {
      DataTypeConversion2[i] = 1.0;
    }
  }

  // End of MATLAB Function: '<S1>/Modulation index'

  // DeadZone: '<S157>/DeadZone'
  if (rtb_DeadZone > imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone -= imperix_ctrl_P.TEB.u_max;
  } else if (rtb_DeadZone >= -imperix_ctrl_P.TEB.u_max) {
    rtb_DeadZone = 0.0;
  } else {
    rtb_DeadZone -= -imperix_ctrl_P.TEB.u_max;
  }

  // End of DeadZone: '<S157>/DeadZone'

  // Gain: '<S162>/Integral Gain'
  rtb_IntegralGain_k *= imperix_ctrl_P.TEB.ki;

  // DataTypeConversion: '<S359>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_l = static_cast<real32_T>
    (DataTypeConversion2[1]);

  // DataTypeConversion: '<S359>/Data Type Conversion2' incorporates:
  //   Constant: '<S359>/phase'

  imperix_ctrl_B.DataTypeConversion2_l = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value);

  // DataTypeConversion: '<S359>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3 = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S363>/generation'
  // S-Function (CB_PWM): '<S364>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3 > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_ctrl_B.DataTypeConversion1_l, 1);

  // End of Outputs for SubSystem: '<S363>/generation'

  // DataTypeConversion: '<S360>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S359>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_p = static_cast<real32_T>
    (DataTypeConversion2[1]);

  // DataTypeConversion: '<S360>/Data Type Conversion2' incorporates:
  //   Constant: '<S360>/phase'

  imperix_ctrl_B.DataTypeConversion2_i = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_o);

  // DataTypeConversion: '<S360>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_g = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S365>/generation'
  // S-Function (CB_PWM): '<S366>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_g > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_ctrl_B.DataTypeConversion1_p, 1);

  // End of Outputs for SubSystem: '<S365>/generation'

  // DataTypeConversion: '<S361>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S359>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_h = static_cast<real32_T>
    (DataTypeConversion2[1]);

  // DataTypeConversion: '<S361>/Data Type Conversion2' incorporates:
  //   Constant: '<S361>/phase'

  imperix_ctrl_B.DataTypeConversion2_b = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_l);

  // DataTypeConversion: '<S361>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_i = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S367>/generation'
  // S-Function (CB_PWM): '<S368>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_i > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_ctrl_B.DataTypeConversion1_h, 1);

  // End of Outputs for SubSystem: '<S367>/generation'

  // DataTypeConversion: '<S362>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S359>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_f = static_cast<real32_T>
    (DataTypeConversion2[1]);

  // DataTypeConversion: '<S362>/Data Type Conversion2' incorporates:
  //   Constant: '<S362>/phase'

  imperix_ctrl_B.DataTypeConversion2_p = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_oo);

  // DataTypeConversion: '<S362>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gf = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S369>/generation'
  // S-Function (CB_PWM): '<S370>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gf > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_ctrl_B.DataTypeConversion1_f, 1);

  // End of Outputs for SubSystem: '<S369>/generation'

  // DataTypeConversion: '<S485>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_b = static_cast<real32_T>
    (DataTypeConversion2[2]);

  // DataTypeConversion: '<S485>/Data Type Conversion2' incorporates:
  //   Constant: '<S485>/phase'

  imperix_ctrl_B.DataTypeConversion2_d = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_p);

  // DataTypeConversion: '<S485>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gp = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S489>/generation'
  // S-Function (CB_PWM): '<S490>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gp > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_ctrl_B.DataTypeConversion1_b, 0);

  // End of Outputs for SubSystem: '<S489>/generation'

  // DataTypeConversion: '<S486>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S485>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_e = static_cast<real32_T>
    (DataTypeConversion2[2]);

  // DataTypeConversion: '<S486>/Data Type Conversion2' incorporates:
  //   Constant: '<S486>/phase'

  imperix_ctrl_B.DataTypeConversion2_o = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_pr);

  // DataTypeConversion: '<S486>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_gl = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S491>/generation'
  // S-Function (CB_PWM): '<S492>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_gl > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_ctrl_B.DataTypeConversion1_e, 0);

  // End of Outputs for SubSystem: '<S491>/generation'

  // DataTypeConversion: '<S487>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S485>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_po = static_cast<real32_T>
    (DataTypeConversion2[2]);

  // DataTypeConversion: '<S487>/Data Type Conversion2' incorporates:
  //   Constant: '<S487>/phase'

  imperix_ctrl_B.DataTypeConversion2_g = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_c);

  // DataTypeConversion: '<S487>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_m = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S493>/generation'
  // S-Function (CB_PWM): '<S494>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_m > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_ctrl_B.DataTypeConversion1_po, 0);

  // End of Outputs for SubSystem: '<S493>/generation'

  // DataTypeConversion: '<S488>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S485>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_c = static_cast<real32_T>
    (DataTypeConversion2[2]);

  // DataTypeConversion: '<S488>/Data Type Conversion2' incorporates:
  //   Constant: '<S488>/phase'

  imperix_ctrl_B.DataTypeConversion2_k = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ll);

  // DataTypeConversion: '<S488>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_a = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S495>/generation'
  // S-Function (CB_PWM): '<S496>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_a > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_ctrl_B.DataTypeConversion1_c, 0);

  // End of Outputs for SubSystem: '<S495>/generation'

  // DeadZone: '<S526>/DeadZone'
  if (csum > imperix_ctrl_P.PCC.u_max) {
    csum -= imperix_ctrl_P.PCC.u_max;
  } else if (csum >= -imperix_ctrl_P.PCC.u_max) {
    csum = 0.0;
  } else {
    csum -= -imperix_ctrl_P.PCC.u_max;
  }

  // End of DeadZone: '<S526>/DeadZone'

  // Gain: '<S531>/Integral Gain'
  rtb_IntegralGain_dr *= imperix_ctrl_P.PCC.ki;

  // DataTypeConversion: '<S558>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_h3 = static_cast<real32_T>
    (DataTypeConversion2[3]);

  // DataTypeConversion: '<S558>/Data Type Conversion2' incorporates:
  //   Constant: '<S558>/phase'

  imperix_ctrl_B.DataTypeConversion2_bv = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_n);

  // DataTypeConversion: '<S558>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_b = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S562>/generation'
  // S-Function (CB_PWM): '<S563>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_b > 0.0) {
    CbPwm_Activate((tPwmOutput) 2, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 2, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 2, imperix_ctrl_B.DataTypeConversion1_h3, 0);

  // End of Outputs for SubSystem: '<S562>/generation'

  // DataTypeConversion: '<S559>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S558>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_m = static_cast<real32_T>
    (DataTypeConversion2[3]);

  // DataTypeConversion: '<S559>/Data Type Conversion2' incorporates:
  //   Constant: '<S559>/phase'

  imperix_ctrl_B.DataTypeConversion2_j = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_k);

  // DataTypeConversion: '<S559>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_h = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S564>/generation'
  // S-Function (CB_PWM): '<S565>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_h > 0.0) {
    CbPwm_Activate((tPwmOutput) 6, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 6, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 6, imperix_ctrl_B.DataTypeConversion1_m, 0);

  // End of Outputs for SubSystem: '<S564>/generation'

  // DataTypeConversion: '<S560>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S558>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_fz = static_cast<real32_T>
    (DataTypeConversion2[3]);

  // DataTypeConversion: '<S560>/Data Type Conversion2' incorporates:
  //   Constant: '<S560>/phase'

  imperix_ctrl_B.DataTypeConversion2_a = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_py);

  // DataTypeConversion: '<S560>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_e = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S566>/generation'
  // S-Function (CB_PWM): '<S567>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_e > 0.0) {
    CbPwm_Activate((tPwmOutput) 3, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 3, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 3, imperix_ctrl_B.DataTypeConversion1_fz, 0);

  // End of Outputs for SubSystem: '<S566>/generation'

  // DataTypeConversion: '<S561>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S558>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_i = static_cast<real32_T>
    (DataTypeConversion2[3]);

  // DataTypeConversion: '<S561>/Data Type Conversion2' incorporates:
  //   Constant: '<S561>/phase'

  imperix_ctrl_B.DataTypeConversion2_f = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ng);

  // DataTypeConversion: '<S561>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_k = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S568>/generation'
  // S-Function (CB_PWM): '<S569>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_k > 0.0) {
    CbPwm_Activate((tPwmOutput) 7, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 7, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 7, imperix_ctrl_B.DataTypeConversion1_i, 0);

  // End of Outputs for SubSystem: '<S568>/generation'

  // DataTypeConversion: '<S570>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_a = static_cast<real32_T>
    (DataTypeConversion2[4]);

  // DataTypeConversion: '<S570>/Data Type Conversion2' incorporates:
  //   Constant: '<S570>/phase'

  imperix_ctrl_B.DataTypeConversion2_dx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_j);

  // DataTypeConversion: '<S570>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_l = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S574>/generation'
  // S-Function (CB_PWM): '<S575>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_l > 0.0) {
    CbPwm_Activate((tPwmOutput) 8, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 8, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 8, imperix_ctrl_B.DataTypeConversion1_a, 0);

  // End of Outputs for SubSystem: '<S574>/generation'

  // DataTypeConversion: '<S571>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S570>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_k = static_cast<real32_T>
    (DataTypeConversion2[4]);

  // DataTypeConversion: '<S571>/Data Type Conversion2' incorporates:
  //   Constant: '<S571>/phase'

  imperix_ctrl_B.DataTypeConversion2_dm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_of);

  // DataTypeConversion: '<S571>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_n = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S576>/generation'
  // S-Function (CB_PWM): '<S577>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_n > 0.0) {
    CbPwm_Activate((tPwmOutput) 12, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 12, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 12, imperix_ctrl_B.DataTypeConversion1_k, 0);

  // End of Outputs for SubSystem: '<S576>/generation'

  // DataTypeConversion: '<S572>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S570>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_l4 = static_cast<real32_T>
    (DataTypeConversion2[4]);

  // DataTypeConversion: '<S572>/Data Type Conversion2' incorporates:
  //   Constant: '<S572>/phase'

  imperix_ctrl_B.DataTypeConversion2_n = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_h);

  // DataTypeConversion: '<S572>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_j = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S578>/generation'
  // S-Function (CB_PWM): '<S579>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_j > 0.0) {
    CbPwm_Activate((tPwmOutput) 9, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 9, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 9, imperix_ctrl_B.DataTypeConversion1_l4, 0);

  // End of Outputs for SubSystem: '<S578>/generation'

  // DataTypeConversion: '<S573>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S570>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_bg = static_cast<real32_T>
    (DataTypeConversion2[4]);

  // DataTypeConversion: '<S573>/Data Type Conversion2' incorporates:
  //   Constant: '<S573>/phase'

  imperix_ctrl_B.DataTypeConversion2_nx = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_nc);

  // DataTypeConversion: '<S573>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bs = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S580>/generation'
  // S-Function (CB_PWM): '<S581>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bs > 0.0) {
    CbPwm_Activate((tPwmOutput) 13, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 13, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 13, imperix_ctrl_B.DataTypeConversion1_bg, 0);

  // End of Outputs for SubSystem: '<S580>/generation'

  // DataTypeConversion: '<S582>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_d = static_cast<real32_T>
    (DataTypeConversion2[5]);

  // DataTypeConversion: '<S582>/Data Type Conversion2' incorporates:
  //   Constant: '<S582>/phase'

  imperix_ctrl_B.DataTypeConversion2_pe = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_f);

  // DataTypeConversion: '<S582>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bsx = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S586>/generation'
  // S-Function (CB_PWM): '<S587>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bsx > 0.0) {
    CbPwm_Activate((tPwmOutput) 10, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 10, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 10, imperix_ctrl_B.DataTypeConversion1_d, 0);

  // End of Outputs for SubSystem: '<S586>/generation'

  // DataTypeConversion: '<S583>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S582>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_o = static_cast<real32_T>
    (DataTypeConversion2[5]);

  // DataTypeConversion: '<S583>/Data Type Conversion2' incorporates:
  //   Constant: '<S583>/phase'

  imperix_ctrl_B.DataTypeConversion2_n0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_i);

  // DataTypeConversion: '<S583>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_hm = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S588>/generation'
  // S-Function (CB_PWM): '<S589>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_hm > 0.0) {
    CbPwm_Activate((tPwmOutput) 14, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 14, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 14, imperix_ctrl_B.DataTypeConversion1_o, 0);

  // End of Outputs for SubSystem: '<S588>/generation'

  // DataTypeConversion: '<S584>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S582>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_ay = static_cast<real32_T>
    (DataTypeConversion2[5]);

  // DataTypeConversion: '<S584>/Data Type Conversion2' incorporates:
  //   Constant: '<S584>/phase'

  imperix_ctrl_B.DataTypeConversion2_gl = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_a);

  // DataTypeConversion: '<S584>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_ip = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S590>/generation'
  // S-Function (CB_PWM): '<S591>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_ip > 0.0) {
    CbPwm_Activate((tPwmOutput) 11, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 11, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 11, imperix_ctrl_B.DataTypeConversion1_ay, 0);

  // End of Outputs for SubSystem: '<S590>/generation'

  // DataTypeConversion: '<S585>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S582>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_pf = static_cast<real32_T>
    (DataTypeConversion2[5]);

  // DataTypeConversion: '<S585>/Data Type Conversion2' incorporates:
  //   Constant: '<S585>/phase'

  imperix_ctrl_B.DataTypeConversion2_by = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_ns);

  // DataTypeConversion: '<S585>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_o = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S592>/generation'
  // S-Function (CB_PWM): '<S593>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_o > 0.0) {
    CbPwm_Activate((tPwmOutput) 15, 0);
  } else {
    CbPwm_Deactivate((tPwmOutput) 15, 0);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 15, imperix_ctrl_B.DataTypeConversion1_pf, 0);

  // End of Outputs for SubSystem: '<S592>/generation'

  // DataTypeConversion: '<S601>/Data Type Conversion1'
  imperix_ctrl_B.DataTypeConversion1_al = static_cast<real32_T>
    (DataTypeConversion2[0]);

  // DataTypeConversion: '<S601>/Data Type Conversion2' incorporates:
  //   Constant: '<S601>/phase'

  imperix_ctrl_B.DataTypeConversion2_jw = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_fa);

  // DataTypeConversion: '<S601>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_d = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S605>/generation'
  // S-Function (CB_PWM): '<S606>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_d > 0.0) {
    CbPwm_Activate((tPwmOutput) 0, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 0, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 0, imperix_ctrl_B.DataTypeConversion1_al, 1);

  // End of Outputs for SubSystem: '<S605>/generation'

  // DataTypeConversion: '<S602>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S601>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_ig = static_cast<real32_T>
    (DataTypeConversion2[0]);

  // DataTypeConversion: '<S602>/Data Type Conversion2' incorporates:
  //   Constant: '<S602>/phase'

  imperix_ctrl_B.DataTypeConversion2_ij = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_hr);

  // DataTypeConversion: '<S602>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bt = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S607>/generation'
  // S-Function (CB_PWM): '<S608>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bt > 0.0) {
    CbPwm_Activate((tPwmOutput) 4, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 4, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 4, imperix_ctrl_B.DataTypeConversion1_ig, 1);

  // End of Outputs for SubSystem: '<S607>/generation'

  // DataTypeConversion: '<S603>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S601>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_g = static_cast<real32_T>
    (DataTypeConversion2[0]);

  // DataTypeConversion: '<S603>/Data Type Conversion2' incorporates:
  //   Constant: '<S603>/phase'

  imperix_ctrl_B.DataTypeConversion2_nm = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_at);

  // DataTypeConversion: '<S603>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_p = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S609>/generation'
  // S-Function (CB_PWM): '<S610>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_p > 0.0) {
    CbPwm_Activate((tPwmOutput) 1, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 1, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 1, imperix_ctrl_B.DataTypeConversion1_g, 1);

  // End of Outputs for SubSystem: '<S609>/generation'

  // DataTypeConversion: '<S604>/Data Type Conversion1' incorporates:
  //   DataTypeConversion: '<S601>/Data Type Conversion1'

  imperix_ctrl_B.DataTypeConversion1_gw = static_cast<real32_T>
    (DataTypeConversion2[0]);

  // DataTypeConversion: '<S604>/Data Type Conversion2' incorporates:
  //   Constant: '<S604>/phase'

  imperix_ctrl_B.DataTypeConversion2_a0 = static_cast<real32_T>
    (imperix_ctrl_P.phase_Value_cq);

  // DataTypeConversion: '<S604>/Data Type Conversion3' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double2'

  imperix_ctrl_B.DataTypeConversion3_bm = (imperix_ctrl_B.SFunction_c != 0.0F);

  // Outputs for Atomic SubSystem: '<S611>/generation'
  // S-Function (CB_PWM): '<S612>/PWM' incorporates:
  //   Constant: '<S128>/clk_id'

  if (imperix_ctrl_B.DataTypeConversion3_bm > 0.0) {
    CbPwm_Activate((tPwmOutput) 5, 1);
  } else {
    CbPwm_Deactivate((tPwmOutput) 5, 1);
  }

  CbPwm_SetDutyCycle((tPwmOutput) 5, imperix_ctrl_B.DataTypeConversion1_gw, 1);

  // End of Outputs for SubSystem: '<S611>/generation'

  // Switch: '<S155>/Switch1' incorporates:
  //   Constant: '<S155>/Clamping_zero'
  //   Constant: '<S155>/Constant'
  //   Constant: '<S155>/Constant2'
  //   RelationalOperator: '<S155>/fix for DT propagation issue'

  if (rtb_DeadZone > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_3 = imperix_ctrl_P.Constant_Value_e;
  } else {
    tmp_3 = imperix_ctrl_P.Constant2_Value;
  }

  // Switch: '<S155>/Switch2' incorporates:
  //   Constant: '<S155>/Clamping_zero'
  //   Constant: '<S155>/Constant3'
  //   Constant: '<S155>/Constant4'
  //   RelationalOperator: '<S155>/fix for DT propagation issue1'

  if (rtb_IntegralGain_k > imperix_ctrl_P.Clamping_zero_Value) {
    tmp_4 = imperix_ctrl_P.Constant3_Value_h;
  } else {
    tmp_4 = imperix_ctrl_P.Constant4_Value;
  }

  // Switch: '<S155>/Switch' incorporates:
  //   Constant: '<S155>/Clamping_zero'
  //   Constant: '<S155>/Constant1'
  //   Logic: '<S155>/AND3'
  //   RelationalOperator: '<S155>/Equal1'
  //   RelationalOperator: '<S155>/Relational Operator'
  //   Switch: '<S155>/Switch1'
  //   Switch: '<S155>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value != rtb_DeadZone) && (tmp_3 == tmp_4))
  {
    rtb_IntegralGain_k = imperix_ctrl_P.Constant1_Value;
  }

  // Update for DiscreteIntegrator: '<S165>/Integrator' incorporates:
  //   Switch: '<S155>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE += imperix_ctrl_P.Integrator_gainval *
    rtb_IntegralGain_k;

  // Update for DiscreteIntegrator: '<S341>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S333>/Kb'
  //   Gain: '<S338>/Integral Gain'
  //   Sum: '<S333>/SumI2'
  //   Sum: '<S333>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_d += (2.0 * imperix_ctrl_P.FOC.kp_w *
      (rtb_Saturation - rtb_Sum_p) + imperix_ctrl_P.FOC.ki_w * z) *
      imperix_ctrl_P.Integrator_gainval_e;
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

  // End of Update for DiscreteIntegrator: '<S341>/Integrator'

  // Update for DiscreteIntegrator: '<S289>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S281>/Kb'
  //   Gain: '<S286>/Integral Gain'
  //   Sum: '<S281>/SumI2'
  //   Sum: '<S281>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_i += (2.0 * imperix_ctrl_P.FOC.kp_F *
      (rtb_Saturation_i - rtb_Sum_b) + imperix_ctrl_P.FOC.ki_F * cumRevIndex) *
      imperix_ctrl_P.Integrator_gainval_a;
  }

  if (imperix_ctrl_B.SFunction_h > 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_b = 1;
  } else if (imperix_ctrl_B.SFunction_h < 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_b = -1;
  } else if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_PrevResetState_b = 0;
  } else {
    imperix_ctrl_DW.Integrator_PrevResetState_b = 2;
  }

  // End of Update for DiscreteIntegrator: '<S289>/Integrator'

  // Update for DiscreteIntegrator: '<S411>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S403>/Kb'
  //   Gain: '<S408>/Integral Gain'
  //   Sum: '<S403>/SumI2'
  //   Sum: '<S403>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_j += ((rtb_Saturation_h - rtb_Sum_m) *
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

  // End of Update for DiscreteIntegrator: '<S411>/Integrator'

  // Update for DiscreteIntegrator: '<S463>/Integrator' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Double5'
  //   Gain: '<S455>/Kb'
  //   Gain: '<S460>/Integral Gain'
  //   Sum: '<S455>/SumI2'
  //   Sum: '<S455>/SumI4'

  if (imperix_ctrl_B.SFunction_h == 0.0F) {
    imperix_ctrl_DW.Integrator_DSTATE_e += ((rtb_Saturation_f - rtb_Sum_h) *
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

  // End of Update for DiscreteIntegrator: '<S463>/Integrator'

  // Update for DiscreteIntegrator: '<S17>/Discrete-Time Integrator1' incorporates:
  //   Gain: '<S17>/Gain22'

  imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE += imperix_ctrl_P.Gain22_Gain *
    imperix_ctrl_B.SFunction_em * imperix_ctrl_P.DiscreteTimeIntegrator1_gainval;

  // Switch: '<S524>/Switch1' incorporates:
  //   Constant: '<S524>/Clamping_zero'
  //   Constant: '<S524>/Constant'
  //   Constant: '<S524>/Constant2'
  //   RelationalOperator: '<S524>/fix for DT propagation issue'

  if (csum > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_3 = imperix_ctrl_P.Constant_Value_h;
  } else {
    tmp_3 = imperix_ctrl_P.Constant2_Value_a;
  }

  // Switch: '<S524>/Switch2' incorporates:
  //   Constant: '<S524>/Clamping_zero'
  //   Constant: '<S524>/Constant3'
  //   Constant: '<S524>/Constant4'
  //   RelationalOperator: '<S524>/fix for DT propagation issue1'

  if (rtb_IntegralGain_dr > imperix_ctrl_P.Clamping_zero_Value_a) {
    tmp_4 = imperix_ctrl_P.Constant3_Value_j;
  } else {
    tmp_4 = imperix_ctrl_P.Constant4_Value_a;
  }

  // Switch: '<S524>/Switch' incorporates:
  //   Constant: '<S524>/Clamping_zero'
  //   Constant: '<S524>/Constant1'
  //   Logic: '<S524>/AND3'
  //   RelationalOperator: '<S524>/Equal1'
  //   RelationalOperator: '<S524>/Relational Operator'
  //   Switch: '<S524>/Switch1'
  //   Switch: '<S524>/Switch2'

  if ((imperix_ctrl_P.Clamping_zero_Value_a != csum) && (tmp_3 == tmp_4)) {
    rtb_IntegralGain_dr = imperix_ctrl_P.Constant1_Value_d;
  }

  // Update for DiscreteIntegrator: '<S534>/Integrator' incorporates:
  //   Switch: '<S524>/Switch'

  imperix_ctrl_DW.Integrator_DSTATE_p += imperix_ctrl_P.Integrator_gainval_a3 *
    rtb_IntegralGain_dr;
}

// Model step function for TID1
void imperix_ctrl_step1(void)          // Sample time: [0.00166667s, 0.0s]
{
  real_T rtb_Constant;

  // Constant: '<S1>/Constant'
  rtb_Constant = imperix_ctrl_P.M2C.Vc_ref;

  // RateTransition generated from: '<S1>/Sum6'
  imperix_ctrl_DW.TmpRTBAtSum6Inport1_Buffer0 = rtb_Constant;
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

    // Start for S-Function (ADC): '<S106>/ADC'
    Adc_ConfigureInput(7, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(7, 2, &ix_raw_adc_ptr_7_2);

    // Start for S-Function (ADC): '<S108>/ADC'
    Adc_ConfigureInput(6, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(6, 2, &ix_raw_adc_ptr_6_2);

    // Start for S-Function (ADC): '<S98>/ADC'
    Adc_ConfigureInput(5, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(5, 2, &ix_raw_adc_ptr_5_2);

    // Start for S-Function (ADC): '<S86>/ADC'
    Adc_ConfigureInput(4, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(4, 2, &ix_raw_adc_ptr_4_2);

    // Start for S-Function (ADC): '<S100>/ADC'
    Adc_ConfigureInput(3, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(3, 2, &ix_raw_adc_ptr_3_2);

    // Start for S-Function (ADC): '<S102>/ADC'
    Adc_ConfigureInput(2, 0.00045776F, 0.0F, 2);
    Adc_GetPointer(2, 2, &ix_raw_adc_ptr_2_2);
    imperix_MovingAverage_Start(&imperix_ctrl_DW.MovingAverage_p);

    // Start for S-Function (TUNABLE_PARAM): '<S616>/S-Function'
    reset_mean = 0.0F;                 // Tunable parameter initialization
    ConfigureTunable(&reset_mean, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S184>/S-Function'
    ConfigureProbe(&is1, 0);

    // Start for S-Function (PROBE): '<S186>/S-Function'
    ConfigureProbe(&is2, 0);

    // Start for S-Function (ADC): '<S94>/ADC'
    Adc_ConfigureInput(1, 0.030518F, 0.0F, 2);
    Adc_GetPointer(1, 2, &ix_raw_adc_ptr_1_2);

    // Start for S-Function (ADC): '<S110>/ADC'
    Adc_ConfigureInput(0, 0.030518F, 0.0F, 2);
    Adc_GetPointer(0, 2, &ix_raw_adc_ptr_0_2);

    // Start for S-Function (ADC): '<S88>/ADC'
    Adc_ConfigureInput(7, 0.030518F, 0.0F, 0);
    Adc_GetPointer(7, 0, &ix_raw_adc_ptr_7_0);

    // Start for S-Function (ADC): '<S96>/ADC'
    Adc_ConfigureInput(6, 0.030518F, 0.0F, 0);
    Adc_GetPointer(6, 0, &ix_raw_adc_ptr_6_0);

    // Start for S-Function (ADC): '<S90>/ADC'
    Adc_ConfigureInput(5, 0.030518F, 0.0F, 0);
    Adc_GetPointer(5, 0, &ix_raw_adc_ptr_5_0);

    // Start for S-Function (ADC): '<S92>/ADC'
    Adc_ConfigureInput(4, 0.030518F, 0.0F, 0);
    Adc_GetPointer(4, 0, &ix_raw_adc_ptr_4_0);
    imperix_MovingAverage_Start(&imperix_ctrl_DW.MovingAverage);

    // Start for S-Function (PROBE): '<S188>/S-Function'
    ConfigureProbe(&Vc5, 0);

    // Start for S-Function (PROBE): '<S190>/S-Function'
    ConfigureProbe(&Vc6, 0);

    // Start for S-Function (ADC): '<S104>/ADC'
    Adc_ConfigureInput(3, 0.0061035F, 0.0F, 0);
    Adc_GetPointer(3, 0, &ix_raw_adc_ptr_3_0);

    // Start for MATLABSystem: '<S74>/Moving Average'
    imperix_ctrl_DW.obj.isInitialized = 0;
    imperix_ctrl_DW.obj.NumChannels = -1;
    imperix_ctrl_DW.obj.FrameLength = -1;
    imperix_ctrl_DW.obj.matlabCodegenIsDeleted = false;
    imperix_ctrl_SystemCore_setup_m(&imperix_ctrl_DW.obj);

    // Start for S-Function (PROBE): '<S192>/S-Function'
    ConfigureProbe(&wm, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S622>/S-Function'
    enable_KF = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_KF, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S626>/S-Function'
    reset_KF = 1.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_KF, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S194>/S-Function'
    ConfigureProbe(&Frd, 0);

    // Start for S-Function (PROBE): '<S196>/S-Function'
    ConfigureProbe(&Vc_m, 0);

    // Start for S-Function (PROBE): '<S198>/S-Function'
    ConfigureProbe(&is3, 0);

    // Start for S-Function (PROBE): '<S200>/S-Function'
    ConfigureProbe(&Vc_m_f, 0);

    // Start for RateTransition generated from: '<S1>/Sum6'
    imperix_ctrl_B.TmpRTBAtSum6Inport1 =
      imperix_ctrl_P.TmpRTBAtSum6Inport1_InitialCond;

    // Start for S-Function (PROBE): '<S202>/S-Function'
    ConfigureProbe(&iP_r, 0);

    // Start for S-Function (PROBE): '<S204>/S-Function'
    ConfigureProbe(&iP, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S614>/S-Function'
    F_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&F_ref, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S620>/S-Function'
    w_ref = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&w_ref, 0, 0, -1.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S624>/S-Function'
    reset_PI = 0.0F;                   // Tunable parameter initialization
    ConfigureTunable(&reset_PI, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S206>/S-Function'
    ConfigureProbe(&vm_q, 0);

    // Start for S-Function (PROBE): '<S208>/S-Function'
    ConfigureProbe(&Frd_r, 0);

    // Start for S-Function (PROBE): '<S210>/S-Function'
    ConfigureProbe(&wm_r, 0);

    // Start for S-Function (PROBE): '<S212>/S-Function'
    ConfigureProbe(&im_d, 0);

    // Start for S-Function (PROBE): '<S214>/S-Function'
    ConfigureProbe(&imd_r, 0);

    // Start for S-Function (PROBE): '<S216>/S-Function'
    ConfigureProbe(&im_q, 0);

    // Start for S-Function (PROBE): '<S218>/S-Function'
    ConfigureProbe(&imq_r, 0);

    // Start for S-Function (PROBE): '<S220>/S-Function'
    ConfigureProbe(&is4, 0);

    // Start for S-Function (PROBE): '<S222>/S-Function'
    ConfigureProbe(&vm_d, 0);

    // Start for S-Function (PROBE): '<S224>/S-Function'
    ConfigureProbe(&im_bet, 0);

    // Start for S-Function (PROBE): '<S226>/S-Function'
    ConfigureProbe(&im_alp, 0);

    // Start for S-Function (PROBE): '<S228>/S-Function'
    ConfigureProbe(&im_bet_KF, 0);

    // Start for S-Function (PROBE): '<S230>/S-Function'
    ConfigureProbe(&im_alp_KF, 0);

    // Start for S-Function (PROBE): '<S232>/S-Function'
    ConfigureProbe(&Fr_bet, 0);

    // Start for S-Function (PROBE): '<S234>/S-Function'
    ConfigureProbe(&Fr_alp, 0);

    // Start for S-Function (PROBE): '<S236>/S-Function'
    ConfigureProbe(&ws, 0);

    // Start for S-Function (PROBE): '<S238>/S-Function'
    ConfigureProbe(&gF, 0);

    // Start for S-Function (ADC): '<S84>/ADC'
    Adc_ConfigureInput(2, 6.1035E-5F, 0.0F, 0);
    Adc_GetPointer(2, 0, &ix_raw_adc_ptr_2_0);

    // Start for S-Function (PROBE): '<S240>/S-Function'
    ConfigureProbe(&Te, 0);

    // Start for S-Function (PROBE): '<S242>/S-Function'
    ConfigureProbe(&is5, 0);

    // Start for S-Function (PROBE): '<S244>/S-Function'
    ConfigureProbe(&is6, 0);

    // Start for S-Function (PROBE): '<S246>/S-Function'
    ConfigureProbe(&Vc1, 0);

    // Start for S-Function (PROBE): '<S248>/S-Function'
    ConfigureProbe(&Vc2, 0);

    // Start for S-Function (PROBE): '<S250>/S-Function'
    ConfigureProbe(&Vc3, 0);

    // Start for S-Function (PROBE): '<S252>/S-Function'
    ConfigureProbe(&Vc4, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S618>/S-Function'
    enable_FP = 0.0F;                  // Tunable parameter initialization
    ConfigureTunable(&enable_FP, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (TUNABLE_PARAM): '<S123>/S-Function'
    V_mag = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&V_mag, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (PROBE): '<S117>/S-Function'
    ConfigureProbe(&v_alp, 0);

    // Start for S-Function (PROBE): '<S119>/S-Function'
    ConfigureProbe(&v_bet, 0);

    // Start for S-Function (TUNABLE_PARAM): '<S121>/S-Function'
    f_mag = 0.0F;                      // Tunable parameter initialization
    ConfigureTunable(&f_mag, 0, 0, 0.0F, 1.0F);

    // Start for S-Function (IRQ): '<S126>/S-Function' incorporates:
    //   Constant: '<S128>/clk_id'

    ConfigureMainInterrupt(SimulinkInterrupt, (tClock)
      imperix_ctrl_P.clk_id_Value, 0.5F, 0U);
    ConfigureReadTriggerDelayInNs(2000U);
    Adc_SetUserOversampling(0.0F);

    // Start for S-Function (CLK): '<S128>/CLK1'
    Clock_SetFrequency((tClock) 0, 6000.0F);

    // Start for Atomic SubSystem: '<S363>/generation'
    // Start for S-Function (CB_PWM): '<S364>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 1);
    CbPwm_Activate((tPwmOutput) 2, 1);

    // End of Start for SubSystem: '<S363>/generation'

    // Start for Atomic SubSystem: '<S365>/generation'
    // Start for S-Function (CB_PWM): '<S366>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 1);
    CbPwm_Activate((tPwmOutput) 6, 1);

    // End of Start for SubSystem: '<S365>/generation'

    // Start for Atomic SubSystem: '<S367>/generation'
    // Start for S-Function (CB_PWM): '<S368>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 1);
    CbPwm_Activate((tPwmOutput) 3, 1);

    // End of Start for SubSystem: '<S367>/generation'

    // Start for Atomic SubSystem: '<S369>/generation'
    // Start for S-Function (CB_PWM): '<S370>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 1);
    CbPwm_Activate((tPwmOutput) 7, 1);

    // End of Start for SubSystem: '<S369>/generation'

    // Start for Atomic SubSystem: '<S489>/generation'
    // Start for S-Function (CB_PWM): '<S490>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 0);
    CbPwm_Activate((tPwmOutput) 0, 0);

    // End of Start for SubSystem: '<S489>/generation'

    // Start for Atomic SubSystem: '<S491>/generation'
    // Start for S-Function (CB_PWM): '<S492>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 0);
    CbPwm_Activate((tPwmOutput) 4, 0);

    // End of Start for SubSystem: '<S491>/generation'

    // Start for Atomic SubSystem: '<S493>/generation'
    // Start for S-Function (CB_PWM): '<S494>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 0);
    CbPwm_Activate((tPwmOutput) 1, 0);

    // End of Start for SubSystem: '<S493>/generation'

    // Start for Atomic SubSystem: '<S495>/generation'
    // Start for S-Function (CB_PWM): '<S496>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 0);
    CbPwm_Activate((tPwmOutput) 5, 0);

    // End of Start for SubSystem: '<S495>/generation'

    // Start for Atomic SubSystem: '<S562>/generation'
    // Start for S-Function (CB_PWM): '<S563>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 2, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 2, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 2, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 2, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 2, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 2, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 2, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 2, 0);
    CbPwm_Activate((tPwmOutput) 2, 0);

    // End of Start for SubSystem: '<S562>/generation'

    // Start for Atomic SubSystem: '<S564>/generation'
    // Start for S-Function (CB_PWM): '<S565>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 6, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 6, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 6, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 6, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 6, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 6, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 6, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 6, 0);
    CbPwm_Activate((tPwmOutput) 6, 0);

    // End of Start for SubSystem: '<S564>/generation'

    // Start for Atomic SubSystem: '<S566>/generation'
    // Start for S-Function (CB_PWM): '<S567>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 3, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 3, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 3, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 3, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 3, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 3, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 3, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 3, 0);
    CbPwm_Activate((tPwmOutput) 3, 0);

    // End of Start for SubSystem: '<S566>/generation'

    // Start for Atomic SubSystem: '<S568>/generation'
    // Start for S-Function (CB_PWM): '<S569>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 7, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 7, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 7, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 7, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 7, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 7, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 7, 0);
    CbPwm_Activate((tPwmOutput) 7, 0);

    // End of Start for SubSystem: '<S568>/generation'

    // Start for Atomic SubSystem: '<S574>/generation'
    // Start for S-Function (CB_PWM): '<S575>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 8, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 8, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 8, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 8, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 8, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 8, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 8, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 8, 0);
    CbPwm_Activate((tPwmOutput) 8, 0);

    // End of Start for SubSystem: '<S574>/generation'

    // Start for Atomic SubSystem: '<S576>/generation'
    // Start for S-Function (CB_PWM): '<S577>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 12, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 12, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 12, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 12, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 12, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 12, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 12, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 12, 0);
    CbPwm_Activate((tPwmOutput) 12, 0);

    // End of Start for SubSystem: '<S576>/generation'

    // Start for Atomic SubSystem: '<S578>/generation'
    // Start for S-Function (CB_PWM): '<S579>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 9, (tClock) imperix_ctrl_P.clk_id_Value, 0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 9, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 9, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 9, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 9, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 9, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 9, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 9, 0);
    CbPwm_Activate((tPwmOutput) 9, 0);

    // End of Start for SubSystem: '<S578>/generation'

    // Start for Atomic SubSystem: '<S580>/generation'
    // Start for S-Function (CB_PWM): '<S581>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 13, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 13, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 13, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 13, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 13, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 13, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 13, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 13, 0);
    CbPwm_Activate((tPwmOutput) 13, 0);

    // End of Start for SubSystem: '<S580>/generation'

    // Start for Atomic SubSystem: '<S586>/generation'
    // Start for S-Function (CB_PWM): '<S587>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 10, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 10, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 10, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 10, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 10, 0.75F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 10, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 10, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 10, 0);
    CbPwm_Activate((tPwmOutput) 10, 0);

    // End of Start for SubSystem: '<S586>/generation'

    // Start for Atomic SubSystem: '<S588>/generation'
    // Start for S-Function (CB_PWM): '<S589>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 14, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 14, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 14, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 14, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 14, 0.5F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 14, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 14, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 14, 0);
    CbPwm_Activate((tPwmOutput) 14, 0);

    // End of Start for SubSystem: '<S588>/generation'

    // Start for Atomic SubSystem: '<S590>/generation'
    // Start for S-Function (CB_PWM): '<S591>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 11, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 11, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 11, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 11, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 11, 0.25F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 11, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 11, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 11, 0);
    CbPwm_Activate((tPwmOutput) 11, 0);

    // End of Start for SubSystem: '<S590>/generation'

    // Start for Atomic SubSystem: '<S592>/generation'
    // Start for S-Function (CB_PWM): '<S593>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 15, (tClock) imperix_ctrl_P.clk_id_Value,
                         0);
    CbPwm_ConfigureOutputMode((tPwmOutput) 15, (tPwmOutMode) 2, 0);
    CbPwm_ConfigureCarrier((tPwmOutput) 15, (tPwmCarrier) 0, 0);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 15, (tPwmRate) 0, 0);
    CbPwm_SetPhase((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 15, 0);
    CbPwm_SetDutyCycle((tPwmOutput) 15, 0.0F, 0);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 15, 0);
    CbPwm_Activate((tPwmOutput) 15, 0);

    // End of Start for SubSystem: '<S592>/generation'

    // Start for Atomic SubSystem: '<S605>/generation'
    // Start for S-Function (CB_PWM): '<S606>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 0, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 0, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 0, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 0, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 0, 0.75F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 0, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 0, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 0, 1);
    CbPwm_Activate((tPwmOutput) 0, 1);

    // End of Start for SubSystem: '<S605>/generation'

    // Start for Atomic SubSystem: '<S607>/generation'
    // Start for S-Function (CB_PWM): '<S608>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 4, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 4, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 4, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 4, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 4, 0.5F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 4, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 4, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 4, 1);
    CbPwm_Activate((tPwmOutput) 4, 1);

    // End of Start for SubSystem: '<S607>/generation'

    // Start for Atomic SubSystem: '<S609>/generation'
    // Start for S-Function (CB_PWM): '<S610>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 1, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 1, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 1, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 1, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 1, 0.25F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 1, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 1, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 1, 1);
    CbPwm_Activate((tPwmOutput) 1, 1);

    // End of Start for SubSystem: '<S609>/generation'

    // Start for Atomic SubSystem: '<S611>/generation'
    // Start for S-Function (CB_PWM): '<S612>/PWM' incorporates:
    //   Constant: '<S128>/clk_id'

    CbPwm_ConfigureClock((tPwmOutput) 5, (tClock) imperix_ctrl_P.clk_id_Value, 1);
    CbPwm_ConfigureOutputMode((tPwmOutput) 5, (tPwmOutMode) 2, 1);
    CbPwm_ConfigureCarrier((tPwmOutput) 5, (tPwmCarrier) 0, 1);
    CbPwm_ConfigureUpdateRate((tPwmOutput) 5, (tPwmRate) 0, 1);
    CbPwm_SetPhase((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureDutyCycleAsRealTime((tPwmOutput) 5, 1);
    CbPwm_SetDutyCycle((tPwmOutput) 5, 0.0F, 1);
    CbPwm_ConfigureActivateAsRealTime((tPwmOutput) 5, 1);
    CbPwm_Activate((tPwmOutput) 5, 1);

    // End of Start for SubSystem: '<S611>/generation'
    imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_f = POS_ZCSIG;
    imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE_i = POS_ZCSIG;
    imperix_ctrl_PrevZCX.SampleandHold_Trig_ZCE = POS_ZCSIG;

    // InitializeConditions for UnitDelay: '<S63>/Unit Delay'
    imperix_ctrl_DW.UnitDelay_DSTATE[0] =
      imperix_ctrl_P.UnitDelay_InitialCondition[0];
    imperix_ctrl_DW.UnitDelay_DSTATE[1] =
      imperix_ctrl_P.UnitDelay_InitialCondition[1];

    // InitializeConditions for UnitDelay: '<S21>/Unit Delay1'
    imperix_ctrl_DW.UnitDelay1_DSTATE = imperix_ctrl_P.M2C.Vc_ref;

    // InitializeConditions for RateTransition generated from: '<S1>/Sum6'
    imperix_ctrl_DW.TmpRTBAtSum6Inport1_Buffer0 =
      imperix_ctrl_P.TmpRTBAtSum6Inport1_InitialCond;

    // InitializeConditions for DiscreteIntegrator: '<S165>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE =
      imperix_ctrl_P.PIDController1_InitialCondition;

    // InitializeConditions for DiscreteIntegrator: '<S341>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_d =
      imperix_ctrl_P.SpeedPI_InitialConditionForInte;

    // InitializeConditions for DiscreteIntegrator: '<S289>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_i =
      imperix_ctrl_P.FluxPI_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S411>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_j =
      imperix_ctrl_P.MCCPId_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S463>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_e =
      imperix_ctrl_P.MCCPIq_InitialConditionForInteg;

    // InitializeConditions for DiscreteIntegrator: '<S17>/Discrete-Time Integrator1' 
    imperix_ctrl_DW.DiscreteTimeIntegrator1_DSTATE =
      imperix_ctrl_P.DiscreteTimeIntegrator1_IC;

    // InitializeConditions for DiscreteIntegrator: '<S534>/Integrator'
    imperix_ctrl_DW.Integrator_DSTATE_p =
      imperix_ctrl_P.PCCPI_InitialConditionForIntegr;

    // SystemInitialize for MATLAB Function: '<S1>/Kalman Filter'
    imperix_ctrl_DW.Inx[1] = 0.0;
    imperix_ctrl_DW.Inx[2] = 0.0;
    imperix_ctrl_DW.Inx[3] = 0.0;
    imperix_ctrl_DW.Inx[0] = 1.0;

    // SystemInitialize for Triggered SubSystem: '<S62>/Sample and Hold'
    // SystemInitialize for Triggered SubSystem: '<S61>/Sample and Hold'
    for (i = 0; i < 6; i++) {
      // SystemInitialize for SignalConversion generated from: '<S371>/In' incorporates:
      //   Outport: '<S371>/ '

      imperix_ctrl_B.In_c[i] = imperix_ctrl_P._Y0;

      // SystemInitialize for SignalConversion generated from: '<S372>/In' incorporates:
      //   Outport: '<S372>/ '

      imperix_ctrl_B.In_h[i] = imperix_ctrl_P._Y0_o;
    }

    // End of SystemInitialize for SubSystem: '<S61>/Sample and Hold'
    // End of SystemInitialize for SubSystem: '<S62>/Sample and Hold'

    // SystemInitialize for Enabled SubSystem: '<S376>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S483>/Fcn' incorporates:
    //   Outport: '<S483>/alpha_beta'

    imperix_ctrl_B.Fcn_d = imperix_ctrl_P.alpha_beta_Y0[0];

    // SystemInitialize for Fcn: '<S483>/Fcn1' incorporates:
    //   Outport: '<S483>/alpha_beta'

    imperix_ctrl_B.Fcn1_d = imperix_ctrl_P.alpha_beta_Y0[1];

    // End of SystemInitialize for SubSystem: '<S376>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S376>/Subsystem1'
    // SystemInitialize for Fcn: '<S484>/Fcn' incorporates:
    //   Outport: '<S484>/alpha_beta'

    imperix_ctrl_B.Fcn_b = imperix_ctrl_P.alpha_beta_Y0_n[0];

    // SystemInitialize for Fcn: '<S484>/Fcn1' incorporates:
    //   Outport: '<S484>/alpha_beta'

    imperix_ctrl_B.Fcn1_i = imperix_ctrl_P.alpha_beta_Y0_n[1];

    // End of SystemInitialize for SubSystem: '<S376>/Subsystem1'

    // SystemInitialize for Enabled SubSystem: '<S552>/Subsystem - pi//2 delay'
    // SystemInitialize for Fcn: '<S556>/Fcn' incorporates:
    //   Outport: '<S556>/dq'

    imperix_ctrl_B.Fcn_c = imperix_ctrl_P.dq_Y0[0];

    // SystemInitialize for Fcn: '<S556>/Fcn1' incorporates:
    //   Outport: '<S556>/dq'

    imperix_ctrl_B.Fcn1_p = imperix_ctrl_P.dq_Y0[1];

    // End of SystemInitialize for SubSystem: '<S552>/Subsystem - pi//2 delay'

    // SystemInitialize for Enabled SubSystem: '<S552>/Subsystem1'
    // SystemInitialize for Fcn: '<S557>/Fcn' incorporates:
    //   Outport: '<S557>/dq'

    imperix_ctrl_B.Fcn = imperix_ctrl_P.dq_Y0_f[0];

    // SystemInitialize for Fcn: '<S557>/Fcn1' incorporates:
    //   Outport: '<S557>/dq'

    imperix_ctrl_B.Fcn1 = imperix_ctrl_P.dq_Y0_f[1];

    // End of SystemInitialize for SubSystem: '<S552>/Subsystem1'

    // SystemInitialize for Triggered SubSystem: '<S74>/Sample and Hold'
    // SystemInitialize for SignalConversion generated from: '<S600>/In' incorporates:
    //   Outport: '<S600>/ '

    imperix_ctrl_B.In = imperix_ctrl_P._Y0_i;

    // End of SystemInitialize for SubSystem: '<S74>/Sample and Hold'
    imperix__MovingAverage_Init(&imperix_ctrl_DW.MovingAverage_p);
    imperix__MovingAverage_Init(&imperix_ctrl_DW.MovingAverage);

    // InitializeConditions for MATLABSystem: '<S74>/Moving Average'
    imperix_ctrl_DW.obj.pCumSum = 0.0;
    memset(&imperix_ctrl_DW.obj.pCumSumRev[0], 0, 99U * sizeof(real_T));
    imperix_ctrl_DW.obj.pCumRevIndex = 1.0;
    imperix_ctrl_DW.obj.pModValueRev = 0.0;
  }
}

// Model terminate function
void imperix_ctrl_terminate(void)
{
  imperix__MovingAverage_Term(&imperix_ctrl_DW.MovingAverage_p);
  imperix__MovingAverage_Term(&imperix_ctrl_DW.MovingAverage);

  // Terminate for MATLABSystem: '<S74>/Moving Average'
  if (!imperix_ctrl_DW.obj.matlabCodegenIsDeleted) {
    imperix_ctrl_DW.obj.matlabCodegenIsDeleted = true;
    if ((imperix_ctrl_DW.obj.isInitialized == 1) &&
        imperix_ctrl_DW.obj.isSetupComplete) {
      imperix_ctrl_DW.obj.NumChannels = -1;
      imperix_ctrl_DW.obj.FrameLength = -1;
    }
  }

  // End of Terminate for MATLABSystem: '<S74>/Moving Average'
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
